#include "recomp.h"

/* FUN_10006a50 @ 0x10c96a50 (10 bytes, 5 insns) */
void f_10c96a50(void) {
  FTRACE(0x10c96a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96a51 mov ebp, esp */
  EBP = (ESP);
  /* 10c96a53 mov eax, dword ptr [0x10cbcc94] */
  EAX = (r32((uint32_t)(0x10cbcc94)));
  /* 10c96a58 pop ebp */
  EBP = (pop32());
  /* 10c96a59 ret  */
  ESPCHK(0x10c96a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a60 @ 0x10c96a60 (31 bytes, 11 insns) */
void f_10c96a60(void) {
  FTRACE(0x10c96a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96a61 mov ebp, esp */
  EBP = (ESP);
  /* 10c96a63 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96a6a jbe 0x10c96a70 */
  if ((C.cf||C.zf)) goto L_10c96a70;
  /* 10c96a6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c96a6e jmp 0x10c96a7d */
  goto L_10c96a7d;
L_10c96a70:;
  /* 10c96a70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96a73 mov dword ptr [0x10cbcc94], eax */
  w32((uint32_t)(0x10cbcc94), (EAX));
  /* 10c96a78 mov eax, 1 */
  EAX = (0x1u);
L_10c96a7d:;
  /* 10c96a7d pop ebp */
  EBP = (pop32());
  /* 10c96a7e ret  */
  ESPCHK(0x10c96a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a80 @ 0x10c96a80 (89 bytes, 20 insns) */
void f_10c96a80(void) {
  FTRACE(0x10c96a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96a81 mov ebp, esp */
  EBP = (ESP);
  /* 10c96a83 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10c96a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c96a8a mov eax, dword ptr [0x10cbfdac] */
  EAX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c96a8f push eax */
  push32((uint32_t)(EAX));
  /* 10c96a90 call dword ptr [0x10cc02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02d8))), 0x10c96a96u);
  /* 10c96a96 mov dword ptr [0x10cbfda8], eax */
  w32((uint32_t)(0x10cbfda8), (EAX));
  /* 10c96a9b cmp dword ptr [0x10cbfda8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbfda8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96aa2 jne 0x10c96aa8 */
  if (!C.zf) goto L_10c96aa8;
  /* 10c96aa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c96aa6 jmp 0x10c96ad7 */
  goto L_10c96ad7;
L_10c96aa8:;
  /* 10c96aa8 mov ecx, dword ptr [0x10cbfda8] */
  ECX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c96aae mov dword ptr [0x10cbfd9c], ecx */
  w32((uint32_t)(0x10cbfd9c), (ECX));
  /* 10c96ab4 mov dword ptr [0x10cbfda0], 0 */
  w32((uint32_t)(0x10cbfda0), (0x0u));
  /* 10c96abe mov dword ptr [0x10cbfda4], 0 */
  w32((uint32_t)(0x10cbfda4), (0x0u));
  /* 10c96ac8 mov dword ptr [0x10cbfd88], 0x10 */
  w32((uint32_t)(0x10cbfd88), (0x10u));
  /* 10c96ad2 mov eax, 1 */
  EAX = (0x1u);
L_10c96ad7:;
  /* 10c96ad7 pop ebp */
  EBP = (pop32());
  /* 10c96ad8 ret  */
  ESPCHK(0x10c96a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ae0 @ 0x10c96ae0 (85 bytes, 29 insns) */
void f_10c96ae0(void) {
  FTRACE(0x10c96ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10c96ae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96ae6 mov eax, dword ptr [0x10cbfda4] */
  EAX = (r32((uint32_t)(0x10cbfda4)));
  /* 10c96aeb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c96aee mov ecx, dword ptr [0x10cbfda8] */
  ECX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c96af4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96af6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c96af9 mov edx, dword ptr [0x10cbfda8] */
  EDX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c96aff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c96b02:;
  /* 10c96b02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96b05 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96b08 jae 0x10c96b2f */
  if (!C.cf) goto L_10c96b2f;
  /* 10c96b0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96b0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96b10 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96b13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c96b16 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96b1d jae 0x10c96b24 */
  if (!C.cf) goto L_10c96b24;
  /* 10c96b1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96b22 jmp 0x10c96b31 */
  goto L_10c96b31;
L_10c96b24:;
  /* 10c96b24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96b27 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96b2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c96b2d jmp 0x10c96b02 */
  goto L_10c96b02;
L_10c96b2f:;
  /* 10c96b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c96b31:;
  /* 10c96b31 mov esp, ebp */
  ESP = (EBP);
  /* 10c96b33 pop ebp */
  EBP = (pop32());
  /* 10c96b34 ret  */
  ESPCHK(0x10c96ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b40 @ 0x10c96b40 (95 bytes, 33 insns) */
void f_10c96b40(void) {
  FTRACE(0x10c96b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96b41 mov ebp, esp */
  EBP = (ESP);
  /* 10c96b43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96b49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96b4c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96b4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c96b52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96b55 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10c96b58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c96b5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c96b60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96b63 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c96b65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96b68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c96b6b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c96b6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c96b6f jne 0x10c96b91 */
  if (!C.zf) goto L_10c96b91;
  /* 10c96b71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96b74 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10c96b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c96b79 jne 0x10c96b91 */
  if (!C.zf) goto L_10c96b91;
  /* 10c96b7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96b7e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c96b84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c96b86 je 0x10c96b91 */
  if (C.zf) goto L_10c96b91;
  /* 10c96b88 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10c96b8f jmp 0x10c96b98 */
  goto L_10c96b98;
L_10c96b91:;
  /* 10c96b91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10c96b98:;
  /* 10c96b98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c96b9b mov esp, ebp */
  ESP = (EBP);
  /* 10c96b9d pop ebp */
  EBP = (pop32());
  /* 10c96b9e ret  */
  ESPCHK(0x10c96b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x10c96ba0 (1485 bytes, 453 insns) */
void f_10c96ba0(void) {
  FTRACE(0x10c96ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10c96ba3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96ba9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c96bac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10c96baf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96bb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96bb5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96bb8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c96bbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c96bbe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10c96bc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c96bc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96bc7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c96bcd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96bd0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10c96bd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c96bda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96bdd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96be0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c96be3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96be6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c96be8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96beb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10c96bee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96bf1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96bf4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10c96bf7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c96bfa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c96bfc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c96bff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96c02 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10c96c05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c96c08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c96c0b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c96c0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c96c10 jne 0x10c96d38 */
  if (!C.zf) goto L_10c96d38;
  /* 10c96c16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c96c19 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c96c1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96c1f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c96c22 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96c26 jbe 0x10c96c2f */
  if ((C.cf||C.zf)) goto L_10c96c2f;
  /* 10c96c28 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10c96c2f:;
  /* 10c96c2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c96c32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c96c35 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c96c38 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96c3b jne 0x10c96d11 */
  if (!C.zf) goto L_10c96d11;
  /* 10c96c41 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96c45 jae 0x10c96ca6 */
  if (!C.cf) goto L_10c96ca6;
  /* 10c96c47 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c96c4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c96c4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c96c51 not eax */
  EAX = (~(EAX));
  /* 10c96c53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96c56 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96c59 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c96c5d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c96c5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96c62 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96c65 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c96c69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96c6c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96c6f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c96c72 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c96c75 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96c78 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96c7b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c96c7e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96c81 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96c84 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c96c88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c96c8a jne 0x10c96ca4 */
  if (!C.zf) goto L_10c96ca4;
  /* 10c96c8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c96c91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c96c94 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c96c96 not eax */
  EAX = (~(EAX));
  /* 10c96c98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96c9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c96c9d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c96c9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96ca2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c96ca4:;
  /* 10c96ca4 jmp 0x10c96d11 */
  goto L_10c96d11;
L_10c96ca6:;
  /* 10c96ca6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c96ca9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96cac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c96cb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c96cb3 not edx */
  EDX = (~(EDX));
  /* 10c96cb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96cb8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96cbb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c96cc2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c96cc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96cc7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96cca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10c96cd1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96cd4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96cd7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c96cda sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c96cdd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96ce0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96ce3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c96ce6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96ce9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96cec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c96cf0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c96cf2 jne 0x10c96d11 */
  if (!C.zf) goto L_10c96d11;
  /* 10c96cf4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c96cf7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96cfa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c96cff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c96d01 not edx */
  EDX = (~(EDX));
  /* 10c96d03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96d06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c96d09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c96d0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96d0e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c96d11:;
  /* 10c96d11 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c96d14 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c96d17 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c96d1a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c96d1d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c96d20 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c96d23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c96d26 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c96d29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c96d2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c96d2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c96d32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96d35 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10c96d38:;
  /* 10c96d38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c96d3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c96d3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96d41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c96d44 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96d48 jbe 0x10c96d51 */
  if ((C.cf||C.zf)) goto L_10c96d51;
  /* 10c96d4a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10c96d51:;
  /* 10c96d51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c96d54 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c96d57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c96d59 jne 0x10c96eb5 */
  if (!C.zf) goto L_10c96eb5;
  /* 10c96d5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96d62 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96d65 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10c96d68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c96d6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c96d6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96d71 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10c96d74 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96d78 jbe 0x10c96d81 */
  if ((C.cf||C.zf)) goto L_10c96d81;
  /* 10c96d7a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10c96d81:;
  /* 10c96d81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c96d84 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96d87 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10c96d8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c96d8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c96d90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96d93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c96d96 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96d9a jbe 0x10c96da3 */
  if ((C.cf||C.zf)) goto L_10c96da3;
  /* 10c96d9c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10c96da3:;
  /* 10c96da3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c96da6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96da9 je 0x10c96eaf */
  if (C.zf) goto L_10c96eaf;
  /* 10c96daf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c96db2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c96db5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c96db8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96dbb jne 0x10c96e91 */
  if (!C.zf) goto L_10c96e91;
  /* 10c96dc1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96dc5 jae 0x10c96e26 */
  if (!C.cf) goto L_10c96e26;
  /* 10c96dc7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c96dcc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c96dcf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c96dd1 not edx */
  EDX = (~(EDX));
  /* 10c96dd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96dd6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96dd9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c96ddd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c96ddf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96de2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96de5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c96de9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96dec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96def mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c96df2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c96df5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96df8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96dfb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c96dfe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96e01 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96e04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c96e08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c96e0a jne 0x10c96e24 */
  if (!C.zf) goto L_10c96e24;
  /* 10c96e0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c96e11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c96e14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c96e16 not edx */
  EDX = (~(EDX));
  /* 10c96e18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96e1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c96e1d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c96e1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96e22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c96e24:;
  /* 10c96e24 jmp 0x10c96e91 */
  goto L_10c96e91;
L_10c96e26:;
  /* 10c96e26 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c96e29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96e2c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c96e31 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c96e33 not eax */
  EAX = (~(EAX));
  /* 10c96e35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96e38 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96e3b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c96e42 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c96e44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96e47 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96e4a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10c96e51 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96e54 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96e57 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c96e5a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c96e5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96e60 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96e63 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c96e66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96e69 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96e6c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c96e70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c96e72 jne 0x10c96e91 */
  if (!C.zf) goto L_10c96e91;
  /* 10c96e74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c96e77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96e7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c96e7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c96e81 not eax */
  EAX = (~(EAX));
  /* 10c96e83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96e86 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c96e89 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c96e8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96e8e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c96e91:;
  /* 10c96e91 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c96e94 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c96e97 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c96e9a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c96e9d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c96ea0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c96ea3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c96ea6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c96ea9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c96eac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10c96eaf:;
  /* 10c96eaf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c96eb2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10c96eb5:;
  /* 10c96eb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c96eb8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c96ebb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c96ebd jne 0x10c96ecb */
  if (!C.zf) goto L_10c96ecb;
  /* 10c96ebf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c96ec2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96ec5 je 0x10c96fdb */
  if (C.zf) goto L_10c96fdb;
L_10c96ecb:;
  /* 10c96ecb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c96ece mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96ed1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10c96ed4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c96ed7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96eda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c96edd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c96ee0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c96ee3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96ee6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c96ee9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10c96eec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c96eef mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96ef2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c96ef5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96ef8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c96efb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96efe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c96f01 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96f04 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96f07 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c96f0a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96f0d jne 0x10c96fdb */
  if (!C.zf) goto L_10c96fdb;
  /* 10c96f13 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96f17 jae 0x10c96f74 */
  if (!C.cf) goto L_10c96f74;
  /* 10c96f19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96f1c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96f1f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c96f23 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96f26 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96f29 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c96f2c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c96f2f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96f32 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96f35 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c96f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c96f3a jne 0x10c96f52 */
  if (!C.zf) goto L_10c96f52;
  /* 10c96f3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c96f41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c96f44 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c96f46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96f49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c96f4b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c96f4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96f50 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c96f52:;
  /* 10c96f52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c96f57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c96f5a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c96f5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96f5f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96f62 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c96f66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c96f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96f6b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96f6e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c96f72 jmp 0x10c96fdb */
  goto L_10c96fdb;
L_10c96f74:;
  /* 10c96f74 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96f77 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96f7a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c96f7e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96f81 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96f84 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c96f87 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c96f8a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96f8d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96f90 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c96f93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c96f95 jne 0x10c96fb2 */
  if (!C.zf) goto L_10c96fb2;
  /* 10c96f97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c96f9a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96f9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c96fa2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c96fa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96fa7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c96faa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c96fac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96faf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c96fb2:;
  /* 10c96fb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c96fb5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96fb8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c96fbd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c96fbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96fc2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96fc5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c96fcc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c96fce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96fd1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c96fd4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10c96fdb:;
  /* 10c96fdb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96fde mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c96fe1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c96fe3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c96fe6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96fe9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c96fec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10c96fef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96ff2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c96ff4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96ff7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96ffa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c96ffc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96fff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97002 jne 0x10c97169 */
  if (!C.zf) goto L_10c97169;
  /* 10c97008 cmp dword ptr [0x10cbfda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbfda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9700f je 0x10c97158 */
  if (C.zf) goto L_10c97158;
  /* 10c97015 mov eax, dword ptr [0x10cbfd98] */
  EAX = (r32((uint32_t)(0x10cbfd98)));
  /* 10c9701a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10c9701d mov ecx, dword ptr [0x10cbfda0] */
  ECX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c97023 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c97026 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97028 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c9702b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10c97030 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c97035 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97038 push eax */
  push32((uint32_t)(EAX));
  /* 10c97039 call dword ptr [0x10cc02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02bc))), 0x10c9703fu);
  /* 10c9703f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97044 mov ecx, dword ptr [0x10cbfd98] */
  ECX = (r32((uint32_t)(0x10cbfd98)));
  /* 10c9704a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c9704c mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c97051 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c97054 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97056 mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c9705c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c9705f mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c97064 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c97067 mov edx, dword ptr [0x10cbfd98] */
  EDX = (r32((uint32_t)(0x10cbfd98)));
  /* 10c9706d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10c97078 mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c9707d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c97080 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10c97083 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c97086 mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c9708b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9708e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10c97091 mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c97097 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c9709a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10c9709e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c970a0 jne 0x10c970b6 */
  if (!C.zf) goto L_10c970b6;
  /* 10c970a2 mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c970a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c970ab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10c970ad mov ecx, dword ptr [0x10cbfda0] */
  ECX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c970b3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10c970b6:;
  /* 10c970b6 mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c970bc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c970c0 jne 0x10c97158 */
  if (!C.zf) goto L_10c97158;
  /* 10c970c6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c970cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c970cd mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c970d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c970d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c970d6 call dword ptr [0x10cc02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02bc))), 0x10c970dcu);
  /* 10c970dc mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c970e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c970e5 push eax */
  push32((uint32_t)(EAX));
  /* 10c970e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c970e8 mov ecx, dword ptr [0x10cbfdac] */
  ECX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c970ee push ecx */
  push32((uint32_t)(ECX));
  /* 10c970ef call dword ptr [0x10cc02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02b8))), 0x10c970f5u);
  /* 10c970f5 mov edx, dword ptr [0x10cbfda4] */
  EDX = (r32((uint32_t)(0x10cbfda4)));
  /* 10c970fb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c970fe mov eax, dword ptr [0x10cbfda8] */
  EAX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c97103 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97105 mov ecx, dword ptr [0x10cbfda0] */
  ECX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c9710b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9710e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97110 push eax */
  push32((uint32_t)(EAX));
  /* 10c97111 mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c97117 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9711a push edx */
  push32((uint32_t)(EDX));
  /* 10c9711b mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c97120 push eax */
  push32((uint32_t)(EAX));
  /* 10c97121 call 0x10c9a6d0 */
  push32(0x10c97126u); f_10c9a6d0();
  /* 10c97126 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97129 mov ecx, dword ptr [0x10cbfda4] */
  ECX = (r32((uint32_t)(0x10cbfda4)));
  /* 10c9712f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97132 mov dword ptr [0x10cbfda4], ecx */
  w32((uint32_t)(0x10cbfda4), (ECX));
  /* 10c97138 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9713b cmp edx, dword ptr [0x10cbfda0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cbfda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97141 jbe 0x10c9714c */
  if ((C.cf||C.zf)) goto L_10c9714c;
  /* 10c97143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97146 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97149 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c9714c:;
  /* 10c9714c mov ecx, dword ptr [0x10cbfda8] */
  ECX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c97152 mov dword ptr [0x10cbfd9c], ecx */
  w32((uint32_t)(0x10cbfd9c), (ECX));
L_10c97158:;
  /* 10c97158 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9715b mov dword ptr [0x10cbfda0], edx */
  w32((uint32_t)(0x10cbfda0), (EDX));
  /* 10c97161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97164 mov dword ptr [0x10cbfd98], eax */
  w32((uint32_t)(0x10cbfd98), (EAX));
L_10c97169:;
  /* 10c97169 mov esp, ebp */
  ESP = (EBP);
  /* 10c9716b pop ebp */
  EBP = (pop32());
  /* 10c9716c ret  */
  ESPCHK(0x10c96ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007170 @ 0x10c97170 (1334 bytes, 427 insns) */
void f_10c97170(void) {
  FTRACE(0x10c97170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c97170 push ebp */
  push32((uint32_t)(EBP));
  /* 10c97171 mov ebp, esp */
  EBP = (ESP);
  /* 10c97173 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97176 push esi */
  push32((uint32_t)(ESI));
  /* 10c97177 mov eax, dword ptr [0x10cbfda4] */
  EAX = (r32((uint32_t)(0x10cbfda4)));
  /* 10c9717c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9717f mov ecx, dword ptr [0x10cbfda8] */
  ECX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c97185 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97187 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c9718a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9718d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97190 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10c97193 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c97196 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97199 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c9719c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9719f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c971a2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c971a6 jge 0x10c971bc */
  if ((C.sf==C.of)) goto L_10c971bc;
  /* 10c971a8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c971ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c971ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c971b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c971b3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10c971ba jmp 0x10c971d1 */
  goto L_10c971d1;
L_10c971bc:;
  /* 10c971bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c971c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c971c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c971c9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c971cc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c971ce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10c971d1:;
  /* 10c971d1 mov ecx, dword ptr [0x10cbfd9c] */
  ECX = (r32((uint32_t)(0x10cbfd9c)));
  /* 10c971d7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10c971da:;
  /* 10c971da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c971dd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c971e0 jae 0x10c97206 */
  if (!C.cf) goto L_10c97206;
  /* 10c971e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c971e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c971e8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10c971ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c971ed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c971f0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10c971f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c971f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c971f7 je 0x10c971fb */
  if (C.zf) goto L_10c971fb;
  /* 10c971f9 jmp 0x10c97206 */
  goto L_10c97206;
L_10c971fb:;
  /* 10c971fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c971fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97201 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c97204 jmp 0x10c971da */
  goto L_10c971da;
L_10c97206:;
  /* 10c97206 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97209 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9720c jne 0x10c972ed */
  if (!C.zf) goto L_10c972ed;
  /* 10c97212 mov eax, dword ptr [0x10cbfda8] */
  EAX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c97217 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10c9721a:;
  /* 10c9721a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9721d cmp ecx, dword ptr [0x10cbfd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbfd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97223 jae 0x10c97249 */
  if (!C.cf) goto L_10c97249;
  /* 10c97225 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97228 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9722b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10c9722d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97230 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c97233 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10c97236 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c97238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9723a je 0x10c9723e */
  if (C.zf) goto L_10c9723e;
  /* 10c9723c jmp 0x10c97249 */
  goto L_10c97249;
L_10c9723e:;
  /* 10c9723e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97241 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97244 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c97247 jmp 0x10c9721a */
  goto L_10c9721a;
L_10c97249:;
  /* 10c97249 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9724c cmp ecx, dword ptr [0x10cbfd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbfd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97252 jne 0x10c972ed */
  if (!C.zf) goto L_10c972ed;
L_10c97258:;
  /* 10c97258 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9725b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9725e jae 0x10c97276 */
  if (!C.cf) goto L_10c97276;
  /* 10c97260 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97263 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97267 je 0x10c9726b */
  if (C.zf) goto L_10c9726b;
  /* 10c97269 jmp 0x10c97276 */
  goto L_10c97276;
L_10c9726b:;
  /* 10c9726b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9726e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97271 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c97274 jmp 0x10c97258 */
  goto L_10c97258;
L_10c97276:;
  /* 10c97276 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97279 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9727c jne 0x10c972c7 */
  if (!C.zf) goto L_10c972c7;
  /* 10c9727e mov eax, dword ptr [0x10cbfda8] */
  EAX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c97283 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10c97286:;
  /* 10c97286 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97289 cmp ecx, dword ptr [0x10cbfd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbfd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9728f jae 0x10c972a7 */
  if (!C.cf) goto L_10c972a7;
  /* 10c97291 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97294 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97298 je 0x10c9729c */
  if (C.zf) goto L_10c9729c;
  /* 10c9729a jmp 0x10c972a7 */
  goto L_10c972a7;
L_10c9729c:;
  /* 10c9729c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9729f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c972a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c972a5 jmp 0x10c97286 */
  goto L_10c97286;
L_10c972a7:;
  /* 10c972a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c972aa cmp ecx, dword ptr [0x10cbfd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbfd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c972b0 jne 0x10c972c7 */
  if (!C.zf) goto L_10c972c7;
  /* 10c972b2 call 0x10c976b0 */
  push32(0x10c972b7u); f_10c976b0();
  /* 10c972b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c972ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c972be jne 0x10c972c7 */
  if (!C.zf) goto L_10c972c7;
  /* 10c972c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c972c2 jmp 0x10c976a1 */
  goto L_10c976a1;
L_10c972c7:;
  /* 10c972c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c972ca push edx */
  push32((uint32_t)(EDX));
  /* 10c972cb call 0x10c977c0 */
  push32(0x10c972d0u); f_10c977c0();
  /* 10c972d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c972d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c972d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c972d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c972db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c972de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c972e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c972e4 jne 0x10c972ed */
  if (!C.zf) goto L_10c972ed;
  /* 10c972e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c972e8 jmp 0x10c976a1 */
  goto L_10c976a1;
L_10c972ed:;
  /* 10c972ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c972f0 mov dword ptr [0x10cbfd9c], edx */
  w32((uint32_t)(0x10cbfd9c), (EDX));
  /* 10c972f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c972f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c972fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10c972ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97302 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c97304 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10c97307 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9730b je 0x10c97330 */
  if (C.zf) goto L_10c97330;
  /* 10c9730d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97310 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97313 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c97316 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10c9731a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9731d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97320 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10c97323 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10c9732a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10c9732c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9732e jne 0x10c97365 */
  if (!C.zf) goto L_10c97365;
L_10c97330:;
  /* 10c97330 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10c97337:;
  /* 10c97337 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9733a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c9733d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c97340 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10c97344 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97347 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c9734a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10c9734d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10c97354 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10c97356 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c97358 jne 0x10c97365 */
  if (!C.zf) goto L_10c97365;
  /* 10c9735a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9735d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97360 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10c97363 jmp 0x10c97337 */
  goto L_10c97337;
L_10c97365:;
  /* 10c97365 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97368 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9736e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97371 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10c97378 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9737b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c97382 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97385 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97388 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9738b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10c9738f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c97392 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97396 jne 0x10c973b2 */
  if (!C.zf) goto L_10c973b2;
  /* 10c97398 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10c9739f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c973a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c973a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c973a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10c973af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10c973b2:;
  /* 10c973b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c973b6 jl 0x10c973cb */
  if ((C.sf!=C.of)) goto L_10c973cb;
  /* 10c973b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c973bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c973bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c973c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c973c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c973c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c973c9 jmp 0x10c973b2 */
  goto L_10c973b2;
L_10c973cb:;
  /* 10c973cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c973ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c973d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10c973d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c973d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c973db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c973dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c973e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c973e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c973e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c973e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c973ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c973ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c973f3 jle 0x10c973fc */
  if ((C.zf||C.sf!=C.of)) goto L_10c973fc;
  /* 10c973f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10c973fc:;
  /* 10c973fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c973ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97402 je 0x10c97620 */
  if (C.zf) goto L_10c97620;
  /* 10c97408 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9740b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9740e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c97411 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97414 jne 0x10c974ea */
  if (!C.zf) goto L_10c974ea;
  /* 10c9741a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9741e jge 0x10c9747f */
  if ((C.sf==C.of)) goto L_10c9747f;
  /* 10c97420 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c97425 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97428 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c9742a not eax */
  EAX = (~(EAX));
  /* 10c9742c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9742f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97432 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c97436 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97438 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9743b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c9743e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c97442 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97445 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97448 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c9744b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c9744e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97451 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97454 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c97457 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c9745a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9745d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c97461 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c97463 jne 0x10c9747d */
  if (!C.zf) goto L_10c9747d;
  /* 10c97465 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c9746a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9746d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c9746f not eax */
  EAX = (~(EAX));
  /* 10c97471 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97474 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c97476 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c97478 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9747b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c9747d:;
  /* 10c9747d jmp 0x10c974ea */
  goto L_10c974ea;
L_10c9747f:;
  /* 10c9747f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97482 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97485 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c9748a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c9748c not edx */
  EDX = (~(EDX));
  /* 10c9748e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97491 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97494 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c9749b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9749d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c974a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c974a3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10c974aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c974ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c974b0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c974b3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c974b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c974b9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c974bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c974bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c974c2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c974c5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c974c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c974cb jne 0x10c974ea */
  if (!C.zf) goto L_10c974ea;
  /* 10c974cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c974d0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c974d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c974d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c974da not edx */
  EDX = (~(EDX));
  /* 10c974dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c974df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c974e2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c974e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c974e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c974ea:;
  /* 10c974ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c974ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c974f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c974f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c974f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c974f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c974fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c974ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97502 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c97505 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c97508 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9750c je 0x10c97620 */
  if (C.zf) goto L_10c97620;
  /* 10c97512 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97518 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10c9751b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9751e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97521 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c97524 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c97527 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c9752a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9752d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c97530 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c97533 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c97536 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97539 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c9753c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9753f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c97542 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97545 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c97548 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9754b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9754e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c97551 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97554 jne 0x10c97620 */
  if (!C.zf) goto L_10c97620;
  /* 10c9755a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9755e jge 0x10c975ba */
  if ((C.sf==C.of)) goto L_10c975ba;
  /* 10c97560 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97563 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97566 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c9756a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c9756d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97570 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c97573 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c97575 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97578 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9757b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c9757e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c97580 jne 0x10c97598 */
  if (!C.zf) goto L_10c97598;
  /* 10c97582 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c97587 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9758a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c9758c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9758f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c97591 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c97593 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97596 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c97598:;
  /* 10c97598 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c9759d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c975a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c975a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c975a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c975a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c975ac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c975ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c975b1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c975b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c975b8 jmp 0x10c97620 */
  goto L_10c97620;
L_10c975ba:;
  /* 10c975ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c975bd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c975c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c975c4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c975c7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c975ca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c975cd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c975cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c975d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c975d5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c975d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c975da jne 0x10c975f7 */
  if (!C.zf) goto L_10c975f7;
  /* 10c975dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c975df sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c975e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c975e7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c975e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c975ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c975ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c975f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c975f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c975f7:;
  /* 10c975f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c975fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c975fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97602 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97604 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97607 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c9760a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c97611 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c97613 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97616 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97619 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10c97620:;
  /* 10c97620 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97624 je 0x10c9763a */
  if (C.zf) goto L_10c9763a;
  /* 10c97626 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97629 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9762c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c9762e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97631 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97634 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c97637 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10c9763a:;
  /* 10c9763a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9763d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97640 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c97643 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97646 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97649 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9764c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c9764e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97651 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97654 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97657 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9765a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10c9765d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97660 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c97662 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97665 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c97667 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9766a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9766d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c9766f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c97671 jne 0x10c97693 */
  if (!C.zf) goto L_10c97693;
  /* 10c97673 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97676 cmp eax, dword ptr [0x10cbfda0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbfda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9767c jne 0x10c97693 */
  if (!C.zf) goto L_10c97693;
  /* 10c9767e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97681 cmp ecx, dword ptr [0x10cbfd98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbfd98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97687 jne 0x10c97693 */
  if (!C.zf) goto L_10c97693;
  /* 10c97689 mov dword ptr [0x10cbfda0], 0 */
  w32((uint32_t)(0x10cbfda0), (0x0u));
L_10c97693:;
  /* 10c97693 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c97696 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97699 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c9769b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9769e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10c976a1:;
  /* 10c976a1 pop esi */
  ESI = (pop32());
  /* 10c976a2 mov esp, ebp */
  ESP = (EBP);
  /* 10c976a4 pop ebp */
  EBP = (pop32());
  /* 10c976a5 ret  */
  ESPCHK(0x10c97170u, _esp0);
  ESP += 4; return;
}

/* FUN_100076b0 @ 0x10c976b0 (271 bytes, 78 insns) */
void f_10c976b0(void) {
  FTRACE(0x10c976b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c976b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c976b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c976b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c976b4 mov eax, dword ptr [0x10cbfda4] */
  EAX = (r32((uint32_t)(0x10cbfda4)));
  /* 10c976b9 cmp eax, dword ptr [0x10cbfd88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbfd88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c976bf jne 0x10c9770b */
  if (!C.zf) goto L_10c9770b;
  /* 10c976c1 mov ecx, dword ptr [0x10cbfd88] */
  ECX = (r32((uint32_t)(0x10cbfd88)));
  /* 10c976c7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c976ca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c976cd push ecx */
  push32((uint32_t)(ECX));
  /* 10c976ce mov edx, dword ptr [0x10cbfda8] */
  EDX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c976d4 push edx */
  push32((uint32_t)(EDX));
  /* 10c976d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c976d7 mov eax, dword ptr [0x10cbfdac] */
  EAX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c976dc push eax */
  push32((uint32_t)(EAX));
  /* 10c976dd call dword ptr [0x10cc02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02dc))), 0x10c976e3u);
  /* 10c976e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c976e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c976ea jne 0x10c976f3 */
  if (!C.zf) goto L_10c976f3;
  /* 10c976ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c976ee jmp 0x10c977bb */
  goto L_10c977bb;
L_10c976f3:;
  /* 10c976f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c976f6 mov dword ptr [0x10cbfda8], ecx */
  w32((uint32_t)(0x10cbfda8), (ECX));
  /* 10c976fc mov edx, dword ptr [0x10cbfd88] */
  EDX = (r32((uint32_t)(0x10cbfd88)));
  /* 10c97702 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97705 mov dword ptr [0x10cbfd88], edx */
  w32((uint32_t)(0x10cbfd88), (EDX));
L_10c9770b:;
  /* 10c9770b mov eax, dword ptr [0x10cbfda4] */
  EAX = (r32((uint32_t)(0x10cbfda4)));
  /* 10c97710 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c97713 mov ecx, dword ptr [0x10cbfda8] */
  ECX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c97719 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9771b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c9771e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10c97723 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c97725 mov edx, dword ptr [0x10cbfdac] */
  EDX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c9772b push edx */
  push32((uint32_t)(EDX));
  /* 10c9772c call dword ptr [0x10cc02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02d8))), 0x10c97732u);
  /* 10c97732 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97735 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10c97738 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9773b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9773f jne 0x10c97745 */
  if (!C.zf) goto L_10c97745;
  /* 10c97741 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c97743 jmp 0x10c977bb */
  goto L_10c977bb;
L_10c97745:;
  /* 10c97745 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c97747 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10c9774c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10c97751 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c97753 call dword ptr [0x10cc02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02e0))), 0x10c97759u);
  /* 10c97759 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9775c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10c9775f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97762 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97766 jne 0x10c97782 */
  if (!C.zf) goto L_10c97782;
  /* 10c97768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9776b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9776e push ecx */
  push32((uint32_t)(ECX));
  /* 10c9776f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c97771 mov edx, dword ptr [0x10cbfdac] */
  EDX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c97777 push edx */
  push32((uint32_t)(EDX));
  /* 10c97778 call dword ptr [0x10cc02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02b8))), 0x10c9777eu);
  /* 10c9777e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c97780 jmp 0x10c977bb */
  goto L_10c977bb;
L_10c97782:;
  /* 10c97782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97785 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9778b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9778e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c97795 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97798 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10c9779f mov eax, dword ptr [0x10cbfda4] */
  EAX = (r32((uint32_t)(0x10cbfda4)));
  /* 10c977a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c977a7 mov dword ptr [0x10cbfda4], eax */
  w32((uint32_t)(0x10cbfda4), (EAX));
  /* 10c977ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c977af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c977b2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10c977b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c977bb:;
  /* 10c977bb mov esp, ebp */
  ESP = (EBP);
  /* 10c977bd pop ebp */
  EBP = (pop32());
  /* 10c977be ret  */
  ESPCHK(0x10c976b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077c0 @ 0x10c977c0 (494 bytes, 149 insns) */
void f_10c977c0(void) {
  FTRACE(0x10c977c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c977c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c977c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c977c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c977c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c977c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c977cc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c977cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c977d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c977d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c977d8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10c977df:;
  /* 10c977df cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c977e3 jl 0x10c977f8 */
  if ((C.sf!=C.of)) goto L_10c977f8;
  /* 10c977e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c977e8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c977ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c977ed mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c977f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c977f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c977f6 jmp 0x10c977df */
  goto L_10c977df;
L_10c977f8:;
  /* 10c977f8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c977fb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c97801 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97804 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10c9780b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c9780e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c97815 jmp 0x10c97820 */
  goto L_10c97820;
L_10c97817:;
  /* 10c97817 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9781a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9781d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10c97820:;
  /* 10c97820 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97824 jge 0x10c97846 */
  if ((C.sf==C.of)) goto L_10c97846;
  /* 10c97826 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97829 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9782c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10c9782f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c97832 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97835 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97838 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c9783b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9783e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97841 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c97844 jmp 0x10c97817 */
  goto L_10c97817;
L_10c97846:;
  /* 10c97846 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97849 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10c9784c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9784f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c97852 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97854 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c97857 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c97859 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c9785e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c97863 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97866 push edx */
  push32((uint32_t)(EDX));
  /* 10c97867 call dword ptr [0x10cc02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02e0))), 0x10c9786du);
  /* 10c9786d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9786f jne 0x10c97879 */
  if (!C.zf) goto L_10c97879;
  /* 10c97871 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c97874 jmp 0x10c979aa */
  goto L_10c979aa;
L_10c97879:;
  /* 10c97879 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9787c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97881 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c97884 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97887 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c9788a jmp 0x10c97898 */
  goto L_10c97898;
L_10c9788c:;
  /* 10c9788c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9788f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97895 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c97898:;
  /* 10c97898 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9789b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9789e ja 0x10c978fd */
  if ((!C.cf&&!C.zf)) goto L_10c978fd;
  /* 10c978a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c978a3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10c978aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c978ad mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10c978b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c978ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c978bd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c978c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c978c3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10c978c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c978cc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c978d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c978d5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c978d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c978db sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c978e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c978e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c978e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c978ea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c978ef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c978f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c978f5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10c978fb jmp 0x10c9788c */
  goto L_10c9788c;
L_10c978fd:;
  /* 10c978fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c97900 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97906 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c97909 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9790c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9790f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97912 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c97915 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97918 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c9791b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c9791e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97921 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97924 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c97927 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9792a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9792d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97930 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10c97933 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97936 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c97939 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c9793c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9793f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97942 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c97945 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97948 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9794b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10c97953 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97956 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97959 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10c97964 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97967 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10c9796b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9796e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10c97971 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c97974 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97977 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10c9797a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9797c jne 0x10c9798d */
  if (!C.zf) goto L_10c9798d;
  /* 10c9797e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97981 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c97984 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c97987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9798a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c9798d:;
  /* 10c9798d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97992 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97995 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97997 not edx */
  EDX = (~(EDX));
  /* 10c97999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9799c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c9799f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c979a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c979a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c979a7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10c979aa:;
  /* 10c979aa mov esp, ebp */
  ESP = (EBP);
  /* 10c979ac pop ebp */
  EBP = (pop32());
  /* 10c979ad ret  */
  ESPCHK(0x10c977c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079b0 @ 0x10c979b0 (1515 bytes, 489 insns) */
void f_10c979b0(void) {
  FTRACE(0x10c979b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c979b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c979b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c979b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c979b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c979b9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c979bc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10c979be mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c979c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c979c4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c979c7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10c979ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c979cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c979d0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c979d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c979d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c979d9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10c979dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c979df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c979e2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c979e8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c979eb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10c979f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c979f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c979f8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c979fb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c979fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97a01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c97a03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97a06 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c97a09 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97a0c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97a0f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10c97a12 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97a15 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c97a17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c97a1a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c97a1d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97a20 jle 0x10c97cd6 */
  if ((C.zf||C.sf!=C.of)) goto L_10c97cd6;
  /* 10c97a26 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97a29 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c97a2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c97a2e jne 0x10c97a3b */
  if (!C.zf) goto L_10c97a3b;
  /* 10c97a30 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97a33 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97a36 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97a39 jle 0x10c97a42 */
  if ((C.zf||C.sf!=C.of)) goto L_10c97a42;
L_10c97a3b:;
  /* 10c97a3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c97a3d jmp 0x10c97f97 */
  goto L_10c97f97;
L_10c97a42:;
  /* 10c97a42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97a45 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c97a48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97a4b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c97a4e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97a52 jbe 0x10c97a5b */
  if ((C.cf||C.zf)) goto L_10c97a5b;
  /* 10c97a54 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10c97a5b:;
  /* 10c97a5b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97a5e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97a61 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c97a64 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97a67 jne 0x10c97b3d */
  if (!C.zf) goto L_10c97b3d;
  /* 10c97a6d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97a71 jae 0x10c97ad2 */
  if (!C.cf) goto L_10c97ad2;
  /* 10c97a73 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97a78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97a7b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97a7d not edx */
  EDX = (~(EDX));
  /* 10c97a7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97a82 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97a85 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c97a89 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c97a8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97a8e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97a91 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c97a95 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97a98 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97a9b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c97a9e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c97aa1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97aa4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97aa7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c97aaa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97aad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97ab0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c97ab4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c97ab6 jne 0x10c97ad0 */
  if (!C.zf) goto L_10c97ad0;
  /* 10c97ab8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97abd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97ac0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97ac2 not edx */
  EDX = (~(EDX));
  /* 10c97ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97ac7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c97ac9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97acb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97ace mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c97ad0:;
  /* 10c97ad0 jmp 0x10c97b3d */
  goto L_10c97b3d;
L_10c97ad2:;
  /* 10c97ad2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97ad5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97ad8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c97add shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c97adf not eax */
  EAX = (~(EAX));
  /* 10c97ae1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97ae4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97ae7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c97aee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97af0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97af3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97af6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10c97afd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97b00 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97b03 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c97b06 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c97b09 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97b0c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97b0f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c97b12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97b15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97b18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c97b1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c97b1e jne 0x10c97b3d */
  if (!C.zf) goto L_10c97b3d;
  /* 10c97b20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97b23 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97b26 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c97b2b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c97b2d not eax */
  EAX = (~(EAX));
  /* 10c97b2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97b32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c97b35 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c97b37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97b3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c97b3d:;
  /* 10c97b3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97b40 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c97b43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97b46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c97b49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c97b4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97b4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c97b52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97b55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c97b58 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10c97b5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97b5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97b61 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97b64 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c97b67 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97b6b jle 0x10c97cb7 */
  if ((C.zf||C.sf!=C.of)) goto L_10c97cb7;
  /* 10c97b71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97b74 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97b77 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c97b7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97b7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c97b80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97b83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c97b86 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97b8a jbe 0x10c97b93 */
  if ((C.cf||C.zf)) goto L_10c97b93;
  /* 10c97b8c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10c97b93:;
  /* 10c97b93 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97b96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c97b99 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10c97b9c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c97b9f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97ba2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97ba5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c97ba8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c97bab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97bae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97bb1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10c97bb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97bb7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97bba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c97bbd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97bc0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c97bc3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97bc6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c97bc9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97bcc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97bcf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c97bd2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97bd5 jne 0x10c97ca3 */
  if (!C.zf) goto L_10c97ca3;
  /* 10c97bdb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97bdf jae 0x10c97c3c */
  if (!C.cf) goto L_10c97c3c;
  /* 10c97be1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97be4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97be7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c97beb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97bee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97bf1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c97bf4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c97bf7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97bfa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97bfd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c97c00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c97c02 jne 0x10c97c1a */
  if (!C.zf) goto L_10c97c1a;
  /* 10c97c04 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97c09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97c0c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97c0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97c11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c97c13 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97c15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97c18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c97c1a:;
  /* 10c97c1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c97c1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97c22 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c97c24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97c27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97c2a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c97c2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97c30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97c33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97c36 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c97c3a jmp 0x10c97ca3 */
  goto L_10c97ca3;
L_10c97c3c:;
  /* 10c97c3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97c3f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97c42 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c97c46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97c49 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97c4c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c97c4f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c97c52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97c55 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97c58 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c97c5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c97c5d jne 0x10c97c7a */
  if (!C.zf) goto L_10c97c7a;
  /* 10c97c5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97c62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97c65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97c6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97c6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97c6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c97c72 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97c74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97c77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c97c7a:;
  /* 10c97c7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97c7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97c80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c97c85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c97c87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97c8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97c8d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c97c94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97c96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97c99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97c9c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10c97ca3:;
  /* 10c97ca3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97ca6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97ca9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c97cab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97cae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97cb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97cb4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10c97cb7:;
  /* 10c97cb7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c97cba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97cbd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97cc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c97cc2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c97cc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97cc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97ccb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97cce mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10c97cd1 jmp 0x10c97f92 */
  goto L_10c97f92;
L_10c97cd6:;
  /* 10c97cd6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c97cd9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97cdc jge 0x10c97f92 */
  if ((C.sf==C.of)) goto L_10c97f92;
  /* 10c97ce2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c97ce5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97ce8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97ceb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c97ced mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c97cf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97cf3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97cf6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97cf9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10c97cfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97cff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97d02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c97d05 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97d08 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97d0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c97d0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97d11 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c97d14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97d17 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c97d1a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97d1e jbe 0x10c97d27 */
  if ((C.cf||C.zf)) goto L_10c97d27;
  /* 10c97d20 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10c97d27:;
  /* 10c97d27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97d2a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c97d2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c97d2f jne 0x10c97e70 */
  if (!C.zf) goto L_10c97e70;
  /* 10c97d35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c97d38 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c97d3b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97d3e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c97d41 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97d45 jbe 0x10c97d4e */
  if ((C.cf||C.zf)) goto L_10c97d4e;
  /* 10c97d47 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10c97d4e:;
  /* 10c97d4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97d51 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97d54 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c97d57 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97d5a jne 0x10c97e30 */
  if (!C.zf) goto L_10c97e30;
  /* 10c97d60 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97d64 jae 0x10c97dc5 */
  if (!C.cf) goto L_10c97dc5;
  /* 10c97d66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97d6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97d6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97d70 not edx */
  EDX = (~(EDX));
  /* 10c97d72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97d75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97d78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c97d7c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c97d7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97d81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97d84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c97d88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97d8b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97d8e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c97d91 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c97d94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97d97 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97d9a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c97d9d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97da0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97da3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c97da7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c97da9 jne 0x10c97dc3 */
  if (!C.zf) goto L_10c97dc3;
  /* 10c97dab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97db0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97db3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97db5 not edx */
  EDX = (~(EDX));
  /* 10c97db7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97dba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c97dbc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97dbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97dc1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c97dc3:;
  /* 10c97dc3 jmp 0x10c97e30 */
  goto L_10c97e30;
L_10c97dc5:;
  /* 10c97dc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97dc8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97dcb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c97dd0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c97dd2 not eax */
  EAX = (~(EAX));
  /* 10c97dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97dd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97dda mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c97de1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97de3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97de6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97de9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10c97df0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97df3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97df6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c97df9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c97dfc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97dff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97e02 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c97e05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97e08 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97e0b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c97e0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c97e11 jne 0x10c97e30 */
  if (!C.zf) goto L_10c97e30;
  /* 10c97e13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c97e16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97e19 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c97e1e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c97e20 not eax */
  EAX = (~(EAX));
  /* 10c97e22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97e25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c97e28 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c97e2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97e2d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c97e30:;
  /* 10c97e30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97e33 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c97e36 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97e39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c97e3c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c97e3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97e42 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c97e45 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c97e48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c97e4b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10c97e4e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97e51 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97e54 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c97e57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97e5a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c97e5d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97e60 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c97e63 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97e67 jbe 0x10c97e70 */
  if ((C.cf||C.zf)) goto L_10c97e70;
  /* 10c97e69 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10c97e70:;
  /* 10c97e70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c97e73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c97e76 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10c97e79 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c97e7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97e7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97e82 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c97e85 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c97e88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97e8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97e8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c97e91 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c97e94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97e97 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c97e9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97e9d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c97ea0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97ea3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c97ea6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97ea9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97eac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c97eaf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97eb2 jne 0x10c97f7e */
  if (!C.zf) goto L_10c97f7e;
  /* 10c97eb8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97ebc jae 0x10c97f18 */
  if (!C.cf) goto L_10c97f18;
  /* 10c97ebe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97ec1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97ec4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c97ec8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97ecb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97ece mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c97ed1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c97ed3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97ed6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97ed9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c97edc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c97ede jne 0x10c97ef6 */
  if (!C.zf) goto L_10c97ef6;
  /* 10c97ee0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c97ee5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c97ee8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c97eea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97eed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c97eef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c97ef1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97ef4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c97ef6:;
  /* 10c97ef6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97efb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c97efe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97f00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97f03 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97f06 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c97f0a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c97f0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97f0f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97f12 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c97f16 jmp 0x10c97f7e */
  goto L_10c97f7e;
L_10c97f18:;
  /* 10c97f18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97f1b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97f1e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c97f22 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97f25 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97f28 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c97f2b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c97f2d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97f30 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97f33 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c97f36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c97f38 jne 0x10c97f55 */
  if (!C.zf) goto L_10c97f55;
  /* 10c97f3a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c97f3d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97f40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c97f45 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c97f47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97f4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c97f4d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c97f4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c97f52 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c97f55:;
  /* 10c97f55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c97f58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c97f5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97f60 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97f62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97f65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97f68 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c97f6f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c97f71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97f74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c97f77 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10c97f7e:;
  /* 10c97f7e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97f81 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97f84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c97f86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c97f89 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97f8c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c97f8f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10c97f92:;
  /* 10c97f92 mov eax, 1 */
  EAX = (0x1u);
L_10c97f97:;
  /* 10c97f97 mov esp, ebp */
  ESP = (EBP);
  /* 10c97f99 pop ebp */
  EBP = (pop32());
  /* 10c97f9a ret  */
  ESPCHK(0x10c979b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x10c97fa0 (304 bytes, 79 insns) */
void f_10c97fa0(void) {
  FTRACE(0x10c97fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c97fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c97fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10c97fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c97fa4 cmp dword ptr [0x10cbfda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbfda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c97fab je 0x10c980cc */
  if (C.zf) goto L_10c980cc;
  /* 10c97fb1 mov eax, dword ptr [0x10cbfd98] */
  EAX = (r32((uint32_t)(0x10cbfd98)));
  /* 10c97fb6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10c97fb9 mov ecx, dword ptr [0x10cbfda0] */
  ECX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c97fbf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c97fc2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c97fc4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c97fc7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10c97fcc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c97fd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c97fd4 push eax */
  push32((uint32_t)(EAX));
  /* 10c97fd5 call dword ptr [0x10cc02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02bc))), 0x10c97fdbu);
  /* 10c97fdb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c97fe0 mov ecx, dword ptr [0x10cbfd98] */
  ECX = (r32((uint32_t)(0x10cbfd98)));
  /* 10c97fe6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c97fe8 mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c97fed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c97ff0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c97ff2 mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c97ff8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c97ffb mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c98000 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c98003 mov edx, dword ptr [0x10cbfd98] */
  EDX = (r32((uint32_t)(0x10cbfd98)));
  /* 10c98009 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10c98014 mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c98019 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9801c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10c9801f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c98022 mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c98027 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9802a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10c9802d mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c98033 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c98036 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10c9803a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9803c jne 0x10c98052 */
  if (!C.zf) goto L_10c98052;
  /* 10c9803e mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c98044 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c98047 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10c98049 mov ecx, dword ptr [0x10cbfda0] */
  ECX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c9804f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10c98052:;
  /* 10c98052 mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c98058 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9805c jne 0x10c980c2 */
  if (!C.zf) goto L_10c980c2;
  /* 10c9805e cmp dword ptr [0x10cbfda4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbfda4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98065 jle 0x10c980c2 */
  if ((C.zf||C.sf!=C.of)) goto L_10c980c2;
  /* 10c98067 mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c9806c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9806f push ecx */
  push32((uint32_t)(ECX));
  /* 10c98070 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c98072 mov edx, dword ptr [0x10cbfdac] */
  EDX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c98078 push edx */
  push32((uint32_t)(EDX));
  /* 10c98079 call dword ptr [0x10cc02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02b8))), 0x10c9807fu);
  /* 10c9807f mov eax, dword ptr [0x10cbfda4] */
  EAX = (r32((uint32_t)(0x10cbfda4)));
  /* 10c98084 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c98087 mov ecx, dword ptr [0x10cbfda8] */
  ECX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c9808d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9808f mov edx, dword ptr [0x10cbfda0] */
  EDX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c98095 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98098 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9809a push ecx */
  push32((uint32_t)(ECX));
  /* 10c9809b mov eax, dword ptr [0x10cbfda0] */
  EAX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c980a0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c980a3 push eax */
  push32((uint32_t)(EAX));
  /* 10c980a4 mov ecx, dword ptr [0x10cbfda0] */
  ECX = (r32((uint32_t)(0x10cbfda0)));
  /* 10c980aa push ecx */
  push32((uint32_t)(ECX));
  /* 10c980ab call 0x10c9a6d0 */
  push32(0x10c980b0u); f_10c9a6d0();
  /* 10c980b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c980b3 mov edx, dword ptr [0x10cbfda4] */
  EDX = (r32((uint32_t)(0x10cbfda4)));
  /* 10c980b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c980bc mov dword ptr [0x10cbfda4], edx */
  w32((uint32_t)(0x10cbfda4), (EDX));
L_10c980c2:;
  /* 10c980c2 mov dword ptr [0x10cbfda0], 0 */
  w32((uint32_t)(0x10cbfda0), (0x0u));
L_10c980cc:;
  /* 10c980cc mov esp, ebp */
  ESP = (EBP);
  /* 10c980ce pop ebp */
  EBP = (pop32());
  /* 10c980cf ret  */
  ESPCHK(0x10c97fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080d0 @ 0x10c980d0 (1565 bytes, 343 insns) */
void f_10c980d0(void) {
  FTRACE(0x10c980d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c980d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c980d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c980d3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c980d9 mov eax, dword ptr [0x10cbfda4] */
  EAX = (r32((uint32_t)(0x10cbfda4)));
  /* 10c980de imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c980e1 push eax */
  push32((uint32_t)(EAX));
  /* 10c980e2 mov ecx, dword ptr [0x10cbfda8] */
  ECX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c980e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c980e9 call dword ptr [0x10cc0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0290))), 0x10c980efu);
  /* 10c980ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c980f1 je 0x10c980fb */
  if (C.zf) goto L_10c980fb;
  /* 10c980f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c980f6 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c980fb:;
  /* 10c980fb mov edx, dword ptr [0x10cbfda8] */
  EDX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c98101 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10c98107 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10c98111 jmp 0x10c98122 */
  goto L_10c98122;
L_10c98113:;
  /* 10c98113 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10c98119 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9811c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10c98122:;
  /* 10c98122 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10c98128 cmp ecx, dword ptr [0x10cbfda4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbfda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9812e jge 0x10c986e7 */
  if ((C.sf==C.of)) goto L_10c986e7;
  /* 10c98134 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c9813a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c9813d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10c98143 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10c98148 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c9814e push ecx */
  push32((uint32_t)(ECX));
  /* 10c9814f call dword ptr [0x10cc0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0290))), 0x10c98155u);
  /* 10c98155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c98157 je 0x10c98163 */
  if (C.zf) goto L_10c98163;
  /* 10c98159 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10c9815e jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c98163:;
  /* 10c98163 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c98169 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c9816c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10c98172 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c98178 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9817e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c98181 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c98187 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c9818a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9818d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10c98197 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10c981a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c981a8 jmp 0x10c981b3 */
  goto L_10c981b3;
L_10c981aa:;
  /* 10c981aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c981ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c981b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c981b3:;
  /* 10c981b3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c981b7 jge 0x10c986ab */
  if ((C.sf==C.of)) goto L_10c986ab;
  /* 10c981bd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10c981c7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10c981d1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10c981db mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10c981e5 jmp 0x10c981f6 */
  goto L_10c981f6;
L_10c981e7:;
  /* 10c981e7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c981ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c981f0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10c981f6:;
  /* 10c981f6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c981fd jge 0x10c98212 */
  if ((C.sf==C.of)) goto L_10c98212;
  /* 10c981ff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c98205 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10c98210 jmp 0x10c981e7 */
  goto L_10c981e7;
L_10c98212:;
  /* 10c98212 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98216 jl 0x10c9864d */
  if ((C.sf!=C.of)) goto L_10c9864d;
  /* 10c9821c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c98221 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c98227 push ecx */
  push32((uint32_t)(ECX));
  /* 10c98228 call dword ptr [0x10cc0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0290))), 0x10c9822eu);
  /* 10c9822e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c98230 je 0x10c9823c */
  if (C.zf) goto L_10c9823c;
  /* 10c98232 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10c98237 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c9823c:;
  /* 10c9823c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c98242 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c98245 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10c9824f jmp 0x10c98260 */
  goto L_10c98260;
L_10c98251:;
  /* 10c98251 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10c98257 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9825a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10c98260:;
  /* 10c98260 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98267 jge 0x10c983e4 */
  if ((C.sf==C.of)) goto L_10c983e4;
  /* 10c9826d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c98270 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98273 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10c98279 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c9827f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98285 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10c9828b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c98291 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98295 jne 0x10c982a2 */
  if (!C.zf) goto L_10c982a2;
  /* 10c98297 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10c9829d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c982a0 je 0x10c982ac */
  if (C.zf) goto L_10c982ac;
L_10c982a2:;
  /* 10c982a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10c982a7 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c982ac:;
  /* 10c982ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c982b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c982b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10c982ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c982c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10c982c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10c982cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c982cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c982d1 je 0x10c98309 */
  if (C.zf) goto L_10c98309;
  /* 10c982d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c982d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c982dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10c982e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c982ec jle 0x10c982f8 */
  if ((C.zf||C.sf!=C.of)) goto L_10c982f8;
  /* 10c982ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10c982f3 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c982f8:;
  /* 10c982f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10c982fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98301 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10c98307 jmp 0x10c9834b */
  goto L_10c9834b;
L_10c98309:;
  /* 10c98309 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c9830f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c98312 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c98315 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10c9831b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98322 jle 0x10c9832e */
  if ((C.zf||C.sf!=C.of)) goto L_10c9832e;
  /* 10c98324 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10c9832e:;
  /* 10c9832e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c98334 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10c9833b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9833e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c98344 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10c9834b:;
  /* 10c9834b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98352 jl 0x10c9836d */
  if ((C.sf!=C.of)) goto L_10c9836d;
  /* 10c98354 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c9835a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9835d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9835f jne 0x10c9836d */
  if (!C.zf) goto L_10c9836d;
  /* 10c98361 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9836b jle 0x10c98377 */
  if ((C.zf||C.sf!=C.of)) goto L_10c98377;
L_10c9836d:;
  /* 10c9836d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10c98372 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c98377:;
  /* 10c98377 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c9837d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98383 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c98386 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9838c je 0x10c98398 */
  if (C.zf) goto L_10c98398;
  /* 10c9838e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10c98393 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c98398:;
  /* 10c98398 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c9839e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c983a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10c983aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c983b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c983b6 jb 0x10c982ac */
  if (C.cf) goto L_10c982ac;
  /* 10c983bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c983c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c983c8 je 0x10c983d4 */
  if (C.zf) goto L_10c983d4;
  /* 10c983ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10c983cf jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c983d4:;
  /* 10c983d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c983d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c983dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c983df jmp 0x10c98251 */
  goto L_10c98251;
L_10c983e4:;
  /* 10c983e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c983e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c983e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c983ef je 0x10c983fb */
  if (C.zf) goto L_10c983fb;
  /* 10c983f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10c983f6 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c983fb:;
  /* 10c983fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c983fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10c98404 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10c9840b jmp 0x10c98416 */
  goto L_10c98416;
L_10c9840d:;
  /* 10c9840d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c98410 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98413 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c98416:;
  /* 10c98416 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9841a jge 0x10c9864d */
  if ((C.sf==C.of)) goto L_10c9864d;
  /* 10c98420 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10c9842a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10c98430 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10c98436:;
  /* 10c98436 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c9843c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c9843f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10c98445 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c9844b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98451 je 0x10c9857a */
  if (C.zf) goto L_10c9857a;
  /* 10c98457 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9845a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10c98460 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98467 je 0x10c9857a */
  if (C.zf) goto L_10c9857a;
  /* 10c9846d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c98473 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98479 jb 0x10c9848e */
  if (C.cf) goto L_10c9848e;
  /* 10c9847b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c98481 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98486 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9848c jb 0x10c98498 */
  if (C.cf) goto L_10c98498;
L_10c9848e:;
  /* 10c9848e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10c98493 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c98498:;
  /* 10c98498 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c9849e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c984a4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10c984aa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10c984b0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c984b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c984b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c984b9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c984be mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10c984c4:;
  /* 10c984c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c984c7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c984cd je 0x10c984ee */
  if (C.zf) goto L_10c984ee;
  /* 10c984cf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c984d2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c984d8 jne 0x10c984dc */
  if (!C.zf) goto L_10c984dc;
  /* 10c984da jmp 0x10c984ee */
  goto L_10c984ee;
L_10c984dc:;
  /* 10c984dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c984df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c984e1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10c984e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c984e7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c984e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c984ec jmp 0x10c984c4 */
  goto L_10c984c4;
L_10c984ee:;
  /* 10c984ee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c984f1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c984f7 jne 0x10c98503 */
  if (!C.zf) goto L_10c98503;
  /* 10c984f9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10c984fe jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c98503:;
  /* 10c98503 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c98509 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9850b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c9850e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c98511 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10c98517 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9851e jle 0x10c9852a */
  if ((C.zf||C.sf!=C.of)) goto L_10c9852a;
  /* 10c98520 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10c9852a:;
  /* 10c9852a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c98530 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98533 je 0x10c9853f */
  if (C.zf) goto L_10c9853f;
  /* 10c98535 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10c9853a jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c9853f:;
  /* 10c9853f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c98545 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c98548 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9854e je 0x10c9855a */
  if (C.zf) goto L_10c9855a;
  /* 10c98550 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10c98555 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c9855a:;
  /* 10c9855a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c98560 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10c98566 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10c9856c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9856f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10c98575 jmp 0x10c98436 */
  goto L_10c98436;
L_10c9857a:;
  /* 10c9857a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98581 je 0x10c985f1 */
  if (C.zf) goto L_10c985f1;
  /* 10c98583 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98587 jge 0x10c985bb */
  if ((C.sf==C.of)) goto L_10c985bb;
  /* 10c98589 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c9858e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c98591 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c98593 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10c98599 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9859b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10c985a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c985a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c985a9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c985ab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10c985b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c985b3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10c985b9 jmp 0x10c985f1 */
  goto L_10c985f1;
L_10c985bb:;
  /* 10c985bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c985be sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c985c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c985c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c985c8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10c985ce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c985d0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10c985d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c985d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c985dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c985e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c985e3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10c985e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c985eb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10c985f1:;
  /* 10c985f1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c985f7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c985fa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98600 jne 0x10c98614 */
  if (!C.zf) goto L_10c98614;
  /* 10c98602 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c98605 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10c9860b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98612 je 0x10c9861e */
  if (C.zf) goto L_10c9861e;
L_10c98614:;
  /* 10c98614 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10c98619 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c9861e:;
  /* 10c9861e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10c98624 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c98627 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9862d je 0x10c98639 */
  if (C.zf) goto L_10c98639;
  /* 10c9862f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10c98634 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c98639:;
  /* 10c98639 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10c9863f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98642 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10c98648 jmp 0x10c9840d */
  goto L_10c9840d;
L_10c9864d:;
  /* 10c9864d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c98650 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c98656 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10c9865c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98660 jne 0x10c9867a */
  if (!C.zf) goto L_10c9867a;
  /* 10c98662 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c98665 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c9866b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10c98671 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98678 je 0x10c98681 */
  if (C.zf) goto L_10c98681;
L_10c9867a:;
  /* 10c9867a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10c9867f jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c98681:;
  /* 10c98681 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c98687 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9868d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10c98693 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c98696 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9869b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c9869e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c986a1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c986a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c986a6 jmp 0x10c981aa */
  goto L_10c981aa;
L_10c986ab:;
  /* 10c986ab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c986b1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10c986b7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c986b9 jne 0x10c986cc */
  if (!C.zf) goto L_10c986cc;
  /* 10c986bb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c986c1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10c986c7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c986ca je 0x10c986d3 */
  if (C.zf) goto L_10c986d3;
L_10c986cc:;
  /* 10c986cc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10c986d1 jmp 0x10c986e9 */
  goto L_10c986e9;
L_10c986d3:;
  /* 10c986d3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c986d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c986dc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10c986e2 jmp 0x10c98113 */
  goto L_10c98113;
L_10c986e7:;
  /* 10c986e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c986e9:;
  /* 10c986e9 mov esp, ebp */
  ESP = (EBP);
  /* 10c986eb pop ebp */
  EBP = (pop32());
  /* 10c986ec ret  */
  ESPCHK(0x10c980d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086f0 @ 0x10c986f0 (250 bytes, 92 insns) */
void f_10c986f0(void) {
  FTRACE(0x10c986f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c986f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c986f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c986f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c986f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c986f7 push esi */
  push32((uint32_t)(ESI));
  /* 10c986f8 push edi */
  push32((uint32_t)(EDI));
  /* 10c986f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10c986fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c986ff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c98702 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10c98705:;
  /* 10c98705 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98709 jne 0x10c98729 */
  if (!C.zf) goto L_10c98729;
  /* 10c9870b push 0x10cb9db8 */
  push32((uint32_t)(0x10cb9db8u));
  /* 10c98710 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c98712 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10c98714 push 0x10cb9dac */
  push32((uint32_t)(0x10cb9dacu));
  /* 10c98719 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9871b call 0x10c918a0 */
  push32(0x10c98720u); f_10c918a0();
  /* 10c98720 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98723 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98726 jne 0x10c98729 */
  if (!C.zf) goto L_10c98729;
  /* 10c98728 int3  */
  x86_unimpl("int3 @ 0x10c98728");
L_10c98729:;
  /* 10c98729 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9872b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9872d jne 0x10c98705 */
  if (!C.zf) goto L_10c98705;
L_10c9872f:;
  /* 10c9872f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98733 jne 0x10c98753 */
  if (!C.zf) goto L_10c98753;
  /* 10c98735 push 0x10cb9d9c */
  push32((uint32_t)(0x10cb9d9cu));
  /* 10c9873a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9873c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10c9873e push 0x10cb9dac */
  push32((uint32_t)(0x10cb9dacu));
  /* 10c98743 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c98745 call 0x10c918a0 */
  push32(0x10c9874au); f_10c918a0();
  /* 10c9874a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9874d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98750 jne 0x10c98753 */
  if (!C.zf) goto L_10c98753;
  /* 10c98752 int3  */
  x86_unimpl("int3 @ 0x10c98752");
L_10c98753:;
  /* 10c98753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c98755 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c98757 jne 0x10c9872f */
  if (!C.zf) goto L_10c9872f;
  /* 10c98759 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9875c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10c98763 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c98769 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c9876c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9876f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c98772 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c98774 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98777 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10c9877e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c98781 push ecx */
  push32((uint32_t)(ECX));
  /* 10c98782 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c98785 push edx */
  push32((uint32_t)(EDX));
  /* 10c98786 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98789 push eax */
  push32((uint32_t)(EAX));
  /* 10c9878a call 0x10c99770 */
  push32(0x10c9878fu); f_10c99770();
  /* 10c9878f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98792 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c98795 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98798 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c9879b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9879e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c987a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c987a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c987a7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c987ab jl 0x10c987cf */
  if ((C.sf!=C.of)) goto L_10c987cf;
  /* 10c987ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c987b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c987b2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c987b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c987b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c987bd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10c987c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c987c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c987c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c987c8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c987cb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c987cd jmp 0x10c987e0 */
  goto L_10c987e0;
L_10c987cf:;
  /* 10c987cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c987d2 push edx */
  push32((uint32_t)(EDX));
  /* 10c987d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c987d5 call 0x10c994f0 */
  push32(0x10c987dau); f_10c994f0();
  /* 10c987da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c987dd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10c987e0:;
  /* 10c987e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c987e3 pop edi */
  EDI = (pop32());
  /* 10c987e4 pop esi */
  ESI = (pop32());
  /* 10c987e5 pop ebx */
  EBX = (pop32());
  /* 10c987e6 mov esp, ebp */
  ESP = (EBP);
  /* 10c987e8 pop ebp */
  EBP = (pop32());
  /* 10c987e9 ret  */
  ESPCHK(0x10c986f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087f0 @ 0x10c987f0 (183 bytes, 58 insns) */
void f_10c987f0(void) {
  FTRACE(0x10c987f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c987f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c987f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c987f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c987f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c987f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c987fc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98801 ja 0x10c9881a */
  if ((!C.cf&&!C.zf)) goto L_10c9881a;
  /* 10c98803 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c98806 mov edx, dword ptr [0x10cbcc98] */
  EDX = (r32((uint32_t)(0x10cbcc98)));
  /* 10c9880c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9880e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10c98812 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10c98815 jmp 0x10c988a3 */
  goto L_10c988a3;
L_10c9881a:;
  /* 10c9881a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9881d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10c98820 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c98826 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9882c mov edx, dword ptr [0x10cbcc98] */
  EDX = (r32((uint32_t)(0x10cbcc98)));
  /* 10c98832 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c98834 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10c98838 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9883d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9883f je 0x10c98863 */
  if (C.zf) goto L_10c98863;
  /* 10c98841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c98844 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10c98847 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9884d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10c98850 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c98853 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10c98856 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10c9885a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10c98861 jmp 0x10c98874 */
  goto L_10c98874;
L_10c98863:;
  /* 10c98863 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c98866 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10c98869 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10c9886d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10c98874:;
  /* 10c98874 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c98876 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c98878 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9887a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10c9887d push ecx */
  push32((uint32_t)(ECX));
  /* 10c9887e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c98881 push edx */
  push32((uint32_t)(EDX));
  /* 10c98882 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10c98885 push eax */
  push32((uint32_t)(EAX));
  /* 10c98886 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c98888 call 0x10c9aa10 */
  push32(0x10c9888du); f_10c9aa10();
  /* 10c9888d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c98892 jne 0x10c98898 */
  if (!C.zf) goto L_10c98898;
  /* 10c98894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c98896 jmp 0x10c988a3 */
  goto L_10c988a3;
L_10c98898:;
  /* 10c98898 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9889b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c988a0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10c988a3:;
  /* 10c988a3 mov esp, ebp */
  ESP = (EBP);
  /* 10c988a5 pop ebp */
  EBP = (pop32());
  /* 10c988a6 ret  */
  ESPCHK(0x10c987f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088b0 @ 0x10c988b0 (836 bytes, 238 insns) */
void f_10c988b0(void) {
  FTRACE(0x10c988b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c988b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c988b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c988b3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c988b6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c988b8 call 0x10c961e0 */
  push32(0x10c988bdu); f_10c961e0();
  /* 10c988bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c988c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c988c3 push eax */
  push32((uint32_t)(EAX));
  /* 10c988c4 call 0x10c98c00 */
  push32(0x10c988c9u); f_10c98c00();
  /* 10c988c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c988cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c988cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c988d2 cmp ecx, dword ptr [0x10cbfae4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbfae4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c988d8 jne 0x10c988eb */
  if (!C.zf) goto L_10c988eb;
  /* 10c988da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c988dc call 0x10c96280 */
  push32(0x10c988e1u); f_10c96280();
  /* 10c988e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c988e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c988e6 jmp 0x10c98bf0 */
  goto L_10c98bf0;
L_10c988eb:;
  /* 10c988eb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c988ef jne 0x10c9890c */
  if (!C.zf) goto L_10c9890c;
  /* 10c988f1 call 0x10c98ce0 */
  push32(0x10c988f6u); f_10c98ce0();
  /* 10c988f6 call 0x10c98d60 */
  push32(0x10c988fbu); f_10c98d60();
  /* 10c988fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c988fd call 0x10c96280 */
  push32(0x10c98902u); f_10c96280();
  /* 10c98902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98905 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c98907 jmp 0x10c98bf0 */
  goto L_10c98bf0;
L_10c9890c:;
  /* 10c9890c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c98913 jmp 0x10c9891e */
  goto L_10c9891e;
L_10c98915:;
  /* 10c98915 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98918 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9891b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c9891e:;
  /* 10c9891e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98922 jae 0x10c98a6f */
  if (!C.cf) goto L_10c98a6f;
  /* 10c98928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9892b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9892e mov ecx, dword ptr [eax + 0x10cbceb8] */
  ECX = (r32((uint32_t)(EAX + 0x10cbceb8)));
  /* 10c98934 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98937 jne 0x10c98a6a */
  if (!C.zf) goto L_10c98a6a;
  /* 10c9893d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c98944 jmp 0x10c9894f */
  goto L_10c9894f;
L_10c98946:;
  /* 10c98946 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98949 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9894c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10c9894f:;
  /* 10c9894f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98956 jae 0x10c98964 */
  if (!C.cf) goto L_10c98964;
  /* 10c98958 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9895b mov byte ptr [eax + 0x10cbfc80], 0 */
  w8((uint32_t)(EAX + 0x10cbfc80), (0x0u));
  /* 10c98962 jmp 0x10c98946 */
  goto L_10c98946;
L_10c98964:;
  /* 10c98964 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c9896b jmp 0x10c98976 */
  goto L_10c98976;
L_10c9896d:;
  /* 10c9896d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c98970 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98973 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c98976:;
  /* 10c98976 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9897a jae 0x10c989f7 */
  if (!C.cf) goto L_10c989f7;
  /* 10c9897c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9897f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c98982 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c98985 lea ecx, [edx + eax*8 + 0x10cbcec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10cbcec8));
  /* 10c9898c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9898f jmp 0x10c9899a */
  goto L_10c9899a;
L_10c98991:;
  /* 10c98991 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c98994 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98997 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c9899a:;
  /* 10c9899a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9899d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9899f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c989a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c989a3 je 0x10c989f2 */
  if (C.zf) goto L_10c989f2;
  /* 10c989a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c989a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c989aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c989ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c989af je 0x10c989f2 */
  if (C.zf) goto L_10c989f2;
  /* 10c989b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c989b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c989b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c989b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c989bb jmp 0x10c989c6 */
  goto L_10c989c6;
L_10c989bd:;
  /* 10c989bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c989c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c989c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c989c6:;
  /* 10c989c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c989c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c989cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c989ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c989d1 ja 0x10c989f0 */
  if ((!C.cf&&!C.zf)) goto L_10c989f0;
  /* 10c989d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c989d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c989d9 mov dl, byte ptr [eax + 0x10cbfc81] */
  DL = (r8((uint32_t)(EAX + 0x10cbfc81)));
  /* 10c989df or dl, byte ptr [ecx + 0x10cbceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10cbceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10c989e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c989e8 mov byte ptr [eax + 0x10cbfc81], dl */
  w8((uint32_t)(EAX + 0x10cbfc81), (DL));
  /* 10c989ee jmp 0x10c989bd */
  goto L_10c989bd;
L_10c989f0:;
  /* 10c989f0 jmp 0x10c98991 */
  goto L_10c98991;
L_10c989f2:;
  /* 10c989f2 jmp 0x10c9896d */
  goto L_10c9896d;
L_10c989f7:;
  /* 10c989f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c989fa mov dword ptr [0x10cbfae4], ecx */
  w32((uint32_t)(0x10cbfae4), (ECX));
  /* 10c98a00 mov dword ptr [0x10cbfb6c], 1 */
  w32((uint32_t)(0x10cbfb6c), (0x1u));
  /* 10c98a0a mov edx, dword ptr [0x10cbfae4] */
  EDX = (r32((uint32_t)(0x10cbfae4)));
  /* 10c98a10 push edx */
  push32((uint32_t)(EDX));
  /* 10c98a11 call 0x10c98c60 */
  push32(0x10c98a16u); f_10c98c60();
  /* 10c98a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98a19 mov dword ptr [0x10cbfd84], eax */
  w32((uint32_t)(0x10cbfd84), (EAX));
  /* 10c98a1e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c98a25 jmp 0x10c98a30 */
  goto L_10c98a30;
L_10c98a27:;
  /* 10c98a27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c98a2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98a2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c98a30:;
  /* 10c98a30 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98a34 jae 0x10c98a54 */
  if (!C.cf) goto L_10c98a54;
  /* 10c98a36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98a39 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c98a3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c98a3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c98a42 mov cx, word ptr [ecx + eax*2 + 0x10cbcebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10cbcebc)));
  /* 10c98a4a mov word ptr [edx*2 + 0x10cbfb60], cx */
  w16((uint32_t)(EDX*2 + 0x10cbfb60), (CX));
  /* 10c98a52 jmp 0x10c98a27 */
  goto L_10c98a27;
L_10c98a54:;
  /* 10c98a54 call 0x10c98d60 */
  push32(0x10c98a59u); f_10c98d60();
  /* 10c98a59 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c98a5b call 0x10c96280 */
  push32(0x10c98a60u); f_10c96280();
  /* 10c98a60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98a63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c98a65 jmp 0x10c98bf0 */
  goto L_10c98bf0;
L_10c98a6a:;
  /* 10c98a6a jmp 0x10c98915 */
  goto L_10c98915;
L_10c98a6f:;
  /* 10c98a6f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10c98a72 push edx */
  push32((uint32_t)(EDX));
  /* 10c98a73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c98a76 push eax */
  push32((uint32_t)(EAX));
  /* 10c98a77 call dword ptr [0x10cc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02e4))), 0x10c98a7du);
  /* 10c98a7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98a80 jne 0x10c98bc2 */
  if (!C.zf) goto L_10c98bc2;
  /* 10c98a86 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c98a8d jmp 0x10c98a98 */
  goto L_10c98a98;
L_10c98a8f:;
  /* 10c98a8f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98a92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98a95 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10c98a98:;
  /* 10c98a98 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98a9f jae 0x10c98aad */
  if (!C.cf) goto L_10c98aad;
  /* 10c98aa1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98aa4 mov byte ptr [edx + 0x10cbfc80], 0 */
  w8((uint32_t)(EDX + 0x10cbfc80), (0x0u));
  /* 10c98aab jmp 0x10c98a8f */
  goto L_10c98a8f;
L_10c98aad:;
  /* 10c98aad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c98ab0 mov dword ptr [0x10cbfae4], eax */
  w32((uint32_t)(0x10cbfae4), (EAX));
  /* 10c98ab5 mov dword ptr [0x10cbfd84], 0 */
  w32((uint32_t)(0x10cbfd84), (0x0u));
  /* 10c98abf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98ac3 jbe 0x10c98b7e */
  if ((C.cf||C.zf)) goto L_10c98b7e;
  /* 10c98ac9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10c98acc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10c98acf jmp 0x10c98ada */
  goto L_10c98ada;
L_10c98ad1:;
  /* 10c98ad1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c98ad4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98ad7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10c98ada:;
  /* 10c98ada mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c98add xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c98adf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c98ae1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c98ae3 je 0x10c98b2c */
  if (C.zf) goto L_10c98b2c;
  /* 10c98ae5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c98ae8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c98aea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c98aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c98aef je 0x10c98b2c */
  if (C.zf) goto L_10c98b2c;
  /* 10c98af1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c98af4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c98af6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c98af8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c98afb jmp 0x10c98b06 */
  goto L_10c98b06;
L_10c98afd:;
  /* 10c98afd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98b00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98b03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c98b06:;
  /* 10c98b06 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c98b09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c98b0b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c98b0e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98b11 ja 0x10c98b2a */
  if ((!C.cf&&!C.zf)) goto L_10c98b2a;
  /* 10c98b13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98b16 mov cl, byte ptr [eax + 0x10cbfc81] */
  CL = (r8((uint32_t)(EAX + 0x10cbfc81)));
  /* 10c98b1c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10c98b1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98b22 mov byte ptr [edx + 0x10cbfc81], cl */
  w8((uint32_t)(EDX + 0x10cbfc81), (CL));
  /* 10c98b28 jmp 0x10c98afd */
  goto L_10c98afd;
L_10c98b2a:;
  /* 10c98b2a jmp 0x10c98ad1 */
  goto L_10c98ad1;
L_10c98b2c:;
  /* 10c98b2c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10c98b33 jmp 0x10c98b3e */
  goto L_10c98b3e;
L_10c98b35:;
  /* 10c98b35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98b38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98b3b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c98b3e:;
  /* 10c98b3e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98b45 jae 0x10c98b5e */
  if (!C.cf) goto L_10c98b5e;
  /* 10c98b47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98b4a mov dl, byte ptr [ecx + 0x10cbfc81] */
  DL = (r8((uint32_t)(ECX + 0x10cbfc81)));
  /* 10c98b50 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10c98b53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c98b56 mov byte ptr [eax + 0x10cbfc81], dl */
  w8((uint32_t)(EAX + 0x10cbfc81), (DL));
  /* 10c98b5c jmp 0x10c98b35 */
  goto L_10c98b35;
L_10c98b5e:;
  /* 10c98b5e mov ecx, dword ptr [0x10cbfae4] */
  ECX = (r32((uint32_t)(0x10cbfae4)));
  /* 10c98b64 push ecx */
  push32((uint32_t)(ECX));
  /* 10c98b65 call 0x10c98c60 */
  push32(0x10c98b6au); f_10c98c60();
  /* 10c98b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98b6d mov dword ptr [0x10cbfd84], eax */
  w32((uint32_t)(0x10cbfd84), (EAX));
  /* 10c98b72 mov dword ptr [0x10cbfb6c], 1 */
  w32((uint32_t)(0x10cbfb6c), (0x1u));
  /* 10c98b7c jmp 0x10c98b88 */
  goto L_10c98b88;
L_10c98b7e:;
  /* 10c98b7e mov dword ptr [0x10cbfb6c], 0 */
  w32((uint32_t)(0x10cbfb6c), (0x0u));
L_10c98b88:;
  /* 10c98b88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c98b8f jmp 0x10c98b9a */
  goto L_10c98b9a;
L_10c98b91:;
  /* 10c98b91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c98b94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98b97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c98b9a:;
  /* 10c98b9a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98b9e jae 0x10c98baf */
  if (!C.cf) goto L_10c98baf;
  /* 10c98ba0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c98ba3 mov word ptr [eax*2 + 0x10cbfb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10cbfb60), (0x0u));
  /* 10c98bad jmp 0x10c98b91 */
  goto L_10c98b91;
L_10c98baf:;
  /* 10c98baf call 0x10c98d60 */
  push32(0x10c98bb4u); f_10c98d60();
  /* 10c98bb4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c98bb6 call 0x10c96280 */
  push32(0x10c98bbbu); f_10c96280();
  /* 10c98bbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98bbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c98bc0 jmp 0x10c98bf0 */
  goto L_10c98bf0;
L_10c98bc2:;
  /* 10c98bc2 cmp dword ptr [0x10cbe5f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe5f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98bc9 je 0x10c98be3 */
  if (C.zf) goto L_10c98be3;
  /* 10c98bcb call 0x10c98ce0 */
  push32(0x10c98bd0u); f_10c98ce0();
  /* 10c98bd0 call 0x10c98d60 */
  push32(0x10c98bd5u); f_10c98d60();
  /* 10c98bd5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c98bd7 call 0x10c96280 */
  push32(0x10c98bdcu); f_10c96280();
  /* 10c98bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98bdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c98be1 jmp 0x10c98bf0 */
  goto L_10c98bf0;
L_10c98be3:;
  /* 10c98be3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c98be5 call 0x10c96280 */
  push32(0x10c98beau); f_10c96280();
  /* 10c98bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98bed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c98bf0:;
  /* 10c98bf0 mov esp, ebp */
  ESP = (EBP);
  /* 10c98bf2 pop ebp */
  EBP = (pop32());
  /* 10c98bf3 ret  */
  ESPCHK(0x10c988b0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10c98c00 (89 bytes, 21 insns) */
void f_10c98c00(void) {
  FTRACE(0x10c98c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c98c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c98c01 mov ebp, esp */
  EBP = (ESP);
  /* 10c98c03 mov dword ptr [0x10cbe5f0], 0 */
  w32((uint32_t)(0x10cbe5f0), (0x0u));
  /* 10c98c0d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98c11 jne 0x10c98c25 */
  if (!C.zf) goto L_10c98c25;
  /* 10c98c13 mov dword ptr [0x10cbe5f0], 1 */
  w32((uint32_t)(0x10cbe5f0), (0x1u));
  /* 10c98c1d call dword ptr [0x10cc02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a8))), 0x10c98c23u);
  /* 10c98c23 jmp 0x10c98c57 */
  goto L_10c98c57;
L_10c98c25:;
  /* 10c98c25 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98c29 jne 0x10c98c3d */
  if (!C.zf) goto L_10c98c3d;
  /* 10c98c2b mov dword ptr [0x10cbe5f0], 1 */
  w32((uint32_t)(0x10cbe5f0), (0x1u));
  /* 10c98c35 call dword ptr [0x10cc02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02e8))), 0x10c98c3bu);
  /* 10c98c3b jmp 0x10c98c57 */
  goto L_10c98c57;
L_10c98c3d:;
  /* 10c98c3d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98c41 jne 0x10c98c54 */
  if (!C.zf) goto L_10c98c54;
  /* 10c98c43 mov dword ptr [0x10cbe5f0], 1 */
  w32((uint32_t)(0x10cbe5f0), (0x1u));
  /* 10c98c4d mov eax, dword ptr [0x10cbe610] */
  EAX = (r32((uint32_t)(0x10cbe610)));
  /* 10c98c52 jmp 0x10c98c57 */
  goto L_10c98c57;
L_10c98c54:;
  /* 10c98c54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10c98c57:;
  /* 10c98c57 pop ebp */
  EBP = (pop32());
  /* 10c98c58 ret  */
  ESPCHK(0x10c98c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c60 @ 0x10c98c60 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10c98c60(void) {
  FTRACE(0x10c98c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c98c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c98c61 mov ebp, esp */
  EBP = (ESP);
  /* 10c98c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10c98c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c98c67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c98c6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98c6d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c98c73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c98c76 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98c7a ja 0x10c98caa */
  if ((!C.cf&&!C.zf)) goto L_10c98caa;
  /* 10c98c7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98c7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c98c81 mov dl, byte ptr [eax + 0x10c98cc4] */
  DL = (r8((uint32_t)(EAX + 0x10c98cc4)));
  /* 10c98c87 jmp dword ptr [edx*4 + 0x10c98cb0] */
  switch (EDX) {
    case 0: goto L_10c98c8e;
    case 1: goto L_10c98c95;
    case 2: goto L_10c98c9c;
    case 3: goto L_10c98ca3;
    case 4: goto L_10c98caa;
    default: x86_unimpl("switch@0x10c98c87 out of table"); return;
  }
L_10c98c8e:;
  /* 10c98c8e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10c98c93 jmp 0x10c98cac */
  goto L_10c98cac;
L_10c98c95:;
  /* 10c98c95 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10c98c9a jmp 0x10c98cac */
  goto L_10c98cac;
L_10c98c9c:;
  /* 10c98c9c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10c98ca1 jmp 0x10c98cac */
  goto L_10c98cac;
L_10c98ca3:;
  /* 10c98ca3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10c98ca8 jmp 0x10c98cac */
  goto L_10c98cac;
L_10c98caa:;
  /* 10c98caa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c98cac:;
  /* 10c98cac mov esp, ebp */
  ESP = (EBP);
  /* 10c98cae pop ebp */
  EBP = (pop32());
  /* 10c98caf ret  */
  ESPCHK(0x10c98c60u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10c98ce0 (116 bytes, 29 insns) */
void f_10c98ce0(void) {
  FTRACE(0x10c98ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c98ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c98ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10c98ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c98ce4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c98ceb jmp 0x10c98cf6 */
  goto L_10c98cf6;
L_10c98ced:;
  /* 10c98ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98cf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98cf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c98cf6:;
  /* 10c98cf6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98cfd jge 0x10c98d0b */
  if ((C.sf==C.of)) goto L_10c98d0b;
  /* 10c98cff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98d02 mov byte ptr [ecx + 0x10cbfc80], 0 */
  w8((uint32_t)(ECX + 0x10cbfc80), (0x0u));
  /* 10c98d09 jmp 0x10c98ced */
  goto L_10c98ced;
L_10c98d0b:;
  /* 10c98d0b mov dword ptr [0x10cbfae4], 0 */
  w32((uint32_t)(0x10cbfae4), (0x0u));
  /* 10c98d15 mov dword ptr [0x10cbfb6c], 0 */
  w32((uint32_t)(0x10cbfb6c), (0x0u));
  /* 10c98d1f mov dword ptr [0x10cbfd84], 0 */
  w32((uint32_t)(0x10cbfd84), (0x0u));
  /* 10c98d29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c98d30 jmp 0x10c98d3b */
  goto L_10c98d3b;
L_10c98d32:;
  /* 10c98d32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98d35 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98d38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c98d3b:;
  /* 10c98d3b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98d3f jge 0x10c98d50 */
  if ((C.sf==C.of)) goto L_10c98d50;
  /* 10c98d41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98d44 mov word ptr [eax*2 + 0x10cbfb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10cbfb60), (0x0u));
  /* 10c98d4e jmp 0x10c98d32 */
  goto L_10c98d32;
L_10c98d50:;
  /* 10c98d50 mov esp, ebp */
  ESP = (EBP);
  /* 10c98d52 pop ebp */
  EBP = (pop32());
  /* 10c98d53 ret  */
  ESPCHK(0x10c98ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d60 @ 0x10c98d60 (770 bytes, 175 insns) */
void f_10c98d60(void) {
  FTRACE(0x10c98d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c98d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c98d61 mov ebp, esp */
  EBP = (ESP);
  /* 10c98d63 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c98d69 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10c98d6f push eax */
  push32((uint32_t)(EAX));
  /* 10c98d70 mov ecx, dword ptr [0x10cbfae4] */
  ECX = (r32((uint32_t)(0x10cbfae4)));
  /* 10c98d76 push ecx */
  push32((uint32_t)(ECX));
  /* 10c98d77 call dword ptr [0x10cc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02e4))), 0x10c98d7du);
  /* 10c98d7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98d80 jne 0x10c98f99 */
  if (!C.zf) goto L_10c98f99;
  /* 10c98d86 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10c98d90 jmp 0x10c98da1 */
  goto L_10c98da1;
L_10c98d92:;
  /* 10c98d92 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98d98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98d9b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10c98da1:;
  /* 10c98da1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98dab jae 0x10c98dc2 */
  if (!C.cf) goto L_10c98dc2;
  /* 10c98dad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98db3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10c98db9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10c98dc0 jmp 0x10c98d92 */
  goto L_10c98d92;
L_10c98dc2:;
  /* 10c98dc2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10c98dc9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10c98dcf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c98dd2 jmp 0x10c98ddd */
  goto L_10c98ddd;
L_10c98dd4:;
  /* 10c98dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98dd7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98dda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c98ddd:;
  /* 10c98ddd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98de0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c98de2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c98de4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c98de6 je 0x10c98e28 */
  if (C.zf) goto L_10c98e28;
  /* 10c98de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98deb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c98ded mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c98def mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10c98df5 jmp 0x10c98e06 */
  goto L_10c98e06;
L_10c98df7:;
  /* 10c98df7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98dfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98e00 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10c98e06:;
  /* 10c98e06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c98e09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c98e0b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c98e0e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98e14 ja 0x10c98e26 */
  if ((!C.cf&&!C.zf)) goto L_10c98e26;
  /* 10c98e16 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98e1c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10c98e24 jmp 0x10c98df7 */
  goto L_10c98df7;
L_10c98e26:;
  /* 10c98e26 jmp 0x10c98dd4 */
  goto L_10c98dd4;
L_10c98e28:;
  /* 10c98e28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c98e2a mov eax, dword ptr [0x10cbfd84] */
  EAX = (r32((uint32_t)(0x10cbfd84)));
  /* 10c98e2f push eax */
  push32((uint32_t)(EAX));
  /* 10c98e30 mov ecx, dword ptr [0x10cbfae4] */
  ECX = (r32((uint32_t)(0x10cbfae4)));
  /* 10c98e36 push ecx */
  push32((uint32_t)(ECX));
  /* 10c98e37 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10c98e3d push edx */
  push32((uint32_t)(EDX));
  /* 10c98e3e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c98e43 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10c98e49 push eax */
  push32((uint32_t)(EAX));
  /* 10c98e4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c98e4c call 0x10c9aa10 */
  push32(0x10c98e51u); f_10c9aa10();
  /* 10c98e51 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c98e56 mov ecx, dword ptr [0x10cbfae4] */
  ECX = (r32((uint32_t)(0x10cbfae4)));
  /* 10c98e5c push ecx */
  push32((uint32_t)(ECX));
  /* 10c98e5d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c98e62 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10c98e68 push edx */
  push32((uint32_t)(EDX));
  /* 10c98e69 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c98e6e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10c98e74 push eax */
  push32((uint32_t)(EAX));
  /* 10c98e75 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c98e7a mov ecx, dword ptr [0x10cbfd84] */
  ECX = (r32((uint32_t)(0x10cbfd84)));
  /* 10c98e80 push ecx */
  push32((uint32_t)(ECX));
  /* 10c98e81 call 0x10c9abd0 */
  push32(0x10c98e86u); f_10c9abd0();
  /* 10c98e86 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c98e8b mov edx, dword ptr [0x10cbfae4] */
  EDX = (r32((uint32_t)(0x10cbfae4)));
  /* 10c98e91 push edx */
  push32((uint32_t)(EDX));
  /* 10c98e92 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c98e97 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10c98e9d push eax */
  push32((uint32_t)(EAX));
  /* 10c98e9e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c98ea3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10c98ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c98eaa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10c98eaf mov edx, dword ptr [0x10cbfd84] */
  EDX = (r32((uint32_t)(0x10cbfd84)));
  /* 10c98eb5 push edx */
  push32((uint32_t)(EDX));
  /* 10c98eb6 call 0x10c9abd0 */
  push32(0x10c98ebbu); f_10c9abd0();
  /* 10c98ebb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98ebe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10c98ec8 jmp 0x10c98ed9 */
  goto L_10c98ed9;
L_10c98eca:;
  /* 10c98eca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98ed0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98ed3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10c98ed9:;
  /* 10c98ed9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98ee3 jae 0x10c98f94 */
  if (!C.cf) goto L_10c98f94;
  /* 10c98ee9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98eef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c98ef1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10c98ef9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c98efc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c98efe je 0x10c98f36 */
  if (C.zf) goto L_10c98f36;
  /* 10c98f00 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98f06 mov cl, byte ptr [eax + 0x10cbfc81] */
  CL = (r8((uint32_t)(EAX + 0x10cbfc81)));
  /* 10c98f0c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10c98f0f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98f15 mov byte ptr [edx + 0x10cbfc81], cl */
  w8((uint32_t)(EDX + 0x10cbfc81), (CL));
  /* 10c98f1b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98f21 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98f27 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10c98f2e mov byte ptr [eax + 0x10cbfb80], dl */
  w8((uint32_t)(EAX + 0x10cbfb80), (DL));
  /* 10c98f34 jmp 0x10c98f8f */
  goto L_10c98f8f;
L_10c98f36:;
  /* 10c98f36 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98f3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c98f3e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10c98f46 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c98f49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c98f4b je 0x10c98f82 */
  if (C.zf) goto L_10c98f82;
  /* 10c98f4d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98f53 mov al, byte ptr [edx + 0x10cbfc81] */
  AL = (r8((uint32_t)(EDX + 0x10cbfc81)));
  /* 10c98f59 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10c98f5b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98f61 mov byte ptr [ecx + 0x10cbfc81], al */
  w8((uint32_t)(ECX + 0x10cbfc81), (AL));
  /* 10c98f67 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98f6d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98f73 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10c98f7a mov byte ptr [edx + 0x10cbfb80], cl */
  w8((uint32_t)(EDX + 0x10cbfb80), (CL));
  /* 10c98f80 jmp 0x10c98f8f */
  goto L_10c98f8f;
L_10c98f82:;
  /* 10c98f82 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98f88 mov byte ptr [edx + 0x10cbfb80], 0 */
  w8((uint32_t)(EDX + 0x10cbfb80), (0x0u));
L_10c98f8f:;
  /* 10c98f8f jmp 0x10c98eca */
  goto L_10c98eca;
L_10c98f94:;
  /* 10c98f94 jmp 0x10c9905e */
  goto L_10c9905e;
L_10c98f99:;
  /* 10c98f99 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10c98fa3 jmp 0x10c98fb4 */
  goto L_10c98fb4;
L_10c98fa5:;
  /* 10c98fa5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98fab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98fae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10c98fb4:;
  /* 10c98fb4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98fbe jae 0x10c9905e */
  if (!C.cf) goto L_10c9905e;
  /* 10c98fc4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98fcb jb 0x10c99008 */
  if (C.cf) goto L_10c99008;
  /* 10c98fcd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c98fd4 ja 0x10c99008 */
  if ((!C.cf&&!C.zf)) goto L_10c99008;
  /* 10c98fd6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98fdc mov dl, byte ptr [ecx + 0x10cbfc81] */
  DL = (r8((uint32_t)(ECX + 0x10cbfc81)));
  /* 10c98fe2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10c98fe5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98feb mov byte ptr [eax + 0x10cbfc81], dl */
  w8((uint32_t)(EAX + 0x10cbfc81), (DL));
  /* 10c98ff1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c98ff7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c98ffa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c99000 mov byte ptr [edx + 0x10cbfb80], cl */
  w8((uint32_t)(EDX + 0x10cbfb80), (CL));
  /* 10c99006 jmp 0x10c99059 */
  goto L_10c99059;
L_10c99008:;
  /* 10c99008 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9900f jb 0x10c9904c */
  if (C.cf) goto L_10c9904c;
  /* 10c99011 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99018 ja 0x10c9904c */
  if ((!C.cf&&!C.zf)) goto L_10c9904c;
  /* 10c9901a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c99020 mov cl, byte ptr [eax + 0x10cbfc81] */
  CL = (r8((uint32_t)(EAX + 0x10cbfc81)));
  /* 10c99026 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10c99029 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c9902f mov byte ptr [edx + 0x10cbfc81], cl */
  w8((uint32_t)(EDX + 0x10cbfc81), (CL));
  /* 10c99035 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c9903b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9903e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c99044 mov byte ptr [ecx + 0x10cbfb80], al */
  w8((uint32_t)(ECX + 0x10cbfb80), (AL));
  /* 10c9904a jmp 0x10c99059 */
  goto L_10c99059;
L_10c9904c:;
  /* 10c9904c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c99052 mov byte ptr [edx + 0x10cbfb80], 0 */
  w8((uint32_t)(EDX + 0x10cbfb80), (0x0u));
L_10c99059:;
  /* 10c99059 jmp 0x10c98fa5 */
  goto L_10c98fa5;
L_10c9905e:;
  /* 10c9905e mov esp, ebp */
  ESP = (EBP);
  /* 10c99060 pop ebp */
  EBP = (pop32());
  /* 10c99061 ret  */
  ESPCHK(0x10c98d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009070 @ 0x10c99070 (23 bytes, 9 insns) */
void f_10c99070(void) {
  FTRACE(0x10c99070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c99070 push ebp */
  push32((uint32_t)(EBP));
  /* 10c99071 mov ebp, esp */
  EBP = (ESP);
  /* 10c99073 cmp dword ptr [0x10cbfb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbfb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9907a je 0x10c99083 */
  if (C.zf) goto L_10c99083;
  /* 10c9907c mov eax, dword ptr [0x10cbfae4] */
  EAX = (r32((uint32_t)(0x10cbfae4)));
  /* 10c99081 jmp 0x10c99085 */
  goto L_10c99085;
L_10c99083:;
  /* 10c99083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c99085:;
  /* 10c99085 pop ebp */
  EBP = (pop32());
  /* 10c99086 ret  */
  ESPCHK(0x10c99070u, _esp0);
  ESP += 4; return;
}

/* FUN_10009090 @ 0x10c99090 (34 bytes, 10 insns) */
void f_10c99090(void) {
  FTRACE(0x10c99090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c99090 push ebp */
  push32((uint32_t)(EBP));
  /* 10c99091 mov ebp, esp */
  EBP = (ESP);
  /* 10c99093 cmp dword ptr [0x10cbff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9909a jne 0x10c990b0 */
  if (!C.zf) goto L_10c990b0;
  /* 10c9909c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10c9909e call 0x10c988b0 */
  push32(0x10c990a3u); f_10c988b0();
  /* 10c990a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c990a6 mov dword ptr [0x10cbff30], 1 */
  w32((uint32_t)(0x10cbff30), (0x1u));
L_10c990b0:;
  /* 10c990b0 pop ebp */
  EBP = (pop32());
  /* 10c990b1 ret  */
  ESPCHK(0x10c99090u, _esp0);
  ESP += 4; return;
}

/* FUN_100090c0 @ 0x10c990c0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_10c990c0(void) {
  FTRACE(0x10c990c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c990c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c990c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c990c3 push edi */
  push32((uint32_t)(EDI));
  /* 10c990c4 push esi */
  push32((uint32_t)(ESI));
  /* 10c990c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c990c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c990cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c990ce mov eax, ecx */
  EAX = (ECX);
  /* 10c990d0 mov edx, ecx */
  EDX = (ECX);
  /* 10c990d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c990d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c990d6 jbe 0x10c990e0 */
  if ((C.cf||C.zf)) goto L_10c990e0;
  /* 10c990d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c990da jb 0x10c99258 */
  if (C.cf) goto L_10c99258;
L_10c990e0:;
  /* 10c990e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c990e6 jne 0x10c990fc */
  if (!C.zf) goto L_10c990fc;
  /* 10c990e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c990eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c990ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c990f1 jb 0x10c9911c */
  if (C.cf) goto L_10c9911c;
  /* 10c990f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c990f5 jmp dword ptr [edx*4 + 0x10c99208] */
  switch (EDX) {
    case 0: goto L_10c99218;
    case 1: goto L_10c99220;
    case 2: goto L_10c9922c;
    case 3: goto L_10c99240;
    default: x86_unimpl("switch@0x10c990f5 out of table"); return;
  }
L_10c990fc:;
  /* 10c990fc mov eax, edi */
  EAX = (EDI);
  /* 10c990fe mov edx, 3 */
  EDX = (0x3u);
  /* 10c99103 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c99106 jb 0x10c99114 */
  if (C.cf) goto L_10c99114;
  /* 10c99108 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9910b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9910d jmp dword ptr [eax*4 + 0x10c99120] */
  switch (EAX) {
    case 1: goto L_10c99130;
    case 2: goto L_10c9915c;
    case 3: goto L_10c99180;
    default: x86_unimpl("switch@0x10c9910d out of table"); return;
  }
L_10c99114:;
  /* 10c99114 jmp dword ptr [ecx*4 + 0x10c99218] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10c99218)))); return;
  /* 10c9911b nop  */
  /* nop */
L_10c9911c:;
  /* 10c9911c jmp dword ptr [ecx*4 + 0x10c9919c] */
  switch (ECX) {
    case 0: goto L_10c991ff;
    case 1: goto L_10c991ec;
    case 2: goto L_10c991e4;
    case 3: goto L_10c991dc;
    case 4: goto L_10c991d4;
    case 5: goto L_10c991cc;
    case 6: goto L_10c991c4;
    case 7: goto L_10c991bc;
    default: x86_unimpl("switch@0x10c9911c out of table"); return;
  }
  /* 10c99123 nop  */
  /* nop */
L_10c99130:;
  /* 10c99130 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c99132 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c99134 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c99136 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c99139 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c9913c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c9913f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c99142 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c99145 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99148 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9914b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9914e jb 0x10c9911c */
  if (C.cf) goto L_10c9911c;
  /* 10c99150 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c99152 jmp dword ptr [edx*4 + 0x10c99208] */
  switch (EDX) {
    case 0: goto L_10c99218;
    case 1: goto L_10c99220;
    case 2: goto L_10c9922c;
    case 3: goto L_10c99240;
    default: x86_unimpl("switch@0x10c99152 out of table"); return;
  }
  /* 10c99159 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c9915c:;
  /* 10c9915c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9915e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c99160 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c99162 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c99165 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c99168 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c9916b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9916e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99171 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99174 jb 0x10c9911c */
  if (C.cf) goto L_10c9911c;
  /* 10c99176 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c99178 jmp dword ptr [edx*4 + 0x10c99208] */
  switch (EDX) {
    case 0: goto L_10c99218;
    case 1: goto L_10c99220;
    case 2: goto L_10c9922c;
    case 3: goto L_10c99240;
    default: x86_unimpl("switch@0x10c99178 out of table"); return;
  }
  /* 10c9917f nop  */
  /* nop */
L_10c99180:;
  /* 10c99180 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c99182 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c99184 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c99186 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c99187 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9918a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c9918b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9918e jb 0x10c9911c */
  if (C.cf) goto L_10c9911c;
  /* 10c99190 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c99192 jmp dword ptr [edx*4 + 0x10c99208] */
  switch (EDX) {
    case 0: goto L_10c99218;
    case 1: goto L_10c99220;
    case 2: goto L_10c9922c;
    case 3: goto L_10c99240;
    default: x86_unimpl("switch@0x10c99192 out of table"); return;
  }
  /* 10c99199 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c991bc:;
  /* 10c991bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10c991c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10c991c4:;
  /* 10c991c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10c991c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10c991cc:;
  /* 10c991cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10c991d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10c991d4:;
  /* 10c991d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10c991d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10c991dc:;
  /* 10c991dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10c991e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10c991e4:;
  /* 10c991e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10c991e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10c991ec:;
  /* 10c991ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10c991f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10c991f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c991fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c991fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c991ff:;
  /* 10c991ff jmp dword ptr [edx*4 + 0x10c99208] */
  switch (EDX) {
    case 0: goto L_10c99218;
    case 1: goto L_10c99220;
    case 2: goto L_10c9922c;
    case 3: goto L_10c99240;
    default: x86_unimpl("switch@0x10c991ff out of table"); return;
  }
  /* 10c99206 mov edi, edi */
  EDI = (EDI);
L_10c99218:;
  /* 10c99218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9921b pop esi */
  ESI = (pop32());
  /* 10c9921c pop edi */
  EDI = (pop32());
  /* 10c9921d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9921e ret  */
  ESPCHK(0x10c990c0u, _esp0);
  ESP += 4; return;
  /* 10c9921f nop  */
  /* nop */
L_10c99220:;
  /* 10c99220 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c99222 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c99224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c99227 pop esi */
  ESI = (pop32());
  /* 10c99228 pop edi */
  EDI = (pop32());
  /* 10c99229 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9922a ret  */
  ESPCHK(0x10c990c0u, _esp0);
  ESP += 4; return;
  /* 10c9922b nop  */
  /* nop */
L_10c9922c:;
  /* 10c9922c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c9922e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c99230 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c99233 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c99236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c99239 pop esi */
  ESI = (pop32());
  /* 10c9923a pop edi */
  EDI = (pop32());
  /* 10c9923b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9923c ret  */
  ESPCHK(0x10c990c0u, _esp0);
  ESP += 4; return;
  /* 10c9923d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c99240:;
  /* 10c99240 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c99242 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c99244 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c99247 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c9924a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c9924d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c99250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c99253 pop esi */
  ESI = (pop32());
  /* 10c99254 pop edi */
  EDI = (pop32());
  /* 10c99255 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c99256 ret  */
  ESPCHK(0x10c990c0u, _esp0);
  ESP += 4; return;
  /* 10c99257 nop  */
  /* nop */
L_10c99258:;
  /* 10c99258 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10c9925c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10c99260 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c99266 jne 0x10c9928c */
  if (!C.zf) goto L_10c9928c;
  /* 10c99268 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9926b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9926e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99271 jb 0x10c99280 */
  if (C.cf) goto L_10c99280;
  /* 10c99273 std  */
  C.df=1;
  /* 10c99274 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c99276 cld  */
  C.df=0;
  /* 10c99277 jmp dword ptr [edx*4 + 0x10c993a0] */
  switch (EDX) {
    case 0: goto L_10c993b0;
    case 1: goto L_10c993b8;
    case 2: goto L_10c993c8;
    case 3: goto L_10c993dc;
    default: x86_unimpl("switch@0x10c99277 out of table"); return;
  }
  /* 10c9927e mov edi, edi */
  EDI = (EDI);
L_10c99280:;
  /* 10c99280 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c99282 jmp dword ptr [ecx*4 + 0x10c99350] */
  switch (ECX) {
    case 0: goto L_10c99397;
    default: x86_unimpl("switch@0x10c99282 out of table"); return;
  }
  /* 10c99289 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c9928c:;
  /* 10c9928c mov eax, edi */
  EAX = (EDI);
  /* 10c9928e mov edx, 3 */
  EDX = (0x3u);
  /* 10c99293 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99296 jb 0x10c992a4 */
  if (C.cf) goto L_10c992a4;
  /* 10c99298 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9929b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9929d jmp dword ptr [eax*4 + 0x10c992a8] */
  switch (EAX) {
    case 1: goto L_10c992b8;
    case 2: goto L_10c992d8;
    case 3: goto L_10c99300;
    default: x86_unimpl("switch@0x10c9929d out of table"); return;
  }
L_10c992a4:;
  /* 10c992a4 jmp dword ptr [ecx*4 + 0x10c993a0] */
  switch (ECX) {
    case 0: goto L_10c993b0;
    case 1: goto L_10c993b8;
    case 2: goto L_10c993c8;
    case 3: goto L_10c993dc;
    default: x86_unimpl("switch@0x10c992a4 out of table"); return;
  }
  /* 10c992ab nop  */
  /* nop */
L_10c992b8:;
  /* 10c992b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c992bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c992bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c992c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10c992c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c992c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10c992c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c992c8 jb 0x10c99280 */
  if (C.cf) goto L_10c99280;
  /* 10c992ca std  */
  C.df=1;
  /* 10c992cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c992cd cld  */
  C.df=0;
  /* 10c992ce jmp dword ptr [edx*4 + 0x10c993a0] */
  switch (EDX) {
    case 0: goto L_10c993b0;
    case 1: goto L_10c993b8;
    case 2: goto L_10c993c8;
    case 3: goto L_10c993dc;
    default: x86_unimpl("switch@0x10c992ce out of table"); return;
  }
  /* 10c992d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c992d8:;
  /* 10c992d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c992db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c992dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c992e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c992e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c992e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c992e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c992ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c992ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c992f2 jb 0x10c99280 */
  if (C.cf) goto L_10c99280;
  /* 10c992f4 std  */
  C.df=1;
  /* 10c992f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c992f7 cld  */
  C.df=0;
  /* 10c992f8 jmp dword ptr [edx*4 + 0x10c993a0] */
  switch (EDX) {
    case 0: goto L_10c993b0;
    case 1: goto L_10c993b8;
    case 2: goto L_10c993c8;
    case 3: goto L_10c993dc;
    default: x86_unimpl("switch@0x10c992f8 out of table"); return;
  }
  /* 10c992ff nop  */
  /* nop */
L_10c99300:;
  /* 10c99300 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c99303 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c99305 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c99308 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c9930b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c9930e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c99311 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c99314 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c99317 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9931a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9931d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99320 jb 0x10c99280 */
  if (C.cf) goto L_10c99280;
  /* 10c99326 std  */
  C.df=1;
  /* 10c99327 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c99329 cld  */
  C.df=0;
  /* 10c9932a jmp dword ptr [edx*4 + 0x10c993a0] */
  switch (EDX) {
    case 0: goto L_10c993b0;
    case 1: goto L_10c993b8;
    case 2: goto L_10c993c8;
    case 3: goto L_10c993dc;
    default: x86_unimpl("switch@0x10c9932a out of table"); return;
  }
  /* 10c99331 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10c99334 push esp */
  push32((uint32_t)(ESP));
  /* 10c99335 xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 10c99336 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c99337 adc byte ptr [ebx + edx*4 - 0x37], bl */
  { uint32_t _a=(r8((uint32_t)(EBX + EDX*4 + -0x37))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDX*4 + -0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10c9933b adc byte ptr [ebx + edx*4 - 0x37], ah */
  { uint32_t _a=(r8((uint32_t)(EBX + EDX*4 + -0x37))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDX*4 + -0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10c9933f adc byte ptr [ebx + edx*4 - 0x37], ch */
  { uint32_t _a=(r8((uint32_t)(EBX + EDX*4 + -0x37))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDX*4 + -0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10c99343 adc byte ptr [ebx + edx*4 - 0x37], dh */
  { uint32_t _a=(r8((uint32_t)(EBX + EDX*4 + -0x37))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDX*4 + -0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10c99347 adc byte ptr [ebx + edx*4 - 0x37], bh */
  { uint32_t _a=(r8((uint32_t)(EBX + EDX*4 + -0x37))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDX*4 + -0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10c9934d xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 10c9934e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c99354 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10c99358 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10c9935c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10c99360 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10c99364 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10c99368 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10c9936c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10c99370 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10c99374 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10c99378 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10c9937c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10c99380 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10c99384 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10c99388 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10c9938c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c99393 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99395 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c99397:;
  /* 10c99397 jmp dword ptr [edx*4 + 0x10c993a0] */
  switch (EDX) {
    case 0: goto L_10c993b0;
    case 1: goto L_10c993b8;
    case 2: goto L_10c993c8;
    case 3: goto L_10c993dc;
    default: x86_unimpl("switch@0x10c99397 out of table"); return;
  }
  /* 10c9939e mov edi, edi */
  EDI = (EDI);
L_10c993b0:;
  /* 10c993b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c993b3 pop esi */
  ESI = (pop32());
  /* 10c993b4 pop edi */
  EDI = (pop32());
  /* 10c993b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c993b6 ret  */
  ESPCHK(0x10c990c0u, _esp0);
  ESP += 4; return;
  /* 10c993b7 nop  */
  /* nop */
L_10c993b8:;
  /* 10c993b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c993bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c993be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c993c1 pop esi */
  ESI = (pop32());
  /* 10c993c2 pop edi */
  EDI = (pop32());
  /* 10c993c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c993c4 ret  */
  ESPCHK(0x10c990c0u, _esp0);
  ESP += 4; return;
  /* 10c993c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c993c8:;
  /* 10c993c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c993cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c993ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c993d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c993d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c993d7 pop esi */
  ESI = (pop32());
  /* 10c993d8 pop edi */
  EDI = (pop32());
  /* 10c993d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c993da ret  */
  ESPCHK(0x10c990c0u, _esp0);
  ESP += 4; return;
  /* 10c993db nop  */
  /* nop */
L_10c993dc:;
  /* 10c993dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c993df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c993e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c993e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c993e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c993eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c993ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c993f1 pop esi */
  ESI = (pop32());
  /* 10c993f2 pop edi */
  EDI = (pop32());
  /* 10c993f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c993f4 ret  */
  ESPCHK(0x10c990c0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10c99400 (104 bytes, 43 insns) */
void f_10c99400(void) {
  FTRACE(0x10c99400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c99400 push ebx */
  push32((uint32_t)(EBX));
  /* 10c99401 push esi */
  push32((uint32_t)(ESI));
  /* 10c99402 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10c99406 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c99408 jne 0x10c99422 */
  if (!C.zf) goto L_10c99422;
  /* 10c9940a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c9940e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c99412 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c99414 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c99416 mov ebx, eax */
  EBX = (EAX);
  /* 10c99418 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c9941c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c9941e mov edx, ebx */
  EDX = (EBX);
  /* 10c99420 jmp 0x10c99463 */
  goto L_10c99463;
L_10c99422:;
  /* 10c99422 mov ecx, eax */
  ECX = (EAX);
  /* 10c99424 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c99428 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c9942c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10c99430:;
  /* 10c99430 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c99432 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10c99434 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c99436 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10c99438 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9943a jne 0x10c99430 */
  if (!C.zf) goto L_10c99430;
  /* 10c9943c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c9943e mov esi, eax */
  ESI = (EAX);
  /* 10c99440 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c99444 mov ecx, eax */
  ECX = (EAX);
  /* 10c99446 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c9944a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c9944c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9944e jb 0x10c9945e */
  if (C.cf) goto L_10c9945e;
  /* 10c99450 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99454 ja 0x10c9945e */
  if ((!C.cf&&!C.zf)) goto L_10c9945e;
  /* 10c99456 jb 0x10c9945f */
  if (C.cf) goto L_10c9945f;
  /* 10c99458 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9945c jbe 0x10c9945f */
  if ((C.cf||C.zf)) goto L_10c9945f;
L_10c9945e:;
  /* 10c9945e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10c9945f:;
  /* 10c9945f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c99461 mov eax, esi */
  EAX = (ESI);
L_10c99463:;
  /* 10c99463 pop esi */
  ESI = (pop32());
  /* 10c99464 pop ebx */
  EBX = (pop32());
  /* 10c99465 ret 0x10 */
  ESPCHK(0x10c99400u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10c99470 (117 bytes, 44 insns) */
void f_10c99470(void) {
  FTRACE(0x10c99470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c99470 push ebx */
  push32((uint32_t)(EBX));
  /* 10c99471 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c99475 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c99477 jne 0x10c99491 */
  if (!C.zf) goto L_10c99491;
  /* 10c99479 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c9947d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c99481 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c99483 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c99485 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c99489 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c9948b mov eax, edx */
  EAX = (EDX);
  /* 10c9948d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9948f jmp 0x10c994e1 */
  goto L_10c994e1;
L_10c99491:;
  /* 10c99491 mov ecx, eax */
  ECX = (EAX);
  /* 10c99493 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c99497 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c9949b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10c9949f:;
  /* 10c9949f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c994a1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10c994a3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c994a5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10c994a7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c994a9 jne 0x10c9949f */
  if (!C.zf) goto L_10c9949f;
  /* 10c994ab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c994ad mov ecx, eax */
  ECX = (EAX);
  /* 10c994af mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c994b3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10c994b4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c994b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c994ba jb 0x10c994ca */
  if (C.cf) goto L_10c994ca;
  /* 10c994bc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c994c0 ja 0x10c994ca */
  if ((!C.cf&&!C.zf)) goto L_10c994ca;
  /* 10c994c2 jb 0x10c994d2 */
  if (C.cf) goto L_10c994d2;
  /* 10c994c4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c994c8 jbe 0x10c994d2 */
  if ((C.cf||C.zf)) goto L_10c994d2;
L_10c994ca:;
  /* 10c994ca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c994ce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10c994d2:;
  /* 10c994d2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c994d6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c994da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c994dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c994de sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10c994e1:;
  /* 10c994e1 pop ebx */
  EBX = (pop32());
  /* 10c994e2 ret 0x10 */
  ESPCHK(0x10c99470u, _esp0);
  ESP += 20; return;
}

/* FUN_100094f0 @ 0x10c994f0 (628 bytes, 214 insns) */
void f_10c994f0(void) {
  FTRACE(0x10c994f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c994f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c994f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c994f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c994f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c994f7 push esi */
  push32((uint32_t)(ESI));
  /* 10c994f8 push edi */
  push32((uint32_t)(EDI));
L_10c994f9:;
  /* 10c994f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c994fd jne 0x10c9951d */
  if (!C.zf) goto L_10c9951d;
  /* 10c994ff push 0x10cb9e64 */
  push32((uint32_t)(0x10cb9e64u));
  /* 10c99504 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c99506 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10c99508 push 0x10cb9e58 */
  push32((uint32_t)(0x10cb9e58u));
  /* 10c9950d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9950f call 0x10c918a0 */
  push32(0x10c99514u); f_10c918a0();
  /* 10c99514 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99517 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9951a jne 0x10c9951d */
  if (!C.zf) goto L_10c9951d;
  /* 10c9951c int3  */
  x86_unimpl("int3 @ 0x10c9951c");
L_10c9951d:;
  /* 10c9951d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9951f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99521 jne 0x10c994f9 */
  if (!C.zf) goto L_10c994f9;
  /* 10c99523 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c99526 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c99529 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9952c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c9952f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c99532 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99535 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c99538 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9953e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c99540 je 0x10c9954f */
  if (C.zf) goto L_10c9954f;
  /* 10c99542 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99545 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c99548 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9954b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9954d je 0x10c99565 */
  if (C.zf) goto L_10c99565;
L_10c9954f:;
  /* 10c9954f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99552 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c99555 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10c99557 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9955a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10c9955d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c99560 jmp 0x10c9975d */
  goto L_10c9975d;
L_10c99565:;
  /* 10c99565 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99568 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c9956b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9956e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99570 je 0x10c995bc */
  if (C.zf) goto L_10c995bc;
  /* 10c99572 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99575 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c9957c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9957f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c99582 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10c99585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99587 je 0x10c995a5 */
  if (C.zf) goto L_10c995a5;
  /* 10c99589 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9958c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9958f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c99592 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c99594 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99597 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9959a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9959d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c995a0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c995a3 jmp 0x10c995bc */
  goto L_10c995bc;
L_10c995a5:;
  /* 10c995a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c995a8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c995ab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10c995ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c995b1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c995b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c995b7 jmp 0x10c9975d */
  goto L_10c9975d;
L_10c995bc:;
  /* 10c995bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c995bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c995c2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10c995c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c995c8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c995cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c995ce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c995d1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10c995d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c995d7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c995da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c995dd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c995e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c995eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c995ee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c995f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c995f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c995f7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10c995fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c995ff jne 0x10c9962f */
  if (!C.zf) goto L_10c9962f;
  /* 10c99601 cmp dword ptr [ebp - 8], 0x10cbd140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10cbd140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99608 je 0x10c99613 */
  if (C.zf) goto L_10c99613;
  /* 10c9960a cmp dword ptr [ebp - 8], 0x10cbd160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10cbd160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99611 jne 0x10c99623 */
  if (!C.zf) goto L_10c99623;
L_10c99613:;
  /* 10c99613 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c99616 push edx */
  push32((uint32_t)(EDX));
  /* 10c99617 call 0x10c9b460 */
  push32(0x10c9961cu); f_10c9b460();
  /* 10c9961c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9961f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99621 jne 0x10c9962f */
  if (!C.zf) goto L_10c9962f;
L_10c99623:;
  /* 10c99623 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99626 push eax */
  push32((uint32_t)(EAX));
  /* 10c99627 call 0x10c9b390 */
  push32(0x10c9962cu); f_10c9b390();
  /* 10c9962c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9962f:;
  /* 10c9962f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99632 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c99635 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9963b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9963d je 0x10c9971b */
  if (C.zf) goto L_10c9971b;
L_10c99643:;
  /* 10c99643 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99646 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99649 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10c9964b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9964e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c99650 jge 0x10c99673 */
  if ((C.sf==C.of)) goto L_10c99673;
  /* 10c99652 push 0x10cb9e18 */
  push32((uint32_t)(0x10cb9e18u));
  /* 10c99657 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c99659 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10c9965e push 0x10cb9e58 */
  push32((uint32_t)(0x10cb9e58u));
  /* 10c99663 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c99665 call 0x10c918a0 */
  push32(0x10c9966au); f_10c918a0();
  /* 10c9966a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9966d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99670 jne 0x10c99673 */
  if (!C.zf) goto L_10c99673;
  /* 10c99672 int3  */
  x86_unimpl("int3 @ 0x10c99672");
L_10c99673:;
  /* 10c99673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c99675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99677 jne 0x10c99643 */
  if (!C.zf) goto L_10c99643;
  /* 10c99679 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9967c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9967f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c99681 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c99684 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c99687 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9968a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c9968d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99690 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99693 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c99695 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99698 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c9969b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9969e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c996a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c996a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c996a8 jle 0x10c996c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10c996c6;
  /* 10c996aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c996ad push ecx */
  push32((uint32_t)(ECX));
  /* 10c996ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c996b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c996b4 push eax */
  push32((uint32_t)(EAX));
  /* 10c996b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c996b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c996b9 call 0x10c9b080 */
  push32(0x10c996beu); f_10c9b080();
  /* 10c996be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c996c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c996c4 jmp 0x10c9970e */
  goto L_10c9970e;
L_10c996c6:;
  /* 10c996c6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c996ca je 0x10c996e9 */
  if (C.zf) goto L_10c996e9;
  /* 10c996cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c996cf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c996d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c996d5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c996d8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c996db mov ecx, dword ptr [edx*4 + 0x10cbfde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10cbfde0)));
  /* 10c996e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c996e4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c996e7 jmp 0x10c996f0 */
  goto L_10c996f0;
L_10c996e9:;
  /* 10c996e9 mov dword ptr [ebp - 0x14], 0x10cbca60 */
  w32((uint32_t)(EBP + -0x14), (0x10cbca60u));
L_10c996f0:;
  /* 10c996f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c996f3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10c996f7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c996fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c996fc je 0x10c9970e */
  if (C.zf) goto L_10c9970e;
  /* 10c996fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10c99700 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c99702 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c99705 push ecx */
  push32((uint32_t)(ECX));
  /* 10c99706 call 0x10c9af30 */
  push32(0x10c9970bu); f_10c9af30();
  /* 10c9970b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9970e:;
  /* 10c9970e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99711 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c99714 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c99717 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c99719 jmp 0x10c99739 */
  goto L_10c99739;
L_10c9971b:;
  /* 10c9971b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c99722 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99725 push edx */
  push32((uint32_t)(EDX));
  /* 10c99726 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10c99729 push eax */
  push32((uint32_t)(EAX));
  /* 10c9972a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9972d push ecx */
  push32((uint32_t)(ECX));
  /* 10c9972e call 0x10c9b080 */
  push32(0x10c99733u); f_10c9b080();
  /* 10c99733 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99736 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c99739:;
  /* 10c99739 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9973c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9973f je 0x10c99755 */
  if (C.zf) goto L_10c99755;
  /* 10c99741 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99744 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c99747 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9974a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9974d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10c99750 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c99753 jmp 0x10c9975d */
  goto L_10c9975d;
L_10c99755:;
  /* 10c99755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c99758 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10c9975d:;
  /* 10c9975d pop edi */
  EDI = (pop32());
  /* 10c9975e pop esi */
  ESI = (pop32());
  /* 10c9975f pop ebx */
  EBX = (pop32());
  /* 10c99760 mov esp, ebp */
  ESP = (EBP);
  /* 10c99762 pop ebp */
  EBP = (pop32());
  /* 10c99763 ret  */
  ESPCHK(0x10c994f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009770 @ 0x10c99770 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10c99770(void) {
  FTRACE(0x10c99770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c99770 push ebp */
  push32((uint32_t)(EBP));
  /* 10c99771 mov ebp, esp */
  EBP = (ESP);
  /* 10c99773 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c99779 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9977a push esi */
  push32((uint32_t)(ESI));
  /* 10c9977b push edi */
  push32((uint32_t)(EDI));
  /* 10c9977c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c99783 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10c9978d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10c99794:;
  /* 10c99794 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c99797 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c99799 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10c9979c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c997a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c997a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c997a6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c997a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c997ab je 0x10c9a387 */
  if (C.zf) goto L_10c9a387;
  /* 10c997b1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c997b8 jl 0x10c9a387 */
  if ((C.sf!=C.of)) goto L_10c9a387;
  /* 10c997be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c997c2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c997c5 jl 0x10c997e6 */
  if ((C.sf!=C.of)) goto L_10c997e6;
  /* 10c997c7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c997cb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c997ce jg 0x10c997e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c997e6;
  /* 10c997d0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c997d4 movsx ecx, byte ptr [eax + 0x10cb9e50] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10cb9e50))));
  /* 10c997db and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10c997de mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10c997e4 jmp 0x10c997f0 */
  goto L_10c997f0;
L_10c997e6:;
  /* 10c997e6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10c997f0:;
  /* 10c997f0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10c997f6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c997f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c997fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c997ff movsx edx, byte ptr [ecx + eax*8 + 0x10cb9e70] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10cb9e70))));
  /* 10c99807 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c9980a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c9980d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c99810 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10c99816 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9981d ja 0x10c9a382 */
  if ((!C.cf&&!C.zf)) goto L_10c9a382;
  /* 10c99823 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10c99829 jmp dword ptr [ecx*4 + 0x10c9a394] */
  switch (ECX) {
    case 0: goto L_10c99830;
    case 1: goto L_10c998ca;
    case 2: goto L_10c9990c;
    case 3: goto L_10c9997b;
    case 4: goto L_10c999d3;
    case 5: goto L_10c999e2;
    case 6: goto L_10c99a2e;
    case 7: goto L_10c99ac1;
    case 8: goto L_10c99958;
    case 9: goto L_10c99963;
    case 10: goto L_10c9994e;
    case 11: goto L_10c99943;
    case 12: goto L_10c9996e;
    case 13: goto L_10c99976;
    default: x86_unimpl("switch@0x10c99829 out of table"); return;
  }
L_10c99830:;
  /* 10c99830 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10c99837 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c9983a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c99840 mov eax, dword ptr [0x10cbcc98] */
  EAX = (r32((uint32_t)(0x10cbcc98)));
  /* 10c99845 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c99847 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10c9984b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c99851 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c99853 je 0x10c998ad */
  if (C.zf) goto L_10c998ad;
  /* 10c99855 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10c9985b push edx */
  push32((uint32_t)(EDX));
  /* 10c9985c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9985f push eax */
  push32((uint32_t)(EAX));
  /* 10c99860 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c99864 push ecx */
  push32((uint32_t)(ECX));
  /* 10c99865 call 0x10c9a4a0 */
  push32(0x10c9986au); f_10c9a4a0();
  /* 10c9986a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9986d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c99870 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c99872 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10c99875 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c99878 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9987b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c9987e:;
  /* 10c9987e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c99882 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c99884 jne 0x10c998a7 */
  if (!C.zf) goto L_10c998a7;
  /* 10c99886 push 0x10cb9ef0 */
  push32((uint32_t)(0x10cb9ef0u));
  /* 10c9988b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9988d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10c99892 push 0x10cb9ee4 */
  push32((uint32_t)(0x10cb9ee4u));
  /* 10c99897 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c99899 call 0x10c918a0 */
  push32(0x10c9989eu); f_10c918a0();
  /* 10c9989e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c998a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c998a4 jne 0x10c998a7 */
  if (!C.zf) goto L_10c998a7;
  /* 10c998a6 int3  */
  x86_unimpl("int3 @ 0x10c998a6");
L_10c998a7:;
  /* 10c998a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c998a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c998ab jne 0x10c9987e */
  if (!C.zf) goto L_10c9987e;
L_10c998ad:;
  /* 10c998ad lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10c998b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c998b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c998b7 push edx */
  push32((uint32_t)(EDX));
  /* 10c998b8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c998bc push eax */
  push32((uint32_t)(EAX));
  /* 10c998bd call 0x10c9a4a0 */
  push32(0x10c998c2u); f_10c9a4a0();
  /* 10c998c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c998c5 jmp 0x10c9a382 */
  goto L_10c9a382;
L_10c998ca:;
  /* 10c998ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c998d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c998d4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10c998da mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10c998e0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10c998e6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c998ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c998ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c998f6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10c99900 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10c99907 jmp 0x10c9a382 */
  goto L_10c9a382;
L_10c9990c:;
  /* 10c9990c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c99910 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10c99916 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10c9991c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9991f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10c99925 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9992c ja 0x10c99976 */
  if ((!C.cf&&!C.zf)) goto L_10c99976;
  /* 10c9992e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10c99934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c99936 mov al, byte ptr [ecx + 0x10c9a3cc] */
  AL = (r8((uint32_t)(ECX + 0x10c9a3cc)));
  /* 10c9993c jmp dword ptr [eax*4 + 0x10c9a3b4] */
  switch (EAX) {
    case 0: goto L_10c99958;
    case 1: goto L_10c99963;
    case 2: goto L_10c9994e;
    case 3: goto L_10c99943;
    case 4: goto L_10c9996e;
    case 5: goto L_10c99976;
    default: x86_unimpl("switch@0x10c9993c out of table"); return;
  }
L_10c99943:;
  /* 10c99943 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99946 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c99949 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9994c jmp 0x10c99976 */
  goto L_10c99976;
L_10c9994e:;
  /* 10c9994e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99951 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10c99953 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c99956 jmp 0x10c99976 */
  goto L_10c99976;
L_10c99958:;
  /* 10c99958 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9995b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9995e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c99961 jmp 0x10c99976 */
  goto L_10c99976;
L_10c99963:;
  /* 10c99963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99966 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10c99969 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9996c jmp 0x10c99976 */
  goto L_10c99976;
L_10c9996e:;
  /* 10c9996e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99971 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10c99973 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c99976:;
  /* 10c99976 jmp 0x10c9a382 */
  goto L_10c9a382;
L_10c9997b:;
  /* 10c9997b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c9997f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99982 jne 0x10c999b7 */
  if (!C.zf) goto L_10c999b7;
  /* 10c99984 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c99987 push edx */
  push32((uint32_t)(EDX));
  /* 10c99988 call 0x10c9a5b0 */
  push32(0x10c9998du); f_10c9a5b0();
  /* 10c9998d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99990 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10c99996 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9999d jge 0x10c999b5 */
  if ((C.sf==C.of)) goto L_10c999b5;
  /* 10c9999f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c999a2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10c999a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c999a7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c999ad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c999af mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10c999b5:;
  /* 10c999b5 jmp 0x10c999ce */
  goto L_10c999ce;
L_10c999b7:;
  /* 10c999b7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c999bd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c999c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c999c4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10c999c8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10c999ce:;
  /* 10c999ce jmp 0x10c9a382 */
  goto L_10c9a382;
L_10c999d3:;
  /* 10c999d3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10c999dd jmp 0x10c9a382 */
  goto L_10c9a382;
L_10c999e2:;
  /* 10c999e2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c999e6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c999e9 jne 0x10c99a12 */
  if (!C.zf) goto L_10c99a12;
  /* 10c999eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c999ee push eax */
  push32((uint32_t)(EAX));
  /* 10c999ef call 0x10c9a5b0 */
  push32(0x10c999f4u); f_10c9a5b0();
  /* 10c999f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c999f7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10c999fd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99a04 jge 0x10c99a10 */
  if ((C.sf==C.of)) goto L_10c99a10;
  /* 10c99a06 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10c99a10:;
  /* 10c99a10 jmp 0x10c99a29 */
  goto L_10c99a29;
L_10c99a12:;
  /* 10c99a12 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c99a18 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c99a1b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c99a1f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10c99a23 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10c99a29:;
  /* 10c99a29 jmp 0x10c9a382 */
  goto L_10c9a382;
L_10c99a2e:;
  /* 10c99a2e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c99a32 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10c99a38 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10c99a3e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c99a41 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10c99a47 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99a4e ja 0x10c99abc */
  if ((!C.cf&&!C.zf)) goto L_10c99abc;
  /* 10c99a50 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10c99a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c99a58 mov al, byte ptr [ecx + 0x10c9a3f1] */
  AL = (r8((uint32_t)(ECX + 0x10c9a3f1)));
  /* 10c99a5e jmp dword ptr [eax*4 + 0x10c9a3dd] */
  switch (EAX) {
    case 0: goto L_10c99a70;
    case 1: goto L_10c99aa9;
    case 2: goto L_10c99a65;
    case 3: goto L_10c99ab3;
    case 4: goto L_10c99abc;
    default: x86_unimpl("switch@0x10c99a5e out of table"); return;
  }
L_10c99a65:;
  /* 10c99a65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99a68 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10c99a6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c99a6e jmp 0x10c99abc */
  goto L_10c99abc;
L_10c99a70:;
  /* 10c99a70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c99a73 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c99a76 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99a79 jne 0x10c99a9b */
  if (!C.zf) goto L_10c99a9b;
  /* 10c99a7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c99a7e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c99a82 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99a85 jne 0x10c99a9b */
  if (!C.zf) goto L_10c99a9b;
  /* 10c99a87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c99a8a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99a8d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c99a90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99a93 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c99a96 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c99a99 jmp 0x10c99aa7 */
  goto L_10c99aa7;
L_10c99a9b:;
  /* 10c99a9b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10c99aa2 jmp 0x10c99830 */
  goto L_10c99830;
L_10c99aa7:;
  /* 10c99aa7 jmp 0x10c99abc */
  goto L_10c99abc;
L_10c99aa9:;
  /* 10c99aa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99aac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10c99aae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c99ab1 jmp 0x10c99abc */
  goto L_10c99abc;
L_10c99ab3:;
  /* 10c99ab3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99ab6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c99ab9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c99abc:;
  /* 10c99abc jmp 0x10c9a382 */
  goto L_10c9a382;
L_10c99ac1:;
  /* 10c99ac1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c99ac5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10c99acb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10c99ad1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c99ad4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10c99ada cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99ae1 ja 0x10c9a1a7 */
  if ((!C.cf&&!C.zf)) goto L_10c9a1a7;
  /* 10c99ae7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10c99aed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c99aef mov cl, byte ptr [edx + 0x10c9a45c] */
  CL = (r8((uint32_t)(EDX + 0x10c9a45c)));
  /* 10c99af5 jmp dword ptr [ecx*4 + 0x10c9a420] */
  switch (ECX) {
    case 0: goto L_10c99afc;
    case 1: goto L_10c99d90;
    case 2: goto L_10c99c20;
    case 3: goto L_10c99ec9;
    case 4: goto L_10c99b8b;
    case 5: goto L_10c99b11;
    case 6: goto L_10c99e9b;
    case 7: goto L_10c99da0;
    case 8: goto L_10c99d45;
    case 9: goto L_10c99f15;
    case 10: goto L_10c99ebf;
    case 11: goto L_10c99c36;
    case 12: goto L_10c99eb3;
    case 13: goto L_10c99ed5;
    case 14: goto L_10c9a1a7;
    default: x86_unimpl("switch@0x10c99af5 out of table"); return;
  }
L_10c99afc:;
  /* 10c99afc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99aff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10c99b04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99b06 jne 0x10c99b11 */
  if (!C.zf) goto L_10c99b11;
  /* 10c99b08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99b0b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c99b0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c99b11:;
  /* 10c99b11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99b14 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10c99b1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c99b1c je 0x10c99b57 */
  if (C.zf) goto L_10c99b57;
  /* 10c99b1e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c99b21 push eax */
  push32((uint32_t)(EAX));
  /* 10c99b22 call 0x10c9a5f0 */
  push32(0x10c99b27u); f_10c9a5f0();
  /* 10c99b27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99b2a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10c99b2e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10c99b32 push ecx */
  push32((uint32_t)(ECX));
  /* 10c99b33 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10c99b39 push edx */
  push32((uint32_t)(EDX));
  /* 10c99b3a call 0x10c9b6d0 */
  push32(0x10c99b3fu); f_10c9b6d0();
  /* 10c99b3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99b42 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c99b45 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99b49 jge 0x10c99b55 */
  if ((C.sf==C.of)) goto L_10c99b55;
  /* 10c99b4b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10c99b55:;
  /* 10c99b55 jmp 0x10c99b7d */
  goto L_10c99b7d;
L_10c99b57:;
  /* 10c99b57 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c99b5a push eax */
  push32((uint32_t)(EAX));
  /* 10c99b5b call 0x10c9a5b0 */
  push32(0x10c99b60u); f_10c9a5b0();
  /* 10c99b60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99b63 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10c99b6a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10c99b70 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10c99b76 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10c99b7d:;
  /* 10c99b7d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10c99b83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c99b86 jmp 0x10c9a1a7 */
  goto L_10c9a1a7;
L_10c99b8b:;
  /* 10c99b8b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c99b8e push eax */
  push32((uint32_t)(EAX));
  /* 10c99b8f call 0x10c9a5b0 */
  push32(0x10c99b94u); f_10c9a5b0();
  /* 10c99b94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99b97 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10c99b9d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99ba4 je 0x10c99bb2 */
  if (C.zf) goto L_10c99bb2;
  /* 10c99ba6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c99bac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99bb0 jne 0x10c99bcc */
  if (!C.zf) goto L_10c99bcc;
L_10c99bb2:;
  /* 10c99bb2 mov edx, dword ptr [0x10cbcfb0] */
  EDX = (r32((uint32_t)(0x10cbcfb0)));
  /* 10c99bb8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c99bbb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c99bbe push eax */
  push32((uint32_t)(EAX));
  /* 10c99bbf call 0x10c95610 */
  push32(0x10c99bc4u); f_10c95610();
  /* 10c99bc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99bc7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c99bca jmp 0x10c99c1b */
  goto L_10c99c1b;
L_10c99bcc:;
  /* 10c99bcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99bcf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10c99bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c99bd7 je 0x10c99bfc */
  if (C.zf) goto L_10c99bfc;
  /* 10c99bd9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c99bdf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c99be2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c99be5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c99beb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10c99bee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c99bf0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c99bf3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10c99bfa jmp 0x10c99c1b */
  goto L_10c99c1b;
L_10c99bfc:;
  /* 10c99bfc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10c99c03 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c99c09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c99c0c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c99c0f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c99c15 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10c99c18 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c99c1b:;
  /* 10c99c1b jmp 0x10c9a1a7 */
  goto L_10c9a1a7;
L_10c99c20:;
  /* 10c99c20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99c23 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10c99c29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c99c2b jne 0x10c99c36 */
  if (!C.zf) goto L_10c99c36;
  /* 10c99c2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99c30 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c99c33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c99c36:;
  /* 10c99c36 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99c3d jne 0x10c99c4b */
  if (!C.zf) goto L_10c99c4b;
  /* 10c99c3f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10c99c49 jmp 0x10c99c57 */
  goto L_10c99c57;
L_10c99c4b:;
  /* 10c99c4b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c99c51 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10c99c57:;
  /* 10c99c57 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10c99c5d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10c99c63 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c99c66 push edx */
  push32((uint32_t)(EDX));
  /* 10c99c67 call 0x10c9a5b0 */
  push32(0x10c99c6cu); f_10c9a5b0();
  /* 10c99c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99c6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c99c72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99c75 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10c99c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99c7c je 0x10c99ce6 */
  if (C.zf) goto L_10c99ce6;
  /* 10c99c7e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99c82 jne 0x10c99c8d */
  if (!C.zf) goto L_10c99c8d;
  /* 10c99c84 mov ecx, dword ptr [0x10cbcfb4] */
  ECX = (r32((uint32_t)(0x10cbcfb4)));
  /* 10c99c8a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c99c8d:;
  /* 10c99c8d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10c99c94 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c99c97 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10c99c9d:;
  /* 10c99c9d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c99ca3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c99ca9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c99cac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10c99cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99cb4 je 0x10c99cd6 */
  if (C.zf) goto L_10c99cd6;
  /* 10c99cb6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10c99cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c99cbe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10c99cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99cc3 je 0x10c99cd6 */
  if (C.zf) goto L_10c99cd6;
  /* 10c99cc5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10c99ccb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99cce mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10c99cd4 jmp 0x10c99c9d */
  goto L_10c99c9d;
L_10c99cd6:;
  /* 10c99cd6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10c99cdc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c99cdf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c99ce1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c99ce4 jmp 0x10c99d40 */
  goto L_10c99d40;
L_10c99ce6:;
  /* 10c99ce6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99cea jne 0x10c99cf4 */
  if (!C.zf) goto L_10c99cf4;
  /* 10c99cec mov eax, dword ptr [0x10cbcfb0] */
  EAX = (r32((uint32_t)(0x10cbcfb0)));
  /* 10c99cf1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10c99cf4:;
  /* 10c99cf4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c99cf7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10c99cfd:;
  /* 10c99cfd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c99d03 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c99d09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c99d0c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10c99d12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c99d14 je 0x10c99d34 */
  if (C.zf) goto L_10c99d34;
  /* 10c99d16 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10c99d1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c99d1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c99d21 je 0x10c99d34 */
  if (C.zf) goto L_10c99d34;
  /* 10c99d23 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10c99d29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99d2c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10c99d32 jmp 0x10c99cfd */
  goto L_10c99cfd;
L_10c99d34:;
  /* 10c99d34 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10c99d3a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c99d3d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10c99d40:;
  /* 10c99d40 jmp 0x10c9a1a7 */
  goto L_10c9a1a7;
L_10c99d45:;
  /* 10c99d45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c99d48 push edx */
  push32((uint32_t)(EDX));
  /* 10c99d49 call 0x10c9a5b0 */
  push32(0x10c99d4eu); f_10c9a5b0();
  /* 10c99d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99d51 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10c99d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99d5a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c99d5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99d5f je 0x10c99d73 */
  if (C.zf) goto L_10c99d73;
  /* 10c99d61 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10c99d67 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10c99d6e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10c99d71 jmp 0x10c99d81 */
  goto L_10c99d81;
L_10c99d73:;
  /* 10c99d73 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10c99d79 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10c99d7f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10c99d81:;
  /* 10c99d81 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10c99d8b jmp 0x10c9a1a7 */
  goto L_10c9a1a7;
L_10c99d90:;
  /* 10c99d90 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c99d97 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10c99d9a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c99d9d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10c99da0:;
  /* 10c99da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99da3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10c99da5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c99da8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10c99dae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c99db1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99db8 jge 0x10c99dc6 */
  if ((C.sf==C.of)) goto L_10c99dc6;
  /* 10c99dba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10c99dc4 jmp 0x10c99de2 */
  goto L_10c99de2;
L_10c99dc6:;
  /* 10c99dc6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99dcd jne 0x10c99de2 */
  if (!C.zf) goto L_10c99de2;
  /* 10c99dcf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c99dd3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99dd6 jne 0x10c99de2 */
  if (!C.zf) goto L_10c99de2;
  /* 10c99dd8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10c99de2:;
  /* 10c99de2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c99de5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99de8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10c99deb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c99dee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c99df1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c99df3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c99df6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10c99dfc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10c99e02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c99e05 push ecx */
  push32((uint32_t)(ECX));
  /* 10c99e06 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c99e0c push edx */
  push32((uint32_t)(EDX));
  /* 10c99e0d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c99e11 push eax */
  push32((uint32_t)(EAX));
  /* 10c99e12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c99e15 push ecx */
  push32((uint32_t)(ECX));
  /* 10c99e16 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10c99e1c push edx */
  push32((uint32_t)(EDX));
  /* 10c99e1d call dword ptr [0x10cbd3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbd3a0))), 0x10c99e23u);
  /* 10c99e23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99e26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99e29 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10c99e2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99e30 je 0x10c99e48 */
  if (C.zf) goto L_10c99e48;
  /* 10c99e32 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99e39 jne 0x10c99e48 */
  if (!C.zf) goto L_10c99e48;
  /* 10c99e3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c99e3e push ecx */
  push32((uint32_t)(ECX));
  /* 10c99e3f call dword ptr [0x10cbd3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbd3ac))), 0x10c99e45u);
  /* 10c99e45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c99e48:;
  /* 10c99e48 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c99e4c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99e4f jne 0x10c99e6a */
  if (!C.zf) goto L_10c99e6a;
  /* 10c99e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99e54 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10c99e59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99e5b jne 0x10c99e6a */
  if (!C.zf) goto L_10c99e6a;
  /* 10c99e5d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c99e60 push ecx */
  push32((uint32_t)(ECX));
  /* 10c99e61 call dword ptr [0x10cbd3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbd3a4))), 0x10c99e67u);
  /* 10c99e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c99e6a:;
  /* 10c99e6a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c99e6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c99e70 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c99e73 jne 0x10c99e87 */
  if (!C.zf) goto L_10c99e87;
  /* 10c99e75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99e78 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c99e7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c99e7e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c99e81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99e84 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10c99e87:;
  /* 10c99e87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c99e8a push eax */
  push32((uint32_t)(EAX));
  /* 10c99e8b call 0x10c95610 */
  push32(0x10c99e90u); f_10c95610();
  /* 10c99e90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99e93 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c99e96 jmp 0x10c9a1a7 */
  goto L_10c9a1a7;
L_10c99e9b:;
  /* 10c99e9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99e9e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10c99ea1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c99ea4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10c99eae jmp 0x10c99f35 */
  goto L_10c99f35;
L_10c99eb3:;
  /* 10c99eb3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10c99ebd jmp 0x10c99f35 */
  goto L_10c99f35;
L_10c99ebf:;
  /* 10c99ebf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10c99ec9:;
  /* 10c99ec9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10c99ed3 jmp 0x10c99edf */
  goto L_10c99edf;
L_10c99ed5:;
  /* 10c99ed5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10c99edf:;
  /* 10c99edf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10c99ee9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99eec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10c99ef2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c99ef4 je 0x10c99f13 */
  if (C.zf) goto L_10c99f13;
  /* 10c99ef6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10c99efd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10c99f03 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99f06 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10c99f0c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10c99f13:;
  /* 10c99f13 jmp 0x10c99f35 */
  goto L_10c99f35;
L_10c99f15:;
  /* 10c99f15 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10c99f1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99f22 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10c99f28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c99f2a je 0x10c99f35 */
  if (C.zf) goto L_10c99f35;
  /* 10c99f2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99f2f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c99f32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c99f35:;
  /* 10c99f35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99f38 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10c99f3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99f3f je 0x10c99f5e */
  if (C.zf) goto L_10c99f5e;
  /* 10c99f41 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c99f44 push ecx */
  push32((uint32_t)(ECX));
  /* 10c99f45 call 0x10c9a5d0 */
  push32(0x10c99f4au); f_10c9a5d0();
  /* 10c99f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99f4d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c99f53 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10c99f59 jmp 0x10c99fef */
  goto L_10c99fef;
L_10c99f5e:;
  /* 10c99f5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99f61 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10c99f64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c99f66 je 0x10c99fb0 */
  if (C.zf) goto L_10c99fb0;
  /* 10c99f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99f6b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c99f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99f70 je 0x10c99f90 */
  if (C.zf) goto L_10c99f90;
  /* 10c99f72 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c99f75 push ecx */
  push32((uint32_t)(ECX));
  /* 10c99f76 call 0x10c9a5b0 */
  push32(0x10c99f7bu); f_10c9a5b0();
  /* 10c99f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99f7e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10c99f81 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c99f82 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c99f88 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10c99f8e jmp 0x10c99fae */
  goto L_10c99fae;
L_10c99f90:;
  /* 10c99f90 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c99f93 push edx */
  push32((uint32_t)(EDX));
  /* 10c99f94 call 0x10c9a5b0 */
  push32(0x10c99f99u); f_10c9a5b0();
  /* 10c99f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99f9c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c99fa1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c99fa2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c99fa8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10c99fae:;
  /* 10c99fae jmp 0x10c99fef */
  goto L_10c99fef;
L_10c99fb0:;
  /* 10c99fb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99fb3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c99fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c99fb8 je 0x10c99fd5 */
  if (C.zf) goto L_10c99fd5;
  /* 10c99fba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c99fbd push ecx */
  push32((uint32_t)(ECX));
  /* 10c99fbe call 0x10c9a5b0 */
  push32(0x10c99fc3u); f_10c9a5b0();
  /* 10c99fc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99fc6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c99fc7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c99fcd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10c99fd3 jmp 0x10c99fef */
  goto L_10c99fef;
L_10c99fd5:;
  /* 10c99fd5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c99fd8 push edx */
  push32((uint32_t)(EDX));
  /* 10c99fd9 call 0x10c9a5b0 */
  push32(0x10c99fdeu); f_10c9a5b0();
  /* 10c99fde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c99fe1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c99fe3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c99fe9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10c99fef:;
  /* 10c99fef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c99ff2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10c99ff5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c99ff7 je 0x10c9a037 */
  if (C.zf) goto L_10c9a037;
  /* 10c99ff9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a000 jg 0x10c9a037 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9a037;
  /* 10c9a002 jl 0x10c9a00d */
  if ((C.sf!=C.of)) goto L_10c9a00d;
  /* 10c9a004 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a00b jae 0x10c9a037 */
  if (!C.cf) goto L_10c9a037;
L_10c9a00d:;
  /* 10c9a00d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10c9a013 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9a015 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10c9a01b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a01e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9a020 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c9a026 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10c9a02c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a02f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c9a032 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9a035 jmp 0x10c9a04f */
  goto L_10c9a04f;
L_10c9a037:;
  /* 10c9a037 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10c9a03d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c9a043 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10c9a049 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10c9a04f:;
  /* 10c9a04f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a052 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a058 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9a05a jne 0x10c9a077 */
  if (!C.zf) goto L_10c9a077;
  /* 10c9a05c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c9a062 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10c9a068 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9a06b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c9a071 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10c9a077:;
  /* 10c9a077 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a07e jge 0x10c9a08c */
  if ((C.sf==C.of)) goto L_10c9a08c;
  /* 10c9a080 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10c9a08a jmp 0x10c9a095 */
  goto L_10c9a095;
L_10c9a08c:;
  /* 10c9a08c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a08f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a092 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c9a095:;
  /* 10c9a095 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c9a09b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10c9a0a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9a0a3 jne 0x10c9a0ac */
  if (!C.zf) goto L_10c9a0ac;
  /* 10c9a0a5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c9a0ac:;
  /* 10c9a0ac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10c9a0af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c9a0b2:;
  /* 10c9a0b2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c9a0b8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c9a0be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a0c1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10c9a0c7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9a0c9 jg 0x10c9a0df */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9a0df;
  /* 10c9a0cb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c9a0d1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10c9a0d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9a0d9 je 0x10c9a160 */
  if (C.zf) goto L_10c9a160;
L_10c9a0df:;
  /* 10c9a0df mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10c9a0e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c9a0e6 push edx */
  push32((uint32_t)(EDX));
  /* 10c9a0e7 push eax */
  push32((uint32_t)(EAX));
  /* 10c9a0e8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10c9a0ee push edx */
  push32((uint32_t)(EDX));
  /* 10c9a0ef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c9a0f5 push eax */
  push32((uint32_t)(EAX));
  /* 10c9a0f6 call 0x10c99470 */
  push32(0x10c9a0fbu); f_10c99470();
  /* 10c9a0fb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a0fe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10c9a104 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10c9a10a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c9a10b push edx */
  push32((uint32_t)(EDX));
  /* 10c9a10c push eax */
  push32((uint32_t)(EAX));
  /* 10c9a10d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10c9a113 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a114 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c9a11a push edx */
  push32((uint32_t)(EDX));
  /* 10c9a11b call 0x10c99400 */
  push32(0x10c9a120u); f_10c99400();
  /* 10c9a120 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c9a126 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10c9a12c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a133 jle 0x10c9a147 */
  if ((C.zf||C.sf!=C.of)) goto L_10c9a147;
  /* 10c9a135 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10c9a13b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a141 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10c9a147:;
  /* 10c9a147 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9a14a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10c9a150 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10c9a152 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9a155 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a158 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c9a15b jmp 0x10c9a0b2 */
  goto L_10c9a0b2;
L_10c9a160:;
  /* 10c9a160 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10c9a163 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a166 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c9a169 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9a16c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a16f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c9a172 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a175 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9a17a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9a17c je 0x10c9a1a7 */
  if (C.zf) goto L_10c9a1a7;
  /* 10c9a17e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9a181 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9a184 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a187 jne 0x10c9a18f */
  if (!C.zf) goto L_10c9a18f;
  /* 10c9a189 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a18d jne 0x10c9a1a7 */
  if (!C.zf) goto L_10c9a1a7;
L_10c9a18f:;
  /* 10c9a18f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9a192 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a195 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c9a198 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9a19b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10c9a19e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9a1a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a1a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10c9a1a7:;
  /* 10c9a1a7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a1ae jne 0x10c9a382 */
  if (!C.zf) goto L_10c9a382;
  /* 10c9a1b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a1b7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9a1ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9a1bc je 0x10c9a20d */
  if (C.zf) goto L_10c9a20d;
  /* 10c9a1be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a1c1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9a1c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9a1c9 je 0x10c9a1db */
  if (C.zf) goto L_10c9a1db;
  /* 10c9a1cb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10c9a1d2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c9a1d9 jmp 0x10c9a20d */
  goto L_10c9a20d;
L_10c9a1db:;
  /* 10c9a1db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a1de and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a1e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9a1e3 je 0x10c9a1f5 */
  if (C.zf) goto L_10c9a1f5;
  /* 10c9a1e5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10c9a1ec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c9a1f3 jmp 0x10c9a20d */
  goto L_10c9a20d;
L_10c9a1f5:;
  /* 10c9a1f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a1f8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9a1fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9a1fd je 0x10c9a20d */
  if (C.zf) goto L_10c9a20d;
  /* 10c9a1ff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10c9a206 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10c9a20d:;
  /* 10c9a20d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c9a213 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a216 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a219 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10c9a21f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a222 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a225 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9a227 jne 0x10c9a245 */
  if (!C.zf) goto L_10c9a245;
  /* 10c9a229 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c9a22f push eax */
  push32((uint32_t)(EAX));
  /* 10c9a230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a233 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a234 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10c9a23a push edx */
  push32((uint32_t)(EDX));
  /* 10c9a23b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c9a23d call 0x10c9a520 */
  push32(0x10c9a242u); f_10c9a520();
  /* 10c9a242 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9a245:;
  /* 10c9a245 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c9a24b push eax */
  push32((uint32_t)(EAX));
  /* 10c9a24c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a24f push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a250 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9a253 push edx */
  push32((uint32_t)(EDX));
  /* 10c9a254 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10c9a25a push eax */
  push32((uint32_t)(EAX));
  /* 10c9a25b call 0x10c9a560 */
  push32(0x10c9a260u); f_10c9a560();
  /* 10c9a260 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a263 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a266 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9a269 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9a26b je 0x10c9a293 */
  if (C.zf) goto L_10c9a293;
  /* 10c9a26d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a270 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a273 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9a275 jne 0x10c9a293 */
  if (!C.zf) goto L_10c9a293;
  /* 10c9a277 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c9a27d push eax */
  push32((uint32_t)(EAX));
  /* 10c9a27e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a281 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a282 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10c9a288 push edx */
  push32((uint32_t)(EDX));
  /* 10c9a289 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c9a28b call 0x10c9a520 */
  push32(0x10c9a290u); f_10c9a520();
  /* 10c9a290 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9a293:;
  /* 10c9a293 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a297 je 0x10c9a341 */
  if (C.zf) goto L_10c9a341;
  /* 10c9a29d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a2a1 jle 0x10c9a341 */
  if ((C.zf||C.sf!=C.of)) goto L_10c9a341;
  /* 10c9a2a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9a2aa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10c9a2b0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9a2b3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10c9a2b9:;
  /* 10c9a2b9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10c9a2bf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10c9a2c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a2c8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10c9a2ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9a2d0 je 0x10c9a33f */
  if (C.zf) goto L_10c9a33f;
  /* 10c9a2d2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10c9a2d8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10c9a2db mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10c9a2e2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10c9a2e9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9a2ea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10c9a2f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a2f1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10c9a2f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a2fa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10c9a300 call 0x10c9b6d0 */
  push32(0x10c9a305u); f_10c9b6d0();
  /* 10c9a305 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a308 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10c9a30e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a315 jg 0x10c9a319 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9a319;
  /* 10c9a317 jmp 0x10c9a33f */
  goto L_10c9a33f;
L_10c9a319:;
  /* 10c9a319 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c9a31f push eax */
  push32((uint32_t)(EAX));
  /* 10c9a320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a323 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a324 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10c9a32a push edx */
  push32((uint32_t)(EDX));
  /* 10c9a32b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10c9a331 push eax */
  push32((uint32_t)(EAX));
  /* 10c9a332 call 0x10c9a560 */
  push32(0x10c9a337u); f_10c9a560();
  /* 10c9a337 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a33a jmp 0x10c9a2b9 */
  goto L_10c9a2b9;
L_10c9a33f:;
  /* 10c9a33f jmp 0x10c9a35c */
  goto L_10c9a35c;
L_10c9a341:;
  /* 10c9a341 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10c9a347 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a348 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a34b push edx */
  push32((uint32_t)(EDX));
  /* 10c9a34c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9a34f push eax */
  push32((uint32_t)(EAX));
  /* 10c9a350 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9a353 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a354 call 0x10c9a560 */
  push32(0x10c9a359u); f_10c9a560();
  /* 10c9a359 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9a35c:;
  /* 10c9a35c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a35f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a362 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9a364 je 0x10c9a382 */
  if (C.zf) goto L_10c9a382;
  /* 10c9a366 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c9a36c push eax */
  push32((uint32_t)(EAX));
  /* 10c9a36d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a370 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a371 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10c9a377 push edx */
  push32((uint32_t)(EDX));
  /* 10c9a378 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c9a37a call 0x10c9a520 */
  push32(0x10c9a37fu); f_10c9a520();
  /* 10c9a37f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9a382:;
  /* 10c9a382 jmp 0x10c99794 */
  goto L_10c99794;
L_10c9a387:;
  /* 10c9a387 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10c9a38d pop edi */
  EDI = (pop32());
  /* 10c9a38e pop esi */
  ESI = (pop32());
  /* 10c9a38f pop ebx */
  EBX = (pop32());
  /* 10c9a390 mov esp, ebp */
  ESP = (EBP);
  /* 10c9a392 pop ebp */
  EBP = (pop32());
  /* 10c9a393 ret  */
  ESPCHK(0x10c99770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4a0 @ 0x10c9a4a0 (119 bytes, 44 insns) */
void f_10c9a4a0(void) {
  FTRACE(0x10c9a4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9a4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9a4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9a4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a4a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a4a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c9a4aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a4ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a4b0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c9a4b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a4b6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a4ba jl 0x10c9a4e2 */
  if ((C.sf!=C.of)) goto L_10c9a4e2;
  /* 10c9a4bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a4bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9a4c1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c9a4c4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10c9a4c6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10c9a4ca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9a4d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c9a4d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a4d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c9a4d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a4db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a4de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c9a4e0 jmp 0x10c9a4f5 */
  goto L_10c9a4f5;
L_10c9a4e2:;
  /* 10c9a4e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a4e5 push edx */
  push32((uint32_t)(EDX));
  /* 10c9a4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a4e9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9a4ea call 0x10c994f0 */
  push32(0x10c9a4efu); f_10c994f0();
  /* 10c9a4ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a4f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9a4f5:;
  /* 10c9a4f5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a4f9 jne 0x10c9a506 */
  if (!C.zf) goto L_10c9a506;
  /* 10c9a4fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9a4fe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c9a504 jmp 0x10c9a513 */
  goto L_10c9a513;
L_10c9a506:;
  /* 10c9a506 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9a509 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c9a50b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a50e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9a511 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10c9a513:;
  /* 10c9a513 mov esp, ebp */
  ESP = (EBP);
  /* 10c9a515 pop ebp */
  EBP = (pop32());
  /* 10c9a516 ret  */
  ESPCHK(0x10c9a4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a520 @ 0x10c9a520 (53 bytes, 23 insns) */
void f_10c9a520(void) {
  FTRACE(0x10c9a520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9a520 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9a521 mov ebp, esp */
  EBP = (ESP);
L_10c9a523:;
  /* 10c9a523 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a526 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a529 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a52c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c9a52f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9a531 jle 0x10c9a553 */
  if ((C.zf||C.sf!=C.of)) goto L_10c9a553;
  /* 10c9a533 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9a536 push edx */
  push32((uint32_t)(EDX));
  /* 10c9a537 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9a53a push eax */
  push32((uint32_t)(EAX));
  /* 10c9a53b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a53e push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a53f call 0x10c9a4a0 */
  push32(0x10c9a544u); f_10c9a4a0();
  /* 10c9a544 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a547 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9a54a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a54d jne 0x10c9a551 */
  if (!C.zf) goto L_10c9a551;
  /* 10c9a54f jmp 0x10c9a553 */
  goto L_10c9a553;
L_10c9a551:;
  /* 10c9a551 jmp 0x10c9a523 */
  goto L_10c9a523;
L_10c9a553:;
  /* 10c9a553 pop ebp */
  EBP = (pop32());
  /* 10c9a554 ret  */
  ESPCHK(0x10c9a520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a560 @ 0x10c9a560 (74 bytes, 31 insns) */
void f_10c9a560(void) {
  FTRACE(0x10c9a560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9a560 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9a561 mov ebp, esp */
  EBP = (ESP);
  /* 10c9a563 push ecx */
  push32((uint32_t)(ECX));
L_10c9a564:;
  /* 10c9a564 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a567 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a56a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a56d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c9a570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9a572 jle 0x10c9a5a6 */
  if ((C.zf||C.sf!=C.of)) goto L_10c9a5a6;
  /* 10c9a574 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9a577 push edx */
  push32((uint32_t)(EDX));
  /* 10c9a578 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9a57b push eax */
  push32((uint32_t)(EAX));
  /* 10c9a57c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a57f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9a582 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9a585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a588 push eax */
  push32((uint32_t)(EAX));
  /* 10c9a589 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a58c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a58f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c9a592 call 0x10c9a4a0 */
  push32(0x10c9a597u); f_10c9a4a0();
  /* 10c9a597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a59a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9a59d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a5a0 jne 0x10c9a5a4 */
  if (!C.zf) goto L_10c9a5a4;
  /* 10c9a5a2 jmp 0x10c9a5a6 */
  goto L_10c9a5a6;
L_10c9a5a4:;
  /* 10c9a5a4 jmp 0x10c9a564 */
  goto L_10c9a564;
L_10c9a5a6:;
  /* 10c9a5a6 mov esp, ebp */
  ESP = (EBP);
  /* 10c9a5a8 pop ebp */
  EBP = (pop32());
  /* 10c9a5a9 ret  */
  ESPCHK(0x10c9a560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5b0 @ 0x10c9a5b0 (26 bytes, 12 insns) */
void f_10c9a5b0(void) {
  FTRACE(0x10c9a5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9a5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9a5b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9a5b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a5b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c9a5b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a5bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a5be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c9a5c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a5c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c9a5c5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c9a5c8 pop ebp */
  EBP = (pop32());
  /* 10c9a5c9 ret  */
  ESPCHK(0x10c9a5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5d0 @ 0x10c9a5d0 (31 bytes, 14 insns) */
void f_10c9a5d0(void) {
  FTRACE(0x10c9a5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9a5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9a5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9a5d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a5d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c9a5d8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a5db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a5de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c9a5e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a5e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c9a5e5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a5e8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c9a5ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c9a5ed pop ebp */
  EBP = (pop32());
  /* 10c9a5ee ret  */
  ESPCHK(0x10c9a5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5f0 @ 0x10c9a5f0 (27 bytes, 12 insns) */
void f_10c9a5f0(void) {
  FTRACE(0x10c9a5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9a5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9a5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9a5f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a5f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c9a5f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a5fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a5fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c9a600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a603 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c9a605 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10c9a609 pop ebp */
  EBP = (pop32());
  /* 10c9a60a ret  */
  ESPCHK(0x10c9a5f0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10c9a610 (145 bytes, 42 insns) */
void f_10c9a610(void) {
  FTRACE(0x10c9a610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9a610 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9a611 mov ebp, esp */
  EBP = (ESP);
  /* 10c9a613 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9a614 call 0x10c9a6c0 */
  push32(0x10c9a619u); f_10c9a6c0();
  /* 10c9a619 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a61c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c9a61e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9a625 jmp 0x10c9a630 */
  goto L_10c9a630;
L_10c9a627:;
  /* 10c9a627 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a62a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a62d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c9a630:;
  /* 10c9a630 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a634 jae 0x10c9a65a */
  if (!C.cf) goto L_10c9a65a;
  /* 10c9a636 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a63c cmp ecx, dword ptr [eax*8 + 0x10cbcfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10cbcfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a643 jne 0x10c9a658 */
  if (!C.zf) goto L_10c9a658;
  /* 10c9a645 call 0x10c9a6b0 */
  push32(0x10c9a64au); f_10c9a6b0();
  /* 10c9a64a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9a64d mov ecx, dword ptr [edx*8 + 0x10cbcfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10cbcfbc)));
  /* 10c9a654 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c9a656 jmp 0x10c9a69d */
  goto L_10c9a69d;
L_10c9a658:;
  /* 10c9a658 jmp 0x10c9a627 */
  goto L_10c9a627;
L_10c9a65a:;
  /* 10c9a65a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a65e jb 0x10c9a673 */
  if (C.cf) goto L_10c9a673;
  /* 10c9a660 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a664 ja 0x10c9a673 */
  if ((!C.cf&&!C.zf)) goto L_10c9a673;
  /* 10c9a666 call 0x10c9a6b0 */
  push32(0x10c9a66bu); f_10c9a6b0();
  /* 10c9a66b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10c9a671 jmp 0x10c9a69d */
  goto L_10c9a69d;
L_10c9a673:;
  /* 10c9a673 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a67a jb 0x10c9a692 */
  if (C.cf) goto L_10c9a692;
  /* 10c9a67c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a683 ja 0x10c9a692 */
  if ((!C.cf&&!C.zf)) goto L_10c9a692;
  /* 10c9a685 call 0x10c9a6b0 */
  push32(0x10c9a68au); f_10c9a6b0();
  /* 10c9a68a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10c9a690 jmp 0x10c9a69d */
  goto L_10c9a69d;
L_10c9a692:;
  /* 10c9a692 call 0x10c9a6b0 */
  push32(0x10c9a697u); f_10c9a6b0();
  /* 10c9a697 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10c9a69d:;
  /* 10c9a69d mov esp, ebp */
  ESP = (EBP);
  /* 10c9a69f pop ebp */
  EBP = (pop32());
  /* 10c9a6a0 ret  */
  ESPCHK(0x10c9a610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x10c9a6b0 (13 bytes, 6 insns) */
void f_10c9a6b0(void) {
  FTRACE(0x10c9a6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9a6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9a6b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9a6b3 call 0x10c92220 */
  push32(0x10c9a6b8u); f_10c92220();
  /* 10c9a6b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a6bb pop ebp */
  EBP = (pop32());
  /* 10c9a6bc ret  */
  ESPCHK(0x10c9a6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6c0 @ 0x10c9a6c0 (13 bytes, 6 insns) */
void f_10c9a6c0(void) {
  FTRACE(0x10c9a6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9a6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9a6c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9a6c3 call 0x10c92220 */
  push32(0x10c9a6c8u); f_10c92220();
  /* 10c9a6c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a6cb pop ebp */
  EBP = (pop32());
  /* 10c9a6cc ret  */
  ESPCHK(0x10c9a6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6d0 @ 0x10c9a6d0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_10c9a6d0(void) {
  FTRACE(0x10c9a6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9a6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9a6d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9a6d3 push edi */
  push32((uint32_t)(EDI));
  /* 10c9a6d4 push esi */
  push32((uint32_t)(ESI));
  /* 10c9a6d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9a6d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9a6db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a6de mov eax, ecx */
  EAX = (ECX);
  /* 10c9a6e0 mov edx, ecx */
  EDX = (ECX);
  /* 10c9a6e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a6e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a6e6 jbe 0x10c9a6f0 */
  if ((C.cf||C.zf)) goto L_10c9a6f0;
  /* 10c9a6e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a6ea jb 0x10c9a868 */
  if (C.cf) goto L_10c9a868;
L_10c9a6f0:;
  /* 10c9a6f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c9a6f6 jne 0x10c9a70c */
  if (!C.zf) goto L_10c9a70c;
  /* 10c9a6f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9a6fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a6fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a701 jb 0x10c9a72c */
  if (C.cf) goto L_10c9a72c;
  /* 10c9a703 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c9a705 jmp dword ptr [edx*4 + 0x10c9a818] */
  switch (EDX) {
    case 0: goto L_10c9a828;
    case 1: goto L_10c9a830;
    case 2: goto L_10c9a83c;
    case 3: goto L_10c9a850;
    default: x86_unimpl("switch@0x10c9a705 out of table"); return;
  }
L_10c9a70c:;
  /* 10c9a70c mov eax, edi */
  EAX = (EDI);
  /* 10c9a70e mov edx, 3 */
  EDX = (0x3u);
  /* 10c9a713 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a716 jb 0x10c9a724 */
  if (C.cf) goto L_10c9a724;
  /* 10c9a718 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9a71b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a71d jmp dword ptr [eax*4 + 0x10c9a730] */
  switch (EAX) {
    case 1: goto L_10c9a740;
    case 2: goto L_10c9a76c;
    case 3: goto L_10c9a790;
    default: x86_unimpl("switch@0x10c9a71d out of table"); return;
  }
L_10c9a724:;
  /* 10c9a724 jmp dword ptr [ecx*4 + 0x10c9a828] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10c9a828)))); return;
  /* 10c9a72b nop  */
  /* nop */
L_10c9a72c:;
  /* 10c9a72c jmp dword ptr [ecx*4 + 0x10c9a7ac] */
  switch (ECX) {
    case 0: goto L_10c9a80f;
    case 1: goto L_10c9a7fc;
    case 2: goto L_10c9a7f4;
    case 3: goto L_10c9a7ec;
    case 4: goto L_10c9a7e4;
    case 5: goto L_10c9a7dc;
    case 6: goto L_10c9a7d4;
    case 7: goto L_10c9a7cc;
    default: x86_unimpl("switch@0x10c9a72c out of table"); return;
  }
  /* 10c9a733 nop  */
  /* nop */
L_10c9a740:;
  /* 10c9a740 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a742 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c9a744 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c9a746 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c9a749 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c9a74c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c9a74f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9a752 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c9a755 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a758 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a75b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a75e jb 0x10c9a72c */
  if (C.cf) goto L_10c9a72c;
  /* 10c9a760 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c9a762 jmp dword ptr [edx*4 + 0x10c9a818] */
  switch (EDX) {
    case 0: goto L_10c9a828;
    case 1: goto L_10c9a830;
    case 2: goto L_10c9a83c;
    case 3: goto L_10c9a850;
    default: x86_unimpl("switch@0x10c9a762 out of table"); return;
  }
  /* 10c9a769 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c9a76c:;
  /* 10c9a76c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a76e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c9a770 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c9a772 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c9a775 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9a778 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c9a77b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a77e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a781 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a784 jb 0x10c9a72c */
  if (C.cf) goto L_10c9a72c;
  /* 10c9a786 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c9a788 jmp dword ptr [edx*4 + 0x10c9a818] */
  switch (EDX) {
    case 0: goto L_10c9a828;
    case 1: goto L_10c9a830;
    case 2: goto L_10c9a83c;
    case 3: goto L_10c9a850;
    default: x86_unimpl("switch@0x10c9a788 out of table"); return;
  }
  /* 10c9a78f nop  */
  /* nop */
L_10c9a790:;
  /* 10c9a790 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a792 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c9a794 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c9a796 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c9a797 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9a79a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c9a79b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a79e jb 0x10c9a72c */
  if (C.cf) goto L_10c9a72c;
  /* 10c9a7a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c9a7a2 jmp dword ptr [edx*4 + 0x10c9a818] */
  switch (EDX) {
    case 0: goto L_10c9a828;
    case 1: goto L_10c9a830;
    case 2: goto L_10c9a83c;
    case 3: goto L_10c9a850;
    default: x86_unimpl("switch@0x10c9a7a2 out of table"); return;
  }
  /* 10c9a7a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c9a7cc:;
  /* 10c9a7cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10c9a7d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10c9a7d4:;
  /* 10c9a7d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10c9a7d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10c9a7dc:;
  /* 10c9a7dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10c9a7e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10c9a7e4:;
  /* 10c9a7e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10c9a7e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10c9a7ec:;
  /* 10c9a7ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10c9a7f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10c9a7f4:;
  /* 10c9a7f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10c9a7f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10c9a7fc:;
  /* 10c9a7fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10c9a800 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10c9a804 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c9a80b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a80d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c9a80f:;
  /* 10c9a80f jmp dword ptr [edx*4 + 0x10c9a818] */
  switch (EDX) {
    case 0: goto L_10c9a828;
    case 1: goto L_10c9a830;
    case 2: goto L_10c9a83c;
    case 3: goto L_10c9a850;
    default: x86_unimpl("switch@0x10c9a80f out of table"); return;
  }
  /* 10c9a816 mov edi, edi */
  EDI = (EDI);
L_10c9a828:;
  /* 10c9a828 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a82b pop esi */
  ESI = (pop32());
  /* 10c9a82c pop edi */
  EDI = (pop32());
  /* 10c9a82d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9a82e ret  */
  ESPCHK(0x10c9a6d0u, _esp0);
  ESP += 4; return;
  /* 10c9a82f nop  */
  /* nop */
L_10c9a830:;
  /* 10c9a830 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c9a832 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c9a834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a837 pop esi */
  ESI = (pop32());
  /* 10c9a838 pop edi */
  EDI = (pop32());
  /* 10c9a839 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9a83a ret  */
  ESPCHK(0x10c9a6d0u, _esp0);
  ESP += 4; return;
  /* 10c9a83b nop  */
  /* nop */
L_10c9a83c:;
  /* 10c9a83c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c9a83e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c9a840 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c9a843 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c9a846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a849 pop esi */
  ESI = (pop32());
  /* 10c9a84a pop edi */
  EDI = (pop32());
  /* 10c9a84b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9a84c ret  */
  ESPCHK(0x10c9a6d0u, _esp0);
  ESP += 4; return;
  /* 10c9a84d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c9a850:;
  /* 10c9a850 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c9a852 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c9a854 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c9a857 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c9a85a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c9a85d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c9a860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a863 pop esi */
  ESI = (pop32());
  /* 10c9a864 pop edi */
  EDI = (pop32());
  /* 10c9a865 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9a866 ret  */
  ESPCHK(0x10c9a6d0u, _esp0);
  ESP += 4; return;
  /* 10c9a867 nop  */
  /* nop */
L_10c9a868:;
  /* 10c9a868 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10c9a86c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10c9a870 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c9a876 jne 0x10c9a89c */
  if (!C.zf) goto L_10c9a89c;
  /* 10c9a878 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9a87b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a87e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a881 jb 0x10c9a890 */
  if (C.cf) goto L_10c9a890;
  /* 10c9a883 std  */
  C.df=1;
  /* 10c9a884 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c9a886 cld  */
  C.df=0;
  /* 10c9a887 jmp dword ptr [edx*4 + 0x10c9a9b0] */
  switch (EDX) {
    case 0: goto L_10c9a9c0;
    case 1: goto L_10c9a9c8;
    case 2: goto L_10c9a9d8;
    case 3: goto L_10c9a9ec;
    default: x86_unimpl("switch@0x10c9a887 out of table"); return;
  }
  /* 10c9a88e mov edi, edi */
  EDI = (EDI);
L_10c9a890:;
  /* 10c9a890 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9a892 jmp dword ptr [ecx*4 + 0x10c9a960] */
  switch (ECX) {
    case 0: goto L_10c9a9a7;
    default: x86_unimpl("switch@0x10c9a892 out of table"); return;
  }
  /* 10c9a899 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c9a89c:;
  /* 10c9a89c mov eax, edi */
  EAX = (EDI);
  /* 10c9a89e mov edx, 3 */
  EDX = (0x3u);
  /* 10c9a8a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a8a6 jb 0x10c9a8b4 */
  if (C.cf) goto L_10c9a8b4;
  /* 10c9a8a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9a8ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a8ad jmp dword ptr [eax*4 + 0x10c9a8b8] */
  switch (EAX) {
    case 1: goto L_10c9a8c8;
    case 2: goto L_10c9a8e8;
    case 3: goto L_10c9a910;
    default: x86_unimpl("switch@0x10c9a8ad out of table"); return;
  }
L_10c9a8b4:;
  /* 10c9a8b4 jmp dword ptr [ecx*4 + 0x10c9a9b0] */
  switch (ECX) {
    case 0: goto L_10c9a9c0;
    case 1: goto L_10c9a9c8;
    case 2: goto L_10c9a9d8;
    case 3: goto L_10c9a9ec;
    default: x86_unimpl("switch@0x10c9a8b4 out of table"); return;
  }
  /* 10c9a8bb nop  */
  /* nop */
L_10c9a8c8:;
  /* 10c9a8c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c9a8cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a8cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c9a8d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10c9a8d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9a8d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10c9a8d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a8d8 jb 0x10c9a890 */
  if (C.cf) goto L_10c9a890;
  /* 10c9a8da std  */
  C.df=1;
  /* 10c9a8db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c9a8dd cld  */
  C.df=0;
  /* 10c9a8de jmp dword ptr [edx*4 + 0x10c9a9b0] */
  switch (EDX) {
    case 0: goto L_10c9a9c0;
    case 1: goto L_10c9a9c8;
    case 2: goto L_10c9a9d8;
    case 3: goto L_10c9a9ec;
    default: x86_unimpl("switch@0x10c9a8de out of table"); return;
  }
  /* 10c9a8e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c9a8e8:;
  /* 10c9a8e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c9a8eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a8ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c9a8f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c9a8f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9a8f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c9a8f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a8fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a8ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a902 jb 0x10c9a890 */
  if (C.cf) goto L_10c9a890;
  /* 10c9a904 std  */
  C.df=1;
  /* 10c9a905 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c9a907 cld  */
  C.df=0;
  /* 10c9a908 jmp dword ptr [edx*4 + 0x10c9a9b0] */
  switch (EDX) {
    case 0: goto L_10c9a9c0;
    case 1: goto L_10c9a9c8;
    case 2: goto L_10c9a9d8;
    case 3: goto L_10c9a9ec;
    default: x86_unimpl("switch@0x10c9a908 out of table"); return;
  }
  /* 10c9a90f nop  */
  /* nop */
L_10c9a910:;
  /* 10c9a910 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c9a913 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9a915 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c9a918 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c9a91b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c9a91e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c9a921 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9a924 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c9a927 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a92a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9a92d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9a930 jb 0x10c9a890 */
  if (C.cf) goto L_10c9a890;
  /* 10c9a936 std  */
  C.df=1;
  /* 10c9a937 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c9a939 cld  */
  C.df=0;
  /* 10c9a93a jmp dword ptr [edx*4 + 0x10c9a9b0] */
  switch (EDX) {
    case 0: goto L_10c9a9c0;
    case 1: goto L_10c9a9c8;
    case 2: goto L_10c9a9d8;
    case 3: goto L_10c9a9ec;
    default: x86_unimpl("switch@0x10c9a93a out of table"); return;
  }
  /* 10c9a941 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10c9a944 test eax, 0xa96c10c9 */
  { uint32_t _r=(EAX)&(0xa96c10c9u); fl_logic(_r,32); }
  /* 10c9a94a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9a94b adc byte ptr [ecx + ebp*4 - 0x37], dh */
  { uint32_t _a=(r8((uint32_t)(ECX + EBP*4 + -0x37))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EBP*4 + -0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10c9a94f adc byte ptr [ecx + ebp*4 - 0x37], bh */
  { uint32_t _a=(r8((uint32_t)(ECX + EBP*4 + -0x37))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EBP*4 + -0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10c9a953 adc byte ptr [ecx + ebp*4 - 0x5673ef37], al */
  { uint32_t _a=(r8((uint32_t)(ECX + EBP*4 + -0x5673ef37))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EBP*4 + -0x5673ef37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10c9a95a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9a95c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10c9a95e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9a964 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10c9a968 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10c9a96c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10c9a970 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10c9a974 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10c9a978 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10c9a97c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10c9a980 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10c9a984 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10c9a988 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10c9a98c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10c9a990 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10c9a994 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10c9a998 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10c9a99c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c9a9a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9a9a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c9a9a7:;
  /* 10c9a9a7 jmp dword ptr [edx*4 + 0x10c9a9b0] */
  switch (EDX) {
    case 0: goto L_10c9a9c0;
    case 1: goto L_10c9a9c8;
    case 2: goto L_10c9a9d8;
    case 3: goto L_10c9a9ec;
    default: x86_unimpl("switch@0x10c9a9a7 out of table"); return;
  }
  /* 10c9a9ae mov edi, edi */
  EDI = (EDI);
L_10c9a9c0:;
  /* 10c9a9c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a9c3 pop esi */
  ESI = (pop32());
  /* 10c9a9c4 pop edi */
  EDI = (pop32());
  /* 10c9a9c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9a9c6 ret  */
  ESPCHK(0x10c9a6d0u, _esp0);
  ESP += 4; return;
  /* 10c9a9c7 nop  */
  /* nop */
L_10c9a9c8:;
  /* 10c9a9c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c9a9cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c9a9ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a9d1 pop esi */
  ESI = (pop32());
  /* 10c9a9d2 pop edi */
  EDI = (pop32());
  /* 10c9a9d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9a9d4 ret  */
  ESPCHK(0x10c9a6d0u, _esp0);
  ESP += 4; return;
  /* 10c9a9d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c9a9d8:;
  /* 10c9a9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c9a9db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c9a9de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c9a9e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c9a9e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9a9e7 pop esi */
  ESI = (pop32());
  /* 10c9a9e8 pop edi */
  EDI = (pop32());
  /* 10c9a9e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9a9ea ret  */
  ESPCHK(0x10c9a6d0u, _esp0);
  ESP += 4; return;
  /* 10c9a9eb nop  */
  /* nop */
L_10c9a9ec:;
  /* 10c9a9ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c9a9ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c9a9f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c9a9f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c9a9f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c9a9fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c9a9fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9aa01 pop esi */
  ESI = (pop32());
  /* 10c9aa02 pop edi */
  EDI = (pop32());
  /* 10c9aa03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9aa04 ret  */
  ESPCHK(0x10c9a6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa10 @ 0x10c9aa10 (421 bytes, 148 insns) */
void f_10c9aa10(void) {
  FTRACE(0x10c9aa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9aa10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9aa11 mov ebp, esp */
  EBP = (ESP);
  /* 10c9aa13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c9aa15 push 0x10cb9f08 */
  push32((uint32_t)(0x10cb9f08u));
  /* 10c9aa1a push 0x10c9b8e8 */
  push32((uint32_t)(0x10c9b8e8u));
  /* 10c9aa1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c9aa25 push eax */
  push32((uint32_t)(EAX));
  /* 10c9aa26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c9aa2d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9aa30 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9aa31 push esi */
  push32((uint32_t)(ESI));
  /* 10c9aa32 push edi */
  push32((uint32_t)(EDI));
  /* 10c9aa33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c9aa36 cmp dword ptr [0x10cbe5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9aa3d jne 0x10c9aa8e */
  if (!C.zf) goto L_10c9aa8e;
  /* 10c9aa3f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10c9aa42 push eax */
  push32((uint32_t)(EAX));
  /* 10c9aa43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9aa45 push 0x10cb9f04 */
  push32((uint32_t)(0x10cb9f04u));
  /* 10c9aa4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9aa4c call dword ptr [0x10cc02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f8))), 0x10c9aa52u);
  /* 10c9aa52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9aa54 je 0x10c9aa62 */
  if (C.zf) goto L_10c9aa62;
  /* 10c9aa56 mov dword ptr [0x10cbe5f4], 1 */
  w32((uint32_t)(0x10cbe5f4), (0x1u));
  /* 10c9aa60 jmp 0x10c9aa8e */
  goto L_10c9aa8e;
L_10c9aa62:;
  /* 10c9aa62 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10c9aa65 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9aa66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9aa68 push 0x10cb9f00 */
  push32((uint32_t)(0x10cb9f00u));
  /* 10c9aa6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9aa6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9aa71 call dword ptr [0x10cc02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f4))), 0x10c9aa77u);
  /* 10c9aa77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9aa79 je 0x10c9aa87 */
  if (C.zf) goto L_10c9aa87;
  /* 10c9aa7b mov dword ptr [0x10cbe5f4], 2 */
  w32((uint32_t)(0x10cbe5f4), (0x2u));
  /* 10c9aa85 jmp 0x10c9aa8e */
  goto L_10c9aa8e;
L_10c9aa87:;
  /* 10c9aa87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9aa89 jmp 0x10c9abb8 */
  goto L_10c9abb8;
L_10c9aa8e:;
  /* 10c9aa8e cmp dword ptr [0x10cbe5f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe5f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9aa95 jne 0x10c9aac5 */
  if (!C.zf) goto L_10c9aac5;
  /* 10c9aa97 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9aa9b jne 0x10c9aaa6 */
  if (!C.zf) goto L_10c9aaa6;
  /* 10c9aa9d mov edx, dword ptr [0x10cbe600] */
  EDX = (r32((uint32_t)(0x10cbe600)));
  /* 10c9aaa3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10c9aaa6:;
  /* 10c9aaa6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9aaa9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9aaaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9aaad push ecx */
  push32((uint32_t)(ECX));
  /* 10c9aaae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9aab1 push edx */
  push32((uint32_t)(EDX));
  /* 10c9aab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9aab5 push eax */
  push32((uint32_t)(EAX));
  /* 10c9aab6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c9aab9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9aaba call dword ptr [0x10cc02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f4))), 0x10c9aac0u);
  /* 10c9aac0 jmp 0x10c9abb8 */
  goto L_10c9abb8;
L_10c9aac5:;
  /* 10c9aac5 cmp dword ptr [0x10cbe5f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe5f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9aacc jne 0x10c9abb6 */
  if (!C.zf) goto L_10c9abb6;
  /* 10c9aad2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9aad6 jne 0x10c9aae1 */
  if (!C.zf) goto L_10c9aae1;
  /* 10c9aad8 mov edx, dword ptr [0x10cbe610] */
  EDX = (r32((uint32_t)(0x10cbe610)));
  /* 10c9aade mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10c9aae1:;
  /* 10c9aae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9aae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9aae5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9aae8 push eax */
  push32((uint32_t)(EAX));
  /* 10c9aae9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9aaec push ecx */
  push32((uint32_t)(ECX));
  /* 10c9aaed mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c9aaf0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9aaf2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9aaf4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9aaf7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9aafa push edx */
  push32((uint32_t)(EDX));
  /* 10c9aafb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9aafe push eax */
  push32((uint32_t)(EAX));
  /* 10c9aaff call dword ptr [0x10cc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ac))), 0x10c9ab05u);
  /* 10c9ab05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c9ab08 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ab0c jne 0x10c9ab15 */
  if (!C.zf) goto L_10c9ab15;
  /* 10c9ab0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ab10 jmp 0x10c9abb8 */
  goto L_10c9abb8;
L_10c9ab15:;
  /* 10c9ab15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9ab1c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9ab1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c9ab21 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ab24 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c9ab26 call 0x10c95980 */
  push32(0x10c9ab2bu); f_10c95980();
  /* 10c9ab2b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10c9ab2e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c9ab31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9ab34 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c9ab37 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9ab3a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c9ab3c push edx */
  push32((uint32_t)(EDX));
  /* 10c9ab3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ab3f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9ab42 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ab43 call 0x10c96550 */
  push32(0x10c9ab48u); f_10c96550();
  /* 10c9ab48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ab4b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c9ab52 jmp 0x10c9ab6b */
  goto L_10c9ab6b;
  /* 10c9ab54 mov eax, 1 */
  EAX = (0x1u);
  /* 10c9ab59 ret  */
  ESPCHK(0x10c9aa10u, _esp0);
  ESP += 4; return;
  /* 10c9ab5a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9ab5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c9ab64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c9ab6b:;
  /* 10c9ab6b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ab6f jne 0x10c9ab75 */
  if (!C.zf) goto L_10c9ab75;
  /* 10c9ab71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ab73 jmp 0x10c9abb8 */
  goto L_10c9abb8;
L_10c9ab75:;
  /* 10c9ab75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9ab78 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ab79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9ab7c push edx */
  push32((uint32_t)(EDX));
  /* 10c9ab7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ab80 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ab81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ab84 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ab85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9ab87 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9ab8a push edx */
  push32((uint32_t)(EDX));
  /* 10c9ab8b call dword ptr [0x10cc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ac))), 0x10c9ab91u);
  /* 10c9ab91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c9ab94 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ab98 jne 0x10c9ab9e */
  if (!C.zf) goto L_10c9ab9e;
  /* 10c9ab9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ab9c jmp 0x10c9abb8 */
  goto L_10c9abb8;
L_10c9ab9e:;
  /* 10c9ab9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9aba1 push eax */
  push32((uint32_t)(EAX));
  /* 10c9aba2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c9aba5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9aba6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9aba9 push edx */
  push32((uint32_t)(EDX));
  /* 10c9abaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9abad push eax */
  push32((uint32_t)(EAX));
  /* 10c9abae call dword ptr [0x10cc02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f8))), 0x10c9abb4u);
  /* 10c9abb4 jmp 0x10c9abb8 */
  goto L_10c9abb8;
L_10c9abb6:;
  /* 10c9abb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9abb8:;
  /* 10c9abb8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10c9abbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9abbe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c9abc5 pop edi */
  EDI = (pop32());
  /* 10c9abc6 pop esi */
  ESI = (pop32());
  /* 10c9abc7 pop ebx */
  EBX = (pop32());
  /* 10c9abc8 mov esp, ebp */
  ESP = (EBP);
  /* 10c9abca pop ebp */
  EBP = (pop32());
  /* 10c9abcb ret  */
  ESPCHK(0x10c9aa10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abd0 @ 0x10c9abd0 (727 bytes, 263 insns) */
void f_10c9abd0(void) {
  FTRACE(0x10c9abd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9abd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9abd1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9abd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c9abd5 push 0x10cb9f18 */
  push32((uint32_t)(0x10cb9f18u));
  /* 10c9abda push 0x10c9b8e8 */
  push32((uint32_t)(0x10c9b8e8u));
  /* 10c9abdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c9abe5 push eax */
  push32((uint32_t)(EAX));
  /* 10c9abe6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c9abed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9abf0 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9abf1 push esi */
  push32((uint32_t)(ESI));
  /* 10c9abf2 push edi */
  push32((uint32_t)(EDI));
  /* 10c9abf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c9abf6 cmp dword ptr [0x10cbe618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9abfd jne 0x10c9ac56 */
  if (!C.zf) goto L_10c9ac56;
  /* 10c9abff push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ac01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ac03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9ac05 push 0x10cb9f04 */
  push32((uint32_t)(0x10cb9f04u));
  /* 10c9ac0a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c9ac0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ac11 call dword ptr [0x10cc0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0300))), 0x10c9ac17u);
  /* 10c9ac17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ac19 je 0x10c9ac27 */
  if (C.zf) goto L_10c9ac27;
  /* 10c9ac1b mov dword ptr [0x10cbe618], 1 */
  w32((uint32_t)(0x10cbe618), (0x1u));
  /* 10c9ac25 jmp 0x10c9ac56 */
  goto L_10c9ac56;
L_10c9ac27:;
  /* 10c9ac27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ac29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ac2b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9ac2d push 0x10cb9f00 */
  push32((uint32_t)(0x10cb9f00u));
  /* 10c9ac32 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c9ac37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ac39 call dword ptr [0x10cc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02fc))), 0x10c9ac3fu);
  /* 10c9ac3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ac41 je 0x10c9ac4f */
  if (C.zf) goto L_10c9ac4f;
  /* 10c9ac43 mov dword ptr [0x10cbe618], 2 */
  w32((uint32_t)(0x10cbe618), (0x2u));
  /* 10c9ac4d jmp 0x10c9ac56 */
  goto L_10c9ac56;
L_10c9ac4f:;
  /* 10c9ac4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ac51 jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9ac56:;
  /* 10c9ac56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ac5a jle 0x10c9ac6f */
  if ((C.zf||C.sf!=C.of)) goto L_10c9ac6f;
  /* 10c9ac5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9ac5f push eax */
  push32((uint32_t)(EAX));
  /* 10c9ac60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ac63 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ac64 call 0x10c9aee0 */
  push32(0x10c9ac69u); f_10c9aee0();
  /* 10c9ac69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ac6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10c9ac6f:;
  /* 10c9ac6f cmp dword ptr [0x10cbe618], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe618))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ac76 jne 0x10c9ac9b */
  if (!C.zf) goto L_10c9ac9b;
  /* 10c9ac78 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c9ac7b push edx */
  push32((uint32_t)(EDX));
  /* 10c9ac7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9ac7f push eax */
  push32((uint32_t)(EAX));
  /* 10c9ac80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9ac83 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ac84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ac87 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ac88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ac8b push eax */
  push32((uint32_t)(EAX));
  /* 10c9ac8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ac8f push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ac90 call dword ptr [0x10cc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02fc))), 0x10c9ac96u);
  /* 10c9ac96 jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9ac9b:;
  /* 10c9ac9b cmp dword ptr [0x10cbe618], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe618))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9aca2 jne 0x10c9aebf */
  if (!C.zf) goto L_10c9aebf;
  /* 10c9aca8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9acac jne 0x10c9acb7 */
  if (!C.zf) goto L_10c9acb7;
  /* 10c9acae mov edx, dword ptr [0x10cbe610] */
  EDX = (r32((uint32_t)(0x10cbe610)));
  /* 10c9acb4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10c9acb7:;
  /* 10c9acb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9acb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9acbb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9acbe push eax */
  push32((uint32_t)(EAX));
  /* 10c9acbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9acc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9acc3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10c9acc6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9acc8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9acca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9accd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9acd0 push edx */
  push32((uint32_t)(EDX));
  /* 10c9acd1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c9acd4 push eax */
  push32((uint32_t)(EAX));
  /* 10c9acd5 call dword ptr [0x10cc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ac))), 0x10c9acdbu);
  /* 10c9acdb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c9acde cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ace2 jne 0x10c9aceb */
  if (!C.zf) goto L_10c9aceb;
  /* 10c9ace4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ace6 jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9aceb:;
  /* 10c9aceb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9acf2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9acf5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c9acf7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9acfa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c9acfc call 0x10c95980 */
  push32(0x10c9ad01u); f_10c95980();
  /* 10c9ad01 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10c9ad04 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c9ad07 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9ad0a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c9ad0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c9ad14 jmp 0x10c9ad2d */
  goto L_10c9ad2d;
  /* 10c9ad16 mov eax, 1 */
  EAX = (0x1u);
  /* 10c9ad1b ret  */
  ESPCHK(0x10c9abd0u, _esp0);
  ESP += 4; return;
  /* 10c9ad1c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9ad1f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c9ad26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c9ad2d:;
  /* 10c9ad2d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ad31 jne 0x10c9ad3a */
  if (!C.zf) goto L_10c9ad3a;
  /* 10c9ad33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ad35 jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9ad3a:;
  /* 10c9ad3a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9ad3d push edx */
  push32((uint32_t)(EDX));
  /* 10c9ad3e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9ad41 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ad42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9ad45 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ad46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ad49 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ad4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9ad4c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c9ad4f push eax */
  push32((uint32_t)(EAX));
  /* 10c9ad50 call dword ptr [0x10cc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ac))), 0x10c9ad56u);
  /* 10c9ad56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ad58 jne 0x10c9ad61 */
  if (!C.zf) goto L_10c9ad61;
  /* 10c9ad5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ad5c jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9ad61:;
  /* 10c9ad61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ad63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ad65 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9ad68 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ad69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9ad6c push edx */
  push32((uint32_t)(EDX));
  /* 10c9ad6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ad70 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ad71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ad74 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ad75 call dword ptr [0x10cc0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0300))), 0x10c9ad7bu);
  /* 10c9ad7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c9ad7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ad82 jne 0x10c9ad8b */
  if (!C.zf) goto L_10c9ad8b;
  /* 10c9ad84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ad86 jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9ad8b:;
  /* 10c9ad8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ad8e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9ad94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9ad96 je 0x10c9addb */
  if (C.zf) goto L_10c9addb;
  /* 10c9ad98 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ad9c je 0x10c9add6 */
  if (C.zf) goto L_10c9add6;
  /* 10c9ad9e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c9ada1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ada4 jle 0x10c9adad */
  if ((C.zf||C.sf!=C.of)) goto L_10c9adad;
  /* 10c9ada6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ada8 jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9adad:;
  /* 10c9adad mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c9adb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9adb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9adb4 push edx */
  push32((uint32_t)(EDX));
  /* 10c9adb5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9adb8 push eax */
  push32((uint32_t)(EAX));
  /* 10c9adb9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9adbc push ecx */
  push32((uint32_t)(ECX));
  /* 10c9adbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9adc0 push edx */
  push32((uint32_t)(EDX));
  /* 10c9adc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9adc4 push eax */
  push32((uint32_t)(EAX));
  /* 10c9adc5 call dword ptr [0x10cc0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0300))), 0x10c9adcbu);
  /* 10c9adcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9adcd jne 0x10c9add6 */
  if (!C.zf) goto L_10c9add6;
  /* 10c9adcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9add1 jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9add6:;
  /* 10c9add6 jmp 0x10c9aeba */
  goto L_10c9aeba;
L_10c9addb:;
  /* 10c9addb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c9adde mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c9ade1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c9ade8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9adeb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c9aded add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9adf0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c9adf2 call 0x10c95980 */
  push32(0x10c9adf7u); f_10c95980();
  /* 10c9adf7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10c9adfa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c9adfd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c9ae00 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c9ae03 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c9ae0a jmp 0x10c9ae23 */
  goto L_10c9ae23;
  /* 10c9ae0c mov eax, 1 */
  EAX = (0x1u);
  /* 10c9ae11 ret  */
  ESPCHK(0x10c9abd0u, _esp0);
  ESP += 4; return;
  /* 10c9ae12 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9ae15 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c9ae1c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c9ae23:;
  /* 10c9ae23 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ae27 jne 0x10c9ae30 */
  if (!C.zf) goto L_10c9ae30;
  /* 10c9ae29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ae2b jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9ae30:;
  /* 10c9ae30 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9ae33 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ae34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9ae37 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ae38 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9ae3b push edx */
  push32((uint32_t)(EDX));
  /* 10c9ae3c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9ae3f push eax */
  push32((uint32_t)(EAX));
  /* 10c9ae40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ae43 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ae44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ae47 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ae48 call dword ptr [0x10cc0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0300))), 0x10c9ae4eu);
  /* 10c9ae4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ae50 jne 0x10c9ae56 */
  if (!C.zf) goto L_10c9ae56;
  /* 10c9ae52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ae54 jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9ae56:;
  /* 10c9ae56 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ae5a jne 0x10c9ae8a */
  if (!C.zf) goto L_10c9ae8a;
  /* 10c9ae5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ae5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ae60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ae62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ae64 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9ae67 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ae68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9ae6b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ae6c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c9ae71 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c9ae74 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ae75 call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10c9ae7bu);
  /* 10c9ae7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c9ae7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ae82 jne 0x10c9ae88 */
  if (!C.zf) goto L_10c9ae88;
  /* 10c9ae84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ae86 jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9ae88:;
  /* 10c9ae88 jmp 0x10c9aeba */
  goto L_10c9aeba;
L_10c9ae8a:;
  /* 10c9ae8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ae8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ae8e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c9ae91 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ae92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9ae95 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ae96 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9ae99 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ae9a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9ae9d push eax */
  push32((uint32_t)(EAX));
  /* 10c9ae9e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c9aea3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c9aea6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9aea7 call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10c9aeadu);
  /* 10c9aead mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c9aeb0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9aeb4 jne 0x10c9aeba */
  if (!C.zf) goto L_10c9aeba;
  /* 10c9aeb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9aeb8 jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9aeba:;
  /* 10c9aeba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c9aebd jmp 0x10c9aec1 */
  goto L_10c9aec1;
L_10c9aebf:;
  /* 10c9aebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9aec1:;
  /* 10c9aec1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10c9aec4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9aec7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c9aece pop edi */
  EDI = (pop32());
  /* 10c9aecf pop esi */
  ESI = (pop32());
  /* 10c9aed0 pop ebx */
  EBX = (pop32());
  /* 10c9aed1 mov esp, ebp */
  ESP = (EBP);
  /* 10c9aed3 pop ebp */
  EBP = (pop32());
  /* 10c9aed4 ret  */
  ESPCHK(0x10c9abd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aee0 @ 0x10c9aee0 (80 bytes, 32 insns) */
void f_10c9aee0(void) {
  FTRACE(0x10c9aee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9aee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9aee1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9aee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9aee6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9aee9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9aeec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9aeef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c9aef2:;
  /* 10c9aef2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9aef5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9aef8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9aefb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9aefe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9af00 je 0x10c9af17 */
  if (C.zf) goto L_10c9af17;
  /* 10c9af02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9af05 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9af08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9af0a je 0x10c9af17 */
  if (C.zf) goto L_10c9af17;
  /* 10c9af0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9af0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9af12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9af15 jmp 0x10c9aef2 */
  goto L_10c9aef2;
L_10c9af17:;
  /* 10c9af17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9af1a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9af1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9af1f jne 0x10c9af29 */
  if (!C.zf) goto L_10c9af29;
  /* 10c9af21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9af24 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9af27 jmp 0x10c9af2c */
  goto L_10c9af2c;
L_10c9af29:;
  /* 10c9af29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10c9af2c:;
  /* 10c9af2c mov esp, ebp */
  ESP = (EBP);
  /* 10c9af2e pop ebp */
  EBP = (pop32());
  /* 10c9af2f ret  */
  ESPCHK(0x10c9aee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af30 @ 0x10c9af30 (130 bytes, 43 insns) */
void f_10c9af30(void) {
  FTRACE(0x10c9af30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9af30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9af31 mov ebp, esp */
  EBP = (ESP);
  /* 10c9af33 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9af34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9af37 cmp eax, dword ptr [0x10cbff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9af3d jae 0x10c9af61 */
  if (!C.cf) goto L_10c9af61;
  /* 10c9af3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9af42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9af45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9af48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9af4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9af4e mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9af55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c9af5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9af5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9af5f jne 0x10c9af7c */
  if (!C.zf) goto L_10c9af7c;
L_10c9af61:;
  /* 10c9af61 call 0x10c9a6b0 */
  push32(0x10c9af66u); f_10c9a6b0();
  /* 10c9af66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c9af6c call 0x10c9a6c0 */
  push32(0x10c9af71u); f_10c9a6c0();
  /* 10c9af71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9af77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9af7a jmp 0x10c9afae */
  goto L_10c9afae;
L_10c9af7c:;
  /* 10c9af7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9af7f push edx */
  push32((uint32_t)(EDX));
  /* 10c9af80 call 0x10c9bed0 */
  push32(0x10c9af85u); f_10c9bed0();
  /* 10c9af85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9af88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9af8b push eax */
  push32((uint32_t)(EAX));
  /* 10c9af8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9af8f push ecx */
  push32((uint32_t)(ECX));
  /* 10c9af90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9af93 push edx */
  push32((uint32_t)(EDX));
  /* 10c9af94 call 0x10c9afc0 */
  push32(0x10c9af99u); f_10c9afc0();
  /* 10c9af99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9af9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9af9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9afa2 push eax */
  push32((uint32_t)(EAX));
  /* 10c9afa3 call 0x10c9bf60 */
  push32(0x10c9afa8u); f_10c9bf60();
  /* 10c9afa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9afab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c9afae:;
  /* 10c9afae mov esp, ebp */
  ESP = (EBP);
  /* 10c9afb0 pop ebp */
  EBP = (pop32());
  /* 10c9afb1 ret  */
  ESPCHK(0x10c9af30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afc0 @ 0x10c9afc0 (178 bytes, 56 insns) */
void f_10c9afc0(void) {
  FTRACE(0x10c9afc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9afc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9afc1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9afc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9afc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9afc9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9afca call 0x10c9bd50 */
  push32(0x10c9afcfu); f_10c9bd50();
  /* 10c9afcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9afd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c9afd5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9afd9 jne 0x10c9afee */
  if (!C.zf) goto L_10c9afee;
  /* 10c9afdb call 0x10c9a6b0 */
  push32(0x10c9afe0u); f_10c9a6b0();
  /* 10c9afe0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c9afe6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9afe9 jmp 0x10c9b06e */
  goto L_10c9b06e;
L_10c9afee:;
  /* 10c9afee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9aff1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9aff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9aff4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9aff7 push edx */
  push32((uint32_t)(EDX));
  /* 10c9aff8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9affb push eax */
  push32((uint32_t)(EAX));
  /* 10c9affc call dword ptr [0x10cc0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0304))), 0x10c9b002u);
  /* 10c9b002 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9b005 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b009 jne 0x10c9b016 */
  if (!C.zf) goto L_10c9b016;
  /* 10c9b00b call dword ptr [0x10cc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0278))), 0x10c9b011u);
  /* 10c9b011 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9b014 jmp 0x10c9b01d */
  goto L_10c9b01d;
L_10c9b016:;
  /* 10c9b016 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c9b01d:;
  /* 10c9b01d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b021 je 0x10c9b034 */
  if (C.zf) goto L_10c9b034;
  /* 10c9b023 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b026 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b027 call 0x10c9a610 */
  push32(0x10c9b02cu); f_10c9a610();
  /* 10c9b02c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b02f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b032 jmp 0x10c9b06e */
  goto L_10c9b06e;
L_10c9b034:;
  /* 10c9b034 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b037 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c9b03a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b03d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b040 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b043 mov ecx, dword ptr [edx*4 + 0x10cbfde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10cbfde0)));
  /* 10c9b04a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10c9b04e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10c9b051 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b054 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9b057 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b05a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9b05d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b060 mov eax, dword ptr [eax*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9b067 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10c9b06b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c9b06e:;
  /* 10c9b06e mov esp, ebp */
  ESP = (EBP);
  /* 10c9b070 pop ebp */
  EBP = (pop32());
  /* 10c9b071 ret  */
  ESPCHK(0x10c9afc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b080 @ 0x10c9b080 (130 bytes, 43 insns) */
void f_10c9b080(void) {
  FTRACE(0x10c9b080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b080 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b081 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b083 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b087 cmp eax, dword ptr [0x10cbff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b08d jae 0x10c9b0b1 */
  if (!C.cf) goto L_10c9b0b1;
  /* 10c9b08f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b092 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9b095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b098 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9b09b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b09e mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9b0a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c9b0aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9b0ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9b0af jne 0x10c9b0cc */
  if (!C.zf) goto L_10c9b0cc;
L_10c9b0b1:;
  /* 10c9b0b1 call 0x10c9a6b0 */
  push32(0x10c9b0b6u); f_10c9a6b0();
  /* 10c9b0b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c9b0bc call 0x10c9a6c0 */
  push32(0x10c9b0c1u); f_10c9a6c0();
  /* 10c9b0c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9b0c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b0ca jmp 0x10c9b0fe */
  goto L_10c9b0fe;
L_10c9b0cc:;
  /* 10c9b0cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b0cf push edx */
  push32((uint32_t)(EDX));
  /* 10c9b0d0 call 0x10c9bed0 */
  push32(0x10c9b0d5u); f_10c9bed0();
  /* 10c9b0d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b0d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9b0db push eax */
  push32((uint32_t)(EAX));
  /* 10c9b0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9b0df push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b0e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b0e3 push edx */
  push32((uint32_t)(EDX));
  /* 10c9b0e4 call 0x10c9b110 */
  push32(0x10c9b0e9u); f_10c9b110();
  /* 10c9b0e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b0ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9b0ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b0f2 push eax */
  push32((uint32_t)(EAX));
  /* 10c9b0f3 call 0x10c9bf60 */
  push32(0x10c9b0f8u); f_10c9bf60();
  /* 10c9b0f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b0fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c9b0fe:;
  /* 10c9b0fe mov esp, ebp */
  ESP = (EBP);
  /* 10c9b100 pop ebp */
  EBP = (pop32());
  /* 10c9b101 ret  */
  ESPCHK(0x10c9b080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b110 @ 0x10c9b110 (627 bytes, 182 insns) */
void f_10c9b110(void) {
  FTRACE(0x10c9b110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b110 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b111 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b113 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b119 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9b120 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9b123 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10c9b129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b12d jne 0x10c9b136 */
  if (!C.zf) goto L_10c9b136;
  /* 10c9b12f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b131 jmp 0x10c9b37f */
  goto L_10c9b37f;
L_10c9b136:;
  /* 10c9b136 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b139 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9b13c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b13f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9b142 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b145 mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9b14c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c9b151 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9b154 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9b156 je 0x10c9b168 */
  if (C.zf) goto L_10c9b168;
  /* 10c9b158 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9b15a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9b15c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b15f push edx */
  push32((uint32_t)(EDX));
  /* 10c9b160 call 0x10c9afc0 */
  push32(0x10c9b165u); f_10c9afc0();
  /* 10c9b165 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9b168:;
  /* 10c9b168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b16b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9b16e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b171 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9b174 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b177 mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9b17e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10c9b183 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9b18a je 0x10c9b29c */
  if (C.zf) goto L_10c9b29c;
  /* 10c9b190 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9b193 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c9b196 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10c9b19d:;
  /* 10c9b19d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b1a0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b1a3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b1a6 jae 0x10c9b29a */
  if (!C.cf) goto L_10c9b29a;
  /* 10c9b1ac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10c9b1b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c9b1b5:;
  /* 10c9b1b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9b1b8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10c9b1be sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b1c0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b1c6 jge 0x10c9b227 */
  if ((C.sf==C.of)) goto L_10c9b227;
  /* 10c9b1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b1cb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b1ce cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b1d1 jae 0x10c9b227 */
  if (!C.cf) goto L_10c9b227;
  /* 10c9b1d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b1d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c9b1d8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10c9b1de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b1e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b1e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9b1e7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10c9b1ee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b1f1 jne 0x10c9b211 */
  if (!C.zf) goto L_10c9b211;
  /* 10c9b1f3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10c9b1f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b1fc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10c9b202 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9b205 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10c9b208 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9b20b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b20e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c9b211:;
  /* 10c9b211 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9b214 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10c9b21a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10c9b21c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9b21f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b222 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9b225 jmp 0x10c9b1b5 */
  goto L_10c9b1b5;
L_10c9b227:;
  /* 10c9b227 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9b229 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10c9b22f push edx */
  push32((uint32_t)(EDX));
  /* 10c9b230 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9b233 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10c9b239 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b23b push eax */
  push32((uint32_t)(EAX));
  /* 10c9b23c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10c9b242 push edx */
  push32((uint32_t)(EDX));
  /* 10c9b243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b246 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9b249 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b24c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9b24f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b252 mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9b259 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10c9b25c push eax */
  push32((uint32_t)(EAX));
  /* 10c9b25d call dword ptr [0x10cc0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0238))), 0x10c9b263u);
  /* 10c9b263 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9b265 je 0x10c9b28a */
  if (C.zf) goto L_10c9b28a;
  /* 10c9b267 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9b26a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b270 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c9b273 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9b276 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10c9b27c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b27e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b284 jge 0x10c9b288 */
  if ((C.sf==C.of)) goto L_10c9b288;
  /* 10c9b286 jmp 0x10c9b29a */
  goto L_10c9b29a;
L_10c9b288:;
  /* 10c9b288 jmp 0x10c9b295 */
  goto L_10c9b295;
L_10c9b28a:;
  /* 10c9b28a call dword ptr [0x10cc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0278))), 0x10c9b290u);
  /* 10c9b290 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c9b293 jmp 0x10c9b29a */
  goto L_10c9b29a;
L_10c9b295:;
  /* 10c9b295 jmp 0x10c9b19d */
  goto L_10c9b19d;
L_10c9b29a:;
  /* 10c9b29a jmp 0x10c9b2ec */
  goto L_10c9b2ec;
L_10c9b29c:;
  /* 10c9b29c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9b29e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10c9b2a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b2a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9b2a8 push edx */
  push32((uint32_t)(EDX));
  /* 10c9b2a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9b2ac push eax */
  push32((uint32_t)(EAX));
  /* 10c9b2ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b2b0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9b2b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b2b6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9b2b9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b2bc mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9b2c3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10c9b2c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b2c7 call dword ptr [0x10cc0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0238))), 0x10c9b2cdu);
  /* 10c9b2cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9b2cf je 0x10c9b2e3 */
  if (C.zf) goto L_10c9b2e3;
  /* 10c9b2d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c9b2d8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10c9b2de mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c9b2e1 jmp 0x10c9b2ec */
  goto L_10c9b2ec;
L_10c9b2e3:;
  /* 10c9b2e3 call dword ptr [0x10cc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0278))), 0x10c9b2e9u);
  /* 10c9b2e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c9b2ec:;
  /* 10c9b2ec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b2f0 jne 0x10c9b376 */
  if (!C.zf) goto L_10c9b376;
  /* 10c9b2f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b2fa je 0x10c9b32a */
  if (C.zf) goto L_10c9b32a;
  /* 10c9b2fc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b300 jne 0x10c9b319 */
  if (!C.zf) goto L_10c9b319;
  /* 10c9b302 call 0x10c9a6b0 */
  push32(0x10c9b307u); f_10c9a6b0();
  /* 10c9b307 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c9b30d call 0x10c9a6c0 */
  push32(0x10c9b312u); f_10c9a6c0();
  /* 10c9b312 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9b315 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c9b317 jmp 0x10c9b325 */
  goto L_10c9b325;
L_10c9b319:;
  /* 10c9b319 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9b31c push edx */
  push32((uint32_t)(EDX));
  /* 10c9b31d call 0x10c9a610 */
  push32(0x10c9b322u); f_10c9a610();
  /* 10c9b322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9b325:;
  /* 10c9b325 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b328 jmp 0x10c9b37f */
  goto L_10c9b37f;
L_10c9b32a:;
  /* 10c9b32a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b32d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9b330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b333 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9b336 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b339 mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9b340 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10c9b345 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9b34a je 0x10c9b35b */
  if (C.zf) goto L_10c9b35b;
  /* 10c9b34c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9b34f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9b352 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b355 jne 0x10c9b35b */
  if (!C.zf) goto L_10c9b35b;
  /* 10c9b357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b359 jmp 0x10c9b37f */
  goto L_10c9b37f;
L_10c9b35b:;
  /* 10c9b35b call 0x10c9a6b0 */
  push32(0x10c9b360u); f_10c9a6b0();
  /* 10c9b360 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10c9b366 call 0x10c9a6c0 */
  push32(0x10c9b36bu); f_10c9a6c0();
  /* 10c9b36b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9b371 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b374 jmp 0x10c9b37f */
  goto L_10c9b37f;
L_10c9b376:;
  /* 10c9b376 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9b379 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10c9b37f:;
  /* 10c9b37f mov esp, ebp */
  ESP = (EBP);
  /* 10c9b381 pop ebp */
  EBP = (pop32());
  /* 10c9b382 ret  */
  ESPCHK(0x10c9b110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b390 @ 0x10c9b390 (199 bytes, 68 insns) */
void f_10c9b390(void) {
  FTRACE(0x10c9b390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b390 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b391 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b393 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b394 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9b395 push esi */
  push32((uint32_t)(ESI));
  /* 10c9b396 push edi */
  push32((uint32_t)(EDI));
L_10c9b397:;
  /* 10c9b397 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b39b jne 0x10c9b3bb */
  if (!C.zf) goto L_10c9b3bb;
  /* 10c9b39d push 0x10cb9e64 */
  push32((uint32_t)(0x10cb9e64u));
  /* 10c9b3a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9b3a4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10c9b3a6 push 0x10cb9f30 */
  push32((uint32_t)(0x10cb9f30u));
  /* 10c9b3ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9b3ad call 0x10c918a0 */
  push32(0x10c9b3b2u); f_10c918a0();
  /* 10c9b3b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b3b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b3b8 jne 0x10c9b3bb */
  if (!C.zf) goto L_10c9b3bb;
  /* 10c9b3ba int3  */
  x86_unimpl("int3 @ 0x10c9b3ba");
L_10c9b3bb:;
  /* 10c9b3bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b3bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9b3bf jne 0x10c9b397 */
  if (!C.zf) goto L_10c9b397;
  /* 10c9b3c1 mov ecx, dword ptr [0x10cbe61c] */
  ECX = (r32((uint32_t)(0x10cbe61c)));
  /* 10c9b3c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b3ca mov dword ptr [0x10cbe61c], ecx */
  w32((uint32_t)(0x10cbe61c), (ECX));
  /* 10c9b3d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b3d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9b3d6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10c9b3d8 push 0x10cb9f30 */
  push32((uint32_t)(0x10cb9f30u));
  /* 10c9b3dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9b3df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c9b3e4 call 0x10c927e0 */
  push32(0x10c9b3e9u); f_10c927e0();
  /* 10c9b3e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b3ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b3ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10c9b3f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b3f5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b3f9 je 0x10c9b416 */
  if (C.zf) goto L_10c9b416;
  /* 10c9b3fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b3fe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c9b401 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9b404 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b407 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10c9b40a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b40d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10c9b414 jmp 0x10c9b43b */
  goto L_10c9b43b;
L_10c9b416:;
  /* 10c9b416 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b419 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9b41c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9b41f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b422 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c9b425 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b428 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b42b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b42e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c9b431 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b434 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10c9b43b:;
  /* 10c9b43b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b43e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b441 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c9b444 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c9b446 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b449 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c9b450 pop edi */
  EDI = (pop32());
  /* 10c9b451 pop esi */
  ESI = (pop32());
  /* 10c9b452 pop ebx */
  EBX = (pop32());
  /* 10c9b453 mov esp, ebp */
  ESP = (EBP);
  /* 10c9b455 pop ebp */
  EBP = (pop32());
  /* 10c9b456 ret  */
  ESPCHK(0x10c9b390u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10c9b460 (50 bytes, 17 insns) */
void f_10c9b460(void) {
  FTRACE(0x10c9b460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b460 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b461 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b466 cmp eax, dword ptr [0x10cbff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b46c jb 0x10c9b472 */
  if (C.cf) goto L_10c9b472;
  /* 10c9b46e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b470 jmp 0x10c9b490 */
  goto L_10c9b490;
L_10c9b472:;
  /* 10c9b472 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b475 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9b478 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b47b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9b47e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b481 mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9b488 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c9b48d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10c9b490:;
  /* 10c9b490 pop ebp */
  EBP = (pop32());
  /* 10c9b491 ret  */
  ESPCHK(0x10c9b460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4a0 @ 0x10c9b4a0 (300 bytes, 80 insns) */
void f_10c9b4a0(void) {
  FTRACE(0x10c9b4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b4a4 cmp dword ptr [0x10cbfae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbfae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b4ab jne 0x10c9b4b9 */
  if (!C.zf) goto L_10c9b4b9;
  /* 10c9b4ad mov dword ptr [0x10cbfae0], 0x200 */
  w32((uint32_t)(0x10cbfae0), (0x200u));
  /* 10c9b4b7 jmp 0x10c9b4cc */
  goto L_10c9b4cc;
L_10c9b4b9:;
  /* 10c9b4b9 cmp dword ptr [0x10cbfae0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10cbfae0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b4c0 jge 0x10c9b4cc */
  if ((C.sf==C.of)) goto L_10c9b4cc;
  /* 10c9b4c2 mov dword ptr [0x10cbfae0], 0x14 */
  w32((uint32_t)(0x10cbfae0), (0x14u));
L_10c9b4cc:;
  /* 10c9b4cc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10c9b4d1 push 0x10cb9f3c */
  push32((uint32_t)(0x10cb9f3cu));
  /* 10c9b4d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9b4d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c9b4da mov eax, dword ptr [0x10cbfae0] */
  EAX = (r32((uint32_t)(0x10cbfae0)));
  /* 10c9b4df push eax */
  push32((uint32_t)(EAX));
  /* 10c9b4e0 call 0x10c92bf0 */
  push32(0x10c9b4e5u); f_10c92bf0();
  /* 10c9b4e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b4e8 mov dword ptr [0x10cbe790], eax */
  w32((uint32_t)(0x10cbe790), (EAX));
  /* 10c9b4ed cmp dword ptr [0x10cbe790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b4f4 jne 0x10c9b535 */
  if (!C.zf) goto L_10c9b535;
  /* 10c9b4f6 mov dword ptr [0x10cbfae0], 0x14 */
  w32((uint32_t)(0x10cbfae0), (0x14u));
  /* 10c9b500 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10c9b505 push 0x10cb9f3c */
  push32((uint32_t)(0x10cb9f3cu));
  /* 10c9b50a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9b50c push 4 */
  push32((uint32_t)(0x4u));
  /* 10c9b50e mov ecx, dword ptr [0x10cbfae0] */
  ECX = (r32((uint32_t)(0x10cbfae0)));
  /* 10c9b514 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b515 call 0x10c92bf0 */
  push32(0x10c9b51au); f_10c92bf0();
  /* 10c9b51a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b51d mov dword ptr [0x10cbe790], eax */
  w32((uint32_t)(0x10cbe790), (EAX));
  /* 10c9b522 cmp dword ptr [0x10cbe790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b529 jne 0x10c9b535 */
  if (!C.zf) goto L_10c9b535;
  /* 10c9b52b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10c9b52d call 0x10c91750 */
  push32(0x10c9b532u); f_10c91750();
  /* 10c9b532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9b535:;
  /* 10c9b535 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9b53c jmp 0x10c9b547 */
  goto L_10c9b547;
L_10c9b53e:;
  /* 10c9b53e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b541 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b544 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c9b547:;
  /* 10c9b547 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b54b jge 0x10c9b566 */
  if ((C.sf==C.of)) goto L_10c9b566;
  /* 10c9b54d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b550 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9b553 add eax, 0x10cbd120 */
  { uint32_t _a=(EAX),_b=(0x10cbd120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b558 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b55b mov edx, dword ptr [0x10cbe790] */
  EDX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9b561 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10c9b564 jmp 0x10c9b53e */
  goto L_10c9b53e;
L_10c9b566:;
  /* 10c9b566 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9b56d jmp 0x10c9b578 */
  goto L_10c9b578;
L_10c9b56f:;
  /* 10c9b56f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b572 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b575 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9b578:;
  /* 10c9b578 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b57c jge 0x10c9b5c8 */
  if ((C.sf==C.of)) goto L_10c9b5c8;
  /* 10c9b57e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b581 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9b584 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b587 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9b58a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b58d mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9b594 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b598 je 0x10c9b5b6 */
  if (C.zf) goto L_10c9b5b6;
  /* 10c9b59a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b59d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9b5a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b5a3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9b5a6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9b5a9 mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9b5b0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b5b4 jne 0x10c9b5c6 */
  if (!C.zf) goto L_10c9b5c6;
L_10c9b5b6:;
  /* 10c9b5b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9b5b9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9b5bc mov dword ptr [ecx + 0x10cbd130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10cbd130), (0xffffffffu));
L_10c9b5c6:;
  /* 10c9b5c6 jmp 0x10c9b56f */
  goto L_10c9b56f;
L_10c9b5c8:;
  /* 10c9b5c8 mov esp, ebp */
  ESP = (EBP);
  /* 10c9b5ca pop ebp */
  EBP = (pop32());
  /* 10c9b5cb ret  */
  ESPCHK(0x10c9b4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5d0 @ 0x10c9b5d0 (26 bytes, 9 insns) */
void f_10c9b5d0(void) {
  FTRACE(0x10c9b5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b5d3 call 0x10c9c1d0 */
  push32(0x10c9b5d8u); f_10c9c1d0();
  /* 10c9b5d8 movsx eax, byte ptr [0x10cbe434] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10cbe434))));
  /* 10c9b5df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9b5e1 je 0x10c9b5e8 */
  if (C.zf) goto L_10c9b5e8;
  /* 10c9b5e3 call 0x10c9bf90 */
  push32(0x10c9b5e8u); f_10c9bf90();
L_10c9b5e8:;
  /* 10c9b5e8 pop ebp */
  EBP = (pop32());
  /* 10c9b5e9 ret  */
  ESPCHK(0x10c9b5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5f0 @ 0x10c9b5f0 (61 bytes, 20 insns) */
void f_10c9b5f0(void) {
  FTRACE(0x10c9b5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b5f3 cmp dword ptr [ebp + 8], 0x10cbd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10cbd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b5fa jb 0x10c9b61e */
  if (C.cf) goto L_10c9b61e;
  /* 10c9b5fc cmp dword ptr [ebp + 8], 0x10cbd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10cbd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b603 ja 0x10c9b61e */
  if ((!C.cf&&!C.zf)) goto L_10c9b61e;
  /* 10c9b605 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b608 sub eax, 0x10cbd120 */
  { uint32_t _a=(EAX),_b=(0x10cbd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b60d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9b610 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b613 push eax */
  push32((uint32_t)(EAX));
  /* 10c9b614 call 0x10c961e0 */
  push32(0x10c9b619u); f_10c961e0();
  /* 10c9b619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b61c jmp 0x10c9b62b */
  goto L_10c9b62b;
L_10c9b61e:;
  /* 10c9b61e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b621 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b624 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b625 call dword ptr [0x10cc02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c8))), 0x10c9b62bu);
L_10c9b62b:;
  /* 10c9b62b pop ebp */
  EBP = (pop32());
  /* 10c9b62c ret  */
  ESPCHK(0x10c9b5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b630 @ 0x10c9b630 (41 bytes, 16 insns) */
void f_10c9b630(void) {
  FTRACE(0x10c9b630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b630 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b631 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b633 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b637 jge 0x10c9b64a */
  if ((C.sf==C.of)) goto L_10c9b64a;
  /* 10c9b639 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b63c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b63f push eax */
  push32((uint32_t)(EAX));
  /* 10c9b640 call 0x10c961e0 */
  push32(0x10c9b645u); f_10c961e0();
  /* 10c9b645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b648 jmp 0x10c9b657 */
  goto L_10c9b657;
L_10c9b64a:;
  /* 10c9b64a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9b64d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b650 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b651 call dword ptr [0x10cc02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c8))), 0x10c9b657u);
L_10c9b657:;
  /* 10c9b657 pop ebp */
  EBP = (pop32());
  /* 10c9b658 ret  */
  ESPCHK(0x10c9b630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b660 @ 0x10c9b660 (61 bytes, 20 insns) */
void f_10c9b660(void) {
  FTRACE(0x10c9b660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b660 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b661 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b663 cmp dword ptr [ebp + 8], 0x10cbd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10cbd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b66a jb 0x10c9b68e */
  if (C.cf) goto L_10c9b68e;
  /* 10c9b66c cmp dword ptr [ebp + 8], 0x10cbd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10cbd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b673 ja 0x10c9b68e */
  if ((!C.cf&&!C.zf)) goto L_10c9b68e;
  /* 10c9b675 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b678 sub eax, 0x10cbd120 */
  { uint32_t _a=(EAX),_b=(0x10cbd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b67d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9b680 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b683 push eax */
  push32((uint32_t)(EAX));
  /* 10c9b684 call 0x10c96280 */
  push32(0x10c9b689u); f_10c96280();
  /* 10c9b689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b68c jmp 0x10c9b69b */
  goto L_10c9b69b;
L_10c9b68e:;
  /* 10c9b68e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b691 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b694 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b695 call dword ptr [0x10cc02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02cc))), 0x10c9b69bu);
L_10c9b69b:;
  /* 10c9b69b pop ebp */
  EBP = (pop32());
  /* 10c9b69c ret  */
  ESPCHK(0x10c9b660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6a0 @ 0x10c9b6a0 (41 bytes, 16 insns) */
void f_10c9b6a0(void) {
  FTRACE(0x10c9b6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b6a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b6a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b6a7 jge 0x10c9b6ba */
  if ((C.sf==C.of)) goto L_10c9b6ba;
  /* 10c9b6a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b6ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b6af push eax */
  push32((uint32_t)(EAX));
  /* 10c9b6b0 call 0x10c96280 */
  push32(0x10c9b6b5u); f_10c96280();
  /* 10c9b6b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b6b8 jmp 0x10c9b6c7 */
  goto L_10c9b6c7;
L_10c9b6ba:;
  /* 10c9b6ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9b6bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b6c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b6c1 call dword ptr [0x10cc02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02cc))), 0x10c9b6c7u);
L_10c9b6c7:;
  /* 10c9b6c7 pop ebp */
  EBP = (pop32());
  /* 10c9b6c8 ret  */
  ESPCHK(0x10c9b6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6d0 @ 0x10c9b6d0 (119 bytes, 34 insns) */
void f_10c9b6d0(void) {
  FTRACE(0x10c9b6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b6d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b6d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b6d6 push 0x10cbe78c */
  push32((uint32_t)(0x10cbe78cu));
  /* 10c9b6db call dword ptr [0x10cc024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc024c))), 0x10c9b6e1u);
  /* 10c9b6e1 cmp dword ptr [0x10cbe77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b6e8 je 0x10c9b708 */
  if (C.zf) goto L_10c9b708;
  /* 10c9b6ea push 0x10cbe78c */
  push32((uint32_t)(0x10cbe78cu));
  /* 10c9b6ef call dword ptr [0x10cc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc023c))), 0x10c9b6f5u);
  /* 10c9b6f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c9b6f7 call 0x10c961e0 */
  push32(0x10c9b6fcu); f_10c961e0();
  /* 10c9b6fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b6ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c9b706 jmp 0x10c9b70f */
  goto L_10c9b70f;
L_10c9b708:;
  /* 10c9b708 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c9b70f:;
  /* 10c9b70f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10c9b713 push eax */
  push32((uint32_t)(EAX));
  /* 10c9b714 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b717 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b718 call 0x10c9b750 */
  push32(0x10c9b71du); f_10c9b750();
  /* 10c9b71d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b720 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9b723 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b727 je 0x10c9b735 */
  if (C.zf) goto L_10c9b735;
  /* 10c9b729 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c9b72b call 0x10c96280 */
  push32(0x10c9b730u); f_10c96280();
  /* 10c9b730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b733 jmp 0x10c9b740 */
  goto L_10c9b740;
L_10c9b735:;
  /* 10c9b735 push 0x10cbe78c */
  push32((uint32_t)(0x10cbe78cu));
  /* 10c9b73a call dword ptr [0x10cc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc023c))), 0x10c9b740u);
L_10c9b740:;
  /* 10c9b740 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9b743 mov esp, ebp */
  ESP = (EBP);
  /* 10c9b745 pop ebp */
  EBP = (pop32());
  /* 10c9b746 ret  */
  ESPCHK(0x10c9b6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x10c9b750 (160 bytes, 50 insns) */
void f_10c9b750(void) {
  FTRACE(0x10c9b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b750 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b751 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b756 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b75a jne 0x10c9b763 */
  if (!C.zf) goto L_10c9b763;
  /* 10c9b75c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b75e jmp 0x10c9b7ec */
  goto L_10c9b7ec;
L_10c9b763:;
  /* 10c9b763 cmp dword ptr [0x10cbe600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b76a jne 0x10c9b79a */
  if (!C.zf) goto L_10c9b79a;
  /* 10c9b76c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9b76f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b774 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b779 jle 0x10c9b78b */
  if ((C.zf||C.sf!=C.of)) goto L_10c9b78b;
  /* 10c9b77b call 0x10c9a6b0 */
  push32(0x10c9b780u); f_10c9a6b0();
  /* 10c9b780 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10c9b786 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b789 jmp 0x10c9b7ec */
  goto L_10c9b7ec;
L_10c9b78b:;
  /* 10c9b78b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b78e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10c9b791 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10c9b793 mov eax, 1 */
  EAX = (0x1u);
  /* 10c9b798 jmp 0x10c9b7ec */
  goto L_10c9b7ec;
L_10c9b79a:;
  /* 10c9b79a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9b7a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c9b7a4 push eax */
  push32((uint32_t)(EAX));
  /* 10c9b7a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9b7a7 mov ecx, dword ptr [0x10cbcea4] */
  ECX = (r32((uint32_t)(0x10cbcea4)));
  /* 10c9b7ad push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b7ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b7b1 push edx */
  push32((uint32_t)(EDX));
  /* 10c9b7b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9b7b4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10c9b7b7 push eax */
  push32((uint32_t)(EAX));
  /* 10c9b7b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c9b7bd mov ecx, dword ptr [0x10cbe610] */
  ECX = (r32((uint32_t)(0x10cbe610)));
  /* 10c9b7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b7c4 call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10c9b7cau);
  /* 10c9b7ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9b7cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b7d1 je 0x10c9b7d9 */
  if (C.zf) goto L_10c9b7d9;
  /* 10c9b7d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b7d7 je 0x10c9b7e9 */
  if (C.zf) goto L_10c9b7e9;
L_10c9b7d9:;
  /* 10c9b7d9 call 0x10c9a6b0 */
  push32(0x10c9b7deu); f_10c9a6b0();
  /* 10c9b7de mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10c9b7e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9b7e7 jmp 0x10c9b7ec */
  goto L_10c9b7ec;
L_10c9b7e9:;
  /* 10c9b7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c9b7ec:;
  /* 10c9b7ec mov esp, ebp */
  ESP = (EBP);
  /* 10c9b7ee pop ebp */
  EBP = (pop32());
  /* 10c9b7ef ret  */
  ESPCHK(0x10c9b750u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10c9b7f0 (32 bytes, 18 insns) */
void f_10c9b7f0(void) {
  FTRACE(0x10c9b7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b7f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b7f3 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9b7f4 push esi */
  push32((uint32_t)(ESI));
  /* 10c9b7f5 push edi */
  push32((uint32_t)(EDI));
  /* 10c9b7f6 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b7f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9b7f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9b7fb push 0x10c9b808 */
  push32((uint32_t)(0x10c9b808u));
  /* 10c9b800 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10c9b803 call 0x10ca2f3c */
  push32(0x10c9b808u); f_10ca2f3c();
  /* 10c9b808 pop ebp */
  EBP = (pop32());
  /* 10c9b809 pop edi */
  EDI = (pop32());
  /* 10c9b80a pop esi */
  ESI = (pop32());
  /* 10c9b80b pop ebx */
  EBX = (pop32());
  /* 10c9b80c mov esp, ebp */
  ESP = (EBP);
  /* 10c9b80e pop ebp */
  EBP = (pop32());
  /* 10c9b80f ret  */
  ESPCHK(0x10c9b7f0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10c9b832 (104 bytes, 33 insns) */
void f_10c9b832(void) {
  FTRACE(0x10c9b832u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b832 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9b833 push esi */
  push32((uint32_t)(ESI));
  /* 10c9b834 push edi */
  push32((uint32_t)(EDI));
  /* 10c9b835 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c9b839 push eax */
  push32((uint32_t)(EAX));
  /* 10c9b83a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10c9b83c push 0x10c9b810 */
  push32((uint32_t)(0x10c9b810u));
  /* 10c9b841 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10c9b848 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10c9b84f:;
  /* 10c9b84f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10c9b853 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c9b856 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10c9b859 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b85c je 0x10c9b88c */
  if (C.zf) goto L_10c9b88c;
  /* 10c9b85e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b862 je 0x10c9b88c */
  if (C.zf) goto L_10c9b88c;
  /* 10c9b864 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10c9b867 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10c9b86a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10c9b86e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10c9b871 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b876 jne 0x10c9b88a */
  if (!C.zf) goto L_10c9b88a;
  /* 10c9b878 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10c9b87d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10c9b881 call 0x10c9b8c6 */
  push32(0x10c9b886u); f_10c9b8c6();
  /* 10c9b886 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10c9b88au);
L_10c9b88a:;
  /* 10c9b88a jmp 0x10c9b84f */
  goto L_10c9b84f;
L_10c9b88c:;
  /* 10c9b88c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10c9b893 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b896 pop edi */
  EDI = (pop32());
  /* 10c9b897 pop esi */
  ESI = (pop32());
  /* 10c9b898 pop ebx */
  EBX = (pop32());
  /* 10c9b899 ret  */
  ESPCHK(0x10c9b832u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8c6 @ 0x10c9b8c6 (24 bytes, 10 insns) */
void f_10c9b8c6(void) {
  FTRACE(0x10c9b8c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b8c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9b8c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9b8c8 mov ebx, 0x10cbd3b8 */
  EBX = (0x10cbd3b8u);
  /* 10c9b8cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9b8d0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10c9b8d3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10c9b8d6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10c9b8d9 pop ecx */
  ECX = (pop32());
  /* 10c9b8da pop ebx */
  EBX = (pop32());
  /* 10c9b8db ret 4 */
  ESPCHK(0x10c9b8c6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b9a5 @ 0x10c9b9a5 (27 bytes, 11 insns) */
void f_10c9b9a5(void) {
  FTRACE(0x10c9b9a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b9a5 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b9a6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c9b9aa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10c9b9ac mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c9b9af push eax */
  push32((uint32_t)(EAX));
  /* 10c9b9b0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c9b9b3 push eax */
  push32((uint32_t)(EAX));
  /* 10c9b9b4 call 0x10c9b832 */
  push32(0x10c9b9b9u); f_10c9b832();
  /* 10c9b9b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b9bc pop ebp */
  EBP = (pop32());
  /* 10c9b9bd ret 4 */
  ESPCHK(0x10c9b9a5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b9c0 @ 0x10c9b9c0 (482 bytes, 138 insns) */
void f_10c9b9c0(void) {
  FTRACE(0x10c9b9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9b9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9b9c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9b9c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9b9c6 push esi */
  push32((uint32_t)(ESI));
  /* 10c9b9c7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10c9b9ce push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10c9b9d0 call 0x10c961e0 */
  push32(0x10c9b9d5u); f_10c961e0();
  /* 10c9b9d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b9d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c9b9df jmp 0x10c9b9ea */
  goto L_10c9b9ea;
L_10c9b9e1:;
  /* 10c9b9e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9b9e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9b9e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c9b9ea:;
  /* 10c9b9ea cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b9ee jge 0x10c9bb90 */
  if ((C.sf==C.of)) goto L_10c9bb90;
  /* 10c9b9f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9b9f7 cmp dword ptr [ecx*4 + 0x10cbfde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10cbfde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9b9ff je 0x10c9baf6 */
  if (C.zf) goto L_10c9baf6;
  /* 10c9ba05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9ba08 mov eax, dword ptr [edx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cbfde0)));
  /* 10c9ba0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9ba12 jmp 0x10c9ba1d */
  goto L_10c9ba1d;
L_10c9ba14:;
  /* 10c9ba14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ba17 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ba1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c9ba1d:;
  /* 10c9ba1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9ba20 mov eax, dword ptr [edx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cbfde0)));
  /* 10c9ba27 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ba2c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ba2f jae 0x10c9bae6 */
  if (!C.cf) goto L_10c9bae6;
  /* 10c9ba35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ba38 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c9ba3c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9ba3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9ba41 jne 0x10c9bae1 */
  if (!C.zf) goto L_10c9bae1;
  /* 10c9ba47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ba4a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ba4e jne 0x10c9ba89 */
  if (!C.zf) goto L_10c9ba89;
  /* 10c9ba50 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c9ba52 call 0x10c961e0 */
  push32(0x10c9ba57u); f_10c961e0();
  /* 10c9ba57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ba5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ba5d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ba61 jne 0x10c9ba7f */
  if (!C.zf) goto L_10c9ba7f;
  /* 10c9ba63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ba66 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ba69 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ba6a call dword ptr [0x10cc02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c4))), 0x10c9ba70u);
  /* 10c9ba70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ba73 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c9ba76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ba79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ba7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10c9ba7f:;
  /* 10c9ba7f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c9ba81 call 0x10c96280 */
  push32(0x10c9ba86u); f_10c96280();
  /* 10c9ba86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9ba89:;
  /* 10c9ba89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ba8c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ba8f push eax */
  push32((uint32_t)(EAX));
  /* 10c9ba90 call dword ptr [0x10cc02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c8))), 0x10c9ba96u);
  /* 10c9ba96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ba99 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c9ba9d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9baa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9baa2 je 0x10c9bab6 */
  if (C.zf) goto L_10c9bab6;
  /* 10c9baa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9baa7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9baaa push eax */
  push32((uint32_t)(EAX));
  /* 10c9baab call dword ptr [0x10cc02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02cc))), 0x10c9bab1u);
  /* 10c9bab1 jmp 0x10c9ba14 */
  goto L_10c9ba14;
L_10c9bab6:;
  /* 10c9bab6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bab9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c9babf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9bac2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9bac5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9bac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bacb sub eax, dword ptr [edx*4 + 0x10cbfde0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10cbfde0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9bad2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c9bad3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10c9bad8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c9bada add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9badc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9badf jmp 0x10c9bae6 */
  goto L_10c9bae6;
L_10c9bae1:;
  /* 10c9bae1 jmp 0x10c9ba14 */
  goto L_10c9ba14;
L_10c9bae6:;
  /* 10c9bae6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9baea je 0x10c9baf1 */
  if (C.zf) goto L_10c9baf1;
  /* 10c9baec jmp 0x10c9bb90 */
  goto L_10c9bb90;
L_10c9baf1:;
  /* 10c9baf1 jmp 0x10c9bb8b */
  goto L_10c9bb8b;
L_10c9baf6:;
  /* 10c9baf6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10c9baf8 push 0x10cb9f44 */
  push32((uint32_t)(0x10cb9f44u));
  /* 10c9bafd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9baff push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10c9bb04 call 0x10c927e0 */
  push32(0x10c9bb09u); f_10c927e0();
  /* 10c9bb09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bb0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9bb0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bb13 je 0x10c9bb89 */
  if (C.zf) goto L_10c9bb89;
  /* 10c9bb15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9bb18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bb1b mov dword ptr [eax*4 + 0x10cbfde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10cbfde0), (ECX));
  /* 10c9bb22 mov edx, dword ptr [0x10cbff1c] */
  EDX = (r32((uint32_t)(0x10cbff1c)));
  /* 10c9bb28 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bb2b mov dword ptr [0x10cbff1c], edx */
  w32((uint32_t)(0x10cbff1c), (EDX));
  /* 10c9bb31 jmp 0x10c9bb3c */
  goto L_10c9bb3c;
L_10c9bb33:;
  /* 10c9bb33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bb36 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bb39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9bb3c:;
  /* 10c9bb3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9bb3f mov edx, dword ptr [ecx*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9bb46 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bb4c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bb4f jae 0x10c9bb74 */
  if (!C.cf) goto L_10c9bb74;
  /* 10c9bb51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bb54 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c9bb58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bb5b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c9bb61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bb64 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10c9bb68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bb6b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c9bb72 jmp 0x10c9bb33 */
  goto L_10c9bb33;
L_10c9bb74:;
  /* 10c9bb74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9bb77 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9bb7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9bb7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9bb80 push edx */
  push32((uint32_t)(EDX));
  /* 10c9bb81 call 0x10c9bed0 */
  push32(0x10c9bb86u); f_10c9bed0();
  /* 10c9bb86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9bb89:;
  /* 10c9bb89 jmp 0x10c9bb90 */
  goto L_10c9bb90;
L_10c9bb8b:;
  /* 10c9bb8b jmp 0x10c9b9e1 */
  goto L_10c9b9e1;
L_10c9bb90:;
  /* 10c9bb90 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10c9bb92 call 0x10c96280 */
  push32(0x10c9bb97u); f_10c96280();
  /* 10c9bb97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bb9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9bb9d pop esi */
  ESI = (pop32());
  /* 10c9bb9e mov esp, ebp */
  ESP = (EBP);
  /* 10c9bba0 pop ebp */
  EBP = (pop32());
  /* 10c9bba1 ret  */
  ESPCHK(0x10c9b9c0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10c9bbb0 (183 bytes, 57 insns) */
void f_10c9bbb0(void) {
  FTRACE(0x10c9bbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9bbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9bbb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9bbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9bbb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bbb7 cmp eax, dword ptr [0x10cbff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bbbd jae 0x10c9bc4a */
  if (!C.cf) goto L_10c9bc4a;
  /* 10c9bbc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bbc6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9bbc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bbcc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9bbcf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bbd2 mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9bbd9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bbdd jne 0x10c9bc4a */
  if (!C.zf) goto L_10c9bc4a;
  /* 10c9bbdf cmp dword ptr [0x10cbe3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bbe6 jne 0x10c9bc2a */
  if (!C.zf) goto L_10c9bc2a;
  /* 10c9bbe8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bbeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c9bbee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bbf2 je 0x10c9bc02 */
  if (C.zf) goto L_10c9bc02;
  /* 10c9bbf4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bbf8 je 0x10c9bc10 */
  if (C.zf) goto L_10c9bc10;
  /* 10c9bbfa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bbfe je 0x10c9bc1e */
  if (C.zf) goto L_10c9bc1e;
  /* 10c9bc00 jmp 0x10c9bc2a */
  goto L_10c9bc2a;
L_10c9bc02:;
  /* 10c9bc02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9bc05 push edx */
  push32((uint32_t)(EDX));
  /* 10c9bc06 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10c9bc08 call dword ptr [0x10cc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f0))), 0x10c9bc0eu);
  /* 10c9bc0e jmp 0x10c9bc2a */
  goto L_10c9bc2a;
L_10c9bc10:;
  /* 10c9bc10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9bc13 push eax */
  push32((uint32_t)(EAX));
  /* 10c9bc14 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10c9bc16 call dword ptr [0x10cc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f0))), 0x10c9bc1cu);
  /* 10c9bc1c jmp 0x10c9bc2a */
  goto L_10c9bc2a;
L_10c9bc1e:;
  /* 10c9bc1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9bc21 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9bc22 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c9bc24 call dword ptr [0x10cc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f0))), 0x10c9bc2au);
L_10c9bc2a:;
  /* 10c9bc2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bc2d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c9bc30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bc33 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9bc36 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bc39 mov ecx, dword ptr [edx*4 + 0x10cbfde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10cbfde0)));
  /* 10c9bc40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9bc43 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10c9bc46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9bc48 jmp 0x10c9bc63 */
  goto L_10c9bc63;
L_10c9bc4a:;
  /* 10c9bc4a call 0x10c9a6b0 */
  push32(0x10c9bc4fu); f_10c9a6b0();
  /* 10c9bc4f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c9bc55 call 0x10c9a6c0 */
  push32(0x10c9bc5au); f_10c9a6c0();
  /* 10c9bc5a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9bc60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c9bc63:;
  /* 10c9bc63 mov esp, ebp */
  ESP = (EBP);
  /* 10c9bc65 pop ebp */
  EBP = (pop32());
  /* 10c9bc66 ret  */
  ESPCHK(0x10c9bbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x10c9bc70 (216 bytes, 63 insns) */
void f_10c9bc70(void) {
  FTRACE(0x10c9bc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9bc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9bc71 mov ebp, esp */
  EBP = (ESP);
  /* 10c9bc73 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9bc74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bc77 cmp eax, dword ptr [0x10cbff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bc7d jae 0x10c9bd2b */
  if (!C.cf) goto L_10c9bd2b;
  /* 10c9bc83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bc86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9bc89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bc8c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9bc8f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bc92 mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9bc99 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c9bc9e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9bca1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9bca3 je 0x10c9bd2b */
  if (C.zf) goto L_10c9bd2b;
  /* 10c9bca9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bcac sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c9bcaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bcb2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9bcb5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bcb8 mov ecx, dword ptr [edx*4 + 0x10cbfde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10cbfde0)));
  /* 10c9bcbf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bcc3 je 0x10c9bd2b */
  if (C.zf) goto L_10c9bd2b;
  /* 10c9bcc5 cmp dword ptr [0x10cbe3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bccc jne 0x10c9bd0a */
  if (!C.zf) goto L_10c9bd0a;
  /* 10c9bcce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bcd1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9bcd4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bcd8 je 0x10c9bce8 */
  if (C.zf) goto L_10c9bce8;
  /* 10c9bcda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bcde je 0x10c9bcf4 */
  if (C.zf) goto L_10c9bcf4;
  /* 10c9bce0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bce4 je 0x10c9bd00 */
  if (C.zf) goto L_10c9bd00;
  /* 10c9bce6 jmp 0x10c9bd0a */
  goto L_10c9bd0a;
L_10c9bce8:;
  /* 10c9bce8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9bcea push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10c9bcec call dword ptr [0x10cc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f0))), 0x10c9bcf2u);
  /* 10c9bcf2 jmp 0x10c9bd0a */
  goto L_10c9bd0a;
L_10c9bcf4:;
  /* 10c9bcf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9bcf6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10c9bcf8 call dword ptr [0x10cc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f0))), 0x10c9bcfeu);
  /* 10c9bcfe jmp 0x10c9bd0a */
  goto L_10c9bd0a;
L_10c9bd00:;
  /* 10c9bd00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9bd02 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c9bd04 call dword ptr [0x10cc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02f0))), 0x10c9bd0au);
L_10c9bd0a:;
  /* 10c9bd0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bd0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9bd10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bd13 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9bd16 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bd19 mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9bd20 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10c9bd27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9bd29 jmp 0x10c9bd44 */
  goto L_10c9bd44;
L_10c9bd2b:;
  /* 10c9bd2b call 0x10c9a6b0 */
  push32(0x10c9bd30u); f_10c9a6b0();
  /* 10c9bd30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c9bd36 call 0x10c9a6c0 */
  push32(0x10c9bd3bu); f_10c9a6c0();
  /* 10c9bd3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9bd41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c9bd44:;
  /* 10c9bd44 mov esp, ebp */
  ESP = (EBP);
  /* 10c9bd46 pop ebp */
  EBP = (pop32());
  /* 10c9bd47 ret  */
  ESPCHK(0x10c9bc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd50 @ 0x10c9bd50 (102 bytes, 30 insns) */
void f_10c9bd50(void) {
  FTRACE(0x10c9bd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9bd50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9bd51 mov ebp, esp */
  EBP = (ESP);
  /* 10c9bd53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bd56 cmp eax, dword ptr [0x10cbff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bd5c jae 0x10c9bd9b */
  if (!C.cf) goto L_10c9bd9b;
  /* 10c9bd5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bd61 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9bd64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bd67 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9bd6a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bd6d mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9bd74 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c9bd79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9bd7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9bd7e je 0x10c9bd9b */
  if (C.zf) goto L_10c9bd9b;
  /* 10c9bd80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bd83 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c9bd86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bd89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9bd8c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bd8f mov ecx, dword ptr [edx*4 + 0x10cbfde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10cbfde0)));
  /* 10c9bd96 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10c9bd99 jmp 0x10c9bdb4 */
  goto L_10c9bdb4;
L_10c9bd9b:;
  /* 10c9bd9b call 0x10c9a6b0 */
  push32(0x10c9bda0u); f_10c9a6b0();
  /* 10c9bda0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c9bda6 call 0x10c9a6c0 */
  push32(0x10c9bdabu); f_10c9a6c0();
  /* 10c9bdab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9bdb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c9bdb4:;
  /* 10c9bdb4 pop ebp */
  EBP = (pop32());
  /* 10c9bdb5 ret  */
  ESPCHK(0x10c9bd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdc0 @ 0x10c9bdc0 (260 bytes, 83 insns) */
void f_10c9bdc0(void) {
  FTRACE(0x10c9bdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9bdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9bdc1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9bdc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9bdc6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c9bdca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9bdcd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9bdd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9bdd2 je 0x10c9bddd */
  if (C.zf) goto L_10c9bddd;
  /* 10c9bdd4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c9bdd7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10c9bdda mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10c9bddd:;
  /* 10c9bddd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9bde0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9bde6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9bde8 je 0x10c9bdf2 */
  if (C.zf) goto L_10c9bdf2;
  /* 10c9bdea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c9bded or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10c9bdef mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10c9bdf2:;
  /* 10c9bdf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9bdf5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9bdfb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9bdfd je 0x10c9be08 */
  if (C.zf) goto L_10c9be08;
  /* 10c9bdff mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c9be02 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10c9be05 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10c9be08:;
  /* 10c9be08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9be0b push eax */
  push32((uint32_t)(EAX));
  /* 10c9be0c call dword ptr [0x10cc0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0284))), 0x10c9be12u);
  /* 10c9be12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9be15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9be19 jne 0x10c9be32 */
  if (!C.zf) goto L_10c9be32;
  /* 10c9be1b call dword ptr [0x10cc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0278))), 0x10c9be21u);
  /* 10c9be21 push eax */
  push32((uint32_t)(EAX));
  /* 10c9be22 call 0x10c9a610 */
  push32(0x10c9be27u); f_10c9a610();
  /* 10c9be27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9be2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9be2d jmp 0x10c9bec0 */
  goto L_10c9bec0;
L_10c9be32:;
  /* 10c9be32 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9be36 jne 0x10c9be43 */
  if (!C.zf) goto L_10c9be43;
  /* 10c9be38 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c9be3b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10c9be3e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10c9be41 jmp 0x10c9be52 */
  goto L_10c9be52;
L_10c9be43:;
  /* 10c9be43 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9be47 jne 0x10c9be52 */
  if (!C.zf) goto L_10c9be52;
  /* 10c9be49 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c9be4c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10c9be4f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10c9be52:;
  /* 10c9be52 call 0x10c9b9c0 */
  push32(0x10c9be57u); f_10c9b9c0();
  /* 10c9be57 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9be5a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9be5e jne 0x10c9be7b */
  if (!C.zf) goto L_10c9be7b;
  /* 10c9be60 call 0x10c9a6b0 */
  push32(0x10c9be65u); f_10c9a6b0();
  /* 10c9be65 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10c9be6b call 0x10c9a6c0 */
  push32(0x10c9be70u); f_10c9a6c0();
  /* 10c9be70 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9be76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9be79 jmp 0x10c9bec0 */
  goto L_10c9bec0;
L_10c9be7b:;
  /* 10c9be7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9be7e push eax */
  push32((uint32_t)(EAX));
  /* 10c9be7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9be82 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9be83 call 0x10c9bbb0 */
  push32(0x10c9be88u); f_10c9bbb0();
  /* 10c9be88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9be8b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c9be8e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10c9be91 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10c9be94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9be97 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9be9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9be9d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9bea0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bea3 mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9beaa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c9bead mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10c9beb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9beb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9beb5 call 0x10c9bf60 */
  push32(0x10c9bebau); f_10c9bf60();
  /* 10c9beba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bebd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c9bec0:;
  /* 10c9bec0 mov esp, ebp */
  ESP = (EBP);
  /* 10c9bec2 pop ebp */
  EBP = (pop32());
  /* 10c9bec3 ret  */
  ESPCHK(0x10c9bdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bed0 @ 0x10c9bed0 (134 bytes, 44 insns) */
void f_10c9bed0(void) {
  FTRACE(0x10c9bed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9bed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9bed1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9bed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9bed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bed7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9beda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bedd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9bee0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bee3 mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9beea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9beec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9beef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bef2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bef6 jne 0x10c9bf31 */
  if (!C.zf) goto L_10c9bf31;
  /* 10c9bef8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c9befa call 0x10c961e0 */
  push32(0x10c9beffu); f_10c961e0();
  /* 10c9beff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bf02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bf05 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bf09 jne 0x10c9bf27 */
  if (!C.zf) goto L_10c9bf27;
  /* 10c9bf0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bf0e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bf11 push edx */
  push32((uint32_t)(EDX));
  /* 10c9bf12 call dword ptr [0x10cc02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c4))), 0x10c9bf18u);
  /* 10c9bf18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bf1b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c9bf1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bf21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9bf24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10c9bf27:;
  /* 10c9bf27 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c9bf29 call 0x10c96280 */
  push32(0x10c9bf2eu); f_10c96280();
  /* 10c9bf2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9bf31:;
  /* 10c9bf31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bf34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9bf37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bf3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9bf3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bf40 mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9bf47 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10c9bf4b push eax */
  push32((uint32_t)(EAX));
  /* 10c9bf4c call dword ptr [0x10cc02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c8))), 0x10c9bf52u);
  /* 10c9bf52 mov esp, ebp */
  ESP = (EBP);
  /* 10c9bf54 pop ebp */
  EBP = (pop32());
  /* 10c9bf55 ret  */
  ESPCHK(0x10c9bed0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10c9bf60 (38 bytes, 13 insns) */
void f_10c9bf60(void) {
  FTRACE(0x10c9bf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9bf60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9bf61 mov ebp, esp */
  EBP = (ESP);
  /* 10c9bf63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bf66 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9bf69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9bf6c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9bf6f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9bf72 mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9bf79 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10c9bf7d push eax */
  push32((uint32_t)(EAX));
  /* 10c9bf7e call dword ptr [0x10cc02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02cc))), 0x10c9bf84u);
  /* 10c9bf84 pop ebp */
  EBP = (pop32());
  /* 10c9bf85 ret  */
  ESPCHK(0x10c9bf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x10c9bf90 (218 bytes, 63 insns) */
void f_10c9bf90(void) {
  FTRACE(0x10c9bf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9bf90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9bf91 mov ebp, esp */
  EBP = (ESP);
  /* 10c9bf93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9bf96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9bf9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9bf9f call 0x10c961e0 */
  push32(0x10c9bfa4u); f_10c961e0();
  /* 10c9bfa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bfa7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10c9bfae jmp 0x10c9bfb9 */
  goto L_10c9bfb9;
L_10c9bfb0:;
  /* 10c9bfb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9bfb3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9bfb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c9bfb9:;
  /* 10c9bfb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9bfbc cmp ecx, dword ptr [0x10cbfae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbfae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bfc2 jge 0x10c9c059 */
  if ((C.sf==C.of)) goto L_10c9c059;
  /* 10c9bfc8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9bfcb mov eax, dword ptr [0x10cbe790] */
  EAX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9bfd0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9bfd4 je 0x10c9c054 */
  if (C.zf) goto L_10c9c054;
  /* 10c9bfd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9bfd9 mov edx, dword ptr [0x10cbe790] */
  EDX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9bfdf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c9bfe2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c9bfe5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9bfeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9bfed je 0x10c9c011 */
  if (C.zf) goto L_10c9c011;
  /* 10c9bfef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9bff2 mov eax, dword ptr [0x10cbe790] */
  EAX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9bff7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c9bffa push ecx */
  push32((uint32_t)(ECX));
  /* 10c9bffb call 0x10c9cd80 */
  push32(0x10c9c000u); f_10c9cd80();
  /* 10c9c000 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c003 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c006 je 0x10c9c011 */
  if (C.zf) goto L_10c9c011;
  /* 10c9c008 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c00b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c00e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c9c011:;
  /* 10c9c011 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c015 jl 0x10c9c054 */
  if ((C.sf!=C.of)) goto L_10c9c054;
  /* 10c9c017 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c01a mov ecx, dword ptr [0x10cbe790] */
  ECX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c020 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c9c023 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c026 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c027 call dword ptr [0x10cc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc028c))), 0x10c9c02du);
  /* 10c9c02d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c02f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c032 mov ecx, dword ptr [0x10cbe790] */
  ECX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c038 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c9c03b push edx */
  push32((uint32_t)(EDX));
  /* 10c9c03c call 0x10c93270 */
  push32(0x10c9c041u); f_10c93270();
  /* 10c9c041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c044 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c047 mov ecx, dword ptr [0x10cbe790] */
  ECX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c04d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10c9c054:;
  /* 10c9c054 jmp 0x10c9bfb0 */
  goto L_10c9bfb0;
L_10c9c059:;
  /* 10c9c059 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c05b call 0x10c96280 */
  push32(0x10c9c060u); f_10c96280();
  /* 10c9c060 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c063 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c066 mov esp, ebp */
  ESP = (EBP);
  /* 10c9c068 pop ebp */
  EBP = (pop32());
  /* 10c9c069 ret  */
  ESPCHK(0x10c9bf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c070 @ 0x10c9c070 (68 bytes, 26 insns) */
void f_10c9c070(void) {
  FTRACE(0x10c9c070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9c070 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9c071 mov ebp, esp */
  EBP = (ESP);
  /* 10c9c073 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c074 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c078 jne 0x10c9c086 */
  if (!C.zf) goto L_10c9c086;
  /* 10c9c07a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9c07c call 0x10c9c1e0 */
  push32(0x10c9c081u); f_10c9c1e0();
  /* 10c9c081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c084 jmp 0x10c9c0b0 */
  goto L_10c9c0b0;
L_10c9c086:;
  /* 10c9c086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c089 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c08a call 0x10c9b5f0 */
  push32(0x10c9c08fu); f_10c9b5f0();
  /* 10c9c08f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c092 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c095 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c096 call 0x10c9c0c0 */
  push32(0x10c9c09bu); f_10c9c0c0();
  /* 10c9c09b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c09e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9c0a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c0a4 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c0a5 call 0x10c9b660 */
  push32(0x10c9c0aau); f_10c9b660();
  /* 10c9c0aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c0ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c9c0b0:;
  /* 10c9c0b0 mov esp, ebp */
  ESP = (EBP);
  /* 10c9c0b2 pop ebp */
  EBP = (pop32());
  /* 10c9c0b3 ret  */
  ESPCHK(0x10c9c070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c0 @ 0x10c9c0c0 (65 bytes, 26 insns) */
void f_10c9c0c0(void) {
  FTRACE(0x10c9c0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9c0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9c0c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9c0c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c0c6 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c0c7 call 0x10c9c110 */
  push32(0x10c9c0ccu); f_10c9c110();
  /* 10c9c0cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c0cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c0d1 je 0x10c9c0d8 */
  if (C.zf) goto L_10c9c0d8;
  /* 10c9c0d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9c0d6 jmp 0x10c9c0ff */
  goto L_10c9c0ff;
L_10c9c0d8:;
  /* 10c9c0d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c0db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9c0de and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9c0e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9c0e6 je 0x10c9c0fd */
  if (C.zf) goto L_10c9c0fd;
  /* 10c9c0e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c0eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9c0ee push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c0ef call 0x10c9ced0 */
  push32(0x10c9c0f4u); f_10c9ced0();
  /* 10c9c0f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c0f7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9c0f9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c0fb jmp 0x10c9c0ff */
  goto L_10c9c0ff;
L_10c9c0fd:;
  /* 10c9c0fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9c0ff:;
  /* 10c9c0ff pop ebp */
  EBP = (pop32());
  /* 10c9c100 ret  */
  ESPCHK(0x10c9c0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c110 @ 0x10c9c110 (183 bytes, 62 insns) */
void f_10c9c110(void) {
  FTRACE(0x10c9c110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9c110 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9c111 mov ebp, esp */
  EBP = (ESP);
  /* 10c9c113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c116 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9c11d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c120 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9c123 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c126 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9c129 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9c12c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c12f jne 0x10c9c1ab */
  if (!C.zf) goto L_10c9c1ab;
  /* 10c9c131 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c134 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c9c137 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9c13d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9c13f je 0x10c9c1ab */
  if (C.zf) goto L_10c9c1ab;
  /* 10c9c141 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c144 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c147 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10c9c149 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c14c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9c14f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c153 jle 0x10c9c1ab */
  if ((C.zf||C.sf!=C.of)) goto L_10c9c1ab;
  /* 10c9c155 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c158 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c159 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c15c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c9c15f push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c160 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c163 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c9c166 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c167 call 0x10c9b080 */
  push32(0x10c9c16cu); f_10c9b080();
  /* 10c9c16c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c16f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c172 jne 0x10c9c195 */
  if (!C.zf) goto L_10c9c195;
  /* 10c9c174 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c177 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9c17a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9c180 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9c182 je 0x10c9c193 */
  if (C.zf) goto L_10c9c193;
  /* 10c9c184 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c187 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c9c18a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9c18d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c190 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10c9c193:;
  /* 10c9c193 jmp 0x10c9c1ab */
  goto L_10c9c1ab;
L_10c9c195:;
  /* 10c9c195 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c198 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c9c19b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9c19e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c1a1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10c9c1a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c9c1ab:;
  /* 10c9c1ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c1ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c1b1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c9c1b4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c9c1b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c1b9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c9c1c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c1c3 mov esp, ebp */
  ESP = (EBP);
  /* 10c9c1c5 pop ebp */
  EBP = (pop32());
  /* 10c9c1c6 ret  */
  ESPCHK(0x10c9c110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d0 @ 0x10c9c1d0 (15 bytes, 7 insns) */
void f_10c9c1d0(void) {
  FTRACE(0x10c9c1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9c1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9c1d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9c1d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9c1d5 call 0x10c9c1e0 */
  push32(0x10c9c1dau); f_10c9c1e0();
  /* 10c9c1da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c1dd pop ebp */
  EBP = (pop32());
  /* 10c9c1de ret  */
  ESPCHK(0x10c9c1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e0 @ 0x10c9c1e0 (319 bytes, 94 insns) */
void f_10c9c1e0(void) {
  FTRACE(0x10c9c1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9c1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9c1e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9c1e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c1e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9c1ed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9c1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c1f6 call 0x10c961e0 */
  push32(0x10c9c1fbu); f_10c961e0();
  /* 10c9c1fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c1fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c9c205 jmp 0x10c9c210 */
  goto L_10c9c210;
L_10c9c207:;
  /* 10c9c207 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c20a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c20d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c9c210:;
  /* 10c9c210 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c213 cmp ecx, dword ptr [0x10cbfae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbfae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c219 jge 0x10c9c303 */
  if ((C.sf==C.of)) goto L_10c9c303;
  /* 10c9c21f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c222 mov eax, dword ptr [0x10cbe790] */
  EAX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c227 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c22b je 0x10c9c2fe */
  if (C.zf) goto L_10c9c2fe;
  /* 10c9c231 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c234 mov edx, dword ptr [0x10cbe790] */
  EDX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c23a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c9c23d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c9c240 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9c246 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9c248 je 0x10c9c2fe */
  if (C.zf) goto L_10c9c2fe;
  /* 10c9c24e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c251 mov eax, dword ptr [0x10cbe790] */
  EAX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c256 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c9c259 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c25a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c25d push edx */
  push32((uint32_t)(EDX));
  /* 10c9c25e call 0x10c9b630 */
  push32(0x10c9c263u); f_10c9b630();
  /* 10c9c263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c266 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c269 mov ecx, dword ptr [0x10cbe790] */
  ECX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c26f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c9c272 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c9c275 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9c27a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c27c je 0x10c9c2e5 */
  if (C.zf) goto L_10c9c2e5;
  /* 10c9c27e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c282 jne 0x10c9c2a9 */
  if (!C.zf) goto L_10c9c2a9;
  /* 10c9c284 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c287 mov edx, dword ptr [0x10cbe790] */
  EDX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c28d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c9c290 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c291 call 0x10c9c0c0 */
  push32(0x10c9c296u); f_10c9c0c0();
  /* 10c9c296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c299 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c29c je 0x10c9c2a7 */
  if (C.zf) goto L_10c9c2a7;
  /* 10c9c29e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c2a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c2a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c9c2a7:;
  /* 10c9c2a7 jmp 0x10c9c2e5 */
  goto L_10c9c2e5;
L_10c9c2a9:;
  /* 10c9c2a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c2ad jne 0x10c9c2e5 */
  if (!C.zf) goto L_10c9c2e5;
  /* 10c9c2af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c2b2 mov eax, dword ptr [0x10cbe790] */
  EAX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c2b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c9c2ba mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9c2bd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9c2c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9c2c2 je 0x10c9c2e5 */
  if (C.zf) goto L_10c9c2e5;
  /* 10c9c2c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c2c7 mov ecx, dword ptr [0x10cbe790] */
  ECX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c2cd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c9c2d0 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c2d1 call 0x10c9c0c0 */
  push32(0x10c9c2d6u); f_10c9c0c0();
  /* 10c9c2d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c2d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c2dc jne 0x10c9c2e5 */
  if (!C.zf) goto L_10c9c2e5;
  /* 10c9c2de mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10c9c2e5:;
  /* 10c9c2e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c2e8 mov ecx, dword ptr [0x10cbe790] */
  ECX = (r32((uint32_t)(0x10cbe790)));
  /* 10c9c2ee mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c9c2f1 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c2f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c2f5 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c2f6 call 0x10c9b6a0 */
  push32(0x10c9c2fbu); f_10c9b6a0();
  /* 10c9c2fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9c2fe:;
  /* 10c9c2fe jmp 0x10c9c207 */
  goto L_10c9c207;
L_10c9c303:;
  /* 10c9c303 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c305 call 0x10c96280 */
  push32(0x10c9c30au); f_10c96280();
  /* 10c9c30a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c30d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c311 jne 0x10c9c318 */
  if (!C.zf) goto L_10c9c318;
  /* 10c9c313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c316 jmp 0x10c9c31b */
  goto L_10c9c31b;
L_10c9c318:;
  /* 10c9c318 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c9c31b:;
  /* 10c9c31b mov esp, ebp */
  ESP = (EBP);
  /* 10c9c31d pop ebp */
  EBP = (pop32());
  /* 10c9c31e ret  */
  ESPCHK(0x10c9c1e0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10c9c320 (15 bytes, 7 insns) */
void f_10c9c320(void) {
  FTRACE(0x10c9c320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9c320 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9c321 mov ebp, esp */
  EBP = (ESP);
  /* 10c9c323 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c325 call 0x10c91750 */
  push32(0x10c9c32au); f_10c91750();
  /* 10c9c32a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c32d pop ebp */
  EBP = (pop32());
  /* 10c9c32e ret  */
  ESPCHK(0x10c9c320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c330 @ 0x10c9c330 (1007 bytes, 269 insns) */
void f_10c9c330(void) {
  FTRACE(0x10c9c330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9c330 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9c331 mov ebp, esp */
  EBP = (ESP);
  /* 10c9c333 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c339 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c33d jl 0x10c9c345 */
  if ((C.sf!=C.of)) goto L_10c9c345;
  /* 10c9c33f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c343 jle 0x10c9c34c */
  if ((C.zf||C.sf!=C.of)) goto L_10c9c34c;
L_10c9c345:;
  /* 10c9c345 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9c347 jmp 0x10c9c71b */
  goto L_10c9c71b;
L_10c9c34c:;
  /* 10c9c34c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c9c34e call 0x10c961e0 */
  push32(0x10c9c353u); f_10c961e0();
  /* 10c9c353 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c356 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c9c35d mov eax, dword ptr [0x10cbe77c] */
  EAX = (r32((uint32_t)(0x10cbe77c)));
  /* 10c9c362 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c365 mov dword ptr [0x10cbe77c], eax */
  w32((uint32_t)(0x10cbe77c), (EAX));
L_10c9c36a:;
  /* 10c9c36a cmp dword ptr [0x10cbe78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c371 je 0x10c9c37d */
  if (C.zf) goto L_10c9c37d;
  /* 10c9c373 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9c375 call dword ptr [0x10cc02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02ec))), 0x10c9c37bu);
  /* 10c9c37b jmp 0x10c9c36a */
  goto L_10c9c36a;
L_10c9c37d:;
  /* 10c9c37d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c381 je 0x10c9c3c1 */
  if (C.zf) goto L_10c9c3c1;
  /* 10c9c383 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c387 je 0x10c9c3a1 */
  if (C.zf) goto L_10c9c3a1;
  /* 10c9c389 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9c38c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c38d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c390 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c391 call 0x10c9c720 */
  push32(0x10c9c396u); f_10c9c720();
  /* 10c9c396 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c399 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10c9c39f jmp 0x10c9c3b3 */
  goto L_10c9c3b3;
L_10c9c3a1:;
  /* 10c9c3a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c3a4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c3a7 mov ecx, dword ptr [eax + 0x10cbd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10cbd4dc)));
  /* 10c9c3ad mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10c9c3b3:;
  /* 10c9c3b3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10c9c3b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c9c3bc jmp 0x10c9c6fb */
  goto L_10c9c6fb;
L_10c9c3c1:;
  /* 10c9c3c1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10c9c3c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c9c3cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c3d3 je 0x10c9c6f3 */
  if (C.zf) goto L_10c9c6f3;
  /* 10c9c3d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9c3dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9c3df cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c3e2 jne 0x10c9c604 */
  if (!C.zf) goto L_10c9c604;
  /* 10c9c3e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9c3eb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c9c3ef cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c3f2 jne 0x10c9c604 */
  if (!C.zf) goto L_10c9c604;
  /* 10c9c3f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9c3fb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10c9c3ff cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c402 jne 0x10c9c604 */
  if (!C.zf) goto L_10c9c604;
  /* 10c9c408 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9c40b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10c9c411:;
  /* 10c9c411 push 0x10cb9f94 */
  push32((uint32_t)(0x10cb9f94u));
  /* 10c9c416 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c9c41c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c41d call 0x10c9e580 */
  push32(0x10c9c422u); f_10c9e580();
  /* 10c9c422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c425 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10c9c42b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c432 je 0x10c9c45d */
  if (C.zf) goto L_10c9c45d;
  /* 10c9c434 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c9c43a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c440 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10c9c446 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c44d je 0x10c9c45d */
  if (C.zf) goto L_10c9c45d;
  /* 10c9c44f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c9c455 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9c458 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c45b jne 0x10c9c483 */
  if (!C.zf) goto L_10c9c483;
L_10c9c45d:;
  /* 10c9c45d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c461 je 0x10c9c47c */
  if (C.zf) goto L_10c9c47c;
  /* 10c9c463 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c9c465 call 0x10c96280 */
  push32(0x10c9c46au); f_10c96280();
  /* 10c9c46a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c46d mov edx, dword ptr [0x10cbe77c] */
  EDX = (r32((uint32_t)(0x10cbe77c)));
  /* 10c9c473 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c476 mov dword ptr [0x10cbe77c], edx */
  w32((uint32_t)(0x10cbe77c), (EDX));
L_10c9c47c:;
  /* 10c9c47c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9c47e jmp 0x10c9c71b */
  goto L_10c9c71b;
L_10c9c483:;
  /* 10c9c483 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c9c48a jmp 0x10c9c495 */
  goto L_10c9c495;
L_10c9c48c:;
  /* 10c9c48c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9c48f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c492 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c9c495:;
  /* 10c9c495 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c499 jg 0x10c9c4e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9c4e3;
  /* 10c9c49b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c9c4a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c4a2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c9c4a8 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c4a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9c4ac imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c4af mov ecx, dword ptr [eax + 0x10cbd4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10cbd4d8)));
  /* 10c9c4b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c4b6 call 0x10c9e540 */
  push32(0x10c9c4bbu); f_10c9e540();
  /* 10c9c4bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c4be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c4c0 jne 0x10c9c4e1 */
  if (!C.zf) goto L_10c9c4e1;
  /* 10c9c4c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9c4c5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c4c8 mov eax, dword ptr [edx + 0x10cbd4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10cbd4d8)));
  /* 10c9c4ce push eax */
  push32((uint32_t)(EAX));
  /* 10c9c4cf call 0x10c95610 */
  push32(0x10c9c4d4u); f_10c95610();
  /* 10c9c4d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c4d7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c4dd jne 0x10c9c4e1 */
  if (!C.zf) goto L_10c9c4e1;
  /* 10c9c4df jmp 0x10c9c4e3 */
  goto L_10c9c4e3;
L_10c9c4e1:;
  /* 10c9c4e1 jmp 0x10c9c48c */
  goto L_10c9c48c;
L_10c9c4e3:;
  /* 10c9c4e3 push 0x10cb9f90 */
  push32((uint32_t)(0x10cb9f90u));
  /* 10c9c4e8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c9c4ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c4f1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10c9c4f7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c9c4fd push edx */
  push32((uint32_t)(EDX));
  /* 10c9c4fe call 0x10c9e500 */
  push32(0x10c9c503u); f_10c9e500();
  /* 10c9c503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c506 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10c9c50c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c513 jne 0x10c9c549 */
  if (!C.zf) goto L_10c9c549;
  /* 10c9c515 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c9c51b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9c51e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c521 je 0x10c9c549 */
  if (C.zf) goto L_10c9c549;
  /* 10c9c523 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c527 je 0x10c9c542 */
  if (C.zf) goto L_10c9c542;
  /* 10c9c529 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c9c52b call 0x10c96280 */
  push32(0x10c9c530u); f_10c96280();
  /* 10c9c530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c533 mov edx, dword ptr [0x10cbe77c] */
  EDX = (r32((uint32_t)(0x10cbe77c)));
  /* 10c9c539 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c53c mov dword ptr [0x10cbe77c], edx */
  w32((uint32_t)(0x10cbe77c), (EDX));
L_10c9c542:;
  /* 10c9c542 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9c544 jmp 0x10c9c71b */
  goto L_10c9c71b;
L_10c9c549:;
  /* 10c9c549 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c54d jg 0x10c9c59a */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9c59a;
  /* 10c9c54f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c9c555 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c556 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c9c55c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c55d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10c9c563 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c564 call 0x10c96000 */
  push32(0x10c9c569u); f_10c96000();
  /* 10c9c569 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c56c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c9c572 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10c9c57a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10c9c580 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c581 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9c584 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c585 call 0x10c9c720 */
  push32(0x10c9c58au); f_10c9c720();
  /* 10c9c58a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c58d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c58f je 0x10c9c59a */
  if (C.zf) goto L_10c9c59a;
  /* 10c9c591 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c594 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c597 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c9c59a:;
  /* 10c9c59a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c9c5a0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c5a6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10c9c5ac mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c9c5b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c9c5b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c5b7 je 0x10c9c5c8 */
  if (C.zf) goto L_10c9c5c8;
  /* 10c9c5b9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c9c5bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c5c2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10c9c5c8:;
  /* 10c9c5c8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c9c5ce movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c9c5d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c5d3 jne 0x10c9c411 */
  if (!C.zf) goto L_10c9c411;
  /* 10c9c5d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c5dd je 0x10c9c5ec */
  if (C.zf) goto L_10c9c5ec;
  /* 10c9c5df call 0x10c9c8c0 */
  push32(0x10c9c5e4u); f_10c9c8c0();
  /* 10c9c5e4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10c9c5ea jmp 0x10c9c5f6 */
  goto L_10c9c5f6;
L_10c9c5ec:;
  /* 10c9c5ec mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10c9c5f6:;
  /* 10c9c5f6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10c9c5fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9c5ff jmp 0x10c9c6f1 */
  goto L_10c9c6f1;
L_10c9c604:;
  /* 10c9c604 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c607 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c608 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9c60a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9c60c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10c9c612 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c613 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9c616 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c617 call 0x10c9c9c0 */
  push32(0x10c9c61cu); f_10c9c9c0();
  /* 10c9c61c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c61f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9c622 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c626 je 0x10c9c6f1 */
  if (C.zf) goto L_10c9c6f1;
  /* 10c9c62c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9c633 jmp 0x10c9c63e */
  goto L_10c9c63e;
L_10c9c635:;
  /* 10c9c635 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9c638 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c63b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c9c63e:;
  /* 10c9c63e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c642 jg 0x10c9c6a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9c6a0;
  /* 10c9c644 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c648 je 0x10c9c69e */
  if (C.zf) goto L_10c9c69e;
  /* 10c9c64a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9c64d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c650 mov ecx, dword ptr [eax + 0x10cbd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10cbd4dc)));
  /* 10c9c656 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c657 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10c9c65d push edx */
  push32((uint32_t)(EDX));
  /* 10c9c65e call 0x10c9e470 */
  push32(0x10c9c663u); f_10c9e470();
  /* 10c9c663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c668 je 0x10c9c695 */
  if (C.zf) goto L_10c9c695;
  /* 10c9c66a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10c9c670 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c671 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9c674 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c675 call 0x10c9c720 */
  push32(0x10c9c67au); f_10c9c720();
  /* 10c9c67a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c67d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c67f je 0x10c9c68c */
  if (C.zf) goto L_10c9c68c;
  /* 10c9c681 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c684 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c687 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c9c68a jmp 0x10c9c693 */
  goto L_10c9c693;
L_10c9c68c:;
  /* 10c9c68c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10c9c693:;
  /* 10c9c693 jmp 0x10c9c69e */
  goto L_10c9c69e;
L_10c9c695:;
  /* 10c9c695 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c698 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c69b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c9c69e:;
  /* 10c9c69e jmp 0x10c9c635 */
  goto L_10c9c635;
L_10c9c6a0:;
  /* 10c9c6a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c6a4 je 0x10c9c6cb */
  if (C.zf) goto L_10c9c6cb;
  /* 10c9c6a6 call 0x10c9c8c0 */
  push32(0x10c9c6abu); f_10c9c8c0();
  /* 10c9c6ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9c6ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c6b0 mov ecx, dword ptr [0x10cbd4dc] */
  ECX = (r32((uint32_t)(0x10cbd4dc)));
  /* 10c9c6b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c6b7 call 0x10c93270 */
  push32(0x10c9c6bcu); f_10c93270();
  /* 10c9c6bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c6bf mov dword ptr [0x10cbd4dc], 0 */
  w32((uint32_t)(0x10cbd4dc), (0x0u));
  /* 10c9c6c9 jmp 0x10c9c6f1 */
  goto L_10c9c6f1;
L_10c9c6cb:;
  /* 10c9c6cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c6cf je 0x10c9c6de */
  if (C.zf) goto L_10c9c6de;
  /* 10c9c6d1 call 0x10c9c8c0 */
  push32(0x10c9c6d6u); f_10c9c8c0();
  /* 10c9c6d6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10c9c6dc jmp 0x10c9c6e8 */
  goto L_10c9c6e8;
L_10c9c6de:;
  /* 10c9c6de mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10c9c6e8:;
  /* 10c9c6e8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10c9c6ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c9c6f1:;
  /* 10c9c6f1 jmp 0x10c9c6fb */
  goto L_10c9c6fb;
L_10c9c6f3:;
  /* 10c9c6f3 call 0x10c9c8c0 */
  push32(0x10c9c6f8u); f_10c9c8c0();
  /* 10c9c6f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c9c6fb:;
  /* 10c9c6fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c6ff je 0x10c9c718 */
  if (C.zf) goto L_10c9c718;
  /* 10c9c701 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c9c703 call 0x10c96280 */
  push32(0x10c9c708u); f_10c96280();
  /* 10c9c708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c70b mov eax, dword ptr [0x10cbe77c] */
  EAX = (r32((uint32_t)(0x10cbe77c)));
  /* 10c9c710 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c713 mov dword ptr [0x10cbe77c], eax */
  w32((uint32_t)(0x10cbe77c), (EAX));
L_10c9c718:;
  /* 10c9c718 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c9c71b:;
  /* 10c9c71b mov esp, ebp */
  ESP = (EBP);
  /* 10c9c71d pop ebp */
  EBP = (pop32());
  /* 10c9c71e ret  */
  ESPCHK(0x10c9c330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c720 @ 0x10c9c720 (403 bytes, 117 insns) */
void f_10c9c720(void) {
  FTRACE(0x10c9c720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9c720 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9c721 mov ebp, esp */
  EBP = (ESP);
  /* 10c9c723 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c729 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c72c push eax */
  push32((uint32_t)(EAX));
  /* 10c9c72d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10c9c733 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c734 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10c9c73a push edx */
  push32((uint32_t)(EDX));
  /* 10c9c73b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10c9c741 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c742 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9c745 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c746 call 0x10c9c9c0 */
  push32(0x10c9c74bu); f_10c9c9c0();
  /* 10c9c74b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c74e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c750 jne 0x10c9c759 */
  if (!C.zf) goto L_10c9c759;
  /* 10c9c752 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9c754 jmp 0x10c9c8af */
  goto L_10c9c8af;
L_10c9c759:;
  /* 10c9c759 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10c9c75e push 0x10cb9f98 */
  push32((uint32_t)(0x10cb9f98u));
  /* 10c9c763 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c765 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10c9c76b push edx */
  push32((uint32_t)(EDX));
  /* 10c9c76c call 0x10c95610 */
  push32(0x10c9c771u); f_10c95610();
  /* 10c9c771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c774 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c777 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c778 call 0x10c927e0 */
  push32(0x10c9c77du); f_10c927e0();
  /* 10c9c77d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c780 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9c783 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c787 jne 0x10c9c790 */
  if (!C.zf) goto L_10c9c790;
  /* 10c9c789 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9c78b jmp 0x10c9c8af */
  goto L_10c9c8af;
L_10c9c790:;
  /* 10c9c790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c793 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c796 mov ecx, dword ptr [eax + 0x10cbd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10cbd4dc)));
  /* 10c9c79c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9c79f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c7a2 mov eax, dword ptr [edx*4 + 0x10cbe5f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cbe5f8)));
  /* 10c9c7a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9c7ac push 6 */
  push32((uint32_t)(0x6u));
  /* 10c9c7ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c7b1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c7b4 add ecx, 0x10cbe648 */
  { uint32_t _a=(ECX),_b=(0x10cbe648u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c7ba push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c7bb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10c9c7be push edx */
  push32((uint32_t)(EDX));
  /* 10c9c7bf call 0x10c990c0 */
  push32(0x10c9c7c4u); f_10c990c0();
  /* 10c9c7c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c7c7 mov eax, dword ptr [0x10cbe610] */
  EAX = (r32((uint32_t)(0x10cbe610)));
  /* 10c9c7cc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c9c7cf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10c9c7d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c7d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c7d9 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c7da call 0x10c95790 */
  push32(0x10c9c7dfu); f_10c95790();
  /* 10c9c7df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c7e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c7e5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c7e8 mov dword ptr [ecx + 0x10cbd4dc], eax */
  w32((uint32_t)(ECX + 0x10cbd4dc), (EAX));
  /* 10c9c7ee mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10c9c7f4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9c7fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c7fd mov dword ptr [eax*4 + 0x10cbe5f8], edx */
  w32((uint32_t)(EAX*4 + 0x10cbe5f8), (EDX));
  /* 10c9c804 push 6 */
  push32((uint32_t)(0x6u));
  /* 10c9c806 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10c9c80c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c80d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c810 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c813 add edx, 0x10cbe648 */
  { uint32_t _a=(EDX),_b=(0x10cbe648u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c819 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c81a call 0x10c990c0 */
  push32(0x10c9c81fu); f_10c990c0();
  /* 10c9c81f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c822 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c826 jne 0x10c9c833 */
  if (!C.zf) goto L_10c9c833;
  /* 10c9c828 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c9c82e mov dword ptr [0x10cbe610], eax */
  w32((uint32_t)(0x10cbe610), (EAX));
L_10c9c833:;
  /* 10c9c833 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c837 jne 0x10c9c845 */
  if (!C.zf) goto L_10c9c845;
  /* 10c9c839 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c9c83f mov dword ptr [0x10cbe614], ecx */
  w32((uint32_t)(0x10cbe614), (ECX));
L_10c9c845:;
  /* 10c9c845 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c848 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c84b call dword ptr [edx + 0x10cbd4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10cbd4e0))), 0x10c9c851u);
  /* 10c9c851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c853 je 0x10c9c88c */
  if (C.zf) goto L_10c9c88c;
  /* 10c9c855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c858 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c85b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c85e mov dword ptr [eax + 0x10cbd4dc], ecx */
  w32((uint32_t)(EAX + 0x10cbd4dc), (ECX));
  /* 10c9c864 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c866 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9c869 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c86a call 0x10c93270 */
  push32(0x10c9c86fu); f_10c93270();
  /* 10c9c86f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c872 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c875 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c878 mov dword ptr [eax*4 + 0x10cbe5f8], ecx */
  w32((uint32_t)(EAX*4 + 0x10cbe5f8), (ECX));
  /* 10c9c87f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9c882 mov dword ptr [0x10cbe610], edx */
  w32((uint32_t)(0x10cbe610), (EDX));
  /* 10c9c888 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9c88a jmp 0x10c9c8af */
  goto L_10c9c8af;
L_10c9c88c:;
  /* 10c9c88c cmp dword ptr [ebp - 0xc], 0x10cbd3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10cbd3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c893 je 0x10c9c8a3 */
  if (C.zf) goto L_10c9c8a3;
  /* 10c9c895 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c897 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9c89a push eax */
  push32((uint32_t)(EAX));
  /* 10c9c89b call 0x10c93270 */
  push32(0x10c9c8a0u); f_10c93270();
  /* 10c9c8a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9c8a3:;
  /* 10c9c8a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c8a6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c8a9 mov eax, dword ptr [ecx + 0x10cbd4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10cbd4dc)));
L_10c9c8af:;
  /* 10c9c8af mov esp, ebp */
  ESP = (EBP);
  /* 10c9c8b1 pop ebp */
  EBP = (pop32());
  /* 10c9c8b2 ret  */
  ESPCHK(0x10c9c720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8c0 @ 0x10c9c8c0 (256 bytes, 72 insns) */
void f_10c9c8c0(void) {
  FTRACE(0x10c9c8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9c8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9c8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9c8c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c8c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c9c8cd cmp dword ptr [0x10cbd4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbd4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c8d4 jne 0x10c9c8f4 */
  if (!C.zf) goto L_10c9c8f4;
  /* 10c9c8d6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10c9c8db push 0x10cb9f98 */
  push32((uint32_t)(0x10cb9f98u));
  /* 10c9c8e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c8e2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10c9c8e7 call 0x10c927e0 */
  push32(0x10c9c8ecu); f_10c927e0();
  /* 10c9c8ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c8ef mov dword ptr [0x10cbd4dc], eax */
  w32((uint32_t)(0x10cbd4dc), (EAX));
L_10c9c8f4:;
  /* 10c9c8f4 mov eax, dword ptr [0x10cbd4dc] */
  EAX = (r32((uint32_t)(0x10cbd4dc)));
  /* 10c9c8f9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c9c8fc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c9c903 jmp 0x10c9c90e */
  goto L_10c9c90e;
L_10c9c905:;
  /* 10c9c905 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c908 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c90b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c9c90e:;
  /* 10c9c90e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c911 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c914 mov eax, dword ptr [edx + 0x10cbd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10cbd4dc)));
  /* 10c9c91a push eax */
  push32((uint32_t)(EAX));
  /* 10c9c91b push 0x10cb9fa4 */
  push32((uint32_t)(0x10cb9fa4u));
  /* 10c9c920 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c923 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c926 mov edx, dword ptr [ecx + 0x10cbd4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10cbd4d8)));
  /* 10c9c92c push edx */
  push32((uint32_t)(EDX));
  /* 10c9c92d push 3 */
  push32((uint32_t)(0x3u));
  /* 10c9c92f mov eax, dword ptr [0x10cbd4dc] */
  EAX = (r32((uint32_t)(0x10cbd4dc)));
  /* 10c9c934 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c935 call 0x10c9cb60 */
  push32(0x10c9c93au); f_10c9cb60();
  /* 10c9c93a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c93d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c941 jge 0x10c9c989 */
  if ((C.sf==C.of)) goto L_10c9c989;
  /* 10c9c943 push 0x10cb9f90 */
  push32((uint32_t)(0x10cb9f90u));
  /* 10c9c948 mov ecx, dword ptr [0x10cbd4dc] */
  ECX = (r32((uint32_t)(0x10cbd4dc)));
  /* 10c9c94e push ecx */
  push32((uint32_t)(ECX));
  /* 10c9c94f call 0x10c957a0 */
  push32(0x10c9c954u); f_10c957a0();
  /* 10c9c954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c957 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c95a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c95d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c960 mov eax, dword ptr [edx + 0x10cbd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10cbd4dc)));
  /* 10c9c966 push eax */
  push32((uint32_t)(EAX));
  /* 10c9c967 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9c96a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9c96d mov edx, dword ptr [ecx + 0x10cbd4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10cbd4dc)));
  /* 10c9c973 push edx */
  push32((uint32_t)(EDX));
  /* 10c9c974 call 0x10c9e470 */
  push32(0x10c9c979u); f_10c9e470();
  /* 10c9c979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c97c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c97e je 0x10c9c987 */
  if (C.zf) goto L_10c9c987;
  /* 10c9c980 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c9c987:;
  /* 10c9c987 jmp 0x10c9c9b7 */
  goto L_10c9c9b7;
L_10c9c989:;
  /* 10c9c989 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c98d jne 0x10c9c996 */
  if (!C.zf) goto L_10c9c996;
  /* 10c9c98f mov eax, dword ptr [0x10cbd4dc] */
  EAX = (r32((uint32_t)(0x10cbd4dc)));
  /* 10c9c994 jmp 0x10c9c9bc */
  goto L_10c9c9bc;
L_10c9c996:;
  /* 10c9c996 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9c998 mov eax, dword ptr [0x10cbd4dc] */
  EAX = (r32((uint32_t)(0x10cbd4dc)));
  /* 10c9c99d push eax */
  push32((uint32_t)(EAX));
  /* 10c9c99e call 0x10c93270 */
  push32(0x10c9c9a3u); f_10c93270();
  /* 10c9c9a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9c9a6 mov dword ptr [0x10cbd4dc], 0 */
  w32((uint32_t)(0x10cbd4dc), (0x0u));
  /* 10c9c9b0 mov eax, dword ptr [0x10cbd4f4] */
  EAX = (r32((uint32_t)(0x10cbd4f4)));
  /* 10c9c9b5 jmp 0x10c9c9bc */
  goto L_10c9c9bc;
L_10c9c9b7:;
  /* 10c9c9b7 jmp 0x10c9c905 */
  goto L_10c9c905;
L_10c9c9bc:;
  /* 10c9c9bc mov esp, ebp */
  ESP = (EBP);
  /* 10c9c9be pop ebp */
  EBP = (pop32());
  /* 10c9c9bf ret  */
  ESPCHK(0x10c9c8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x10c9c9c0 (388 bytes, 115 insns) */
void f_10c9c9c0(void) {
  FTRACE(0x10c9c9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9c9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9c9c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9c9c3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9c9c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c9cd jne 0x10c9c9d6 */
  if (!C.zf) goto L_10c9c9d6;
  /* 10c9c9cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9c9d1 jmp 0x10c9cb40 */
  goto L_10c9cb40;
L_10c9c9d6:;
  /* 10c9c9d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c9d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9c9dc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c9df jne 0x10c9ca30 */
  if (!C.zf) goto L_10c9ca30;
  /* 10c9c9e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9c9e4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c9c9e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9c9ea jne 0x10c9ca30 */
  if (!C.zf) goto L_10c9ca30;
  /* 10c9c9ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9c9ef mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10c9c9f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9c9f5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10c9c9f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9c9fd je 0x10c9ca19 */
  if (C.zf) goto L_10c9ca19;
  /* 10c9c9ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ca02 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10c9ca07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ca0a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10c9ca10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9ca13 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10c9ca19:;
  /* 10c9ca19 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ca1d je 0x10c9ca28 */
  if (C.zf) goto L_10c9ca28;
  /* 10c9ca1f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9ca22 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10c9ca28:;
  /* 10c9ca28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ca2b jmp 0x10c9cb40 */
  goto L_10c9cb40;
L_10c9ca30:;
  /* 10c9ca30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ca33 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ca34 push 0x10cbd450 */
  push32((uint32_t)(0x10cbd450u));
  /* 10c9ca39 call 0x10c9e470 */
  push32(0x10c9ca3eu); f_10c9e470();
  /* 10c9ca3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ca41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ca43 je 0x10c9caf8 */
  if (C.zf) goto L_10c9caf8;
  /* 10c9ca49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ca4c push edx */
  push32((uint32_t)(EDX));
  /* 10c9ca4d push 0x10cbd3cc */
  push32((uint32_t)(0x10cbd3ccu));
  /* 10c9ca52 call 0x10c9e470 */
  push32(0x10c9ca57u); f_10c9e470();
  /* 10c9ca57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ca5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ca5c je 0x10c9caf8 */
  if (C.zf) goto L_10c9caf8;
  /* 10c9ca62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ca65 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ca66 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10c9ca6c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ca6d call 0x10c9cbb0 */
  push32(0x10c9ca72u); f_10c9cbb0();
  /* 10c9ca72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ca75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ca77 je 0x10c9ca80 */
  if (C.zf) goto L_10c9ca80;
  /* 10c9ca79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ca7b jmp 0x10c9cb40 */
  goto L_10c9cb40;
L_10c9ca80:;
  /* 10c9ca80 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10c9ca86 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ca87 push 0x10cbe620 */
  push32((uint32_t)(0x10cbe620u));
  /* 10c9ca8c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10c9ca92 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ca93 call 0x10c9e5c0 */
  push32(0x10c9ca98u); f_10c9e5c0();
  /* 10c9ca98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ca9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ca9d jne 0x10c9caa6 */
  if (!C.zf) goto L_10c9caa6;
  /* 10c9ca9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9caa1 jmp 0x10c9cb40 */
  goto L_10c9cb40;
L_10c9caa6:;
  /* 10c9caa6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9caa8 mov cx, word ptr [0x10cbe624] */
  CX = (r16((uint32_t)(0x10cbe624)));
  /* 10c9caaf mov dword ptr [0x10cbe628], ecx */
  w32((uint32_t)(0x10cbe628), (ECX));
  /* 10c9cab5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10c9cabb push edx */
  push32((uint32_t)(EDX));
  /* 10c9cabc push 0x10cbd450 */
  push32((uint32_t)(0x10cbd450u));
  /* 10c9cac1 call 0x10c9cd10 */
  push32(0x10c9cac6u); f_10c9cd10();
  /* 10c9cac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cac9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cacc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9cacf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9cad1 je 0x10c9cae6 */
  if (C.zf) goto L_10c9cae6;
  /* 10c9cad3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cad6 push edx */
  push32((uint32_t)(EDX));
  /* 10c9cad7 push 0x10cbd3cc */
  push32((uint32_t)(0x10cbd3ccu));
  /* 10c9cadc call 0x10c95790 */
  push32(0x10c9cae1u); f_10c95790();
  /* 10c9cae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cae4 jmp 0x10c9caf8 */
  goto L_10c9caf8;
L_10c9cae6:;
  /* 10c9cae6 push 0x10cbd450 */
  push32((uint32_t)(0x10cbd450u));
  /* 10c9caeb push 0x10cbd3cc */
  push32((uint32_t)(0x10cbd3ccu));
  /* 10c9caf0 call 0x10c95790 */
  push32(0x10c9caf5u); f_10c95790();
  /* 10c9caf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9caf8:;
  /* 10c9caf8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cafc je 0x10c9cb11 */
  if (C.zf) goto L_10c9cb11;
  /* 10c9cafe push 6 */
  push32((uint32_t)(0x6u));
  /* 10c9cb00 push 0x10cbe620 */
  push32((uint32_t)(0x10cbe620u));
  /* 10c9cb05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9cb08 push eax */
  push32((uint32_t)(EAX));
  /* 10c9cb09 call 0x10c990c0 */
  push32(0x10c9cb0eu); f_10c990c0();
  /* 10c9cb0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9cb11:;
  /* 10c9cb11 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cb15 je 0x10c9cb2a */
  if (C.zf) goto L_10c9cb2a;
  /* 10c9cb17 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c9cb19 push 0x10cbe628 */
  push32((uint32_t)(0x10cbe628u));
  /* 10c9cb1e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9cb21 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cb22 call 0x10c990c0 */
  push32(0x10c9cb27u); f_10c990c0();
  /* 10c9cb27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9cb2a:;
  /* 10c9cb2a push 0x10cbd450 */
  push32((uint32_t)(0x10cbd450u));
  /* 10c9cb2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cb32 push edx */
  push32((uint32_t)(EDX));
  /* 10c9cb33 call 0x10c95790 */
  push32(0x10c9cb38u); f_10c95790();
  /* 10c9cb38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cb3b mov eax, 0x10cbd450 */
  EAX = (0x10cbd450u);
L_10c9cb40:;
  /* 10c9cb40 mov esp, ebp */
  ESP = (EBP);
  /* 10c9cb42 pop ebp */
  EBP = (pop32());
  /* 10c9cb43 ret  */
  ESPCHK(0x10c9c9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb50 @ 0x10c9cb50 (7 bytes, 5 insns) */
void f_10c9cb50(void) {
  FTRACE(0x10c9cb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9cb50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9cb51 mov ebp, esp */
  EBP = (ESP);
  /* 10c9cb53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9cb55 pop ebp */
  EBP = (pop32());
  /* 10c9cb56 ret  */
  ESPCHK(0x10c9cb50u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10c9cb60 (79 bytes, 28 insns) */
void f_10c9cb60(void) {
  FTRACE(0x10c9cb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9cb60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9cb61 mov ebp, esp */
  EBP = (ESP);
  /* 10c9cb63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9cb66 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c9cb69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9cb6c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9cb73 jmp 0x10c9cb7e */
  goto L_10c9cb7e;
L_10c9cb75:;
  /* 10c9cb75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9cb78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cb7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c9cb7e:;
  /* 10c9cb7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9cb81 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cb84 jge 0x10c9cba4 */
  if ((C.sf==C.of)) goto L_10c9cba4;
  /* 10c9cb86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9cb89 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cb8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9cb8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9cb92 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c9cb95 push edx */
  push32((uint32_t)(EDX));
  /* 10c9cb96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cb99 push eax */
  push32((uint32_t)(EAX));
  /* 10c9cb9a call 0x10c957a0 */
  push32(0x10c9cb9fu); f_10c957a0();
  /* 10c9cb9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cba2 jmp 0x10c9cb75 */
  goto L_10c9cb75;
L_10c9cba4:;
  /* 10c9cba4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9cbab mov esp, ebp */
  ESP = (EBP);
  /* 10c9cbad pop ebp */
  EBP = (pop32());
  /* 10c9cbae ret  */
  ESPCHK(0x10c9cb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbb0 @ 0x10c9cbb0 (349 bytes, 122 insns) */
void f_10c9cbb0(void) {
  FTRACE(0x10c9cbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9cbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9cbb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9cbb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9cbb6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10c9cbbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9cbbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cbc0 push eax */
  push32((uint32_t)(EAX));
  /* 10c9cbc1 call 0x10c96550 */
  push32(0x10c9cbc6u); f_10c96550();
  /* 10c9cbc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cbc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cbcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9cbcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9cbd1 jne 0x10c9cbda */
  if (!C.zf) goto L_10c9cbda;
  /* 10c9cbd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9cbd5 jmp 0x10c9cd09 */
  goto L_10c9cd09;
L_10c9cbda:;
  /* 10c9cbda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cbdd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9cbe0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cbe3 jne 0x10c9cc10 */
  if (!C.zf) goto L_10c9cc10;
  /* 10c9cbe5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cbe8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c9cbec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9cbee je 0x10c9cc10 */
  if (C.zf) goto L_10c9cc10;
  /* 10c9cbf0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cbf3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cbf6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cbf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cbfa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cc00 push edx */
  push32((uint32_t)(EDX));
  /* 10c9cc01 call 0x10c95790 */
  push32(0x10c9cc06u); f_10c95790();
  /* 10c9cc06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cc09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9cc0b jmp 0x10c9cd09 */
  goto L_10c9cd09;
L_10c9cc10:;
  /* 10c9cc10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9cc17 jmp 0x10c9cc22 */
  goto L_10c9cc22;
L_10c9cc19:;
  /* 10c9cc19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9cc1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cc1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9cc22:;
  /* 10c9cc22 push 0x10cb9fa8 */
  push32((uint32_t)(0x10cb9fa8u));
  /* 10c9cc27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cc2a push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cc2b call 0x10c9e500 */
  push32(0x10c9cc30u); f_10c9e500();
  /* 10c9cc30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cc33 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c9cc36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cc3a jne 0x10c9cc44 */
  if (!C.zf) goto L_10c9cc44;
  /* 10c9cc3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9cc3f jmp 0x10c9cd09 */
  goto L_10c9cd09;
L_10c9cc44:;
  /* 10c9cc44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cc47 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cc4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c9cc4c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10c9cc4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cc53 jne 0x10c9cc7a */
  if (!C.zf) goto L_10c9cc7a;
  /* 10c9cc55 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cc59 jge 0x10c9cc7a */
  if ((C.sf==C.of)) goto L_10c9cc7a;
  /* 10c9cc5b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9cc5f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cc62 je 0x10c9cc7a */
  if (C.zf) goto L_10c9cc7a;
  /* 10c9cc64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9cc67 push edx */
  push32((uint32_t)(EDX));
  /* 10c9cc68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cc6b push eax */
  push32((uint32_t)(EAX));
  /* 10c9cc6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cc6f push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cc70 call 0x10c96000 */
  push32(0x10c9cc75u); f_10c96000();
  /* 10c9cc75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cc78 jmp 0x10c9cce0 */
  goto L_10c9cce0;
L_10c9cc7a:;
  /* 10c9cc7a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cc7e jne 0x10c9cca8 */
  if (!C.zf) goto L_10c9cca8;
  /* 10c9cc80 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cc84 jge 0x10c9cca8 */
  if ((C.sf==C.of)) goto L_10c9cca8;
  /* 10c9cc86 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9cc8a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cc8d je 0x10c9cca8 */
  if (C.zf) goto L_10c9cca8;
  /* 10c9cc8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9cc92 push eax */
  push32((uint32_t)(EAX));
  /* 10c9cc93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cc96 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cc97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cc9a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cc9d push edx */
  push32((uint32_t)(EDX));
  /* 10c9cc9e call 0x10c96000 */
  push32(0x10c9cca3u); f_10c96000();
  /* 10c9cca3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cca6 jmp 0x10c9cce0 */
  goto L_10c9cce0;
L_10c9cca8:;
  /* 10c9cca8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ccac jne 0x10c9ccdb */
  if (!C.zf) goto L_10c9ccdb;
  /* 10c9ccae movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9ccb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ccb4 je 0x10c9ccbf */
  if (C.zf) goto L_10c9ccbf;
  /* 10c9ccb6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9ccba cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ccbd jne 0x10c9ccdb */
  if (!C.zf) goto L_10c9ccdb;
L_10c9ccbf:;
  /* 10c9ccbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9ccc2 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ccc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ccc6 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ccc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ccca add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ccd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ccd1 call 0x10c96000 */
  push32(0x10c9ccd6u); f_10c96000();
  /* 10c9ccd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ccd9 jmp 0x10c9cce0 */
  goto L_10c9cce0;
L_10c9ccdb:;
  /* 10c9ccdb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ccde jmp 0x10c9cd09 */
  goto L_10c9cd09;
L_10c9cce0:;
  /* 10c9cce0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9cce4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cce7 jne 0x10c9cceb */
  if (!C.zf) goto L_10c9cceb;
  /* 10c9cce9 jmp 0x10c9cd07 */
  goto L_10c9cd07;
L_10c9cceb:;
  /* 10c9cceb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9ccef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ccf1 jne 0x10c9ccf5 */
  if (!C.zf) goto L_10c9ccf5;
  /* 10c9ccf3 jmp 0x10c9cd07 */
  goto L_10c9cd07;
L_10c9ccf5:;
  /* 10c9ccf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9ccf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9ccfb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10c9ccff mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c9cd02 jmp 0x10c9cc19 */
  goto L_10c9cc19;
L_10c9cd07:;
  /* 10c9cd07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9cd09:;
  /* 10c9cd09 mov esp, ebp */
  ESP = (EBP);
  /* 10c9cd0b pop ebp */
  EBP = (pop32());
  /* 10c9cd0c ret  */
  ESPCHK(0x10c9cbb0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10c9cd10 (101 bytes, 36 insns) */
void f_10c9cd10(void) {
  FTRACE(0x10c9cd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9cd10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9cd11 mov ebp, esp */
  EBP = (ESP);
  /* 10c9cd13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cd16 push eax */
  push32((uint32_t)(EAX));
  /* 10c9cd17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cd1a push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cd1b call 0x10c95790 */
  push32(0x10c9cd20u); f_10c95790();
  /* 10c9cd20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cd23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cd26 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10c9cd2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9cd2c je 0x10c9cd48 */
  if (C.zf) goto L_10c9cd48;
  /* 10c9cd2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cd31 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cd34 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cd35 push 0x10cb9fb0 */
  push32((uint32_t)(0x10cb9fb0u));
  /* 10c9cd3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9cd3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cd3f push edx */
  push32((uint32_t)(EDX));
  /* 10c9cd40 call 0x10c9cb60 */
  push32(0x10c9cd45u); f_10c9cb60();
  /* 10c9cd45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9cd48:;
  /* 10c9cd48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cd4b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10c9cd52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9cd54 je 0x10c9cd73 */
  if (C.zf) goto L_10c9cd73;
  /* 10c9cd56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9cd59 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cd5f push edx */
  push32((uint32_t)(EDX));
  /* 10c9cd60 push 0x10cb9fac */
  push32((uint32_t)(0x10cb9facu));
  /* 10c9cd65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9cd67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cd6a push eax */
  push32((uint32_t)(EAX));
  /* 10c9cd6b call 0x10c9cb60 */
  push32(0x10c9cd70u); f_10c9cb60();
  /* 10c9cd70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9cd73:;
  /* 10c9cd73 pop ebp */
  EBP = (pop32());
  /* 10c9cd74 ret  */
  ESPCHK(0x10c9cd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd80 @ 0x10c9cd80 (130 bytes, 50 insns) */
void f_10c9cd80(void) {
  FTRACE(0x10c9cd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9cd80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9cd81 mov ebp, esp */
  EBP = (ESP);
  /* 10c9cd83 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cd84 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9cd85 push esi */
  push32((uint32_t)(ESI));
  /* 10c9cd86 push edi */
  push32((uint32_t)(EDI));
  /* 10c9cd87 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c9cd8e:;
  /* 10c9cd8e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cd92 jne 0x10c9cdb2 */
  if (!C.zf) goto L_10c9cdb2;
  /* 10c9cd94 push 0x10cb9fc0 */
  push32((uint32_t)(0x10cb9fc0u));
  /* 10c9cd99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9cd9b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10c9cd9d push 0x10cb9fb4 */
  push32((uint32_t)(0x10cb9fb4u));
  /* 10c9cda2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9cda4 call 0x10c918a0 */
  push32(0x10c9cda9u); f_10c918a0();
  /* 10c9cda9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cdac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cdaf jne 0x10c9cdb2 */
  if (!C.zf) goto L_10c9cdb2;
  /* 10c9cdb1 int3  */
  x86_unimpl("int3 @ 0x10c9cdb1");
L_10c9cdb2:;
  /* 10c9cdb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9cdb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9cdb6 jne 0x10c9cd8e */
  if (!C.zf) goto L_10c9cd8e;
  /* 10c9cdb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cdbb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9cdbe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9cdc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9cdc3 je 0x10c9cdd1 */
  if (C.zf) goto L_10c9cdd1;
  /* 10c9cdc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cdc8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10c9cdcf jmp 0x10c9cdf8 */
  goto L_10c9cdf8;
L_10c9cdd1:;
  /* 10c9cdd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cdd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cdd5 call 0x10c9b5f0 */
  push32(0x10c9cddau); f_10c9b5f0();
  /* 10c9cdda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cddd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cde0 push edx */
  push32((uint32_t)(EDX));
  /* 10c9cde1 call 0x10c9ce10 */
  push32(0x10c9cde6u); f_10c9ce10();
  /* 10c9cde6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9cdec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cdef push eax */
  push32((uint32_t)(EAX));
  /* 10c9cdf0 call 0x10c9b660 */
  push32(0x10c9cdf5u); f_10c9b660();
  /* 10c9cdf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9cdf8:;
  /* 10c9cdf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9cdfb pop edi */
  EDI = (pop32());
  /* 10c9cdfc pop esi */
  ESI = (pop32());
  /* 10c9cdfd pop ebx */
  EBX = (pop32());
  /* 10c9cdfe mov esp, ebp */
  ESP = (EBP);
  /* 10c9ce00 pop ebp */
  EBP = (pop32());
  /* 10c9ce01 ret  */
  ESPCHK(0x10c9cd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce10 @ 0x10c9ce10 (190 bytes, 67 insns) */
void f_10c9ce10(void) {
  FTRACE(0x10c9ce10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9ce10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9ce11 mov ebp, esp */
  EBP = (ESP);
  /* 10c9ce13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9ce16 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9ce17 push esi */
  push32((uint32_t)(ESI));
  /* 10c9ce18 push edi */
  push32((uint32_t)(EDI));
  /* 10c9ce19 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c9ce20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ce23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c9ce26:;
  /* 10c9ce26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ce2a jne 0x10c9ce4a */
  if (!C.zf) goto L_10c9ce4a;
  /* 10c9ce2c push 0x10cb9e64 */
  push32((uint32_t)(0x10cb9e64u));
  /* 10c9ce31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ce33 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10c9ce35 push 0x10cb9fb4 */
  push32((uint32_t)(0x10cb9fb4u));
  /* 10c9ce3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9ce3c call 0x10c918a0 */
  push32(0x10c9ce41u); f_10c918a0();
  /* 10c9ce41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ce44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ce47 jne 0x10c9ce4a */
  if (!C.zf) goto L_10c9ce4a;
  /* 10c9ce49 int3  */
  x86_unimpl("int3 @ 0x10c9ce49");
L_10c9ce4a:;
  /* 10c9ce4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9ce4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9ce4e jne 0x10c9ce26 */
  if (!C.zf) goto L_10c9ce26;
  /* 10c9ce50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9ce53 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c9ce56 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ce5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ce5d je 0x10c9ceba */
  if (C.zf) goto L_10c9ceba;
  /* 10c9ce5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9ce62 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ce63 call 0x10c9c110 */
  push32(0x10c9ce68u); f_10c9c110();
  /* 10c9ce68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ce6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9ce6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9ce71 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ce72 call 0x10c9f490 */
  push32(0x10c9ce77u); f_10c9f490();
  /* 10c9ce77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ce7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9ce7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9ce80 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ce81 call 0x10c9f360 */
  push32(0x10c9ce86u); f_10c9f360();
  /* 10c9ce86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ce89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ce8b jge 0x10c9ce96 */
  if ((C.sf==C.of)) goto L_10c9ce96;
  /* 10c9ce8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c9ce94 jmp 0x10c9ceba */
  goto L_10c9ceba;
L_10c9ce96:;
  /* 10c9ce96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9ce99 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ce9d je 0x10c9ceba */
  if (C.zf) goto L_10c9ceba;
  /* 10c9ce9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9cea1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9cea4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c9cea7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cea8 call 0x10c93270 */
  push32(0x10c9ceadu); f_10c93270();
  /* 10c9cead add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ceb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9ceb3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10c9ceba:;
  /* 10c9ceba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9cebd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10c9cec4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9cec7 pop edi */
  EDI = (pop32());
  /* 10c9cec8 pop esi */
  ESI = (pop32());
  /* 10c9cec9 pop ebx */
  EBX = (pop32());
  /* 10c9ceca mov esp, ebp */
  ESP = (EBP);
  /* 10c9cecc pop ebp */
  EBP = (pop32());
  /* 10c9cecd ret  */
  ESPCHK(0x10c9ce10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ced0 @ 0x10c9ced0 (210 bytes, 63 insns) */
void f_10c9ced0(void) {
  FTRACE(0x10c9ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9ced1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9ced3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ced4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ced7 cmp eax, dword ptr [0x10cbff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cedd jae 0x10c9cf01 */
  if (!C.cf) goto L_10c9cf01;
  /* 10c9cedf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cee2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9cee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cee8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9ceeb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9ceee mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9cef5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c9cefa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9cefd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9ceff jne 0x10c9cf14 */
  if (!C.zf) goto L_10c9cf14;
L_10c9cf01:;
  /* 10c9cf01 call 0x10c9a6b0 */
  push32(0x10c9cf06u); f_10c9a6b0();
  /* 10c9cf06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c9cf0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9cf0f jmp 0x10c9cf9e */
  goto L_10c9cf9e;
L_10c9cf14:;
  /* 10c9cf14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cf17 push edx */
  push32((uint32_t)(EDX));
  /* 10c9cf18 call 0x10c9bed0 */
  push32(0x10c9cf1du); f_10c9bed0();
  /* 10c9cf1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cf20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cf23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9cf26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cf29 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9cf2c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9cf2f mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9cf36 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10c9cf3b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9cf3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9cf40 je 0x10c9cf7d */
  if (C.zf) goto L_10c9cf7d;
  /* 10c9cf42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cf45 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cf46 call 0x10c9bd50 */
  push32(0x10c9cf4bu); f_10c9bd50();
  /* 10c9cf4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cf4e push eax */
  push32((uint32_t)(EAX));
  /* 10c9cf4f call dword ptr [0x10cc0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0314))), 0x10c9cf55u);
  /* 10c9cf55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9cf57 jne 0x10c9cf64 */
  if (!C.zf) goto L_10c9cf64;
  /* 10c9cf59 call dword ptr [0x10cc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0278))), 0x10c9cf5fu);
  /* 10c9cf5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9cf62 jmp 0x10c9cf6b */
  goto L_10c9cf6b;
L_10c9cf64:;
  /* 10c9cf64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c9cf6b:;
  /* 10c9cf6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cf6f jne 0x10c9cf73 */
  if (!C.zf) goto L_10c9cf73;
  /* 10c9cf71 jmp 0x10c9cf8f */
  goto L_10c9cf8f;
L_10c9cf73:;
  /* 10c9cf73 call 0x10c9a6c0 */
  push32(0x10c9cf78u); f_10c9a6c0();
  /* 10c9cf78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9cf7b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c9cf7d:;
  /* 10c9cf7d call 0x10c9a6b0 */
  push32(0x10c9cf82u); f_10c9a6b0();
  /* 10c9cf82 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c9cf88 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c9cf8f:;
  /* 10c9cf8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9cf92 push eax */
  push32((uint32_t)(EAX));
  /* 10c9cf93 call 0x10c9bf60 */
  push32(0x10c9cf98u); f_10c9bf60();
  /* 10c9cf98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cf9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c9cf9e:;
  /* 10c9cf9e mov esp, ebp */
  ESP = (EBP);
  /* 10c9cfa0 pop ebp */
  EBP = (pop32());
  /* 10c9cfa1 ret  */
  ESPCHK(0x10c9ced0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10c9cfb0 (219 bytes, 64 insns) */
void f_10c9cfb0(void) {
  FTRACE(0x10c9cfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9cfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9cfb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9cfb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9cfb4 cmp dword ptr [0x10cbe60c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe60c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cfbb je 0x10c9d051 */
  if (C.zf) goto L_10c9d051;
  /* 10c9cfc1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10c9cfc3 push 0x10cb9fd0 */
  push32((uint32_t)(0x10cb9fd0u));
  /* 10c9cfc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9cfca push 0xac */
  push32((uint32_t)(0xacu));
  /* 10c9cfcf push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9cfd1 call 0x10c92bf0 */
  push32(0x10c9cfd6u); f_10c92bf0();
  /* 10c9cfd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cfd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9cfdc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9cfe0 jne 0x10c9cfec */
  if (!C.zf) goto L_10c9cfec;
  /* 10c9cfe2 mov eax, 1 */
  EAX = (0x1u);
  /* 10c9cfe7 jmp 0x10c9d087 */
  goto L_10c9d087;
L_10c9cfec:;
  /* 10c9cfec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9cfef push eax */
  push32((uint32_t)(EAX));
  /* 10c9cff0 call 0x10c9d090 */
  push32(0x10c9cff5u); f_10c9d090();
  /* 10c9cff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9cff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9cffa je 0x10c9d01d */
  if (C.zf) goto L_10c9d01d;
  /* 10c9cffc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9cfff push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d000 call 0x10c9d620 */
  push32(0x10c9d005u); f_10c9d620();
  /* 10c9d005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d008 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d00a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d00d push edx */
  push32((uint32_t)(EDX));
  /* 10c9d00e call 0x10c93270 */
  push32(0x10c9d013u); f_10c93270();
  /* 10c9d013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d016 mov eax, 1 */
  EAX = (0x1u);
  /* 10c9d01b jmp 0x10c9d087 */
  goto L_10c9d087;
L_10c9d01d:;
  /* 10c9d01d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d020 mov dword ptr [0x10cbdc98], eax */
  w32((uint32_t)(0x10cbdc98), (EAX));
  /* 10c9d025 mov ecx, dword ptr [0x10cbe62c] */
  ECX = (r32((uint32_t)(0x10cbe62c)));
  /* 10c9d02b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d02c call 0x10c9d620 */
  push32(0x10c9d031u); f_10c9d620();
  /* 10c9d031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d034 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d036 mov edx, dword ptr [0x10cbe62c] */
  EDX = (r32((uint32_t)(0x10cbe62c)));
  /* 10c9d03c push edx */
  push32((uint32_t)(EDX));
  /* 10c9d03d call 0x10c93270 */
  push32(0x10c9d042u); f_10c93270();
  /* 10c9d042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d048 mov dword ptr [0x10cbe62c], eax */
  w32((uint32_t)(0x10cbe62c), (EAX));
  /* 10c9d04d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9d04f jmp 0x10c9d087 */
  goto L_10c9d087;
L_10c9d051:;
  /* 10c9d051 mov dword ptr [0x10cbdc98], 0x10cbdca0 */
  w32((uint32_t)(0x10cbdc98), (0x10cbdca0u));
  /* 10c9d05b mov ecx, dword ptr [0x10cbe62c] */
  ECX = (r32((uint32_t)(0x10cbe62c)));
  /* 10c9d061 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d062 call 0x10c9d620 */
  push32(0x10c9d067u); f_10c9d620();
  /* 10c9d067 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d06a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d06c mov edx, dword ptr [0x10cbe62c] */
  EDX = (r32((uint32_t)(0x10cbe62c)));
  /* 10c9d072 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d073 call 0x10c93270 */
  push32(0x10c9d078u); f_10c93270();
  /* 10c9d078 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d07b mov dword ptr [0x10cbe62c], 0 */
  w32((uint32_t)(0x10cbe62c), (0x0u));
  /* 10c9d085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9d087:;
  /* 10c9d087 mov esp, ebp */
  ESP = (EBP);
  /* 10c9d089 pop ebp */
  EBP = (pop32());
  /* 10c9d08a ret  */
  ESPCHK(0x10c9cfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d090 @ 0x10c9d090 (1423 bytes, 533 insns) */
void f_10c9d090(void) {
  FTRACE(0x10c9d090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9d090 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9d091 mov ebp, esp */
  EBP = (ESP);
  /* 10c9d093 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9d096 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c9d09d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9d09f mov ax, word ptr [0x10cbe666] */
  AX = (r16((uint32_t)(0x10cbe666)));
  /* 10c9d0a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9d0a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d0aa mov cx, word ptr [0x10cbe668] */
  CX = (r16((uint32_t)(0x10cbe668)));
  /* 10c9d0b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9d0b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9d0b8 jne 0x10c9d0c2 */
  if (!C.zf) goto L_10c9d0c2;
  /* 10c9d0ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9d0bd jmp 0x10c9d61b */
  goto L_10c9d61b;
L_10c9d0c2:;
  /* 10c9d0c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d0c5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d0c8 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d0c9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10c9d0cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d0ce push eax */
  push32((uint32_t)(EAX));
  /* 10c9d0cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d0d1 call 0x10ca09a0 */
  push32(0x10c9d0d6u); f_10ca09a0();
  /* 10c9d0d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d0d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d0dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d0de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d0e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d0e4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d0e7 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d0e8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10c9d0ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d0ed push eax */
  push32((uint32_t)(EAX));
  /* 10c9d0ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d0f0 call 0x10ca09a0 */
  push32(0x10c9d0f5u); f_10ca09a0();
  /* 10c9d0f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d0f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d0fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d0fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d100 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d103 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d106 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d107 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10c9d109 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d10c push eax */
  push32((uint32_t)(EAX));
  /* 10c9d10d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d10f call 0x10ca09a0 */
  push32(0x10c9d114u); f_10ca09a0();
  /* 10c9d114 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d117 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d11a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d11c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d11f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d122 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d125 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d126 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10c9d128 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d12b push eax */
  push32((uint32_t)(EAX));
  /* 10c9d12c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d12e call 0x10ca09a0 */
  push32(0x10c9d133u); f_10ca09a0();
  /* 10c9d133 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d136 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d139 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d13b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d13e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d141 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d144 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d145 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10c9d147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d14a push eax */
  push32((uint32_t)(EAX));
  /* 10c9d14b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d14d call 0x10ca09a0 */
  push32(0x10c9d152u); f_10ca09a0();
  /* 10c9d152 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d155 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d158 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d15a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d15d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d160 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d163 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d164 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10c9d166 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d169 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d16a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d16c call 0x10ca09a0 */
  push32(0x10c9d171u); f_10ca09a0();
  /* 10c9d171 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d174 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d177 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d179 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d17c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d17f push edx */
  push32((uint32_t)(EDX));
  /* 10c9d180 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10c9d182 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d185 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d186 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d188 call 0x10ca09a0 */
  push32(0x10c9d18du); f_10ca09a0();
  /* 10c9d18d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d190 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d193 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d195 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d198 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d19b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d19e push edx */
  push32((uint32_t)(EDX));
  /* 10c9d19f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10c9d1a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d1a4 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d1a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d1a7 call 0x10ca09a0 */
  push32(0x10c9d1acu); f_10ca09a0();
  /* 10c9d1ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d1af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d1b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d1b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d1b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d1ba add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d1bd push edx */
  push32((uint32_t)(EDX));
  /* 10c9d1be push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10c9d1c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d1c3 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d1c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d1c6 call 0x10ca09a0 */
  push32(0x10c9d1cbu); f_10ca09a0();
  /* 10c9d1cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d1ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d1d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d1d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d1d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d1d9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d1dc push edx */
  push32((uint32_t)(EDX));
  /* 10c9d1dd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10c9d1df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d1e2 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d1e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d1e5 call 0x10ca09a0 */
  push32(0x10c9d1eau); f_10ca09a0();
  /* 10c9d1ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d1ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d1f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d1f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d1f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d1f8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d1fb push edx */
  push32((uint32_t)(EDX));
  /* 10c9d1fc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10c9d1fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d201 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d202 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d204 call 0x10ca09a0 */
  push32(0x10c9d209u); f_10ca09a0();
  /* 10c9d209 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d20c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d20f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d211 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d217 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d21a push edx */
  push32((uint32_t)(EDX));
  /* 10c9d21b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10c9d21d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d220 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d221 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d223 call 0x10ca09a0 */
  push32(0x10c9d228u); f_10ca09a0();
  /* 10c9d228 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d22b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d22e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d230 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d233 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d236 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d239 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d23a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10c9d23c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d23f push eax */
  push32((uint32_t)(EAX));
  /* 10c9d240 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d242 call 0x10ca09a0 */
  push32(0x10c9d247u); f_10ca09a0();
  /* 10c9d247 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d24a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d24d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d24f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d252 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d255 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d258 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d259 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c9d25b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d25e push eax */
  push32((uint32_t)(EAX));
  /* 10c9d25f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d261 call 0x10ca09a0 */
  push32(0x10c9d266u); f_10ca09a0();
  /* 10c9d266 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d269 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d26c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d26e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d271 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d274 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d277 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d278 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10c9d27a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d27d push eax */
  push32((uint32_t)(EAX));
  /* 10c9d27e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d280 call 0x10ca09a0 */
  push32(0x10c9d285u); f_10ca09a0();
  /* 10c9d285 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d288 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d28b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d28d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d290 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d293 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d296 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d297 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10c9d299 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d29c push eax */
  push32((uint32_t)(EAX));
  /* 10c9d29d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d29f call 0x10ca09a0 */
  push32(0x10c9d2a4u); f_10ca09a0();
  /* 10c9d2a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d2a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d2aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d2ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d2af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d2b2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d2b5 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d2b6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10c9d2b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d2bb push eax */
  push32((uint32_t)(EAX));
  /* 10c9d2bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d2be call 0x10ca09a0 */
  push32(0x10c9d2c3u); f_10ca09a0();
  /* 10c9d2c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d2c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d2c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d2cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d2ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d2d1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d2d4 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d2d5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10c9d2d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d2da push eax */
  push32((uint32_t)(EAX));
  /* 10c9d2db push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d2dd call 0x10ca09a0 */
  push32(0x10c9d2e2u); f_10ca09a0();
  /* 10c9d2e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d2e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d2e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d2ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d2ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d2f0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d2f3 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d2f4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10c9d2f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d2f9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d2fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d2fc call 0x10ca09a0 */
  push32(0x10c9d301u); f_10ca09a0();
  /* 10c9d301 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d304 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d307 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d309 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d30c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d30f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d312 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d313 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10c9d315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d318 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d319 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d31b call 0x10ca09a0 */
  push32(0x10c9d320u); f_10ca09a0();
  /* 10c9d320 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d323 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d326 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d328 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d32b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d32e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d331 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d332 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10c9d334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d337 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d338 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d33a call 0x10ca09a0 */
  push32(0x10c9d33fu); f_10ca09a0();
  /* 10c9d33f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d342 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d345 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d347 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d34a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d34d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d350 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d351 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10c9d353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d356 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d357 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d359 call 0x10ca09a0 */
  push32(0x10c9d35eu); f_10ca09a0();
  /* 10c9d35e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d361 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d364 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d366 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d369 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d36c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d36f push edx */
  push32((uint32_t)(EDX));
  /* 10c9d370 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10c9d372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d375 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d376 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d378 call 0x10ca09a0 */
  push32(0x10c9d37du); f_10ca09a0();
  /* 10c9d37d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d380 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d383 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d385 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d388 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d38b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d38e push edx */
  push32((uint32_t)(EDX));
  /* 10c9d38f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10c9d391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d394 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d395 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d397 call 0x10ca09a0 */
  push32(0x10c9d39cu); f_10ca09a0();
  /* 10c9d39c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d39f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d3a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d3a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d3a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d3aa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d3ad push edx */
  push32((uint32_t)(EDX));
  /* 10c9d3ae push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10c9d3b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d3b3 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d3b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d3b6 call 0x10ca09a0 */
  push32(0x10c9d3bbu); f_10ca09a0();
  /* 10c9d3bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d3be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d3c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d3c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d3c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d3c9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d3cc push edx */
  push32((uint32_t)(EDX));
  /* 10c9d3cd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10c9d3cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d3d2 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d3d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d3d5 call 0x10ca09a0 */
  push32(0x10c9d3dau); f_10ca09a0();
  /* 10c9d3da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d3dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d3e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d3e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d3e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d3e8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d3eb push edx */
  push32((uint32_t)(EDX));
  /* 10c9d3ec push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10c9d3ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d3f1 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d3f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d3f4 call 0x10ca09a0 */
  push32(0x10c9d3f9u); f_10ca09a0();
  /* 10c9d3f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d3fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d3ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d401 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d404 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d407 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d40a push edx */
  push32((uint32_t)(EDX));
  /* 10c9d40b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10c9d40d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d410 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d411 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d413 call 0x10ca09a0 */
  push32(0x10c9d418u); f_10ca09a0();
  /* 10c9d418 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d41b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d41e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d420 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d423 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d426 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d429 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d42a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10c9d42c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d42f push eax */
  push32((uint32_t)(EAX));
  /* 10c9d430 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d432 call 0x10ca09a0 */
  push32(0x10c9d437u); f_10ca09a0();
  /* 10c9d437 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d43a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d43d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d43f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d442 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d445 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d448 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d449 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10c9d44b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d44e push eax */
  push32((uint32_t)(EAX));
  /* 10c9d44f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d451 call 0x10ca09a0 */
  push32(0x10c9d456u); f_10ca09a0();
  /* 10c9d456 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d459 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d45c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d45e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d464 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d467 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d468 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10c9d46a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d46d push eax */
  push32((uint32_t)(EAX));
  /* 10c9d46e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d470 call 0x10ca09a0 */
  push32(0x10c9d475u); f_10ca09a0();
  /* 10c9d475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d478 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d47b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d47d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d480 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d483 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d486 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d487 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10c9d489 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d48c push eax */
  push32((uint32_t)(EAX));
  /* 10c9d48d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d48f call 0x10ca09a0 */
  push32(0x10c9d494u); f_10ca09a0();
  /* 10c9d494 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d497 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d49a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d49c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d49f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d4a2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d4a8 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d4a9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10c9d4ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d4ae push eax */
  push32((uint32_t)(EAX));
  /* 10c9d4af push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d4b1 call 0x10ca09a0 */
  push32(0x10c9d4b6u); f_10ca09a0();
  /* 10c9d4b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d4b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d4bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d4be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d4c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d4c4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d4ca push edx */
  push32((uint32_t)(EDX));
  /* 10c9d4cb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10c9d4cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d4d0 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d4d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d4d3 call 0x10ca09a0 */
  push32(0x10c9d4d8u); f_10ca09a0();
  /* 10c9d4d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d4db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d4de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d4e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d4e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d4e6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d4ec push edx */
  push32((uint32_t)(EDX));
  /* 10c9d4ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c9d4ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d4f2 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d4f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d4f5 call 0x10ca09a0 */
  push32(0x10c9d4fau); f_10ca09a0();
  /* 10c9d4fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d4fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d500 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d502 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d508 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d50e push edx */
  push32((uint32_t)(EDX));
  /* 10c9d50f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10c9d511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d514 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d515 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d517 call 0x10ca09a0 */
  push32(0x10c9d51cu); f_10ca09a0();
  /* 10c9d51c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d51f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d522 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d524 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d527 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d52a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d530 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d531 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10c9d533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d536 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d537 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d539 call 0x10ca09a0 */
  push32(0x10c9d53eu); f_10ca09a0();
  /* 10c9d53e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d541 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d544 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d546 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d549 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d54c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d552 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d553 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10c9d555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d558 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d559 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d55b call 0x10ca09a0 */
  push32(0x10c9d560u); f_10ca09a0();
  /* 10c9d560 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d563 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d566 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d568 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d56b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d56e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d574 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d575 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10c9d577 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d57a push eax */
  push32((uint32_t)(EAX));
  /* 10c9d57b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d57d call 0x10ca09a0 */
  push32(0x10c9d582u); f_10ca09a0();
  /* 10c9d582 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d585 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d588 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d58a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d58d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d590 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d596 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d597 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10c9d599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d59c push eax */
  push32((uint32_t)(EAX));
  /* 10c9d59d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d59f call 0x10ca09a0 */
  push32(0x10c9d5a4u); f_10ca09a0();
  /* 10c9d5a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d5a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d5aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d5ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d5af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d5b2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d5b8 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d5b9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10c9d5bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9d5be push eax */
  push32((uint32_t)(EAX));
  /* 10c9d5bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d5c1 call 0x10ca09a0 */
  push32(0x10c9d5c6u); f_10ca09a0();
  /* 10c9d5c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d5c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d5cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d5ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d5d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d5d4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d5da push edx */
  push32((uint32_t)(EDX));
  /* 10c9d5db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c9d5dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9d5e0 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d5e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d5e3 call 0x10ca09a0 */
  push32(0x10c9d5e8u); f_10ca09a0();
  /* 10c9d5e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d5eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d5ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d5f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d5f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d5f6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d5fc push edx */
  push32((uint32_t)(EDX));
  /* 10c9d5fd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10c9d602 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9d605 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d606 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d608 call 0x10ca09a0 */
  push32(0x10c9d60du); f_10ca09a0();
  /* 10c9d60d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d610 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9d613 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d615 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9d618 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10c9d61b:;
  /* 10c9d61b mov esp, ebp */
  ESP = (EBP);
  /* 10c9d61d pop ebp */
  EBP = (pop32());
  /* 10c9d61e ret  */
  ESPCHK(0x10c9d090u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10c9d620 (779 bytes, 265 insns) */
void f_10c9d620(void) {
  FTRACE(0x10c9d620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9d620 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9d621 mov ebp, esp */
  EBP = (ESP);
  /* 10c9d623 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9d627 jne 0x10c9d62e */
  if (!C.zf) goto L_10c9d62e;
  /* 10c9d629 jmp 0x10c9d929 */
  goto L_10c9d929;
L_10c9d62e:;
  /* 10c9d62e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d633 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c9d636 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d637 call 0x10c93270 */
  push32(0x10c9d63cu); f_10c93270();
  /* 10c9d63c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d63f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d644 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c9d647 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d648 call 0x10c93270 */
  push32(0x10c9d64du); f_10c93270();
  /* 10c9d64d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d650 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d652 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d655 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9d658 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d659 call 0x10c93270 */
  push32(0x10c9d65eu); f_10c93270();
  /* 10c9d65e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d661 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d663 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d666 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9d669 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d66a call 0x10c93270 */
  push32(0x10c9d66fu); f_10c93270();
  /* 10c9d66f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d672 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d677 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c9d67a push eax */
  push32((uint32_t)(EAX));
  /* 10c9d67b call 0x10c93270 */
  push32(0x10c9d680u); f_10c93270();
  /* 10c9d680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d683 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d685 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d688 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c9d68b push edx */
  push32((uint32_t)(EDX));
  /* 10c9d68c call 0x10c93270 */
  push32(0x10c9d691u); f_10c93270();
  /* 10c9d691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d694 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d699 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c9d69b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d69c call 0x10c93270 */
  push32(0x10c9d6a1u); f_10c93270();
  /* 10c9d6a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d6a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d6a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d6a9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10c9d6ac push eax */
  push32((uint32_t)(EAX));
  /* 10c9d6ad call 0x10c93270 */
  push32(0x10c9d6b2u); f_10c93270();
  /* 10c9d6b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d6b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d6b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d6ba mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10c9d6bd push edx */
  push32((uint32_t)(EDX));
  /* 10c9d6be call 0x10c93270 */
  push32(0x10c9d6c3u); f_10c93270();
  /* 10c9d6c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d6c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d6c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d6cb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10c9d6ce push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d6cf call 0x10c93270 */
  push32(0x10c9d6d4u); f_10c93270();
  /* 10c9d6d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d6d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d6d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d6dc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10c9d6df push eax */
  push32((uint32_t)(EAX));
  /* 10c9d6e0 call 0x10c93270 */
  push32(0x10c9d6e5u); f_10c93270();
  /* 10c9d6e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d6e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d6ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d6ed mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10c9d6f0 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d6f1 call 0x10c93270 */
  push32(0x10c9d6f6u); f_10c93270();
  /* 10c9d6f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d6f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d6fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d6fe mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10c9d701 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d702 call 0x10c93270 */
  push32(0x10c9d707u); f_10c93270();
  /* 10c9d707 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d70a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d70f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c9d712 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d713 call 0x10c93270 */
  push32(0x10c9d718u); f_10c93270();
  /* 10c9d718 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d71b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d71d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d720 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10c9d723 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d724 call 0x10c93270 */
  push32(0x10c9d729u); f_10c93270();
  /* 10c9d729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d72c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d72e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d731 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10c9d734 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d735 call 0x10c93270 */
  push32(0x10c9d73au); f_10c93270();
  /* 10c9d73a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d73d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d73f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d742 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10c9d745 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d746 call 0x10c93270 */
  push32(0x10c9d74bu); f_10c93270();
  /* 10c9d74b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d74e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d750 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d753 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10c9d756 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d757 call 0x10c93270 */
  push32(0x10c9d75cu); f_10c93270();
  /* 10c9d75c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d75f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d764 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10c9d767 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d768 call 0x10c93270 */
  push32(0x10c9d76du); f_10c93270();
  /* 10c9d76d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d770 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d772 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d775 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10c9d778 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d779 call 0x10c93270 */
  push32(0x10c9d77eu); f_10c93270();
  /* 10c9d77e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d781 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d783 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d786 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c9d789 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d78a call 0x10c93270 */
  push32(0x10c9d78fu); f_10c93270();
  /* 10c9d78f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d792 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d797 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10c9d79a push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d79b call 0x10c93270 */
  push32(0x10c9d7a0u); f_10c93270();
  /* 10c9d7a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d7a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d7a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d7a8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10c9d7ab push eax */
  push32((uint32_t)(EAX));
  /* 10c9d7ac call 0x10c93270 */
  push32(0x10c9d7b1u); f_10c93270();
  /* 10c9d7b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d7b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d7b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d7b9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10c9d7bc push edx */
  push32((uint32_t)(EDX));
  /* 10c9d7bd call 0x10c93270 */
  push32(0x10c9d7c2u); f_10c93270();
  /* 10c9d7c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d7c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d7c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d7ca mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10c9d7cd push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d7ce call 0x10c93270 */
  push32(0x10c9d7d3u); f_10c93270();
  /* 10c9d7d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d7d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d7d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d7db mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10c9d7de push eax */
  push32((uint32_t)(EAX));
  /* 10c9d7df call 0x10c93270 */
  push32(0x10c9d7e4u); f_10c93270();
  /* 10c9d7e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d7e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d7e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d7ec mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10c9d7ef push edx */
  push32((uint32_t)(EDX));
  /* 10c9d7f0 call 0x10c93270 */
  push32(0x10c9d7f5u); f_10c93270();
  /* 10c9d7f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d7f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d7fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d7fd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10c9d800 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d801 call 0x10c93270 */
  push32(0x10c9d806u); f_10c93270();
  /* 10c9d806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d809 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d80b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d80e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10c9d811 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d812 call 0x10c93270 */
  push32(0x10c9d817u); f_10c93270();
  /* 10c9d817 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d81a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d81c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d81f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10c9d822 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d823 call 0x10c93270 */
  push32(0x10c9d828u); f_10c93270();
  /* 10c9d828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d82b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d82d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d830 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10c9d833 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d834 call 0x10c93270 */
  push32(0x10c9d839u); f_10c93270();
  /* 10c9d839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d83c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d83e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d841 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10c9d844 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d845 call 0x10c93270 */
  push32(0x10c9d84au); f_10c93270();
  /* 10c9d84a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d84d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d84f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d852 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10c9d858 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d859 call 0x10c93270 */
  push32(0x10c9d85eu); f_10c93270();
  /* 10c9d85e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d861 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d863 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d866 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10c9d86c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d86d call 0x10c93270 */
  push32(0x10c9d872u); f_10c93270();
  /* 10c9d872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d875 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d877 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d87a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10c9d880 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d881 call 0x10c93270 */
  push32(0x10c9d886u); f_10c93270();
  /* 10c9d886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d889 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d88b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d88e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10c9d894 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d895 call 0x10c93270 */
  push32(0x10c9d89au); f_10c93270();
  /* 10c9d89a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d89d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d89f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d8a2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10c9d8a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d8a9 call 0x10c93270 */
  push32(0x10c9d8aeu); f_10c93270();
  /* 10c9d8ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d8b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d8b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d8b6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10c9d8bc push eax */
  push32((uint32_t)(EAX));
  /* 10c9d8bd call 0x10c93270 */
  push32(0x10c9d8c2u); f_10c93270();
  /* 10c9d8c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d8c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d8c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d8ca mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10c9d8d0 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d8d1 call 0x10c93270 */
  push32(0x10c9d8d6u); f_10c93270();
  /* 10c9d8d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d8d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d8db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d8de mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10c9d8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d8e5 call 0x10c93270 */
  push32(0x10c9d8eau); f_10c93270();
  /* 10c9d8ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d8ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d8ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d8f2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10c9d8f8 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d8f9 call 0x10c93270 */
  push32(0x10c9d8feu); f_10c93270();
  /* 10c9d8fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d901 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d903 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d906 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10c9d90c push edx */
  push32((uint32_t)(EDX));
  /* 10c9d90d call 0x10c93270 */
  push32(0x10c9d912u); f_10c93270();
  /* 10c9d912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d915 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d917 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9d91a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10c9d920 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d921 call 0x10c93270 */
  push32(0x10c9d926u); f_10c93270();
  /* 10c9d926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9d929:;
  /* 10c9d929 pop ebp */
  EBP = (pop32());
  /* 10c9d92a ret  */
  ESPCHK(0x10c9d620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d930 @ 0x10c9d930 (678 bytes, 180 insns) */
void f_10c9d930(void) {
  FTRACE(0x10c9d930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9d930 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9d931 mov ebp, esp */
  EBP = (ESP);
  /* 10c9d933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9d936 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9d93d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9d93f mov ax, word ptr [0x10cbe662] */
  AX = (r16((uint32_t)(0x10cbe662)));
  /* 10c9d945 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9d948 cmp dword ptr [0x10cbe608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9d94f je 0x10c9daaa */
  if (C.zf) goto L_10c9daaa;
  /* 10c9d955 push 0x10cbe630 */
  push32((uint32_t)(0x10cbe630u));
  /* 10c9d95a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10c9d95c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d95f push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d960 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d962 call 0x10ca09a0 */
  push32(0x10c9d967u); f_10ca09a0();
  /* 10c9d967 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d96a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9d96d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9d96f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c9d972 push 0x10cbe634 */
  push32((uint32_t)(0x10cbe634u));
  /* 10c9d977 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10c9d979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d97c push eax */
  push32((uint32_t)(EAX));
  /* 10c9d97d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d97f call 0x10ca09a0 */
  push32(0x10c9d984u); f_10ca09a0();
  /* 10c9d984 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d987 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9d98a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d98c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9d98f push 0x10cbe638 */
  push32((uint32_t)(0x10cbe638u));
  /* 10c9d994 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10c9d996 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9d999 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d99a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9d99c call 0x10ca09a0 */
  push32(0x10c9d9a1u); f_10ca09a0();
  /* 10c9d9a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d9a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9d9a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9d9a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9d9ac mov edx, dword ptr [0x10cbe638] */
  EDX = (r32((uint32_t)(0x10cbe638)));
  /* 10c9d9b2 push edx */
  push32((uint32_t)(EDX));
  /* 10c9d9b3 call 0x10c9dbe0 */
  push32(0x10c9d9b8u); f_10c9dbe0();
  /* 10c9d9b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d9bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9d9bf je 0x10c9da19 */
  if (C.zf) goto L_10c9da19;
  /* 10c9d9c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d9c3 mov eax, dword ptr [0x10cbe630] */
  EAX = (r32((uint32_t)(0x10cbe630)));
  /* 10c9d9c8 push eax */
  push32((uint32_t)(EAX));
  /* 10c9d9c9 call 0x10c93270 */
  push32(0x10c9d9ceu); f_10c93270();
  /* 10c9d9ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d9d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d9d3 mov ecx, dword ptr [0x10cbe634] */
  ECX = (r32((uint32_t)(0x10cbe634)));
  /* 10c9d9d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9d9da call 0x10c93270 */
  push32(0x10c9d9dfu); f_10c93270();
  /* 10c9d9df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d9e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9d9e4 mov edx, dword ptr [0x10cbe638] */
  EDX = (r32((uint32_t)(0x10cbe638)));
  /* 10c9d9ea push edx */
  push32((uint32_t)(EDX));
  /* 10c9d9eb call 0x10c93270 */
  push32(0x10c9d9f0u); f_10c93270();
  /* 10c9d9f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9d9f3 mov dword ptr [0x10cbe630], 0 */
  w32((uint32_t)(0x10cbe630), (0x0u));
  /* 10c9d9fd mov dword ptr [0x10cbe634], 0 */
  w32((uint32_t)(0x10cbe634), (0x0u));
  /* 10c9da07 mov dword ptr [0x10cbe638], 0 */
  w32((uint32_t)(0x10cbe638), (0x0u));
  /* 10c9da11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9da14 jmp 0x10c9dbd2 */
  goto L_10c9dbd2;
L_10c9da19:;
  /* 10c9da19 mov eax, dword ptr [0x10cbdd88] */
  EAX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9da1e cmp dword ptr [eax], 0x10cbdd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10cbdd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9da24 je 0x10c9da60 */
  if (C.zf) goto L_10c9da60;
  /* 10c9da26 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9da28 mov ecx, dword ptr [0x10cbdd88] */
  ECX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9da2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9da30 push edx */
  push32((uint32_t)(EDX));
  /* 10c9da31 call 0x10c93270 */
  push32(0x10c9da36u); f_10c93270();
  /* 10c9da36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9da39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9da3b mov eax, dword ptr [0x10cbdd88] */
  EAX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9da40 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c9da43 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9da44 call 0x10c93270 */
  push32(0x10c9da49u); f_10c93270();
  /* 10c9da49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9da4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9da4e mov edx, dword ptr [0x10cbdd88] */
  EDX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9da54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c9da57 push eax */
  push32((uint32_t)(EAX));
  /* 10c9da58 call 0x10c93270 */
  push32(0x10c9da5du); f_10c93270();
  /* 10c9da5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9da60:;
  /* 10c9da60 mov ecx, dword ptr [0x10cbdd88] */
  ECX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9da66 mov edx, dword ptr [0x10cbe630] */
  EDX = (r32((uint32_t)(0x10cbe630)));
  /* 10c9da6c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c9da6e mov eax, dword ptr [0x10cbdd88] */
  EAX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9da73 mov ecx, dword ptr [0x10cbe634] */
  ECX = (r32((uint32_t)(0x10cbe634)));
  /* 10c9da79 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c9da7c mov edx, dword ptr [0x10cbdd88] */
  EDX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9da82 mov eax, dword ptr [0x10cbe638] */
  EAX = (r32((uint32_t)(0x10cbe638)));
  /* 10c9da87 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c9da8a mov ecx, dword ptr [0x10cbdd88] */
  ECX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9da90 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9da92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c9da94 mov byte ptr [0x10cbcea8], al */
  w8((uint32_t)(0x10cbcea8), (AL));
  /* 10c9da99 mov dword ptr [0x10cbceac], 1 */
  w32((uint32_t)(0x10cbceac), (0x1u));
  /* 10c9daa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9daa5 jmp 0x10c9dbd2 */
  goto L_10c9dbd2;
L_10c9daaa:;
  /* 10c9daaa push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9daac mov ecx, dword ptr [0x10cbe630] */
  ECX = (r32((uint32_t)(0x10cbe630)));
  /* 10c9dab2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9dab3 call 0x10c93270 */
  push32(0x10c9dab8u); f_10c93270();
  /* 10c9dab8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dabb push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9dabd mov edx, dword ptr [0x10cbe634] */
  EDX = (r32((uint32_t)(0x10cbe634)));
  /* 10c9dac3 push edx */
  push32((uint32_t)(EDX));
  /* 10c9dac4 call 0x10c93270 */
  push32(0x10c9dac9u); f_10c93270();
  /* 10c9dac9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dacc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9dace mov eax, dword ptr [0x10cbe638] */
  EAX = (r32((uint32_t)(0x10cbe638)));
  /* 10c9dad3 push eax */
  push32((uint32_t)(EAX));
  /* 10c9dad4 call 0x10c93270 */
  push32(0x10c9dad9u); f_10c93270();
  /* 10c9dad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dadc mov dword ptr [0x10cbe630], 0 */
  w32((uint32_t)(0x10cbe630), (0x0u));
  /* 10c9dae6 mov dword ptr [0x10cbe634], 0 */
  w32((uint32_t)(0x10cbe634), (0x0u));
  /* 10c9daf0 mov dword ptr [0x10cbe638], 0 */
  w32((uint32_t)(0x10cbe638), (0x0u));
  /* 10c9dafa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10c9daff push 0x10cb9fdc */
  push32((uint32_t)(0x10cb9fdcu));
  /* 10c9db04 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9db06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9db08 call 0x10c927e0 */
  push32(0x10c9db0du); f_10c927e0();
  /* 10c9db0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9db10 mov ecx, dword ptr [0x10cbdd88] */
  ECX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9db16 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c9db18 mov edx, dword ptr [0x10cbdd88] */
  EDX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9db1e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9db21 jne 0x10c9db2b */
  if (!C.zf) goto L_10c9db2b;
  /* 10c9db23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9db26 jmp 0x10c9dbd2 */
  goto L_10c9dbd2;
L_10c9db2b:;
  /* 10c9db2b push 0x10cb9fac */
  push32((uint32_t)(0x10cb9facu));
  /* 10c9db30 mov eax, dword ptr [0x10cbdd88] */
  EAX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9db35 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c9db37 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9db38 call 0x10c95790 */
  push32(0x10c9db3du); f_10c95790();
  /* 10c9db3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9db40 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10c9db45 push 0x10cb9fdc */
  push32((uint32_t)(0x10cb9fdcu));
  /* 10c9db4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9db4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9db4e call 0x10c927e0 */
  push32(0x10c9db53u); f_10c927e0();
  /* 10c9db53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9db56 mov edx, dword ptr [0x10cbdd88] */
  EDX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9db5c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c9db5f mov eax, dword ptr [0x10cbdd88] */
  EAX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9db64 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9db68 jne 0x10c9db6f */
  if (!C.zf) goto L_10c9db6f;
  /* 10c9db6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9db6d jmp 0x10c9dbd2 */
  goto L_10c9dbd2;
L_10c9db6f:;
  /* 10c9db6f mov ecx, dword ptr [0x10cbdd88] */
  ECX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9db75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c9db78 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c9db7b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10c9db80 push 0x10cb9fdc */
  push32((uint32_t)(0x10cb9fdcu));
  /* 10c9db85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9db87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9db89 call 0x10c927e0 */
  push32(0x10c9db8eu); f_10c927e0();
  /* 10c9db8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9db91 mov ecx, dword ptr [0x10cbdd88] */
  ECX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9db97 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10c9db9a mov edx, dword ptr [0x10cbdd88] */
  EDX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9dba0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9dba4 jne 0x10c9dbab */
  if (!C.zf) goto L_10c9dbab;
  /* 10c9dba6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9dba9 jmp 0x10c9dbd2 */
  goto L_10c9dbd2;
L_10c9dbab:;
  /* 10c9dbab mov eax, dword ptr [0x10cbdd88] */
  EAX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9dbb0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c9dbb3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c9dbb6 mov edx, dword ptr [0x10cbdd88] */
  EDX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9dbbc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c9dbbe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c9dbc0 mov byte ptr [0x10cbcea8], cl */
  w8((uint32_t)(0x10cbcea8), (CL));
  /* 10c9dbc6 mov dword ptr [0x10cbceac], 1 */
  w32((uint32_t)(0x10cbceac), (0x1u));
  /* 10c9dbd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9dbd2:;
  /* 10c9dbd2 mov esp, ebp */
  ESP = (EBP);
  /* 10c9dbd4 pop ebp */
  EBP = (pop32());
  /* 10c9dbd5 ret  */
  ESPCHK(0x10c9d930u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10c9dbe0 (125 bytes, 49 insns) */
void f_10c9dbe0(void) {
  FTRACE(0x10c9dbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9dbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9dbe1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9dbe3 push ecx */
  push32((uint32_t)(ECX));
L_10c9dbe4:;
  /* 10c9dbe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dbe7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9dbea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9dbec je 0x10c9dc59 */
  if (C.zf) goto L_10c9dc59;
  /* 10c9dbee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dbf1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c9dbf4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9dbf7 jl 0x10c9dc1d */
  if ((C.sf!=C.of)) goto L_10c9dc1d;
  /* 10c9dbf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dbfc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9dbff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9dc02 jg 0x10c9dc1d */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9dc1d;
  /* 10c9dc04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dc07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9dc0a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9dc0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dc10 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c9dc12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dc15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dc18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c9dc1b jmp 0x10c9dc57 */
  goto L_10c9dc57;
L_10c9dc1d:;
  /* 10c9dc1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dc20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9dc23 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9dc26 jne 0x10c9dc4e */
  if (!C.zf) goto L_10c9dc4e;
  /* 10c9dc28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dc2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9dc2e:;
  /* 10c9dc2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dc31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dc34 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c9dc37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c9dc39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dc3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dc3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c9dc42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dc45 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c9dc48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9dc4a jne 0x10c9dc2e */
  if (!C.zf) goto L_10c9dc2e;
  /* 10c9dc4c jmp 0x10c9dc57 */
  goto L_10c9dc57;
L_10c9dc4e:;
  /* 10c9dc4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dc51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dc54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10c9dc57:;
  /* 10c9dc57 jmp 0x10c9dbe4 */
  goto L_10c9dbe4;
L_10c9dc59:;
  /* 10c9dc59 mov esp, ebp */
  ESP = (EBP);
  /* 10c9dc5b pop ebp */
  EBP = (pop32());
  /* 10c9dc5c ret  */
  ESPCHK(0x10c9dbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc60 @ 0x10c9dc60 (304 bytes, 85 insns) */
void f_10c9dc60(void) {
  FTRACE(0x10c9dc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9dc60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9dc61 mov ebp, esp */
  EBP = (ESP);
  /* 10c9dc63 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9dc64 cmp dword ptr [0x10cbe604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9dc6b je 0x10c9dd2c */
  if (C.zf) goto L_10c9dd2c;
  /* 10c9dc71 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10c9dc73 push 0x10cb9fe8 */
  push32((uint32_t)(0x10cb9fe8u));
  /* 10c9dc78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9dc7a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c9dc7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9dc7e call 0x10c92bf0 */
  push32(0x10c9dc83u); f_10c92bf0();
  /* 10c9dc83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dc86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9dc89 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9dc8d jne 0x10c9dc99 */
  if (!C.zf) goto L_10c9dc99;
  /* 10c9dc8f mov eax, 1 */
  EAX = (0x1u);
  /* 10c9dc94 jmp 0x10c9dd8c */
  goto L_10c9dd8c;
L_10c9dc99:;
  /* 10c9dc99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dc9c push eax */
  push32((uint32_t)(EAX));
  /* 10c9dc9d call 0x10c9dd90 */
  push32(0x10c9dca2u); f_10c9dd90();
  /* 10c9dca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dca5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9dca7 je 0x10c9dccd */
  if (C.zf) goto L_10c9dccd;
  /* 10c9dca9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dcac push ecx */
  push32((uint32_t)(ECX));
  /* 10c9dcad call 0x10c9e020 */
  push32(0x10c9dcb2u); f_10c9e020();
  /* 10c9dcb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dcb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9dcb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dcba push edx */
  push32((uint32_t)(EDX));
  /* 10c9dcbb call 0x10c93270 */
  push32(0x10c9dcc0u); f_10c93270();
  /* 10c9dcc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dcc3 mov eax, 1 */
  EAX = (0x1u);
  /* 10c9dcc8 jmp 0x10c9dd8c */
  goto L_10c9dd8c;
L_10c9dccd:;
  /* 10c9dccd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dcd0 mov ecx, dword ptr [0x10cbdd88] */
  ECX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9dcd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9dcd8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c9dcda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dcdd mov ecx, dword ptr [0x10cbdd88] */
  ECX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9dce3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c9dce6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c9dce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dcec mov ecx, dword ptr [0x10cbdd88] */
  ECX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9dcf2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c9dcf5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10c9dcf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dcfb mov dword ptr [0x10cbdd88], eax */
  w32((uint32_t)(0x10cbdd88), (EAX));
  /* 10c9dd00 mov ecx, dword ptr [0x10cbe63c] */
  ECX = (r32((uint32_t)(0x10cbe63c)));
  /* 10c9dd06 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9dd07 call 0x10c9e020 */
  push32(0x10c9dd0cu); f_10c9e020();
  /* 10c9dd0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dd0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9dd11 mov edx, dword ptr [0x10cbe63c] */
  EDX = (r32((uint32_t)(0x10cbe63c)));
  /* 10c9dd17 push edx */
  push32((uint32_t)(EDX));
  /* 10c9dd18 call 0x10c93270 */
  push32(0x10c9dd1du); f_10c93270();
  /* 10c9dd1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dd20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dd23 mov dword ptr [0x10cbe63c], eax */
  w32((uint32_t)(0x10cbe63c), (EAX));
  /* 10c9dd28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9dd2a jmp 0x10c9dd8c */
  goto L_10c9dd8c;
L_10c9dd2c:;
  /* 10c9dd2c mov ecx, dword ptr [0x10cbdd88] */
  ECX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9dd32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9dd34 mov dword ptr [0x10cbdd58], edx */
  w32((uint32_t)(0x10cbdd58), (EDX));
  /* 10c9dd3a mov eax, dword ptr [0x10cbdd88] */
  EAX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9dd3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c9dd42 mov dword ptr [0x10cbdd5c], ecx */
  w32((uint32_t)(0x10cbdd5c), (ECX));
  /* 10c9dd48 mov edx, dword ptr [0x10cbdd88] */
  EDX = (r32((uint32_t)(0x10cbdd88)));
  /* 10c9dd4e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c9dd51 mov dword ptr [0x10cbdd60], eax */
  w32((uint32_t)(0x10cbdd60), (EAX));
  /* 10c9dd56 mov dword ptr [0x10cbdd88], 0x10cbdd58 */
  w32((uint32_t)(0x10cbdd88), (0x10cbdd58u));
  /* 10c9dd60 mov ecx, dword ptr [0x10cbe63c] */
  ECX = (r32((uint32_t)(0x10cbe63c)));
  /* 10c9dd66 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9dd67 call 0x10c9e020 */
  push32(0x10c9dd6cu); f_10c9e020();
  /* 10c9dd6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dd6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9dd71 mov edx, dword ptr [0x10cbe63c] */
  EDX = (r32((uint32_t)(0x10cbe63c)));
  /* 10c9dd77 push edx */
  push32((uint32_t)(EDX));
  /* 10c9dd78 call 0x10c93270 */
  push32(0x10c9dd7du); f_10c93270();
  /* 10c9dd7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dd80 mov dword ptr [0x10cbe63c], 0 */
  w32((uint32_t)(0x10cbe63c), (0x0u));
  /* 10c9dd8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9dd8c:;
  /* 10c9dd8c mov esp, ebp */
  ESP = (EBP);
  /* 10c9dd8e pop ebp */
  EBP = (pop32());
  /* 10c9dd8f ret  */
  ESPCHK(0x10c9dc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd90 @ 0x10c9dd90 (525 bytes, 200 insns) */
void f_10c9dd90(void) {
  FTRACE(0x10c9dd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9dd90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9dd91 mov ebp, esp */
  EBP = (ESP);
  /* 10c9dd93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9dd96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9dd9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9dd9f mov ax, word ptr [0x10cbe65c] */
  AX = (r16((uint32_t)(0x10cbe65c)));
  /* 10c9dda5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9dda8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ddac jne 0x10c9ddb6 */
  if (!C.zf) goto L_10c9ddb6;
  /* 10c9ddae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ddb1 jmp 0x10c9df99 */
  goto L_10c9df99;
L_10c9ddb6:;
  /* 10c9ddb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ddb9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ddbc push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ddbd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10c9ddbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ddc2 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ddc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9ddc5 call 0x10ca09a0 */
  push32(0x10c9ddcau); f_10ca09a0();
  /* 10c9ddca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ddcd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9ddd0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9ddd2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9ddd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ddd8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dddb push edx */
  push32((uint32_t)(EDX));
  /* 10c9dddc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10c9ddde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dde1 push eax */
  push32((uint32_t)(EAX));
  /* 10c9dde2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9dde4 call 0x10ca09a0 */
  push32(0x10c9dde9u); f_10ca09a0();
  /* 10c9dde9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ddec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9ddef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9ddf1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9ddf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ddf7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ddfa push edx */
  push32((uint32_t)(EDX));
  /* 10c9ddfb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10c9ddfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9de00 push eax */
  push32((uint32_t)(EAX));
  /* 10c9de01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9de03 call 0x10ca09a0 */
  push32(0x10c9de08u); f_10ca09a0();
  /* 10c9de08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9de0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9de0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9de10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9de13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9de16 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9de19 push edx */
  push32((uint32_t)(EDX));
  /* 10c9de1a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10c9de1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9de1f push eax */
  push32((uint32_t)(EAX));
  /* 10c9de20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9de22 call 0x10ca09a0 */
  push32(0x10c9de27u); f_10ca09a0();
  /* 10c9de27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9de2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9de2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9de2f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9de32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9de35 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9de38 push edx */
  push32((uint32_t)(EDX));
  /* 10c9de39 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10c9de3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9de3e push eax */
  push32((uint32_t)(EAX));
  /* 10c9de3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9de41 call 0x10ca09a0 */
  push32(0x10c9de46u); f_10ca09a0();
  /* 10c9de46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9de49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9de4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9de4e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9de51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9de54 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c9de57 push eax */
  push32((uint32_t)(EAX));
  /* 10c9de58 call 0x10c9dfa0 */
  push32(0x10c9de5du); f_10c9dfa0();
  /* 10c9de5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9de60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9de63 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9de66 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9de67 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10c9de69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9de6c push edx */
  push32((uint32_t)(EDX));
  /* 10c9de6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9de6f call 0x10ca09a0 */
  push32(0x10c9de74u); f_10ca09a0();
  /* 10c9de74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9de77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9de7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9de7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9de7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9de82 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9de85 push edx */
  push32((uint32_t)(EDX));
  /* 10c9de86 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10c9de88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9de8b push eax */
  push32((uint32_t)(EAX));
  /* 10c9de8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9de8e call 0x10ca09a0 */
  push32(0x10c9de93u); f_10ca09a0();
  /* 10c9de93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9de96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9de99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9de9b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9de9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dea1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dea4 push edx */
  push32((uint32_t)(EDX));
  /* 10c9dea5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10c9dea7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9deaa push eax */
  push32((uint32_t)(EAX));
  /* 10c9deab push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9dead call 0x10ca09a0 */
  push32(0x10c9deb2u); f_10ca09a0();
  /* 10c9deb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9deb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9deb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9deba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9debd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dec0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dec3 push edx */
  push32((uint32_t)(EDX));
  /* 10c9dec4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c9dec6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dec9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9deca push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9decc call 0x10ca09a0 */
  push32(0x10c9ded1u); f_10ca09a0();
  /* 10c9ded1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ded4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9ded7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9ded9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9dedc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dedf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dee2 push edx */
  push32((uint32_t)(EDX));
  /* 10c9dee3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10c9dee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dee8 push eax */
  push32((uint32_t)(EAX));
  /* 10c9dee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9deeb call 0x10ca09a0 */
  push32(0x10c9def0u); f_10ca09a0();
  /* 10c9def0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9def3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9def6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9def8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9defb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9defe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9df01 push edx */
  push32((uint32_t)(EDX));
  /* 10c9df02 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10c9df04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9df07 push eax */
  push32((uint32_t)(EAX));
  /* 10c9df08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9df0a call 0x10ca09a0 */
  push32(0x10c9df0fu); f_10ca09a0();
  /* 10c9df0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9df12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9df15 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9df17 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9df1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9df1d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9df20 push edx */
  push32((uint32_t)(EDX));
  /* 10c9df21 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10c9df23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9df26 push eax */
  push32((uint32_t)(EAX));
  /* 10c9df27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9df29 call 0x10ca09a0 */
  push32(0x10c9df2eu); f_10ca09a0();
  /* 10c9df2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9df31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9df34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9df36 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9df39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9df3c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9df3f push edx */
  push32((uint32_t)(EDX));
  /* 10c9df40 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10c9df42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9df45 push eax */
  push32((uint32_t)(EAX));
  /* 10c9df46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9df48 call 0x10ca09a0 */
  push32(0x10c9df4du); f_10ca09a0();
  /* 10c9df4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9df50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9df53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9df55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9df58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9df5b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9df5e push edx */
  push32((uint32_t)(EDX));
  /* 10c9df5f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10c9df61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9df64 push eax */
  push32((uint32_t)(EAX));
  /* 10c9df65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9df67 call 0x10ca09a0 */
  push32(0x10c9df6cu); f_10ca09a0();
  /* 10c9df6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9df6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9df72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9df74 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9df77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9df7a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9df7d push edx */
  push32((uint32_t)(EDX));
  /* 10c9df7e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10c9df80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9df83 push eax */
  push32((uint32_t)(EAX));
  /* 10c9df84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9df86 call 0x10ca09a0 */
  push32(0x10c9df8bu); f_10ca09a0();
  /* 10c9df8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9df8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9df91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9df93 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9df96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c9df99:;
  /* 10c9df99 mov esp, ebp */
  ESP = (EBP);
  /* 10c9df9b pop ebp */
  EBP = (pop32());
  /* 10c9df9c ret  */
  ESPCHK(0x10c9dd90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10c9dfa0 (125 bytes, 49 insns) */
void f_10c9dfa0(void) {
  FTRACE(0x10c9dfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9dfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9dfa1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9dfa3 push ecx */
  push32((uint32_t)(ECX));
L_10c9dfa4:;
  /* 10c9dfa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dfa7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9dfaa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9dfac je 0x10c9e019 */
  if (C.zf) goto L_10c9e019;
  /* 10c9dfae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dfb1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c9dfb4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9dfb7 jl 0x10c9dfdd */
  if ((C.sf!=C.of)) goto L_10c9dfdd;
  /* 10c9dfb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dfbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9dfbf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9dfc2 jg 0x10c9dfdd */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9dfdd;
  /* 10c9dfc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dfc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9dfca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9dfcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dfd0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c9dfd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dfd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dfd8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c9dfdb jmp 0x10c9e017 */
  goto L_10c9e017;
L_10c9dfdd:;
  /* 10c9dfdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dfe0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9dfe3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9dfe6 jne 0x10c9e00e */
  if (!C.zf) goto L_10c9e00e;
  /* 10c9dfe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9dfeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9dfee:;
  /* 10c9dfee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dff1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dff4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c9dff7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c9dff9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9dffc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9dfff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c9e002 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9e005 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c9e008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e00a jne 0x10c9dfee */
  if (!C.zf) goto L_10c9dfee;
  /* 10c9e00c jmp 0x10c9e017 */
  goto L_10c9e017;
L_10c9e00e:;
  /* 10c9e00e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e011 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e014 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10c9e017:;
  /* 10c9e017 jmp 0x10c9dfa4 */
  goto L_10c9dfa4;
L_10c9e019:;
  /* 10c9e019 mov esp, ebp */
  ESP = (EBP);
  /* 10c9e01b pop ebp */
  EBP = (pop32());
  /* 10c9e01c ret  */
  ESPCHK(0x10c9dfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e020 @ 0x10c9e020 (147 bytes, 52 insns) */
void f_10c9e020(void) {
  FTRACE(0x10c9e020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e020 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9e021 mov ebp, esp */
  EBP = (ESP);
  /* 10c9e023 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e027 jne 0x10c9e02e */
  if (!C.zf) goto L_10c9e02e;
  /* 10c9e029 jmp 0x10c9e0b1 */
  goto L_10c9e0b1;
L_10c9e02e:;
  /* 10c9e02e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e031 cmp dword ptr [eax + 0xc], 0x10cbe698 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10cbe698u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e038 je 0x10c9e0b1 */
  if (C.zf) goto L_10c9e0b1;
  /* 10c9e03a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e03c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e03f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9e042 push edx */
  push32((uint32_t)(EDX));
  /* 10c9e043 call 0x10c93270 */
  push32(0x10c9e048u); f_10c93270();
  /* 10c9e048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e04b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e04d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e050 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c9e053 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e054 call 0x10c93270 */
  push32(0x10c9e059u); f_10c93270();
  /* 10c9e059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e05c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e05e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e061 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c9e064 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e065 call 0x10c93270 */
  push32(0x10c9e06au); f_10c93270();
  /* 10c9e06a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e06d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e06f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e072 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c9e075 push edx */
  push32((uint32_t)(EDX));
  /* 10c9e076 call 0x10c93270 */
  push32(0x10c9e07bu); f_10c93270();
  /* 10c9e07b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e07e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e083 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c9e086 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e087 call 0x10c93270 */
  push32(0x10c9e08cu); f_10c93270();
  /* 10c9e08c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e08f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e094 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10c9e097 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e098 call 0x10c93270 */
  push32(0x10c9e09du); f_10c93270();
  /* 10c9e09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e0a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e0a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e0a5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10c9e0a8 push edx */
  push32((uint32_t)(EDX));
  /* 10c9e0a9 call 0x10c93270 */
  push32(0x10c9e0aeu); f_10c93270();
  /* 10c9e0ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9e0b1:;
  /* 10c9e0b1 pop ebp */
  EBP = (pop32());
  /* 10c9e0b2 ret  */
  ESPCHK(0x10c9e020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0c0 @ 0x10c9e0c0 (928 bytes, 284 insns) */
void f_10c9e0c0(void) {
  FTRACE(0x10c9e0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9e0c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9e0c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9e0c6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10c9e0cd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10c9e0d4 cmp dword ptr [0x10cbe600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e0db je 0x10c9e411 */
  if (C.zf) goto L_10c9e411;
  /* 10c9e0e1 cmp dword ptr [0x10cbe610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e0e8 jne 0x10c9e110 */
  if (!C.zf) goto L_10c9e110;
  /* 10c9e0ea push 0x10cbe610 */
  push32((uint32_t)(0x10cbe610u));
  /* 10c9e0ef push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10c9e0f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e0f6 mov ax, word ptr [0x10cbe654] */
  AX = (r16((uint32_t)(0x10cbe654)));
  /* 10c9e0fc push eax */
  push32((uint32_t)(EAX));
  /* 10c9e0fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9e0ff call 0x10ca09a0 */
  push32(0x10c9e104u); f_10ca09a0();
  /* 10c9e104 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e107 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e109 je 0x10c9e110 */
  if (C.zf) goto L_10c9e110;
  /* 10c9e10b jmp 0x10c9e3d2 */
  goto L_10c9e3d2;
L_10c9e110:;
  /* 10c9e110 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10c9e112 push 0x10cb9ff4 */
  push32((uint32_t)(0x10cb9ff4u));
  /* 10c9e117 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e119 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10c9e11e call 0x10c927e0 */
  push32(0x10c9e123u); f_10c927e0();
  /* 10c9e123 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e126 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10c9e129 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10c9e12b push 0x10cb9ff4 */
  push32((uint32_t)(0x10cb9ff4u));
  /* 10c9e130 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e132 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10c9e137 call 0x10c927e0 */
  push32(0x10c9e13cu); f_10c927e0();
  /* 10c9e13c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e13f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c9e142 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10c9e144 push 0x10cb9ff4 */
  push32((uint32_t)(0x10cb9ff4u));
  /* 10c9e149 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e14b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10c9e150 call 0x10c927e0 */
  push32(0x10c9e155u); f_10c927e0();
  /* 10c9e155 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e158 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10c9e15b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10c9e15d push 0x10cb9ff4 */
  push32((uint32_t)(0x10cb9ff4u));
  /* 10c9e162 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e164 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10c9e169 call 0x10c927e0 */
  push32(0x10c9e16eu); f_10c927e0();
  /* 10c9e16e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e171 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c9e174 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e178 je 0x10c9e18c */
  if (C.zf) goto L_10c9e18c;
  /* 10c9e17a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e17e je 0x10c9e18c */
  if (C.zf) goto L_10c9e18c;
  /* 10c9e180 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e184 je 0x10c9e18c */
  if (C.zf) goto L_10c9e18c;
  /* 10c9e186 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e18a jne 0x10c9e191 */
  if (!C.zf) goto L_10c9e191;
L_10c9e18c:;
  /* 10c9e18c jmp 0x10c9e3d2 */
  goto L_10c9e3d2;
L_10c9e191:;
  /* 10c9e191 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9e194 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c9e197 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c9e19e jmp 0x10c9e1a9 */
  goto L_10c9e1a9;
L_10c9e1a0:;
  /* 10c9e1a0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9e1a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e1a6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10c9e1a9:;
  /* 10c9e1a9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e1b0 jge 0x10c9e1c5 */
  if ((C.sf==C.of)) goto L_10c9e1c5;
  /* 10c9e1b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e1b5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10c9e1b8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c9e1ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e1bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e1c0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c9e1c3 jmp 0x10c9e1a0 */
  goto L_10c9e1a0;
L_10c9e1c5:;
  /* 10c9e1c5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10c9e1c8 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e1c9 mov ecx, dword ptr [0x10cbe610] */
  ECX = (r32((uint32_t)(0x10cbe610)));
  /* 10c9e1cf push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e1d0 call dword ptr [0x10cc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02e4))), 0x10c9e1d6u);
  /* 10c9e1d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e1d8 jne 0x10c9e1df */
  if (!C.zf) goto L_10c9e1df;
  /* 10c9e1da jmp 0x10c9e3d2 */
  goto L_10c9e3d2;
L_10c9e1df:;
  /* 10c9e1df cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e1e3 jbe 0x10c9e1ea */
  if ((C.cf||C.zf)) goto L_10c9e1ea;
  /* 10c9e1e5 jmp 0x10c9e3d2 */
  goto L_10c9e3d2;
L_10c9e1ea:;
  /* 10c9e1ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9e1ed and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9e1f3 mov dword ptr [0x10cbcea4], edx */
  w32((uint32_t)(0x10cbcea4), (EDX));
  /* 10c9e1f9 cmp dword ptr [0x10cbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e200 jle 0x10c9e259 */
  if ((C.zf||C.sf!=C.of)) goto L_10c9e259;
  /* 10c9e202 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10c9e205 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c9e208 jmp 0x10c9e213 */
  goto L_10c9e213;
L_10c9e20a:;
  /* 10c9e20a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e20d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e210 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10c9e213:;
  /* 10c9e213 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e216 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e218 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c9e21a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e21c je 0x10c9e259 */
  if (C.zf) goto L_10c9e259;
  /* 10c9e21e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e221 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9e223 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c9e226 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9e228 je 0x10c9e259 */
  if (C.zf) goto L_10c9e259;
  /* 10c9e22a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e22d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9e22f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c9e231 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c9e234 jmp 0x10c9e23f */
  goto L_10c9e23f;
L_10c9e236:;
  /* 10c9e236 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9e239 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e23c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10c9e23f:;
  /* 10c9e23f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e242 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9e244 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c9e247 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e24a jg 0x10c9e257 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9e257;
  /* 10c9e24c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9e24f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e252 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c9e255 jmp 0x10c9e236 */
  goto L_10c9e236;
L_10c9e257:;
  /* 10c9e257 jmp 0x10c9e20a */
  goto L_10c9e20a;
L_10c9e259:;
  /* 10c9e259 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9e25b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9e25d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9e25f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9e262 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e265 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e266 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c9e26b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9e26e push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e26f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9e271 call 0x10c9aa10 */
  push32(0x10c9e276u); f_10c9aa10();
  /* 10c9e276 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e27b jne 0x10c9e282 */
  if (!C.zf) goto L_10c9e282;
  /* 10c9e27d jmp 0x10c9e3d2 */
  goto L_10c9e3d2;
L_10c9e282:;
  /* 10c9e282 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9e285 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10c9e28a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c9e28d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c9e290 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c9e297 jmp 0x10c9e2a2 */
  goto L_10c9e2a2;
L_10c9e299:;
  /* 10c9e299 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9e29c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e29f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c9e2a2:;
  /* 10c9e2a2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e2a9 jge 0x10c9e2c0 */
  if ((C.sf==C.of)) goto L_10c9e2c0;
  /* 10c9e2ab mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9e2ae mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10c9e2b2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10c9e2b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9e2b8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e2bb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c9e2be jmp 0x10c9e299 */
  goto L_10c9e299;
L_10c9e2c0:;
  /* 10c9e2c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9e2c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9e2c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9e2c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e2ca push edx */
  push32((uint32_t)(EDX));
  /* 10c9e2cb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c9e2d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c9e2d3 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e2d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9e2d6 call 0x10ca0c40 */
  push32(0x10c9e2dbu); f_10ca0c40();
  /* 10c9e2db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e2de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e2e0 jne 0x10c9e2e7 */
  if (!C.zf) goto L_10c9e2e7;
  /* 10c9e2e2 jmp 0x10c9e3d2 */
  goto L_10c9e3d2;
L_10c9e2e7:;
  /* 10c9e2e7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9e2ea mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10c9e2ef cmp dword ptr [0x10cbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e2f6 jle 0x10c9e353 */
  if ((C.zf||C.sf!=C.of)) goto L_10c9e353;
  /* 10c9e2f8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10c9e2fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c9e2fe jmp 0x10c9e309 */
  goto L_10c9e309;
L_10c9e300:;
  /* 10c9e300 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e303 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e306 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10c9e309:;
  /* 10c9e309 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e30c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9e30e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c9e310 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9e312 je 0x10c9e353 */
  if (C.zf) goto L_10c9e353;
  /* 10c9e314 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e317 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9e319 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c9e31c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9e31e je 0x10c9e353 */
  if (C.zf) goto L_10c9e353;
  /* 10c9e320 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e325 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c9e327 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c9e32a jmp 0x10c9e335 */
  goto L_10c9e335;
L_10c9e32c:;
  /* 10c9e32c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9e32f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e332 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c9e335:;
  /* 10c9e335 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9e338 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e33a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c9e33d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e340 jg 0x10c9e351 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9e351;
  /* 10c9e342 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c9e345 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9e348 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10c9e34f jmp 0x10c9e32c */
  goto L_10c9e32c;
L_10c9e351:;
  /* 10c9e351 jmp 0x10c9e300 */
  goto L_10c9e300;
L_10c9e353:;
  /* 10c9e353 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9e356 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e359 mov dword ptr [0x10cbcc98], eax */
  w32((uint32_t)(0x10cbcc98), (EAX));
  /* 10c9e35e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9e361 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e364 mov dword ptr [0x10cbcc9c], ecx */
  w32((uint32_t)(0x10cbcc9c), (ECX));
  /* 10c9e36a cmp dword ptr [0x10cbe640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e371 je 0x10c9e384 */
  if (C.zf) goto L_10c9e384;
  /* 10c9e373 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e375 mov edx, dword ptr [0x10cbe640] */
  EDX = (r32((uint32_t)(0x10cbe640)));
  /* 10c9e37b push edx */
  push32((uint32_t)(EDX));
  /* 10c9e37c call 0x10c93270 */
  push32(0x10c9e381u); f_10c93270();
  /* 10c9e381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9e384:;
  /* 10c9e384 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9e387 mov dword ptr [0x10cbe640], eax */
  w32((uint32_t)(0x10cbe640), (EAX));
  /* 10c9e38c cmp dword ptr [0x10cbe644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e393 je 0x10c9e3a6 */
  if (C.zf) goto L_10c9e3a6;
  /* 10c9e395 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e397 mov ecx, dword ptr [0x10cbe644] */
  ECX = (r32((uint32_t)(0x10cbe644)));
  /* 10c9e39d push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e39e call 0x10c93270 */
  push32(0x10c9e3a3u); f_10c93270();
  /* 10c9e3a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9e3a6:;
  /* 10c9e3a6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9e3a9 mov dword ptr [0x10cbe644], edx */
  w32((uint32_t)(0x10cbe644), (EDX));
  /* 10c9e3af push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e3b1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9e3b4 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e3b5 call 0x10c93270 */
  push32(0x10c9e3bau); f_10c93270();
  /* 10c9e3ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e3bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e3bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c9e3c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e3c3 call 0x10c93270 */
  push32(0x10c9e3c8u); f_10c93270();
  /* 10c9e3c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e3cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e3cd jmp 0x10c9e45c */
  goto L_10c9e45c;
L_10c9e3d2:;
  /* 10c9e3d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e3d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c9e3d7 push edx */
  push32((uint32_t)(EDX));
  /* 10c9e3d8 call 0x10c93270 */
  push32(0x10c9e3ddu); f_10c93270();
  /* 10c9e3dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e3e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e3e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c9e3e5 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e3e6 call 0x10c93270 */
  push32(0x10c9e3ebu); f_10c93270();
  /* 10c9e3eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e3ee push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e3f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c9e3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e3f4 call 0x10c93270 */
  push32(0x10c9e3f9u); f_10c93270();
  /* 10c9e3f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e3fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e3fe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c9e401 push edx */
  push32((uint32_t)(EDX));
  /* 10c9e402 call 0x10c93270 */
  push32(0x10c9e407u); f_10c93270();
  /* 10c9e407 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e40a mov eax, 1 */
  EAX = (0x1u);
  /* 10c9e40f jmp 0x10c9e45c */
  goto L_10c9e45c;
L_10c9e411:;
  /* 10c9e411 mov dword ptr [0x10cbcc98], 0x10cbcca2 */
  w32((uint32_t)(0x10cbcc98), (0x10cbcca2u));
  /* 10c9e41b mov dword ptr [0x10cbcc9c], 0x10cbcca2 */
  w32((uint32_t)(0x10cbcc9c), (0x10cbcca2u));
  /* 10c9e425 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e427 mov eax, dword ptr [0x10cbe640] */
  EAX = (r32((uint32_t)(0x10cbe640)));
  /* 10c9e42c push eax */
  push32((uint32_t)(EAX));
  /* 10c9e42d call 0x10c93270 */
  push32(0x10c9e432u); f_10c93270();
  /* 10c9e432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e435 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9e437 mov ecx, dword ptr [0x10cbe644] */
  ECX = (r32((uint32_t)(0x10cbe644)));
  /* 10c9e43d push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e43e call 0x10c93270 */
  push32(0x10c9e443u); f_10c93270();
  /* 10c9e443 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e446 mov dword ptr [0x10cbe640], 0 */
  w32((uint32_t)(0x10cbe640), (0x0u));
  /* 10c9e450 mov dword ptr [0x10cbe644], 0 */
  w32((uint32_t)(0x10cbe644), (0x0u));
  /* 10c9e45a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9e45c:;
  /* 10c9e45c mov esp, ebp */
  ESP = (EBP);
  /* 10c9e45e pop ebp */
  EBP = (pop32());
  /* 10c9e45f ret  */
  ESPCHK(0x10c9e0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e460 @ 0x10c9e460 (7 bytes, 5 insns) */
void f_10c9e460(void) {
  FTRACE(0x10c9e460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e460 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9e461 mov ebp, esp */
  EBP = (ESP);
  /* 10c9e463 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e465 pop ebp */
  EBP = (pop32());
  /* 10c9e466 ret  */
  ESPCHK(0x10c9e460u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10c9e470 (129 bytes, 56 insns) */
void f_10c9e470(void) {
  FTRACE(0x10c9e470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e470 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c9e474 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c9e478 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10c9e47e jne 0x10c9e4bc */
  if (!C.zf) goto L_10c9e4bc;
L_10c9e480:;
  /* 10c9e480 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c9e482 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c9e484 jne 0x10c9e4b4 */
  if (!C.zf) goto L_10c9e4b4;
  /* 10c9e486 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c9e488 je 0x10c9e4b0 */
  if (C.zf) goto L_10c9e4b0;
  /* 10c9e48a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c9e48d jne 0x10c9e4b4 */
  if (!C.zf) goto L_10c9e4b4;
  /* 10c9e48f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c9e491 je 0x10c9e4b0 */
  if (C.zf) goto L_10c9e4b0;
  /* 10c9e493 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c9e496 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c9e499 jne 0x10c9e4b4 */
  if (!C.zf) goto L_10c9e4b4;
  /* 10c9e49b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c9e49d je 0x10c9e4b0 */
  if (C.zf) goto L_10c9e4b0;
  /* 10c9e49f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c9e4a2 jne 0x10c9e4b4 */
  if (!C.zf) goto L_10c9e4b4;
  /* 10c9e4a4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e4a7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e4aa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c9e4ac jne 0x10c9e480 */
  if (!C.zf) goto L_10c9e480;
  /* 10c9e4ae mov edi, edi */
  EDI = (EDI);
L_10c9e4b0:;
  /* 10c9e4b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e4b2 ret  */
  ESPCHK(0x10c9e470u, _esp0);
  ESP += 4; return;
  /* 10c9e4b3 nop  */
  /* nop */
L_10c9e4b4:;
  /* 10c9e4b4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9e4b6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c9e4b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10c9e4b9 ret  */
  ESPCHK(0x10c9e470u, _esp0);
  ESP += 4; return;
  /* 10c9e4ba mov edi, edi */
  EDI = (EDI);
L_10c9e4bc:;
  /* 10c9e4bc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10c9e4c2 je 0x10c9e4d8 */
  if (C.zf) goto L_10c9e4d8;
  /* 10c9e4c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c9e4c6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c9e4c7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c9e4c9 jne 0x10c9e4b4 */
  if (!C.zf) goto L_10c9e4b4;
  /* 10c9e4cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c9e4cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c9e4ce je 0x10c9e4b0 */
  if (C.zf) goto L_10c9e4b0;
  /* 10c9e4d0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10c9e4d6 je 0x10c9e480 */
  if (C.zf) goto L_10c9e480;
L_10c9e4d8:;
  /* 10c9e4d8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10c9e4db add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e4de cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c9e4e0 jne 0x10c9e4b4 */
  if (!C.zf) goto L_10c9e4b4;
  /* 10c9e4e2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c9e4e4 je 0x10c9e4b0 */
  if (C.zf) goto L_10c9e4b0;
  /* 10c9e4e6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c9e4e9 jne 0x10c9e4b4 */
  if (!C.zf) goto L_10c9e4b4;
  /* 10c9e4eb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c9e4ed je 0x10c9e4b0 */
  if (C.zf) goto L_10c9e4b0;
  /* 10c9e4ef add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e4f2 jmp 0x10c9e480 */
  goto L_10c9e480;
}

/* FUN_1000e500 @ 0x10c9e500 (62 bytes, 35 insns) */
void f_10c9e500(void) {
  FTRACE(0x10c9e500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e500 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9e501 mov ebp, esp */
  EBP = (ESP);
  /* 10c9e503 push esi */
  push32((uint32_t)(ESI));
  /* 10c9e504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e506 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e507 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e508 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e509 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e50a push eax */
  push32((uint32_t)(EAX));
  /* 10c9e50b push eax */
  push32((uint32_t)(EAX));
  /* 10c9e50c push eax */
  push32((uint32_t)(EAX));
  /* 10c9e50d push eax */
  push32((uint32_t)(EAX));
  /* 10c9e50e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9e511 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c9e514:;
  /* 10c9e514 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c9e516 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c9e518 je 0x10c9e521 */
  if (C.zf) goto L_10c9e521;
  /* 10c9e51a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c9e51b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10c9e51b");
  /* 10c9e51f jmp 0x10c9e514 */
  goto L_10c9e514;
L_10c9e521:;
  /* 10c9e521 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e524 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9e527 nop  */
  /* nop */
L_10c9e528:;
  /* 10c9e528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c9e529 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c9e52b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c9e52d je 0x10c9e536 */
  if (C.zf) goto L_10c9e536;
  /* 10c9e52f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c9e530 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10c9e530");
  /* 10c9e534 jae 0x10c9e528 */
  if (!C.cf) goto L_10c9e528;
L_10c9e536:;
  /* 10c9e536 mov eax, ecx */
  EAX = (ECX);
  /* 10c9e538 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e53b pop esi */
  ESI = (pop32());
  /* 10c9e53c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9e53d ret  */
  ESPCHK(0x10c9e500u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10c9e540 (56 bytes, 31 insns) */
void f_10c9e540(void) {
  FTRACE(0x10c9e540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e540 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9e541 mov ebp, esp */
  EBP = (ESP);
  /* 10c9e543 push edi */
  push32((uint32_t)(EDI));
  /* 10c9e544 push esi */
  push32((uint32_t)(ESI));
  /* 10c9e545 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9e546 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9e549 jecxz 0x10c9e571 */
  x86_unimpl("jecxz @ 0x10c9e549");
  /* 10c9e54b mov ebx, ecx */
  EBX = (ECX);
  /* 10c9e54d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e550 mov esi, edi */
  ESI = (EDI);
  /* 10c9e552 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e554 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10c9e556 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9e558 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e55a mov edi, esi */
  EDI = (ESI);
  /* 10c9e55c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9e55f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10c9e561 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10c9e564 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9e566 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c9e569 ja 0x10c9e56f */
  if ((!C.cf&&!C.zf)) goto L_10c9e56f;
  /* 10c9e56b je 0x10c9e571 */
  if (C.zf) goto L_10c9e571;
  /* 10c9e56d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c9e56e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10c9e56f:;
  /* 10c9e56f not ecx */
  ECX = (~(ECX));
L_10c9e571:;
  /* 10c9e571 mov eax, ecx */
  EAX = (ECX);
  /* 10c9e573 pop ebx */
  EBX = (pop32());
  /* 10c9e574 pop esi */
  ESI = (pop32());
  /* 10c9e575 pop edi */
  EDI = (pop32());
  /* 10c9e576 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9e577 ret  */
  ESPCHK(0x10c9e540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e580 @ 0x10c9e580 (58 bytes, 32 insns) */
void f_10c9e580(void) {
  FTRACE(0x10c9e580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e580 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9e581 mov ebp, esp */
  EBP = (ESP);
  /* 10c9e583 push esi */
  push32((uint32_t)(ESI));
  /* 10c9e584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e586 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e587 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e588 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e589 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e58a push eax */
  push32((uint32_t)(EAX));
  /* 10c9e58b push eax */
  push32((uint32_t)(EAX));
  /* 10c9e58c push eax */
  push32((uint32_t)(EAX));
  /* 10c9e58d push eax */
  push32((uint32_t)(EAX));
  /* 10c9e58e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9e591 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c9e594:;
  /* 10c9e594 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c9e596 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c9e598 je 0x10c9e5a1 */
  if (C.zf) goto L_10c9e5a1;
  /* 10c9e59a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c9e59b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10c9e59b");
  /* 10c9e59f jmp 0x10c9e594 */
  goto L_10c9e594;
L_10c9e5a1:;
  /* 10c9e5a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10c9e5a4:;
  /* 10c9e5a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c9e5a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c9e5a8 je 0x10c9e5b4 */
  if (C.zf) goto L_10c9e5b4;
  /* 10c9e5aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c9e5ab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10c9e5ab");
  /* 10c9e5af jae 0x10c9e5a4 */
  if (!C.cf) goto L_10c9e5a4;
  /* 10c9e5b1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10c9e5b4:;
  /* 10c9e5b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e5b7 pop esi */
  ESI = (pop32());
  /* 10c9e5b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c9e5b9 ret  */
  ESPCHK(0x10c9e580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5c0 @ 0x10c9e5c0 (512 bytes, 147 insns) */
void f_10c9e5c0(void) {
  FTRACE(0x10c9e5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9e5c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9e5c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9e5c6 cmp dword ptr [0x10cbe68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e5cd jne 0x10c9e5f2 */
  if (!C.zf) goto L_10c9e5f2;
  /* 10c9e5cf call 0x10c9f090 */
  push32(0x10c9e5d4u); f_10c9f090();
  /* 10c9e5d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e5d6 je 0x10c9e5e2 */
  if (C.zf) goto L_10c9e5e2;
  /* 10c9e5d8 mov eax, dword ptr [0x10cc0320] */
  EAX = (r32((uint32_t)(0x10cc0320)));
  /* 10c9e5dd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9e5e0 jmp 0x10c9e5e9 */
  goto L_10c9e5e9;
L_10c9e5e2:;
  /* 10c9e5e2 mov dword ptr [ebp - 8], 0x10c9f0e0 */
  w32((uint32_t)(EBP + -0x8), (0x10c9f0e0u));
L_10c9e5e9:;
  /* 10c9e5e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9e5ec mov dword ptr [0x10cbe68c], ecx */
  w32((uint32_t)(0x10cbe68c), (ECX));
L_10c9e5f2:;
  /* 10c9e5f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e5f6 jne 0x10c9e602 */
  if (!C.zf) goto L_10c9e602;
  /* 10c9e5f8 call 0x10c9eee0 */
  push32(0x10c9e5fdu); f_10c9eee0();
  /* 10c9e5fd jmp 0x10c9e6ce */
  goto L_10c9e6ce;
L_10c9e602:;
  /* 10c9e602 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e605 mov dword ptr [0x10cbe67c], edx */
  w32((uint32_t)(0x10cbe67c), (EDX));
  /* 10c9e60b cmp dword ptr [0x10cbe67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e612 je 0x10c9e634 */
  if (C.zf) goto L_10c9e634;
  /* 10c9e614 mov eax, dword ptr [0x10cbe67c] */
  EAX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9e619 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9e61c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9e61e je 0x10c9e634 */
  if (C.zf) goto L_10c9e634;
  /* 10c9e620 push 0x10cbe67c */
  push32((uint32_t)(0x10cbe67cu));
  /* 10c9e625 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c9e627 push 0x10cbda90 */
  push32((uint32_t)(0x10cbda90u));
  /* 10c9e62c call 0x10c9e7c0 */
  push32(0x10c9e631u); f_10c9e7c0();
  /* 10c9e631 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9e634:;
  /* 10c9e634 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e637 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e63a mov dword ptr [0x10cbe680], edx */
  w32((uint32_t)(0x10cbe680), (EDX));
  /* 10c9e640 cmp dword ptr [0x10cbe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e647 je 0x10c9e669 */
  if (C.zf) goto L_10c9e669;
  /* 10c9e649 mov eax, dword ptr [0x10cbe680] */
  EAX = (r32((uint32_t)(0x10cbe680)));
  /* 10c9e64e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9e651 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9e653 je 0x10c9e669 */
  if (C.zf) goto L_10c9e669;
  /* 10c9e655 push 0x10cbe680 */
  push32((uint32_t)(0x10cbe680u));
  /* 10c9e65a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10c9e65c push 0x10cbd9d8 */
  push32((uint32_t)(0x10cbd9d8u));
  /* 10c9e661 call 0x10c9e7c0 */
  push32(0x10c9e666u); f_10c9e7c0();
  /* 10c9e666 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9e669:;
  /* 10c9e669 mov dword ptr [0x10cbe684], 0 */
  w32((uint32_t)(0x10cbe684), (0x0u));
  /* 10c9e673 cmp dword ptr [0x10cbe67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e67a je 0x10c9e6ad */
  if (C.zf) goto L_10c9e6ad;
  /* 10c9e67c mov edx, dword ptr [0x10cbe67c] */
  EDX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9e682 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c9e685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e687 je 0x10c9e6ad */
  if (C.zf) goto L_10c9e6ad;
  /* 10c9e689 cmp dword ptr [0x10cbe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e690 je 0x10c9e6a6 */
  if (C.zf) goto L_10c9e6a6;
  /* 10c9e692 mov ecx, dword ptr [0x10cbe680] */
  ECX = (r32((uint32_t)(0x10cbe680)));
  /* 10c9e698 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c9e69b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9e69d je 0x10c9e6a6 */
  if (C.zf) goto L_10c9e6a6;
  /* 10c9e69f call 0x10c9e850 */
  push32(0x10c9e6a4u); f_10c9e850();
  /* 10c9e6a4 jmp 0x10c9e6ab */
  goto L_10c9e6ab;
L_10c9e6a6:;
  /* 10c9e6a6 call 0x10c9ec40 */
  push32(0x10c9e6abu); f_10c9ec40();
L_10c9e6ab:;
  /* 10c9e6ab jmp 0x10c9e6ce */
  goto L_10c9e6ce;
L_10c9e6ad:;
  /* 10c9e6ad cmp dword ptr [0x10cbe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e6b4 je 0x10c9e6c9 */
  if (C.zf) goto L_10c9e6c9;
  /* 10c9e6b6 mov eax, dword ptr [0x10cbe680] */
  EAX = (r32((uint32_t)(0x10cbe680)));
  /* 10c9e6bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9e6be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9e6c0 je 0x10c9e6c9 */
  if (C.zf) goto L_10c9e6c9;
  /* 10c9e6c2 call 0x10c9ede0 */
  push32(0x10c9e6c7u); f_10c9ede0();
  /* 10c9e6c7 jmp 0x10c9e6ce */
  goto L_10c9e6ce;
L_10c9e6c9:;
  /* 10c9e6c9 call 0x10c9eee0 */
  push32(0x10c9e6ceu); f_10c9eee0();
L_10c9e6ce:;
  /* 10c9e6ce cmp dword ptr [0x10cbe684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e6d5 jne 0x10c9e6de */
  if (!C.zf) goto L_10c9e6de;
  /* 10c9e6d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e6d9 jmp 0x10c9e7bc */
  goto L_10c9e7bc;
L_10c9e6de:;
  /* 10c9e6de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e6e1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e6e7 push edx */
  push32((uint32_t)(EDX));
  /* 10c9e6e8 call 0x10c9ef10 */
  push32(0x10c9e6edu); f_10c9ef10();
  /* 10c9e6ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e6f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9e6f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e6f7 je 0x10c9e70c */
  if (C.zf) goto L_10c9e70c;
  /* 10c9e6f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9e6fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e701 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e702 call dword ptr [0x10cc031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc031c))), 0x10c9e708u);
  /* 10c9e708 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e70a jne 0x10c9e713 */
  if (!C.zf) goto L_10c9e713;
L_10c9e70c:;
  /* 10c9e70c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e70e jmp 0x10c9e7bc */
  goto L_10c9e7bc;
L_10c9e713:;
  /* 10c9e713 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9e715 mov ecx, dword ptr [0x10cbe66c] */
  ECX = (r32((uint32_t)(0x10cbe66c)));
  /* 10c9e71b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e71c call dword ptr [0x10cc0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0318))), 0x10c9e722u);
  /* 10c9e722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e724 jne 0x10c9e72d */
  if (!C.zf) goto L_10c9e72d;
  /* 10c9e726 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e728 jmp 0x10c9e7bc */
  goto L_10c9e7bc;
L_10c9e72d:;
  /* 10c9e72d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e731 je 0x10c9e758 */
  if (C.zf) goto L_10c9e758;
  /* 10c9e733 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9e736 mov ax, word ptr [0x10cbe66c] */
  AX = (r16((uint32_t)(0x10cbe66c)));
  /* 10c9e73c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10c9e73f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9e742 mov dx, word ptr [0x10cbe688] */
  DX = (r16((uint32_t)(0x10cbe688)));
  /* 10c9e749 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10c9e74d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9e750 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10c9e754 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10c9e758:;
  /* 10c9e758 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e75c je 0x10c9e7b7 */
  if (C.zf) goto L_10c9e7b7;
  /* 10c9e75e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c9e760 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9e763 push edx */
  push32((uint32_t)(EDX));
  /* 10c9e764 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10c9e769 mov eax, dword ptr [0x10cbe66c] */
  EAX = (r32((uint32_t)(0x10cbe66c)));
  /* 10c9e76e push eax */
  push32((uint32_t)(EAX));
  /* 10c9e76f call dword ptr [0x10cbe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe68c))), 0x10c9e775u);
  /* 10c9e775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e777 jne 0x10c9e77d */
  if (!C.zf) goto L_10c9e77d;
  /* 10c9e779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e77b jmp 0x10c9e7bc */
  goto L_10c9e7bc;
L_10c9e77d:;
  /* 10c9e77d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c9e77f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9e782 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e785 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e786 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10c9e78b mov edx, dword ptr [0x10cbe688] */
  EDX = (r32((uint32_t)(0x10cbe688)));
  /* 10c9e791 push edx */
  push32((uint32_t)(EDX));
  /* 10c9e792 call dword ptr [0x10cbe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe68c))), 0x10c9e798u);
  /* 10c9e798 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e79a jne 0x10c9e7a0 */
  if (!C.zf) goto L_10c9e7a0;
  /* 10c9e79c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e79e jmp 0x10c9e7bc */
  goto L_10c9e7bc;
L_10c9e7a0:;
  /* 10c9e7a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10c9e7a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9e7a5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e7aa push eax */
  push32((uint32_t)(EAX));
  /* 10c9e7ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9e7ae push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e7af call 0x10c95320 */
  push32(0x10c9e7b4u); f_10c95320();
  /* 10c9e7b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9e7b7:;
  /* 10c9e7b7 mov eax, 1 */
  EAX = (0x1u);
L_10c9e7bc:;
  /* 10c9e7bc mov esp, ebp */
  ESP = (EBP);
  /* 10c9e7be pop ebp */
  EBP = (pop32());
  /* 10c9e7bf ret  */
  ESPCHK(0x10c9e5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7c0 @ 0x10c9e7c0 (130 bytes, 47 insns) */
void f_10c9e7c0(void) {
  FTRACE(0x10c9e7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9e7c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9e7c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9e7c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c9e7cd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10c9e7d4:;
  /* 10c9e7d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9e7d7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e7da jg 0x10c9e83e */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9e83e;
  /* 10c9e7dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e7e0 je 0x10c9e83e */
  if (C.zf) goto L_10c9e83e;
  /* 10c9e7e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9e7e5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e7e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c9e7e9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9e7eb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c9e7ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9e7f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9e7f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e7f6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10c9e7f9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e7fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9e7fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9e7ff push edx */
  push32((uint32_t)(EDX));
  /* 10c9e800 call 0x10ca0eb0 */
  push32(0x10c9e805u); f_10ca0eb0();
  /* 10c9e805 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e808 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9e80b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e80f jne 0x10c9e822 */
  if (!C.zf) goto L_10c9e822;
  /* 10c9e811 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9e814 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e817 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10c9e81b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9e81e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c9e820 jmp 0x10c9e83c */
  goto L_10c9e83c;
L_10c9e822:;
  /* 10c9e822 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e826 jge 0x10c9e833 */
  if ((C.sf==C.of)) goto L_10c9e833;
  /* 10c9e828 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9e82b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9e82e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c9e831 jmp 0x10c9e83c */
  goto L_10c9e83c;
L_10c9e833:;
  /* 10c9e833 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9e836 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e839 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c9e83c:;
  /* 10c9e83c jmp 0x10c9e7d4 */
  goto L_10c9e7d4;
L_10c9e83e:;
  /* 10c9e83e mov esp, ebp */
  ESP = (EBP);
  /* 10c9e840 pop ebp */
  EBP = (pop32());
  /* 10c9e841 ret  */
  ESPCHK(0x10c9e7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e850 @ 0x10c9e850 (186 bytes, 50 insns) */
void f_10c9e850(void) {
  FTRACE(0x10c9e850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e850 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9e851 mov ebp, esp */
  EBP = (ESP);
  /* 10c9e853 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e854 mov eax, dword ptr [0x10cbe67c] */
  EAX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9e859 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e85a call 0x10c95610 */
  push32(0x10c9e85fu); f_10c95610();
  /* 10c9e85f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e862 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9e864 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e867 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c9e86a mov dword ptr [0x10cbe678], ecx */
  w32((uint32_t)(0x10cbe678), (ECX));
  /* 10c9e870 mov edx, dword ptr [0x10cbe680] */
  EDX = (r32((uint32_t)(0x10cbe680)));
  /* 10c9e876 push edx */
  push32((uint32_t)(EDX));
  /* 10c9e877 call 0x10c95610 */
  push32(0x10c9e87cu); f_10c95610();
  /* 10c9e87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e87f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9e881 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e884 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c9e887 mov dword ptr [0x10cbe670], ecx */
  w32((uint32_t)(0x10cbe670), (ECX));
  /* 10c9e88d mov dword ptr [0x10cbe66c], 0 */
  w32((uint32_t)(0x10cbe66c), (0x0u));
  /* 10c9e897 cmp dword ptr [0x10cbe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9e89e je 0x10c9e8a9 */
  if (C.zf) goto L_10c9e8a9;
  /* 10c9e8a0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c9e8a7 jmp 0x10c9e8bb */
  goto L_10c9e8bb;
L_10c9e8a9:;
  /* 10c9e8a9 mov edx, dword ptr [0x10cbe67c] */
  EDX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9e8af push edx */
  push32((uint32_t)(EDX));
  /* 10c9e8b0 call 0x10c9f2f0 */
  push32(0x10c9e8b5u); f_10c9f2f0();
  /* 10c9e8b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e8b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9e8bb:;
  /* 10c9e8bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9e8be mov dword ptr [0x10cbe674], eax */
  w32((uint32_t)(0x10cbe674), (EAX));
  /* 10c9e8c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9e8c5 push 0x10c9e910 */
  push32((uint32_t)(0x10c9e910u));
  /* 10c9e8ca call dword ptr [0x10cc0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0324))), 0x10c9e8d0u);
  /* 10c9e8d0 mov ecx, dword ptr [0x10cbe684] */
  ECX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9e8d6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9e8dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9e8de je 0x10c9e8fc */
  if (C.zf) goto L_10c9e8fc;
  /* 10c9e8e0 mov edx, dword ptr [0x10cbe684] */
  EDX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9e8e6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9e8ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9e8ee je 0x10c9e8fc */
  if (C.zf) goto L_10c9e8fc;
  /* 10c9e8f0 mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9e8f5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9e8f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e8fa jne 0x10c9e906 */
  if (!C.zf) goto L_10c9e906;
L_10c9e8fc:;
  /* 10c9e8fc mov dword ptr [0x10cbe684], 0 */
  w32((uint32_t)(0x10cbe684), (0x0u));
L_10c9e906:;
  /* 10c9e906 mov esp, ebp */
  ESP = (EBP);
  /* 10c9e908 pop ebp */
  EBP = (pop32());
  /* 10c9e909 ret  */
  ESPCHK(0x10c9e850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e910 @ 0x10c9e910 (804 bytes, 220 insns) */
void f_10c9e910(void) {
  FTRACE(0x10c9e910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9e910 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9e911 mov ebp, esp */
  EBP = (ESP);
  /* 10c9e913 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9e916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9e919 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e91a call 0x10c9f270 */
  push32(0x10c9e91fu); f_10c9f270();
  /* 10c9e91f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e922 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10c9e925 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c9e927 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c9e92a push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e92b mov edx, dword ptr [0x10cbe670] */
  EDX = (r32((uint32_t)(0x10cbe670)));
  /* 10c9e931 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9e933 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9e935 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9e93b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e941 push edx */
  push32((uint32_t)(EDX));
  /* 10c9e942 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9e945 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e946 call dword ptr [0x10cbe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe68c))), 0x10c9e94cu);
  /* 10c9e94c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e94e jne 0x10c9e964 */
  if (!C.zf) goto L_10c9e964;
  /* 10c9e950 mov dword ptr [0x10cbe684], 0 */
  w32((uint32_t)(0x10cbe684), (0x0u));
  /* 10c9e95a mov eax, 1 */
  EAX = (0x1u);
  /* 10c9e95f jmp 0x10c9ec2e */
  goto L_10c9ec2e;
L_10c9e964:;
  /* 10c9e964 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c9e967 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e968 mov edx, dword ptr [0x10cbe680] */
  EDX = (r32((uint32_t)(0x10cbe680)));
  /* 10c9e96e push edx */
  push32((uint32_t)(EDX));
  /* 10c9e96f call 0x10ca0eb0 */
  push32(0x10c9e974u); f_10ca0eb0();
  /* 10c9e974 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e979 jne 0x10c9ea9f */
  if (!C.zf) goto L_10c9ea9f;
  /* 10c9e97f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c9e981 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c9e984 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e985 mov ecx, dword ptr [0x10cbe678] */
  ECX = (r32((uint32_t)(0x10cbe678)));
  /* 10c9e98b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9e98d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9e98f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9e995 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e99b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e99c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9e99f push edx */
  push32((uint32_t)(EDX));
  /* 10c9e9a0 call dword ptr [0x10cbe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe68c))), 0x10c9e9a6u);
  /* 10c9e9a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e9a8 jne 0x10c9e9be */
  if (!C.zf) goto L_10c9e9be;
  /* 10c9e9aa mov dword ptr [0x10cbe684], 0 */
  w32((uint32_t)(0x10cbe684), (0x0u));
  /* 10c9e9b4 mov eax, 1 */
  EAX = (0x1u);
  /* 10c9e9b9 jmp 0x10c9ec2e */
  goto L_10c9ec2e;
L_10c9e9be:;
  /* 10c9e9be lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c9e9c1 push eax */
  push32((uint32_t)(EAX));
  /* 10c9e9c2 mov ecx, dword ptr [0x10cbe67c] */
  ECX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9e9c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9e9c9 call 0x10ca0eb0 */
  push32(0x10c9e9ceu); f_10ca0eb0();
  /* 10c9e9ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9e9d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9e9d3 jne 0x10c9ea00 */
  if (!C.zf) goto L_10c9ea00;
  /* 10c9e9d5 mov edx, dword ptr [0x10cbe684] */
  EDX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9e9db or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9e9e1 mov dword ptr [0x10cbe684], edx */
  w32((uint32_t)(0x10cbe684), (EDX));
  /* 10c9e9e7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9e9ea mov dword ptr [0x10cbe688], eax */
  w32((uint32_t)(0x10cbe688), (EAX));
  /* 10c9e9ef mov ecx, dword ptr [0x10cbe688] */
  ECX = (r32((uint32_t)(0x10cbe688)));
  /* 10c9e9f5 mov dword ptr [0x10cbe66c], ecx */
  w32((uint32_t)(0x10cbe66c), (ECX));
  /* 10c9e9fb jmp 0x10c9ea9f */
  goto L_10c9ea9f;
L_10c9ea00:;
  /* 10c9ea00 mov edx, dword ptr [0x10cbe684] */
  EDX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9ea06 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9ea09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9ea0b jne 0x10c9ea9f */
  if (!C.zf) goto L_10c9ea9f;
  /* 10c9ea11 cmp dword ptr [0x10cbe674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ea18 je 0x10c9ea6d */
  if (C.zf) goto L_10c9ea6d;
  /* 10c9ea1a mov eax, dword ptr [0x10cbe674] */
  EAX = (r32((uint32_t)(0x10cbe674)));
  /* 10c9ea1f push eax */
  push32((uint32_t)(EAX));
  /* 10c9ea20 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c9ea23 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ea24 mov edx, dword ptr [0x10cbe67c] */
  EDX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9ea2a push edx */
  push32((uint32_t)(EDX));
  /* 10c9ea2b call 0x10ca0f80 */
  push32(0x10c9ea30u); f_10ca0f80();
  /* 10c9ea30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ea33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ea35 jne 0x10c9ea6d */
  if (!C.zf) goto L_10c9ea6d;
  /* 10c9ea37 mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9ea3c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10c9ea3e mov dword ptr [0x10cbe684], eax */
  w32((uint32_t)(0x10cbe684), (EAX));
  /* 10c9ea43 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ea46 mov dword ptr [0x10cbe688], ecx */
  w32((uint32_t)(0x10cbe688), (ECX));
  /* 10c9ea4c mov edx, dword ptr [0x10cbe67c] */
  EDX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9ea52 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ea53 call 0x10c95610 */
  push32(0x10c9ea58u); f_10c95610();
  /* 10c9ea58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ea5b cmp eax, dword ptr [0x10cbe674] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbe674))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ea61 jne 0x10c9ea6b */
  if (!C.zf) goto L_10c9ea6b;
  /* 10c9ea63 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ea66 mov dword ptr [0x10cbe66c], eax */
  w32((uint32_t)(0x10cbe66c), (EAX));
L_10c9ea6b:;
  /* 10c9ea6b jmp 0x10c9ea9f */
  goto L_10c9ea9f;
L_10c9ea6d:;
  /* 10c9ea6d mov ecx, dword ptr [0x10cbe684] */
  ECX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9ea73 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9ea76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9ea78 jne 0x10c9ea9f */
  if (!C.zf) goto L_10c9ea9f;
  /* 10c9ea7a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ea7d push edx */
  push32((uint32_t)(EDX));
  /* 10c9ea7e call 0x10c9efb0 */
  push32(0x10c9ea83u); f_10c9efb0();
  /* 10c9ea83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ea86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ea88 je 0x10c9ea9f */
  if (C.zf) goto L_10c9ea9f;
  /* 10c9ea8a mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9ea8f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10c9ea91 mov dword ptr [0x10cbe684], eax */
  w32((uint32_t)(0x10cbe684), (EAX));
  /* 10c9ea96 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ea99 mov dword ptr [0x10cbe688], ecx */
  w32((uint32_t)(0x10cbe688), (ECX));
L_10c9ea9f:;
  /* 10c9ea9f mov edx, dword ptr [0x10cbe684] */
  EDX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9eaa5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9eaab cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9eab1 je 0x10c9ec21 */
  if (C.zf) goto L_10c9ec21;
  /* 10c9eab7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c9eab9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c9eabc push eax */
  push32((uint32_t)(EAX));
  /* 10c9eabd mov ecx, dword ptr [0x10cbe678] */
  ECX = (r32((uint32_t)(0x10cbe678)));
  /* 10c9eac3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9eac5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9eac7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9eacd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ead3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ead4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ead7 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ead8 call dword ptr [0x10cbe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe68c))), 0x10c9eadeu);
  /* 10c9eade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9eae0 jne 0x10c9eaf6 */
  if (!C.zf) goto L_10c9eaf6;
  /* 10c9eae2 mov dword ptr [0x10cbe684], 0 */
  w32((uint32_t)(0x10cbe684), (0x0u));
  /* 10c9eaec mov eax, 1 */
  EAX = (0x1u);
  /* 10c9eaf1 jmp 0x10c9ec2e */
  goto L_10c9ec2e;
L_10c9eaf6:;
  /* 10c9eaf6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c9eaf9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9eafa mov ecx, dword ptr [0x10cbe67c] */
  ECX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9eb00 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9eb01 call 0x10ca0eb0 */
  push32(0x10c9eb06u); f_10ca0eb0();
  /* 10c9eb06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9eb09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9eb0b jne 0x10c9ebc0 */
  if (!C.zf) goto L_10c9ebc0;
  /* 10c9eb11 mov edx, dword ptr [0x10cbe684] */
  EDX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9eb17 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c9eb1a mov dword ptr [0x10cbe684], edx */
  w32((uint32_t)(0x10cbe684), (EDX));
  /* 10c9eb20 cmp dword ptr [0x10cbe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9eb27 je 0x10c9eb4a */
  if (C.zf) goto L_10c9eb4a;
  /* 10c9eb29 mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9eb2e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10c9eb31 mov dword ptr [0x10cbe684], eax */
  w32((uint32_t)(0x10cbe684), (EAX));
  /* 10c9eb36 cmp dword ptr [0x10cbe66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9eb3d jne 0x10c9eb48 */
  if (!C.zf) goto L_10c9eb48;
  /* 10c9eb3f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9eb42 mov dword ptr [0x10cbe66c], ecx */
  w32((uint32_t)(0x10cbe66c), (ECX));
L_10c9eb48:;
  /* 10c9eb48 jmp 0x10c9ebbe */
  goto L_10c9ebbe;
L_10c9eb4a:;
  /* 10c9eb4a cmp dword ptr [0x10cbe674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9eb51 je 0x10c9eb9f */
  if (C.zf) goto L_10c9eb9f;
  /* 10c9eb53 mov edx, dword ptr [0x10cbe67c] */
  EDX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9eb59 push edx */
  push32((uint32_t)(EDX));
  /* 10c9eb5a call 0x10c95610 */
  push32(0x10c9eb5fu); f_10c95610();
  /* 10c9eb5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9eb62 cmp eax, dword ptr [0x10cbe674] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbe674))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9eb68 jne 0x10c9eb9f */
  if (!C.zf) goto L_10c9eb9f;
  /* 10c9eb6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9eb6c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9eb6f push eax */
  push32((uint32_t)(EAX));
  /* 10c9eb70 call 0x10c9f000 */
  push32(0x10c9eb75u); f_10c9f000();
  /* 10c9eb75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9eb78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9eb7a je 0x10c9eb9d */
  if (C.zf) goto L_10c9eb9d;
  /* 10c9eb7c mov ecx, dword ptr [0x10cbe684] */
  ECX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9eb82 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c9eb85 mov dword ptr [0x10cbe684], ecx */
  w32((uint32_t)(0x10cbe684), (ECX));
  /* 10c9eb8b cmp dword ptr [0x10cbe66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9eb92 jne 0x10c9eb9d */
  if (!C.zf) goto L_10c9eb9d;
  /* 10c9eb94 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9eb97 mov dword ptr [0x10cbe66c], edx */
  w32((uint32_t)(0x10cbe66c), (EDX));
L_10c9eb9d:;
  /* 10c9eb9d jmp 0x10c9ebbe */
  goto L_10c9ebbe;
L_10c9eb9f:;
  /* 10c9eb9f mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9eba4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10c9eba7 mov dword ptr [0x10cbe684], eax */
  w32((uint32_t)(0x10cbe684), (EAX));
  /* 10c9ebac cmp dword ptr [0x10cbe66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ebb3 jne 0x10c9ebbe */
  if (!C.zf) goto L_10c9ebbe;
  /* 10c9ebb5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ebb8 mov dword ptr [0x10cbe66c], ecx */
  w32((uint32_t)(0x10cbe66c), (ECX));
L_10c9ebbe:;
  /* 10c9ebbe jmp 0x10c9ec21 */
  goto L_10c9ec21;
L_10c9ebc0:;
  /* 10c9ebc0 cmp dword ptr [0x10cbe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ebc7 jne 0x10c9ec21 */
  if (!C.zf) goto L_10c9ec21;
  /* 10c9ebc9 cmp dword ptr [0x10cbe674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ebd0 je 0x10c9ec21 */
  if (C.zf) goto L_10c9ec21;
  /* 10c9ebd2 mov edx, dword ptr [0x10cbe674] */
  EDX = (r32((uint32_t)(0x10cbe674)));
  /* 10c9ebd8 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ebd9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c9ebdc push eax */
  push32((uint32_t)(EAX));
  /* 10c9ebdd mov ecx, dword ptr [0x10cbe67c] */
  ECX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9ebe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ebe4 call 0x10ca0f80 */
  push32(0x10c9ebe9u); f_10ca0f80();
  /* 10c9ebe9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ebec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ebee jne 0x10c9ec21 */
  if (!C.zf) goto L_10c9ec21;
  /* 10c9ebf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ebf2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ebf5 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ebf6 call 0x10c9f000 */
  push32(0x10c9ebfbu); f_10c9f000();
  /* 10c9ebfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ebfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ec00 je 0x10c9ec21 */
  if (C.zf) goto L_10c9ec21;
  /* 10c9ec02 mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9ec07 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10c9ec0a mov dword ptr [0x10cbe684], eax */
  w32((uint32_t)(0x10cbe684), (EAX));
  /* 10c9ec0f cmp dword ptr [0x10cbe66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ec16 jne 0x10c9ec21 */
  if (!C.zf) goto L_10c9ec21;
  /* 10c9ec18 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ec1b mov dword ptr [0x10cbe66c], ecx */
  w32((uint32_t)(0x10cbe66c), (ECX));
L_10c9ec21:;
  /* 10c9ec21 mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9ec26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ec29 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9ec2b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9ec2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10c9ec2e:;
  /* 10c9ec2e mov esp, ebp */
  ESP = (EBP);
  /* 10c9ec30 pop ebp */
  EBP = (pop32());
  /* 10c9ec31 ret 4 */
  ESPCHK(0x10c9e910u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ec40 @ 0x10c9ec40 (116 bytes, 33 insns) */
void f_10c9ec40(void) {
  FTRACE(0x10c9ec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9ec40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9ec41 mov ebp, esp */
  EBP = (ESP);
  /* 10c9ec43 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ec44 mov eax, dword ptr [0x10cbe67c] */
  EAX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9ec49 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ec4a call 0x10c95610 */
  push32(0x10c9ec4fu); f_10c95610();
  /* 10c9ec4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ec52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9ec54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ec57 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c9ec5a mov dword ptr [0x10cbe678], ecx */
  w32((uint32_t)(0x10cbe678), (ECX));
  /* 10c9ec60 cmp dword ptr [0x10cbe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ec67 je 0x10c9ec72 */
  if (C.zf) goto L_10c9ec72;
  /* 10c9ec69 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c9ec70 jmp 0x10c9ec84 */
  goto L_10c9ec84;
L_10c9ec72:;
  /* 10c9ec72 mov edx, dword ptr [0x10cbe67c] */
  EDX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9ec78 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ec79 call 0x10c9f2f0 */
  push32(0x10c9ec7eu); f_10c9f2f0();
  /* 10c9ec7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ec81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9ec84:;
  /* 10c9ec84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9ec87 mov dword ptr [0x10cbe674], eax */
  w32((uint32_t)(0x10cbe674), (EAX));
  /* 10c9ec8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9ec8e push 0x10c9ecc0 */
  push32((uint32_t)(0x10c9ecc0u));
  /* 10c9ec93 call dword ptr [0x10cc0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0324))), 0x10c9ec99u);
  /* 10c9ec99 mov ecx, dword ptr [0x10cbe684] */
  ECX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9ec9f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9eca2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9eca4 jne 0x10c9ecb0 */
  if (!C.zf) goto L_10c9ecb0;
  /* 10c9eca6 mov dword ptr [0x10cbe684], 0 */
  w32((uint32_t)(0x10cbe684), (0x0u));
L_10c9ecb0:;
  /* 10c9ecb0 mov esp, ebp */
  ESP = (EBP);
  /* 10c9ecb2 pop ebp */
  EBP = (pop32());
  /* 10c9ecb3 ret  */
  ESPCHK(0x10c9ec40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecc0 @ 0x10c9ecc0 (287 bytes, 86 insns) */
void f_10c9ecc0(void) {
  FTRACE(0x10c9ecc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9ecc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9ecc1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9ecc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9ecc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ecc9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ecca call 0x10c9f270 */
  push32(0x10c9eccfu); f_10c9f270();
  /* 10c9eccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ecd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10c9ecd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c9ecd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c9ecda push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ecdb mov edx, dword ptr [0x10cbe678] */
  EDX = (r32((uint32_t)(0x10cbe678)));
  /* 10c9ece1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9ece3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9ece5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9eceb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ecf1 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ecf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ecf5 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ecf6 call dword ptr [0x10cbe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe68c))), 0x10c9ecfcu);
  /* 10c9ecfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ecfe jne 0x10c9ed14 */
  if (!C.zf) goto L_10c9ed14;
  /* 10c9ed00 mov dword ptr [0x10cbe684], 0 */
  w32((uint32_t)(0x10cbe684), (0x0u));
  /* 10c9ed0a mov eax, 1 */
  EAX = (0x1u);
  /* 10c9ed0f jmp 0x10c9edd9 */
  goto L_10c9edd9;
L_10c9ed14:;
  /* 10c9ed14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c9ed17 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ed18 mov edx, dword ptr [0x10cbe67c] */
  EDX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9ed1e push edx */
  push32((uint32_t)(EDX));
  /* 10c9ed1f call 0x10ca0eb0 */
  push32(0x10c9ed24u); f_10ca0eb0();
  /* 10c9ed24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ed27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ed29 jne 0x10c9ed69 */
  if (!C.zf) goto L_10c9ed69;
  /* 10c9ed2b cmp dword ptr [0x10cbe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ed32 jne 0x10c9ed46 */
  if (!C.zf) goto L_10c9ed46;
  /* 10c9ed34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9ed36 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ed39 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ed3a call 0x10c9f000 */
  push32(0x10c9ed3fu); f_10c9f000();
  /* 10c9ed3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ed42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ed44 je 0x10c9ed67 */
  if (C.zf) goto L_10c9ed67;
L_10c9ed46:;
  /* 10c9ed46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ed49 mov dword ptr [0x10cbe688], ecx */
  w32((uint32_t)(0x10cbe688), (ECX));
  /* 10c9ed4f mov edx, dword ptr [0x10cbe688] */
  EDX = (r32((uint32_t)(0x10cbe688)));
  /* 10c9ed55 mov dword ptr [0x10cbe66c], edx */
  w32((uint32_t)(0x10cbe66c), (EDX));
  /* 10c9ed5b mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9ed60 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10c9ed62 mov dword ptr [0x10cbe684], eax */
  w32((uint32_t)(0x10cbe684), (EAX));
L_10c9ed67:;
  /* 10c9ed67 jmp 0x10c9edcc */
  goto L_10c9edcc;
L_10c9ed69:;
  /* 10c9ed69 cmp dword ptr [0x10cbe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ed70 jne 0x10c9edcc */
  if (!C.zf) goto L_10c9edcc;
  /* 10c9ed72 cmp dword ptr [0x10cbe674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ed79 je 0x10c9edcc */
  if (C.zf) goto L_10c9edcc;
  /* 10c9ed7b mov ecx, dword ptr [0x10cbe674] */
  ECX = (r32((uint32_t)(0x10cbe674)));
  /* 10c9ed81 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ed82 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10c9ed85 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ed86 mov eax, dword ptr [0x10cbe67c] */
  EAX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9ed8b push eax */
  push32((uint32_t)(EAX));
  /* 10c9ed8c call 0x10ca0f80 */
  push32(0x10c9ed91u); f_10ca0f80();
  /* 10c9ed91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ed94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ed96 jne 0x10c9edcc */
  if (!C.zf) goto L_10c9edcc;
  /* 10c9ed98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9ed9a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ed9d push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ed9e call 0x10c9f000 */
  push32(0x10c9eda3u); f_10c9f000();
  /* 10c9eda3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9eda6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9eda8 je 0x10c9edcc */
  if (C.zf) goto L_10c9edcc;
  /* 10c9edaa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9edad mov dword ptr [0x10cbe688], edx */
  w32((uint32_t)(0x10cbe688), (EDX));
  /* 10c9edb3 mov eax, dword ptr [0x10cbe688] */
  EAX = (r32((uint32_t)(0x10cbe688)));
  /* 10c9edb8 mov dword ptr [0x10cbe66c], eax */
  w32((uint32_t)(0x10cbe66c), (EAX));
  /* 10c9edbd mov ecx, dword ptr [0x10cbe684] */
  ECX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9edc3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9edc6 mov dword ptr [0x10cbe684], ecx */
  w32((uint32_t)(0x10cbe684), (ECX));
L_10c9edcc:;
  /* 10c9edcc mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9edd1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9edd4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9edd6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9edd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10c9edd9:;
  /* 10c9edd9 mov esp, ebp */
  ESP = (EBP);
  /* 10c9eddb pop ebp */
  EBP = (pop32());
  /* 10c9eddc ret 4 */
  ESPCHK(0x10c9ecc0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ede0 @ 0x10c9ede0 (69 bytes, 20 insns) */
void f_10c9ede0(void) {
  FTRACE(0x10c9ede0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9ede0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9ede1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9ede3 mov eax, dword ptr [0x10cbe680] */
  EAX = (r32((uint32_t)(0x10cbe680)));
  /* 10c9ede8 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ede9 call 0x10c95610 */
  push32(0x10c9edeeu); f_10c95610();
  /* 10c9edee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9edf1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9edf3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9edf6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c9edf9 mov dword ptr [0x10cbe670], ecx */
  w32((uint32_t)(0x10cbe670), (ECX));
  /* 10c9edff push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9ee01 push 0x10c9ee30 */
  push32((uint32_t)(0x10c9ee30u));
  /* 10c9ee06 call dword ptr [0x10cc0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0324))), 0x10c9ee0cu);
  /* 10c9ee0c mov edx, dword ptr [0x10cbe684] */
  EDX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9ee12 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9ee15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9ee17 jne 0x10c9ee23 */
  if (!C.zf) goto L_10c9ee23;
  /* 10c9ee19 mov dword ptr [0x10cbe684], 0 */
  w32((uint32_t)(0x10cbe684), (0x0u));
L_10c9ee23:;
  /* 10c9ee23 pop ebp */
  EBP = (pop32());
  /* 10c9ee24 ret  */
  ESPCHK(0x10c9ede0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee30 @ 0x10c9ee30 (172 bytes, 54 insns) */
void f_10c9ee30(void) {
  FTRACE(0x10c9ee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9ee30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9ee31 mov ebp, esp */
  EBP = (ESP);
  /* 10c9ee33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9ee36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ee39 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ee3a call 0x10c9f270 */
  push32(0x10c9ee3fu); f_10c9f270();
  /* 10c9ee3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ee42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10c9ee45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c9ee47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c9ee4a push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ee4b mov edx, dword ptr [0x10cbe670] */
  EDX = (r32((uint32_t)(0x10cbe670)));
  /* 10c9ee51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9ee53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9ee55 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9ee5b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ee61 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ee62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ee65 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ee66 call dword ptr [0x10cbe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe68c))), 0x10c9ee6cu);
  /* 10c9ee6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ee6e jne 0x10c9ee81 */
  if (!C.zf) goto L_10c9ee81;
  /* 10c9ee70 mov dword ptr [0x10cbe684], 0 */
  w32((uint32_t)(0x10cbe684), (0x0u));
  /* 10c9ee7a mov eax, 1 */
  EAX = (0x1u);
  /* 10c9ee7f jmp 0x10c9eed6 */
  goto L_10c9eed6;
L_10c9ee81:;
  /* 10c9ee81 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c9ee84 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ee85 mov edx, dword ptr [0x10cbe680] */
  EDX = (r32((uint32_t)(0x10cbe680)));
  /* 10c9ee8b push edx */
  push32((uint32_t)(EDX));
  /* 10c9ee8c call 0x10ca0eb0 */
  push32(0x10c9ee91u); f_10ca0eb0();
  /* 10c9ee91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ee94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ee96 jne 0x10c9eec9 */
  if (!C.zf) goto L_10c9eec9;
  /* 10c9ee98 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9ee9b push eax */
  push32((uint32_t)(EAX));
  /* 10c9ee9c call 0x10c9efb0 */
  push32(0x10c9eea1u); f_10c9efb0();
  /* 10c9eea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9eea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9eea6 je 0x10c9eec9 */
  if (C.zf) goto L_10c9eec9;
  /* 10c9eea8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c9eeab mov dword ptr [0x10cbe688], ecx */
  w32((uint32_t)(0x10cbe688), (ECX));
  /* 10c9eeb1 mov edx, dword ptr [0x10cbe688] */
  EDX = (r32((uint32_t)(0x10cbe688)));
  /* 10c9eeb7 mov dword ptr [0x10cbe66c], edx */
  w32((uint32_t)(0x10cbe66c), (EDX));
  /* 10c9eebd mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9eec2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10c9eec4 mov dword ptr [0x10cbe684], eax */
  w32((uint32_t)(0x10cbe684), (EAX));
L_10c9eec9:;
  /* 10c9eec9 mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9eece and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9eed1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9eed3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9eed5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10c9eed6:;
  /* 10c9eed6 mov esp, ebp */
  ESP = (EBP);
  /* 10c9eed8 pop ebp */
  EBP = (pop32());
  /* 10c9eed9 ret 4 */
  ESPCHK(0x10c9ee30u, _esp0);
  ESP += 8; return;
}

/* FUN_1000eee0 @ 0x10c9eee0 (43 bytes, 11 insns) */
void f_10c9eee0(void) {
  FTRACE(0x10c9eee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9eee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9eee1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9eee3 mov eax, dword ptr [0x10cbe684] */
  EAX = (r32((uint32_t)(0x10cbe684)));
  /* 10c9eee8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10c9eeed mov dword ptr [0x10cbe684], eax */
  w32((uint32_t)(0x10cbe684), (EAX));
  /* 10c9eef2 call dword ptr [0x10cc0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0328))), 0x10c9eef8u);
  /* 10c9eef8 mov dword ptr [0x10cbe688], eax */
  w32((uint32_t)(0x10cbe688), (EAX));
  /* 10c9eefd mov ecx, dword ptr [0x10cbe688] */
  ECX = (r32((uint32_t)(0x10cbe688)));
  /* 10c9ef03 mov dword ptr [0x10cbe66c], ecx */
  w32((uint32_t)(0x10cbe66c), (ECX));
  /* 10c9ef09 pop ebp */
  EBP = (pop32());
  /* 10c9ef0a ret  */
  ESPCHK(0x10c9eee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef10 @ 0x10c9ef10 (155 bytes, 57 insns) */
void f_10c9ef10(void) {
  FTRACE(0x10c9ef10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9ef10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9ef11 mov ebp, esp */
  EBP = (ESP);
  /* 10c9ef13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9ef16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9ef1a je 0x10c9ef3b */
  if (C.zf) goto L_10c9ef3b;
  /* 10c9ef1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ef1f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c9ef22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9ef24 je 0x10c9ef3b */
  if (C.zf) goto L_10c9ef3b;
  /* 10c9ef26 push 0x10cba684 */
  push32((uint32_t)(0x10cba684u));
  /* 10c9ef2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ef2e push edx */
  push32((uint32_t)(EDX));
  /* 10c9ef2f call 0x10c9e470 */
  push32(0x10c9ef34u); f_10c9e470();
  /* 10c9ef34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ef37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ef39 jne 0x10c9ef63 */
  if (!C.zf) goto L_10c9ef63;
L_10c9ef3b:;
  /* 10c9ef3b push 8 */
  push32((uint32_t)(0x8u));
  /* 10c9ef3d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c9ef40 push eax */
  push32((uint32_t)(EAX));
  /* 10c9ef41 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10c9ef46 mov ecx, dword ptr [0x10cbe688] */
  ECX = (r32((uint32_t)(0x10cbe688)));
  /* 10c9ef4c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ef4d call dword ptr [0x10cbe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe68c))), 0x10c9ef53u);
  /* 10c9ef53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ef55 jne 0x10c9ef5b */
  if (!C.zf) goto L_10c9ef5b;
  /* 10c9ef57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ef59 jmp 0x10c9efa7 */
  goto L_10c9efa7;
L_10c9ef5b:;
  /* 10c9ef5b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10c9ef5e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c9ef61 jmp 0x10c9ef9b */
  goto L_10c9ef9b;
L_10c9ef63:;
  /* 10c9ef63 push 0x10cba680 */
  push32((uint32_t)(0x10cba680u));
  /* 10c9ef68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ef6b push eax */
  push32((uint32_t)(EAX));
  /* 10c9ef6c call 0x10c9e470 */
  push32(0x10c9ef71u); f_10c9e470();
  /* 10c9ef71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9ef74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ef76 jne 0x10c9ef9b */
  if (!C.zf) goto L_10c9ef9b;
  /* 10c9ef78 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c9ef7a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10c9ef7d push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ef7e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c9ef80 mov edx, dword ptr [0x10cbe688] */
  EDX = (r32((uint32_t)(0x10cbe688)));
  /* 10c9ef86 push edx */
  push32((uint32_t)(EDX));
  /* 10c9ef87 call dword ptr [0x10cbe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe68c))), 0x10c9ef8du);
  /* 10c9ef8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9ef8f jne 0x10c9ef95 */
  if (!C.zf) goto L_10c9ef95;
  /* 10c9ef91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9ef93 jmp 0x10c9efa7 */
  goto L_10c9efa7;
L_10c9ef95:;
  /* 10c9ef95 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c9ef98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c9ef9b:;
  /* 10c9ef9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9ef9e push ecx */
  push32((uint32_t)(ECX));
  /* 10c9ef9f call 0x10ca1090 */
  push32(0x10c9efa4u); f_10ca1090();
  /* 10c9efa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9efa7:;
  /* 10c9efa7 mov esp, ebp */
  ESP = (EBP);
  /* 10c9efa9 pop ebp */
  EBP = (pop32());
  /* 10c9efaa ret  */
  ESPCHK(0x10c9ef10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efb0 @ 0x10c9efb0 (79 bytes, 26 insns) */
void f_10c9efb0(void) {
  FTRACE(0x10c9efb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9efb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9efb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9efb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9efb6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10c9efba mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10c9efbe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9efc5 jmp 0x10c9efd0 */
  goto L_10c9efd0;
L_10c9efc7:;
  /* 10c9efc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9efca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9efcd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c9efd0:;
  /* 10c9efd0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9efd4 jae 0x10c9eff6 */
  if (!C.cf) goto L_10c9eff6;
  /* 10c9efd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9efd9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9efdf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9efe2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9efe4 mov cx, word ptr [eax*2 + 0x10cbd9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10cbd9c4)));
  /* 10c9efec cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9efee jne 0x10c9eff4 */
  if (!C.zf) goto L_10c9eff4;
  /* 10c9eff0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9eff2 jmp 0x10c9effb */
  goto L_10c9effb;
L_10c9eff4:;
  /* 10c9eff4 jmp 0x10c9efc7 */
  goto L_10c9efc7;
L_10c9eff6:;
  /* 10c9eff6 mov eax, 1 */
  EAX = (0x1u);
L_10c9effb:;
  /* 10c9effb mov esp, ebp */
  ESP = (EBP);
  /* 10c9effd pop ebp */
  EBP = (pop32());
  /* 10c9effe ret  */
  ESPCHK(0x10c9efb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f000 @ 0x10c9f000 (135 bytes, 48 insns) */
void f_10c9f000(void) {
  FTRACE(0x10c9f000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f000 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f001 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f003 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f006 push esi */
  push32((uint32_t)(ESI));
  /* 10c9f007 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f00a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9f00f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9f014 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9f019 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10c9f01c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9f021 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9f024 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c9f026 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10c9f029 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f02a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9f02c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f02f push edx */
  push32((uint32_t)(EDX));
  /* 10c9f030 call dword ptr [0x10cbe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe68c))), 0x10c9f036u);
  /* 10c9f036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9f038 jne 0x10c9f03e */
  if (!C.zf) goto L_10c9f03e;
  /* 10c9f03a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9f03c jmp 0x10c9f082 */
  goto L_10c9f082;
L_10c9f03e:;
  /* 10c9f03e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10c9f041 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f042 call 0x10c9f270 */
  push32(0x10c9f047u); f_10c9f270();
  /* 10c9f047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f04a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f04d je 0x10c9f07d */
  if (C.zf) goto L_10c9f07d;
  /* 10c9f04f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f053 je 0x10c9f07d */
  if (C.zf) goto L_10c9f07d;
  /* 10c9f055 mov ecx, dword ptr [0x10cbe67c] */
  ECX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9f05b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f05c call 0x10c9f2f0 */
  push32(0x10c9f061u); f_10c9f2f0();
  /* 10c9f061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f064 mov esi, eax */
  ESI = (EAX);
  /* 10c9f066 mov edx, dword ptr [0x10cbe67c] */
  EDX = (r32((uint32_t)(0x10cbe67c)));
  /* 10c9f06c push edx */
  push32((uint32_t)(EDX));
  /* 10c9f06d call 0x10c95610 */
  push32(0x10c9f072u); f_10c95610();
  /* 10c9f072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f075 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f077 jne 0x10c9f07d */
  if (!C.zf) goto L_10c9f07d;
  /* 10c9f079 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9f07b jmp 0x10c9f082 */
  goto L_10c9f082;
L_10c9f07d:;
  /* 10c9f07d mov eax, 1 */
  EAX = (0x1u);
L_10c9f082:;
  /* 10c9f082 pop esi */
  ESI = (pop32());
  /* 10c9f083 mov esp, ebp */
  ESP = (EBP);
  /* 10c9f085 pop ebp */
  EBP = (pop32());
  /* 10c9f086 ret  */
  ESPCHK(0x10c9f000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f090 @ 0x10c9f090 (77 bytes, 18 insns) */
void f_10c9f090(void) {
  FTRACE(0x10c9f090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f090 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f091 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f093 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f099 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10c9f0a3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10c9f0a9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f0aa call dword ptr [0x10cc030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc030c))), 0x10c9f0b0u);
  /* 10c9f0b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9f0b2 je 0x10c9f0c9 */
  if (C.zf) goto L_10c9f0c9;
  /* 10c9f0b4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f0bb jne 0x10c9f0c9 */
  if (!C.zf) goto L_10c9f0c9;
  /* 10c9f0bd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10c9f0c7 jmp 0x10c9f0d3 */
  goto L_10c9f0d3;
L_10c9f0c9:;
  /* 10c9f0c9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10c9f0d3:;
  /* 10c9f0d3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10c9f0d9 mov esp, ebp */
  ESP = (EBP);
  /* 10c9f0db pop ebp */
  EBP = (pop32());
  /* 10c9f0dc ret  */
  ESPCHK(0x10c9f090u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10c9f0e0 (388 bytes, 118 insns) */
void f_10c9f0e0(void) {
  FTRACE(0x10c9f0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f0e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f0e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f0e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9f0ed mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10c9f0f4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c9f0fb:;
  /* 10c9f0fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f0fe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f101 jg 0x10c9f248 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9f248;
  /* 10c9f107 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f10a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f10d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c9f10e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f110 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c9f112 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c9f115 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f118 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f11b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f11e cmp edx, dword ptr [ecx + 0x10cbd520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10cbd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f124 jne 0x10c9f21e */
  if (!C.zf) goto L_10c9f21e;
  /* 10c9f12a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9f12d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c9f130 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f134 ja 0x10c9f157 */
  if ((!C.cf&&!C.zf)) goto L_10c9f157;
  /* 10c9f136 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f13a je 0x10c9f1c9 */
  if (C.zf) goto L_10c9f1c9;
  /* 10c9f140 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f144 je 0x10c9f174 */
  if (C.zf) goto L_10c9f174;
  /* 10c9f146 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f14a je 0x10c9f196 */
  if (C.zf) goto L_10c9f196;
  /* 10c9f14c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f150 je 0x10c9f1b8 */
  if (C.zf) goto L_10c9f1b8;
  /* 10c9f152 jmp 0x10c9f1e8 */
  goto L_10c9f1e8;
L_10c9f157:;
  /* 10c9f157 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f15e je 0x10c9f185 */
  if (C.zf) goto L_10c9f185;
  /* 10c9f160 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f167 je 0x10c9f1a7 */
  if (C.zf) goto L_10c9f1a7;
  /* 10c9f169 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f170 je 0x10c9f1da */
  if (C.zf) goto L_10c9f1da;
  /* 10c9f172 jmp 0x10c9f1e8 */
  goto L_10c9f1e8;
L_10c9f174:;
  /* 10c9f174 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f177 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f17a add ecx, 0x10cbd524 */
  { uint32_t _a=(ECX),_b=(0x10cbd524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f180 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9f183 jmp 0x10c9f1e8 */
  goto L_10c9f1e8;
L_10c9f185:;
  /* 10c9f185 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f188 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f18b mov eax, dword ptr [edx + 0x10cbd52c] */
  EAX = (r32((uint32_t)(EDX + 0x10cbd52c)));
  /* 10c9f191 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9f194 jmp 0x10c9f1e8 */
  goto L_10c9f1e8;
L_10c9f196:;
  /* 10c9f196 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f199 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f19c add ecx, 0x10cbd530 */
  { uint32_t _a=(ECX),_b=(0x10cbd530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f1a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9f1a5 jmp 0x10c9f1e8 */
  goto L_10c9f1e8;
L_10c9f1a7:;
  /* 10c9f1a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f1aa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f1ad mov eax, dword ptr [edx + 0x10cbd534] */
  EAX = (r32((uint32_t)(EDX + 0x10cbd534)));
  /* 10c9f1b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9f1b6 jmp 0x10c9f1e8 */
  goto L_10c9f1e8;
L_10c9f1b8:;
  /* 10c9f1b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f1bb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f1be add ecx, 0x10cbd538 */
  { uint32_t _a=(ECX),_b=(0x10cbd538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f1c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9f1c7 jmp 0x10c9f1e8 */
  goto L_10c9f1e8;
L_10c9f1c9:;
  /* 10c9f1c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f1cc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f1cf add edx, 0x10cbd53c */
  { uint32_t _a=(EDX),_b=(0x10cbd53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f1d5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c9f1d8 jmp 0x10c9f1e8 */
  goto L_10c9f1e8;
L_10c9f1da:;
  /* 10c9f1da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f1dd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f1e0 add eax, 0x10cbd544 */
  { uint32_t _a=(EAX),_b=(0x10cbd544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f1e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c9f1e8:;
  /* 10c9f1e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f1ec je 0x10c9f1f4 */
  if (C.zf) goto L_10c9f1f4;
  /* 10c9f1ee cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f1f2 jge 0x10c9f1f6 */
  if ((C.sf==C.of)) goto L_10c9f1f6;
L_10c9f1f4:;
  /* 10c9f1f4 jmp 0x10c9f248 */
  goto L_10c9f248;
L_10c9f1f6:;
  /* 10c9f1f6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9f1f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f1fc push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f1fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9f200 push edx */
  push32((uint32_t)(EDX));
  /* 10c9f201 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9f204 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f205 call 0x10c96000 */
  push32(0x10c9f20au); f_10c96000();
  /* 10c9f20a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f20d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9f210 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f213 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10c9f217 mov eax, 1 */
  EAX = (0x1u);
  /* 10c9f21c jmp 0x10c9f25e */
  goto L_10c9f25e;
L_10c9f21e:;
  /* 10c9f21e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f221 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f227 cmp eax, dword ptr [edx + 0x10cbd520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10cbd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f22d jae 0x10c9f23a */
  if (!C.cf) goto L_10c9f23a;
  /* 10c9f22f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f232 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f235 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c9f238 jmp 0x10c9f243 */
  goto L_10c9f243;
L_10c9f23a:;
  /* 10c9f23a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f23d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f240 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c9f243:;
  /* 10c9f243 jmp 0x10c9f0fb */
  goto L_10c9f0fb;
L_10c9f248:;
  /* 10c9f248 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9f24b push eax */
  push32((uint32_t)(EAX));
  /* 10c9f24c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9f24f push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f250 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9f253 push edx */
  push32((uint32_t)(EDX));
  /* 10c9f254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f257 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f258 call dword ptr [0x10cc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0320))), 0x10c9f25eu);
L_10c9f25e:;
  /* 10c9f25e mov esp, ebp */
  ESP = (EBP);
  /* 10c9f260 pop ebp */
  EBP = (pop32());
  /* 10c9f261 ret 0x10 */
  ESPCHK(0x10c9f0e0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f270 @ 0x10c9f270 (118 bytes, 42 insns) */
void f_10c9f270(void) {
  FTRACE(0x10c9f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f270 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f271 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f276 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c9f27d:;
  /* 10c9f27d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f280 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c9f282 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10c9f285 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9f289 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f28c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f28f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c9f292 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9f294 je 0x10c9f2df */
  if (C.zf) goto L_10c9f2df;
  /* 10c9f296 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9f29a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f29d jl 0x10c9f2b2 */
  if ((C.sf!=C.of)) goto L_10c9f2b2;
  /* 10c9f29f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9f2a3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f2a6 jg 0x10c9f2b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9f2b2;
  /* 10c9f2a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10c9f2ab add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c9f2ad mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10c9f2b0 jmp 0x10c9f2cc */
  goto L_10c9f2cc;
L_10c9f2b2:;
  /* 10c9f2b2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9f2b6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f2b9 jl 0x10c9f2cc */
  if ((C.sf!=C.of)) goto L_10c9f2cc;
  /* 10c9f2bb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9f2bf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f2c2 jg 0x10c9f2cc */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9f2cc;
  /* 10c9f2c4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10c9f2c7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c9f2c9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10c9f2cc:;
  /* 10c9f2cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f2cf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c9f2d2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c9f2d6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10c9f2da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9f2dd jmp 0x10c9f27d */
  goto L_10c9f27d;
L_10c9f2df:;
  /* 10c9f2df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f2e2 mov esp, ebp */
  ESP = (EBP);
  /* 10c9f2e4 pop ebp */
  EBP = (pop32());
  /* 10c9f2e5 ret  */
  ESPCHK(0x10c9f270u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10c9f2f0 (101 bytes, 36 insns) */
void f_10c9f2f0(void) {
  FTRACE(0x10c9f2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f2f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f2f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f2f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9f2fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f300 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c9f302 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10c9f305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f308 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f30b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10c9f30e:;
  /* 10c9f30e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c9f312 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f315 jl 0x10c9f320 */
  if ((C.sf!=C.of)) goto L_10c9f320;
  /* 10c9f317 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c9f31b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f31e jle 0x10c9f332 */
  if ((C.zf||C.sf!=C.of)) goto L_10c9f332;
L_10c9f320:;
  /* 10c9f320 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c9f324 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f327 jl 0x10c9f34e */
  if ((C.sf!=C.of)) goto L_10c9f34e;
  /* 10c9f329 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c9f32d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f330 jg 0x10c9f34e */
  if ((!C.zf&&C.sf==C.of)) goto L_10c9f34e;
L_10c9f332:;
  /* 10c9f332 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9f335 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f338 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9f33b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f33e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c9f340 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10c9f343 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f346 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f349 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c9f34c jmp 0x10c9f30e */
  goto L_10c9f30e;
L_10c9f34e:;
  /* 10c9f34e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9f351 mov esp, ebp */
  ESP = (EBP);
  /* 10c9f353 pop ebp */
  EBP = (pop32());
  /* 10c9f354 ret  */
  ESPCHK(0x10c9f2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f360 @ 0x10c9f360 (122 bytes, 39 insns) */
void f_10c9f360(void) {
  FTRACE(0x10c9f360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f360 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f361 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f363 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f367 cmp eax, dword ptr [0x10cbff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f36d jae 0x10c9f391 */
  if (!C.cf) goto L_10c9f391;
  /* 10c9f36f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f372 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c9f375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f378 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9f37b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f37e mov eax, dword ptr [ecx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9f385 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c9f38a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9f38d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9f38f jne 0x10c9f3ac */
  if (!C.zf) goto L_10c9f3ac;
L_10c9f391:;
  /* 10c9f391 call 0x10c9a6b0 */
  push32(0x10c9f396u); f_10c9a6b0();
  /* 10c9f396 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c9f39c call 0x10c9a6c0 */
  push32(0x10c9f3a1u); f_10c9a6c0();
  /* 10c9f3a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9f3a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9f3aa jmp 0x10c9f3d6 */
  goto L_10c9f3d6;
L_10c9f3ac:;
  /* 10c9f3ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f3af push edx */
  push32((uint32_t)(EDX));
  /* 10c9f3b0 call 0x10c9bed0 */
  push32(0x10c9f3b5u); f_10c9bed0();
  /* 10c9f3b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f3b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f3bb push eax */
  push32((uint32_t)(EAX));
  /* 10c9f3bc call 0x10c9f3e0 */
  push32(0x10c9f3c1u); f_10c9f3e0();
  /* 10c9f3c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f3c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9f3c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f3ca push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f3cb call 0x10c9bf60 */
  push32(0x10c9f3d0u); f_10c9bf60();
  /* 10c9f3d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f3d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c9f3d6:;
  /* 10c9f3d6 mov esp, ebp */
  ESP = (EBP);
  /* 10c9f3d8 pop ebp */
  EBP = (pop32());
  /* 10c9f3d9 ret  */
  ESPCHK(0x10c9f360u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10c9f3e0 (170 bytes, 59 insns) */
void f_10c9f3e0(void) {
  FTRACE(0x10c9f3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f3e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f3e4 push esi */
  push32((uint32_t)(ESI));
  /* 10c9f3e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f3e8 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f3e9 call 0x10c9bd50 */
  push32(0x10c9f3eeu); f_10c9bd50();
  /* 10c9f3ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f3f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f3f4 je 0x10c9f433 */
  if (C.zf) goto L_10c9f433;
  /* 10c9f3f6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f3fa je 0x10c9f402 */
  if (C.zf) goto L_10c9f402;
  /* 10c9f3fc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f400 jne 0x10c9f41c */
  if (!C.zf) goto L_10c9f41c;
L_10c9f402:;
  /* 10c9f402 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9f404 call 0x10c9bd50 */
  push32(0x10c9f409u); f_10c9bd50();
  /* 10c9f409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f40c mov esi, eax */
  ESI = (EAX);
  /* 10c9f40e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9f410 call 0x10c9bd50 */
  push32(0x10c9f415u); f_10c9bd50();
  /* 10c9f415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f418 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f41a je 0x10c9f433 */
  if (C.zf) goto L_10c9f433;
L_10c9f41c:;
  /* 10c9f41c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f41f push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f420 call 0x10c9bd50 */
  push32(0x10c9f425u); f_10c9bd50();
  /* 10c9f425 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f428 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f429 call dword ptr [0x10cc0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0310))), 0x10c9f42fu);
  /* 10c9f42f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9f431 je 0x10c9f43c */
  if (C.zf) goto L_10c9f43c;
L_10c9f433:;
  /* 10c9f433 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9f43a jmp 0x10c9f445 */
  goto L_10c9f445;
L_10c9f43c:;
  /* 10c9f43c call dword ptr [0x10cc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0278))), 0x10c9f442u);
  /* 10c9f442 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9f445:;
  /* 10c9f445 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f448 push edx */
  push32((uint32_t)(EDX));
  /* 10c9f449 call 0x10c9bc70 */
  push32(0x10c9f44eu); f_10c9bc70();
  /* 10c9f44e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f451 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f454 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c9f457 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f45a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9f45d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c9f460 mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9f467 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10c9f46c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f470 je 0x10c9f483 */
  if (C.zf) goto L_10c9f483;
  /* 10c9f472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f475 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f476 call 0x10c9a610 */
  push32(0x10c9f47bu); f_10c9a610();
  /* 10c9f47b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f47e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9f481 jmp 0x10c9f485 */
  goto L_10c9f485;
L_10c9f483:;
  /* 10c9f483 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9f485:;
  /* 10c9f485 pop esi */
  ESI = (pop32());
  /* 10c9f486 mov esp, ebp */
  ESP = (EBP);
  /* 10c9f488 pop ebp */
  EBP = (pop32());
  /* 10c9f489 ret  */
  ESPCHK(0x10c9f3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f490 @ 0x10c9f490 (146 bytes, 52 insns) */
void f_10c9f490(void) {
  FTRACE(0x10c9f490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f490 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f491 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f493 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9f494 push esi */
  push32((uint32_t)(ESI));
  /* 10c9f495 push edi */
  push32((uint32_t)(EDI));
L_10c9f496:;
  /* 10c9f496 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f49a jne 0x10c9f4ba */
  if (!C.zf) goto L_10c9f4ba;
  /* 10c9f49c push 0x10cb9fc0 */
  push32((uint32_t)(0x10cb9fc0u));
  /* 10c9f4a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9f4a3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c9f4a5 push 0x10cba688 */
  push32((uint32_t)(0x10cba688u));
  /* 10c9f4aa push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9f4ac call 0x10c918a0 */
  push32(0x10c9f4b1u); f_10c918a0();
  /* 10c9f4b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f4b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f4b7 jne 0x10c9f4ba */
  if (!C.zf) goto L_10c9f4ba;
  /* 10c9f4b9 int3  */
  x86_unimpl("int3 @ 0x10c9f4b9");
L_10c9f4ba:;
  /* 10c9f4ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9f4bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9f4be jne 0x10c9f496 */
  if (!C.zf) goto L_10c9f496;
  /* 10c9f4c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f4c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9f4c6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9f4cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9f4ce je 0x10c9f51d */
  if (C.zf) goto L_10c9f51d;
  /* 10c9f4d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f4d3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c9f4d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9f4d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9f4db je 0x10c9f51d */
  if (C.zf) goto L_10c9f51d;
  /* 10c9f4dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9f4df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f4e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c9f4e5 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f4e6 call 0x10c93270 */
  push32(0x10c9f4ebu); f_10c93270();
  /* 10c9f4eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f4ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f4f1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c9f4f4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9f4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f4fd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c9f500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f503 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10c9f509 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f50c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10c9f513 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9f516 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10c9f51d:;
  /* 10c9f51d pop edi */
  EDI = (pop32());
  /* 10c9f51e pop esi */
  ESI = (pop32());
  /* 10c9f51f pop ebx */
  EBX = (pop32());
  /* 10c9f520 pop ebp */
  EBP = (pop32());
  /* 10c9f521 ret  */
  ESPCHK(0x10c9f490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f530 @ 0x10c9f530 (289 bytes, 97 insns) */
void f_10c9f530(void) {
  FTRACE(0x10c9f530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f530 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f531 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f533 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f536 push esi */
  push32((uint32_t)(ESI));
  /* 10c9f537 mov eax, dword ptr [0x10cbdc98] */
  EAX = (r32((uint32_t)(0x10cbdc98)));
  /* 10c9f53c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c9f53f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9f546 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9f54d jmp 0x10c9f558 */
  goto L_10c9f558;
L_10c9f54f:;
  /* 10c9f54f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f552 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f555 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c9f558:;
  /* 10c9f558 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f55c jae 0x10c9f591 */
  if (!C.cf) goto L_10c9f591;
  /* 10c9f55e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f561 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f564 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c9f567 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f568 call 0x10c95610 */
  push32(0x10c9f56du); f_10c95610();
  /* 10c9f56d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f570 mov esi, eax */
  ESI = (EAX);
  /* 10c9f572 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f575 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f578 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10c9f57c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f57d call 0x10c95610 */
  push32(0x10c9f582u); f_10c95610();
  /* 10c9f582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f585 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f588 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c9f58c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c9f58f jmp 0x10c9f54f */
  goto L_10c9f54f;
L_10c9f591:;
  /* 10c9f591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9f594 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f597 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f598 call 0x10c927c0 */
  push32(0x10c9f59du); f_10c927c0();
  /* 10c9f59d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f5a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9f5a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f5a7 je 0x10c9f649 */
  if (C.zf) goto L_10c9f649;
  /* 10c9f5ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f5b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c9f5b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9f5ba jmp 0x10c9f5c5 */
  goto L_10c9f5c5;
L_10c9f5bc:;
  /* 10c9f5bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f5bf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f5c2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c9f5c5:;
  /* 10c9f5c5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f5c9 jae 0x10c9f63a */
  if (!C.cf) goto L_10c9f63a;
  /* 10c9f5cb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f5ce mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10c9f5d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f5d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f5d7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c9f5da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f5dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f5e0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c9f5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f5e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f5e7 push edx */
  push32((uint32_t)(EDX));
  /* 10c9f5e8 call 0x10c95790 */
  push32(0x10c9f5edu); f_10c95790();
  /* 10c9f5ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f5f0 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f5f1 call 0x10c95610 */
  push32(0x10c9f5f6u); f_10c95610();
  /* 10c9f5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f5f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f5fc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f5fe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c9f601 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f604 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10c9f607 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f60a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f60d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c9f610 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f613 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f616 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10c9f61a push eax */
  push32((uint32_t)(EAX));
  /* 10c9f61b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f61e push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f61f call 0x10c95790 */
  push32(0x10c9f624u); f_10c95790();
  /* 10c9f624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f627 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f628 call 0x10c95610 */
  push32(0x10c9f62du); f_10c95610();
  /* 10c9f62d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f630 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f633 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f635 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c9f638 jmp 0x10c9f5bc */
  goto L_10c9f5bc;
L_10c9f63a:;
  /* 10c9f63a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f63d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c9f640 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f643 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f646 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c9f649:;
  /* 10c9f649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f64c pop esi */
  ESI = (pop32());
  /* 10c9f64d mov esp, ebp */
  ESP = (EBP);
  /* 10c9f64f pop ebp */
  EBP = (pop32());
  /* 10c9f650 ret  */
  ESPCHK(0x10c9f530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f660 @ 0x10c9f660 (291 bytes, 97 insns) */
void f_10c9f660(void) {
  FTRACE(0x10c9f660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f660 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f661 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f663 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f666 push esi */
  push32((uint32_t)(ESI));
  /* 10c9f667 mov eax, dword ptr [0x10cbdc98] */
  EAX = (r32((uint32_t)(0x10cbdc98)));
  /* 10c9f66c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c9f66f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9f676 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9f67d jmp 0x10c9f688 */
  goto L_10c9f688;
L_10c9f67f:;
  /* 10c9f67f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f682 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f685 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c9f688:;
  /* 10c9f688 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f68c jae 0x10c9f6c2 */
  if (!C.cf) goto L_10c9f6c2;
  /* 10c9f68e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f691 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f694 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10c9f698 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f699 call 0x10c95610 */
  push32(0x10c9f69eu); f_10c95610();
  /* 10c9f69e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f6a1 mov esi, eax */
  ESI = (EAX);
  /* 10c9f6a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f6a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f6a9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10c9f6ad push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f6ae call 0x10c95610 */
  push32(0x10c9f6b3u); f_10c95610();
  /* 10c9f6b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f6b6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f6b9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c9f6bd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c9f6c0 jmp 0x10c9f67f */
  goto L_10c9f67f;
L_10c9f6c2:;
  /* 10c9f6c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9f6c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f6c8 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f6c9 call 0x10c927c0 */
  push32(0x10c9f6ceu); f_10c927c0();
  /* 10c9f6ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f6d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9f6d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f6d8 je 0x10c9f77b */
  if (C.zf) goto L_10c9f77b;
  /* 10c9f6de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f6e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c9f6e4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9f6eb jmp 0x10c9f6f6 */
  goto L_10c9f6f6;
L_10c9f6ed:;
  /* 10c9f6ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f6f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f6f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c9f6f6:;
  /* 10c9f6f6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f6fa jae 0x10c9f76c */
  if (!C.cf) goto L_10c9f76c;
  /* 10c9f6fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f6ff mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10c9f702 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f705 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f708 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c9f70b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f70e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f711 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10c9f715 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f716 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f719 push edx */
  push32((uint32_t)(EDX));
  /* 10c9f71a call 0x10c95790 */
  push32(0x10c9f71fu); f_10c95790();
  /* 10c9f71f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f722 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f723 call 0x10c95610 */
  push32(0x10c9f728u); f_10c95610();
  /* 10c9f728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f72b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f72e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f730 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c9f733 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f736 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10c9f739 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f73c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f73f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c9f742 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f745 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f748 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c9f74c push eax */
  push32((uint32_t)(EAX));
  /* 10c9f74d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f750 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f751 call 0x10c95790 */
  push32(0x10c9f756u); f_10c95790();
  /* 10c9f756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f759 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f75a call 0x10c95610 */
  push32(0x10c9f75fu); f_10c95610();
  /* 10c9f75f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f762 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f765 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f767 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c9f76a jmp 0x10c9f6ed */
  goto L_10c9f6ed;
L_10c9f76c:;
  /* 10c9f76c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f76f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c9f772 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f775 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f778 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c9f77b:;
  /* 10c9f77b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f77e pop esi */
  ESI = (pop32());
  /* 10c9f77f mov esp, ebp */
  ESP = (EBP);
  /* 10c9f781 pop ebp */
  EBP = (pop32());
  /* 10c9f782 ret  */
  ESPCHK(0x10c9f660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f790 @ 0x10c9f790 (878 bytes, 273 insns) */
void f_10c9f790(void) {
  FTRACE(0x10c9f790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9f790 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9f791 mov ebp, esp */
  EBP = (ESP);
  /* 10c9f793 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9f796 push esi */
  push32((uint32_t)(ESI));
  /* 10c9f797 mov eax, dword ptr [0x10cbdc98] */
  EAX = (r32((uint32_t)(0x10cbdc98)));
  /* 10c9f79c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c9f79f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9f7a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9f7ad jmp 0x10c9f7b8 */
  goto L_10c9f7b8;
L_10c9f7af:;
  /* 10c9f7af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f7b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f7b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c9f7b8:;
  /* 10c9f7b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f7bc jae 0x10c9f7f1 */
  if (!C.cf) goto L_10c9f7f1;
  /* 10c9f7be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f7c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f7c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c9f7c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f7c8 call 0x10c95610 */
  push32(0x10c9f7cdu); f_10c95610();
  /* 10c9f7cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f7d0 mov esi, eax */
  ESI = (EAX);
  /* 10c9f7d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f7d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f7d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10c9f7dc push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f7dd call 0x10c95610 */
  push32(0x10c9f7e2u); f_10c95610();
  /* 10c9f7e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f7e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f7e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c9f7ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c9f7ef jmp 0x10c9f7af */
  goto L_10c9f7af;
L_10c9f7f1:;
  /* 10c9f7f1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9f7f8 jmp 0x10c9f803 */
  goto L_10c9f803;
L_10c9f7fa:;
  /* 10c9f7fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f7fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f800 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c9f803:;
  /* 10c9f803 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f807 jae 0x10c9f83d */
  if (!C.cf) goto L_10c9f83d;
  /* 10c9f809 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f80c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f80f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10c9f813 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f814 call 0x10c95610 */
  push32(0x10c9f819u); f_10c95610();
  /* 10c9f819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f81c mov esi, eax */
  ESI = (EAX);
  /* 10c9f81e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f821 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f824 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c9f828 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f829 call 0x10c95610 */
  push32(0x10c9f82eu); f_10c95610();
  /* 10c9f82e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f831 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f834 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c9f838 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c9f83b jmp 0x10c9f7fa */
  goto L_10c9f7fa;
L_10c9f83d:;
  /* 10c9f83d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f840 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10c9f846 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f847 call 0x10c95610 */
  push32(0x10c9f84cu); f_10c95610();
  /* 10c9f84c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f84f mov esi, eax */
  ESI = (EAX);
  /* 10c9f851 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f854 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10c9f85a push edx */
  push32((uint32_t)(EDX));
  /* 10c9f85b call 0x10c95610 */
  push32(0x10c9f860u); f_10c95610();
  /* 10c9f860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f863 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f866 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c9f86a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9f86d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f870 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10c9f876 push edx */
  push32((uint32_t)(EDX));
  /* 10c9f877 call 0x10c95610 */
  push32(0x10c9f87cu); f_10c95610();
  /* 10c9f87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f87f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9f882 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c9f886 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c9f889 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f88c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10c9f892 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f893 call 0x10c95610 */
  push32(0x10c9f898u); f_10c95610();
  /* 10c9f898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f89b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9f89e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c9f8a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9f8a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f8a8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10c9f8ae push edx */
  push32((uint32_t)(EDX));
  /* 10c9f8af call 0x10c95610 */
  push32(0x10c9f8b4u); f_10c95610();
  /* 10c9f8b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f8b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9f8ba lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c9f8be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c9f8c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9f8c4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f8c9 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f8ca call 0x10c927c0 */
  push32(0x10c9f8cfu); f_10c927c0();
  /* 10c9f8cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f8d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9f8d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f8d9 je 0x10c9faf6 */
  if (C.zf) goto L_10c9faf6;
  /* 10c9f8df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f8e2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c9f8e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f8e8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f8ee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c9f8f1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10c9f8f6 mov eax, dword ptr [0x10cbdc98] */
  EAX = (r32((uint32_t)(0x10cbdc98)));
  /* 10c9f8fb push eax */
  push32((uint32_t)(EAX));
  /* 10c9f8fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9f8ff push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f900 call 0x10c990c0 */
  push32(0x10c9f905u); f_10c990c0();
  /* 10c9f905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f908 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9f90f jmp 0x10c9f91a */
  goto L_10c9f91a;
L_10c9f911:;
  /* 10c9f911 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f914 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f917 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c9f91a:;
  /* 10c9f91a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f91e jae 0x10c9f98e */
  if (!C.cf) goto L_10c9f98e;
  /* 10c9f920 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f923 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9f926 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f929 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10c9f92c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f92f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f932 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c9f935 push edx */
  push32((uint32_t)(EDX));
  /* 10c9f936 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f939 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f93a call 0x10c95790 */
  push32(0x10c9f93fu); f_10c95790();
  /* 10c9f93f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f942 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f943 call 0x10c95610 */
  push32(0x10c9f948u); f_10c95610();
  /* 10c9f948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f94b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f94e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c9f952 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c9f955 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f958 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9f95b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f95e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10c9f962 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f965 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f968 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10c9f96c push edx */
  push32((uint32_t)(EDX));
  /* 10c9f96d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f970 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f971 call 0x10c95790 */
  push32(0x10c9f976u); f_10c95790();
  /* 10c9f976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f979 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f97a call 0x10c95610 */
  push32(0x10c9f97fu); f_10c95610();
  /* 10c9f97f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f982 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f985 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c9f989 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c9f98c jmp 0x10c9f911 */
  goto L_10c9f911;
L_10c9f98e:;
  /* 10c9f98e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c9f995 jmp 0x10c9f9a0 */
  goto L_10c9f9a0;
L_10c9f997:;
  /* 10c9f997 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f99a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f99d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c9f9a0:;
  /* 10c9f9a0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9f9a4 jae 0x10c9fa16 */
  if (!C.cf) goto L_10c9fa16;
  /* 10c9f9a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f9a9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9f9ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f9af mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10c9f9b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f9b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f9b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10c9f9bd push eax */
  push32((uint32_t)(EAX));
  /* 10c9f9be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f9c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f9c2 call 0x10c95790 */
  push32(0x10c9f9c7u); f_10c95790();
  /* 10c9f9c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f9ca push eax */
  push32((uint32_t)(EAX));
  /* 10c9f9cb call 0x10c95610 */
  push32(0x10c9f9d0u); f_10c95610();
  /* 10c9f9d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9f9d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f9d6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c9f9da mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c9f9dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f9e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9f9e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f9e6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10c9f9ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9f9ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9f9f0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c9f9f4 push eax */
  push32((uint32_t)(EAX));
  /* 10c9f9f5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9f9f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9f9f9 call 0x10c95790 */
  push32(0x10c9f9feu); f_10c95790();
  /* 10c9f9fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fa01 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fa02 call 0x10c95610 */
  push32(0x10c9fa07u); f_10c95610();
  /* 10c9fa07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fa0a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fa0d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c9fa11 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c9fa14 jmp 0x10c9f997 */
  goto L_10c9f997;
L_10c9fa16:;
  /* 10c9fa16 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9fa19 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fa1c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10c9fa22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9fa25 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10c9fa2b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fa2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fa2f push edx */
  push32((uint32_t)(EDX));
  /* 10c9fa30 call 0x10c95790 */
  push32(0x10c9fa35u); f_10c95790();
  /* 10c9fa35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fa38 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fa39 call 0x10c95610 */
  push32(0x10c9fa3eu); f_10c95610();
  /* 10c9fa3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fa41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fa44 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c9fa48 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c9fa4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9fa4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fa51 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10c9fa57 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9fa5a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10c9fa60 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fa61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fa64 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fa65 call 0x10c95790 */
  push32(0x10c9fa6au); f_10c95790();
  /* 10c9fa6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fa6d push eax */
  push32((uint32_t)(EAX));
  /* 10c9fa6e call 0x10c95610 */
  push32(0x10c9fa73u); f_10c95610();
  /* 10c9fa73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fa76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fa79 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c9fa7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c9fa80 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9fa83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fa86 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10c9fa8c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9fa8f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10c9fa95 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fa96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fa99 push edx */
  push32((uint32_t)(EDX));
  /* 10c9fa9a call 0x10c95790 */
  push32(0x10c9fa9fu); f_10c95790();
  /* 10c9fa9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9faa2 push eax */
  push32((uint32_t)(EAX));
  /* 10c9faa3 call 0x10c95610 */
  push32(0x10c9faa8u); f_10c95610();
  /* 10c9faa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9faab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9faae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c9fab2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c9fab5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9fab8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fabb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10c9fac1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9fac4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10c9faca push eax */
  push32((uint32_t)(EAX));
  /* 10c9facb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9face push ecx */
  push32((uint32_t)(ECX));
  /* 10c9facf call 0x10c95790 */
  push32(0x10c9fad4u); f_10c95790();
  /* 10c9fad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fad7 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fad8 call 0x10c95610 */
  push32(0x10c9faddu); f_10c95610();
  /* 10c9fadd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fae0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9fae3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c9fae7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c9faea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c9faed mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9faf0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10c9faf6:;
  /* 10c9faf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9faf9 pop esi */
  ESI = (pop32());
  /* 10c9fafa mov esp, ebp */
  ESP = (EBP);
  /* 10c9fafc pop ebp */
  EBP = (pop32());
  /* 10c9fafd ret  */
  ESPCHK(0x10c9f790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb00 @ 0x10c9fb00 (31 bytes, 15 insns) */
void f_10c9fb00(void) {
  FTRACE(0x10c9fb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9fb00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c9fb01 mov ebp, esp */
  EBP = (ESP);
  /* 10c9fb03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9fb05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9fb08 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fb09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9fb0c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9fb0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9fb10 push edx */
  push32((uint32_t)(EDX));
  /* 10c9fb11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9fb14 push eax */
  push32((uint32_t)(EAX));
  /* 10c9fb15 call 0x10c9fb20 */
  push32(0x10c9fb1au); f_10c9fb20();
  /* 10c9fb1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9fb1d pop ebp */
  EBP = (pop32());
  /* 10c9fb1e ret  */
  ESPCHK(0x10c9fb00u, _esp0);
  ESP += 4; return;
}

