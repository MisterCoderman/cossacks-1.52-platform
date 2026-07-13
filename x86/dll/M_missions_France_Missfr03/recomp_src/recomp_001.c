#include "recomp.h"

/* FUN_10006ac0 @ 0x10626ac0 (116 bytes, 34 insns) */
void f_10626ac0(void) {
  FTRACE(0x10626ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10626ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10626ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10626ac4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10626acb push 9 */
  push32((uint32_t)(0x9u));
  /* 10626acd call 0x106262e0 */
  push32(0x10626ad2u); f_106262e0();
  /* 10626ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626ad5 call 0x106281d0 */
  push32(0x10626adau); f_106281d0();
  /* 10626ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10626adc jge 0x10626ae5 */
  if ((C.sf==C.of)) goto L_10626ae5;
  /* 10626ade mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10626ae5:;
  /* 10626ae5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10626ae7 call 0x10626380 */
  push32(0x10626aecu); f_10626380();
  /* 10626aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626aef push 0 */
  push32((uint32_t)(0x0u));
  /* 10626af1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10626af3 mov eax, dword ptr [0x1064fdac] */
  EAX = (r32((uint32_t)(0x1064fdac)));
  /* 10626af8 push eax */
  push32((uint32_t)(EAX));
  /* 10626af9 call dword ptr [0x106502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502cc))), 0x10626affu);
  /* 10626aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10626b01 jne 0x10626b2d */
  if (!C.zf) goto L_10626b2d;
  /* 10626b03 call dword ptr [0x106502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ac))), 0x10626b09u);
  /* 10626b09 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626b0c jne 0x10626b26 */
  if (!C.zf) goto L_10626b26;
  /* 10626b0e call 0x1062a7c0 */
  push32(0x10626b13u); f_1062a7c0();
  /* 10626b13 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10626b19 call 0x1062a7b0 */
  push32(0x10626b1eu); f_1062a7b0();
  /* 10626b1e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10626b24 jmp 0x10626b2d */
  goto L_10626b2d;
L_10626b26:;
  /* 10626b26 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10626b2d:;
  /* 10626b2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626b30 mov esp, ebp */
  ESP = (EBP);
  /* 10626b32 pop ebp */
  EBP = (pop32());
  /* 10626b33 ret  */
  ESPCHK(0x10626ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b40 @ 0x10626b40 (10 bytes, 5 insns) */
void f_10626b40(void) {
  FTRACE(0x10626b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10626b41 mov ebp, esp */
  EBP = (ESP);
  /* 10626b43 call 0x10626ac0 */
  push32(0x10626b48u); f_10626ac0();
  /* 10626b48 pop ebp */
  EBP = (pop32());
  /* 10626b49 ret  */
  ESPCHK(0x10626b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b50 @ 0x10626b50 (10 bytes, 5 insns) */
void f_10626b50(void) {
  FTRACE(0x10626b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10626b51 mov ebp, esp */
  EBP = (ESP);
  /* 10626b53 mov eax, dword ptr [0x1064cc94] */
  EAX = (r32((uint32_t)(0x1064cc94)));
  /* 10626b58 pop ebp */
  EBP = (pop32());
  /* 10626b59 ret  */
  ESPCHK(0x10626b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x10626b60 (31 bytes, 11 insns) */
void f_10626b60(void) {
  FTRACE(0x10626b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10626b61 mov ebp, esp */
  EBP = (ESP);
  /* 10626b63 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626b6a jbe 0x10626b70 */
  if ((C.cf||C.zf)) goto L_10626b70;
  /* 10626b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10626b6e jmp 0x10626b7d */
  goto L_10626b7d;
L_10626b70:;
  /* 10626b70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626b73 mov dword ptr [0x1064cc94], eax */
  w32((uint32_t)(0x1064cc94), (EAX));
  /* 10626b78 mov eax, 1 */
  EAX = (0x1u);
L_10626b7d:;
  /* 10626b7d pop ebp */
  EBP = (pop32());
  /* 10626b7e ret  */
  ESPCHK(0x10626b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b80 @ 0x10626b80 (89 bytes, 20 insns) */
void f_10626b80(void) {
  FTRACE(0x10626b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10626b81 mov ebp, esp */
  EBP = (ESP);
  /* 10626b83 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10626b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10626b8a mov eax, dword ptr [0x1064fdac] */
  EAX = (r32((uint32_t)(0x1064fdac)));
  /* 10626b8f push eax */
  push32((uint32_t)(EAX));
  /* 10626b90 call dword ptr [0x106502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d4))), 0x10626b96u);
  /* 10626b96 mov dword ptr [0x1064fda8], eax */
  w32((uint32_t)(0x1064fda8), (EAX));
  /* 10626b9b cmp dword ptr [0x1064fda8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064fda8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626ba2 jne 0x10626ba8 */
  if (!C.zf) goto L_10626ba8;
  /* 10626ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10626ba6 jmp 0x10626bd7 */
  goto L_10626bd7;
L_10626ba8:;
  /* 10626ba8 mov ecx, dword ptr [0x1064fda8] */
  ECX = (r32((uint32_t)(0x1064fda8)));
  /* 10626bae mov dword ptr [0x1064fd9c], ecx */
  w32((uint32_t)(0x1064fd9c), (ECX));
  /* 10626bb4 mov dword ptr [0x1064fda0], 0 */
  w32((uint32_t)(0x1064fda0), (0x0u));
  /* 10626bbe mov dword ptr [0x1064fda4], 0 */
  w32((uint32_t)(0x1064fda4), (0x0u));
  /* 10626bc8 mov dword ptr [0x1064fd88], 0x10 */
  w32((uint32_t)(0x1064fd88), (0x10u));
  /* 10626bd2 mov eax, 1 */
  EAX = (0x1u);
L_10626bd7:;
  /* 10626bd7 pop ebp */
  EBP = (pop32());
  /* 10626bd8 ret  */
  ESPCHK(0x10626b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x10626be0 (85 bytes, 29 insns) */
void f_10626be0(void) {
  FTRACE(0x10626be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626be0 push ebp */
  push32((uint32_t)(EBP));
  /* 10626be1 mov ebp, esp */
  EBP = (ESP);
  /* 10626be3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626be6 mov eax, dword ptr [0x1064fda4] */
  EAX = (r32((uint32_t)(0x1064fda4)));
  /* 10626beb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10626bee mov ecx, dword ptr [0x1064fda8] */
  ECX = (r32((uint32_t)(0x1064fda8)));
  /* 10626bf4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626bf6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10626bf9 mov edx, dword ptr [0x1064fda8] */
  EDX = (r32((uint32_t)(0x1064fda8)));
  /* 10626bff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10626c02:;
  /* 10626c02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626c05 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626c08 jae 0x10626c2f */
  if (!C.cf) goto L_10626c2f;
  /* 10626c0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626c0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626c10 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626c13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10626c16 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626c1d jae 0x10626c24 */
  if (!C.cf) goto L_10626c24;
  /* 10626c1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626c22 jmp 0x10626c31 */
  goto L_10626c31;
L_10626c24:;
  /* 10626c24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626c27 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626c2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10626c2d jmp 0x10626c02 */
  goto L_10626c02;
L_10626c2f:;
  /* 10626c2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10626c31:;
  /* 10626c31 mov esp, ebp */
  ESP = (EBP);
  /* 10626c33 pop ebp */
  EBP = (pop32());
  /* 10626c34 ret  */
  ESPCHK(0x10626be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c40 @ 0x10626c40 (95 bytes, 33 insns) */
void f_10626c40(void) {
  FTRACE(0x10626c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10626c41 mov ebp, esp */
  EBP = (ESP);
  /* 10626c43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626c49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626c4c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626c4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10626c52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626c55 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10626c58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10626c5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10626c60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626c63 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10626c65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626c68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10626c6b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10626c6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10626c6f jne 0x10626c91 */
  if (!C.zf) goto L_10626c91;
  /* 10626c71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626c74 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10626c77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10626c79 jne 0x10626c91 */
  if (!C.zf) goto L_10626c91;
  /* 10626c7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626c7e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10626c84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10626c86 je 0x10626c91 */
  if (C.zf) goto L_10626c91;
  /* 10626c88 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10626c8f jmp 0x10626c98 */
  goto L_10626c98;
L_10626c91:;
  /* 10626c91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10626c98:;
  /* 10626c98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10626c9b mov esp, ebp */
  ESP = (EBP);
  /* 10626c9d pop ebp */
  EBP = (pop32());
  /* 10626c9e ret  */
  ESPCHK(0x10626c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca0 @ 0x10626ca0 (1485 bytes, 453 insns) */
void f_10626ca0(void) {
  FTRACE(0x10626ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10626ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10626ca3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626ca9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10626cac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10626caf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626cb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626cb5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626cb8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10626cbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10626cbe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10626cc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10626cc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626cc7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10626ccd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626cd0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10626cd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10626cda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626cdd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626ce0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10626ce3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10626ce6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10626ce8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626ceb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10626cee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10626cf1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626cf4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10626cf7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10626cfa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10626cfc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10626cff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10626d02 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10626d05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10626d08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10626d0b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10626d0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10626d10 jne 0x10626e38 */
  if (!C.zf) goto L_10626e38;
  /* 10626d16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10626d19 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10626d1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626d1f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10626d22 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626d26 jbe 0x10626d2f */
  if ((C.cf||C.zf)) goto L_10626d2f;
  /* 10626d28 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10626d2f:;
  /* 10626d2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10626d32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10626d35 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10626d38 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626d3b jne 0x10626e11 */
  if (!C.zf) goto L_10626e11;
  /* 10626d41 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626d45 jae 0x10626da6 */
  if (!C.cf) goto L_10626da6;
  /* 10626d47 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10626d4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10626d4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10626d51 not eax */
  EAX = (~(EAX));
  /* 10626d53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626d56 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626d59 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10626d5d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10626d5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626d62 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626d65 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10626d69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626d6c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626d6f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10626d72 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10626d75 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626d78 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626d7b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10626d7e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626d81 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626d84 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10626d88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10626d8a jne 0x10626da4 */
  if (!C.zf) goto L_10626da4;
  /* 10626d8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10626d91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10626d94 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10626d96 not eax */
  EAX = (~(EAX));
  /* 10626d98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626d9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10626d9d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10626d9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626da2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10626da4:;
  /* 10626da4 jmp 0x10626e11 */
  goto L_10626e11;
L_10626da6:;
  /* 10626da6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10626da9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626dac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10626db1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10626db3 not edx */
  EDX = (~(EDX));
  /* 10626db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626db8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626dbb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10626dc2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10626dc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626dc7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626dca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10626dd1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626dd4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626dd7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10626dda sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10626ddd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626de0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626de3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10626de6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626de9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626dec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10626df0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10626df2 jne 0x10626e11 */
  if (!C.zf) goto L_10626e11;
  /* 10626df4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10626df7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626dfa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10626dff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10626e01 not edx */
  EDX = (~(EDX));
  /* 10626e03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626e06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10626e09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10626e0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626e0e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10626e11:;
  /* 10626e11 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10626e14 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10626e17 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10626e1a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10626e1d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10626e20 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10626e23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10626e26 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10626e29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10626e2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10626e2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10626e32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626e35 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10626e38:;
  /* 10626e38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10626e3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10626e3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626e41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10626e44 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626e48 jbe 0x10626e51 */
  if ((C.cf||C.zf)) goto L_10626e51;
  /* 10626e4a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10626e51:;
  /* 10626e51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10626e54 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10626e57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10626e59 jne 0x10626fb5 */
  if (!C.zf) goto L_10626fb5;
  /* 10626e5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10626e62 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626e65 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10626e68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10626e6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10626e6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626e71 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10626e74 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626e78 jbe 0x10626e81 */
  if ((C.cf||C.zf)) goto L_10626e81;
  /* 10626e7a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10626e81:;
  /* 10626e81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10626e84 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626e87 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10626e8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10626e8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10626e90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626e93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10626e96 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626e9a jbe 0x10626ea3 */
  if ((C.cf||C.zf)) goto L_10626ea3;
  /* 10626e9c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10626ea3:;
  /* 10626ea3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10626ea6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626ea9 je 0x10626faf */
  if (C.zf) goto L_10626faf;
  /* 10626eaf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10626eb2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10626eb5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10626eb8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626ebb jne 0x10626f91 */
  if (!C.zf) goto L_10626f91;
  /* 10626ec1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626ec5 jae 0x10626f26 */
  if (!C.cf) goto L_10626f26;
  /* 10626ec7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10626ecc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10626ecf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10626ed1 not edx */
  EDX = (~(EDX));
  /* 10626ed3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626ed6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626ed9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10626edd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10626edf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626ee2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626ee5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10626ee9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626eec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626eef mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10626ef2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10626ef5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626ef8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626efb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10626efe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626f01 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626f04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10626f08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10626f0a jne 0x10626f24 */
  if (!C.zf) goto L_10626f24;
  /* 10626f0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10626f11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10626f14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10626f16 not edx */
  EDX = (~(EDX));
  /* 10626f18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626f1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10626f1d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10626f1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626f22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10626f24:;
  /* 10626f24 jmp 0x10626f91 */
  goto L_10626f91;
L_10626f26:;
  /* 10626f26 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10626f29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626f2c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10626f31 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10626f33 not eax */
  EAX = (~(EAX));
  /* 10626f35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626f38 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626f3b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10626f42 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10626f44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626f47 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626f4a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10626f51 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626f54 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626f57 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10626f5a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10626f5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626f60 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626f63 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10626f66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10626f69 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626f6c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10626f70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10626f72 jne 0x10626f91 */
  if (!C.zf) goto L_10626f91;
  /* 10626f74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10626f77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626f7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10626f7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10626f81 not eax */
  EAX = (~(EAX));
  /* 10626f83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626f86 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10626f89 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10626f8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626f8e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10626f91:;
  /* 10626f91 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10626f94 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10626f97 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10626f9a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10626f9d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10626fa0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10626fa3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10626fa6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10626fa9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10626fac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10626faf:;
  /* 10626faf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10626fb2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10626fb5:;
  /* 10626fb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10626fb8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10626fbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10626fbd jne 0x10626fcb */
  if (!C.zf) goto L_10626fcb;
  /* 10626fbf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10626fc2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626fc5 je 0x106270db */
  if (C.zf) goto L_106270db;
L_10626fcb:;
  /* 10626fcb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10626fce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626fd1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10626fd4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10626fd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10626fda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10626fdd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10626fe0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10626fe3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10626fe6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10626fe9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10626fec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10626fef mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10626ff2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10626ff5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10626ff8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10626ffb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10626ffe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10627001 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10627004 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10627007 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1062700a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062700d jne 0x106270db */
  if (!C.zf) goto L_106270db;
  /* 10627013 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627017 jae 0x10627074 */
  if (!C.cf) goto L_10627074;
  /* 10627019 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1062701c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062701f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10627023 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10627026 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627029 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1062702c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1062702f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10627032 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627035 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10627038 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062703a jne 0x10627052 */
  if (!C.zf) goto L_10627052;
  /* 1062703c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627041 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627044 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10627046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627049 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1062704b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1062704d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627050 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10627052:;
  /* 10627052 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10627057 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062705a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1062705c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062705f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10627062 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10627066 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10627068 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062706b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1062706e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10627072 jmp 0x106270db */
  goto L_106270db;
L_10627074:;
  /* 10627074 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10627077 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062707a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1062707e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10627081 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627084 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10627087 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1062708a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1062708d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627090 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10627093 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10627095 jne 0x106270b2 */
  if (!C.zf) goto L_106270b2;
  /* 10627097 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062709a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062709d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106270a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106270a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106270a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106270aa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106270ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106270af mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106270b2:;
  /* 106270b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106270b5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106270b8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106270bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106270bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106270c2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106270c5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106270cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106270ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106270d1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106270d4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_106270db:;
  /* 106270db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106270de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106270e1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106270e3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106270e6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106270e9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106270ec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 106270ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106270f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106270f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106270f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106270fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106270fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106270ff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627102 jne 0x10627269 */
  if (!C.zf) goto L_10627269;
  /* 10627108 cmp dword ptr [0x1064fda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064fda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062710f je 0x10627258 */
  if (C.zf) goto L_10627258;
  /* 10627115 mov eax, dword ptr [0x1064fd98] */
  EAX = (r32((uint32_t)(0x1064fd98)));
  /* 1062711a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1062711d mov ecx, dword ptr [0x1064fda0] */
  ECX = (r32((uint32_t)(0x1064fda0)));
  /* 10627123 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10627126 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627128 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1062712b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10627130 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10627135 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627138 push eax */
  push32((uint32_t)(EAX));
  /* 10627139 call dword ptr [0x106502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f0))), 0x1062713fu);
  /* 1062713f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627144 mov ecx, dword ptr [0x1064fd98] */
  ECX = (r32((uint32_t)(0x1064fd98)));
  /* 1062714a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1062714c mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 10627151 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10627154 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10627156 mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 1062715c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1062715f mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 10627164 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10627167 mov edx, dword ptr [0x1064fd98] */
  EDX = (r32((uint32_t)(0x1064fd98)));
  /* 1062716d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10627178 mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 1062717d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10627180 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10627183 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10627186 mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 1062718b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062718e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10627191 mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 10627197 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1062719a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1062719e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106271a0 jne 0x106271b6 */
  if (!C.zf) goto L_106271b6;
  /* 106271a2 mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 106271a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106271ab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 106271ad mov ecx, dword ptr [0x1064fda0] */
  ECX = (r32((uint32_t)(0x1064fda0)));
  /* 106271b3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_106271b6:;
  /* 106271b6 mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 106271bc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106271c0 jne 0x10627258 */
  if (!C.zf) goto L_10627258;
  /* 106271c6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106271cb push 0 */
  push32((uint32_t)(0x0u));
  /* 106271cd mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 106271d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106271d5 push ecx */
  push32((uint32_t)(ECX));
  /* 106271d6 call dword ptr [0x106502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f0))), 0x106271dcu);
  /* 106271dc mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 106271e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106271e5 push eax */
  push32((uint32_t)(EAX));
  /* 106271e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106271e8 mov ecx, dword ptr [0x1064fdac] */
  ECX = (r32((uint32_t)(0x1064fdac)));
  /* 106271ee push ecx */
  push32((uint32_t)(ECX));
  /* 106271ef call dword ptr [0x106502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ec))), 0x106271f5u);
  /* 106271f5 mov edx, dword ptr [0x1064fda4] */
  EDX = (r32((uint32_t)(0x1064fda4)));
  /* 106271fb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106271fe mov eax, dword ptr [0x1064fda8] */
  EAX = (r32((uint32_t)(0x1064fda8)));
  /* 10627203 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627205 mov ecx, dword ptr [0x1064fda0] */
  ECX = (r32((uint32_t)(0x1064fda0)));
  /* 1062720b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062720e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627210 push eax */
  push32((uint32_t)(EAX));
  /* 10627211 mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 10627217 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062721a push edx */
  push32((uint32_t)(EDX));
  /* 1062721b mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 10627220 push eax */
  push32((uint32_t)(EAX));
  /* 10627221 call 0x1062a7d0 */
  push32(0x10627226u); f_1062a7d0();
  /* 10627226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10627229 mov ecx, dword ptr [0x1064fda4] */
  ECX = (r32((uint32_t)(0x1064fda4)));
  /* 1062722f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627232 mov dword ptr [0x1064fda4], ecx */
  w32((uint32_t)(0x1064fda4), (ECX));
  /* 10627238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062723b cmp edx, dword ptr [0x1064fda0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1064fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627241 jbe 0x1062724c */
  if ((C.cf||C.zf)) goto L_1062724c;
  /* 10627243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627246 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627249 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1062724c:;
  /* 1062724c mov ecx, dword ptr [0x1064fda8] */
  ECX = (r32((uint32_t)(0x1064fda8)));
  /* 10627252 mov dword ptr [0x1064fd9c], ecx */
  w32((uint32_t)(0x1064fd9c), (ECX));
L_10627258:;
  /* 10627258 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062725b mov dword ptr [0x1064fda0], edx */
  w32((uint32_t)(0x1064fda0), (EDX));
  /* 10627261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627264 mov dword ptr [0x1064fd98], eax */
  w32((uint32_t)(0x1064fd98), (EAX));
L_10627269:;
  /* 10627269 mov esp, ebp */
  ESP = (EBP);
  /* 1062726b pop ebp */
  EBP = (pop32());
  /* 1062726c ret  */
  ESPCHK(0x10626ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007270 @ 0x10627270 (1334 bytes, 427 insns) */
void f_10627270(void) {
  FTRACE(0x10627270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10627270 push ebp */
  push32((uint32_t)(EBP));
  /* 10627271 mov ebp, esp */
  EBP = (ESP);
  /* 10627273 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627276 push esi */
  push32((uint32_t)(ESI));
  /* 10627277 mov eax, dword ptr [0x1064fda4] */
  EAX = (r32((uint32_t)(0x1064fda4)));
  /* 1062727c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062727f mov ecx, dword ptr [0x1064fda8] */
  ECX = (r32((uint32_t)(0x1064fda8)));
  /* 10627285 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627287 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1062728a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062728d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627290 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10627293 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10627296 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627299 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1062729c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062729f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106272a2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106272a6 jge 0x106272bc */
  if ((C.sf==C.of)) goto L_106272bc;
  /* 106272a8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106272ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106272ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106272b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106272b3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 106272ba jmp 0x106272d1 */
  goto L_106272d1;
L_106272bc:;
  /* 106272bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106272c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106272c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106272c9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106272cc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106272ce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_106272d1:;
  /* 106272d1 mov ecx, dword ptr [0x1064fd9c] */
  ECX = (r32((uint32_t)(0x1064fd9c)));
  /* 106272d7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_106272da:;
  /* 106272da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106272dd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106272e0 jae 0x10627306 */
  if (!C.cf) goto L_10627306;
  /* 106272e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106272e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106272e8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 106272ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106272ed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 106272f0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 106272f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106272f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106272f7 je 0x106272fb */
  if (C.zf) goto L_106272fb;
  /* 106272f9 jmp 0x10627306 */
  goto L_10627306;
L_106272fb:;
  /* 106272fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106272fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627301 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10627304 jmp 0x106272da */
  goto L_106272da;
L_10627306:;
  /* 10627306 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627309 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062730c jne 0x106273ed */
  if (!C.zf) goto L_106273ed;
  /* 10627312 mov eax, dword ptr [0x1064fda8] */
  EAX = (r32((uint32_t)(0x1064fda8)));
  /* 10627317 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1062731a:;
  /* 1062731a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062731d cmp ecx, dword ptr [0x1064fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627323 jae 0x10627349 */
  if (!C.cf) goto L_10627349;
  /* 10627325 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627328 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062732b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1062732d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627330 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10627333 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10627336 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10627338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062733a je 0x1062733e */
  if (C.zf) goto L_1062733e;
  /* 1062733c jmp 0x10627349 */
  goto L_10627349;
L_1062733e:;
  /* 1062733e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627341 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627344 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10627347 jmp 0x1062731a */
  goto L_1062731a;
L_10627349:;
  /* 10627349 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062734c cmp ecx, dword ptr [0x1064fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627352 jne 0x106273ed */
  if (!C.zf) goto L_106273ed;
L_10627358:;
  /* 10627358 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062735b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062735e jae 0x10627376 */
  if (!C.cf) goto L_10627376;
  /* 10627360 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627363 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627367 je 0x1062736b */
  if (C.zf) goto L_1062736b;
  /* 10627369 jmp 0x10627376 */
  goto L_10627376;
L_1062736b:;
  /* 1062736b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062736e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627371 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10627374 jmp 0x10627358 */
  goto L_10627358;
L_10627376:;
  /* 10627376 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627379 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062737c jne 0x106273c7 */
  if (!C.zf) goto L_106273c7;
  /* 1062737e mov eax, dword ptr [0x1064fda8] */
  EAX = (r32((uint32_t)(0x1064fda8)));
  /* 10627383 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10627386:;
  /* 10627386 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627389 cmp ecx, dword ptr [0x1064fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062738f jae 0x106273a7 */
  if (!C.cf) goto L_106273a7;
  /* 10627391 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627394 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627398 je 0x1062739c */
  if (C.zf) goto L_1062739c;
  /* 1062739a jmp 0x106273a7 */
  goto L_106273a7;
L_1062739c:;
  /* 1062739c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062739f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106273a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106273a5 jmp 0x10627386 */
  goto L_10627386;
L_106273a7:;
  /* 106273a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106273aa cmp ecx, dword ptr [0x1064fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106273b0 jne 0x106273c7 */
  if (!C.zf) goto L_106273c7;
  /* 106273b2 call 0x106277b0 */
  push32(0x106273b7u); f_106277b0();
  /* 106273b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106273ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106273be jne 0x106273c7 */
  if (!C.zf) goto L_106273c7;
  /* 106273c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106273c2 jmp 0x106277a1 */
  goto L_106277a1;
L_106273c7:;
  /* 106273c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106273ca push edx */
  push32((uint32_t)(EDX));
  /* 106273cb call 0x106278c0 */
  push32(0x106273d0u); f_106278c0();
  /* 106273d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106273d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106273d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106273d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106273db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106273de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106273e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106273e4 jne 0x106273ed */
  if (!C.zf) goto L_106273ed;
  /* 106273e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106273e8 jmp 0x106277a1 */
  goto L_106277a1;
L_106273ed:;
  /* 106273ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106273f0 mov dword ptr [0x1064fd9c], edx */
  w32((uint32_t)(0x1064fd9c), (EDX));
  /* 106273f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106273f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106273fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 106273ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627402 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10627404 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10627407 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062740b je 0x10627430 */
  if (C.zf) goto L_10627430;
  /* 1062740d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627410 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627413 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10627416 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1062741a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062741d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627420 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10627423 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1062742a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1062742c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062742e jne 0x10627465 */
  if (!C.zf) goto L_10627465;
L_10627430:;
  /* 10627430 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10627437:;
  /* 10627437 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062743a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1062743d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10627440 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10627444 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627447 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1062744a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1062744d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10627454 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10627456 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10627458 jne 0x10627465 */
  if (!C.zf) goto L_10627465;
  /* 1062745a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062745d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627460 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10627463 jmp 0x10627437 */
  goto L_10627437;
L_10627465:;
  /* 10627465 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627468 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062746e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627471 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10627478 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1062747b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10627482 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627485 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627488 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062748b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1062748f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10627492 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627496 jne 0x106274b2 */
  if (!C.zf) goto L_106274b2;
  /* 10627498 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1062749f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106274a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106274a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106274a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 106274af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_106274b2:;
  /* 106274b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106274b6 jl 0x106274cb */
  if ((C.sf!=C.of)) goto L_106274cb;
  /* 106274b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106274bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106274bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106274c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106274c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106274c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106274c9 jmp 0x106274b2 */
  goto L_106274b2;
L_106274cb:;
  /* 106274cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106274ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106274d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 106274d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106274d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106274db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106274dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106274e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106274e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106274e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106274e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106274ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106274ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106274f3 jle 0x106274fc */
  if ((C.zf||C.sf!=C.of)) goto L_106274fc;
  /* 106274f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_106274fc:;
  /* 106274fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106274ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627502 je 0x10627720 */
  if (C.zf) goto L_10627720;
  /* 10627508 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062750b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062750e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10627511 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627514 jne 0x106275ea */
  if (!C.zf) goto L_106275ea;
  /* 1062751a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062751e jge 0x1062757f */
  if ((C.sf==C.of)) goto L_1062757f;
  /* 10627520 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10627525 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627528 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1062752a not eax */
  EAX = (~(EAX));
  /* 1062752c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062752f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627532 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10627536 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10627538 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062753b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1062753e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10627542 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627545 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627548 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1062754b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1062754e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627551 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627554 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10627557 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1062755a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062755d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10627561 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10627563 jne 0x1062757d */
  if (!C.zf) goto L_1062757d;
  /* 10627565 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1062756a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062756d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1062756f not eax */
  EAX = (~(EAX));
  /* 10627571 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627574 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10627576 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10627578 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062757b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1062757d:;
  /* 1062757d jmp 0x106275ea */
  goto L_106275ea;
L_1062757f:;
  /* 1062757f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627582 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627585 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1062758a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1062758c not edx */
  EDX = (~(EDX));
  /* 1062758e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627591 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627594 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1062759b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1062759d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106275a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106275a3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 106275aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106275ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106275b0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106275b3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106275b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106275b9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106275bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106275bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106275c2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106275c5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106275c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106275cb jne 0x106275ea */
  if (!C.zf) goto L_106275ea;
  /* 106275cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106275d0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106275d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106275d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106275da not edx */
  EDX = (~(EDX));
  /* 106275dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106275df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106275e2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106275e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106275e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106275ea:;
  /* 106275ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106275ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106275f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106275f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106275f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106275f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106275fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106275ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627602 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10627605 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10627608 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062760c je 0x10627720 */
  if (C.zf) goto L_10627720;
  /* 10627612 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627618 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1062761b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062761e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627621 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10627624 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10627627 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1062762a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062762d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10627630 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10627633 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10627636 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627639 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1062763c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062763f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10627642 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627645 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10627648 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062764b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062764e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10627651 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627654 jne 0x10627720 */
  if (!C.zf) goto L_10627720;
  /* 1062765a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062765e jge 0x106276ba */
  if ((C.sf==C.of)) goto L_106276ba;
  /* 10627660 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627663 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627666 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1062766a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1062766d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627670 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10627673 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10627675 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627678 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062767b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1062767e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10627680 jne 0x10627698 */
  if (!C.zf) goto L_10627698;
  /* 10627682 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10627687 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062768a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1062768c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062768f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10627691 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10627693 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627696 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10627698:;
  /* 10627698 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1062769d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106276a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106276a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106276a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106276a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106276ac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106276ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106276b1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106276b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106276b8 jmp 0x10627720 */
  goto L_10627720;
L_106276ba:;
  /* 106276ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106276bd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106276c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106276c4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106276c7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106276ca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106276cd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106276cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106276d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106276d5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 106276d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106276da jne 0x106276f7 */
  if (!C.zf) goto L_106276f7;
  /* 106276dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106276df sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106276e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106276e7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106276e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106276ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106276ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106276f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106276f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106276f7:;
  /* 106276f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106276fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106276fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627702 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10627704 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627707 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1062770a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10627711 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10627713 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627716 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627719 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10627720:;
  /* 10627720 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627724 je 0x1062773a */
  if (C.zf) goto L_1062773a;
  /* 10627726 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627729 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062772c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1062772e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627731 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627734 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10627737 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1062773a:;
  /* 1062773a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062773d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627740 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10627743 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627746 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627749 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062774c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1062774e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627751 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627754 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627757 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062775a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1062775d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627760 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10627762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627765 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10627767 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062776a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062776d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1062776f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10627771 jne 0x10627793 */
  if (!C.zf) goto L_10627793;
  /* 10627773 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627776 cmp eax, dword ptr [0x1064fda0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062777c jne 0x10627793 */
  if (!C.zf) goto L_10627793;
  /* 1062777e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627781 cmp ecx, dword ptr [0x1064fd98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064fd98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627787 jne 0x10627793 */
  if (!C.zf) goto L_10627793;
  /* 10627789 mov dword ptr [0x1064fda0], 0 */
  w32((uint32_t)(0x1064fda0), (0x0u));
L_10627793:;
  /* 10627793 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10627796 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627799 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1062779b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062779e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_106277a1:;
  /* 106277a1 pop esi */
  ESI = (pop32());
  /* 106277a2 mov esp, ebp */
  ESP = (EBP);
  /* 106277a4 pop ebp */
  EBP = (pop32());
  /* 106277a5 ret  */
  ESPCHK(0x10627270u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x106277b0 (271 bytes, 78 insns) */
void f_106277b0(void) {
  FTRACE(0x106277b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106277b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106277b1 mov ebp, esp */
  EBP = (ESP);
  /* 106277b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106277b4 mov eax, dword ptr [0x1064fda4] */
  EAX = (r32((uint32_t)(0x1064fda4)));
  /* 106277b9 cmp eax, dword ptr [0x1064fd88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064fd88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106277bf jne 0x1062780b */
  if (!C.zf) goto L_1062780b;
  /* 106277c1 mov ecx, dword ptr [0x1064fd88] */
  ECX = (r32((uint32_t)(0x1064fd88)));
  /* 106277c7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106277ca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106277cd push ecx */
  push32((uint32_t)(ECX));
  /* 106277ce mov edx, dword ptr [0x1064fda8] */
  EDX = (r32((uint32_t)(0x1064fda8)));
  /* 106277d4 push edx */
  push32((uint32_t)(EDX));
  /* 106277d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106277d7 mov eax, dword ptr [0x1064fdac] */
  EAX = (r32((uint32_t)(0x1064fdac)));
  /* 106277dc push eax */
  push32((uint32_t)(EAX));
  /* 106277dd call dword ptr [0x106502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d0))), 0x106277e3u);
  /* 106277e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106277e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106277ea jne 0x106277f3 */
  if (!C.zf) goto L_106277f3;
  /* 106277ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106277ee jmp 0x106278bb */
  goto L_106278bb;
L_106277f3:;
  /* 106277f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106277f6 mov dword ptr [0x1064fda8], ecx */
  w32((uint32_t)(0x1064fda8), (ECX));
  /* 106277fc mov edx, dword ptr [0x1064fd88] */
  EDX = (r32((uint32_t)(0x1064fd88)));
  /* 10627802 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627805 mov dword ptr [0x1064fd88], edx */
  w32((uint32_t)(0x1064fd88), (EDX));
L_1062780b:;
  /* 1062780b mov eax, dword ptr [0x1064fda4] */
  EAX = (r32((uint32_t)(0x1064fda4)));
  /* 10627810 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10627813 mov ecx, dword ptr [0x1064fda8] */
  ECX = (r32((uint32_t)(0x1064fda8)));
  /* 10627819 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062781b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1062781e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10627823 push 8 */
  push32((uint32_t)(0x8u));
  /* 10627825 mov edx, dword ptr [0x1064fdac] */
  EDX = (r32((uint32_t)(0x1064fdac)));
  /* 1062782b push edx */
  push32((uint32_t)(EDX));
  /* 1062782c call dword ptr [0x106502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d4))), 0x10627832u);
  /* 10627832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627835 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10627838 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062783b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062783f jne 0x10627845 */
  if (!C.zf) goto L_10627845;
  /* 10627841 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10627843 jmp 0x106278bb */
  goto L_106278bb;
L_10627845:;
  /* 10627845 push 4 */
  push32((uint32_t)(0x4u));
  /* 10627847 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1062784c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10627851 push 0 */
  push32((uint32_t)(0x0u));
  /* 10627853 call dword ptr [0x10650314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650314))), 0x10627859u);
  /* 10627859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062785c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1062785f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627862 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627866 jne 0x10627882 */
  if (!C.zf) goto L_10627882;
  /* 10627868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062786b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062786e push ecx */
  push32((uint32_t)(ECX));
  /* 1062786f push 0 */
  push32((uint32_t)(0x0u));
  /* 10627871 mov edx, dword ptr [0x1064fdac] */
  EDX = (r32((uint32_t)(0x1064fdac)));
  /* 10627877 push edx */
  push32((uint32_t)(EDX));
  /* 10627878 call dword ptr [0x106502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ec))), 0x1062787eu);
  /* 1062787e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10627880 jmp 0x106278bb */
  goto L_106278bb;
L_10627882:;
  /* 10627882 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627885 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1062788b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062788e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10627895 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627898 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1062789f mov eax, dword ptr [0x1064fda4] */
  EAX = (r32((uint32_t)(0x1064fda4)));
  /* 106278a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106278a7 mov dword ptr [0x1064fda4], eax */
  w32((uint32_t)(0x1064fda4), (EAX));
  /* 106278ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106278af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106278b2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 106278b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106278bb:;
  /* 106278bb mov esp, ebp */
  ESP = (EBP);
  /* 106278bd pop ebp */
  EBP = (pop32());
  /* 106278be ret  */
  ESPCHK(0x106277b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078c0 @ 0x106278c0 (494 bytes, 149 insns) */
void f_106278c0(void) {
  FTRACE(0x106278c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106278c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106278c1 mov ebp, esp */
  EBP = (ESP);
  /* 106278c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106278c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106278c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106278cc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106278cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106278d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106278d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106278d8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_106278df:;
  /* 106278df cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106278e3 jl 0x106278f8 */
  if ((C.sf!=C.of)) goto L_106278f8;
  /* 106278e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106278e8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106278ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106278ed mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106278f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106278f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106278f6 jmp 0x106278df */
  goto L_106278df;
L_106278f8:;
  /* 106278f8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106278fb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10627901 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627904 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1062790b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1062790e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10627915 jmp 0x10627920 */
  goto L_10627920;
L_10627917:;
  /* 10627917 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062791a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062791d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10627920:;
  /* 10627920 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627924 jge 0x10627946 */
  if ((C.sf==C.of)) goto L_10627946;
  /* 10627926 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627929 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062792c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1062792f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10627932 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627935 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627938 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1062793b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062793e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627941 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10627944 jmp 0x10627917 */
  goto L_10627917;
L_10627946:;
  /* 10627946 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627949 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1062794c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062794f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10627952 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627954 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10627957 push 4 */
  push32((uint32_t)(0x4u));
  /* 10627959 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1062795e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10627963 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627966 push edx */
  push32((uint32_t)(EDX));
  /* 10627967 call dword ptr [0x10650314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650314))), 0x1062796du);
  /* 1062796d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062796f jne 0x10627979 */
  if (!C.zf) goto L_10627979;
  /* 10627971 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10627974 jmp 0x10627aaa */
  goto L_10627aaa;
L_10627979:;
  /* 10627979 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062797c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627981 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10627984 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627987 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1062798a jmp 0x10627998 */
  goto L_10627998;
L_1062798c:;
  /* 1062798c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062798f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627995 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10627998:;
  /* 10627998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062799b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062799e ja 0x106279fd */
  if ((!C.cf&&!C.zf)) goto L_106279fd;
  /* 106279a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106279a3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 106279aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106279ad mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 106279b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106279ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106279bd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106279c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106279c3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 106279c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106279cc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106279d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106279d5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106279d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106279db sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106279e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106279e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106279e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106279ea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106279ef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106279f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106279f5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 106279fb jmp 0x1062798c */
  goto L_1062798c;
L_106279fd:;
  /* 106279fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10627a00 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627a06 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10627a09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627a0c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627a0f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627a12 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10627a15 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627a18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10627a1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10627a1e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627a21 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627a24 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10627a27 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10627a2a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627a2d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627a30 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10627a33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627a36 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10627a39 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10627a3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627a3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627a42 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10627a45 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627a48 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627a4b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10627a53 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627a56 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627a59 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10627a64 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627a67 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10627a6b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627a6e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10627a71 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10627a74 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627a77 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10627a7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10627a7c jne 0x10627a8d */
  if (!C.zf) goto L_10627a8d;
  /* 10627a7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627a81 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10627a84 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10627a87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627a8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10627a8d:;
  /* 10627a8d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627a92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627a95 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10627a97 not edx */
  EDX = (~(EDX));
  /* 10627a99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627a9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10627a9f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10627aa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627aa4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10627aa7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10627aaa:;
  /* 10627aaa mov esp, ebp */
  ESP = (EBP);
  /* 10627aac pop ebp */
  EBP = (pop32());
  /* 10627aad ret  */
  ESPCHK(0x106278c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ab0 @ 0x10627ab0 (1515 bytes, 489 insns) */
void f_10627ab0(void) {
  FTRACE(0x10627ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10627ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10627ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10627ab3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627ab6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10627ab9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627abc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10627abe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10627ac1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627ac4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10627ac7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10627aca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627acd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10627ad0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627ad3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10627ad6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10627ad9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10627adc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10627adf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627ae2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10627ae8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627aeb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10627af2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10627af5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10627af8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627afb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10627afe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627b01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10627b03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627b06 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10627b09 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627b0c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627b0f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10627b12 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627b15 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10627b17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10627b1a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10627b1d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627b20 jle 0x10627dd6 */
  if ((C.zf||C.sf!=C.of)) goto L_10627dd6;
  /* 10627b26 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627b29 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10627b2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10627b2e jne 0x10627b3b */
  if (!C.zf) goto L_10627b3b;
  /* 10627b30 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627b33 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627b36 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627b39 jle 0x10627b42 */
  if ((C.zf||C.sf!=C.of)) goto L_10627b42;
L_10627b3b:;
  /* 10627b3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10627b3d jmp 0x10628097 */
  goto L_10628097;
L_10627b42:;
  /* 10627b42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627b45 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10627b48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627b4b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10627b4e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627b52 jbe 0x10627b5b */
  if ((C.cf||C.zf)) goto L_10627b5b;
  /* 10627b54 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10627b5b:;
  /* 10627b5b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627b5e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627b61 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10627b64 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627b67 jne 0x10627c3d */
  if (!C.zf) goto L_10627c3d;
  /* 10627b6d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627b71 jae 0x10627bd2 */
  if (!C.cf) goto L_10627bd2;
  /* 10627b73 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627b78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627b7b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10627b7d not edx */
  EDX = (~(EDX));
  /* 10627b7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627b82 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627b85 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10627b89 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10627b8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627b8e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627b91 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10627b95 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627b98 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627b9b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10627b9e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10627ba1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627ba4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627ba7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10627baa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627bad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627bb0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10627bb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10627bb6 jne 0x10627bd0 */
  if (!C.zf) goto L_10627bd0;
  /* 10627bb8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627bbd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627bc0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10627bc2 not edx */
  EDX = (~(EDX));
  /* 10627bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627bc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10627bc9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10627bcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627bce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10627bd0:;
  /* 10627bd0 jmp 0x10627c3d */
  goto L_10627c3d;
L_10627bd2:;
  /* 10627bd2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627bd5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627bd8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10627bdd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10627bdf not eax */
  EAX = (~(EAX));
  /* 10627be1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627be4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627be7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10627bee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10627bf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627bf3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627bf6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10627bfd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627c00 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627c03 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10627c06 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10627c09 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627c0c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627c0f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10627c12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627c15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627c18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10627c1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10627c1e jne 0x10627c3d */
  if (!C.zf) goto L_10627c3d;
  /* 10627c20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627c23 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627c26 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10627c2b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10627c2d not eax */
  EAX = (~(EAX));
  /* 10627c2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627c32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10627c35 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10627c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627c3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10627c3d:;
  /* 10627c3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627c40 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10627c43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627c46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10627c49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10627c4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627c4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10627c52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627c55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10627c58 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10627c5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627c5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627c61 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627c64 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10627c67 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627c6b jle 0x10627db7 */
  if ((C.zf||C.sf!=C.of)) goto L_10627db7;
  /* 10627c71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627c74 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627c77 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10627c7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627c7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10627c80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627c83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10627c86 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627c8a jbe 0x10627c93 */
  if ((C.cf||C.zf)) goto L_10627c93;
  /* 10627c8c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10627c93:;
  /* 10627c93 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627c96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10627c99 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10627c9c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10627c9f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627ca2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627ca5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10627ca8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10627cab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627cae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627cb1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10627cb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627cb7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627cba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10627cbd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627cc0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10627cc3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627cc6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10627cc9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627ccc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627ccf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10627cd2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627cd5 jne 0x10627da3 */
  if (!C.zf) goto L_10627da3;
  /* 10627cdb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627cdf jae 0x10627d3c */
  if (!C.cf) goto L_10627d3c;
  /* 10627ce1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627ce4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627ce7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10627ceb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627cee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627cf1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10627cf4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10627cf7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627cfa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627cfd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10627d00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10627d02 jne 0x10627d1a */
  if (!C.zf) goto L_10627d1a;
  /* 10627d04 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627d09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627d0c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10627d0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627d11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10627d13 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10627d15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627d18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10627d1a:;
  /* 10627d1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10627d1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627d22 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10627d24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627d27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627d2a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10627d2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10627d30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627d33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627d36 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10627d3a jmp 0x10627da3 */
  goto L_10627da3;
L_10627d3c:;
  /* 10627d3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627d3f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627d42 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10627d46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627d49 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627d4c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10627d4f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10627d52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627d55 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627d58 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10627d5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10627d5d jne 0x10627d7a */
  if (!C.zf) goto L_10627d7a;
  /* 10627d5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627d62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627d65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627d6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10627d6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627d6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10627d72 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10627d74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627d77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10627d7a:;
  /* 10627d7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627d7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627d80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10627d85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10627d87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627d8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627d8d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10627d94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10627d96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627d99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627d9c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10627da3:;
  /* 10627da3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627da6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627da9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10627dab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627dae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627db1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627db4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10627db7:;
  /* 10627db7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10627dba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627dbd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627dc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10627dc2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10627dc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627dc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627dcb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627dce mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10627dd1 jmp 0x10628092 */
  goto L_10628092;
L_10627dd6:;
  /* 10627dd6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10627dd9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627ddc jge 0x10628092 */
  if ((C.sf==C.of)) goto L_10628092;
  /* 10627de2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10627de5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627de8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627deb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10627ded mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10627df0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627df3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627df6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627df9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10627dfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627dff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627e02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10627e05 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627e08 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627e0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10627e0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627e11 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10627e14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627e17 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10627e1a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627e1e jbe 0x10627e27 */
  if ((C.cf||C.zf)) goto L_10627e27;
  /* 10627e20 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10627e27:;
  /* 10627e27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627e2a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10627e2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10627e2f jne 0x10627f70 */
  if (!C.zf) goto L_10627f70;
  /* 10627e35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10627e38 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10627e3b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627e3e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10627e41 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627e45 jbe 0x10627e4e */
  if ((C.cf||C.zf)) goto L_10627e4e;
  /* 10627e47 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10627e4e:;
  /* 10627e4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627e51 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627e54 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10627e57 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627e5a jne 0x10627f30 */
  if (!C.zf) goto L_10627f30;
  /* 10627e60 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627e64 jae 0x10627ec5 */
  if (!C.cf) goto L_10627ec5;
  /* 10627e66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627e6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627e6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10627e70 not edx */
  EDX = (~(EDX));
  /* 10627e72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627e75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627e78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10627e7c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10627e7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627e81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627e84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10627e88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627e8b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627e8e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10627e91 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10627e94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627e97 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627e9a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10627e9d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627ea0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627ea3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10627ea7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10627ea9 jne 0x10627ec3 */
  if (!C.zf) goto L_10627ec3;
  /* 10627eab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627eb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627eb3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10627eb5 not edx */
  EDX = (~(EDX));
  /* 10627eb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627eba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10627ebc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10627ebe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627ec1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10627ec3:;
  /* 10627ec3 jmp 0x10627f30 */
  goto L_10627f30;
L_10627ec5:;
  /* 10627ec5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627ec8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627ecb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10627ed0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10627ed2 not eax */
  EAX = (~(EAX));
  /* 10627ed4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627ed7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627eda mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10627ee1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10627ee3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10627ee6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627ee9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10627ef0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627ef3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627ef6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10627ef9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10627efc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627eff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627f02 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10627f05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627f08 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627f0b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10627f0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10627f11 jne 0x10627f30 */
  if (!C.zf) goto L_10627f30;
  /* 10627f13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10627f16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627f19 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10627f1e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10627f20 not eax */
  EAX = (~(EAX));
  /* 10627f22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627f25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10627f28 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10627f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627f2d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10627f30:;
  /* 10627f30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627f33 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10627f36 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627f39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10627f3c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10627f3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627f42 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10627f45 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10627f48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10627f4b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10627f4e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627f51 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627f54 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10627f57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10627f5a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10627f5d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10627f60 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10627f63 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627f67 jbe 0x10627f70 */
  if ((C.cf||C.zf)) goto L_10627f70;
  /* 10627f69 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10627f70:;
  /* 10627f70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10627f73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10627f76 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10627f79 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10627f7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627f7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627f82 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10627f85 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10627f88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627f8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627f8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10627f91 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10627f94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627f97 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10627f9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627f9d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10627fa0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627fa3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10627fa6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627fa9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10627fac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10627faf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627fb2 jne 0x1062807e */
  if (!C.zf) goto L_1062807e;
  /* 10627fb8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10627fbc jae 0x10628018 */
  if (!C.cf) goto L_10628018;
  /* 10627fbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627fc1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627fc4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10627fc8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627fcb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627fce mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10627fd1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10627fd3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10627fd6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10627fd9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10627fdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10627fde jne 0x10627ff6 */
  if (!C.zf) goto L_10627ff6;
  /* 10627fe0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10627fe5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10627fe8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10627fea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627fed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10627fef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10627ff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10627ff4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10627ff6:;
  /* 10627ff6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10627ffb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10627ffe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10628000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628003 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10628006 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1062800a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1062800c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062800f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10628012 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10628016 jmp 0x1062807e */
  goto L_1062807e;
L_10628018:;
  /* 10628018 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062801b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062801e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10628022 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10628025 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628028 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1062802b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1062802d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10628030 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628033 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10628036 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10628038 jne 0x10628055 */
  if (!C.zf) goto L_10628055;
  /* 1062803a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062803d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10628040 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10628045 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10628047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062804a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1062804d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1062804f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10628052 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10628055:;
  /* 10628055 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628058 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062805b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10628060 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10628062 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628065 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10628068 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1062806f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10628071 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628074 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10628077 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1062807e:;
  /* 1062807e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10628081 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10628084 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10628086 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10628089 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062808c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062808f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10628092:;
  /* 10628092 mov eax, 1 */
  EAX = (0x1u);
L_10628097:;
  /* 10628097 mov esp, ebp */
  ESP = (EBP);
  /* 10628099 pop ebp */
  EBP = (pop32());
  /* 1062809a ret  */
  ESPCHK(0x10627ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080a0 @ 0x106280a0 (304 bytes, 79 insns) */
void f_106280a0(void) {
  FTRACE(0x106280a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106280a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106280a1 mov ebp, esp */
  EBP = (ESP);
  /* 106280a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106280a4 cmp dword ptr [0x1064fda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064fda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106280ab je 0x106281cc */
  if (C.zf) goto L_106281cc;
  /* 106280b1 mov eax, dword ptr [0x1064fd98] */
  EAX = (r32((uint32_t)(0x1064fd98)));
  /* 106280b6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 106280b9 mov ecx, dword ptr [0x1064fda0] */
  ECX = (r32((uint32_t)(0x1064fda0)));
  /* 106280bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106280c2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106280c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106280c7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 106280cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106280d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106280d4 push eax */
  push32((uint32_t)(EAX));
  /* 106280d5 call dword ptr [0x106502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f0))), 0x106280dbu);
  /* 106280db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106280e0 mov ecx, dword ptr [0x1064fd98] */
  ECX = (r32((uint32_t)(0x1064fd98)));
  /* 106280e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106280e8 mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 106280ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106280f0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106280f2 mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 106280f8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106280fb mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 10628100 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10628103 mov edx, dword ptr [0x1064fd98] */
  EDX = (r32((uint32_t)(0x1064fd98)));
  /* 10628109 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10628114 mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 10628119 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062811c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1062811f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10628122 mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 10628127 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062812a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1062812d mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 10628133 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10628136 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1062813a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062813c jne 0x10628152 */
  if (!C.zf) goto L_10628152;
  /* 1062813e mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 10628144 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10628147 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10628149 mov ecx, dword ptr [0x1064fda0] */
  ECX = (r32((uint32_t)(0x1064fda0)));
  /* 1062814f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10628152:;
  /* 10628152 mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 10628158 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062815c jne 0x106281c2 */
  if (!C.zf) goto L_106281c2;
  /* 1062815e cmp dword ptr [0x1064fda4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064fda4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628165 jle 0x106281c2 */
  if ((C.zf||C.sf!=C.of)) goto L_106281c2;
  /* 10628167 mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 1062816c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062816f push ecx */
  push32((uint32_t)(ECX));
  /* 10628170 push 0 */
  push32((uint32_t)(0x0u));
  /* 10628172 mov edx, dword ptr [0x1064fdac] */
  EDX = (r32((uint32_t)(0x1064fdac)));
  /* 10628178 push edx */
  push32((uint32_t)(EDX));
  /* 10628179 call dword ptr [0x106502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ec))), 0x1062817fu);
  /* 1062817f mov eax, dword ptr [0x1064fda4] */
  EAX = (r32((uint32_t)(0x1064fda4)));
  /* 10628184 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10628187 mov ecx, dword ptr [0x1064fda8] */
  ECX = (r32((uint32_t)(0x1064fda8)));
  /* 1062818d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062818f mov edx, dword ptr [0x1064fda0] */
  EDX = (r32((uint32_t)(0x1064fda0)));
  /* 10628195 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628198 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062819a push ecx */
  push32((uint32_t)(ECX));
  /* 1062819b mov eax, dword ptr [0x1064fda0] */
  EAX = (r32((uint32_t)(0x1064fda0)));
  /* 106281a0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106281a3 push eax */
  push32((uint32_t)(EAX));
  /* 106281a4 mov ecx, dword ptr [0x1064fda0] */
  ECX = (r32((uint32_t)(0x1064fda0)));
  /* 106281aa push ecx */
  push32((uint32_t)(ECX));
  /* 106281ab call 0x1062a7d0 */
  push32(0x106281b0u); f_1062a7d0();
  /* 106281b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106281b3 mov edx, dword ptr [0x1064fda4] */
  EDX = (r32((uint32_t)(0x1064fda4)));
  /* 106281b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106281bc mov dword ptr [0x1064fda4], edx */
  w32((uint32_t)(0x1064fda4), (EDX));
L_106281c2:;
  /* 106281c2 mov dword ptr [0x1064fda0], 0 */
  w32((uint32_t)(0x1064fda0), (0x0u));
L_106281cc:;
  /* 106281cc mov esp, ebp */
  ESP = (EBP);
  /* 106281ce pop ebp */
  EBP = (pop32());
  /* 106281cf ret  */
  ESPCHK(0x106280a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081d0 @ 0x106281d0 (1565 bytes, 343 insns) */
void f_106281d0(void) {
  FTRACE(0x106281d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106281d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106281d1 mov ebp, esp */
  EBP = (ESP);
  /* 106281d3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106281d9 mov eax, dword ptr [0x1064fda4] */
  EAX = (r32((uint32_t)(0x1064fda4)));
  /* 106281de imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106281e1 push eax */
  push32((uint32_t)(EAX));
  /* 106281e2 mov ecx, dword ptr [0x1064fda8] */
  ECX = (r32((uint32_t)(0x1064fda8)));
  /* 106281e8 push ecx */
  push32((uint32_t)(ECX));
  /* 106281e9 call dword ptr [0x106502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c4))), 0x106281efu);
  /* 106281ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106281f1 je 0x106281fb */
  if (C.zf) goto L_106281fb;
  /* 106281f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106281f6 jmp 0x106287e9 */
  goto L_106287e9;
L_106281fb:;
  /* 106281fb mov edx, dword ptr [0x1064fda8] */
  EDX = (r32((uint32_t)(0x1064fda8)));
  /* 10628201 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10628207 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10628211 jmp 0x10628222 */
  goto L_10628222;
L_10628213:;
  /* 10628213 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10628219 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062821c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10628222:;
  /* 10628222 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10628228 cmp ecx, dword ptr [0x1064fda4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064fda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062822e jge 0x106287e7 */
  if ((C.sf==C.of)) goto L_106287e7;
  /* 10628234 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1062823a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1062823d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10628243 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10628248 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1062824e push ecx */
  push32((uint32_t)(ECX));
  /* 1062824f call dword ptr [0x106502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c4))), 0x10628255u);
  /* 10628255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10628257 je 0x10628263 */
  if (C.zf) goto L_10628263;
  /* 10628259 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1062825e jmp 0x106287e9 */
  goto L_106287e9;
L_10628263:;
  /* 10628263 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10628269 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1062826c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10628272 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10628278 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062827e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10628281 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10628287 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1062828a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062828d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10628297 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 106282a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106282a8 jmp 0x106282b3 */
  goto L_106282b3;
L_106282aa:;
  /* 106282aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106282ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106282b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106282b3:;
  /* 106282b3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106282b7 jge 0x106287ab */
  if ((C.sf==C.of)) goto L_106287ab;
  /* 106282bd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 106282c7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 106282d1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 106282db mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 106282e5 jmp 0x106282f6 */
  goto L_106282f6;
L_106282e7:;
  /* 106282e7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106282ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106282f0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_106282f6:;
  /* 106282f6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106282fd jge 0x10628312 */
  if ((C.sf==C.of)) goto L_10628312;
  /* 106282ff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10628305 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10628310 jmp 0x106282e7 */
  goto L_106282e7;
L_10628312:;
  /* 10628312 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628316 jl 0x1062874d */
  if ((C.sf!=C.of)) goto L_1062874d;
  /* 1062831c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10628321 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10628327 push ecx */
  push32((uint32_t)(ECX));
  /* 10628328 call dword ptr [0x106502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c4))), 0x1062832eu);
  /* 1062832e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10628330 je 0x1062833c */
  if (C.zf) goto L_1062833c;
  /* 10628332 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10628337 jmp 0x106287e9 */
  goto L_106287e9;
L_1062833c:;
  /* 1062833c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10628342 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10628345 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1062834f jmp 0x10628360 */
  goto L_10628360;
L_10628351:;
  /* 10628351 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10628357 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062835a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10628360:;
  /* 10628360 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628367 jge 0x106284e4 */
  if ((C.sf==C.of)) goto L_106284e4;
  /* 1062836d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10628370 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628373 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10628379 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1062837f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628385 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1062838b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10628391 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628395 jne 0x106283a2 */
  if (!C.zf) goto L_106283a2;
  /* 10628397 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1062839d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106283a0 je 0x106283ac */
  if (C.zf) goto L_106283ac;
L_106283a2:;
  /* 106283a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 106283a7 jmp 0x106287e9 */
  goto L_106287e9;
L_106283ac:;
  /* 106283ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 106283b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106283b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 106283ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 106283c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 106283c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 106283cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106283cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106283d1 je 0x10628409 */
  if (C.zf) goto L_10628409;
  /* 106283d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 106283d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106283dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 106283e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106283ec jle 0x106283f8 */
  if ((C.zf||C.sf!=C.of)) goto L_106283f8;
  /* 106283ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 106283f3 jmp 0x106287e9 */
  goto L_106287e9;
L_106283f8:;
  /* 106283f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 106283fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628401 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10628407 jmp 0x1062844b */
  goto L_1062844b;
L_10628409:;
  /* 10628409 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1062840f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10628412 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10628415 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1062841b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628422 jle 0x1062842e */
  if ((C.zf||C.sf!=C.of)) goto L_1062842e;
  /* 10628424 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1062842e:;
  /* 1062842e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10628434 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1062843b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062843e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10628444 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1062844b:;
  /* 1062844b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628452 jl 0x1062846d */
  if ((C.sf!=C.of)) goto L_1062846d;
  /* 10628454 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1062845a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1062845d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062845f jne 0x1062846d */
  if (!C.zf) goto L_1062846d;
  /* 10628461 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062846b jle 0x10628477 */
  if ((C.zf||C.sf!=C.of)) goto L_10628477;
L_1062846d:;
  /* 1062846d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10628472 jmp 0x106287e9 */
  goto L_106287e9;
L_10628477:;
  /* 10628477 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1062847d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628483 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10628486 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062848c je 0x10628498 */
  if (C.zf) goto L_10628498;
  /* 1062848e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10628493 jmp 0x106287e9 */
  goto L_106287e9;
L_10628498:;
  /* 10628498 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1062849e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106284a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 106284aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 106284b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106284b6 jb 0x106283ac */
  if (C.cf) goto L_106283ac;
  /* 106284bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 106284c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106284c8 je 0x106284d4 */
  if (C.zf) goto L_106284d4;
  /* 106284ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 106284cf jmp 0x106287e9 */
  goto L_106287e9;
L_106284d4:;
  /* 106284d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106284d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106284dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106284df jmp 0x10628351 */
  goto L_10628351;
L_106284e4:;
  /* 106284e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106284e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106284e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106284ef je 0x106284fb */
  if (C.zf) goto L_106284fb;
  /* 106284f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 106284f6 jmp 0x106287e9 */
  goto L_106287e9;
L_106284fb:;
  /* 106284fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106284fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10628504 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1062850b jmp 0x10628516 */
  goto L_10628516;
L_1062850d:;
  /* 1062850d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10628510 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628513 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10628516:;
  /* 10628516 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062851a jge 0x1062874d */
  if ((C.sf==C.of)) goto L_1062874d;
  /* 10628520 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1062852a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10628530 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10628536:;
  /* 10628536 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1062853c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1062853f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10628545 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1062854b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628551 je 0x1062867a */
  if (C.zf) goto L_1062867a;
  /* 10628557 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062855a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10628560 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628567 je 0x1062867a */
  if (C.zf) goto L_1062867a;
  /* 1062856d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10628573 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628579 jb 0x1062858e */
  if (C.cf) goto L_1062858e;
  /* 1062857b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10628581 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628586 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062858c jb 0x10628598 */
  if (C.cf) goto L_10628598;
L_1062858e:;
  /* 1062858e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10628593 jmp 0x106287e9 */
  goto L_106287e9;
L_10628598:;
  /* 10628598 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1062859e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 106285a4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 106285aa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 106285b0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106285b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106285b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106285b9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106285be mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_106285c4:;
  /* 106285c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106285c7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106285cd je 0x106285ee */
  if (C.zf) goto L_106285ee;
  /* 106285cf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106285d2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106285d8 jne 0x106285dc */
  if (!C.zf) goto L_106285dc;
  /* 106285da jmp 0x106285ee */
  goto L_106285ee;
L_106285dc:;
  /* 106285dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106285df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106285e1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 106285e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106285e7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106285e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106285ec jmp 0x106285c4 */
  goto L_106285c4;
L_106285ee:;
  /* 106285ee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106285f1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106285f7 jne 0x10628603 */
  if (!C.zf) goto L_10628603;
  /* 106285f9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 106285fe jmp 0x106287e9 */
  goto L_106287e9;
L_10628603:;
  /* 10628603 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10628609 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062860b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1062860e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10628611 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10628617 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062861e jle 0x1062862a */
  if ((C.zf||C.sf!=C.of)) goto L_1062862a;
  /* 10628620 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1062862a:;
  /* 1062862a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10628630 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628633 je 0x1062863f */
  if (C.zf) goto L_1062863f;
  /* 10628635 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1062863a jmp 0x106287e9 */
  goto L_106287e9;
L_1062863f:;
  /* 1062863f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10628645 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10628648 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062864e je 0x1062865a */
  if (C.zf) goto L_1062865a;
  /* 10628650 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10628655 jmp 0x106287e9 */
  goto L_106287e9;
L_1062865a:;
  /* 1062865a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10628660 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10628666 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1062866c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062866f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10628675 jmp 0x10628536 */
  goto L_10628536;
L_1062867a:;
  /* 1062867a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628681 je 0x106286f1 */
  if (C.zf) goto L_106286f1;
  /* 10628683 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628687 jge 0x106286bb */
  if ((C.sf==C.of)) goto L_106286bb;
  /* 10628689 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1062868e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10628691 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10628693 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10628699 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1062869b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 106286a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106286a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106286a9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106286ab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 106286b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106286b3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 106286b9 jmp 0x106286f1 */
  goto L_106286f1;
L_106286bb:;
  /* 106286bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106286be sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106286c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106286c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106286c8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 106286ce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106286d0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 106286d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106286d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106286dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106286e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106286e3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 106286e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106286eb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_106286f1:;
  /* 106286f1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 106286f7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106286fa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628700 jne 0x10628714 */
  if (!C.zf) goto L_10628714;
  /* 10628702 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10628705 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1062870b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628712 je 0x1062871e */
  if (C.zf) goto L_1062871e;
L_10628714:;
  /* 10628714 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10628719 jmp 0x106287e9 */
  goto L_106287e9;
L_1062871e:;
  /* 1062871e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10628724 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10628727 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062872d je 0x10628739 */
  if (C.zf) goto L_10628739;
  /* 1062872f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10628734 jmp 0x106287e9 */
  goto L_106287e9;
L_10628739:;
  /* 10628739 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1062873f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628742 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10628748 jmp 0x1062850d */
  goto L_1062850d;
L_1062874d:;
  /* 1062874d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10628750 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10628756 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1062875c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628760 jne 0x1062877a */
  if (!C.zf) goto L_1062877a;
  /* 10628762 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10628765 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1062876b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10628771 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628778 je 0x10628781 */
  if (C.zf) goto L_10628781;
L_1062877a:;
  /* 1062877a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1062877f jmp 0x106287e9 */
  goto L_106287e9;
L_10628781:;
  /* 10628781 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10628787 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062878d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10628793 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10628796 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062879b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1062879e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106287a1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106287a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106287a6 jmp 0x106282aa */
  goto L_106282aa;
L_106287ab:;
  /* 106287ab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106287b1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 106287b7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106287b9 jne 0x106287cc */
  if (!C.zf) goto L_106287cc;
  /* 106287bb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106287c1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 106287c7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106287ca je 0x106287d3 */
  if (C.zf) goto L_106287d3;
L_106287cc:;
  /* 106287cc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 106287d1 jmp 0x106287e9 */
  goto L_106287e9;
L_106287d3:;
  /* 106287d3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106287d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106287dc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 106287e2 jmp 0x10628213 */
  goto L_10628213;
L_106287e7:;
  /* 106287e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106287e9:;
  /* 106287e9 mov esp, ebp */
  ESP = (EBP);
  /* 106287eb pop ebp */
  EBP = (pop32());
  /* 106287ec ret  */
  ESPCHK(0x106281d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087f0 @ 0x106287f0 (250 bytes, 92 insns) */
void f_106287f0(void) {
  FTRACE(0x106287f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106287f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106287f1 mov ebp, esp */
  EBP = (ESP);
  /* 106287f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106287f6 push ebx */
  push32((uint32_t)(EBX));
  /* 106287f7 push esi */
  push32((uint32_t)(ESI));
  /* 106287f8 push edi */
  push32((uint32_t)(EDI));
  /* 106287f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 106287fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106287ff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10628802 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10628805:;
  /* 10628805 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628809 jne 0x10628829 */
  if (!C.zf) goto L_10628829;
  /* 1062880b push 0x10649df0 */
  push32((uint32_t)(0x10649df0u));
  /* 10628810 push 0 */
  push32((uint32_t)(0x0u));
  /* 10628812 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10628814 push 0x10649de4 */
  push32((uint32_t)(0x10649de4u));
  /* 10628819 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062881b call 0x106219a0 */
  push32(0x10628820u); f_106219a0();
  /* 10628820 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628823 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628826 jne 0x10628829 */
  if (!C.zf) goto L_10628829;
  /* 10628828 int3  */
  x86_unimpl("int3 @ 0x10628828");
L_10628829:;
  /* 10628829 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1062882b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062882d jne 0x10628805 */
  if (!C.zf) goto L_10628805;
L_1062882f:;
  /* 1062882f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628833 jne 0x10628853 */
  if (!C.zf) goto L_10628853;
  /* 10628835 push 0x10649dd4 */
  push32((uint32_t)(0x10649dd4u));
  /* 1062883a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062883c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1062883e push 0x10649de4 */
  push32((uint32_t)(0x10649de4u));
  /* 10628843 push 2 */
  push32((uint32_t)(0x2u));
  /* 10628845 call 0x106219a0 */
  push32(0x1062884au); f_106219a0();
  /* 1062884a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062884d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628850 jne 0x10628853 */
  if (!C.zf) goto L_10628853;
  /* 10628852 int3  */
  x86_unimpl("int3 @ 0x10628852");
L_10628853:;
  /* 10628853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10628855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10628857 jne 0x1062882f */
  if (!C.zf) goto L_1062882f;
  /* 10628859 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062885c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10628863 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10628869 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1062886c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062886f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10628872 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10628874 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628877 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1062887e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10628881 push ecx */
  push32((uint32_t)(ECX));
  /* 10628882 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10628885 push edx */
  push32((uint32_t)(EDX));
  /* 10628886 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628889 push eax */
  push32((uint32_t)(EAX));
  /* 1062888a call 0x10629870 */
  push32(0x1062888fu); f_10629870();
  /* 1062888f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628892 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10628895 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628898 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1062889b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062889e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106288a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106288a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106288a7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106288ab jl 0x106288cf */
  if ((C.sf!=C.of)) goto L_106288cf;
  /* 106288ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106288b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106288b2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106288b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106288b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106288bd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 106288c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106288c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106288c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106288c8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106288cb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106288cd jmp 0x106288e0 */
  goto L_106288e0;
L_106288cf:;
  /* 106288cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106288d2 push edx */
  push32((uint32_t)(EDX));
  /* 106288d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106288d5 call 0x106295f0 */
  push32(0x106288dau); f_106295f0();
  /* 106288da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106288dd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_106288e0:;
  /* 106288e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106288e3 pop edi */
  EDI = (pop32());
  /* 106288e4 pop esi */
  ESI = (pop32());
  /* 106288e5 pop ebx */
  EBX = (pop32());
  /* 106288e6 mov esp, ebp */
  ESP = (EBP);
  /* 106288e8 pop ebp */
  EBP = (pop32());
  /* 106288e9 ret  */
  ESPCHK(0x106287f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088f0 @ 0x106288f0 (183 bytes, 58 insns) */
void f_106288f0(void) {
  FTRACE(0x106288f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106288f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106288f1 mov ebp, esp */
  EBP = (ESP);
  /* 106288f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106288f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106288f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106288fc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628901 ja 0x1062891a */
  if ((!C.cf&&!C.zf)) goto L_1062891a;
  /* 10628903 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10628906 mov edx, dword ptr [0x1064cc98] */
  EDX = (r32((uint32_t)(0x1064cc98)));
  /* 1062890c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062890e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10628912 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10628915 jmp 0x106289a3 */
  goto L_106289a3;
L_1062891a:;
  /* 1062891a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062891d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10628920 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10628926 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1062892c mov edx, dword ptr [0x1064cc98] */
  EDX = (r32((uint32_t)(0x1064cc98)));
  /* 10628932 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10628934 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10628938 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1062893d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062893f je 0x10628963 */
  if (C.zf) goto L_10628963;
  /* 10628941 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10628944 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10628947 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1062894d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10628950 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10628953 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10628956 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1062895a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10628961 jmp 0x10628974 */
  goto L_10628974;
L_10628963:;
  /* 10628963 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10628966 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10628969 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1062896d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10628974:;
  /* 10628974 push 1 */
  push32((uint32_t)(0x1u));
  /* 10628976 push 0 */
  push32((uint32_t)(0x0u));
  /* 10628978 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062897a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1062897d push ecx */
  push32((uint32_t)(ECX));
  /* 1062897e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10628981 push edx */
  push32((uint32_t)(EDX));
  /* 10628982 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10628985 push eax */
  push32((uint32_t)(EAX));
  /* 10628986 push 1 */
  push32((uint32_t)(0x1u));
  /* 10628988 call 0x1062ab10 */
  push32(0x1062898du); f_1062ab10();
  /* 1062898d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628990 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10628992 jne 0x10628998 */
  if (!C.zf) goto L_10628998;
  /* 10628994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10628996 jmp 0x106289a3 */
  goto L_106289a3;
L_10628998:;
  /* 10628998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062899b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106289a0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_106289a3:;
  /* 106289a3 mov esp, ebp */
  ESP = (EBP);
  /* 106289a5 pop ebp */
  EBP = (pop32());
  /* 106289a6 ret  */
  ESPCHK(0x106288f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089b0 @ 0x106289b0 (836 bytes, 238 insns) */
void f_106289b0(void) {
  FTRACE(0x106289b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106289b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106289b1 mov ebp, esp */
  EBP = (ESP);
  /* 106289b3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106289b6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106289b8 call 0x106262e0 */
  push32(0x106289bdu); f_106262e0();
  /* 106289bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106289c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106289c3 push eax */
  push32((uint32_t)(EAX));
  /* 106289c4 call 0x10628d00 */
  push32(0x106289c9u); f_10628d00();
  /* 106289c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106289cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106289cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106289d2 cmp ecx, dword ptr [0x1064fae4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064fae4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106289d8 jne 0x106289eb */
  if (!C.zf) goto L_106289eb;
  /* 106289da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106289dc call 0x10626380 */
  push32(0x106289e1u); f_10626380();
  /* 106289e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106289e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106289e6 jmp 0x10628cf0 */
  goto L_10628cf0;
L_106289eb:;
  /* 106289eb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106289ef jne 0x10628a0c */
  if (!C.zf) goto L_10628a0c;
  /* 106289f1 call 0x10628de0 */
  push32(0x106289f6u); f_10628de0();
  /* 106289f6 call 0x10628e60 */
  push32(0x106289fbu); f_10628e60();
  /* 106289fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106289fd call 0x10626380 */
  push32(0x10628a02u); f_10626380();
  /* 10628a02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628a05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10628a07 jmp 0x10628cf0 */
  goto L_10628cf0;
L_10628a0c:;
  /* 10628a0c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10628a13 jmp 0x10628a1e */
  goto L_10628a1e;
L_10628a15:;
  /* 10628a15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628a18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628a1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10628a1e:;
  /* 10628a1e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628a22 jae 0x10628b6f */
  if (!C.cf) goto L_10628b6f;
  /* 10628a28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628a2b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10628a2e mov ecx, dword ptr [eax + 0x1064ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x1064ceb8)));
  /* 10628a34 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628a37 jne 0x10628b6a */
  if (!C.zf) goto L_10628b6a;
  /* 10628a3d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10628a44 jmp 0x10628a4f */
  goto L_10628a4f;
L_10628a46:;
  /* 10628a46 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628a49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628a4c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10628a4f:;
  /* 10628a4f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628a56 jae 0x10628a64 */
  if (!C.cf) goto L_10628a64;
  /* 10628a58 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628a5b mov byte ptr [eax + 0x1064fc80], 0 */
  w8((uint32_t)(EAX + 0x1064fc80), (0x0u));
  /* 10628a62 jmp 0x10628a46 */
  goto L_10628a46;
L_10628a64:;
  /* 10628a64 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10628a6b jmp 0x10628a76 */
  goto L_10628a76;
L_10628a6d:;
  /* 10628a6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10628a70 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628a73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10628a76:;
  /* 10628a76 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628a7a jae 0x10628af7 */
  if (!C.cf) goto L_10628af7;
  /* 10628a7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628a7f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10628a82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10628a85 lea ecx, [edx + eax*8 + 0x1064cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1064cec8));
  /* 10628a8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10628a8f jmp 0x10628a9a */
  goto L_10628a9a;
L_10628a91:;
  /* 10628a91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10628a94 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628a97 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10628a9a:;
  /* 10628a9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10628a9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10628a9f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10628aa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10628aa3 je 0x10628af2 */
  if (C.zf) goto L_10628af2;
  /* 10628aa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10628aa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10628aaa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10628aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10628aaf je 0x10628af2 */
  if (C.zf) goto L_10628af2;
  /* 10628ab1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10628ab4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10628ab6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10628ab8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10628abb jmp 0x10628ac6 */
  goto L_10628ac6;
L_10628abd:;
  /* 10628abd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628ac0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628ac3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10628ac6:;
  /* 10628ac6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10628ac9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10628acb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10628ace cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628ad1 ja 0x10628af0 */
  if ((!C.cf&&!C.zf)) goto L_10628af0;
  /* 10628ad3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628ad6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10628ad9 mov dl, byte ptr [eax + 0x1064fc81] */
  DL = (r8((uint32_t)(EAX + 0x1064fc81)));
  /* 10628adf or dl, byte ptr [ecx + 0x1064ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1064ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10628ae5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628ae8 mov byte ptr [eax + 0x1064fc81], dl */
  w8((uint32_t)(EAX + 0x1064fc81), (DL));
  /* 10628aee jmp 0x10628abd */
  goto L_10628abd;
L_10628af0:;
  /* 10628af0 jmp 0x10628a91 */
  goto L_10628a91;
L_10628af2:;
  /* 10628af2 jmp 0x10628a6d */
  goto L_10628a6d;
L_10628af7:;
  /* 10628af7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10628afa mov dword ptr [0x1064fae4], ecx */
  w32((uint32_t)(0x1064fae4), (ECX));
  /* 10628b00 mov dword ptr [0x1064fb6c], 1 */
  w32((uint32_t)(0x1064fb6c), (0x1u));
  /* 10628b0a mov edx, dword ptr [0x1064fae4] */
  EDX = (r32((uint32_t)(0x1064fae4)));
  /* 10628b10 push edx */
  push32((uint32_t)(EDX));
  /* 10628b11 call 0x10628d60 */
  push32(0x10628b16u); f_10628d60();
  /* 10628b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628b19 mov dword ptr [0x1064fd84], eax */
  w32((uint32_t)(0x1064fd84), (EAX));
  /* 10628b1e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10628b25 jmp 0x10628b30 */
  goto L_10628b30;
L_10628b27:;
  /* 10628b27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10628b2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628b2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10628b30:;
  /* 10628b30 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628b34 jae 0x10628b54 */
  if (!C.cf) goto L_10628b54;
  /* 10628b36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628b39 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10628b3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10628b3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10628b42 mov cx, word ptr [ecx + eax*2 + 0x1064cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1064cebc)));
  /* 10628b4a mov word ptr [edx*2 + 0x1064fb60], cx */
  w16((uint32_t)(EDX*2 + 0x1064fb60), (CX));
  /* 10628b52 jmp 0x10628b27 */
  goto L_10628b27;
L_10628b54:;
  /* 10628b54 call 0x10628e60 */
  push32(0x10628b59u); f_10628e60();
  /* 10628b59 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10628b5b call 0x10626380 */
  push32(0x10628b60u); f_10626380();
  /* 10628b60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10628b65 jmp 0x10628cf0 */
  goto L_10628cf0;
L_10628b6a:;
  /* 10628b6a jmp 0x10628a15 */
  goto L_10628a15;
L_10628b6f:;
  /* 10628b6f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10628b72 push edx */
  push32((uint32_t)(EDX));
  /* 10628b73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10628b76 push eax */
  push32((uint32_t)(EAX));
  /* 10628b77 call dword ptr [0x10650318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650318))), 0x10628b7du);
  /* 10628b7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628b80 jne 0x10628cc2 */
  if (!C.zf) goto L_10628cc2;
  /* 10628b86 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10628b8d jmp 0x10628b98 */
  goto L_10628b98;
L_10628b8f:;
  /* 10628b8f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628b92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628b95 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10628b98:;
  /* 10628b98 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628b9f jae 0x10628bad */
  if (!C.cf) goto L_10628bad;
  /* 10628ba1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628ba4 mov byte ptr [edx + 0x1064fc80], 0 */
  w8((uint32_t)(EDX + 0x1064fc80), (0x0u));
  /* 10628bab jmp 0x10628b8f */
  goto L_10628b8f;
L_10628bad:;
  /* 10628bad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10628bb0 mov dword ptr [0x1064fae4], eax */
  w32((uint32_t)(0x1064fae4), (EAX));
  /* 10628bb5 mov dword ptr [0x1064fd84], 0 */
  w32((uint32_t)(0x1064fd84), (0x0u));
  /* 10628bbf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628bc3 jbe 0x10628c7e */
  if ((C.cf||C.zf)) goto L_10628c7e;
  /* 10628bc9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10628bcc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10628bcf jmp 0x10628bda */
  goto L_10628bda;
L_10628bd1:;
  /* 10628bd1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10628bd4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628bd7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10628bda:;
  /* 10628bda mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10628bdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10628bdf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10628be1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10628be3 je 0x10628c2c */
  if (C.zf) goto L_10628c2c;
  /* 10628be5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10628be8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10628bea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10628bed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10628bef je 0x10628c2c */
  if (C.zf) goto L_10628c2c;
  /* 10628bf1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10628bf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10628bf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10628bf8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10628bfb jmp 0x10628c06 */
  goto L_10628c06;
L_10628bfd:;
  /* 10628bfd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628c00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628c03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10628c06:;
  /* 10628c06 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10628c09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10628c0b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10628c0e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628c11 ja 0x10628c2a */
  if ((!C.cf&&!C.zf)) goto L_10628c2a;
  /* 10628c13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628c16 mov cl, byte ptr [eax + 0x1064fc81] */
  CL = (r8((uint32_t)(EAX + 0x1064fc81)));
  /* 10628c1c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10628c1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628c22 mov byte ptr [edx + 0x1064fc81], cl */
  w8((uint32_t)(EDX + 0x1064fc81), (CL));
  /* 10628c28 jmp 0x10628bfd */
  goto L_10628bfd;
L_10628c2a:;
  /* 10628c2a jmp 0x10628bd1 */
  goto L_10628bd1;
L_10628c2c:;
  /* 10628c2c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10628c33 jmp 0x10628c3e */
  goto L_10628c3e;
L_10628c35:;
  /* 10628c35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628c38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628c3b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10628c3e:;
  /* 10628c3e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628c45 jae 0x10628c5e */
  if (!C.cf) goto L_10628c5e;
  /* 10628c47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628c4a mov dl, byte ptr [ecx + 0x1064fc81] */
  DL = (r8((uint32_t)(ECX + 0x1064fc81)));
  /* 10628c50 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10628c53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10628c56 mov byte ptr [eax + 0x1064fc81], dl */
  w8((uint32_t)(EAX + 0x1064fc81), (DL));
  /* 10628c5c jmp 0x10628c35 */
  goto L_10628c35;
L_10628c5e:;
  /* 10628c5e mov ecx, dword ptr [0x1064fae4] */
  ECX = (r32((uint32_t)(0x1064fae4)));
  /* 10628c64 push ecx */
  push32((uint32_t)(ECX));
  /* 10628c65 call 0x10628d60 */
  push32(0x10628c6au); f_10628d60();
  /* 10628c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628c6d mov dword ptr [0x1064fd84], eax */
  w32((uint32_t)(0x1064fd84), (EAX));
  /* 10628c72 mov dword ptr [0x1064fb6c], 1 */
  w32((uint32_t)(0x1064fb6c), (0x1u));
  /* 10628c7c jmp 0x10628c88 */
  goto L_10628c88;
L_10628c7e:;
  /* 10628c7e mov dword ptr [0x1064fb6c], 0 */
  w32((uint32_t)(0x1064fb6c), (0x0u));
L_10628c88:;
  /* 10628c88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10628c8f jmp 0x10628c9a */
  goto L_10628c9a;
L_10628c91:;
  /* 10628c91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10628c94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628c97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10628c9a:;
  /* 10628c9a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628c9e jae 0x10628caf */
  if (!C.cf) goto L_10628caf;
  /* 10628ca0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10628ca3 mov word ptr [eax*2 + 0x1064fb60], 0 */
  w16((uint32_t)(EAX*2 + 0x1064fb60), (0x0u));
  /* 10628cad jmp 0x10628c91 */
  goto L_10628c91;
L_10628caf:;
  /* 10628caf call 0x10628e60 */
  push32(0x10628cb4u); f_10628e60();
  /* 10628cb4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10628cb6 call 0x10626380 */
  push32(0x10628cbbu); f_10626380();
  /* 10628cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628cbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10628cc0 jmp 0x10628cf0 */
  goto L_10628cf0;
L_10628cc2:;
  /* 10628cc2 cmp dword ptr [0x1064e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628cc9 je 0x10628ce3 */
  if (C.zf) goto L_10628ce3;
  /* 10628ccb call 0x10628de0 */
  push32(0x10628cd0u); f_10628de0();
  /* 10628cd0 call 0x10628e60 */
  push32(0x10628cd5u); f_10628e60();
  /* 10628cd5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10628cd7 call 0x10626380 */
  push32(0x10628cdcu); f_10626380();
  /* 10628cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10628ce1 jmp 0x10628cf0 */
  goto L_10628cf0;
L_10628ce3:;
  /* 10628ce3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10628ce5 call 0x10626380 */
  push32(0x10628ceau); f_10626380();
  /* 10628cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628ced or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10628cf0:;
  /* 10628cf0 mov esp, ebp */
  ESP = (EBP);
  /* 10628cf2 pop ebp */
  EBP = (pop32());
  /* 10628cf3 ret  */
  ESPCHK(0x106289b0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10628d00 (89 bytes, 21 insns) */
void f_10628d00(void) {
  FTRACE(0x10628d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10628d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10628d01 mov ebp, esp */
  EBP = (ESP);
  /* 10628d03 mov dword ptr [0x1064e600], 0 */
  w32((uint32_t)(0x1064e600), (0x0u));
  /* 10628d0d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628d11 jne 0x10628d25 */
  if (!C.zf) goto L_10628d25;
  /* 10628d13 mov dword ptr [0x1064e600], 1 */
  w32((uint32_t)(0x1064e600), (0x1u));
  /* 10628d1d call dword ptr [0x10650320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650320))), 0x10628d23u);
  /* 10628d23 jmp 0x10628d57 */
  goto L_10628d57;
L_10628d25:;
  /* 10628d25 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628d29 jne 0x10628d3d */
  if (!C.zf) goto L_10628d3d;
  /* 10628d2b mov dword ptr [0x1064e600], 1 */
  w32((uint32_t)(0x1064e600), (0x1u));
  /* 10628d35 call dword ptr [0x1065031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065031c))), 0x10628d3bu);
  /* 10628d3b jmp 0x10628d57 */
  goto L_10628d57;
L_10628d3d:;
  /* 10628d3d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628d41 jne 0x10628d54 */
  if (!C.zf) goto L_10628d54;
  /* 10628d43 mov dword ptr [0x1064e600], 1 */
  w32((uint32_t)(0x1064e600), (0x1u));
  /* 10628d4d mov eax, dword ptr [0x1064e620] */
  EAX = (r32((uint32_t)(0x1064e620)));
  /* 10628d52 jmp 0x10628d57 */
  goto L_10628d57;
L_10628d54:;
  /* 10628d54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10628d57:;
  /* 10628d57 pop ebp */
  EBP = (pop32());
  /* 10628d58 ret  */
  ESPCHK(0x10628d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d60 @ 0x10628d60 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10628d60(void) {
  FTRACE(0x10628d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10628d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10628d61 mov ebp, esp */
  EBP = (ESP);
  /* 10628d63 push ecx */
  push32((uint32_t)(ECX));
  /* 10628d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10628d67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10628d6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628d6d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10628d73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10628d76 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628d7a ja 0x10628daa */
  if ((!C.cf&&!C.zf)) goto L_10628daa;
  /* 10628d7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628d7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10628d81 mov dl, byte ptr [eax + 0x10628dc4] */
  DL = (r8((uint32_t)(EAX + 0x10628dc4)));
  /* 10628d87 jmp dword ptr [edx*4 + 0x10628db0] */
  switch (EDX) {
    case 0: goto L_10628d8e;
    case 1: goto L_10628d95;
    case 2: goto L_10628d9c;
    case 3: goto L_10628da3;
    case 4: goto L_10628daa;
    default: x86_unimpl("switch@0x10628d87 out of table"); return;
  }
L_10628d8e:;
  /* 10628d8e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10628d93 jmp 0x10628dac */
  goto L_10628dac;
L_10628d95:;
  /* 10628d95 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10628d9a jmp 0x10628dac */
  goto L_10628dac;
L_10628d9c:;
  /* 10628d9c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10628da1 jmp 0x10628dac */
  goto L_10628dac;
L_10628da3:;
  /* 10628da3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10628da8 jmp 0x10628dac */
  goto L_10628dac;
L_10628daa:;
  /* 10628daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10628dac:;
  /* 10628dac mov esp, ebp */
  ESP = (EBP);
  /* 10628dae pop ebp */
  EBP = (pop32());
  /* 10628daf ret  */
  ESPCHK(0x10628d60u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10628de0 (116 bytes, 29 insns) */
void f_10628de0(void) {
  FTRACE(0x10628de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10628de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10628de1 mov ebp, esp */
  EBP = (ESP);
  /* 10628de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10628de4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10628deb jmp 0x10628df6 */
  goto L_10628df6;
L_10628ded:;
  /* 10628ded mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628df0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628df3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10628df6:;
  /* 10628df6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628dfd jge 0x10628e0b */
  if ((C.sf==C.of)) goto L_10628e0b;
  /* 10628dff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628e02 mov byte ptr [ecx + 0x1064fc80], 0 */
  w8((uint32_t)(ECX + 0x1064fc80), (0x0u));
  /* 10628e09 jmp 0x10628ded */
  goto L_10628ded;
L_10628e0b:;
  /* 10628e0b mov dword ptr [0x1064fae4], 0 */
  w32((uint32_t)(0x1064fae4), (0x0u));
  /* 10628e15 mov dword ptr [0x1064fb6c], 0 */
  w32((uint32_t)(0x1064fb6c), (0x0u));
  /* 10628e1f mov dword ptr [0x1064fd84], 0 */
  w32((uint32_t)(0x1064fd84), (0x0u));
  /* 10628e29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10628e30 jmp 0x10628e3b */
  goto L_10628e3b;
L_10628e32:;
  /* 10628e32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628e35 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628e38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10628e3b:;
  /* 10628e3b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628e3f jge 0x10628e50 */
  if ((C.sf==C.of)) goto L_10628e50;
  /* 10628e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628e44 mov word ptr [eax*2 + 0x1064fb60], 0 */
  w16((uint32_t)(EAX*2 + 0x1064fb60), (0x0u));
  /* 10628e4e jmp 0x10628e32 */
  goto L_10628e32;
L_10628e50:;
  /* 10628e50 mov esp, ebp */
  ESP = (EBP);
  /* 10628e52 pop ebp */
  EBP = (pop32());
  /* 10628e53 ret  */
  ESPCHK(0x10628de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e60 @ 0x10628e60 (770 bytes, 175 insns) */
void f_10628e60(void) {
  FTRACE(0x10628e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10628e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10628e61 mov ebp, esp */
  EBP = (ESP);
  /* 10628e63 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10628e69 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10628e6f push eax */
  push32((uint32_t)(EAX));
  /* 10628e70 mov ecx, dword ptr [0x1064fae4] */
  ECX = (r32((uint32_t)(0x1064fae4)));
  /* 10628e76 push ecx */
  push32((uint32_t)(ECX));
  /* 10628e77 call dword ptr [0x10650318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650318))), 0x10628e7du);
  /* 10628e7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628e80 jne 0x10629099 */
  if (!C.zf) goto L_10629099;
  /* 10628e86 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10628e90 jmp 0x10628ea1 */
  goto L_10628ea1;
L_10628e92:;
  /* 10628e92 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10628e98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628e9b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10628ea1:;
  /* 10628ea1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628eab jae 0x10628ec2 */
  if (!C.cf) goto L_10628ec2;
  /* 10628ead mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10628eb3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10628eb9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10628ec0 jmp 0x10628e92 */
  goto L_10628e92;
L_10628ec2:;
  /* 10628ec2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10628ec9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10628ecf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10628ed2 jmp 0x10628edd */
  goto L_10628edd;
L_10628ed4:;
  /* 10628ed4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628ed7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628eda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10628edd:;
  /* 10628edd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628ee0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10628ee2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10628ee4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10628ee6 je 0x10628f28 */
  if (C.zf) goto L_10628f28;
  /* 10628ee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628eeb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10628eed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10628eef mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10628ef5 jmp 0x10628f06 */
  goto L_10628f06;
L_10628ef7:;
  /* 10628ef7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10628efd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628f00 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10628f06:;
  /* 10628f06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10628f09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10628f0b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10628f0e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628f14 ja 0x10628f26 */
  if ((!C.cf&&!C.zf)) goto L_10628f26;
  /* 10628f16 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10628f1c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10628f24 jmp 0x10628ef7 */
  goto L_10628ef7;
L_10628f26:;
  /* 10628f26 jmp 0x10628ed4 */
  goto L_10628ed4;
L_10628f28:;
  /* 10628f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10628f2a mov eax, dword ptr [0x1064fd84] */
  EAX = (r32((uint32_t)(0x1064fd84)));
  /* 10628f2f push eax */
  push32((uint32_t)(EAX));
  /* 10628f30 mov ecx, dword ptr [0x1064fae4] */
  ECX = (r32((uint32_t)(0x1064fae4)));
  /* 10628f36 push ecx */
  push32((uint32_t)(ECX));
  /* 10628f37 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10628f3d push edx */
  push32((uint32_t)(EDX));
  /* 10628f3e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10628f43 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10628f49 push eax */
  push32((uint32_t)(EAX));
  /* 10628f4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10628f4c call 0x1062ab10 */
  push32(0x10628f51u); f_1062ab10();
  /* 10628f51 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10628f56 mov ecx, dword ptr [0x1064fae4] */
  ECX = (r32((uint32_t)(0x1064fae4)));
  /* 10628f5c push ecx */
  push32((uint32_t)(ECX));
  /* 10628f5d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10628f62 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10628f68 push edx */
  push32((uint32_t)(EDX));
  /* 10628f69 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10628f6e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10628f74 push eax */
  push32((uint32_t)(EAX));
  /* 10628f75 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10628f7a mov ecx, dword ptr [0x1064fd84] */
  ECX = (r32((uint32_t)(0x1064fd84)));
  /* 10628f80 push ecx */
  push32((uint32_t)(ECX));
  /* 10628f81 call 0x1062acd0 */
  push32(0x10628f86u); f_1062acd0();
  /* 10628f86 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10628f8b mov edx, dword ptr [0x1064fae4] */
  EDX = (r32((uint32_t)(0x1064fae4)));
  /* 10628f91 push edx */
  push32((uint32_t)(EDX));
  /* 10628f92 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10628f97 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10628f9d push eax */
  push32((uint32_t)(EAX));
  /* 10628f9e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10628fa3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10628fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 10628faa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10628faf mov edx, dword ptr [0x1064fd84] */
  EDX = (r32((uint32_t)(0x1064fd84)));
  /* 10628fb5 push edx */
  push32((uint32_t)(EDX));
  /* 10628fb6 call 0x1062acd0 */
  push32(0x10628fbbu); f_1062acd0();
  /* 10628fbb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10628fbe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10628fc8 jmp 0x10628fd9 */
  goto L_10628fd9;
L_10628fca:;
  /* 10628fca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10628fd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10628fd3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10628fd9:;
  /* 10628fd9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10628fe3 jae 0x10629094 */
  if (!C.cf) goto L_10629094;
  /* 10628fe9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10628fef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10628ff1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10628ff9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10628ffc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10628ffe je 0x10629036 */
  if (C.zf) goto L_10629036;
  /* 10629000 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629006 mov cl, byte ptr [eax + 0x1064fc81] */
  CL = (r8((uint32_t)(EAX + 0x1064fc81)));
  /* 1062900c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1062900f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629015 mov byte ptr [edx + 0x1064fc81], cl */
  w8((uint32_t)(EDX + 0x1064fc81), (CL));
  /* 1062901b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629021 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629027 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1062902e mov byte ptr [eax + 0x1064fb80], dl */
  w8((uint32_t)(EAX + 0x1064fb80), (DL));
  /* 10629034 jmp 0x1062908f */
  goto L_1062908f;
L_10629036:;
  /* 10629036 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1062903c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062903e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10629046 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10629049 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062904b je 0x10629082 */
  if (C.zf) goto L_10629082;
  /* 1062904d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629053 mov al, byte ptr [edx + 0x1064fc81] */
  AL = (r8((uint32_t)(EDX + 0x1064fc81)));
  /* 10629059 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1062905b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629061 mov byte ptr [ecx + 0x1064fc81], al */
  w8((uint32_t)(ECX + 0x1064fc81), (AL));
  /* 10629067 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1062906d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629073 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1062907a mov byte ptr [edx + 0x1064fb80], cl */
  w8((uint32_t)(EDX + 0x1064fb80), (CL));
  /* 10629080 jmp 0x1062908f */
  goto L_1062908f;
L_10629082:;
  /* 10629082 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629088 mov byte ptr [edx + 0x1064fb80], 0 */
  w8((uint32_t)(EDX + 0x1064fb80), (0x0u));
L_1062908f:;
  /* 1062908f jmp 0x10628fca */
  goto L_10628fca;
L_10629094:;
  /* 10629094 jmp 0x1062915e */
  goto L_1062915e;
L_10629099:;
  /* 10629099 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 106290a3 jmp 0x106290b4 */
  goto L_106290b4;
L_106290a5:;
  /* 106290a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106290ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106290ae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_106290b4:;
  /* 106290b4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106290be jae 0x1062915e */
  if (!C.cf) goto L_1062915e;
  /* 106290c4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106290cb jb 0x10629108 */
  if (C.cf) goto L_10629108;
  /* 106290cd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106290d4 ja 0x10629108 */
  if ((!C.cf&&!C.zf)) goto L_10629108;
  /* 106290d6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106290dc mov dl, byte ptr [ecx + 0x1064fc81] */
  DL = (r8((uint32_t)(ECX + 0x1064fc81)));
  /* 106290e2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 106290e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106290eb mov byte ptr [eax + 0x1064fc81], dl */
  w8((uint32_t)(EAX + 0x1064fc81), (DL));
  /* 106290f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106290f7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106290fa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629100 mov byte ptr [edx + 0x1064fb80], cl */
  w8((uint32_t)(EDX + 0x1064fb80), (CL));
  /* 10629106 jmp 0x10629159 */
  goto L_10629159;
L_10629108:;
  /* 10629108 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062910f jb 0x1062914c */
  if (C.cf) goto L_1062914c;
  /* 10629111 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629118 ja 0x1062914c */
  if ((!C.cf&&!C.zf)) goto L_1062914c;
  /* 1062911a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629120 mov cl, byte ptr [eax + 0x1064fc81] */
  CL = (r8((uint32_t)(EAX + 0x1064fc81)));
  /* 10629126 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10629129 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1062912f mov byte ptr [edx + 0x1064fc81], cl */
  w8((uint32_t)(EDX + 0x1064fc81), (CL));
  /* 10629135 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1062913b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062913e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629144 mov byte ptr [ecx + 0x1064fb80], al */
  w8((uint32_t)(ECX + 0x1064fb80), (AL));
  /* 1062914a jmp 0x10629159 */
  goto L_10629159;
L_1062914c:;
  /* 1062914c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10629152 mov byte ptr [edx + 0x1064fb80], 0 */
  w8((uint32_t)(EDX + 0x1064fb80), (0x0u));
L_10629159:;
  /* 10629159 jmp 0x106290a5 */
  goto L_106290a5;
L_1062915e:;
  /* 1062915e mov esp, ebp */
  ESP = (EBP);
  /* 10629160 pop ebp */
  EBP = (pop32());
  /* 10629161 ret  */
  ESPCHK(0x10628e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009170 @ 0x10629170 (23 bytes, 9 insns) */
void f_10629170(void) {
  FTRACE(0x10629170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10629170 push ebp */
  push32((uint32_t)(EBP));
  /* 10629171 mov ebp, esp */
  EBP = (ESP);
  /* 10629173 cmp dword ptr [0x1064fb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064fb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062917a je 0x10629183 */
  if (C.zf) goto L_10629183;
  /* 1062917c mov eax, dword ptr [0x1064fae4] */
  EAX = (r32((uint32_t)(0x1064fae4)));
  /* 10629181 jmp 0x10629185 */
  goto L_10629185;
L_10629183:;
  /* 10629183 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10629185:;
  /* 10629185 pop ebp */
  EBP = (pop32());
  /* 10629186 ret  */
  ESPCHK(0x10629170u, _esp0);
  ESP += 4; return;
}

/* FUN_10009190 @ 0x10629190 (34 bytes, 10 insns) */
void f_10629190(void) {
  FTRACE(0x10629190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10629190 push ebp */
  push32((uint32_t)(EBP));
  /* 10629191 mov ebp, esp */
  EBP = (ESP);
  /* 10629193 cmp dword ptr [0x1064ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062919a jne 0x106291b0 */
  if (!C.zf) goto L_106291b0;
  /* 1062919c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1062919e call 0x106289b0 */
  push32(0x106291a3u); f_106289b0();
  /* 106291a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106291a6 mov dword ptr [0x1064ff30], 1 */
  w32((uint32_t)(0x1064ff30), (0x1u));
L_106291b0:;
  /* 106291b0 pop ebp */
  EBP = (pop32());
  /* 106291b1 ret  */
  ESPCHK(0x10629190u, _esp0);
  ESP += 4; return;
}

/* FUN_100091c0 @ 0x106291c0 (664 bytes, 268 insns) [15 switch table(s)] */
void f_106291c0(void) {
  FTRACE(0x106291c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106291c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106291c1 mov ebp, esp */
  EBP = (ESP);
  /* 106291c3 push edi */
  push32((uint32_t)(EDI));
  /* 106291c4 push esi */
  push32((uint32_t)(ESI));
  /* 106291c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106291c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106291cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 106291ce mov eax, ecx */
  EAX = (ECX);
  /* 106291d0 mov edx, ecx */
  EDX = (ECX);
  /* 106291d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106291d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106291d6 jbe 0x106291e0 */
  if ((C.cf||C.zf)) goto L_106291e0;
  /* 106291d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106291da jb 0x10629358 */
  if (C.cf) goto L_10629358;
L_106291e0:;
  /* 106291e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106291e6 jne 0x106291fc */
  if (!C.zf) goto L_106291fc;
  /* 106291e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106291eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106291ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106291f1 jb 0x1062921c */
  if (C.cf) goto L_1062921c;
  /* 106291f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106291f5 jmp dword ptr [edx*4 + 0x10629308] */
  switch (EDX) {
    case 0: goto L_10629318;
    case 1: goto L_10629320;
    case 2: goto L_1062932c;
    case 3: goto L_10629340;
    default: x86_unimpl("switch@0x106291f5 out of table"); return;
  }
L_106291fc:;
  /* 106291fc mov eax, edi */
  EAX = (EDI);
  /* 106291fe mov edx, 3 */
  EDX = (0x3u);
  /* 10629203 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629206 jb 0x10629214 */
  if (C.cf) goto L_10629214;
  /* 10629208 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1062920b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062920d jmp dword ptr [eax*4 + 0x10629220] */
  switch (EAX) {
    case 1: goto L_10629230;
    case 2: goto L_1062925c;
    case 3: goto L_10629280;
    default: x86_unimpl("switch@0x1062920d out of table"); return;
  }
L_10629214:;
  /* 10629214 jmp dword ptr [ecx*4 + 0x10629318] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10629318)))); return;
  /* 1062921b nop  */
  /* nop */
L_1062921c:;
  /* 1062921c jmp dword ptr [ecx*4 + 0x1062929c] */
  switch (ECX) {
    case 0: goto L_106292ff;
    case 1: goto L_106292ec;
    case 2: goto L_106292e4;
    case 3: goto L_106292dc;
    case 4: goto L_106292d4;
    case 5: goto L_106292cc;
    case 6: goto L_106292c4;
    case 7: goto L_106292bc;
    default: x86_unimpl("switch@0x1062921c out of table"); return;
  }
  /* 10629223 nop  */
  /* nop */
L_10629230:;
  /* 10629230 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10629232 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10629234 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10629236 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10629239 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1062923c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1062923f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10629242 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10629245 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10629248 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1062924b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062924e jb 0x1062921c */
  if (C.cf) goto L_1062921c;
  /* 10629250 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10629252 jmp dword ptr [edx*4 + 0x10629308] */
  switch (EDX) {
    case 0: goto L_10629318;
    case 1: goto L_10629320;
    case 2: goto L_1062932c;
    case 3: goto L_10629340;
    default: x86_unimpl("switch@0x10629252 out of table"); return;
  }
  /* 10629259 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1062925c:;
  /* 1062925c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1062925e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10629260 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10629262 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10629265 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10629268 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1062926b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1062926e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10629271 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629274 jb 0x1062921c */
  if (C.cf) goto L_1062921c;
  /* 10629276 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10629278 jmp dword ptr [edx*4 + 0x10629308] */
  switch (EDX) {
    case 0: goto L_10629318;
    case 1: goto L_10629320;
    case 2: goto L_1062932c;
    case 3: goto L_10629340;
    default: x86_unimpl("switch@0x10629278 out of table"); return;
  }
  /* 1062927f nop  */
  /* nop */
L_10629280:;
  /* 10629280 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10629282 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10629284 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10629286 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10629287 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062928a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1062928b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062928e jb 0x1062921c */
  if (C.cf) goto L_1062921c;
  /* 10629290 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10629292 jmp dword ptr [edx*4 + 0x10629308] */
  switch (EDX) {
    case 0: goto L_10629318;
    case 1: goto L_10629320;
    case 2: goto L_1062932c;
    case 3: goto L_10629340;
    default: x86_unimpl("switch@0x10629292 out of table"); return;
  }
  /* 10629299 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106292bc:;
  /* 106292bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 106292c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_106292c4:;
  /* 106292c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 106292c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_106292cc:;
  /* 106292cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 106292d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_106292d4:;
  /* 106292d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 106292d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_106292dc:;
  /* 106292dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 106292e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_106292e4:;
  /* 106292e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 106292e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_106292ec:;
  /* 106292ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 106292f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 106292f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 106292fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106292fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106292ff:;
  /* 106292ff jmp dword ptr [edx*4 + 0x10629308] */
  switch (EDX) {
    case 0: goto L_10629318;
    case 1: goto L_10629320;
    case 2: goto L_1062932c;
    case 3: goto L_10629340;
    default: x86_unimpl("switch@0x106292ff out of table"); return;
  }
  /* 10629306 mov edi, edi */
  EDI = (EDI);
L_10629318:;
  /* 10629318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062931b pop esi */
  ESI = (pop32());
  /* 1062931c pop edi */
  EDI = (pop32());
  /* 1062931d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062931e ret  */
  ESPCHK(0x106291c0u, _esp0);
  ESP += 4; return;
  /* 1062931f nop  */
  /* nop */
L_10629320:;
  /* 10629320 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10629322 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10629324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10629327 pop esi */
  ESI = (pop32());
  /* 10629328 pop edi */
  EDI = (pop32());
  /* 10629329 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062932a ret  */
  ESPCHK(0x106291c0u, _esp0);
  ESP += 4; return;
  /* 1062932b nop  */
  /* nop */
L_1062932c:;
  /* 1062932c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1062932e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10629330 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10629333 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10629336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10629339 pop esi */
  ESI = (pop32());
  /* 1062933a pop edi */
  EDI = (pop32());
  /* 1062933b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062933c ret  */
  ESPCHK(0x106291c0u, _esp0);
  ESP += 4; return;
  /* 1062933d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10629340:;
  /* 10629340 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10629342 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10629344 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10629347 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1062934a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1062934d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10629350 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10629353 pop esi */
  ESI = (pop32());
  /* 10629354 pop edi */
  EDI = (pop32());
  /* 10629355 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10629356 ret  */
  ESPCHK(0x106291c0u, _esp0);
  ESP += 4; return;
  /* 10629357 nop  */
  /* nop */
L_10629358:;
  /* 10629358 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1062935c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10629360 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10629366 jne 0x1062938c */
  if (!C.zf) goto L_1062938c;
  /* 10629368 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062936b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1062936e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629371 jb 0x10629380 */
  if (C.cf) goto L_10629380;
  /* 10629373 std  */
  C.df=1;
  /* 10629374 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10629376 cld  */
  C.df=0;
  /* 10629377 jmp dword ptr [edx*4 + 0x106294a0] */
  switch (EDX) {
    case 0: goto L_106294b0;
    case 1: goto L_106294b8;
    case 2: goto L_106294c8;
    case 3: goto L_106294dc;
    default: x86_unimpl("switch@0x10629377 out of table"); return;
  }
  /* 1062937e mov edi, edi */
  EDI = (EDI);
L_10629380:;
  /* 10629380 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10629382 jmp dword ptr [ecx*4 + 0x10629450] */
  switch (ECX) {
    case 0: goto L_10629497;
    default: x86_unimpl("switch@0x10629382 out of table"); return;
  }
  /* 10629389 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1062938c:;
  /* 1062938c mov eax, edi */
  EAX = (EDI);
  /* 1062938e mov edx, 3 */
  EDX = (0x3u);
  /* 10629393 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629396 jb 0x106293a4 */
  if (C.cf) goto L_106293a4;
  /* 10629398 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1062939b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062939d jmp dword ptr [eax*4 + 0x106293a8] */
  switch (EAX) {
    case 1: goto L_106293b8;
    case 2: goto L_106293d8;
    case 3: goto L_10629400;
    default: x86_unimpl("switch@0x1062939d out of table"); return;
  }
L_106293a4:;
  /* 106293a4 jmp dword ptr [ecx*4 + 0x106294a0] */
  switch (ECX) {
    case 0: goto L_106294b0;
    case 1: goto L_106294b8;
    case 2: goto L_106294c8;
    case 3: goto L_106294dc;
    default: x86_unimpl("switch@0x106293a4 out of table"); return;
  }
  /* 106293ab nop  */
  /* nop */
L_106293b8:;
  /* 106293b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106293bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106293bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106293c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 106293c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106293c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 106293c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106293c8 jb 0x10629380 */
  if (C.cf) goto L_10629380;
  /* 106293ca std  */
  C.df=1;
  /* 106293cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106293cd cld  */
  C.df=0;
  /* 106293ce jmp dword ptr [edx*4 + 0x106294a0] */
  switch (EDX) {
    case 0: goto L_106294b0;
    case 1: goto L_106294b8;
    case 2: goto L_106294c8;
    case 3: goto L_106294dc;
    default: x86_unimpl("switch@0x106293ce out of table"); return;
  }
  /* 106293d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106293d8:;
  /* 106293d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106293db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106293dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106293e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106293e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106293e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106293e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106293ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106293ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106293f2 jb 0x10629380 */
  if (C.cf) goto L_10629380;
  /* 106293f4 std  */
  C.df=1;
  /* 106293f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106293f7 cld  */
  C.df=0;
  /* 106293f8 jmp dword ptr [edx*4 + 0x106294a0] */
  switch (EDX) {
    case 0: goto L_106294b0;
    case 1: goto L_106294b8;
    case 2: goto L_106294c8;
    case 3: goto L_106294dc;
    default: x86_unimpl("switch@0x106293f8 out of table"); return;
  }
  /* 106293ff nop  */
  /* nop */
L_10629400:;
  /* 10629400 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10629403 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10629405 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10629408 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1062940b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1062940e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10629411 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10629414 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10629417 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062941a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062941d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629420 jb 0x10629380 */
  if (C.cf) goto L_10629380;
  /* 10629426 std  */
  C.df=1;
  /* 10629427 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10629429 cld  */
  C.df=0;
  /* 1062942a jmp dword ptr [edx*4 + 0x106294a0] */
  switch (EDX) {
    case 0: goto L_106294b0;
    case 1: goto L_106294b8;
    case 2: goto L_106294c8;
    case 3: goto L_106294dc;
    default: x86_unimpl("switch@0x1062942a out of table"); return;
  }
  /* 10629431 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10629434 push esp */
  push32((uint32_t)(ESP));
  /* 10629435 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10629436 bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x10629436");
  /* 10629438 pop esp */
  ESP = (pop32());
  /* 10629439 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1062943a bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x1062943a");
  /* 1062943c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1062943e bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x1062943e");
  /* 10629440 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x10629440");
  /* 10629441 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10629442 bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x10629442");
  /* 10629444 je 0x106293da */
  if (C.zf) goto L_106293da;
  /* 10629446 bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x10629446");
  /* 10629448 jl 0x106293de */
  if ((C.sf!=C.of)) goto L_106293de;
  /* 1062944a bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x1062944a");
  /* 1062944d xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1062944e bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x1062944e");
  /* 10629454 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10629458 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1062945c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10629460 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10629464 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10629468 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1062946c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10629470 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10629474 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10629478 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1062947c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10629480 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10629484 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10629488 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1062948c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10629493 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10629495 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10629497:;
  /* 10629497 jmp dword ptr [edx*4 + 0x106294a0] */
  switch (EDX) {
    case 0: goto L_106294b0;
    case 1: goto L_106294b8;
    case 2: goto L_106294c8;
    case 3: goto L_106294dc;
    default: x86_unimpl("switch@0x10629497 out of table"); return;
  }
  /* 1062949e mov edi, edi */
  EDI = (EDI);
L_106294b0:;
  /* 106294b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106294b3 pop esi */
  ESI = (pop32());
  /* 106294b4 pop edi */
  EDI = (pop32());
  /* 106294b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106294b6 ret  */
  ESPCHK(0x106291c0u, _esp0);
  ESP += 4; return;
  /* 106294b7 nop  */
  /* nop */
L_106294b8:;
  /* 106294b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106294bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106294be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106294c1 pop esi */
  ESI = (pop32());
  /* 106294c2 pop edi */
  EDI = (pop32());
  /* 106294c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106294c4 ret  */
  ESPCHK(0x106291c0u, _esp0);
  ESP += 4; return;
  /* 106294c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106294c8:;
  /* 106294c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106294cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106294ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106294d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106294d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106294d7 pop esi */
  ESI = (pop32());
  /* 106294d8 pop edi */
  EDI = (pop32());
  /* 106294d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106294da ret  */
  ESPCHK(0x106291c0u, _esp0);
  ESP += 4; return;
  /* 106294db nop  */
  /* nop */
L_106294dc:;
  /* 106294dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106294df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106294e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106294e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106294e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106294eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106294ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106294f1 pop esi */
  ESI = (pop32());
  /* 106294f2 pop edi */
  EDI = (pop32());
  /* 106294f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106294f4 ret  */
  ESPCHK(0x106291c0u, _esp0);
  ESP += 4; return;
L_106293da: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x106293da (unresolved jump table)"); return;
L_106293de: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x106293de (unresolved jump table)"); return;
}

/* __aulldiv @ 0x10629500 (104 bytes, 43 insns) */
void f_10629500(void) {
  FTRACE(0x10629500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10629500 push ebx */
  push32((uint32_t)(EBX));
  /* 10629501 push esi */
  push32((uint32_t)(ESI));
  /* 10629502 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10629506 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10629508 jne 0x10629522 */
  if (!C.zf) goto L_10629522;
  /* 1062950a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1062950e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10629512 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10629514 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10629516 mov ebx, eax */
  EBX = (EAX);
  /* 10629518 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1062951c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1062951e mov edx, ebx */
  EDX = (EBX);
  /* 10629520 jmp 0x10629563 */
  goto L_10629563;
L_10629522:;
  /* 10629522 mov ecx, eax */
  ECX = (EAX);
  /* 10629524 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10629528 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1062952c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10629530:;
  /* 10629530 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10629532 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10629534 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10629536 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10629538 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062953a jne 0x10629530 */
  if (!C.zf) goto L_10629530;
  /* 1062953c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1062953e mov esi, eax */
  ESI = (EAX);
  /* 10629540 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10629544 mov ecx, eax */
  ECX = (EAX);
  /* 10629546 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1062954a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1062954c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062954e jb 0x1062955e */
  if (C.cf) goto L_1062955e;
  /* 10629550 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629554 ja 0x1062955e */
  if ((!C.cf&&!C.zf)) goto L_1062955e;
  /* 10629556 jb 0x1062955f */
  if (C.cf) goto L_1062955f;
  /* 10629558 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062955c jbe 0x1062955f */
  if ((C.cf||C.zf)) goto L_1062955f;
L_1062955e:;
  /* 1062955e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1062955f:;
  /* 1062955f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10629561 mov eax, esi */
  EAX = (ESI);
L_10629563:;
  /* 10629563 pop esi */
  ESI = (pop32());
  /* 10629564 pop ebx */
  EBX = (pop32());
  /* 10629565 ret 0x10 */
  ESPCHK(0x10629500u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10629570 (117 bytes, 44 insns) */
void f_10629570(void) {
  FTRACE(0x10629570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10629570 push ebx */
  push32((uint32_t)(EBX));
  /* 10629571 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10629575 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10629577 jne 0x10629591 */
  if (!C.zf) goto L_10629591;
  /* 10629579 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1062957d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10629581 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10629583 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10629585 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10629589 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1062958b mov eax, edx */
  EAX = (EDX);
  /* 1062958d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1062958f jmp 0x106295e1 */
  goto L_106295e1;
L_10629591:;
  /* 10629591 mov ecx, eax */
  ECX = (EAX);
  /* 10629593 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10629597 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1062959b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1062959f:;
  /* 1062959f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106295a1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 106295a3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106295a5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 106295a7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106295a9 jne 0x1062959f */
  if (!C.zf) goto L_1062959f;
  /* 106295ab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106295ad mov ecx, eax */
  ECX = (EAX);
  /* 106295af mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106295b3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 106295b4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106295b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106295ba jb 0x106295ca */
  if (C.cf) goto L_106295ca;
  /* 106295bc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106295c0 ja 0x106295ca */
  if ((!C.cf&&!C.zf)) goto L_106295ca;
  /* 106295c2 jb 0x106295d2 */
  if (C.cf) goto L_106295d2;
  /* 106295c4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106295c8 jbe 0x106295d2 */
  if ((C.cf||C.zf)) goto L_106295d2;
L_106295ca:;
  /* 106295ca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106295ce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_106295d2:;
  /* 106295d2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106295d6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106295da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106295dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106295de sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_106295e1:;
  /* 106295e1 pop ebx */
  EBX = (pop32());
  /* 106295e2 ret 0x10 */
  ESPCHK(0x10629570u, _esp0);
  ESP += 20; return;
}

/* FUN_100095f0 @ 0x106295f0 (628 bytes, 214 insns) */
void f_106295f0(void) {
  FTRACE(0x106295f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106295f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106295f1 mov ebp, esp */
  EBP = (ESP);
  /* 106295f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106295f6 push ebx */
  push32((uint32_t)(EBX));
  /* 106295f7 push esi */
  push32((uint32_t)(ESI));
  /* 106295f8 push edi */
  push32((uint32_t)(EDI));
L_106295f9:;
  /* 106295f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106295fd jne 0x1062961d */
  if (!C.zf) goto L_1062961d;
  /* 106295ff push 0x10649e9c */
  push32((uint32_t)(0x10649e9cu));
  /* 10629604 push 0 */
  push32((uint32_t)(0x0u));
  /* 10629606 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10629608 push 0x10649e90 */
  push32((uint32_t)(0x10649e90u));
  /* 1062960d push 2 */
  push32((uint32_t)(0x2u));
  /* 1062960f call 0x106219a0 */
  push32(0x10629614u); f_106219a0();
  /* 10629614 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629617 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062961a jne 0x1062961d */
  if (!C.zf) goto L_1062961d;
  /* 1062961c int3  */
  x86_unimpl("int3 @ 0x1062961c");
L_1062961d:;
  /* 1062961d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062961f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629621 jne 0x106295f9 */
  if (!C.zf) goto L_106295f9;
  /* 10629623 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10629626 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10629629 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062962c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1062962f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10629632 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629635 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10629638 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1062963e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10629640 je 0x1062964f */
  if (C.zf) goto L_1062964f;
  /* 10629642 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629645 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10629648 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1062964b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062964d je 0x10629665 */
  if (C.zf) goto L_10629665;
L_1062964f:;
  /* 1062964f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629652 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10629655 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10629657 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062965a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1062965d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10629660 jmp 0x1062985d */
  goto L_1062985d;
L_10629665:;
  /* 10629665 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629668 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1062966b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1062966e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629670 je 0x106296bc */
  if (C.zf) goto L_106296bc;
  /* 10629672 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629675 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1062967c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062967f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10629682 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10629685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629687 je 0x106296a5 */
  if (C.zf) goto L_106296a5;
  /* 10629689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062968c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062968f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10629692 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10629694 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629697 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062969a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1062969d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106296a0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106296a3 jmp 0x106296bc */
  goto L_106296bc;
L_106296a5:;
  /* 106296a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106296a8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106296ab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 106296ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106296b1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106296b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106296b7 jmp 0x1062985d */
  goto L_1062985d;
L_106296bc:;
  /* 106296bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106296bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106296c2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 106296c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106296c8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106296cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106296ce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106296d1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 106296d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106296d7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106296da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106296dd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106296e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106296eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106296ee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106296f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106296f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106296f7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 106296fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106296ff jne 0x1062972f */
  if (!C.zf) goto L_1062972f;
  /* 10629701 cmp dword ptr [ebp - 8], 0x1064d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1064d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629708 je 0x10629713 */
  if (C.zf) goto L_10629713;
  /* 1062970a cmp dword ptr [ebp - 8], 0x1064d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1064d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629711 jne 0x10629723 */
  if (!C.zf) goto L_10629723;
L_10629713:;
  /* 10629713 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10629716 push edx */
  push32((uint32_t)(EDX));
  /* 10629717 call 0x1062b560 */
  push32(0x1062971cu); f_1062b560();
  /* 1062971c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062971f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629721 jne 0x1062972f */
  if (!C.zf) goto L_1062972f;
L_10629723:;
  /* 10629723 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629726 push eax */
  push32((uint32_t)(EAX));
  /* 10629727 call 0x1062b490 */
  push32(0x1062972cu); f_1062b490();
  /* 1062972c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062972f:;
  /* 1062972f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629732 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10629735 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1062973b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062973d je 0x1062981b */
  if (C.zf) goto L_1062981b;
L_10629743:;
  /* 10629743 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629746 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629749 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1062974b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062974e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10629750 jge 0x10629773 */
  if ((C.sf==C.of)) goto L_10629773;
  /* 10629752 push 0x10649e50 */
  push32((uint32_t)(0x10649e50u));
  /* 10629757 push 0 */
  push32((uint32_t)(0x0u));
  /* 10629759 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1062975e push 0x10649e90 */
  push32((uint32_t)(0x10649e90u));
  /* 10629763 push 2 */
  push32((uint32_t)(0x2u));
  /* 10629765 call 0x106219a0 */
  push32(0x1062976au); f_106219a0();
  /* 1062976a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062976d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629770 jne 0x10629773 */
  if (!C.zf) goto L_10629773;
  /* 10629772 int3  */
  x86_unimpl("int3 @ 0x10629772");
L_10629773:;
  /* 10629773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10629775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629777 jne 0x10629743 */
  if (!C.zf) goto L_10629743;
  /* 10629779 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062977c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062977f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10629781 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629784 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10629787 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062978a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1062978d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10629790 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629793 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10629795 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629798 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1062979b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062979e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106297a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106297a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106297a8 jle 0x106297c6 */
  if ((C.zf||C.sf!=C.of)) goto L_106297c6;
  /* 106297aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106297ad push ecx */
  push32((uint32_t)(ECX));
  /* 106297ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106297b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106297b4 push eax */
  push32((uint32_t)(EAX));
  /* 106297b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106297b8 push ecx */
  push32((uint32_t)(ECX));
  /* 106297b9 call 0x1062b180 */
  push32(0x106297beu); f_1062b180();
  /* 106297be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106297c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106297c4 jmp 0x1062980e */
  goto L_1062980e;
L_106297c6:;
  /* 106297c6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106297ca je 0x106297e9 */
  if (C.zf) goto L_106297e9;
  /* 106297cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106297cf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106297d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106297d5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106297d8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106297db mov ecx, dword ptr [edx*4 + 0x1064fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1064fde0)));
  /* 106297e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106297e4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106297e7 jmp 0x106297f0 */
  goto L_106297f0;
L_106297e9:;
  /* 106297e9 mov dword ptr [ebp - 0x14], 0x1064ca60 */
  w32((uint32_t)(EBP + -0x14), (0x1064ca60u));
L_106297f0:;
  /* 106297f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106297f3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 106297f7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106297fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106297fc je 0x1062980e */
  if (C.zf) goto L_1062980e;
  /* 106297fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10629800 push 0 */
  push32((uint32_t)(0x0u));
  /* 10629802 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10629805 push ecx */
  push32((uint32_t)(ECX));
  /* 10629806 call 0x1062b030 */
  push32(0x1062980bu); f_1062b030();
  /* 1062980b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062980e:;
  /* 1062980e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629811 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10629814 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10629817 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10629819 jmp 0x10629839 */
  goto L_10629839;
L_1062981b:;
  /* 1062981b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10629822 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629825 push edx */
  push32((uint32_t)(EDX));
  /* 10629826 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10629829 push eax */
  push32((uint32_t)(EAX));
  /* 1062982a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062982d push ecx */
  push32((uint32_t)(ECX));
  /* 1062982e call 0x1062b180 */
  push32(0x10629833u); f_1062b180();
  /* 10629833 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629836 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10629839:;
  /* 10629839 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062983c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062983f je 0x10629855 */
  if (C.zf) goto L_10629855;
  /* 10629841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629844 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10629847 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1062984a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062984d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10629850 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10629853 jmp 0x1062985d */
  goto L_1062985d;
L_10629855:;
  /* 10629855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10629858 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1062985d:;
  /* 1062985d pop edi */
  EDI = (pop32());
  /* 1062985e pop esi */
  ESI = (pop32());
  /* 1062985f pop ebx */
  EBX = (pop32());
  /* 10629860 mov esp, ebp */
  ESP = (EBP);
  /* 10629862 pop ebp */
  EBP = (pop32());
  /* 10629863 ret  */
  ESPCHK(0x106295f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009870 @ 0x10629870 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10629870(void) {
  FTRACE(0x10629870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10629870 push ebp */
  push32((uint32_t)(EBP));
  /* 10629871 mov ebp, esp */
  EBP = (ESP);
  /* 10629873 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629879 push ebx */
  push32((uint32_t)(EBX));
  /* 1062987a push esi */
  push32((uint32_t)(ESI));
  /* 1062987b push edi */
  push32((uint32_t)(EDI));
  /* 1062987c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10629883 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1062988d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10629894:;
  /* 10629894 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10629897 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10629899 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1062989c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106298a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106298a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106298a6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 106298a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106298ab je 0x1062a487 */
  if (C.zf) goto L_1062a487;
  /* 106298b1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106298b8 jl 0x1062a487 */
  if ((C.sf!=C.of)) goto L_1062a487;
  /* 106298be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106298c2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106298c5 jl 0x106298e6 */
  if ((C.sf!=C.of)) goto L_106298e6;
  /* 106298c7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106298cb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106298ce jg 0x106298e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_106298e6;
  /* 106298d0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106298d4 movsx ecx, byte ptr [eax + 0x10649e88] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10649e88))));
  /* 106298db and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 106298de mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 106298e4 jmp 0x106298f0 */
  goto L_106298f0;
L_106298e6:;
  /* 106298e6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_106298f0:;
  /* 106298f0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 106298f6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106298f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106298fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106298ff movsx edx, byte ptr [ecx + eax*8 + 0x10649ea8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10649ea8))));
  /* 10629907 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1062990a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1062990d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10629910 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10629916 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062991d ja 0x1062a482 */
  if ((!C.cf&&!C.zf)) goto L_1062a482;
  /* 10629923 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10629929 jmp dword ptr [ecx*4 + 0x1062a494] */
  switch (ECX) {
    case 0: goto L_10629930;
    case 1: goto L_106299ca;
    case 2: goto L_10629a0c;
    case 3: goto L_10629a7b;
    case 4: goto L_10629ad3;
    case 5: goto L_10629ae2;
    case 6: goto L_10629b2e;
    case 7: goto L_10629bc1;
    case 8: goto L_10629a58;
    case 9: goto L_10629a63;
    case 10: goto L_10629a4e;
    case 11: goto L_10629a43;
    case 12: goto L_10629a6e;
    case 13: goto L_10629a76;
    default: x86_unimpl("switch@0x10629929 out of table"); return;
  }
L_10629930:;
  /* 10629930 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10629937 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062993a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10629940 mov eax, dword ptr [0x1064cc98] */
  EAX = (r32((uint32_t)(0x1064cc98)));
  /* 10629945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10629947 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1062994b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10629951 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10629953 je 0x106299ad */
  if (C.zf) goto L_106299ad;
  /* 10629955 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1062995b push edx */
  push32((uint32_t)(EDX));
  /* 1062995c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062995f push eax */
  push32((uint32_t)(EAX));
  /* 10629960 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629964 push ecx */
  push32((uint32_t)(ECX));
  /* 10629965 call 0x1062a5a0 */
  push32(0x1062996au); f_1062a5a0();
  /* 1062996a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062996d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10629970 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10629972 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10629975 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10629978 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062997b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1062997e:;
  /* 1062997e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629982 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10629984 jne 0x106299a7 */
  if (!C.zf) goto L_106299a7;
  /* 10629986 push 0x10649f28 */
  push32((uint32_t)(0x10649f28u));
  /* 1062998b push 0 */
  push32((uint32_t)(0x0u));
  /* 1062998d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10629992 push 0x10649f1c */
  push32((uint32_t)(0x10649f1cu));
  /* 10629997 push 2 */
  push32((uint32_t)(0x2u));
  /* 10629999 call 0x106219a0 */
  push32(0x1062999eu); f_106219a0();
  /* 1062999e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106299a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106299a4 jne 0x106299a7 */
  if (!C.zf) goto L_106299a7;
  /* 106299a6 int3  */
  x86_unimpl("int3 @ 0x106299a6");
L_106299a7:;
  /* 106299a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106299a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106299ab jne 0x1062997e */
  if (!C.zf) goto L_1062997e;
L_106299ad:;
  /* 106299ad lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 106299b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106299b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106299b7 push edx */
  push32((uint32_t)(EDX));
  /* 106299b8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106299bc push eax */
  push32((uint32_t)(EAX));
  /* 106299bd call 0x1062a5a0 */
  push32(0x106299c2u); f_1062a5a0();
  /* 106299c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106299c5 jmp 0x1062a482 */
  goto L_1062a482;
L_106299ca:;
  /* 106299ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106299d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106299d4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 106299da mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 106299e0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 106299e6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 106299ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106299ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106299f6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10629a00 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10629a07 jmp 0x1062a482 */
  goto L_1062a482;
L_10629a0c:;
  /* 10629a0c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629a10 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10629a16 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10629a1c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629a1f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10629a25 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629a2c ja 0x10629a76 */
  if ((!C.cf&&!C.zf)) goto L_10629a76;
  /* 10629a2e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10629a34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10629a36 mov al, byte ptr [ecx + 0x1062a4cc] */
  AL = (r8((uint32_t)(ECX + 0x1062a4cc)));
  /* 10629a3c jmp dword ptr [eax*4 + 0x1062a4b4] */
  switch (EAX) {
    case 0: goto L_10629a58;
    case 1: goto L_10629a63;
    case 2: goto L_10629a4e;
    case 3: goto L_10629a43;
    case 4: goto L_10629a6e;
    case 5: goto L_10629a76;
    default: x86_unimpl("switch@0x10629a3c out of table"); return;
  }
L_10629a43:;
  /* 10629a43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629a46 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10629a49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10629a4c jmp 0x10629a76 */
  goto L_10629a76;
L_10629a4e:;
  /* 10629a4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629a51 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10629a53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10629a56 jmp 0x10629a76 */
  goto L_10629a76;
L_10629a58:;
  /* 10629a58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629a5b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10629a5e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10629a61 jmp 0x10629a76 */
  goto L_10629a76;
L_10629a63:;
  /* 10629a63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629a66 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10629a69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10629a6c jmp 0x10629a76 */
  goto L_10629a76;
L_10629a6e:;
  /* 10629a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629a71 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10629a73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10629a76:;
  /* 10629a76 jmp 0x1062a482 */
  goto L_1062a482;
L_10629a7b:;
  /* 10629a7b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629a7f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629a82 jne 0x10629ab7 */
  if (!C.zf) goto L_10629ab7;
  /* 10629a84 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10629a87 push edx */
  push32((uint32_t)(EDX));
  /* 10629a88 call 0x1062a6b0 */
  push32(0x10629a8du); f_1062a6b0();
  /* 10629a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629a90 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10629a96 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629a9d jge 0x10629ab5 */
  if ((C.sf==C.of)) goto L_10629ab5;
  /* 10629a9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629aa2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10629aa4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10629aa7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10629aad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10629aaf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10629ab5:;
  /* 10629ab5 jmp 0x10629ace */
  goto L_10629ace;
L_10629ab7:;
  /* 10629ab7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10629abd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10629ac0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629ac4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10629ac8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10629ace:;
  /* 10629ace jmp 0x1062a482 */
  goto L_1062a482;
L_10629ad3:;
  /* 10629ad3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10629add jmp 0x1062a482 */
  goto L_1062a482;
L_10629ae2:;
  /* 10629ae2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629ae6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629ae9 jne 0x10629b12 */
  if (!C.zf) goto L_10629b12;
  /* 10629aeb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10629aee push eax */
  push32((uint32_t)(EAX));
  /* 10629aef call 0x1062a6b0 */
  push32(0x10629af4u); f_1062a6b0();
  /* 10629af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629af7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10629afd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629b04 jge 0x10629b10 */
  if ((C.sf==C.of)) goto L_10629b10;
  /* 10629b06 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10629b10:;
  /* 10629b10 jmp 0x10629b29 */
  goto L_10629b29;
L_10629b12:;
  /* 10629b12 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10629b18 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10629b1b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629b1f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10629b23 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10629b29:;
  /* 10629b29 jmp 0x1062a482 */
  goto L_1062a482;
L_10629b2e:;
  /* 10629b2e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629b32 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10629b38 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10629b3e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629b41 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10629b47 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629b4e ja 0x10629bbc */
  if ((!C.cf&&!C.zf)) goto L_10629bbc;
  /* 10629b50 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10629b56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10629b58 mov al, byte ptr [ecx + 0x1062a4f1] */
  AL = (r8((uint32_t)(ECX + 0x1062a4f1)));
  /* 10629b5e jmp dword ptr [eax*4 + 0x1062a4dd] */
  switch (EAX) {
    case 0: goto L_10629b70;
    case 1: goto L_10629ba9;
    case 2: goto L_10629b65;
    case 3: goto L_10629bb3;
    case 4: goto L_10629bbc;
    default: x86_unimpl("switch@0x10629b5e out of table"); return;
  }
L_10629b65:;
  /* 10629b65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629b68 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10629b6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10629b6e jmp 0x10629bbc */
  goto L_10629bbc;
L_10629b70:;
  /* 10629b70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10629b73 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10629b76 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629b79 jne 0x10629b9b */
  if (!C.zf) goto L_10629b9b;
  /* 10629b7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10629b7e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10629b82 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629b85 jne 0x10629b9b */
  if (!C.zf) goto L_10629b9b;
  /* 10629b87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10629b8a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10629b8d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10629b90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629b93 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10629b96 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10629b99 jmp 0x10629ba7 */
  goto L_10629ba7;
L_10629b9b:;
  /* 10629b9b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10629ba2 jmp 0x10629930 */
  goto L_10629930;
L_10629ba7:;
  /* 10629ba7 jmp 0x10629bbc */
  goto L_10629bbc;
L_10629ba9:;
  /* 10629ba9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629bac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10629bae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10629bb1 jmp 0x10629bbc */
  goto L_10629bbc;
L_10629bb3:;
  /* 10629bb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629bb6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10629bb9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10629bbc:;
  /* 10629bbc jmp 0x1062a482 */
  goto L_1062a482;
L_10629bc1:;
  /* 10629bc1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629bc5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10629bcb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10629bd1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629bd4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10629bda cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629be1 ja 0x1062a2a7 */
  if ((!C.cf&&!C.zf)) goto L_1062a2a7;
  /* 10629be7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10629bed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10629bef mov cl, byte ptr [edx + 0x1062a55c] */
  CL = (r8((uint32_t)(EDX + 0x1062a55c)));
  /* 10629bf5 jmp dword ptr [ecx*4 + 0x1062a520] */
  switch (ECX) {
    case 0: goto L_10629bfc;
    case 1: goto L_10629e90;
    case 2: goto L_10629d20;
    case 3: goto L_10629fc9;
    case 4: goto L_10629c8b;
    case 5: goto L_10629c11;
    case 6: goto L_10629f9b;
    case 7: goto L_10629ea0;
    case 8: goto L_10629e45;
    case 9: goto L_1062a015;
    case 10: goto L_10629fbf;
    case 11: goto L_10629d36;
    case 12: goto L_10629fb3;
    case 13: goto L_10629fd5;
    case 14: goto L_1062a2a7;
    default: x86_unimpl("switch@0x10629bf5 out of table"); return;
  }
L_10629bfc:;
  /* 10629bfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629bff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10629c04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629c06 jne 0x10629c11 */
  if (!C.zf) goto L_10629c11;
  /* 10629c08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629c0b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10629c0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10629c11:;
  /* 10629c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629c14 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10629c1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10629c1c je 0x10629c57 */
  if (C.zf) goto L_10629c57;
  /* 10629c1e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10629c21 push eax */
  push32((uint32_t)(EAX));
  /* 10629c22 call 0x1062a6f0 */
  push32(0x10629c27u); f_1062a6f0();
  /* 10629c27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629c2a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10629c2e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10629c32 push ecx */
  push32((uint32_t)(ECX));
  /* 10629c33 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10629c39 push edx */
  push32((uint32_t)(EDX));
  /* 10629c3a call 0x1062b7d0 */
  push32(0x10629c3fu); f_1062b7d0();
  /* 10629c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629c42 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10629c45 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629c49 jge 0x10629c55 */
  if ((C.sf==C.of)) goto L_10629c55;
  /* 10629c4b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10629c55:;
  /* 10629c55 jmp 0x10629c7d */
  goto L_10629c7d;
L_10629c57:;
  /* 10629c57 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10629c5a push eax */
  push32((uint32_t)(EAX));
  /* 10629c5b call 0x1062a6b0 */
  push32(0x10629c60u); f_1062a6b0();
  /* 10629c60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629c63 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10629c6a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10629c70 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10629c76 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10629c7d:;
  /* 10629c7d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10629c83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10629c86 jmp 0x1062a2a7 */
  goto L_1062a2a7;
L_10629c8b:;
  /* 10629c8b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10629c8e push eax */
  push32((uint32_t)(EAX));
  /* 10629c8f call 0x1062a6b0 */
  push32(0x10629c94u); f_1062a6b0();
  /* 10629c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629c97 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10629c9d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629ca4 je 0x10629cb2 */
  if (C.zf) goto L_10629cb2;
  /* 10629ca6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10629cac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629cb0 jne 0x10629ccc */
  if (!C.zf) goto L_10629ccc;
L_10629cb2:;
  /* 10629cb2 mov edx, dword ptr [0x1064cfb0] */
  EDX = (r32((uint32_t)(0x1064cfb0)));
  /* 10629cb8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10629cbb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10629cbe push eax */
  push32((uint32_t)(EAX));
  /* 10629cbf call 0x10625710 */
  push32(0x10629cc4u); f_10625710();
  /* 10629cc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629cc7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10629cca jmp 0x10629d1b */
  goto L_10629d1b;
L_10629ccc:;
  /* 10629ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629ccf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10629cd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10629cd7 je 0x10629cfc */
  if (C.zf) goto L_10629cfc;
  /* 10629cd9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10629cdf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10629ce2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10629ce5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10629ceb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10629cee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10629cf0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10629cf3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10629cfa jmp 0x10629d1b */
  goto L_10629d1b;
L_10629cfc:;
  /* 10629cfc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10629d03 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10629d09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10629d0c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10629d0f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10629d15 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10629d18 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10629d1b:;
  /* 10629d1b jmp 0x1062a2a7 */
  goto L_1062a2a7;
L_10629d20:;
  /* 10629d20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629d23 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10629d29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10629d2b jne 0x10629d36 */
  if (!C.zf) goto L_10629d36;
  /* 10629d2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629d30 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10629d33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10629d36:;
  /* 10629d36 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629d3d jne 0x10629d4b */
  if (!C.zf) goto L_10629d4b;
  /* 10629d3f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10629d49 jmp 0x10629d57 */
  goto L_10629d57;
L_10629d4b:;
  /* 10629d4b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10629d51 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10629d57:;
  /* 10629d57 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10629d5d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10629d63 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10629d66 push edx */
  push32((uint32_t)(EDX));
  /* 10629d67 call 0x1062a6b0 */
  push32(0x10629d6cu); f_1062a6b0();
  /* 10629d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629d6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10629d72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629d75 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10629d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629d7c je 0x10629de6 */
  if (C.zf) goto L_10629de6;
  /* 10629d7e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629d82 jne 0x10629d8d */
  if (!C.zf) goto L_10629d8d;
  /* 10629d84 mov ecx, dword ptr [0x1064cfb4] */
  ECX = (r32((uint32_t)(0x1064cfb4)));
  /* 10629d8a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10629d8d:;
  /* 10629d8d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10629d94 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10629d97 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10629d9d:;
  /* 10629d9d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10629da3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10629da9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629dac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10629db2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629db4 je 0x10629dd6 */
  if (C.zf) goto L_10629dd6;
  /* 10629db6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10629dbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10629dbe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10629dc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629dc3 je 0x10629dd6 */
  if (C.zf) goto L_10629dd6;
  /* 10629dc5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10629dcb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10629dce mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10629dd4 jmp 0x10629d9d */
  goto L_10629d9d;
L_10629dd6:;
  /* 10629dd6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10629ddc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629ddf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10629de1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10629de4 jmp 0x10629e40 */
  goto L_10629e40;
L_10629de6:;
  /* 10629de6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629dea jne 0x10629df4 */
  if (!C.zf) goto L_10629df4;
  /* 10629dec mov eax, dword ptr [0x1064cfb0] */
  EAX = (r32((uint32_t)(0x1064cfb0)));
  /* 10629df1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10629df4:;
  /* 10629df4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10629df7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10629dfd:;
  /* 10629dfd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10629e03 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10629e09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629e0c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10629e12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10629e14 je 0x10629e34 */
  if (C.zf) goto L_10629e34;
  /* 10629e16 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10629e1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10629e1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10629e21 je 0x10629e34 */
  if (C.zf) goto L_10629e34;
  /* 10629e23 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10629e29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10629e2c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10629e32 jmp 0x10629dfd */
  goto L_10629dfd;
L_10629e34:;
  /* 10629e34 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10629e3a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629e3d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10629e40:;
  /* 10629e40 jmp 0x1062a2a7 */
  goto L_1062a2a7;
L_10629e45:;
  /* 10629e45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10629e48 push edx */
  push32((uint32_t)(EDX));
  /* 10629e49 call 0x1062a6b0 */
  push32(0x10629e4eu); f_1062a6b0();
  /* 10629e4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629e51 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10629e57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629e5a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10629e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629e5f je 0x10629e73 */
  if (C.zf) goto L_10629e73;
  /* 10629e61 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10629e67 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10629e6e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10629e71 jmp 0x10629e81 */
  goto L_10629e81;
L_10629e73:;
  /* 10629e73 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10629e79 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10629e7f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10629e81:;
  /* 10629e81 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10629e8b jmp 0x1062a2a7 */
  goto L_1062a2a7;
L_10629e90:;
  /* 10629e90 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10629e97 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10629e9a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10629e9d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10629ea0:;
  /* 10629ea0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629ea3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10629ea5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10629ea8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10629eae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10629eb1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629eb8 jge 0x10629ec6 */
  if ((C.sf==C.of)) goto L_10629ec6;
  /* 10629eba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10629ec4 jmp 0x10629ee2 */
  goto L_10629ee2;
L_10629ec6:;
  /* 10629ec6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629ecd jne 0x10629ee2 */
  if (!C.zf) goto L_10629ee2;
  /* 10629ecf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629ed3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629ed6 jne 0x10629ee2 */
  if (!C.zf) goto L_10629ee2;
  /* 10629ed8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10629ee2:;
  /* 10629ee2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10629ee5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10629ee8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10629eeb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10629eee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10629ef1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10629ef3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10629ef6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10629efc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10629f02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10629f05 push ecx */
  push32((uint32_t)(ECX));
  /* 10629f06 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10629f0c push edx */
  push32((uint32_t)(EDX));
  /* 10629f0d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629f11 push eax */
  push32((uint32_t)(EAX));
  /* 10629f12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10629f15 push ecx */
  push32((uint32_t)(ECX));
  /* 10629f16 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10629f1c push edx */
  push32((uint32_t)(EDX));
  /* 10629f1d call dword ptr [0x1064d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064d3a0))), 0x10629f23u);
  /* 10629f23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629f26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629f29 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10629f2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629f30 je 0x10629f48 */
  if (C.zf) goto L_10629f48;
  /* 10629f32 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629f39 jne 0x10629f48 */
  if (!C.zf) goto L_10629f48;
  /* 10629f3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10629f3e push ecx */
  push32((uint32_t)(ECX));
  /* 10629f3f call dword ptr [0x1064d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064d3ac))), 0x10629f45u);
  /* 10629f45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10629f48:;
  /* 10629f48 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10629f4c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629f4f jne 0x10629f6a */
  if (!C.zf) goto L_10629f6a;
  /* 10629f51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629f54 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10629f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10629f5b jne 0x10629f6a */
  if (!C.zf) goto L_10629f6a;
  /* 10629f5d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10629f60 push ecx */
  push32((uint32_t)(ECX));
  /* 10629f61 call dword ptr [0x1064d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064d3a4))), 0x10629f67u);
  /* 10629f67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10629f6a:;
  /* 10629f6a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10629f6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10629f70 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10629f73 jne 0x10629f87 */
  if (!C.zf) goto L_10629f87;
  /* 10629f75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629f78 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10629f7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10629f7e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10629f81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10629f84 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10629f87:;
  /* 10629f87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10629f8a push eax */
  push32((uint32_t)(EAX));
  /* 10629f8b call 0x10625710 */
  push32(0x10629f90u); f_10625710();
  /* 10629f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10629f93 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10629f96 jmp 0x1062a2a7 */
  goto L_1062a2a7;
L_10629f9b:;
  /* 10629f9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629f9e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10629fa1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10629fa4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10629fae jmp 0x1062a035 */
  goto L_1062a035;
L_10629fb3:;
  /* 10629fb3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10629fbd jmp 0x1062a035 */
  goto L_1062a035;
L_10629fbf:;
  /* 10629fbf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10629fc9:;
  /* 10629fc9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10629fd3 jmp 0x10629fdf */
  goto L_10629fdf;
L_10629fd5:;
  /* 10629fd5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10629fdf:;
  /* 10629fdf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10629fe9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10629fec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10629ff2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10629ff4 je 0x1062a013 */
  if (C.zf) goto L_1062a013;
  /* 10629ff6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10629ffd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1062a003 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a006 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1062a00c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1062a013:;
  /* 1062a013 jmp 0x1062a035 */
  goto L_1062a035;
L_1062a015:;
  /* 1062a015 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1062a01f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a022 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1062a028 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062a02a je 0x1062a035 */
  if (C.zf) goto L_1062a035;
  /* 1062a02c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a02f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1062a032 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1062a035:;
  /* 1062a035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a038 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1062a03d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062a03f je 0x1062a05e */
  if (C.zf) goto L_1062a05e;
  /* 1062a041 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1062a044 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a045 call 0x1062a6d0 */
  push32(0x1062a04au); f_1062a6d0();
  /* 1062a04a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a04d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1062a053 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1062a059 jmp 0x1062a0ef */
  goto L_1062a0ef;
L_1062a05e:;
  /* 1062a05e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a061 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1062a064 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062a066 je 0x1062a0b0 */
  if (C.zf) goto L_1062a0b0;
  /* 1062a068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a06b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1062a06e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062a070 je 0x1062a090 */
  if (C.zf) goto L_1062a090;
  /* 1062a072 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1062a075 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a076 call 0x1062a6b0 */
  push32(0x1062a07bu); f_1062a6b0();
  /* 1062a07b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a07e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1062a081 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1062a082 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1062a088 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1062a08e jmp 0x1062a0ae */
  goto L_1062a0ae;
L_1062a090:;
  /* 1062a090 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1062a093 push edx */
  push32((uint32_t)(EDX));
  /* 1062a094 call 0x1062a6b0 */
  push32(0x1062a099u); f_1062a6b0();
  /* 1062a099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a09c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062a0a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1062a0a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1062a0a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1062a0ae:;
  /* 1062a0ae jmp 0x1062a0ef */
  goto L_1062a0ef;
L_1062a0b0:;
  /* 1062a0b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a0b3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1062a0b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062a0b8 je 0x1062a0d5 */
  if (C.zf) goto L_1062a0d5;
  /* 1062a0ba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1062a0bd push ecx */
  push32((uint32_t)(ECX));
  /* 1062a0be call 0x1062a6b0 */
  push32(0x1062a0c3u); f_1062a6b0();
  /* 1062a0c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a0c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1062a0c7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1062a0cd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1062a0d3 jmp 0x1062a0ef */
  goto L_1062a0ef;
L_1062a0d5:;
  /* 1062a0d5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1062a0d8 push edx */
  push32((uint32_t)(EDX));
  /* 1062a0d9 call 0x1062a6b0 */
  push32(0x1062a0deu); f_1062a6b0();
  /* 1062a0de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a0e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062a0e3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1062a0e9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1062a0ef:;
  /* 1062a0ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a0f2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1062a0f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062a0f7 je 0x1062a137 */
  if (C.zf) goto L_1062a137;
  /* 1062a0f9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a100 jg 0x1062a137 */
  if ((!C.zf&&C.sf==C.of)) goto L_1062a137;
  /* 1062a102 jl 0x1062a10d */
  if ((C.sf!=C.of)) goto L_1062a10d;
  /* 1062a104 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a10b jae 0x1062a137 */
  if (!C.cf) goto L_1062a137;
L_1062a10d:;
  /* 1062a10d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1062a113 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062a115 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1062a11b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a11e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062a120 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1062a126 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1062a12c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a12f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1062a132 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1062a135 jmp 0x1062a14f */
  goto L_1062a14f;
L_1062a137:;
  /* 1062a137 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1062a13d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1062a143 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1062a149 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1062a14f:;
  /* 1062a14f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a152 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1062a158 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062a15a jne 0x1062a177 */
  if (!C.zf) goto L_1062a177;
  /* 1062a15c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1062a162 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1062a168 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1062a16b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1062a171 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1062a177:;
  /* 1062a177 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a17e jge 0x1062a18c */
  if ((C.sf==C.of)) goto L_1062a18c;
  /* 1062a180 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1062a18a jmp 0x1062a195 */
  goto L_1062a195;
L_1062a18c:;
  /* 1062a18c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a18f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1062a192 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1062a195:;
  /* 1062a195 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1062a19b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1062a1a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062a1a3 jne 0x1062a1ac */
  if (!C.zf) goto L_1062a1ac;
  /* 1062a1a5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1062a1ac:;
  /* 1062a1ac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1062a1af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1062a1b2:;
  /* 1062a1b2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1062a1b8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1062a1be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a1c1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1062a1c7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062a1c9 jg 0x1062a1df */
  if ((!C.zf&&C.sf==C.of)) goto L_1062a1df;
  /* 1062a1cb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1062a1d1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1062a1d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062a1d9 je 0x1062a260 */
  if (C.zf) goto L_1062a260;
L_1062a1df:;
  /* 1062a1df mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1062a1e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1062a1e6 push edx */
  push32((uint32_t)(EDX));
  /* 1062a1e7 push eax */
  push32((uint32_t)(EAX));
  /* 1062a1e8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1062a1ee push edx */
  push32((uint32_t)(EDX));
  /* 1062a1ef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1062a1f5 push eax */
  push32((uint32_t)(EAX));
  /* 1062a1f6 call 0x10629570 */
  push32(0x1062a1fbu); f_10629570();
  /* 1062a1fb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a1fe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1062a204 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1062a20a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1062a20b push edx */
  push32((uint32_t)(EDX));
  /* 1062a20c push eax */
  push32((uint32_t)(EAX));
  /* 1062a20d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1062a213 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a214 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1062a21a push edx */
  push32((uint32_t)(EDX));
  /* 1062a21b call 0x10629500 */
  push32(0x1062a220u); f_10629500();
  /* 1062a220 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1062a226 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1062a22c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a233 jle 0x1062a247 */
  if ((C.zf||C.sf!=C.of)) goto L_1062a247;
  /* 1062a235 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1062a23b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a241 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1062a247:;
  /* 1062a247 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062a24a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1062a250 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1062a252 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062a255 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a258 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1062a25b jmp 0x1062a1b2 */
  goto L_1062a1b2;
L_1062a260:;
  /* 1062a260 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1062a263 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a266 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1062a269 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062a26c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a26f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1062a272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a275 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1062a27a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062a27c je 0x1062a2a7 */
  if (C.zf) goto L_1062a2a7;
  /* 1062a27e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062a281 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062a284 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a287 jne 0x1062a28f */
  if (!C.zf) goto L_1062a28f;
  /* 1062a289 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a28d jne 0x1062a2a7 */
  if (!C.zf) goto L_1062a2a7;
L_1062a28f:;
  /* 1062a28f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062a292 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a295 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1062a298 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062a29b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1062a29e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062a2a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a2a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1062a2a7:;
  /* 1062a2a7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a2ae jne 0x1062a482 */
  if (!C.zf) goto L_1062a482;
  /* 1062a2b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a2b7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1062a2ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062a2bc je 0x1062a30d */
  if (C.zf) goto L_1062a30d;
  /* 1062a2be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a2c1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1062a2c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062a2c9 je 0x1062a2db */
  if (C.zf) goto L_1062a2db;
  /* 1062a2cb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1062a2d2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1062a2d9 jmp 0x1062a30d */
  goto L_1062a30d;
L_1062a2db:;
  /* 1062a2db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a2de and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1062a2e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062a2e3 je 0x1062a2f5 */
  if (C.zf) goto L_1062a2f5;
  /* 1062a2e5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1062a2ec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1062a2f3 jmp 0x1062a30d */
  goto L_1062a30d;
L_1062a2f5:;
  /* 1062a2f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a2f8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1062a2fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062a2fd je 0x1062a30d */
  if (C.zf) goto L_1062a30d;
  /* 1062a2ff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1062a306 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1062a30d:;
  /* 1062a30d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1062a313 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a316 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a319 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1062a31f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a322 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1062a325 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062a327 jne 0x1062a345 */
  if (!C.zf) goto L_1062a345;
  /* 1062a329 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1062a32f push eax */
  push32((uint32_t)(EAX));
  /* 1062a330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a333 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a334 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1062a33a push edx */
  push32((uint32_t)(EDX));
  /* 1062a33b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1062a33d call 0x1062a620 */
  push32(0x1062a342u); f_1062a620();
  /* 1062a342 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062a345:;
  /* 1062a345 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1062a34b push eax */
  push32((uint32_t)(EAX));
  /* 1062a34c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a34f push ecx */
  push32((uint32_t)(ECX));
  /* 1062a350 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062a353 push edx */
  push32((uint32_t)(EDX));
  /* 1062a354 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1062a35a push eax */
  push32((uint32_t)(EAX));
  /* 1062a35b call 0x1062a660 */
  push32(0x1062a360u); f_1062a660();
  /* 1062a360 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a363 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a366 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1062a369 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062a36b je 0x1062a393 */
  if (C.zf) goto L_1062a393;
  /* 1062a36d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a370 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1062a373 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062a375 jne 0x1062a393 */
  if (!C.zf) goto L_1062a393;
  /* 1062a377 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1062a37d push eax */
  push32((uint32_t)(EAX));
  /* 1062a37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a381 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a382 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1062a388 push edx */
  push32((uint32_t)(EDX));
  /* 1062a389 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1062a38b call 0x1062a620 */
  push32(0x1062a390u); f_1062a620();
  /* 1062a390 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062a393:;
  /* 1062a393 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a397 je 0x1062a441 */
  if (C.zf) goto L_1062a441;
  /* 1062a39d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a3a1 jle 0x1062a441 */
  if ((C.zf||C.sf!=C.of)) goto L_1062a441;
  /* 1062a3a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062a3aa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1062a3b0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062a3b3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1062a3b9:;
  /* 1062a3b9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1062a3bf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1062a3c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a3c8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1062a3ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062a3d0 je 0x1062a43f */
  if (C.zf) goto L_1062a43f;
  /* 1062a3d2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1062a3d8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1062a3db mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1062a3e2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1062a3e9 push eax */
  push32((uint32_t)(EAX));
  /* 1062a3ea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1062a3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a3f1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1062a3f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a3fa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1062a400 call 0x1062b7d0 */
  push32(0x1062a405u); f_1062b7d0();
  /* 1062a405 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a408 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1062a40e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a415 jg 0x1062a419 */
  if ((!C.zf&&C.sf==C.of)) goto L_1062a419;
  /* 1062a417 jmp 0x1062a43f */
  goto L_1062a43f;
L_1062a419:;
  /* 1062a419 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1062a41f push eax */
  push32((uint32_t)(EAX));
  /* 1062a420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a423 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a424 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1062a42a push edx */
  push32((uint32_t)(EDX));
  /* 1062a42b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1062a431 push eax */
  push32((uint32_t)(EAX));
  /* 1062a432 call 0x1062a660 */
  push32(0x1062a437u); f_1062a660();
  /* 1062a437 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a43a jmp 0x1062a3b9 */
  goto L_1062a3b9;
L_1062a43f:;
  /* 1062a43f jmp 0x1062a45c */
  goto L_1062a45c;
L_1062a441:;
  /* 1062a441 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1062a447 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a448 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a44b push edx */
  push32((uint32_t)(EDX));
  /* 1062a44c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062a44f push eax */
  push32((uint32_t)(EAX));
  /* 1062a450 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062a453 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a454 call 0x1062a660 */
  push32(0x1062a459u); f_1062a660();
  /* 1062a459 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062a45c:;
  /* 1062a45c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a45f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1062a462 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062a464 je 0x1062a482 */
  if (C.zf) goto L_1062a482;
  /* 1062a466 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1062a46c push eax */
  push32((uint32_t)(EAX));
  /* 1062a46d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a470 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a471 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1062a477 push edx */
  push32((uint32_t)(EDX));
  /* 1062a478 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1062a47a call 0x1062a620 */
  push32(0x1062a47fu); f_1062a620();
  /* 1062a47f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062a482:;
  /* 1062a482 jmp 0x10629894 */
  goto L_10629894;
L_1062a487:;
  /* 1062a487 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1062a48d pop edi */
  EDI = (pop32());
  /* 1062a48e pop esi */
  ESI = (pop32());
  /* 1062a48f pop ebx */
  EBX = (pop32());
  /* 1062a490 mov esp, ebp */
  ESP = (EBP);
  /* 1062a492 pop ebp */
  EBP = (pop32());
  /* 1062a493 ret  */
  ESPCHK(0x10629870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5a0 @ 0x1062a5a0 (119 bytes, 44 insns) */
void f_1062a5a0(void) {
  FTRACE(0x1062a5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062a5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062a5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1062a5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a5a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a5a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1062a5aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a5ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a5b0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1062a5b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a5b6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a5ba jl 0x1062a5e2 */
  if ((C.sf!=C.of)) goto L_1062a5e2;
  /* 1062a5bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a5bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062a5c1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1062a5c4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1062a5c6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1062a5ca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1062a5d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1062a5d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a5d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1062a5d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a5db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a5de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1062a5e0 jmp 0x1062a5f5 */
  goto L_1062a5f5;
L_1062a5e2:;
  /* 1062a5e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a5e5 push edx */
  push32((uint32_t)(EDX));
  /* 1062a5e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a5e9 push eax */
  push32((uint32_t)(EAX));
  /* 1062a5ea call 0x106295f0 */
  push32(0x1062a5efu); f_106295f0();
  /* 1062a5ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a5f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062a5f5:;
  /* 1062a5f5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a5f9 jne 0x1062a606 */
  if (!C.zf) goto L_1062a606;
  /* 1062a5fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062a5fe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1062a604 jmp 0x1062a613 */
  goto L_1062a613;
L_1062a606:;
  /* 1062a606 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062a609 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1062a60b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a60e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062a611 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1062a613:;
  /* 1062a613 mov esp, ebp */
  ESP = (EBP);
  /* 1062a615 pop ebp */
  EBP = (pop32());
  /* 1062a616 ret  */
  ESPCHK(0x1062a5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a620 @ 0x1062a620 (53 bytes, 23 insns) */
void f_1062a620(void) {
  FTRACE(0x1062a620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062a620 push ebp */
  push32((uint32_t)(EBP));
  /* 1062a621 mov ebp, esp */
  EBP = (ESP);
L_1062a623:;
  /* 1062a623 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a626 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a629 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a62c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1062a62f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062a631 jle 0x1062a653 */
  if ((C.zf||C.sf!=C.of)) goto L_1062a653;
  /* 1062a633 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062a636 push edx */
  push32((uint32_t)(EDX));
  /* 1062a637 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062a63a push eax */
  push32((uint32_t)(EAX));
  /* 1062a63b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a63e push ecx */
  push32((uint32_t)(ECX));
  /* 1062a63f call 0x1062a5a0 */
  push32(0x1062a644u); f_1062a5a0();
  /* 1062a644 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a647 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062a64a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a64d jne 0x1062a651 */
  if (!C.zf) goto L_1062a651;
  /* 1062a64f jmp 0x1062a653 */
  goto L_1062a653;
L_1062a651:;
  /* 1062a651 jmp 0x1062a623 */
  goto L_1062a623;
L_1062a653:;
  /* 1062a653 pop ebp */
  EBP = (pop32());
  /* 1062a654 ret  */
  ESPCHK(0x1062a620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a660 @ 0x1062a660 (74 bytes, 31 insns) */
void f_1062a660(void) {
  FTRACE(0x1062a660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062a660 push ebp */
  push32((uint32_t)(EBP));
  /* 1062a661 mov ebp, esp */
  EBP = (ESP);
  /* 1062a663 push ecx */
  push32((uint32_t)(ECX));
L_1062a664:;
  /* 1062a664 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a667 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a66a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a66d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1062a670 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062a672 jle 0x1062a6a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1062a6a6;
  /* 1062a674 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062a677 push edx */
  push32((uint32_t)(EDX));
  /* 1062a678 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062a67b push eax */
  push32((uint32_t)(EAX));
  /* 1062a67c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a67f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062a682 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1062a685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a688 push eax */
  push32((uint32_t)(EAX));
  /* 1062a689 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a68c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a68f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1062a692 call 0x1062a5a0 */
  push32(0x1062a697u); f_1062a5a0();
  /* 1062a697 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a69a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062a69d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a6a0 jne 0x1062a6a4 */
  if (!C.zf) goto L_1062a6a4;
  /* 1062a6a2 jmp 0x1062a6a6 */
  goto L_1062a6a6;
L_1062a6a4:;
  /* 1062a6a4 jmp 0x1062a664 */
  goto L_1062a664;
L_1062a6a6:;
  /* 1062a6a6 mov esp, ebp */
  ESP = (EBP);
  /* 1062a6a8 pop ebp */
  EBP = (pop32());
  /* 1062a6a9 ret  */
  ESPCHK(0x1062a660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x1062a6b0 (26 bytes, 12 insns) */
void f_1062a6b0(void) {
  FTRACE(0x1062a6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062a6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062a6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1062a6b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a6b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1062a6b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a6bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a6be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1062a6c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a6c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1062a6c5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1062a6c8 pop ebp */
  EBP = (pop32());
  /* 1062a6c9 ret  */
  ESPCHK(0x1062a6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6d0 @ 0x1062a6d0 (31 bytes, 14 insns) */
void f_1062a6d0(void) {
  FTRACE(0x1062a6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062a6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062a6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1062a6d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a6d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1062a6d8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a6db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a6de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1062a6e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a6e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1062a6e5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a6e8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1062a6ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1062a6ed pop ebp */
  EBP = (pop32());
  /* 1062a6ee ret  */
  ESPCHK(0x1062a6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6f0 @ 0x1062a6f0 (27 bytes, 12 insns) */
void f_1062a6f0(void) {
  FTRACE(0x1062a6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062a6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062a6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1062a6f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a6f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1062a6f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a6fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a6fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1062a700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a703 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1062a705 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1062a709 pop ebp */
  EBP = (pop32());
  /* 1062a70a ret  */
  ESPCHK(0x1062a6f0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1062a710 (145 bytes, 42 insns) */
void f_1062a710(void) {
  FTRACE(0x1062a710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062a710 push ebp */
  push32((uint32_t)(EBP));
  /* 1062a711 mov ebp, esp */
  EBP = (ESP);
  /* 1062a713 push ecx */
  push32((uint32_t)(ECX));
  /* 1062a714 call 0x1062a7c0 */
  push32(0x1062a719u); f_1062a7c0();
  /* 1062a719 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a71c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1062a71e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062a725 jmp 0x1062a730 */
  goto L_1062a730;
L_1062a727:;
  /* 1062a727 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a72a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a72d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1062a730:;
  /* 1062a730 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a734 jae 0x1062a75a */
  if (!C.cf) goto L_1062a75a;
  /* 1062a736 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a739 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a73c cmp ecx, dword ptr [eax*8 + 0x1064cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1064cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a743 jne 0x1062a758 */
  if (!C.zf) goto L_1062a758;
  /* 1062a745 call 0x1062a7b0 */
  push32(0x1062a74au); f_1062a7b0();
  /* 1062a74a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062a74d mov ecx, dword ptr [edx*8 + 0x1064cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1064cfbc)));
  /* 1062a754 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1062a756 jmp 0x1062a79d */
  goto L_1062a79d;
L_1062a758:;
  /* 1062a758 jmp 0x1062a727 */
  goto L_1062a727;
L_1062a75a:;
  /* 1062a75a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a75e jb 0x1062a773 */
  if (C.cf) goto L_1062a773;
  /* 1062a760 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a764 ja 0x1062a773 */
  if ((!C.cf&&!C.zf)) goto L_1062a773;
  /* 1062a766 call 0x1062a7b0 */
  push32(0x1062a76bu); f_1062a7b0();
  /* 1062a76b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1062a771 jmp 0x1062a79d */
  goto L_1062a79d;
L_1062a773:;
  /* 1062a773 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a77a jb 0x1062a792 */
  if (C.cf) goto L_1062a792;
  /* 1062a77c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a783 ja 0x1062a792 */
  if ((!C.cf&&!C.zf)) goto L_1062a792;
  /* 1062a785 call 0x1062a7b0 */
  push32(0x1062a78au); f_1062a7b0();
  /* 1062a78a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1062a790 jmp 0x1062a79d */
  goto L_1062a79d;
L_1062a792:;
  /* 1062a792 call 0x1062a7b0 */
  push32(0x1062a797u); f_1062a7b0();
  /* 1062a797 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1062a79d:;
  /* 1062a79d mov esp, ebp */
  ESP = (EBP);
  /* 1062a79f pop ebp */
  EBP = (pop32());
  /* 1062a7a0 ret  */
  ESPCHK(0x1062a710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7b0 @ 0x1062a7b0 (13 bytes, 6 insns) */
void f_1062a7b0(void) {
  FTRACE(0x1062a7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062a7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062a7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1062a7b3 call 0x10622320 */
  push32(0x1062a7b8u); f_10622320();
  /* 1062a7b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a7bb pop ebp */
  EBP = (pop32());
  /* 1062a7bc ret  */
  ESPCHK(0x1062a7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c0 @ 0x1062a7c0 (13 bytes, 6 insns) */
void f_1062a7c0(void) {
  FTRACE(0x1062a7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062a7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062a7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1062a7c3 call 0x10622320 */
  push32(0x1062a7c8u); f_10622320();
  /* 1062a7c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a7cb pop ebp */
  EBP = (pop32());
  /* 1062a7cc ret  */
  ESPCHK(0x1062a7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7d0 @ 0x1062a7d0 (664 bytes, 265 insns) [15 switch table(s)] */
void f_1062a7d0(void) {
  FTRACE(0x1062a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062a7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062a7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1062a7d3 push edi */
  push32((uint32_t)(EDI));
  /* 1062a7d4 push esi */
  push32((uint32_t)(ESI));
  /* 1062a7d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1062a7d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062a7db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a7de mov eax, ecx */
  EAX = (ECX);
  /* 1062a7e0 mov edx, ecx */
  EDX = (ECX);
  /* 1062a7e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a7e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a7e6 jbe 0x1062a7f0 */
  if ((C.cf||C.zf)) goto L_1062a7f0;
  /* 1062a7e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a7ea jb 0x1062a968 */
  if (C.cf) goto L_1062a968;
L_1062a7f0:;
  /* 1062a7f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1062a7f6 jne 0x1062a80c */
  if (!C.zf) goto L_1062a80c;
  /* 1062a7f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062a7fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1062a7fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a801 jb 0x1062a82c */
  if (C.cf) goto L_1062a82c;
  /* 1062a803 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1062a805 jmp dword ptr [edx*4 + 0x1062a918] */
  switch (EDX) {
    case 0: goto L_1062a928;
    case 1: goto L_1062a930;
    case 2: goto L_1062a93c;
    case 3: goto L_1062a950;
    default: x86_unimpl("switch@0x1062a805 out of table"); return;
  }
L_1062a80c:;
  /* 1062a80c mov eax, edi */
  EAX = (EDI);
  /* 1062a80e mov edx, 3 */
  EDX = (0x3u);
  /* 1062a813 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a816 jb 0x1062a824 */
  if (C.cf) goto L_1062a824;
  /* 1062a818 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1062a81b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a81d jmp dword ptr [eax*4 + 0x1062a830] */
  switch (EAX) {
    case 1: goto L_1062a840;
    case 2: goto L_1062a86c;
    case 3: goto L_1062a890;
    default: x86_unimpl("switch@0x1062a81d out of table"); return;
  }
L_1062a824:;
  /* 1062a824 jmp dword ptr [ecx*4 + 0x1062a928] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1062a928)))); return;
  /* 1062a82b nop  */
  /* nop */
L_1062a82c:;
  /* 1062a82c jmp dword ptr [ecx*4 + 0x1062a8ac] */
  switch (ECX) {
    case 0: goto L_1062a90f;
    case 1: goto L_1062a8fc;
    case 2: goto L_1062a8f4;
    case 3: goto L_1062a8ec;
    case 4: goto L_1062a8e4;
    case 5: goto L_1062a8dc;
    case 6: goto L_1062a8d4;
    case 7: goto L_1062a8cc;
    default: x86_unimpl("switch@0x1062a82c out of table"); return;
  }
  /* 1062a833 nop  */
  /* nop */
L_1062a840:;
  /* 1062a840 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1062a842 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1062a844 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1062a846 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1062a849 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1062a84c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1062a84f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062a852 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1062a855 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a858 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a85b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a85e jb 0x1062a82c */
  if (C.cf) goto L_1062a82c;
  /* 1062a860 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1062a862 jmp dword ptr [edx*4 + 0x1062a918] */
  switch (EDX) {
    case 0: goto L_1062a928;
    case 1: goto L_1062a930;
    case 2: goto L_1062a93c;
    case 3: goto L_1062a950;
    default: x86_unimpl("switch@0x1062a862 out of table"); return;
  }
  /* 1062a869 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1062a86c:;
  /* 1062a86c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1062a86e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1062a870 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1062a872 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1062a875 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062a878 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1062a87b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a87e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a881 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a884 jb 0x1062a82c */
  if (C.cf) goto L_1062a82c;
  /* 1062a886 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1062a888 jmp dword ptr [edx*4 + 0x1062a918] */
  switch (EDX) {
    case 0: goto L_1062a928;
    case 1: goto L_1062a930;
    case 2: goto L_1062a93c;
    case 3: goto L_1062a950;
    default: x86_unimpl("switch@0x1062a888 out of table"); return;
  }
  /* 1062a88f nop  */
  /* nop */
L_1062a890:;
  /* 1062a890 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1062a892 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1062a894 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1062a896 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1062a897 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062a89a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1062a89b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a89e jb 0x1062a82c */
  if (C.cf) goto L_1062a82c;
  /* 1062a8a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1062a8a2 jmp dword ptr [edx*4 + 0x1062a918] */
  switch (EDX) {
    case 0: goto L_1062a928;
    case 1: goto L_1062a930;
    case 2: goto L_1062a93c;
    case 3: goto L_1062a950;
    default: x86_unimpl("switch@0x1062a8a2 out of table"); return;
  }
  /* 1062a8a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1062a8cc:;
  /* 1062a8cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1062a8d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1062a8d4:;
  /* 1062a8d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1062a8d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1062a8dc:;
  /* 1062a8dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1062a8e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1062a8e4:;
  /* 1062a8e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1062a8e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1062a8ec:;
  /* 1062a8ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1062a8f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1062a8f4:;
  /* 1062a8f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1062a8f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1062a8fc:;
  /* 1062a8fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1062a900 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1062a904 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1062a90b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1062a90d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1062a90f:;
  /* 1062a90f jmp dword ptr [edx*4 + 0x1062a918] */
  switch (EDX) {
    case 0: goto L_1062a928;
    case 1: goto L_1062a930;
    case 2: goto L_1062a93c;
    case 3: goto L_1062a950;
    default: x86_unimpl("switch@0x1062a90f out of table"); return;
  }
  /* 1062a916 mov edi, edi */
  EDI = (EDI);
L_1062a928:;
  /* 1062a928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a92b pop esi */
  ESI = (pop32());
  /* 1062a92c pop edi */
  EDI = (pop32());
  /* 1062a92d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062a92e ret  */
  ESPCHK(0x1062a7d0u, _esp0);
  ESP += 4; return;
  /* 1062a92f nop  */
  /* nop */
L_1062a930:;
  /* 1062a930 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1062a932 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1062a934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a937 pop esi */
  ESI = (pop32());
  /* 1062a938 pop edi */
  EDI = (pop32());
  /* 1062a939 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062a93a ret  */
  ESPCHK(0x1062a7d0u, _esp0);
  ESP += 4; return;
  /* 1062a93b nop  */
  /* nop */
L_1062a93c:;
  /* 1062a93c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1062a93e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1062a940 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1062a943 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1062a946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a949 pop esi */
  ESI = (pop32());
  /* 1062a94a pop edi */
  EDI = (pop32());
  /* 1062a94b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062a94c ret  */
  ESPCHK(0x1062a7d0u, _esp0);
  ESP += 4; return;
  /* 1062a94d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1062a950:;
  /* 1062a950 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1062a952 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1062a954 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1062a957 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1062a95a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1062a95d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1062a960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062a963 pop esi */
  ESI = (pop32());
  /* 1062a964 pop edi */
  EDI = (pop32());
  /* 1062a965 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062a966 ret  */
  ESPCHK(0x1062a7d0u, _esp0);
  ESP += 4; return;
  /* 1062a967 nop  */
  /* nop */
L_1062a968:;
  /* 1062a968 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1062a96c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1062a970 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1062a976 jne 0x1062a99c */
  if (!C.zf) goto L_1062a99c;
  /* 1062a978 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062a97b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1062a97e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a981 jb 0x1062a990 */
  if (C.cf) goto L_1062a990;
  /* 1062a983 std  */
  C.df=1;
  /* 1062a984 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1062a986 cld  */
  C.df=0;
  /* 1062a987 jmp dword ptr [edx*4 + 0x1062aab0] */
  switch (EDX) {
    case 0: goto L_1062aac0;
    case 1: goto L_1062aac8;
    case 2: goto L_1062aad8;
    case 3: goto L_1062aaec;
    default: x86_unimpl("switch@0x1062a987 out of table"); return;
  }
  /* 1062a98e mov edi, edi */
  EDI = (EDI);
L_1062a990:;
  /* 1062a990 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062a992 jmp dword ptr [ecx*4 + 0x1062aa60] */
  switch (ECX) {
    case 0: goto L_1062aaa7;
    default: x86_unimpl("switch@0x1062a992 out of table"); return;
  }
  /* 1062a999 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1062a99c:;
  /* 1062a99c mov eax, edi */
  EAX = (EDI);
  /* 1062a99e mov edx, 3 */
  EDX = (0x3u);
  /* 1062a9a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a9a6 jb 0x1062a9b4 */
  if (C.cf) goto L_1062a9b4;
  /* 1062a9a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1062a9ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a9ad jmp dword ptr [eax*4 + 0x1062a9b8] */
  switch (EAX) {
    case 1: goto L_1062a9c8;
    case 2: goto L_1062a9e8;
    case 3: goto L_1062aa10;
    default: x86_unimpl("switch@0x1062a9ad out of table"); return;
  }
L_1062a9b4:;
  /* 1062a9b4 jmp dword ptr [ecx*4 + 0x1062aab0] */
  switch (ECX) {
    case 0: goto L_1062aac0;
    case 1: goto L_1062aac8;
    case 2: goto L_1062aad8;
    case 3: goto L_1062aaec;
    default: x86_unimpl("switch@0x1062a9b4 out of table"); return;
  }
  /* 1062a9bb nop  */
  /* nop */
L_1062a9c8:;
  /* 1062a9c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1062a9cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1062a9cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1062a9d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1062a9d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062a9d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1062a9d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062a9d8 jb 0x1062a990 */
  if (C.cf) goto L_1062a990;
  /* 1062a9da std  */
  C.df=1;
  /* 1062a9db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1062a9dd cld  */
  C.df=0;
  /* 1062a9de jmp dword ptr [edx*4 + 0x1062aab0] */
  switch (EDX) {
    case 0: goto L_1062aac0;
    case 1: goto L_1062aac8;
    case 2: goto L_1062aad8;
    case 3: goto L_1062aaec;
    default: x86_unimpl("switch@0x1062a9de out of table"); return;
  }
  /* 1062a9e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1062a9e8:;
  /* 1062a9e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1062a9eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1062a9ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1062a9f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1062a9f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062a9f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1062a9f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_1062a9fc:;
  /* 1062a9fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062a9ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062aa02 jb 0x1062a990 */
  if (C.cf) goto L_1062a990;
  /* 1062aa04 std  */
  C.df=1;
  /* 1062aa05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1062aa07 cld  */
  C.df=0;
  /* 1062aa08 jmp dword ptr [edx*4 + 0x1062aab0] */
  switch (EDX) {
    case 0: goto L_1062aac0;
    case 1: goto L_1062aac8;
    case 2: goto L_1062aad8;
    case 3: goto L_1062aaec;
    default: x86_unimpl("switch@0x1062aa08 out of table"); return;
  }
  /* 1062aa0f nop  */
  /* nop */
L_1062aa10:;
  /* 1062aa10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1062aa13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1062aa15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1062aa18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1062aa1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1062aa1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1062aa21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062aa24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1062aa27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062aa2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062aa2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062aa30 jb 0x1062a990 */
  if (C.cf) goto L_1062a990;
  /* 1062aa36 std  */
  C.df=1;
  /* 1062aa37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1062aa39 cld  */
  C.df=0;
  /* 1062aa3a jmp dword ptr [edx*4 + 0x1062aab0] */
  switch (EDX) {
    case 0: goto L_1062aac0;
    case 1: goto L_1062aac8;
    case 2: goto L_1062aad8;
    case 3: goto L_1062aaec;
    default: x86_unimpl("switch@0x1062aa3a out of table"); return;
  }
  /* 1062aa41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1062aa44 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1062aa46 bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x1062aa46");
  /* 1062aa48 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x1062aa48");
  /* 1062aa49 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1062aa4a bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x1062aa4a");
  /* 1062aa4c je 0x1062a9f8 */
  if (C.zf) goto L_1062a9f8;
  /* 1062aa4e bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x1062aa4e");
  /* 1062aa50 jl 0x1062a9fc */
  if ((C.sf!=C.of)) goto L_1062a9fc;
  /* 1062aa52 bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x1062aa52");
  /* 1062aa54 test byte ptr [edx - 0x5573ef9e], ch */
  { uint32_t _r=(r8((uint32_t)(EDX + -0x5573ef9e)))&(C.c.b.h); fl_logic(_r,8); }
  /* 1062aa5a bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x1062aa5a");
  /* 1062aa5c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1062aa5d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1062aa5e bound edx, qword ptr [eax] */
  x86_unimpl("bound @ 0x1062aa5e");
  /* 1062aa64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1062aa68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1062aa6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1062aa70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1062aa74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1062aa78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1062aa7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1062aa80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1062aa84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1062aa88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1062aa8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1062aa90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1062aa94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1062aa98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1062aa9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1062aaa3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1062aaa5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1062aaa7:;
  /* 1062aaa7 jmp dword ptr [edx*4 + 0x1062aab0] */
  switch (EDX) {
    case 0: goto L_1062aac0;
    case 1: goto L_1062aac8;
    case 2: goto L_1062aad8;
    case 3: goto L_1062aaec;
    default: x86_unimpl("switch@0x1062aaa7 out of table"); return;
  }
  /* 1062aaae mov edi, edi */
  EDI = (EDI);
L_1062aac0:;
  /* 1062aac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062aac3 pop esi */
  ESI = (pop32());
  /* 1062aac4 pop edi */
  EDI = (pop32());
  /* 1062aac5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062aac6 ret  */
  ESPCHK(0x1062a7d0u, _esp0);
  ESP += 4; return;
  /* 1062aac7 nop  */
  /* nop */
L_1062aac8:;
  /* 1062aac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1062aacb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1062aace mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062aad1 pop esi */
  ESI = (pop32());
  /* 1062aad2 pop edi */
  EDI = (pop32());
  /* 1062aad3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062aad4 ret  */
  ESPCHK(0x1062a7d0u, _esp0);
  ESP += 4; return;
  /* 1062aad5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1062aad8:;
  /* 1062aad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1062aadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1062aade mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1062aae1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1062aae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062aae7 pop esi */
  ESI = (pop32());
  /* 1062aae8 pop edi */
  EDI = (pop32());
  /* 1062aae9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062aaea ret  */
  ESPCHK(0x1062a7d0u, _esp0);
  ESP += 4; return;
  /* 1062aaeb nop  */
  /* nop */
L_1062aaec:;
  /* 1062aaec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1062aaef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1062aaf2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1062aaf5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1062aaf8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1062aafb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1062aafe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ab01 pop esi */
  ESI = (pop32());
  /* 1062ab02 pop edi */
  EDI = (pop32());
  /* 1062ab03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062ab04 ret  */
  ESPCHK(0x1062a7d0u, _esp0);
  ESP += 4; return;
L_1062a9f8: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1062a9f8 (unresolved jump table)"); return;
}

/* FUN_1000ab10 @ 0x1062ab10 (421 bytes, 148 insns) */
void f_1062ab10(void) {
  FTRACE(0x1062ab10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062ab10 push ebp */
  push32((uint32_t)(EBP));
  /* 1062ab11 mov ebp, esp */
  EBP = (ESP);
  /* 1062ab13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1062ab15 push 0x10649f40 */
  push32((uint32_t)(0x10649f40u));
  /* 1062ab1a push 0x1062b9e8 */
  push32((uint32_t)(0x1062b9e8u));
  /* 1062ab1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1062ab25 push eax */
  push32((uint32_t)(EAX));
  /* 1062ab26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1062ab2d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ab30 push ebx */
  push32((uint32_t)(EBX));
  /* 1062ab31 push esi */
  push32((uint32_t)(ESI));
  /* 1062ab32 push edi */
  push32((uint32_t)(EDI));
  /* 1062ab33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1062ab36 cmp dword ptr [0x1064e604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ab3d jne 0x1062ab8e */
  if (!C.zf) goto L_1062ab8e;
  /* 1062ab3f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1062ab42 push eax */
  push32((uint32_t)(EAX));
  /* 1062ab43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ab45 push 0x10649f3c */
  push32((uint32_t)(0x10649f3cu));
  /* 1062ab4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ab4c call dword ptr [0x1065032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065032c))), 0x1062ab52u);
  /* 1062ab52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ab54 je 0x1062ab62 */
  if (C.zf) goto L_1062ab62;
  /* 1062ab56 mov dword ptr [0x1064e604], 1 */
  w32((uint32_t)(0x1064e604), (0x1u));
  /* 1062ab60 jmp 0x1062ab8e */
  goto L_1062ab8e;
L_1062ab62:;
  /* 1062ab62 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1062ab65 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ab66 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ab68 push 0x10649f38 */
  push32((uint32_t)(0x10649f38u));
  /* 1062ab6d push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ab6f push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ab71 call dword ptr [0x10650328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650328))), 0x1062ab77u);
  /* 1062ab77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ab79 je 0x1062ab87 */
  if (C.zf) goto L_1062ab87;
  /* 1062ab7b mov dword ptr [0x1064e604], 2 */
  w32((uint32_t)(0x1064e604), (0x2u));
  /* 1062ab85 jmp 0x1062ab8e */
  goto L_1062ab8e;
L_1062ab87:;
  /* 1062ab87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ab89 jmp 0x1062acb8 */
  goto L_1062acb8;
L_1062ab8e:;
  /* 1062ab8e cmp dword ptr [0x1064e604], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1064e604))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ab95 jne 0x1062abc5 */
  if (!C.zf) goto L_1062abc5;
  /* 1062ab97 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ab9b jne 0x1062aba6 */
  if (!C.zf) goto L_1062aba6;
  /* 1062ab9d mov edx, dword ptr [0x1064e610] */
  EDX = (r32((uint32_t)(0x1064e610)));
  /* 1062aba3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1062aba6:;
  /* 1062aba6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062aba9 push eax */
  push32((uint32_t)(EAX));
  /* 1062abaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062abad push ecx */
  push32((uint32_t)(ECX));
  /* 1062abae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062abb1 push edx */
  push32((uint32_t)(EDX));
  /* 1062abb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062abb5 push eax */
  push32((uint32_t)(EAX));
  /* 1062abb6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1062abb9 push ecx */
  push32((uint32_t)(ECX));
  /* 1062abba call dword ptr [0x10650328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650328))), 0x1062abc0u);
  /* 1062abc0 jmp 0x1062acb8 */
  goto L_1062acb8;
L_1062abc5:;
  /* 1062abc5 cmp dword ptr [0x1064e604], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e604))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062abcc jne 0x1062acb6 */
  if (!C.zf) goto L_1062acb6;
  /* 1062abd2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062abd6 jne 0x1062abe1 */
  if (!C.zf) goto L_1062abe1;
  /* 1062abd8 mov edx, dword ptr [0x1064e620] */
  EDX = (r32((uint32_t)(0x1064e620)));
  /* 1062abde mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1062abe1:;
  /* 1062abe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062abe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062abe5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062abe8 push eax */
  push32((uint32_t)(EAX));
  /* 1062abe9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062abec push ecx */
  push32((uint32_t)(ECX));
  /* 1062abed mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1062abf0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062abf2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062abf4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1062abf7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062abfa push edx */
  push32((uint32_t)(EDX));
  /* 1062abfb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062abfe push eax */
  push32((uint32_t)(EAX));
  /* 1062abff call dword ptr [0x10650324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650324))), 0x1062ac05u);
  /* 1062ac05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1062ac08 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ac0c jne 0x1062ac15 */
  if (!C.zf) goto L_1062ac15;
  /* 1062ac0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ac10 jmp 0x1062acb8 */
  goto L_1062acb8;
L_1062ac15:;
  /* 1062ac15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062ac1c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062ac1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1062ac21 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ac24 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1062ac26 call 0x10625a80 */
  push32(0x1062ac2bu); f_10625a80();
  /* 1062ac2b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1062ac2e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1062ac31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1062ac34 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1062ac37 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062ac3a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1062ac3c push edx */
  push32((uint32_t)(EDX));
  /* 1062ac3d push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ac3f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062ac42 push eax */
  push32((uint32_t)(EAX));
  /* 1062ac43 call 0x10626650 */
  push32(0x1062ac48u); f_10626650();
  /* 1062ac48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ac4b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1062ac52 jmp 0x1062ac6b */
  goto L_1062ac6b;
  /* 1062ac54 mov eax, 1 */
  EAX = (0x1u);
  /* 1062ac59 ret  */
  ESPCHK(0x1062ab10u, _esp0);
  ESP += 4; return;
  /* 1062ac5a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1062ac5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1062ac64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1062ac6b:;
  /* 1062ac6b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ac6f jne 0x1062ac75 */
  if (!C.zf) goto L_1062ac75;
  /* 1062ac71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ac73 jmp 0x1062acb8 */
  goto L_1062acb8;
L_1062ac75:;
  /* 1062ac75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062ac78 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ac79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062ac7c push edx */
  push32((uint32_t)(EDX));
  /* 1062ac7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ac80 push eax */
  push32((uint32_t)(EAX));
  /* 1062ac81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ac84 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ac85 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ac87 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062ac8a push edx */
  push32((uint32_t)(EDX));
  /* 1062ac8b call dword ptr [0x10650324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650324))), 0x1062ac91u);
  /* 1062ac91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1062ac94 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ac98 jne 0x1062ac9e */
  if (!C.zf) goto L_1062ac9e;
  /* 1062ac9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ac9c jmp 0x1062acb8 */
  goto L_1062acb8;
L_1062ac9e:;
  /* 1062ac9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062aca1 push eax */
  push32((uint32_t)(EAX));
  /* 1062aca2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062aca5 push ecx */
  push32((uint32_t)(ECX));
  /* 1062aca6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062aca9 push edx */
  push32((uint32_t)(EDX));
  /* 1062acaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062acad push eax */
  push32((uint32_t)(EAX));
  /* 1062acae call dword ptr [0x1065032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065032c))), 0x1062acb4u);
  /* 1062acb4 jmp 0x1062acb8 */
  goto L_1062acb8;
L_1062acb6:;
  /* 1062acb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062acb8:;
  /* 1062acb8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1062acbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062acbe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1062acc5 pop edi */
  EDI = (pop32());
  /* 1062acc6 pop esi */
  ESI = (pop32());
  /* 1062acc7 pop ebx */
  EBX = (pop32());
  /* 1062acc8 mov esp, ebp */
  ESP = (EBP);
  /* 1062acca pop ebp */
  EBP = (pop32());
  /* 1062accb ret  */
  ESPCHK(0x1062ab10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acd0 @ 0x1062acd0 (727 bytes, 263 insns) */
void f_1062acd0(void) {
  FTRACE(0x1062acd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062acd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062acd1 mov ebp, esp */
  EBP = (ESP);
  /* 1062acd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1062acd5 push 0x10649f50 */
  push32((uint32_t)(0x10649f50u));
  /* 1062acda push 0x1062b9e8 */
  push32((uint32_t)(0x1062b9e8u));
  /* 1062acdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1062ace5 push eax */
  push32((uint32_t)(EAX));
  /* 1062ace6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1062aced add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062acf0 push ebx */
  push32((uint32_t)(EBX));
  /* 1062acf1 push esi */
  push32((uint32_t)(ESI));
  /* 1062acf2 push edi */
  push32((uint32_t)(EDI));
  /* 1062acf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1062acf6 cmp dword ptr [0x1064e628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062acfd jne 0x1062ad56 */
  if (!C.zf) goto L_1062ad56;
  /* 1062acff push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ad01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ad03 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ad05 push 0x10649f3c */
  push32((uint32_t)(0x10649f3cu));
  /* 1062ad0a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1062ad0f push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ad11 call dword ptr [0x10650334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650334))), 0x1062ad17u);
  /* 1062ad17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ad19 je 0x1062ad27 */
  if (C.zf) goto L_1062ad27;
  /* 1062ad1b mov dword ptr [0x1064e628], 1 */
  w32((uint32_t)(0x1064e628), (0x1u));
  /* 1062ad25 jmp 0x1062ad56 */
  goto L_1062ad56;
L_1062ad27:;
  /* 1062ad27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ad29 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ad2b push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ad2d push 0x10649f38 */
  push32((uint32_t)(0x10649f38u));
  /* 1062ad32 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1062ad37 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ad39 call dword ptr [0x10650330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650330))), 0x1062ad3fu);
  /* 1062ad3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ad41 je 0x1062ad4f */
  if (C.zf) goto L_1062ad4f;
  /* 1062ad43 mov dword ptr [0x1064e628], 2 */
  w32((uint32_t)(0x1064e628), (0x2u));
  /* 1062ad4d jmp 0x1062ad56 */
  goto L_1062ad56;
L_1062ad4f:;
  /* 1062ad4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ad51 jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062ad56:;
  /* 1062ad56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ad5a jle 0x1062ad6f */
  if ((C.zf||C.sf!=C.of)) goto L_1062ad6f;
  /* 1062ad5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062ad5f push eax */
  push32((uint32_t)(EAX));
  /* 1062ad60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ad63 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ad64 call 0x1062afe0 */
  push32(0x1062ad69u); f_1062afe0();
  /* 1062ad69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ad6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1062ad6f:;
  /* 1062ad6f cmp dword ptr [0x1064e628], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1064e628))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ad76 jne 0x1062ad9b */
  if (!C.zf) goto L_1062ad9b;
  /* 1062ad78 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1062ad7b push edx */
  push32((uint32_t)(EDX));
  /* 1062ad7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062ad7f push eax */
  push32((uint32_t)(EAX));
  /* 1062ad80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062ad83 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ad84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ad87 push edx */
  push32((uint32_t)(EDX));
  /* 1062ad88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ad8b push eax */
  push32((uint32_t)(EAX));
  /* 1062ad8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ad8f push ecx */
  push32((uint32_t)(ECX));
  /* 1062ad90 call dword ptr [0x10650330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650330))), 0x1062ad96u);
  /* 1062ad96 jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062ad9b:;
  /* 1062ad9b cmp dword ptr [0x1064e628], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e628))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ada2 jne 0x1062afbf */
  if (!C.zf) goto L_1062afbf;
  /* 1062ada8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062adac jne 0x1062adb7 */
  if (!C.zf) goto L_1062adb7;
  /* 1062adae mov edx, dword ptr [0x1064e620] */
  EDX = (r32((uint32_t)(0x1064e620)));
  /* 1062adb4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1062adb7:;
  /* 1062adb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062adb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062adbb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062adbe push eax */
  push32((uint32_t)(EAX));
  /* 1062adbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062adc2 push ecx */
  push32((uint32_t)(ECX));
  /* 1062adc3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1062adc6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062adc8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062adca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1062adcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062add0 push edx */
  push32((uint32_t)(EDX));
  /* 1062add1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1062add4 push eax */
  push32((uint32_t)(EAX));
  /* 1062add5 call dword ptr [0x10650324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650324))), 0x1062addbu);
  /* 1062addb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1062adde cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ade2 jne 0x1062adeb */
  if (!C.zf) goto L_1062adeb;
  /* 1062ade4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ade6 jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062adeb:;
  /* 1062adeb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062adf2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1062adf5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1062adf7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062adfa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1062adfc call 0x10625a80 */
  push32(0x1062ae01u); f_10625a80();
  /* 1062ae01 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1062ae04 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1062ae07 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062ae0a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1062ae0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1062ae14 jmp 0x1062ae2d */
  goto L_1062ae2d;
  /* 1062ae16 mov eax, 1 */
  EAX = (0x1u);
  /* 1062ae1b ret  */
  ESPCHK(0x1062acd0u, _esp0);
  ESP += 4; return;
  /* 1062ae1c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1062ae1f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1062ae26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1062ae2d:;
  /* 1062ae2d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ae31 jne 0x1062ae3a */
  if (!C.zf) goto L_1062ae3a;
  /* 1062ae33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ae35 jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062ae3a:;
  /* 1062ae3a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1062ae3d push edx */
  push32((uint32_t)(EDX));
  /* 1062ae3e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062ae41 push eax */
  push32((uint32_t)(EAX));
  /* 1062ae42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062ae45 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ae46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062ae49 push edx */
  push32((uint32_t)(EDX));
  /* 1062ae4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ae4c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1062ae4f push eax */
  push32((uint32_t)(EAX));
  /* 1062ae50 call dword ptr [0x10650324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650324))), 0x1062ae56u);
  /* 1062ae56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ae58 jne 0x1062ae61 */
  if (!C.zf) goto L_1062ae61;
  /* 1062ae5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ae5c jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062ae61:;
  /* 1062ae61 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ae63 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ae65 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1062ae68 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ae69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062ae6c push edx */
  push32((uint32_t)(EDX));
  /* 1062ae6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ae70 push eax */
  push32((uint32_t)(EAX));
  /* 1062ae71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ae74 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ae75 call dword ptr [0x10650334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650334))), 0x1062ae7bu);
  /* 1062ae7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1062ae7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ae82 jne 0x1062ae8b */
  if (!C.zf) goto L_1062ae8b;
  /* 1062ae84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ae86 jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062ae8b:;
  /* 1062ae8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ae8e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1062ae94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062ae96 je 0x1062aedb */
  if (C.zf) goto L_1062aedb;
  /* 1062ae98 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ae9c je 0x1062aed6 */
  if (C.zf) goto L_1062aed6;
  /* 1062ae9e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062aea1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062aea4 jle 0x1062aead */
  if ((C.zf||C.sf!=C.of)) goto L_1062aead;
  /* 1062aea6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062aea8 jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062aead:;
  /* 1062aead mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1062aeb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1062aeb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062aeb4 push edx */
  push32((uint32_t)(EDX));
  /* 1062aeb5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1062aeb8 push eax */
  push32((uint32_t)(EAX));
  /* 1062aeb9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062aebc push ecx */
  push32((uint32_t)(ECX));
  /* 1062aebd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062aec0 push edx */
  push32((uint32_t)(EDX));
  /* 1062aec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062aec4 push eax */
  push32((uint32_t)(EAX));
  /* 1062aec5 call dword ptr [0x10650334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650334))), 0x1062aecbu);
  /* 1062aecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062aecd jne 0x1062aed6 */
  if (!C.zf) goto L_1062aed6;
  /* 1062aecf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062aed1 jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062aed6:;
  /* 1062aed6 jmp 0x1062afba */
  goto L_1062afba;
L_1062aedb:;
  /* 1062aedb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062aede mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1062aee1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1062aee8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1062aeeb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1062aeed add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062aef0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1062aef2 call 0x10625a80 */
  push32(0x1062aef7u); f_10625a80();
  /* 1062aef7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1062aefa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1062aefd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1062af00 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1062af03 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1062af0a jmp 0x1062af23 */
  goto L_1062af23;
  /* 1062af0c mov eax, 1 */
  EAX = (0x1u);
  /* 1062af11 ret  */
  ESPCHK(0x1062acd0u, _esp0);
  ESP += 4; return;
  /* 1062af12 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1062af15 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1062af1c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1062af23:;
  /* 1062af23 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062af27 jne 0x1062af30 */
  if (!C.zf) goto L_1062af30;
  /* 1062af29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062af2b jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062af30:;
  /* 1062af30 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1062af33 push eax */
  push32((uint32_t)(EAX));
  /* 1062af34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062af37 push ecx */
  push32((uint32_t)(ECX));
  /* 1062af38 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1062af3b push edx */
  push32((uint32_t)(EDX));
  /* 1062af3c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062af3f push eax */
  push32((uint32_t)(EAX));
  /* 1062af40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062af43 push ecx */
  push32((uint32_t)(ECX));
  /* 1062af44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062af47 push edx */
  push32((uint32_t)(EDX));
  /* 1062af48 call dword ptr [0x10650334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650334))), 0x1062af4eu);
  /* 1062af4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062af50 jne 0x1062af56 */
  if (!C.zf) goto L_1062af56;
  /* 1062af52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062af54 jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062af56:;
  /* 1062af56 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062af5a jne 0x1062af8a */
  if (!C.zf) goto L_1062af8a;
  /* 1062af5c push 0 */
  push32((uint32_t)(0x0u));
  /* 1062af5e push 0 */
  push32((uint32_t)(0x0u));
  /* 1062af60 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062af62 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062af64 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1062af67 push eax */
  push32((uint32_t)(EAX));
  /* 1062af68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062af6b push ecx */
  push32((uint32_t)(ECX));
  /* 1062af6c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1062af71 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1062af74 push edx */
  push32((uint32_t)(EDX));
  /* 1062af75 call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x1062af7bu);
  /* 1062af7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1062af7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062af82 jne 0x1062af88 */
  if (!C.zf) goto L_1062af88;
  /* 1062af84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062af86 jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062af88:;
  /* 1062af88 jmp 0x1062afba */
  goto L_1062afba;
L_1062af8a:;
  /* 1062af8a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062af8c push 0 */
  push32((uint32_t)(0x0u));
  /* 1062af8e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1062af91 push eax */
  push32((uint32_t)(EAX));
  /* 1062af92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062af95 push ecx */
  push32((uint32_t)(ECX));
  /* 1062af96 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1062af99 push edx */
  push32((uint32_t)(EDX));
  /* 1062af9a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062af9d push eax */
  push32((uint32_t)(EAX));
  /* 1062af9e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1062afa3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1062afa6 push ecx */
  push32((uint32_t)(ECX));
  /* 1062afa7 call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x1062afadu);
  /* 1062afad mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1062afb0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062afb4 jne 0x1062afba */
  if (!C.zf) goto L_1062afba;
  /* 1062afb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062afb8 jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062afba:;
  /* 1062afba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062afbd jmp 0x1062afc1 */
  goto L_1062afc1;
L_1062afbf:;
  /* 1062afbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062afc1:;
  /* 1062afc1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1062afc4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062afc7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1062afce pop edi */
  EDI = (pop32());
  /* 1062afcf pop esi */
  ESI = (pop32());
  /* 1062afd0 pop ebx */
  EBX = (pop32());
  /* 1062afd1 mov esp, ebp */
  ESP = (EBP);
  /* 1062afd3 pop ebp */
  EBP = (pop32());
  /* 1062afd4 ret  */
  ESPCHK(0x1062acd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afe0 @ 0x1062afe0 (80 bytes, 32 insns) */
void f_1062afe0(void) {
  FTRACE(0x1062afe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062afe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062afe1 mov ebp, esp */
  EBP = (ESP);
  /* 1062afe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062afe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062afe9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062afec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062afef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1062aff2:;
  /* 1062aff2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062aff5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062aff8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062affb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062affe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062b000 je 0x1062b017 */
  if (C.zf) goto L_1062b017;
  /* 1062b002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b005 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062b008 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062b00a je 0x1062b017 */
  if (C.zf) goto L_1062b017;
  /* 1062b00c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b00f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b012 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062b015 jmp 0x1062aff2 */
  goto L_1062aff2;
L_1062b017:;
  /* 1062b017 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b01a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062b01d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062b01f jne 0x1062b029 */
  if (!C.zf) goto L_1062b029;
  /* 1062b021 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b024 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b027 jmp 0x1062b02c */
  goto L_1062b02c;
L_1062b029:;
  /* 1062b029 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1062b02c:;
  /* 1062b02c mov esp, ebp */
  ESP = (EBP);
  /* 1062b02e pop ebp */
  EBP = (pop32());
  /* 1062b02f ret  */
  ESPCHK(0x1062afe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b030 @ 0x1062b030 (130 bytes, 43 insns) */
void f_1062b030(void) {
  FTRACE(0x1062b030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b030 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b031 mov ebp, esp */
  EBP = (ESP);
  /* 1062b033 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b037 cmp eax, dword ptr [0x1064ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b03d jae 0x1062b061 */
  if (!C.cf) goto L_1062b061;
  /* 1062b03f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b042 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062b045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b048 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062b04b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b04e mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062b055 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1062b05a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1062b05d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062b05f jne 0x1062b07c */
  if (!C.zf) goto L_1062b07c;
L_1062b061:;
  /* 1062b061 call 0x1062a7b0 */
  push32(0x1062b066u); f_1062a7b0();
  /* 1062b066 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1062b06c call 0x1062a7c0 */
  push32(0x1062b071u); f_1062a7c0();
  /* 1062b071 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1062b077 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062b07a jmp 0x1062b0ae */
  goto L_1062b0ae;
L_1062b07c:;
  /* 1062b07c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b07f push edx */
  push32((uint32_t)(EDX));
  /* 1062b080 call 0x1062bfd0 */
  push32(0x1062b085u); f_1062bfd0();
  /* 1062b085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b088 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062b08b push eax */
  push32((uint32_t)(EAX));
  /* 1062b08c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062b08f push ecx */
  push32((uint32_t)(ECX));
  /* 1062b090 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b093 push edx */
  push32((uint32_t)(EDX));
  /* 1062b094 call 0x1062b0c0 */
  push32(0x1062b099u); f_1062b0c0();
  /* 1062b099 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b09c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062b09f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b0a2 push eax */
  push32((uint32_t)(EAX));
  /* 1062b0a3 call 0x1062c060 */
  push32(0x1062b0a8u); f_1062c060();
  /* 1062b0a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b0ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1062b0ae:;
  /* 1062b0ae mov esp, ebp */
  ESP = (EBP);
  /* 1062b0b0 pop ebp */
  EBP = (pop32());
  /* 1062b0b1 ret  */
  ESPCHK(0x1062b030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0c0 @ 0x1062b0c0 (178 bytes, 56 insns) */
void f_1062b0c0(void) {
  FTRACE(0x1062b0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1062b0c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b0c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b0c9 push eax */
  push32((uint32_t)(EAX));
  /* 1062b0ca call 0x1062be50 */
  push32(0x1062b0cfu); f_1062be50();
  /* 1062b0cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b0d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062b0d5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b0d9 jne 0x1062b0ee */
  if (!C.zf) goto L_1062b0ee;
  /* 1062b0db call 0x1062a7b0 */
  push32(0x1062b0e0u); f_1062a7b0();
  /* 1062b0e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1062b0e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062b0e9 jmp 0x1062b16e */
  goto L_1062b16e;
L_1062b0ee:;
  /* 1062b0ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062b0f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b0f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062b0f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062b0f7 push edx */
  push32((uint32_t)(EDX));
  /* 1062b0f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062b0fb push eax */
  push32((uint32_t)(EAX));
  /* 1062b0fc call dword ptr [0x10650338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650338))), 0x1062b102u);
  /* 1062b102 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062b105 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b109 jne 0x1062b116 */
  if (!C.zf) goto L_1062b116;
  /* 1062b10b call dword ptr [0x106502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ac))), 0x1062b111u);
  /* 1062b111 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062b114 jmp 0x1062b11d */
  goto L_1062b11d;
L_1062b116:;
  /* 1062b116 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1062b11d:;
  /* 1062b11d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b121 je 0x1062b134 */
  if (C.zf) goto L_1062b134;
  /* 1062b123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b126 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b127 call 0x1062a710 */
  push32(0x1062b12cu); f_1062a710();
  /* 1062b12c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b12f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062b132 jmp 0x1062b16e */
  goto L_1062b16e;
L_1062b134:;
  /* 1062b134 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b137 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1062b13a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b13d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1062b140 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b143 mov ecx, dword ptr [edx*4 + 0x1064fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1064fde0)));
  /* 1062b14a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1062b14e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1062b151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b154 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062b157 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b15a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062b15d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b160 mov eax, dword ptr [eax*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062b167 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1062b16b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1062b16e:;
  /* 1062b16e mov esp, ebp */
  ESP = (EBP);
  /* 1062b170 pop ebp */
  EBP = (pop32());
  /* 1062b171 ret  */
  ESPCHK(0x1062b0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b180 @ 0x1062b180 (130 bytes, 43 insns) */
void f_1062b180(void) {
  FTRACE(0x1062b180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b180 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b181 mov ebp, esp */
  EBP = (ESP);
  /* 1062b183 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b187 cmp eax, dword ptr [0x1064ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b18d jae 0x1062b1b1 */
  if (!C.cf) goto L_1062b1b1;
  /* 1062b18f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b192 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062b195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b198 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062b19b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b19e mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062b1a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1062b1aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1062b1ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062b1af jne 0x1062b1cc */
  if (!C.zf) goto L_1062b1cc;
L_1062b1b1:;
  /* 1062b1b1 call 0x1062a7b0 */
  push32(0x1062b1b6u); f_1062a7b0();
  /* 1062b1b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1062b1bc call 0x1062a7c0 */
  push32(0x1062b1c1u); f_1062a7c0();
  /* 1062b1c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1062b1c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062b1ca jmp 0x1062b1fe */
  goto L_1062b1fe;
L_1062b1cc:;
  /* 1062b1cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b1cf push edx */
  push32((uint32_t)(EDX));
  /* 1062b1d0 call 0x1062bfd0 */
  push32(0x1062b1d5u); f_1062bfd0();
  /* 1062b1d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b1d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062b1db push eax */
  push32((uint32_t)(EAX));
  /* 1062b1dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062b1df push ecx */
  push32((uint32_t)(ECX));
  /* 1062b1e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b1e3 push edx */
  push32((uint32_t)(EDX));
  /* 1062b1e4 call 0x1062b210 */
  push32(0x1062b1e9u); f_1062b210();
  /* 1062b1e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b1ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062b1ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b1f2 push eax */
  push32((uint32_t)(EAX));
  /* 1062b1f3 call 0x1062c060 */
  push32(0x1062b1f8u); f_1062c060();
  /* 1062b1f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b1fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1062b1fe:;
  /* 1062b1fe mov esp, ebp */
  ESP = (EBP);
  /* 1062b200 pop ebp */
  EBP = (pop32());
  /* 1062b201 ret  */
  ESPCHK(0x1062b180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x1062b210 (627 bytes, 182 insns) */
void f_1062b210(void) {
  FTRACE(0x1062b210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b210 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b211 mov ebp, esp */
  EBP = (ESP);
  /* 1062b213 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b219 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062b220 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062b223 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1062b229 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b22d jne 0x1062b236 */
  if (!C.zf) goto L_1062b236;
  /* 1062b22f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062b231 jmp 0x1062b47f */
  goto L_1062b47f;
L_1062b236:;
  /* 1062b236 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b239 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062b23c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b23f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062b242 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b245 mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062b24c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1062b251 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1062b254 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062b256 je 0x1062b268 */
  if (C.zf) goto L_1062b268;
  /* 1062b258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062b25a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062b25c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b25f push edx */
  push32((uint32_t)(EDX));
  /* 1062b260 call 0x1062b0c0 */
  push32(0x1062b265u); f_1062b0c0();
  /* 1062b265 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062b268:;
  /* 1062b268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b26b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062b26e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b271 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062b274 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b277 mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062b27e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1062b283 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1062b288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062b28a je 0x1062b39c */
  if (C.zf) goto L_1062b39c;
  /* 1062b290 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062b293 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1062b296 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1062b29d:;
  /* 1062b29d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b2a0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b2a3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b2a6 jae 0x1062b39a */
  if (!C.cf) goto L_1062b39a;
  /* 1062b2ac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1062b2b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1062b2b5:;
  /* 1062b2b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062b2b8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1062b2be sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b2c0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b2c6 jge 0x1062b327 */
  if ((C.sf==C.of)) goto L_1062b327;
  /* 1062b2c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b2cb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b2ce cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b2d1 jae 0x1062b327 */
  if (!C.cf) goto L_1062b327;
  /* 1062b2d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b2d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1062b2d8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1062b2de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b2e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b2e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062b2e7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1062b2ee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b2f1 jne 0x1062b311 */
  if (!C.zf) goto L_1062b311;
  /* 1062b2f3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1062b2f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b2fc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1062b302 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062b305 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1062b308 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062b30b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b30e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1062b311:;
  /* 1062b311 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062b314 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1062b31a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1062b31c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062b31f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b322 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062b325 jmp 0x1062b2b5 */
  goto L_1062b2b5;
L_1062b327:;
  /* 1062b327 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062b329 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1062b32f push edx */
  push32((uint32_t)(EDX));
  /* 1062b330 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062b333 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1062b339 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b33b push eax */
  push32((uint32_t)(EAX));
  /* 1062b33c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1062b342 push edx */
  push32((uint32_t)(EDX));
  /* 1062b343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b346 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062b349 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b34c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062b34f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b352 mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062b359 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1062b35c push eax */
  push32((uint32_t)(EAX));
  /* 1062b35d call dword ptr [0x1065026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065026c))), 0x1062b363u);
  /* 1062b363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062b365 je 0x1062b38a */
  if (C.zf) goto L_1062b38a;
  /* 1062b367 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062b36a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b370 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1062b373 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062b376 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1062b37c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b37e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b384 jge 0x1062b388 */
  if ((C.sf==C.of)) goto L_1062b388;
  /* 1062b386 jmp 0x1062b39a */
  goto L_1062b39a;
L_1062b388:;
  /* 1062b388 jmp 0x1062b395 */
  goto L_1062b395;
L_1062b38a:;
  /* 1062b38a call dword ptr [0x106502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ac))), 0x1062b390u);
  /* 1062b390 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062b393 jmp 0x1062b39a */
  goto L_1062b39a;
L_1062b395:;
  /* 1062b395 jmp 0x1062b29d */
  goto L_1062b29d;
L_1062b39a:;
  /* 1062b39a jmp 0x1062b3ec */
  goto L_1062b3ec;
L_1062b39c:;
  /* 1062b39c push 0 */
  push32((uint32_t)(0x0u));
  /* 1062b39e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1062b3a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b3a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062b3a8 push edx */
  push32((uint32_t)(EDX));
  /* 1062b3a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062b3ac push eax */
  push32((uint32_t)(EAX));
  /* 1062b3ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b3b0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062b3b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b3b6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062b3b9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b3bc mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062b3c3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1062b3c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b3c7 call dword ptr [0x1065026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065026c))), 0x1062b3cdu);
  /* 1062b3cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062b3cf je 0x1062b3e3 */
  if (C.zf) goto L_1062b3e3;
  /* 1062b3d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1062b3d8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1062b3de mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1062b3e1 jmp 0x1062b3ec */
  goto L_1062b3ec;
L_1062b3e3:;
  /* 1062b3e3 call dword ptr [0x106502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ac))), 0x1062b3e9u);
  /* 1062b3e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1062b3ec:;
  /* 1062b3ec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b3f0 jne 0x1062b476 */
  if (!C.zf) goto L_1062b476;
  /* 1062b3f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b3fa je 0x1062b42a */
  if (C.zf) goto L_1062b42a;
  /* 1062b3fc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b400 jne 0x1062b419 */
  if (!C.zf) goto L_1062b419;
  /* 1062b402 call 0x1062a7b0 */
  push32(0x1062b407u); f_1062a7b0();
  /* 1062b407 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1062b40d call 0x1062a7c0 */
  push32(0x1062b412u); f_1062a7c0();
  /* 1062b412 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062b415 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1062b417 jmp 0x1062b425 */
  goto L_1062b425;
L_1062b419:;
  /* 1062b419 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062b41c push edx */
  push32((uint32_t)(EDX));
  /* 1062b41d call 0x1062a710 */
  push32(0x1062b422u); f_1062a710();
  /* 1062b422 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062b425:;
  /* 1062b425 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062b428 jmp 0x1062b47f */
  goto L_1062b47f;
L_1062b42a:;
  /* 1062b42a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b42d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062b430 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b433 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062b436 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b439 mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062b440 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1062b445 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1062b448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062b44a je 0x1062b45b */
  if (C.zf) goto L_1062b45b;
  /* 1062b44c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062b44f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062b452 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b455 jne 0x1062b45b */
  if (!C.zf) goto L_1062b45b;
  /* 1062b457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062b459 jmp 0x1062b47f */
  goto L_1062b47f;
L_1062b45b:;
  /* 1062b45b call 0x1062a7b0 */
  push32(0x1062b460u); f_1062a7b0();
  /* 1062b460 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1062b466 call 0x1062a7c0 */
  push32(0x1062b46bu); f_1062a7c0();
  /* 1062b46b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1062b471 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062b474 jmp 0x1062b47f */
  goto L_1062b47f;
L_1062b476:;
  /* 1062b476 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062b479 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1062b47f:;
  /* 1062b47f mov esp, ebp */
  ESP = (EBP);
  /* 1062b481 pop ebp */
  EBP = (pop32());
  /* 1062b482 ret  */
  ESPCHK(0x1062b210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b490 @ 0x1062b490 (199 bytes, 68 insns) */
void f_1062b490(void) {
  FTRACE(0x1062b490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b490 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b491 mov ebp, esp */
  EBP = (ESP);
  /* 1062b493 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b494 push ebx */
  push32((uint32_t)(EBX));
  /* 1062b495 push esi */
  push32((uint32_t)(ESI));
  /* 1062b496 push edi */
  push32((uint32_t)(EDI));
L_1062b497:;
  /* 1062b497 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b49b jne 0x1062b4bb */
  if (!C.zf) goto L_1062b4bb;
  /* 1062b49d push 0x10649e9c */
  push32((uint32_t)(0x10649e9cu));
  /* 1062b4a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062b4a4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1062b4a6 push 0x10649f68 */
  push32((uint32_t)(0x10649f68u));
  /* 1062b4ab push 2 */
  push32((uint32_t)(0x2u));
  /* 1062b4ad call 0x106219a0 */
  push32(0x1062b4b2u); f_106219a0();
  /* 1062b4b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b4b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b4b8 jne 0x1062b4bb */
  if (!C.zf) goto L_1062b4bb;
  /* 1062b4ba int3  */
  x86_unimpl("int3 @ 0x1062b4ba");
L_1062b4bb:;
  /* 1062b4bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062b4bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062b4bf jne 0x1062b497 */
  if (!C.zf) goto L_1062b497;
  /* 1062b4c1 mov ecx, dword ptr [0x1064e62c] */
  ECX = (r32((uint32_t)(0x1064e62c)));
  /* 1062b4c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b4ca mov dword ptr [0x1064e62c], ecx */
  w32((uint32_t)(0x1064e62c), (ECX));
  /* 1062b4d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b4d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1062b4d6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1062b4d8 push 0x10649f68 */
  push32((uint32_t)(0x10649f68u));
  /* 1062b4dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1062b4df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1062b4e4 call 0x106228e0 */
  push32(0x1062b4e9u); f_106228e0();
  /* 1062b4e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b4ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b4ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1062b4f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b4f5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b4f9 je 0x1062b516 */
  if (C.zf) goto L_1062b516;
  /* 1062b4fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b4fe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1062b501 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1062b504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b507 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1062b50a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b50d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1062b514 jmp 0x1062b53b */
  goto L_1062b53b;
L_1062b516:;
  /* 1062b516 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b519 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062b51c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1062b51f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b522 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1062b525 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b528 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b52b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b52e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1062b531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b534 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1062b53b:;
  /* 1062b53b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b53e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b541 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1062b544 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1062b546 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b549 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1062b550 pop edi */
  EDI = (pop32());
  /* 1062b551 pop esi */
  ESI = (pop32());
  /* 1062b552 pop ebx */
  EBX = (pop32());
  /* 1062b553 mov esp, ebp */
  ESP = (EBP);
  /* 1062b555 pop ebp */
  EBP = (pop32());
  /* 1062b556 ret  */
  ESPCHK(0x1062b490u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1062b560 (50 bytes, 17 insns) */
void f_1062b560(void) {
  FTRACE(0x1062b560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b560 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b561 mov ebp, esp */
  EBP = (ESP);
  /* 1062b563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b566 cmp eax, dword ptr [0x1064ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b56c jb 0x1062b572 */
  if (C.cf) goto L_1062b572;
  /* 1062b56e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062b570 jmp 0x1062b590 */
  goto L_1062b590;
L_1062b572:;
  /* 1062b572 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b575 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062b578 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b57b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062b57e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b581 mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062b588 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1062b58d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1062b590:;
  /* 1062b590 pop ebp */
  EBP = (pop32());
  /* 1062b591 ret  */
  ESPCHK(0x1062b560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a0 @ 0x1062b5a0 (300 bytes, 80 insns) */
void f_1062b5a0(void) {
  FTRACE(0x1062b5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1062b5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b5a4 cmp dword ptr [0x1064fae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064fae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b5ab jne 0x1062b5b9 */
  if (!C.zf) goto L_1062b5b9;
  /* 1062b5ad mov dword ptr [0x1064fae0], 0x200 */
  w32((uint32_t)(0x1064fae0), (0x200u));
  /* 1062b5b7 jmp 0x1062b5cc */
  goto L_1062b5cc;
L_1062b5b9:;
  /* 1062b5b9 cmp dword ptr [0x1064fae0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x1064fae0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b5c0 jge 0x1062b5cc */
  if ((C.sf==C.of)) goto L_1062b5cc;
  /* 1062b5c2 mov dword ptr [0x1064fae0], 0x14 */
  w32((uint32_t)(0x1064fae0), (0x14u));
L_1062b5cc:;
  /* 1062b5cc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1062b5d1 push 0x10649f74 */
  push32((uint32_t)(0x10649f74u));
  /* 1062b5d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062b5d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1062b5da mov eax, dword ptr [0x1064fae0] */
  EAX = (r32((uint32_t)(0x1064fae0)));
  /* 1062b5df push eax */
  push32((uint32_t)(EAX));
  /* 1062b5e0 call 0x10622cf0 */
  push32(0x1062b5e5u); f_10622cf0();
  /* 1062b5e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b5e8 mov dword ptr [0x1064e7a0], eax */
  w32((uint32_t)(0x1064e7a0), (EAX));
  /* 1062b5ed cmp dword ptr [0x1064e7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b5f4 jne 0x1062b635 */
  if (!C.zf) goto L_1062b635;
  /* 1062b5f6 mov dword ptr [0x1064fae0], 0x14 */
  w32((uint32_t)(0x1064fae0), (0x14u));
  /* 1062b600 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1062b605 push 0x10649f74 */
  push32((uint32_t)(0x10649f74u));
  /* 1062b60a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062b60c push 4 */
  push32((uint32_t)(0x4u));
  /* 1062b60e mov ecx, dword ptr [0x1064fae0] */
  ECX = (r32((uint32_t)(0x1064fae0)));
  /* 1062b614 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b615 call 0x10622cf0 */
  push32(0x1062b61au); f_10622cf0();
  /* 1062b61a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b61d mov dword ptr [0x1064e7a0], eax */
  w32((uint32_t)(0x1064e7a0), (EAX));
  /* 1062b622 cmp dword ptr [0x1064e7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b629 jne 0x1062b635 */
  if (!C.zf) goto L_1062b635;
  /* 1062b62b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1062b62d call 0x10621850 */
  push32(0x1062b632u); f_10621850();
  /* 1062b632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062b635:;
  /* 1062b635 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062b63c jmp 0x1062b647 */
  goto L_1062b647;
L_1062b63e:;
  /* 1062b63e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b641 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b644 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1062b647:;
  /* 1062b647 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b64b jge 0x1062b666 */
  if ((C.sf==C.of)) goto L_1062b666;
  /* 1062b64d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b650 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062b653 add eax, 0x1064d120 */
  { uint32_t _a=(EAX),_b=(0x1064d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b658 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b65b mov edx, dword ptr [0x1064e7a0] */
  EDX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062b661 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1062b664 jmp 0x1062b63e */
  goto L_1062b63e;
L_1062b666:;
  /* 1062b666 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062b66d jmp 0x1062b678 */
  goto L_1062b678;
L_1062b66f:;
  /* 1062b66f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b672 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b675 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062b678:;
  /* 1062b678 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b67c jge 0x1062b6c8 */
  if ((C.sf==C.of)) goto L_1062b6c8;
  /* 1062b67e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b681 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062b684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b687 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062b68a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b68d mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062b694 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b698 je 0x1062b6b6 */
  if (C.zf) goto L_1062b6b6;
  /* 1062b69a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b69d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062b6a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b6a3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062b6a6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062b6a9 mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062b6b0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b6b4 jne 0x1062b6c6 */
  if (!C.zf) goto L_1062b6c6;
L_1062b6b6:;
  /* 1062b6b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062b6b9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062b6bc mov dword ptr [ecx + 0x1064d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1064d130), (0xffffffffu));
L_1062b6c6:;
  /* 1062b6c6 jmp 0x1062b66f */
  goto L_1062b66f;
L_1062b6c8:;
  /* 1062b6c8 mov esp, ebp */
  ESP = (EBP);
  /* 1062b6ca pop ebp */
  EBP = (pop32());
  /* 1062b6cb ret  */
  ESPCHK(0x1062b5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6d0 @ 0x1062b6d0 (26 bytes, 9 insns) */
void f_1062b6d0(void) {
  FTRACE(0x1062b6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1062b6d3 call 0x1062c2d0 */
  push32(0x1062b6d8u); f_1062c2d0();
  /* 1062b6d8 movsx eax, byte ptr [0x1064e448] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1064e448))));
  /* 1062b6df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062b6e1 je 0x1062b6e8 */
  if (C.zf) goto L_1062b6e8;
  /* 1062b6e3 call 0x1062c090 */
  push32(0x1062b6e8u); f_1062c090();
L_1062b6e8:;
  /* 1062b6e8 pop ebp */
  EBP = (pop32());
  /* 1062b6e9 ret  */
  ESPCHK(0x1062b6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f0 @ 0x1062b6f0 (61 bytes, 20 insns) */
void f_1062b6f0(void) {
  FTRACE(0x1062b6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1062b6f3 cmp dword ptr [ebp + 8], 0x1064d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1064d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b6fa jb 0x1062b71e */
  if (C.cf) goto L_1062b71e;
  /* 1062b6fc cmp dword ptr [ebp + 8], 0x1064d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1064d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b703 ja 0x1062b71e */
  if ((!C.cf&&!C.zf)) goto L_1062b71e;
  /* 1062b705 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b708 sub eax, 0x1064d120 */
  { uint32_t _a=(EAX),_b=(0x1064d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b70d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062b710 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b713 push eax */
  push32((uint32_t)(EAX));
  /* 1062b714 call 0x106262e0 */
  push32(0x1062b719u); f_106262e0();
  /* 1062b719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b71c jmp 0x1062b72b */
  goto L_1062b72b;
L_1062b71e:;
  /* 1062b71e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b721 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b724 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b725 call dword ptr [0x106502fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502fc))), 0x1062b72bu);
L_1062b72b:;
  /* 1062b72b pop ebp */
  EBP = (pop32());
  /* 1062b72c ret  */
  ESPCHK(0x1062b6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b730 @ 0x1062b730 (41 bytes, 16 insns) */
void f_1062b730(void) {
  FTRACE(0x1062b730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b730 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b731 mov ebp, esp */
  EBP = (ESP);
  /* 1062b733 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b737 jge 0x1062b74a */
  if ((C.sf==C.of)) goto L_1062b74a;
  /* 1062b739 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b73c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b73f push eax */
  push32((uint32_t)(EAX));
  /* 1062b740 call 0x106262e0 */
  push32(0x1062b745u); f_106262e0();
  /* 1062b745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b748 jmp 0x1062b757 */
  goto L_1062b757;
L_1062b74a:;
  /* 1062b74a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062b74d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b750 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b751 call dword ptr [0x106502fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502fc))), 0x1062b757u);
L_1062b757:;
  /* 1062b757 pop ebp */
  EBP = (pop32());
  /* 1062b758 ret  */
  ESPCHK(0x1062b730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b760 @ 0x1062b760 (61 bytes, 20 insns) */
void f_1062b760(void) {
  FTRACE(0x1062b760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b760 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b761 mov ebp, esp */
  EBP = (ESP);
  /* 1062b763 cmp dword ptr [ebp + 8], 0x1064d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1064d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b76a jb 0x1062b78e */
  if (C.cf) goto L_1062b78e;
  /* 1062b76c cmp dword ptr [ebp + 8], 0x1064d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1064d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b773 ja 0x1062b78e */
  if ((!C.cf&&!C.zf)) goto L_1062b78e;
  /* 1062b775 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b778 sub eax, 0x1064d120 */
  { uint32_t _a=(EAX),_b=(0x1064d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b77d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062b780 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b783 push eax */
  push32((uint32_t)(EAX));
  /* 1062b784 call 0x10626380 */
  push32(0x1062b789u); f_10626380();
  /* 1062b789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b78c jmp 0x1062b79b */
  goto L_1062b79b;
L_1062b78e:;
  /* 1062b78e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b791 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b794 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b795 call dword ptr [0x10650300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650300))), 0x1062b79bu);
L_1062b79b:;
  /* 1062b79b pop ebp */
  EBP = (pop32());
  /* 1062b79c ret  */
  ESPCHK(0x1062b760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7a0 @ 0x1062b7a0 (41 bytes, 16 insns) */
void f_1062b7a0(void) {
  FTRACE(0x1062b7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1062b7a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b7a7 jge 0x1062b7ba */
  if ((C.sf==C.of)) goto L_1062b7ba;
  /* 1062b7a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b7ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b7af push eax */
  push32((uint32_t)(EAX));
  /* 1062b7b0 call 0x10626380 */
  push32(0x1062b7b5u); f_10626380();
  /* 1062b7b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b7b8 jmp 0x1062b7c7 */
  goto L_1062b7c7;
L_1062b7ba:;
  /* 1062b7ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062b7bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b7c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b7c1 call dword ptr [0x10650300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650300))), 0x1062b7c7u);
L_1062b7c7:;
  /* 1062b7c7 pop ebp */
  EBP = (pop32());
  /* 1062b7c8 ret  */
  ESPCHK(0x1062b7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7d0 @ 0x1062b7d0 (119 bytes, 34 insns) */
void f_1062b7d0(void) {
  FTRACE(0x1062b7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1062b7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b7d6 push 0x1064e79c */
  push32((uint32_t)(0x1064e79cu));
  /* 1062b7db call dword ptr [0x10650280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650280))), 0x1062b7e1u);
  /* 1062b7e1 cmp dword ptr [0x1064e78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b7e8 je 0x1062b808 */
  if (C.zf) goto L_1062b808;
  /* 1062b7ea push 0x1064e79c */
  push32((uint32_t)(0x1064e79cu));
  /* 1062b7ef call dword ptr [0x10650270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650270))), 0x1062b7f5u);
  /* 1062b7f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1062b7f7 call 0x106262e0 */
  push32(0x1062b7fcu); f_106262e0();
  /* 1062b7fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b7ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1062b806 jmp 0x1062b80f */
  goto L_1062b80f;
L_1062b808:;
  /* 1062b808 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1062b80f:;
  /* 1062b80f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1062b813 push eax */
  push32((uint32_t)(EAX));
  /* 1062b814 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b817 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b818 call 0x1062b850 */
  push32(0x1062b81du); f_1062b850();
  /* 1062b81d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b820 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062b823 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b827 je 0x1062b835 */
  if (C.zf) goto L_1062b835;
  /* 1062b829 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1062b82b call 0x10626380 */
  push32(0x1062b830u); f_10626380();
  /* 1062b830 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b833 jmp 0x1062b840 */
  goto L_1062b840;
L_1062b835:;
  /* 1062b835 push 0x1064e79c */
  push32((uint32_t)(0x1064e79cu));
  /* 1062b83a call dword ptr [0x10650270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650270))), 0x1062b840u);
L_1062b840:;
  /* 1062b840 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062b843 mov esp, ebp */
  ESP = (EBP);
  /* 1062b845 pop ebp */
  EBP = (pop32());
  /* 1062b846 ret  */
  ESPCHK(0x1062b7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b850 @ 0x1062b850 (160 bytes, 50 insns) */
void f_1062b850(void) {
  FTRACE(0x1062b850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b850 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b851 mov ebp, esp */
  EBP = (ESP);
  /* 1062b853 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062b856 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b85a jne 0x1062b863 */
  if (!C.zf) goto L_1062b863;
  /* 1062b85c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062b85e jmp 0x1062b8ec */
  goto L_1062b8ec;
L_1062b863:;
  /* 1062b863 cmp dword ptr [0x1064e610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b86a jne 0x1062b89a */
  if (!C.zf) goto L_1062b89a;
  /* 1062b86c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062b86f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062b874 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b879 jle 0x1062b88b */
  if ((C.zf||C.sf!=C.of)) goto L_1062b88b;
  /* 1062b87b call 0x1062a7b0 */
  push32(0x1062b880u); f_1062a7b0();
  /* 1062b880 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1062b886 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062b889 jmp 0x1062b8ec */
  goto L_1062b8ec;
L_1062b88b:;
  /* 1062b88b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b88e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1062b891 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1062b893 mov eax, 1 */
  EAX = (0x1u);
  /* 1062b898 jmp 0x1062b8ec */
  goto L_1062b8ec;
L_1062b89a:;
  /* 1062b89a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062b8a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1062b8a4 push eax */
  push32((uint32_t)(EAX));
  /* 1062b8a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062b8a7 mov ecx, dword ptr [0x1064cea4] */
  ECX = (r32((uint32_t)(0x1064cea4)));
  /* 1062b8ad push ecx */
  push32((uint32_t)(ECX));
  /* 1062b8ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b8b1 push edx */
  push32((uint32_t)(EDX));
  /* 1062b8b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062b8b4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1062b8b7 push eax */
  push32((uint32_t)(EAX));
  /* 1062b8b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1062b8bd mov ecx, dword ptr [0x1064e620] */
  ECX = (r32((uint32_t)(0x1064e620)));
  /* 1062b8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b8c4 call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x1062b8cau);
  /* 1062b8ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062b8cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b8d1 je 0x1062b8d9 */
  if (C.zf) goto L_1062b8d9;
  /* 1062b8d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b8d7 je 0x1062b8e9 */
  if (C.zf) goto L_1062b8e9;
L_1062b8d9:;
  /* 1062b8d9 call 0x1062a7b0 */
  push32(0x1062b8deu); f_1062a7b0();
  /* 1062b8de mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1062b8e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062b8e7 jmp 0x1062b8ec */
  goto L_1062b8ec;
L_1062b8e9:;
  /* 1062b8e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1062b8ec:;
  /* 1062b8ec mov esp, ebp */
  ESP = (EBP);
  /* 1062b8ee pop ebp */
  EBP = (pop32());
  /* 1062b8ef ret  */
  ESPCHK(0x1062b850u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1062b8f0 (32 bytes, 18 insns) */
void f_1062b8f0(void) {
  FTRACE(0x1062b8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1062b8f3 push ebx */
  push32((uint32_t)(EBX));
  /* 1062b8f4 push esi */
  push32((uint32_t)(ESI));
  /* 1062b8f5 push edi */
  push32((uint32_t)(EDI));
  /* 1062b8f6 push ebp */
  push32((uint32_t)(EBP));
  /* 1062b8f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062b8f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062b8fb push 0x1062b908 */
  push32((uint32_t)(0x1062b908u));
  /* 1062b900 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1062b903 call 0x1063303c */
  push32(0x1062b908u); f_1063303c();
  /* 1062b908 pop ebp */
  EBP = (pop32());
  /* 1062b909 pop edi */
  EDI = (pop32());
  /* 1062b90a pop esi */
  ESI = (pop32());
  /* 1062b90b pop ebx */
  EBX = (pop32());
  /* 1062b90c mov esp, ebp */
  ESP = (EBP);
  /* 1062b90e pop ebp */
  EBP = (pop32());
  /* 1062b90f ret  */
  ESPCHK(0x1062b8f0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1062b932 (104 bytes, 33 insns) */
void f_1062b932(void) {
  FTRACE(0x1062b932u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b932 push ebx */
  push32((uint32_t)(EBX));
  /* 1062b933 push esi */
  push32((uint32_t)(ESI));
  /* 1062b934 push edi */
  push32((uint32_t)(EDI));
  /* 1062b935 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1062b939 push eax */
  push32((uint32_t)(EAX));
  /* 1062b93a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1062b93c push 0x1062b910 */
  push32((uint32_t)(0x1062b910u));
  /* 1062b941 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1062b948 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1062b94f:;
  /* 1062b94f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1062b953 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1062b956 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1062b959 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b95c je 0x1062b98c */
  if (C.zf) goto L_1062b98c;
  /* 1062b95e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b962 je 0x1062b98c */
  if (C.zf) goto L_1062b98c;
  /* 1062b964 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1062b967 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1062b96a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1062b96e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1062b971 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062b976 jne 0x1062b98a */
  if (!C.zf) goto L_1062b98a;
  /* 1062b978 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1062b97d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1062b981 call 0x1062b9c6 */
  push32(0x1062b986u); f_1062b9c6();
  /* 1062b986 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1062b98au);
L_1062b98a:;
  /* 1062b98a jmp 0x1062b94f */
  goto L_1062b94f;
L_1062b98c:;
  /* 1062b98c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1062b993 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062b996 pop edi */
  EDI = (pop32());
  /* 1062b997 pop esi */
  ESI = (pop32());
  /* 1062b998 pop ebx */
  EBX = (pop32());
  /* 1062b999 ret  */
  ESPCHK(0x1062b932u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9c6 @ 0x1062b9c6 (24 bytes, 10 insns) */
void f_1062b9c6(void) {
  FTRACE(0x1062b9c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062b9c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1062b9c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1062b9c8 mov ebx, 0x1064d3b8 */
  EBX = (0x1064d3b8u);
  /* 1062b9cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062b9d0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1062b9d3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1062b9d6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1062b9d9 pop ecx */
  ECX = (pop32());
  /* 1062b9da pop ebx */
  EBX = (pop32());
  /* 1062b9db ret 4 */
  ESPCHK(0x1062b9c6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000baa5 @ 0x1062baa5 (27 bytes, 11 insns) */
void f_1062baa5(void) {
  FTRACE(0x1062baa5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062baa5 push ebp */
  push32((uint32_t)(EBP));
  /* 1062baa6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1062baaa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1062baac mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1062baaf push eax */
  push32((uint32_t)(EAX));
  /* 1062bab0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1062bab3 push eax */
  push32((uint32_t)(EAX));
  /* 1062bab4 call 0x1062b932 */
  push32(0x1062bab9u); f_1062b932();
  /* 1062bab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062babc pop ebp */
  EBP = (pop32());
  /* 1062babd ret 4 */
  ESPCHK(0x1062baa5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bac0 @ 0x1062bac0 (482 bytes, 138 insns) */
void f_1062bac0(void) {
  FTRACE(0x1062bac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062bac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062bac1 mov ebp, esp */
  EBP = (ESP);
  /* 1062bac3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062bac6 push esi */
  push32((uint32_t)(ESI));
  /* 1062bac7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1062bace push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1062bad0 call 0x106262e0 */
  push32(0x1062bad5u); f_106262e0();
  /* 1062bad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bad8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1062badf jmp 0x1062baea */
  goto L_1062baea;
L_1062bae1:;
  /* 1062bae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062bae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bae7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1062baea:;
  /* 1062baea cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062baee jge 0x1062bc90 */
  if ((C.sf==C.of)) goto L_1062bc90;
  /* 1062baf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062baf7 cmp dword ptr [ecx*4 + 0x1064fde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1064fde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062baff je 0x1062bbf6 */
  if (C.zf) goto L_1062bbf6;
  /* 1062bb05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062bb08 mov eax, dword ptr [edx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1064fde0)));
  /* 1062bb0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062bb12 jmp 0x1062bb1d */
  goto L_1062bb1d;
L_1062bb14:;
  /* 1062bb14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bb17 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bb1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1062bb1d:;
  /* 1062bb1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062bb20 mov eax, dword ptr [edx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1064fde0)));
  /* 1062bb27 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bb2c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bb2f jae 0x1062bbe6 */
  if (!C.cf) goto L_1062bbe6;
  /* 1062bb35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bb38 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1062bb3c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1062bb3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062bb41 jne 0x1062bbe1 */
  if (!C.zf) goto L_1062bbe1;
  /* 1062bb47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bb4a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bb4e jne 0x1062bb89 */
  if (!C.zf) goto L_1062bb89;
  /* 1062bb50 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1062bb52 call 0x106262e0 */
  push32(0x1062bb57u); f_106262e0();
  /* 1062bb57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bb5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bb5d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bb61 jne 0x1062bb7f */
  if (!C.zf) goto L_1062bb7f;
  /* 1062bb63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bb66 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bb69 push edx */
  push32((uint32_t)(EDX));
  /* 1062bb6a call dword ptr [0x106502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f8))), 0x1062bb70u);
  /* 1062bb70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bb73 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1062bb76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bb79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bb7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1062bb7f:;
  /* 1062bb7f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1062bb81 call 0x10626380 */
  push32(0x1062bb86u); f_10626380();
  /* 1062bb86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062bb89:;
  /* 1062bb89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bb8c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bb8f push eax */
  push32((uint32_t)(EAX));
  /* 1062bb90 call dword ptr [0x106502fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502fc))), 0x1062bb96u);
  /* 1062bb96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bb99 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1062bb9d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1062bba0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062bba2 je 0x1062bbb6 */
  if (C.zf) goto L_1062bbb6;
  /* 1062bba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bba7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bbaa push eax */
  push32((uint32_t)(EAX));
  /* 1062bbab call dword ptr [0x10650300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650300))), 0x1062bbb1u);
  /* 1062bbb1 jmp 0x1062bb14 */
  goto L_1062bb14;
L_1062bbb6:;
  /* 1062bbb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bbb9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1062bbbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062bbc2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062bbc5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062bbc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bbcb sub eax, dword ptr [edx*4 + 0x1064fde0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1064fde0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062bbd2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1062bbd3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1062bbd8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1062bbda add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bbdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062bbdf jmp 0x1062bbe6 */
  goto L_1062bbe6;
L_1062bbe1:;
  /* 1062bbe1 jmp 0x1062bb14 */
  goto L_1062bb14;
L_1062bbe6:;
  /* 1062bbe6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bbea je 0x1062bbf1 */
  if (C.zf) goto L_1062bbf1;
  /* 1062bbec jmp 0x1062bc90 */
  goto L_1062bc90;
L_1062bbf1:;
  /* 1062bbf1 jmp 0x1062bc8b */
  goto L_1062bc8b;
L_1062bbf6:;
  /* 1062bbf6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1062bbf8 push 0x10649f7c */
  push32((uint32_t)(0x10649f7cu));
  /* 1062bbfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1062bbff push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1062bc04 call 0x106228e0 */
  push32(0x1062bc09u); f_106228e0();
  /* 1062bc09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bc0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062bc0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bc13 je 0x1062bc89 */
  if (C.zf) goto L_1062bc89;
  /* 1062bc15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062bc18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bc1b mov dword ptr [eax*4 + 0x1064fde0], ecx */
  w32((uint32_t)(EAX*4 + 0x1064fde0), (ECX));
  /* 1062bc22 mov edx, dword ptr [0x1064ff1c] */
  EDX = (r32((uint32_t)(0x1064ff1c)));
  /* 1062bc28 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bc2b mov dword ptr [0x1064ff1c], edx */
  w32((uint32_t)(0x1064ff1c), (EDX));
  /* 1062bc31 jmp 0x1062bc3c */
  goto L_1062bc3c;
L_1062bc33:;
  /* 1062bc33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bc36 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bc39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062bc3c:;
  /* 1062bc3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062bc3f mov edx, dword ptr [ecx*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062bc46 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bc4c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bc4f jae 0x1062bc74 */
  if (!C.cf) goto L_1062bc74;
  /* 1062bc51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bc54 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1062bc58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bc5b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1062bc61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bc64 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1062bc68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bc6b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1062bc72 jmp 0x1062bc33 */
  goto L_1062bc33;
L_1062bc74:;
  /* 1062bc74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062bc77 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062bc7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062bc7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062bc80 push edx */
  push32((uint32_t)(EDX));
  /* 1062bc81 call 0x1062bfd0 */
  push32(0x1062bc86u); f_1062bfd0();
  /* 1062bc86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062bc89:;
  /* 1062bc89 jmp 0x1062bc90 */
  goto L_1062bc90;
L_1062bc8b:;
  /* 1062bc8b jmp 0x1062bae1 */
  goto L_1062bae1;
L_1062bc90:;
  /* 1062bc90 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1062bc92 call 0x10626380 */
  push32(0x1062bc97u); f_10626380();
  /* 1062bc97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bc9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062bc9d pop esi */
  ESI = (pop32());
  /* 1062bc9e mov esp, ebp */
  ESP = (EBP);
  /* 1062bca0 pop ebp */
  EBP = (pop32());
  /* 1062bca1 ret  */
  ESPCHK(0x1062bac0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1062bcb0 (183 bytes, 57 insns) */
void f_1062bcb0(void) {
  FTRACE(0x1062bcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062bcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062bcb1 mov ebp, esp */
  EBP = (ESP);
  /* 1062bcb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062bcb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bcb7 cmp eax, dword ptr [0x1064ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bcbd jae 0x1062bd4a */
  if (!C.cf) goto L_1062bd4a;
  /* 1062bcc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bcc6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062bcc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bccc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062bccf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062bcd2 mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062bcd9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bcdd jne 0x1062bd4a */
  if (!C.zf) goto L_1062bd4a;
  /* 1062bcdf cmp dword ptr [0x1064e408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bce6 jne 0x1062bd2a */
  if (!C.zf) goto L_1062bd2a;
  /* 1062bce8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bceb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1062bcee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bcf2 je 0x1062bd02 */
  if (C.zf) goto L_1062bd02;
  /* 1062bcf4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bcf8 je 0x1062bd10 */
  if (C.zf) goto L_1062bd10;
  /* 1062bcfa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bcfe je 0x1062bd1e */
  if (C.zf) goto L_1062bd1e;
  /* 1062bd00 jmp 0x1062bd2a */
  goto L_1062bd2a;
L_1062bd02:;
  /* 1062bd02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062bd05 push edx */
  push32((uint32_t)(EDX));
  /* 1062bd06 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1062bd08 call dword ptr [0x10650340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650340))), 0x1062bd0eu);
  /* 1062bd0e jmp 0x1062bd2a */
  goto L_1062bd2a;
L_1062bd10:;
  /* 1062bd10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062bd13 push eax */
  push32((uint32_t)(EAX));
  /* 1062bd14 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1062bd16 call dword ptr [0x10650340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650340))), 0x1062bd1cu);
  /* 1062bd1c jmp 0x1062bd2a */
  goto L_1062bd2a;
L_1062bd1e:;
  /* 1062bd1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062bd21 push ecx */
  push32((uint32_t)(ECX));
  /* 1062bd22 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1062bd24 call dword ptr [0x10650340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650340))), 0x1062bd2au);
L_1062bd2a:;
  /* 1062bd2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bd2d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1062bd30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bd33 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1062bd36 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062bd39 mov ecx, dword ptr [edx*4 + 0x1064fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1064fde0)));
  /* 1062bd40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062bd43 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1062bd46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062bd48 jmp 0x1062bd63 */
  goto L_1062bd63;
L_1062bd4a:;
  /* 1062bd4a call 0x1062a7b0 */
  push32(0x1062bd4fu); f_1062a7b0();
  /* 1062bd4f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1062bd55 call 0x1062a7c0 */
  push32(0x1062bd5au); f_1062a7c0();
  /* 1062bd5a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1062bd60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1062bd63:;
  /* 1062bd63 mov esp, ebp */
  ESP = (EBP);
  /* 1062bd65 pop ebp */
  EBP = (pop32());
  /* 1062bd66 ret  */
  ESPCHK(0x1062bcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd70 @ 0x1062bd70 (216 bytes, 63 insns) */
void f_1062bd70(void) {
  FTRACE(0x1062bd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062bd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1062bd71 mov ebp, esp */
  EBP = (ESP);
  /* 1062bd73 push ecx */
  push32((uint32_t)(ECX));
  /* 1062bd74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bd77 cmp eax, dword ptr [0x1064ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bd7d jae 0x1062be2b */
  if (!C.cf) goto L_1062be2b;
  /* 1062bd83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bd86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062bd89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bd8c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062bd8f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062bd92 mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062bd99 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1062bd9e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1062bda1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062bda3 je 0x1062be2b */
  if (C.zf) goto L_1062be2b;
  /* 1062bda9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bdac sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1062bdaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bdb2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1062bdb5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062bdb8 mov ecx, dword ptr [edx*4 + 0x1064fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1064fde0)));
  /* 1062bdbf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bdc3 je 0x1062be2b */
  if (C.zf) goto L_1062be2b;
  /* 1062bdc5 cmp dword ptr [0x1064e408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bdcc jne 0x1062be0a */
  if (!C.zf) goto L_1062be0a;
  /* 1062bdce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bdd1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1062bdd4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bdd8 je 0x1062bde8 */
  if (C.zf) goto L_1062bde8;
  /* 1062bdda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bdde je 0x1062bdf4 */
  if (C.zf) goto L_1062bdf4;
  /* 1062bde0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bde4 je 0x1062be00 */
  if (C.zf) goto L_1062be00;
  /* 1062bde6 jmp 0x1062be0a */
  goto L_1062be0a;
L_1062bde8:;
  /* 1062bde8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062bdea push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1062bdec call dword ptr [0x10650340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650340))), 0x1062bdf2u);
  /* 1062bdf2 jmp 0x1062be0a */
  goto L_1062be0a;
L_1062bdf4:;
  /* 1062bdf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062bdf6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1062bdf8 call dword ptr [0x10650340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650340))), 0x1062bdfeu);
  /* 1062bdfe jmp 0x1062be0a */
  goto L_1062be0a;
L_1062be00:;
  /* 1062be00 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062be02 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1062be04 call dword ptr [0x10650340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650340))), 0x1062be0au);
L_1062be0a:;
  /* 1062be0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062be0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062be10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062be13 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062be16 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062be19 mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062be20 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1062be27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062be29 jmp 0x1062be44 */
  goto L_1062be44;
L_1062be2b:;
  /* 1062be2b call 0x1062a7b0 */
  push32(0x1062be30u); f_1062a7b0();
  /* 1062be30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1062be36 call 0x1062a7c0 */
  push32(0x1062be3bu); f_1062a7c0();
  /* 1062be3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1062be41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1062be44:;
  /* 1062be44 mov esp, ebp */
  ESP = (EBP);
  /* 1062be46 pop ebp */
  EBP = (pop32());
  /* 1062be47 ret  */
  ESPCHK(0x1062bd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be50 @ 0x1062be50 (102 bytes, 30 insns) */
void f_1062be50(void) {
  FTRACE(0x1062be50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062be50 push ebp */
  push32((uint32_t)(EBP));
  /* 1062be51 mov ebp, esp */
  EBP = (ESP);
  /* 1062be53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062be56 cmp eax, dword ptr [0x1064ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062be5c jae 0x1062be9b */
  if (!C.cf) goto L_1062be9b;
  /* 1062be5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062be61 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062be64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062be67 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062be6a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062be6d mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062be74 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1062be79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1062be7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062be7e je 0x1062be9b */
  if (C.zf) goto L_1062be9b;
  /* 1062be80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062be83 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1062be86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062be89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1062be8c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062be8f mov ecx, dword ptr [edx*4 + 0x1064fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1064fde0)));
  /* 1062be96 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1062be99 jmp 0x1062beb4 */
  goto L_1062beb4;
L_1062be9b:;
  /* 1062be9b call 0x1062a7b0 */
  push32(0x1062bea0u); f_1062a7b0();
  /* 1062bea0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1062bea6 call 0x1062a7c0 */
  push32(0x1062beabu); f_1062a7c0();
  /* 1062beab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1062beb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1062beb4:;
  /* 1062beb4 pop ebp */
  EBP = (pop32());
  /* 1062beb5 ret  */
  ESPCHK(0x1062be50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bec0 @ 0x1062bec0 (260 bytes, 83 insns) */
void f_1062bec0(void) {
  FTRACE(0x1062bec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062bec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062bec1 mov ebp, esp */
  EBP = (ESP);
  /* 1062bec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062bec6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1062beca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062becd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1062bed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062bed2 je 0x1062bedd */
  if (C.zf) goto L_1062bedd;
  /* 1062bed4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1062bed7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1062beda mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1062bedd:;
  /* 1062bedd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062bee0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1062bee6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062bee8 je 0x1062bef2 */
  if (C.zf) goto L_1062bef2;
  /* 1062beea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1062beed or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1062beef mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1062bef2:;
  /* 1062bef2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062bef5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1062befb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062befd je 0x1062bf08 */
  if (C.zf) goto L_1062bf08;
  /* 1062beff mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1062bf02 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1062bf05 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1062bf08:;
  /* 1062bf08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bf0b push eax */
  push32((uint32_t)(EAX));
  /* 1062bf0c call dword ptr [0x106502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502b8))), 0x1062bf12u);
  /* 1062bf12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062bf15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bf19 jne 0x1062bf32 */
  if (!C.zf) goto L_1062bf32;
  /* 1062bf1b call dword ptr [0x106502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ac))), 0x1062bf21u);
  /* 1062bf21 push eax */
  push32((uint32_t)(EAX));
  /* 1062bf22 call 0x1062a710 */
  push32(0x1062bf27u); f_1062a710();
  /* 1062bf27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bf2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062bf2d jmp 0x1062bfc0 */
  goto L_1062bfc0;
L_1062bf32:;
  /* 1062bf32 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bf36 jne 0x1062bf43 */
  if (!C.zf) goto L_1062bf43;
  /* 1062bf38 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1062bf3b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1062bf3e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1062bf41 jmp 0x1062bf52 */
  goto L_1062bf52;
L_1062bf43:;
  /* 1062bf43 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bf47 jne 0x1062bf52 */
  if (!C.zf) goto L_1062bf52;
  /* 1062bf49 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1062bf4c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1062bf4f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1062bf52:;
  /* 1062bf52 call 0x1062bac0 */
  push32(0x1062bf57u); f_1062bac0();
  /* 1062bf57 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062bf5a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bf5e jne 0x1062bf7b */
  if (!C.zf) goto L_1062bf7b;
  /* 1062bf60 call 0x1062a7b0 */
  push32(0x1062bf65u); f_1062a7b0();
  /* 1062bf65 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1062bf6b call 0x1062a7c0 */
  push32(0x1062bf70u); f_1062a7c0();
  /* 1062bf70 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1062bf76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062bf79 jmp 0x1062bfc0 */
  goto L_1062bfc0;
L_1062bf7b:;
  /* 1062bf7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bf7e push eax */
  push32((uint32_t)(EAX));
  /* 1062bf7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062bf82 push ecx */
  push32((uint32_t)(ECX));
  /* 1062bf83 call 0x1062bcb0 */
  push32(0x1062bf88u); f_1062bcb0();
  /* 1062bf88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bf8b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1062bf8e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1062bf91 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1062bf94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062bf97 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062bf9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062bf9d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062bfa0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062bfa3 mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062bfaa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1062bfad mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1062bfb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062bfb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1062bfb5 call 0x1062c060 */
  push32(0x1062bfbau); f_1062c060();
  /* 1062bfba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bfbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1062bfc0:;
  /* 1062bfc0 mov esp, ebp */
  ESP = (EBP);
  /* 1062bfc2 pop ebp */
  EBP = (pop32());
  /* 1062bfc3 ret  */
  ESPCHK(0x1062bec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfd0 @ 0x1062bfd0 (134 bytes, 44 insns) */
void f_1062bfd0(void) {
  FTRACE(0x1062bfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062bfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062bfd1 mov ebp, esp */
  EBP = (ESP);
  /* 1062bfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062bfd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bfd7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062bfda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062bfdd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062bfe0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062bfe3 mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062bfea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062bfec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1062bfef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062bff2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062bff6 jne 0x1062c031 */
  if (!C.zf) goto L_1062c031;
  /* 1062bff8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1062bffa call 0x106262e0 */
  push32(0x1062bfffu); f_106262e0();
  /* 1062bfff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062c005 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c009 jne 0x1062c027 */
  if (!C.zf) goto L_1062c027;
  /* 1062c00b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062c00e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c011 push edx */
  push32((uint32_t)(EDX));
  /* 1062c012 call dword ptr [0x106502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f8))), 0x1062c018u);
  /* 1062c018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062c01b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1062c01e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c021 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062c024 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1062c027:;
  /* 1062c027 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1062c029 call 0x10626380 */
  push32(0x1062c02eu); f_10626380();
  /* 1062c02e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062c031:;
  /* 1062c031 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c034 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062c037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c03a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062c03d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c040 mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062c047 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1062c04b push eax */
  push32((uint32_t)(EAX));
  /* 1062c04c call dword ptr [0x106502fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502fc))), 0x1062c052u);
  /* 1062c052 mov esp, ebp */
  ESP = (EBP);
  /* 1062c054 pop ebp */
  EBP = (pop32());
  /* 1062c055 ret  */
  ESPCHK(0x1062bfd0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1062c060 (38 bytes, 13 insns) */
void f_1062c060(void) {
  FTRACE(0x1062c060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c060 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c061 mov ebp, esp */
  EBP = (ESP);
  /* 1062c063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c066 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062c069 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c06c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062c06f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c072 mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062c079 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1062c07d push eax */
  push32((uint32_t)(EAX));
  /* 1062c07e call dword ptr [0x10650300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650300))), 0x1062c084u);
  /* 1062c084 pop ebp */
  EBP = (pop32());
  /* 1062c085 ret  */
  ESPCHK(0x1062c060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c090 @ 0x1062c090 (218 bytes, 63 insns) */
void f_1062c090(void) {
  FTRACE(0x1062c090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c090 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c091 mov ebp, esp */
  EBP = (ESP);
  /* 1062c093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c096 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062c09d push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c09f call 0x106262e0 */
  push32(0x1062c0a4u); f_106262e0();
  /* 1062c0a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c0a7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1062c0ae jmp 0x1062c0b9 */
  goto L_1062c0b9;
L_1062c0b0:;
  /* 1062c0b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c0b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c0b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1062c0b9:;
  /* 1062c0b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c0bc cmp ecx, dword ptr [0x1064fae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064fae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c0c2 jge 0x1062c159 */
  if ((C.sf==C.of)) goto L_1062c159;
  /* 1062c0c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c0cb mov eax, dword ptr [0x1064e7a0] */
  EAX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c0d0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c0d4 je 0x1062c154 */
  if (C.zf) goto L_1062c154;
  /* 1062c0d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c0d9 mov edx, dword ptr [0x1064e7a0] */
  EDX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c0df mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1062c0e2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1062c0e5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1062c0eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062c0ed je 0x1062c111 */
  if (C.zf) goto L_1062c111;
  /* 1062c0ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c0f2 mov eax, dword ptr [0x1064e7a0] */
  EAX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c0f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1062c0fa push ecx */
  push32((uint32_t)(ECX));
  /* 1062c0fb call 0x1062ce80 */
  push32(0x1062c100u); f_1062ce80();
  /* 1062c100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c103 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c106 je 0x1062c111 */
  if (C.zf) goto L_1062c111;
  /* 1062c108 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062c10b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c10e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1062c111:;
  /* 1062c111 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c115 jl 0x1062c154 */
  if ((C.sf!=C.of)) goto L_1062c154;
  /* 1062c117 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c11a mov ecx, dword ptr [0x1064e7a0] */
  ECX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c120 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1062c123 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c126 push edx */
  push32((uint32_t)(EDX));
  /* 1062c127 call dword ptr [0x106502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c0))), 0x1062c12du);
  /* 1062c12d push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c12f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c132 mov ecx, dword ptr [0x1064e7a0] */
  ECX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c138 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1062c13b push edx */
  push32((uint32_t)(EDX));
  /* 1062c13c call 0x10623370 */
  push32(0x1062c141u); f_10623370();
  /* 1062c141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c144 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c147 mov ecx, dword ptr [0x1064e7a0] */
  ECX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c14d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1062c154:;
  /* 1062c154 jmp 0x1062c0b0 */
  goto L_1062c0b0;
L_1062c159:;
  /* 1062c159 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c15b call 0x10626380 */
  push32(0x1062c160u); f_10626380();
  /* 1062c160 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c163 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062c166 mov esp, ebp */
  ESP = (EBP);
  /* 1062c168 pop ebp */
  EBP = (pop32());
  /* 1062c169 ret  */
  ESPCHK(0x1062c090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c170 @ 0x1062c170 (68 bytes, 26 insns) */
void f_1062c170(void) {
  FTRACE(0x1062c170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c170 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c171 mov ebp, esp */
  EBP = (ESP);
  /* 1062c173 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c174 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c178 jne 0x1062c186 */
  if (!C.zf) goto L_1062c186;
  /* 1062c17a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062c17c call 0x1062c2e0 */
  push32(0x1062c181u); f_1062c2e0();
  /* 1062c181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c184 jmp 0x1062c1b0 */
  goto L_1062c1b0;
L_1062c186:;
  /* 1062c186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c189 push eax */
  push32((uint32_t)(EAX));
  /* 1062c18a call 0x1062b6f0 */
  push32(0x1062c18fu); f_1062b6f0();
  /* 1062c18f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c195 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c196 call 0x1062c1c0 */
  push32(0x1062c19bu); f_1062c1c0();
  /* 1062c19b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c19e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062c1a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c1a4 push edx */
  push32((uint32_t)(EDX));
  /* 1062c1a5 call 0x1062b760 */
  push32(0x1062c1aau); f_1062b760();
  /* 1062c1aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c1ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1062c1b0:;
  /* 1062c1b0 mov esp, ebp */
  ESP = (EBP);
  /* 1062c1b2 pop ebp */
  EBP = (pop32());
  /* 1062c1b3 ret  */
  ESPCHK(0x1062c170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1c0 @ 0x1062c1c0 (65 bytes, 26 insns) */
void f_1062c1c0(void) {
  FTRACE(0x1062c1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1062c1c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c1c6 push eax */
  push32((uint32_t)(EAX));
  /* 1062c1c7 call 0x1062c210 */
  push32(0x1062c1ccu); f_1062c210();
  /* 1062c1cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c1cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062c1d1 je 0x1062c1d8 */
  if (C.zf) goto L_1062c1d8;
  /* 1062c1d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062c1d6 jmp 0x1062c1ff */
  goto L_1062c1ff;
L_1062c1d8:;
  /* 1062c1d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c1db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062c1de and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1062c1e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062c1e6 je 0x1062c1fd */
  if (C.zf) goto L_1062c1fd;
  /* 1062c1e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c1eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062c1ee push ecx */
  push32((uint32_t)(ECX));
  /* 1062c1ef call 0x1062cfd0 */
  push32(0x1062c1f4u); f_1062cfd0();
  /* 1062c1f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c1f7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062c1f9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c1fb jmp 0x1062c1ff */
  goto L_1062c1ff;
L_1062c1fd:;
  /* 1062c1fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062c1ff:;
  /* 1062c1ff pop ebp */
  EBP = (pop32());
  /* 1062c200 ret  */
  ESPCHK(0x1062c1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c210 @ 0x1062c210 (183 bytes, 62 insns) */
void f_1062c210(void) {
  FTRACE(0x1062c210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c210 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c211 mov ebp, esp */
  EBP = (ESP);
  /* 1062c213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c216 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062c21d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c220 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062c223 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c226 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062c229 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1062c22c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c22f jne 0x1062c2ab */
  if (!C.zf) goto L_1062c2ab;
  /* 1062c231 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c234 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1062c237 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1062c23d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062c23f je 0x1062c2ab */
  if (C.zf) goto L_1062c2ab;
  /* 1062c241 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c244 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c247 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1062c249 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c24c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062c24f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c253 jle 0x1062c2ab */
  if ((C.zf||C.sf!=C.of)) goto L_1062c2ab;
  /* 1062c255 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c258 push edx */
  push32((uint32_t)(EDX));
  /* 1062c259 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c25c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1062c25f push ecx */
  push32((uint32_t)(ECX));
  /* 1062c260 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c263 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1062c266 push eax */
  push32((uint32_t)(EAX));
  /* 1062c267 call 0x1062b180 */
  push32(0x1062c26cu); f_1062b180();
  /* 1062c26c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c26f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c272 jne 0x1062c295 */
  if (!C.zf) goto L_1062c295;
  /* 1062c274 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c277 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062c27a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1062c280 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062c282 je 0x1062c293 */
  if (C.zf) goto L_1062c293;
  /* 1062c284 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c287 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1062c28a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1062c28d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c290 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1062c293:;
  /* 1062c293 jmp 0x1062c2ab */
  goto L_1062c2ab;
L_1062c295:;
  /* 1062c295 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c298 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1062c29b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1062c29e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c2a1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1062c2a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1062c2ab:;
  /* 1062c2ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c2ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c2b1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1062c2b4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1062c2b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c2b9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1062c2c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062c2c3 mov esp, ebp */
  ESP = (EBP);
  /* 1062c2c5 pop ebp */
  EBP = (pop32());
  /* 1062c2c6 ret  */
  ESPCHK(0x1062c210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2d0 @ 0x1062c2d0 (15 bytes, 7 insns) */
void f_1062c2d0(void) {
  FTRACE(0x1062c2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1062c2d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062c2d5 call 0x1062c2e0 */
  push32(0x1062c2dau); f_1062c2e0();
  /* 1062c2da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c2dd pop ebp */
  EBP = (pop32());
  /* 1062c2de ret  */
  ESPCHK(0x1062c2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2e0 @ 0x1062c2e0 (319 bytes, 94 insns) */
void f_1062c2e0(void) {
  FTRACE(0x1062c2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1062c2e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c2e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062c2ed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062c2f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c2f6 call 0x106262e0 */
  push32(0x1062c2fbu); f_106262e0();
  /* 1062c2fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c2fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1062c305 jmp 0x1062c310 */
  goto L_1062c310;
L_1062c307:;
  /* 1062c307 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c30a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c30d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1062c310:;
  /* 1062c310 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c313 cmp ecx, dword ptr [0x1064fae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064fae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c319 jge 0x1062c403 */
  if ((C.sf==C.of)) goto L_1062c403;
  /* 1062c31f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c322 mov eax, dword ptr [0x1064e7a0] */
  EAX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c327 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c32b je 0x1062c3fe */
  if (C.zf) goto L_1062c3fe;
  /* 1062c331 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c334 mov edx, dword ptr [0x1064e7a0] */
  EDX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c33a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1062c33d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1062c340 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1062c346 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062c348 je 0x1062c3fe */
  if (C.zf) goto L_1062c3fe;
  /* 1062c34e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c351 mov eax, dword ptr [0x1064e7a0] */
  EAX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c356 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1062c359 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c35a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c35d push edx */
  push32((uint32_t)(EDX));
  /* 1062c35e call 0x1062b730 */
  push32(0x1062c363u); f_1062b730();
  /* 1062c363 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c366 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c369 mov ecx, dword ptr [0x1064e7a0] */
  ECX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c36f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1062c372 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1062c375 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1062c37a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062c37c je 0x1062c3e5 */
  if (C.zf) goto L_1062c3e5;
  /* 1062c37e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c382 jne 0x1062c3a9 */
  if (!C.zf) goto L_1062c3a9;
  /* 1062c384 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c387 mov edx, dword ptr [0x1064e7a0] */
  EDX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c38d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1062c390 push eax */
  push32((uint32_t)(EAX));
  /* 1062c391 call 0x1062c1c0 */
  push32(0x1062c396u); f_1062c1c0();
  /* 1062c396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c399 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c39c je 0x1062c3a7 */
  if (C.zf) goto L_1062c3a7;
  /* 1062c39e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062c3a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c3a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1062c3a7:;
  /* 1062c3a7 jmp 0x1062c3e5 */
  goto L_1062c3e5;
L_1062c3a9:;
  /* 1062c3a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c3ad jne 0x1062c3e5 */
  if (!C.zf) goto L_1062c3e5;
  /* 1062c3af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c3b2 mov eax, dword ptr [0x1064e7a0] */
  EAX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c3b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1062c3ba mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062c3bd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1062c3c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062c3c2 je 0x1062c3e5 */
  if (C.zf) goto L_1062c3e5;
  /* 1062c3c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c3c7 mov ecx, dword ptr [0x1064e7a0] */
  ECX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c3cd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1062c3d0 push edx */
  push32((uint32_t)(EDX));
  /* 1062c3d1 call 0x1062c1c0 */
  push32(0x1062c3d6u); f_1062c1c0();
  /* 1062c3d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c3d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c3dc jne 0x1062c3e5 */
  if (!C.zf) goto L_1062c3e5;
  /* 1062c3de mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1062c3e5:;
  /* 1062c3e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c3e8 mov ecx, dword ptr [0x1064e7a0] */
  ECX = (r32((uint32_t)(0x1064e7a0)));
  /* 1062c3ee mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1062c3f1 push edx */
  push32((uint32_t)(EDX));
  /* 1062c3f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c3f5 push eax */
  push32((uint32_t)(EAX));
  /* 1062c3f6 call 0x1062b7a0 */
  push32(0x1062c3fbu); f_1062b7a0();
  /* 1062c3fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062c3fe:;
  /* 1062c3fe jmp 0x1062c307 */
  goto L_1062c307;
L_1062c403:;
  /* 1062c403 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c405 call 0x10626380 */
  push32(0x1062c40au); f_10626380();
  /* 1062c40a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c40d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c411 jne 0x1062c418 */
  if (!C.zf) goto L_1062c418;
  /* 1062c413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062c416 jmp 0x1062c41b */
  goto L_1062c41b;
L_1062c418:;
  /* 1062c418 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1062c41b:;
  /* 1062c41b mov esp, ebp */
  ESP = (EBP);
  /* 1062c41d pop ebp */
  EBP = (pop32());
  /* 1062c41e ret  */
  ESPCHK(0x1062c2e0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1062c420 (15 bytes, 7 insns) */
void f_1062c420(void) {
  FTRACE(0x1062c420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c420 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c421 mov ebp, esp */
  EBP = (ESP);
  /* 1062c423 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c425 call 0x10621850 */
  push32(0x1062c42au); f_10621850();
  /* 1062c42a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c42d pop ebp */
  EBP = (pop32());
  /* 1062c42e ret  */
  ESPCHK(0x1062c420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x1062c430 (1007 bytes, 269 insns) */
void f_1062c430(void) {
  FTRACE(0x1062c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c430 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c431 mov ebp, esp */
  EBP = (ESP);
  /* 1062c433 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c439 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c43d jl 0x1062c445 */
  if ((C.sf!=C.of)) goto L_1062c445;
  /* 1062c43f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c443 jle 0x1062c44c */
  if ((C.zf||C.sf!=C.of)) goto L_1062c44c;
L_1062c445:;
  /* 1062c445 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062c447 jmp 0x1062c81b */
  goto L_1062c81b;
L_1062c44c:;
  /* 1062c44c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1062c44e call 0x106262e0 */
  push32(0x1062c453u); f_106262e0();
  /* 1062c453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c456 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1062c45d mov eax, dword ptr [0x1064e78c] */
  EAX = (r32((uint32_t)(0x1064e78c)));
  /* 1062c462 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c465 mov dword ptr [0x1064e78c], eax */
  w32((uint32_t)(0x1064e78c), (EAX));
L_1062c46a:;
  /* 1062c46a cmp dword ptr [0x1064e79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c471 je 0x1062c47d */
  if (C.zf) goto L_1062c47d;
  /* 1062c473 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062c475 call dword ptr [0x10650344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650344))), 0x1062c47bu);
  /* 1062c47b jmp 0x1062c46a */
  goto L_1062c46a;
L_1062c47d:;
  /* 1062c47d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c481 je 0x1062c4c1 */
  if (C.zf) goto L_1062c4c1;
  /* 1062c483 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c487 je 0x1062c4a1 */
  if (C.zf) goto L_1062c4a1;
  /* 1062c489 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062c48c push ecx */
  push32((uint32_t)(ECX));
  /* 1062c48d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c490 push edx */
  push32((uint32_t)(EDX));
  /* 1062c491 call 0x1062c820 */
  push32(0x1062c496u); f_1062c820();
  /* 1062c496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c499 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1062c49f jmp 0x1062c4b3 */
  goto L_1062c4b3;
L_1062c4a1:;
  /* 1062c4a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c4a4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c4a7 mov ecx, dword ptr [eax + 0x1064d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1064d4dc)));
  /* 1062c4ad mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1062c4b3:;
  /* 1062c4b3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1062c4b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1062c4bc jmp 0x1062c7fb */
  goto L_1062c7fb;
L_1062c4c1:;
  /* 1062c4c1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1062c4c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1062c4cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c4d3 je 0x1062c7f3 */
  if (C.zf) goto L_1062c7f3;
  /* 1062c4d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062c4dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062c4df cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c4e2 jne 0x1062c704 */
  if (!C.zf) goto L_1062c704;
  /* 1062c4e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062c4eb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1062c4ef cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c4f2 jne 0x1062c704 */
  if (!C.zf) goto L_1062c704;
  /* 1062c4f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062c4fb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1062c4ff cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c502 jne 0x1062c704 */
  if (!C.zf) goto L_1062c704;
  /* 1062c508 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062c50b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1062c511:;
  /* 1062c511 push 0x10649fcc */
  push32((uint32_t)(0x10649fccu));
  /* 1062c516 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1062c51c push ecx */
  push32((uint32_t)(ECX));
  /* 1062c51d call 0x1062e680 */
  push32(0x1062c522u); f_1062e680();
  /* 1062c522 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c525 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1062c52b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c532 je 0x1062c55d */
  if (C.zf) goto L_1062c55d;
  /* 1062c534 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1062c53a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c540 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1062c546 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c54d je 0x1062c55d */
  if (C.zf) goto L_1062c55d;
  /* 1062c54f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1062c555 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062c558 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c55b jne 0x1062c583 */
  if (!C.zf) goto L_1062c583;
L_1062c55d:;
  /* 1062c55d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c561 je 0x1062c57c */
  if (C.zf) goto L_1062c57c;
  /* 1062c563 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1062c565 call 0x10626380 */
  push32(0x1062c56au); f_10626380();
  /* 1062c56a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c56d mov edx, dword ptr [0x1064e78c] */
  EDX = (r32((uint32_t)(0x1064e78c)));
  /* 1062c573 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c576 mov dword ptr [0x1064e78c], edx */
  w32((uint32_t)(0x1064e78c), (EDX));
L_1062c57c:;
  /* 1062c57c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062c57e jmp 0x1062c81b */
  goto L_1062c81b;
L_1062c583:;
  /* 1062c583 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1062c58a jmp 0x1062c595 */
  goto L_1062c595;
L_1062c58c:;
  /* 1062c58c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062c58f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c592 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1062c595:;
  /* 1062c595 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c599 jg 0x1062c5e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1062c5e3;
  /* 1062c59b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1062c5a1 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c5a2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1062c5a8 push edx */
  push32((uint32_t)(EDX));
  /* 1062c5a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062c5ac imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c5af mov ecx, dword ptr [eax + 0x1064d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1064d4d8)));
  /* 1062c5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c5b6 call 0x1062e640 */
  push32(0x1062c5bbu); f_1062e640();
  /* 1062c5bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c5be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062c5c0 jne 0x1062c5e1 */
  if (!C.zf) goto L_1062c5e1;
  /* 1062c5c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062c5c5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c5c8 mov eax, dword ptr [edx + 0x1064d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1064d4d8)));
  /* 1062c5ce push eax */
  push32((uint32_t)(EAX));
  /* 1062c5cf call 0x10625710 */
  push32(0x1062c5d4u); f_10625710();
  /* 1062c5d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c5d7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c5dd jne 0x1062c5e1 */
  if (!C.zf) goto L_1062c5e1;
  /* 1062c5df jmp 0x1062c5e3 */
  goto L_1062c5e3;
L_1062c5e1:;
  /* 1062c5e1 jmp 0x1062c58c */
  goto L_1062c58c;
L_1062c5e3:;
  /* 1062c5e3 push 0x10649fc8 */
  push32((uint32_t)(0x10649fc8u));
  /* 1062c5e8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1062c5ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c5f1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1062c5f7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1062c5fd push edx */
  push32((uint32_t)(EDX));
  /* 1062c5fe call 0x1062e600 */
  push32(0x1062c603u); f_1062e600();
  /* 1062c603 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c606 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1062c60c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c613 jne 0x1062c649 */
  if (!C.zf) goto L_1062c649;
  /* 1062c615 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1062c61b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062c61e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c621 je 0x1062c649 */
  if (C.zf) goto L_1062c649;
  /* 1062c623 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c627 je 0x1062c642 */
  if (C.zf) goto L_1062c642;
  /* 1062c629 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1062c62b call 0x10626380 */
  push32(0x1062c630u); f_10626380();
  /* 1062c630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c633 mov edx, dword ptr [0x1064e78c] */
  EDX = (r32((uint32_t)(0x1064e78c)));
  /* 1062c639 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c63c mov dword ptr [0x1064e78c], edx */
  w32((uint32_t)(0x1064e78c), (EDX));
L_1062c642:;
  /* 1062c642 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062c644 jmp 0x1062c81b */
  goto L_1062c81b;
L_1062c649:;
  /* 1062c649 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c64d jg 0x1062c69a */
  if ((!C.zf&&C.sf==C.of)) goto L_1062c69a;
  /* 1062c64f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1062c655 push eax */
  push32((uint32_t)(EAX));
  /* 1062c656 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1062c65c push ecx */
  push32((uint32_t)(ECX));
  /* 1062c65d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1062c663 push edx */
  push32((uint32_t)(EDX));
  /* 1062c664 call 0x10626100 */
  push32(0x1062c669u); f_10626100();
  /* 1062c669 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c66c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1062c672 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1062c67a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1062c680 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c681 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062c684 push edx */
  push32((uint32_t)(EDX));
  /* 1062c685 call 0x1062c820 */
  push32(0x1062c68au); f_1062c820();
  /* 1062c68a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062c68f je 0x1062c69a */
  if (C.zf) goto L_1062c69a;
  /* 1062c691 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c694 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c697 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1062c69a:;
  /* 1062c69a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1062c6a0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c6a6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1062c6ac mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1062c6b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1062c6b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062c6b7 je 0x1062c6c8 */
  if (C.zf) goto L_1062c6c8;
  /* 1062c6b9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1062c6bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c6c2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1062c6c8:;
  /* 1062c6c8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1062c6ce movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1062c6d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062c6d3 jne 0x1062c511 */
  if (!C.zf) goto L_1062c511;
  /* 1062c6d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c6dd je 0x1062c6ec */
  if (C.zf) goto L_1062c6ec;
  /* 1062c6df call 0x1062c9c0 */
  push32(0x1062c6e4u); f_1062c9c0();
  /* 1062c6e4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1062c6ea jmp 0x1062c6f6 */
  goto L_1062c6f6;
L_1062c6ec:;
  /* 1062c6ec mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1062c6f6:;
  /* 1062c6f6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1062c6fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062c6ff jmp 0x1062c7f1 */
  goto L_1062c7f1;
L_1062c704:;
  /* 1062c704 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c707 push edx */
  push32((uint32_t)(EDX));
  /* 1062c708 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062c70a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062c70c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1062c712 push eax */
  push32((uint32_t)(EAX));
  /* 1062c713 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062c716 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c717 call 0x1062cac0 */
  push32(0x1062c71cu); f_1062cac0();
  /* 1062c71c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c71f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062c722 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c726 je 0x1062c7f1 */
  if (C.zf) goto L_1062c7f1;
  /* 1062c72c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062c733 jmp 0x1062c73e */
  goto L_1062c73e;
L_1062c735:;
  /* 1062c735 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062c738 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c73b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1062c73e:;
  /* 1062c73e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c742 jg 0x1062c7a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1062c7a0;
  /* 1062c744 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c748 je 0x1062c79e */
  if (C.zf) goto L_1062c79e;
  /* 1062c74a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062c74d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c750 mov ecx, dword ptr [eax + 0x1064d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1064d4dc)));
  /* 1062c756 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c757 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1062c75d push edx */
  push32((uint32_t)(EDX));
  /* 1062c75e call 0x1062e570 */
  push32(0x1062c763u); f_1062e570();
  /* 1062c763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062c768 je 0x1062c795 */
  if (C.zf) goto L_1062c795;
  /* 1062c76a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1062c770 push eax */
  push32((uint32_t)(EAX));
  /* 1062c771 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062c774 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c775 call 0x1062c820 */
  push32(0x1062c77au); f_1062c820();
  /* 1062c77a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c77d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062c77f je 0x1062c78c */
  if (C.zf) goto L_1062c78c;
  /* 1062c781 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c784 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c787 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1062c78a jmp 0x1062c793 */
  goto L_1062c793;
L_1062c78c:;
  /* 1062c78c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1062c793:;
  /* 1062c793 jmp 0x1062c79e */
  goto L_1062c79e;
L_1062c795:;
  /* 1062c795 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c798 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c79b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1062c79e:;
  /* 1062c79e jmp 0x1062c735 */
  goto L_1062c735;
L_1062c7a0:;
  /* 1062c7a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c7a4 je 0x1062c7cb */
  if (C.zf) goto L_1062c7cb;
  /* 1062c7a6 call 0x1062c9c0 */
  push32(0x1062c7abu); f_1062c9c0();
  /* 1062c7ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062c7ae push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c7b0 mov ecx, dword ptr [0x1064d4dc] */
  ECX = (r32((uint32_t)(0x1064d4dc)));
  /* 1062c7b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c7b7 call 0x10623370 */
  push32(0x1062c7bcu); f_10623370();
  /* 1062c7bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c7bf mov dword ptr [0x1064d4dc], 0 */
  w32((uint32_t)(0x1064d4dc), (0x0u));
  /* 1062c7c9 jmp 0x1062c7f1 */
  goto L_1062c7f1;
L_1062c7cb:;
  /* 1062c7cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c7cf je 0x1062c7de */
  if (C.zf) goto L_1062c7de;
  /* 1062c7d1 call 0x1062c9c0 */
  push32(0x1062c7d6u); f_1062c9c0();
  /* 1062c7d6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1062c7dc jmp 0x1062c7e8 */
  goto L_1062c7e8;
L_1062c7de:;
  /* 1062c7de mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1062c7e8:;
  /* 1062c7e8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1062c7ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1062c7f1:;
  /* 1062c7f1 jmp 0x1062c7fb */
  goto L_1062c7fb;
L_1062c7f3:;
  /* 1062c7f3 call 0x1062c9c0 */
  push32(0x1062c7f8u); f_1062c9c0();
  /* 1062c7f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1062c7fb:;
  /* 1062c7fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c7ff je 0x1062c818 */
  if (C.zf) goto L_1062c818;
  /* 1062c801 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1062c803 call 0x10626380 */
  push32(0x1062c808u); f_10626380();
  /* 1062c808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c80b mov eax, dword ptr [0x1064e78c] */
  EAX = (r32((uint32_t)(0x1064e78c)));
  /* 1062c810 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c813 mov dword ptr [0x1064e78c], eax */
  w32((uint32_t)(0x1064e78c), (EAX));
L_1062c818:;
  /* 1062c818 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1062c81b:;
  /* 1062c81b mov esp, ebp */
  ESP = (EBP);
  /* 1062c81d pop ebp */
  EBP = (pop32());
  /* 1062c81e ret  */
  ESPCHK(0x1062c430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x1062c820 (403 bytes, 117 insns) */
void f_1062c820(void) {
  FTRACE(0x1062c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c820 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c821 mov ebp, esp */
  EBP = (ESP);
  /* 1062c823 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c82c push eax */
  push32((uint32_t)(EAX));
  /* 1062c82d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1062c833 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c834 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1062c83a push edx */
  push32((uint32_t)(EDX));
  /* 1062c83b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1062c841 push eax */
  push32((uint32_t)(EAX));
  /* 1062c842 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062c845 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c846 call 0x1062cac0 */
  push32(0x1062c84bu); f_1062cac0();
  /* 1062c84b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c84e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062c850 jne 0x1062c859 */
  if (!C.zf) goto L_1062c859;
  /* 1062c852 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062c854 jmp 0x1062c9af */
  goto L_1062c9af;
L_1062c859:;
  /* 1062c859 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1062c85e push 0x10649fd0 */
  push32((uint32_t)(0x10649fd0u));
  /* 1062c863 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c865 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1062c86b push edx */
  push32((uint32_t)(EDX));
  /* 1062c86c call 0x10625710 */
  push32(0x1062c871u); f_10625710();
  /* 1062c871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c874 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c877 push eax */
  push32((uint32_t)(EAX));
  /* 1062c878 call 0x106228e0 */
  push32(0x1062c87du); f_106228e0();
  /* 1062c87d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c880 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062c883 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c887 jne 0x1062c890 */
  if (!C.zf) goto L_1062c890;
  /* 1062c889 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062c88b jmp 0x1062c9af */
  goto L_1062c9af;
L_1062c890:;
  /* 1062c890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c893 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c896 mov ecx, dword ptr [eax + 0x1064d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1064d4dc)));
  /* 1062c89c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062c89f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c8a2 mov eax, dword ptr [edx*4 + 0x1064e608] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1064e608)));
  /* 1062c8a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062c8ac push 6 */
  push32((uint32_t)(0x6u));
  /* 1062c8ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c8b1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c8b4 add ecx, 0x1064e658 */
  { uint32_t _a=(ECX),_b=(0x1064e658u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c8ba push ecx */
  push32((uint32_t)(ECX));
  /* 1062c8bb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1062c8be push edx */
  push32((uint32_t)(EDX));
  /* 1062c8bf call 0x106291c0 */
  push32(0x1062c8c4u); f_106291c0();
  /* 1062c8c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c8c7 mov eax, dword ptr [0x1064e620] */
  EAX = (r32((uint32_t)(0x1064e620)));
  /* 1062c8cc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1062c8cf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1062c8d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1062c8d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c8d9 push edx */
  push32((uint32_t)(EDX));
  /* 1062c8da call 0x10625890 */
  push32(0x1062c8dfu); f_10625890();
  /* 1062c8df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c8e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c8e5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c8e8 mov dword ptr [ecx + 0x1064d4dc], eax */
  w32((uint32_t)(ECX + 0x1064d4dc), (EAX));
  /* 1062c8ee mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1062c8f4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1062c8fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c8fd mov dword ptr [eax*4 + 0x1064e608], edx */
  w32((uint32_t)(EAX*4 + 0x1064e608), (EDX));
  /* 1062c904 push 6 */
  push32((uint32_t)(0x6u));
  /* 1062c906 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1062c90c push ecx */
  push32((uint32_t)(ECX));
  /* 1062c90d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c910 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c913 add edx, 0x1064e658 */
  { uint32_t _a=(EDX),_b=(0x1064e658u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c919 push edx */
  push32((uint32_t)(EDX));
  /* 1062c91a call 0x106291c0 */
  push32(0x1062c91fu); f_106291c0();
  /* 1062c91f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c922 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c926 jne 0x1062c933 */
  if (!C.zf) goto L_1062c933;
  /* 1062c928 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1062c92e mov dword ptr [0x1064e620], eax */
  w32((uint32_t)(0x1064e620), (EAX));
L_1062c933:;
  /* 1062c933 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c937 jne 0x1062c945 */
  if (!C.zf) goto L_1062c945;
  /* 1062c939 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1062c93f mov dword ptr [0x1064e624], ecx */
  w32((uint32_t)(0x1064e624), (ECX));
L_1062c945:;
  /* 1062c945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c948 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c94b call dword ptr [edx + 0x1064d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1064d4e0))), 0x1062c951u);
  /* 1062c951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062c953 je 0x1062c98c */
  if (C.zf) goto L_1062c98c;
  /* 1062c955 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c958 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c95b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c95e mov dword ptr [eax + 0x1064d4dc], ecx */
  w32((uint32_t)(EAX + 0x1064d4dc), (ECX));
  /* 1062c964 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c966 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062c969 push edx */
  push32((uint32_t)(EDX));
  /* 1062c96a call 0x10623370 */
  push32(0x1062c96fu); f_10623370();
  /* 1062c96f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c975 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062c978 mov dword ptr [eax*4 + 0x1064e608], ecx */
  w32((uint32_t)(EAX*4 + 0x1064e608), (ECX));
  /* 1062c97f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062c982 mov dword ptr [0x1064e620], edx */
  w32((uint32_t)(0x1064e620), (EDX));
  /* 1062c988 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062c98a jmp 0x1062c9af */
  goto L_1062c9af;
L_1062c98c:;
  /* 1062c98c cmp dword ptr [ebp - 0xc], 0x1064d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1064d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c993 je 0x1062c9a3 */
  if (C.zf) goto L_1062c9a3;
  /* 1062c995 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c997 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062c99a push eax */
  push32((uint32_t)(EAX));
  /* 1062c99b call 0x10623370 */
  push32(0x1062c9a0u); f_10623370();
  /* 1062c9a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062c9a3:;
  /* 1062c9a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062c9a6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062c9a9 mov eax, dword ptr [ecx + 0x1064d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1064d4dc)));
L_1062c9af:;
  /* 1062c9af mov esp, ebp */
  ESP = (EBP);
  /* 1062c9b1 pop ebp */
  EBP = (pop32());
  /* 1062c9b2 ret  */
  ESPCHK(0x1062c820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x1062c9c0 (256 bytes, 72 insns) */
void f_1062c9c0(void) {
  FTRACE(0x1062c9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062c9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062c9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1062c9c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062c9c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1062c9cd cmp dword ptr [0x1064d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062c9d4 jne 0x1062c9f4 */
  if (!C.zf) goto L_1062c9f4;
  /* 1062c9d6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1062c9db push 0x10649fd0 */
  push32((uint32_t)(0x10649fd0u));
  /* 1062c9e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062c9e2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1062c9e7 call 0x106228e0 */
  push32(0x1062c9ecu); f_106228e0();
  /* 1062c9ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062c9ef mov dword ptr [0x1064d4dc], eax */
  w32((uint32_t)(0x1064d4dc), (EAX));
L_1062c9f4:;
  /* 1062c9f4 mov eax, dword ptr [0x1064d4dc] */
  EAX = (r32((uint32_t)(0x1064d4dc)));
  /* 1062c9f9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1062c9fc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1062ca03 jmp 0x1062ca0e */
  goto L_1062ca0e;
L_1062ca05:;
  /* 1062ca05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ca08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ca0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1062ca0e:;
  /* 1062ca0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ca11 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062ca14 mov eax, dword ptr [edx + 0x1064d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1064d4dc)));
  /* 1062ca1a push eax */
  push32((uint32_t)(EAX));
  /* 1062ca1b push 0x10649fdc */
  push32((uint32_t)(0x10649fdcu));
  /* 1062ca20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ca23 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062ca26 mov edx, dword ptr [ecx + 0x1064d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1064d4d8)));
  /* 1062ca2c push edx */
  push32((uint32_t)(EDX));
  /* 1062ca2d push 3 */
  push32((uint32_t)(0x3u));
  /* 1062ca2f mov eax, dword ptr [0x1064d4dc] */
  EAX = (r32((uint32_t)(0x1064d4dc)));
  /* 1062ca34 push eax */
  push32((uint32_t)(EAX));
  /* 1062ca35 call 0x1062cc60 */
  push32(0x1062ca3au); f_1062cc60();
  /* 1062ca3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ca3d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ca41 jge 0x1062ca89 */
  if ((C.sf==C.of)) goto L_1062ca89;
  /* 1062ca43 push 0x10649fc8 */
  push32((uint32_t)(0x10649fc8u));
  /* 1062ca48 mov ecx, dword ptr [0x1064d4dc] */
  ECX = (r32((uint32_t)(0x1064d4dc)));
  /* 1062ca4e push ecx */
  push32((uint32_t)(ECX));
  /* 1062ca4f call 0x106258a0 */
  push32(0x1062ca54u); f_106258a0();
  /* 1062ca54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ca57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ca5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ca5d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062ca60 mov eax, dword ptr [edx + 0x1064d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1064d4dc)));
  /* 1062ca66 push eax */
  push32((uint32_t)(EAX));
  /* 1062ca67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ca6a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062ca6d mov edx, dword ptr [ecx + 0x1064d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1064d4dc)));
  /* 1062ca73 push edx */
  push32((uint32_t)(EDX));
  /* 1062ca74 call 0x1062e570 */
  push32(0x1062ca79u); f_1062e570();
  /* 1062ca79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ca7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ca7e je 0x1062ca87 */
  if (C.zf) goto L_1062ca87;
  /* 1062ca80 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1062ca87:;
  /* 1062ca87 jmp 0x1062cab7 */
  goto L_1062cab7;
L_1062ca89:;
  /* 1062ca89 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ca8d jne 0x1062ca96 */
  if (!C.zf) goto L_1062ca96;
  /* 1062ca8f mov eax, dword ptr [0x1064d4dc] */
  EAX = (r32((uint32_t)(0x1064d4dc)));
  /* 1062ca94 jmp 0x1062cabc */
  goto L_1062cabc;
L_1062ca96:;
  /* 1062ca96 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062ca98 mov eax, dword ptr [0x1064d4dc] */
  EAX = (r32((uint32_t)(0x1064d4dc)));
  /* 1062ca9d push eax */
  push32((uint32_t)(EAX));
  /* 1062ca9e call 0x10623370 */
  push32(0x1062caa3u); f_10623370();
  /* 1062caa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062caa6 mov dword ptr [0x1064d4dc], 0 */
  w32((uint32_t)(0x1064d4dc), (0x0u));
  /* 1062cab0 mov eax, dword ptr [0x1064d4f4] */
  EAX = (r32((uint32_t)(0x1064d4f4)));
  /* 1062cab5 jmp 0x1062cabc */
  goto L_1062cabc;
L_1062cab7:;
  /* 1062cab7 jmp 0x1062ca05 */
  goto L_1062ca05;
L_1062cabc:;
  /* 1062cabc mov esp, ebp */
  ESP = (EBP);
  /* 1062cabe pop ebp */
  EBP = (pop32());
  /* 1062cabf ret  */
  ESPCHK(0x1062c9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cac0 @ 0x1062cac0 (388 bytes, 115 insns) */
void f_1062cac0(void) {
  FTRACE(0x1062cac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062cac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062cac1 mov ebp, esp */
  EBP = (ESP);
  /* 1062cac3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062cac9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cacd jne 0x1062cad6 */
  if (!C.zf) goto L_1062cad6;
  /* 1062cacf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062cad1 jmp 0x1062cc40 */
  goto L_1062cc40;
L_1062cad6:;
  /* 1062cad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cad9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062cadc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cadf jne 0x1062cb30 */
  if (!C.zf) goto L_1062cb30;
  /* 1062cae1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cae4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1062cae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062caea jne 0x1062cb30 */
  if (!C.zf) goto L_1062cb30;
  /* 1062caec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062caef mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1062caf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062caf5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1062caf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cafd je 0x1062cb19 */
  if (C.zf) goto L_1062cb19;
  /* 1062caff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062cb02 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1062cb07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062cb0a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1062cb10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062cb13 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1062cb19:;
  /* 1062cb19 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cb1d je 0x1062cb28 */
  if (C.zf) goto L_1062cb28;
  /* 1062cb1f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062cb22 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1062cb28:;
  /* 1062cb28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062cb2b jmp 0x1062cc40 */
  goto L_1062cc40;
L_1062cb30:;
  /* 1062cb30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cb33 push ecx */
  push32((uint32_t)(ECX));
  /* 1062cb34 push 0x1064d450 */
  push32((uint32_t)(0x1064d450u));
  /* 1062cb39 call 0x1062e570 */
  push32(0x1062cb3eu); f_1062e570();
  /* 1062cb3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cb41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062cb43 je 0x1062cbf8 */
  if (C.zf) goto L_1062cbf8;
  /* 1062cb49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cb4c push edx */
  push32((uint32_t)(EDX));
  /* 1062cb4d push 0x1064d3cc */
  push32((uint32_t)(0x1064d3ccu));
  /* 1062cb52 call 0x1062e570 */
  push32(0x1062cb57u); f_1062e570();
  /* 1062cb57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cb5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062cb5c je 0x1062cbf8 */
  if (C.zf) goto L_1062cbf8;
  /* 1062cb62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cb65 push eax */
  push32((uint32_t)(EAX));
  /* 1062cb66 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1062cb6c push ecx */
  push32((uint32_t)(ECX));
  /* 1062cb6d call 0x1062ccb0 */
  push32(0x1062cb72u); f_1062ccb0();
  /* 1062cb72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cb75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062cb77 je 0x1062cb80 */
  if (C.zf) goto L_1062cb80;
  /* 1062cb79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062cb7b jmp 0x1062cc40 */
  goto L_1062cc40;
L_1062cb80:;
  /* 1062cb80 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1062cb86 push edx */
  push32((uint32_t)(EDX));
  /* 1062cb87 push 0x1064e630 */
  push32((uint32_t)(0x1064e630u));
  /* 1062cb8c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1062cb92 push eax */
  push32((uint32_t)(EAX));
  /* 1062cb93 call 0x1062e6c0 */
  push32(0x1062cb98u); f_1062e6c0();
  /* 1062cb98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cb9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062cb9d jne 0x1062cba6 */
  if (!C.zf) goto L_1062cba6;
  /* 1062cb9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062cba1 jmp 0x1062cc40 */
  goto L_1062cc40;
L_1062cba6:;
  /* 1062cba6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062cba8 mov cx, word ptr [0x1064e634] */
  CX = (r16((uint32_t)(0x1064e634)));
  /* 1062cbaf mov dword ptr [0x1064e638], ecx */
  w32((uint32_t)(0x1064e638), (ECX));
  /* 1062cbb5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1062cbbb push edx */
  push32((uint32_t)(EDX));
  /* 1062cbbc push 0x1064d450 */
  push32((uint32_t)(0x1064d450u));
  /* 1062cbc1 call 0x1062ce10 */
  push32(0x1062cbc6u); f_1062ce10();
  /* 1062cbc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cbc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cbcc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062cbcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062cbd1 je 0x1062cbe6 */
  if (C.zf) goto L_1062cbe6;
  /* 1062cbd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cbd6 push edx */
  push32((uint32_t)(EDX));
  /* 1062cbd7 push 0x1064d3cc */
  push32((uint32_t)(0x1064d3ccu));
  /* 1062cbdc call 0x10625890 */
  push32(0x1062cbe1u); f_10625890();
  /* 1062cbe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cbe4 jmp 0x1062cbf8 */
  goto L_1062cbf8;
L_1062cbe6:;
  /* 1062cbe6 push 0x1064d450 */
  push32((uint32_t)(0x1064d450u));
  /* 1062cbeb push 0x1064d3cc */
  push32((uint32_t)(0x1064d3ccu));
  /* 1062cbf0 call 0x10625890 */
  push32(0x1062cbf5u); f_10625890();
  /* 1062cbf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062cbf8:;
  /* 1062cbf8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cbfc je 0x1062cc11 */
  if (C.zf) goto L_1062cc11;
  /* 1062cbfe push 6 */
  push32((uint32_t)(0x6u));
  /* 1062cc00 push 0x1064e630 */
  push32((uint32_t)(0x1064e630u));
  /* 1062cc05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062cc08 push eax */
  push32((uint32_t)(EAX));
  /* 1062cc09 call 0x106291c0 */
  push32(0x1062cc0eu); f_106291c0();
  /* 1062cc0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062cc11:;
  /* 1062cc11 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cc15 je 0x1062cc2a */
  if (C.zf) goto L_1062cc2a;
  /* 1062cc17 push 4 */
  push32((uint32_t)(0x4u));
  /* 1062cc19 push 0x1064e638 */
  push32((uint32_t)(0x1064e638u));
  /* 1062cc1e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062cc21 push ecx */
  push32((uint32_t)(ECX));
  /* 1062cc22 call 0x106291c0 */
  push32(0x1062cc27u); f_106291c0();
  /* 1062cc27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062cc2a:;
  /* 1062cc2a push 0x1064d450 */
  push32((uint32_t)(0x1064d450u));
  /* 1062cc2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062cc32 push edx */
  push32((uint32_t)(EDX));
  /* 1062cc33 call 0x10625890 */
  push32(0x1062cc38u); f_10625890();
  /* 1062cc38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cc3b mov eax, 0x1064d450 */
  EAX = (0x1064d450u);
L_1062cc40:;
  /* 1062cc40 mov esp, ebp */
  ESP = (EBP);
  /* 1062cc42 pop ebp */
  EBP = (pop32());
  /* 1062cc43 ret  */
  ESPCHK(0x1062cac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc50 @ 0x1062cc50 (7 bytes, 5 insns) */
void f_1062cc50(void) {
  FTRACE(0x1062cc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062cc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1062cc51 mov ebp, esp */
  EBP = (ESP);
  /* 1062cc53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062cc55 pop ebp */
  EBP = (pop32());
  /* 1062cc56 ret  */
  ESPCHK(0x1062cc50u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1062cc60 (79 bytes, 28 insns) */
void f_1062cc60(void) {
  FTRACE(0x1062cc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062cc60 push ebp */
  push32((uint32_t)(EBP));
  /* 1062cc61 mov ebp, esp */
  EBP = (ESP);
  /* 1062cc63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062cc66 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1062cc69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062cc6c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062cc73 jmp 0x1062cc7e */
  goto L_1062cc7e;
L_1062cc75:;
  /* 1062cc75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062cc78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cc7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1062cc7e:;
  /* 1062cc7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062cc81 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cc84 jge 0x1062cca4 */
  if ((C.sf==C.of)) goto L_1062cca4;
  /* 1062cc86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062cc89 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cc8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062cc8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062cc92 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1062cc95 push edx */
  push32((uint32_t)(EDX));
  /* 1062cc96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cc99 push eax */
  push32((uint32_t)(EAX));
  /* 1062cc9a call 0x106258a0 */
  push32(0x1062cc9fu); f_106258a0();
  /* 1062cc9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cca2 jmp 0x1062cc75 */
  goto L_1062cc75;
L_1062cca4:;
  /* 1062cca4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062ccab mov esp, ebp */
  ESP = (EBP);
  /* 1062ccad pop ebp */
  EBP = (pop32());
  /* 1062ccae ret  */
  ESPCHK(0x1062cc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccb0 @ 0x1062ccb0 (349 bytes, 122 insns) */
void f_1062ccb0(void) {
  FTRACE(0x1062ccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062ccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062ccb1 mov ebp, esp */
  EBP = (ESP);
  /* 1062ccb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062ccb6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1062ccbb push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ccbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ccc0 push eax */
  push32((uint32_t)(EAX));
  /* 1062ccc1 call 0x10626650 */
  push32(0x1062ccc6u); f_10626650();
  /* 1062ccc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ccc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062cccc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062cccf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062ccd1 jne 0x1062ccda */
  if (!C.zf) goto L_1062ccda;
  /* 1062ccd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ccd5 jmp 0x1062ce09 */
  goto L_1062ce09;
L_1062ccda:;
  /* 1062ccda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ccdd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062cce0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cce3 jne 0x1062cd10 */
  if (!C.zf) goto L_1062cd10;
  /* 1062cce5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062cce8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1062ccec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ccee je 0x1062cd10 */
  if (C.zf) goto L_1062cd10;
  /* 1062ccf0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ccf3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ccf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ccf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ccfa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cd00 push edx */
  push32((uint32_t)(EDX));
  /* 1062cd01 call 0x10625890 */
  push32(0x1062cd06u); f_10625890();
  /* 1062cd06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cd09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062cd0b jmp 0x1062ce09 */
  goto L_1062ce09;
L_1062cd10:;
  /* 1062cd10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062cd17 jmp 0x1062cd22 */
  goto L_1062cd22;
L_1062cd19:;
  /* 1062cd19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062cd1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cd1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062cd22:;
  /* 1062cd22 push 0x10649fe0 */
  push32((uint32_t)(0x10649fe0u));
  /* 1062cd27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062cd2a push ecx */
  push32((uint32_t)(ECX));
  /* 1062cd2b call 0x1062e600 */
  push32(0x1062cd30u); f_1062e600();
  /* 1062cd30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cd33 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062cd36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cd3a jne 0x1062cd44 */
  if (!C.zf) goto L_1062cd44;
  /* 1062cd3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062cd3f jmp 0x1062ce09 */
  goto L_1062ce09;
L_1062cd44:;
  /* 1062cd44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062cd47 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cd4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1062cd4c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1062cd4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cd53 jne 0x1062cd7a */
  if (!C.zf) goto L_1062cd7a;
  /* 1062cd55 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cd59 jge 0x1062cd7a */
  if ((C.sf==C.of)) goto L_1062cd7a;
  /* 1062cd5b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062cd5f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cd62 je 0x1062cd7a */
  if (C.zf) goto L_1062cd7a;
  /* 1062cd64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062cd67 push edx */
  push32((uint32_t)(EDX));
  /* 1062cd68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062cd6b push eax */
  push32((uint32_t)(EAX));
  /* 1062cd6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cd6f push ecx */
  push32((uint32_t)(ECX));
  /* 1062cd70 call 0x10626100 */
  push32(0x1062cd75u); f_10626100();
  /* 1062cd75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cd78 jmp 0x1062cde0 */
  goto L_1062cde0;
L_1062cd7a:;
  /* 1062cd7a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cd7e jne 0x1062cda8 */
  if (!C.zf) goto L_1062cda8;
  /* 1062cd80 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cd84 jge 0x1062cda8 */
  if ((C.sf==C.of)) goto L_1062cda8;
  /* 1062cd86 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062cd8a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cd8d je 0x1062cda8 */
  if (C.zf) goto L_1062cda8;
  /* 1062cd8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062cd92 push eax */
  push32((uint32_t)(EAX));
  /* 1062cd93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062cd96 push ecx */
  push32((uint32_t)(ECX));
  /* 1062cd97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cd9a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cd9d push edx */
  push32((uint32_t)(EDX));
  /* 1062cd9e call 0x10626100 */
  push32(0x1062cda3u); f_10626100();
  /* 1062cda3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cda6 jmp 0x1062cde0 */
  goto L_1062cde0;
L_1062cda8:;
  /* 1062cda8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cdac jne 0x1062cddb */
  if (!C.zf) goto L_1062cddb;
  /* 1062cdae movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062cdb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062cdb4 je 0x1062cdbf */
  if (C.zf) goto L_1062cdbf;
  /* 1062cdb6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062cdba cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cdbd jne 0x1062cddb */
  if (!C.zf) goto L_1062cddb;
L_1062cdbf:;
  /* 1062cdbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062cdc2 push edx */
  push32((uint32_t)(EDX));
  /* 1062cdc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062cdc6 push eax */
  push32((uint32_t)(EAX));
  /* 1062cdc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cdca add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cdd0 push ecx */
  push32((uint32_t)(ECX));
  /* 1062cdd1 call 0x10626100 */
  push32(0x1062cdd6u); f_10626100();
  /* 1062cdd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cdd9 jmp 0x1062cde0 */
  goto L_1062cde0;
L_1062cddb:;
  /* 1062cddb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062cdde jmp 0x1062ce09 */
  goto L_1062ce09;
L_1062cde0:;
  /* 1062cde0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062cde4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cde7 jne 0x1062cdeb */
  if (!C.zf) goto L_1062cdeb;
  /* 1062cde9 jmp 0x1062ce07 */
  goto L_1062ce07;
L_1062cdeb:;
  /* 1062cdeb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062cdef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062cdf1 jne 0x1062cdf5 */
  if (!C.zf) goto L_1062cdf5;
  /* 1062cdf3 jmp 0x1062ce07 */
  goto L_1062ce07;
L_1062cdf5:;
  /* 1062cdf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062cdf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062cdfb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1062cdff mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1062ce02 jmp 0x1062cd19 */
  goto L_1062cd19;
L_1062ce07:;
  /* 1062ce07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062ce09:;
  /* 1062ce09 mov esp, ebp */
  ESP = (EBP);
  /* 1062ce0b pop ebp */
  EBP = (pop32());
  /* 1062ce0c ret  */
  ESPCHK(0x1062ccb0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1062ce10 (101 bytes, 36 insns) */
void f_1062ce10(void) {
  FTRACE(0x1062ce10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062ce10 push ebp */
  push32((uint32_t)(EBP));
  /* 1062ce11 mov ebp, esp */
  EBP = (ESP);
  /* 1062ce13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ce16 push eax */
  push32((uint32_t)(EAX));
  /* 1062ce17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ce1a push ecx */
  push32((uint32_t)(ECX));
  /* 1062ce1b call 0x10625890 */
  push32(0x1062ce20u); f_10625890();
  /* 1062ce20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ce23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ce26 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1062ce2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ce2c je 0x1062ce48 */
  if (C.zf) goto L_1062ce48;
  /* 1062ce2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ce31 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ce34 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ce35 push 0x10649fe8 */
  push32((uint32_t)(0x10649fe8u));
  /* 1062ce3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062ce3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ce3f push edx */
  push32((uint32_t)(EDX));
  /* 1062ce40 call 0x1062cc60 */
  push32(0x1062ce45u); f_1062cc60();
  /* 1062ce45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062ce48:;
  /* 1062ce48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ce4b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1062ce52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062ce54 je 0x1062ce73 */
  if (C.zf) goto L_1062ce73;
  /* 1062ce56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062ce59 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ce5f push edx */
  push32((uint32_t)(EDX));
  /* 1062ce60 push 0x10649fe4 */
  push32((uint32_t)(0x10649fe4u));
  /* 1062ce65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062ce67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ce6a push eax */
  push32((uint32_t)(EAX));
  /* 1062ce6b call 0x1062cc60 */
  push32(0x1062ce70u); f_1062cc60();
  /* 1062ce70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062ce73:;
  /* 1062ce73 pop ebp */
  EBP = (pop32());
  /* 1062ce74 ret  */
  ESPCHK(0x1062ce10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce80 @ 0x1062ce80 (130 bytes, 50 insns) */
void f_1062ce80(void) {
  FTRACE(0x1062ce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062ce80 push ebp */
  push32((uint32_t)(EBP));
  /* 1062ce81 mov ebp, esp */
  EBP = (ESP);
  /* 1062ce83 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ce84 push ebx */
  push32((uint32_t)(EBX));
  /* 1062ce85 push esi */
  push32((uint32_t)(ESI));
  /* 1062ce86 push edi */
  push32((uint32_t)(EDI));
  /* 1062ce87 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1062ce8e:;
  /* 1062ce8e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ce92 jne 0x1062ceb2 */
  if (!C.zf) goto L_1062ceb2;
  /* 1062ce94 push 0x10649ff8 */
  push32((uint32_t)(0x10649ff8u));
  /* 1062ce99 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ce9b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1062ce9d push 0x10649fec */
  push32((uint32_t)(0x10649fecu));
  /* 1062cea2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062cea4 call 0x106219a0 */
  push32(0x1062cea9u); f_106219a0();
  /* 1062cea9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ceac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ceaf jne 0x1062ceb2 */
  if (!C.zf) goto L_1062ceb2;
  /* 1062ceb1 int3  */
  x86_unimpl("int3 @ 0x1062ceb1");
L_1062ceb2:;
  /* 1062ceb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062ceb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ceb6 jne 0x1062ce8e */
  if (!C.zf) goto L_1062ce8e;
  /* 1062ceb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cebb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062cebe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1062cec1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062cec3 je 0x1062ced1 */
  if (C.zf) goto L_1062ced1;
  /* 1062cec5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cec8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1062cecf jmp 0x1062cef8 */
  goto L_1062cef8;
L_1062ced1:;
  /* 1062ced1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ced4 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ced5 call 0x1062b6f0 */
  push32(0x1062cedau); f_1062b6f0();
  /* 1062ceda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cedd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cee0 push edx */
  push32((uint32_t)(EDX));
  /* 1062cee1 call 0x1062cf10 */
  push32(0x1062cee6u); f_1062cf10();
  /* 1062cee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cee9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062ceec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ceef push eax */
  push32((uint32_t)(EAX));
  /* 1062cef0 call 0x1062b760 */
  push32(0x1062cef5u); f_1062b760();
  /* 1062cef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062cef8:;
  /* 1062cef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062cefb pop edi */
  EDI = (pop32());
  /* 1062cefc pop esi */
  ESI = (pop32());
  /* 1062cefd pop ebx */
  EBX = (pop32());
  /* 1062cefe mov esp, ebp */
  ESP = (EBP);
  /* 1062cf00 pop ebp */
  EBP = (pop32());
  /* 1062cf01 ret  */
  ESPCHK(0x1062ce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf10 @ 0x1062cf10 (190 bytes, 67 insns) */
void f_1062cf10(void) {
  FTRACE(0x1062cf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062cf10 push ebp */
  push32((uint32_t)(EBP));
  /* 1062cf11 mov ebp, esp */
  EBP = (ESP);
  /* 1062cf13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062cf16 push ebx */
  push32((uint32_t)(EBX));
  /* 1062cf17 push esi */
  push32((uint32_t)(ESI));
  /* 1062cf18 push edi */
  push32((uint32_t)(EDI));
  /* 1062cf19 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1062cf20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cf23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1062cf26:;
  /* 1062cf26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cf2a jne 0x1062cf4a */
  if (!C.zf) goto L_1062cf4a;
  /* 1062cf2c push 0x10649e9c */
  push32((uint32_t)(0x10649e9cu));
  /* 1062cf31 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062cf33 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1062cf35 push 0x10649fec */
  push32((uint32_t)(0x10649fecu));
  /* 1062cf3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062cf3c call 0x106219a0 */
  push32(0x1062cf41u); f_106219a0();
  /* 1062cf41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cf44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cf47 jne 0x1062cf4a */
  if (!C.zf) goto L_1062cf4a;
  /* 1062cf49 int3  */
  x86_unimpl("int3 @ 0x1062cf49");
L_1062cf4a:;
  /* 1062cf4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062cf4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062cf4e jne 0x1062cf26 */
  if (!C.zf) goto L_1062cf26;
  /* 1062cf50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062cf53 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1062cf56 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1062cf5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062cf5d je 0x1062cfba */
  if (C.zf) goto L_1062cfba;
  /* 1062cf5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062cf62 push ecx */
  push32((uint32_t)(ECX));
  /* 1062cf63 call 0x1062c210 */
  push32(0x1062cf68u); f_1062c210();
  /* 1062cf68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cf6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062cf6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062cf71 push edx */
  push32((uint32_t)(EDX));
  /* 1062cf72 call 0x1062f590 */
  push32(0x1062cf77u); f_1062f590();
  /* 1062cf77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cf7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062cf7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062cf80 push ecx */
  push32((uint32_t)(ECX));
  /* 1062cf81 call 0x1062f460 */
  push32(0x1062cf86u); f_1062f460();
  /* 1062cf86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cf89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062cf8b jge 0x1062cf96 */
  if ((C.sf==C.of)) goto L_1062cf96;
  /* 1062cf8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1062cf94 jmp 0x1062cfba */
  goto L_1062cfba;
L_1062cf96:;
  /* 1062cf96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062cf99 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cf9d je 0x1062cfba */
  if (C.zf) goto L_1062cfba;
  /* 1062cf9f push 2 */
  push32((uint32_t)(0x2u));
  /* 1062cfa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062cfa4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1062cfa7 push ecx */
  push32((uint32_t)(ECX));
  /* 1062cfa8 call 0x10623370 */
  push32(0x1062cfadu); f_10623370();
  /* 1062cfad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062cfb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062cfb3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1062cfba:;
  /* 1062cfba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062cfbd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1062cfc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062cfc7 pop edi */
  EDI = (pop32());
  /* 1062cfc8 pop esi */
  ESI = (pop32());
  /* 1062cfc9 pop ebx */
  EBX = (pop32());
  /* 1062cfca mov esp, ebp */
  ESP = (EBP);
  /* 1062cfcc pop ebp */
  EBP = (pop32());
  /* 1062cfcd ret  */
  ESPCHK(0x1062cf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfd0 @ 0x1062cfd0 (210 bytes, 63 insns) */
void f_1062cfd0(void) {
  FTRACE(0x1062cfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062cfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062cfd1 mov ebp, esp */
  EBP = (ESP);
  /* 1062cfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062cfd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cfd7 cmp eax, dword ptr [0x1064ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062cfdd jae 0x1062d001 */
  if (!C.cf) goto L_1062d001;
  /* 1062cfdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cfe2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062cfe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062cfe8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062cfeb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062cfee mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062cff5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1062cffa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1062cffd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062cfff jne 0x1062d014 */
  if (!C.zf) goto L_1062d014;
L_1062d001:;
  /* 1062d001 call 0x1062a7b0 */
  push32(0x1062d006u); f_1062a7b0();
  /* 1062d006 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1062d00c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062d00f jmp 0x1062d09e */
  goto L_1062d09e;
L_1062d014:;
  /* 1062d014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d017 push edx */
  push32((uint32_t)(EDX));
  /* 1062d018 call 0x1062bfd0 */
  push32(0x1062d01du); f_1062bfd0();
  /* 1062d01d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d023 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062d026 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d029 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062d02c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062d02f mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062d036 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1062d03b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1062d03e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062d040 je 0x1062d07d */
  if (C.zf) goto L_1062d07d;
  /* 1062d042 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d045 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d046 call 0x1062be50 */
  push32(0x1062d04bu); f_1062be50();
  /* 1062d04b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d04e push eax */
  push32((uint32_t)(EAX));
  /* 1062d04f call dword ptr [0x1065030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065030c))), 0x1062d055u);
  /* 1062d055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062d057 jne 0x1062d064 */
  if (!C.zf) goto L_1062d064;
  /* 1062d059 call dword ptr [0x106502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ac))), 0x1062d05fu);
  /* 1062d05f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062d062 jmp 0x1062d06b */
  goto L_1062d06b;
L_1062d064:;
  /* 1062d064 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1062d06b:;
  /* 1062d06b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062d06f jne 0x1062d073 */
  if (!C.zf) goto L_1062d073;
  /* 1062d071 jmp 0x1062d08f */
  goto L_1062d08f;
L_1062d073:;
  /* 1062d073 call 0x1062a7c0 */
  push32(0x1062d078u); f_1062a7c0();
  /* 1062d078 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d07b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1062d07d:;
  /* 1062d07d call 0x1062a7b0 */
  push32(0x1062d082u); f_1062a7b0();
  /* 1062d082 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1062d088 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1062d08f:;
  /* 1062d08f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d092 push eax */
  push32((uint32_t)(EAX));
  /* 1062d093 call 0x1062c060 */
  push32(0x1062d098u); f_1062c060();
  /* 1062d098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d09b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1062d09e:;
  /* 1062d09e mov esp, ebp */
  ESP = (EBP);
  /* 1062d0a0 pop ebp */
  EBP = (pop32());
  /* 1062d0a1 ret  */
  ESPCHK(0x1062cfd0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1062d0b0 (219 bytes, 64 insns) */
void f_1062d0b0(void) {
  FTRACE(0x1062d0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062d0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062d0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1062d0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d0b4 cmp dword ptr [0x1064e61c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e61c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062d0bb je 0x1062d151 */
  if (C.zf) goto L_1062d151;
  /* 1062d0c1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1062d0c3 push 0x1064a008 */
  push32((uint32_t)(0x1064a008u));
  /* 1062d0c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d0ca push 0xac */
  push32((uint32_t)(0xacu));
  /* 1062d0cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d0d1 call 0x10622cf0 */
  push32(0x1062d0d6u); f_10622cf0();
  /* 1062d0d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d0d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062d0dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062d0e0 jne 0x1062d0ec */
  if (!C.zf) goto L_1062d0ec;
  /* 1062d0e2 mov eax, 1 */
  EAX = (0x1u);
  /* 1062d0e7 jmp 0x1062d187 */
  goto L_1062d187;
L_1062d0ec:;
  /* 1062d0ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d0ef push eax */
  push32((uint32_t)(EAX));
  /* 1062d0f0 call 0x1062d190 */
  push32(0x1062d0f5u); f_1062d190();
  /* 1062d0f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d0f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062d0fa je 0x1062d11d */
  if (C.zf) goto L_1062d11d;
  /* 1062d0fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d0ff push ecx */
  push32((uint32_t)(ECX));
  /* 1062d100 call 0x1062d720 */
  push32(0x1062d105u); f_1062d720();
  /* 1062d105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d108 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d10a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d10d push edx */
  push32((uint32_t)(EDX));
  /* 1062d10e call 0x10623370 */
  push32(0x1062d113u); f_10623370();
  /* 1062d113 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d116 mov eax, 1 */
  EAX = (0x1u);
  /* 1062d11b jmp 0x1062d187 */
  goto L_1062d187;
L_1062d11d:;
  /* 1062d11d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d120 mov dword ptr [0x1064dc98], eax */
  w32((uint32_t)(0x1064dc98), (EAX));
  /* 1062d125 mov ecx, dword ptr [0x1064e63c] */
  ECX = (r32((uint32_t)(0x1064e63c)));
  /* 1062d12b push ecx */
  push32((uint32_t)(ECX));
  /* 1062d12c call 0x1062d720 */
  push32(0x1062d131u); f_1062d720();
  /* 1062d131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d134 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d136 mov edx, dword ptr [0x1064e63c] */
  EDX = (r32((uint32_t)(0x1064e63c)));
  /* 1062d13c push edx */
  push32((uint32_t)(EDX));
  /* 1062d13d call 0x10623370 */
  push32(0x1062d142u); f_10623370();
  /* 1062d142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d145 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d148 mov dword ptr [0x1064e63c], eax */
  w32((uint32_t)(0x1064e63c), (EAX));
  /* 1062d14d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062d14f jmp 0x1062d187 */
  goto L_1062d187;
L_1062d151:;
  /* 1062d151 mov dword ptr [0x1064dc98], 0x1064dca0 */
  w32((uint32_t)(0x1064dc98), (0x1064dca0u));
  /* 1062d15b mov ecx, dword ptr [0x1064e63c] */
  ECX = (r32((uint32_t)(0x1064e63c)));
  /* 1062d161 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d162 call 0x1062d720 */
  push32(0x1062d167u); f_1062d720();
  /* 1062d167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d16a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d16c mov edx, dword ptr [0x1064e63c] */
  EDX = (r32((uint32_t)(0x1064e63c)));
  /* 1062d172 push edx */
  push32((uint32_t)(EDX));
  /* 1062d173 call 0x10623370 */
  push32(0x1062d178u); f_10623370();
  /* 1062d178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d17b mov dword ptr [0x1064e63c], 0 */
  w32((uint32_t)(0x1064e63c), (0x0u));
  /* 1062d185 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062d187:;
  /* 1062d187 mov esp, ebp */
  ESP = (EBP);
  /* 1062d189 pop ebp */
  EBP = (pop32());
  /* 1062d18a ret  */
  ESPCHK(0x1062d0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x1062d190 (1423 bytes, 533 insns) */
void f_1062d190(void) {
  FTRACE(0x1062d190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062d190 push ebp */
  push32((uint32_t)(EBP));
  /* 1062d191 mov ebp, esp */
  EBP = (ESP);
  /* 1062d193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062d196 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1062d19d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062d19f mov ax, word ptr [0x1064e676] */
  AX = (r16((uint32_t)(0x1064e676)));
  /* 1062d1a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062d1a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d1aa mov cx, word ptr [0x1064e678] */
  CX = (r16((uint32_t)(0x1064e678)));
  /* 1062d1b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062d1b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062d1b8 jne 0x1062d1c2 */
  if (!C.zf) goto L_1062d1c2;
  /* 1062d1ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062d1bd jmp 0x1062d71b */
  goto L_1062d71b;
L_1062d1c2:;
  /* 1062d1c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d1c5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d1c8 push edx */
  push32((uint32_t)(EDX));
  /* 1062d1c9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1062d1cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d1ce push eax */
  push32((uint32_t)(EAX));
  /* 1062d1cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d1d1 call 0x10630aa0 */
  push32(0x1062d1d6u); f_10630aa0();
  /* 1062d1d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d1d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d1dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d1de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d1e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d1e4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d1e7 push edx */
  push32((uint32_t)(EDX));
  /* 1062d1e8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1062d1ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d1ed push eax */
  push32((uint32_t)(EAX));
  /* 1062d1ee push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d1f0 call 0x10630aa0 */
  push32(0x1062d1f5u); f_10630aa0();
  /* 1062d1f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d1f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d1fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d1fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d200 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d203 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d206 push edx */
  push32((uint32_t)(EDX));
  /* 1062d207 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1062d209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d20c push eax */
  push32((uint32_t)(EAX));
  /* 1062d20d push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d20f call 0x10630aa0 */
  push32(0x1062d214u); f_10630aa0();
  /* 1062d214 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d217 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d21a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d21c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d21f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d222 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d225 push edx */
  push32((uint32_t)(EDX));
  /* 1062d226 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1062d228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d22b push eax */
  push32((uint32_t)(EAX));
  /* 1062d22c push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d22e call 0x10630aa0 */
  push32(0x1062d233u); f_10630aa0();
  /* 1062d233 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d236 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d239 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d23b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d23e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d241 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d244 push edx */
  push32((uint32_t)(EDX));
  /* 1062d245 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1062d247 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d24a push eax */
  push32((uint32_t)(EAX));
  /* 1062d24b push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d24d call 0x10630aa0 */
  push32(0x1062d252u); f_10630aa0();
  /* 1062d252 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d255 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d258 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d25a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d25d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d260 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d263 push edx */
  push32((uint32_t)(EDX));
  /* 1062d264 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1062d266 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d269 push eax */
  push32((uint32_t)(EAX));
  /* 1062d26a push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d26c call 0x10630aa0 */
  push32(0x1062d271u); f_10630aa0();
  /* 1062d271 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d274 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d277 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d279 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d27c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d27f push edx */
  push32((uint32_t)(EDX));
  /* 1062d280 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1062d282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d285 push eax */
  push32((uint32_t)(EAX));
  /* 1062d286 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d288 call 0x10630aa0 */
  push32(0x1062d28du); f_10630aa0();
  /* 1062d28d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d290 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d293 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d295 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d298 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d29b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d29e push edx */
  push32((uint32_t)(EDX));
  /* 1062d29f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1062d2a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d2a4 push eax */
  push32((uint32_t)(EAX));
  /* 1062d2a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d2a7 call 0x10630aa0 */
  push32(0x1062d2acu); f_10630aa0();
  /* 1062d2ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d2af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d2b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d2b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d2b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d2ba add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d2bd push edx */
  push32((uint32_t)(EDX));
  /* 1062d2be push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1062d2c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d2c3 push eax */
  push32((uint32_t)(EAX));
  /* 1062d2c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d2c6 call 0x10630aa0 */
  push32(0x1062d2cbu); f_10630aa0();
  /* 1062d2cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d2ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d2d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d2d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d2d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d2d9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d2dc push edx */
  push32((uint32_t)(EDX));
  /* 1062d2dd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1062d2df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d2e2 push eax */
  push32((uint32_t)(EAX));
  /* 1062d2e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d2e5 call 0x10630aa0 */
  push32(0x1062d2eau); f_10630aa0();
  /* 1062d2ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d2ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d2f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d2f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d2f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d2f8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d2fb push edx */
  push32((uint32_t)(EDX));
  /* 1062d2fc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1062d2fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d301 push eax */
  push32((uint32_t)(EAX));
  /* 1062d302 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d304 call 0x10630aa0 */
  push32(0x1062d309u); f_10630aa0();
  /* 1062d309 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d30c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d30f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d311 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d314 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d317 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d31a push edx */
  push32((uint32_t)(EDX));
  /* 1062d31b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1062d31d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d320 push eax */
  push32((uint32_t)(EAX));
  /* 1062d321 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d323 call 0x10630aa0 */
  push32(0x1062d328u); f_10630aa0();
  /* 1062d328 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d32b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d32e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d330 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d336 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d339 push edx */
  push32((uint32_t)(EDX));
  /* 1062d33a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1062d33c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d33f push eax */
  push32((uint32_t)(EAX));
  /* 1062d340 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d342 call 0x10630aa0 */
  push32(0x1062d347u); f_10630aa0();
  /* 1062d347 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d34a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d34d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d34f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d352 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d355 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d358 push edx */
  push32((uint32_t)(EDX));
  /* 1062d359 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1062d35b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d35e push eax */
  push32((uint32_t)(EAX));
  /* 1062d35f push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d361 call 0x10630aa0 */
  push32(0x1062d366u); f_10630aa0();
  /* 1062d366 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d369 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d36c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d36e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d374 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d377 push edx */
  push32((uint32_t)(EDX));
  /* 1062d378 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1062d37a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d37d push eax */
  push32((uint32_t)(EAX));
  /* 1062d37e push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d380 call 0x10630aa0 */
  push32(0x1062d385u); f_10630aa0();
  /* 1062d385 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d388 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d38b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d38d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d390 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d393 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d396 push edx */
  push32((uint32_t)(EDX));
  /* 1062d397 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1062d399 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d39c push eax */
  push32((uint32_t)(EAX));
  /* 1062d39d push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d39f call 0x10630aa0 */
  push32(0x1062d3a4u); f_10630aa0();
  /* 1062d3a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d3a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d3aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d3ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d3af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d3b2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d3b5 push edx */
  push32((uint32_t)(EDX));
  /* 1062d3b6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1062d3b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d3bb push eax */
  push32((uint32_t)(EAX));
  /* 1062d3bc push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d3be call 0x10630aa0 */
  push32(0x1062d3c3u); f_10630aa0();
  /* 1062d3c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d3c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d3c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d3cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d3ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d3d1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d3d4 push edx */
  push32((uint32_t)(EDX));
  /* 1062d3d5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1062d3d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d3da push eax */
  push32((uint32_t)(EAX));
  /* 1062d3db push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d3dd call 0x10630aa0 */
  push32(0x1062d3e2u); f_10630aa0();
  /* 1062d3e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d3e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d3e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d3ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d3ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d3f0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d3f3 push edx */
  push32((uint32_t)(EDX));
  /* 1062d3f4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1062d3f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1062d3fa push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d3fc call 0x10630aa0 */
  push32(0x1062d401u); f_10630aa0();
  /* 1062d401 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d404 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d407 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d409 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d40c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d40f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d412 push edx */
  push32((uint32_t)(EDX));
  /* 1062d413 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1062d415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d418 push eax */
  push32((uint32_t)(EAX));
  /* 1062d419 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d41b call 0x10630aa0 */
  push32(0x1062d420u); f_10630aa0();
  /* 1062d420 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d423 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d426 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d428 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d42b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d42e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d431 push edx */
  push32((uint32_t)(EDX));
  /* 1062d432 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1062d434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d437 push eax */
  push32((uint32_t)(EAX));
  /* 1062d438 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d43a call 0x10630aa0 */
  push32(0x1062d43fu); f_10630aa0();
  /* 1062d43f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d442 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d445 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d447 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d44a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d44d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d450 push edx */
  push32((uint32_t)(EDX));
  /* 1062d451 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1062d453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d456 push eax */
  push32((uint32_t)(EAX));
  /* 1062d457 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d459 call 0x10630aa0 */
  push32(0x1062d45eu); f_10630aa0();
  /* 1062d45e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d461 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d464 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d466 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d469 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d46c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d46f push edx */
  push32((uint32_t)(EDX));
  /* 1062d470 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1062d472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d475 push eax */
  push32((uint32_t)(EAX));
  /* 1062d476 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d478 call 0x10630aa0 */
  push32(0x1062d47du); f_10630aa0();
  /* 1062d47d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d480 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d483 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d485 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d48b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d48e push edx */
  push32((uint32_t)(EDX));
  /* 1062d48f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1062d491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d494 push eax */
  push32((uint32_t)(EAX));
  /* 1062d495 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d497 call 0x10630aa0 */
  push32(0x1062d49cu); f_10630aa0();
  /* 1062d49c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d49f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d4a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d4a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d4a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d4aa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d4ad push edx */
  push32((uint32_t)(EDX));
  /* 1062d4ae push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1062d4b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d4b3 push eax */
  push32((uint32_t)(EAX));
  /* 1062d4b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d4b6 call 0x10630aa0 */
  push32(0x1062d4bbu); f_10630aa0();
  /* 1062d4bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d4be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d4c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d4c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d4c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d4c9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d4cc push edx */
  push32((uint32_t)(EDX));
  /* 1062d4cd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1062d4cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d4d2 push eax */
  push32((uint32_t)(EAX));
  /* 1062d4d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d4d5 call 0x10630aa0 */
  push32(0x1062d4dau); f_10630aa0();
  /* 1062d4da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d4dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d4e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d4e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d4e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d4e8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d4eb push edx */
  push32((uint32_t)(EDX));
  /* 1062d4ec push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1062d4ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d4f1 push eax */
  push32((uint32_t)(EAX));
  /* 1062d4f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d4f4 call 0x10630aa0 */
  push32(0x1062d4f9u); f_10630aa0();
  /* 1062d4f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d4fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d4ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d501 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d507 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d50a push edx */
  push32((uint32_t)(EDX));
  /* 1062d50b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1062d50d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d510 push eax */
  push32((uint32_t)(EAX));
  /* 1062d511 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d513 call 0x10630aa0 */
  push32(0x1062d518u); f_10630aa0();
  /* 1062d518 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d51b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d51e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d520 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d523 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d526 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d529 push edx */
  push32((uint32_t)(EDX));
  /* 1062d52a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1062d52c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d52f push eax */
  push32((uint32_t)(EAX));
  /* 1062d530 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d532 call 0x10630aa0 */
  push32(0x1062d537u); f_10630aa0();
  /* 1062d537 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d53a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d53d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d53f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d542 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d545 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d548 push edx */
  push32((uint32_t)(EDX));
  /* 1062d549 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1062d54b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d54e push eax */
  push32((uint32_t)(EAX));
  /* 1062d54f push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d551 call 0x10630aa0 */
  push32(0x1062d556u); f_10630aa0();
  /* 1062d556 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d559 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d55c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d55e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d561 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d564 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d567 push edx */
  push32((uint32_t)(EDX));
  /* 1062d568 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1062d56a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d56d push eax */
  push32((uint32_t)(EAX));
  /* 1062d56e push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d570 call 0x10630aa0 */
  push32(0x1062d575u); f_10630aa0();
  /* 1062d575 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d578 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d57b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d57d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d580 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d583 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d586 push edx */
  push32((uint32_t)(EDX));
  /* 1062d587 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1062d589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d58c push eax */
  push32((uint32_t)(EAX));
  /* 1062d58d push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d58f call 0x10630aa0 */
  push32(0x1062d594u); f_10630aa0();
  /* 1062d594 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d597 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d59a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d59c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d59f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d5a2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d5a8 push edx */
  push32((uint32_t)(EDX));
  /* 1062d5a9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1062d5ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d5ae push eax */
  push32((uint32_t)(EAX));
  /* 1062d5af push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d5b1 call 0x10630aa0 */
  push32(0x1062d5b6u); f_10630aa0();
  /* 1062d5b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d5b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d5bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d5be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d5c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d5c4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d5ca push edx */
  push32((uint32_t)(EDX));
  /* 1062d5cb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1062d5cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d5d0 push eax */
  push32((uint32_t)(EAX));
  /* 1062d5d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d5d3 call 0x10630aa0 */
  push32(0x1062d5d8u); f_10630aa0();
  /* 1062d5d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d5db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d5de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d5e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d5e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d5e6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d5ec push edx */
  push32((uint32_t)(EDX));
  /* 1062d5ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1062d5ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d5f2 push eax */
  push32((uint32_t)(EAX));
  /* 1062d5f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d5f5 call 0x10630aa0 */
  push32(0x1062d5fau); f_10630aa0();
  /* 1062d5fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d5fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d600 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d602 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d605 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d608 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d60e push edx */
  push32((uint32_t)(EDX));
  /* 1062d60f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1062d611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d614 push eax */
  push32((uint32_t)(EAX));
  /* 1062d615 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d617 call 0x10630aa0 */
  push32(0x1062d61cu); f_10630aa0();
  /* 1062d61c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d61f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d622 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d624 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d627 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d62a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d630 push edx */
  push32((uint32_t)(EDX));
  /* 1062d631 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1062d633 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d636 push eax */
  push32((uint32_t)(EAX));
  /* 1062d637 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d639 call 0x10630aa0 */
  push32(0x1062d63eu); f_10630aa0();
  /* 1062d63e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d641 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d644 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d646 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d64c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d652 push edx */
  push32((uint32_t)(EDX));
  /* 1062d653 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1062d655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d658 push eax */
  push32((uint32_t)(EAX));
  /* 1062d659 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d65b call 0x10630aa0 */
  push32(0x1062d660u); f_10630aa0();
  /* 1062d660 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d663 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d666 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d668 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d66b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d66e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d674 push edx */
  push32((uint32_t)(EDX));
  /* 1062d675 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1062d677 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d67a push eax */
  push32((uint32_t)(EAX));
  /* 1062d67b push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d67d call 0x10630aa0 */
  push32(0x1062d682u); f_10630aa0();
  /* 1062d682 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d685 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d688 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d68a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d68d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d690 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d696 push edx */
  push32((uint32_t)(EDX));
  /* 1062d697 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1062d699 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062d69c push eax */
  push32((uint32_t)(EAX));
  /* 1062d69d push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d69f call 0x10630aa0 */
  push32(0x1062d6a4u); f_10630aa0();
  /* 1062d6a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d6a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d6aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d6ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d6af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d6b2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d6b8 push edx */
  push32((uint32_t)(EDX));
  /* 1062d6b9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1062d6bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062d6be push eax */
  push32((uint32_t)(EAX));
  /* 1062d6bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d6c1 call 0x10630aa0 */
  push32(0x1062d6c6u); f_10630aa0();
  /* 1062d6c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d6c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d6cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d6ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d6d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d6d4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d6da push edx */
  push32((uint32_t)(EDX));
  /* 1062d6db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1062d6dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062d6e0 push eax */
  push32((uint32_t)(EAX));
  /* 1062d6e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d6e3 call 0x10630aa0 */
  push32(0x1062d6e8u); f_10630aa0();
  /* 1062d6e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d6eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d6ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d6f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d6f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d6f6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d6fc push edx */
  push32((uint32_t)(EDX));
  /* 1062d6fd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1062d702 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062d705 push eax */
  push32((uint32_t)(EAX));
  /* 1062d706 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062d708 call 0x10630aa0 */
  push32(0x1062d70du); f_10630aa0();
  /* 1062d70d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d710 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062d713 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062d715 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062d718 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1062d71b:;
  /* 1062d71b mov esp, ebp */
  ESP = (EBP);
  /* 1062d71d pop ebp */
  EBP = (pop32());
  /* 1062d71e ret  */
  ESPCHK(0x1062d190u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1062d720 (779 bytes, 265 insns) */
void f_1062d720(void) {
  FTRACE(0x1062d720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062d720 push ebp */
  push32((uint32_t)(EBP));
  /* 1062d721 mov ebp, esp */
  EBP = (ESP);
  /* 1062d723 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062d727 jne 0x1062d72e */
  if (!C.zf) goto L_1062d72e;
  /* 1062d729 jmp 0x1062da29 */
  goto L_1062da29;
L_1062d72e:;
  /* 1062d72e push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d733 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1062d736 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d737 call 0x10623370 */
  push32(0x1062d73cu); f_10623370();
  /* 1062d73c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d73f push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d741 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d744 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1062d747 push eax */
  push32((uint32_t)(EAX));
  /* 1062d748 call 0x10623370 */
  push32(0x1062d74du); f_10623370();
  /* 1062d74d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d750 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d752 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d755 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062d758 push edx */
  push32((uint32_t)(EDX));
  /* 1062d759 call 0x10623370 */
  push32(0x1062d75eu); f_10623370();
  /* 1062d75e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d761 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d763 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d766 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062d769 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d76a call 0x10623370 */
  push32(0x1062d76fu); f_10623370();
  /* 1062d76f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d772 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d777 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1062d77a push eax */
  push32((uint32_t)(EAX));
  /* 1062d77b call 0x10623370 */
  push32(0x1062d780u); f_10623370();
  /* 1062d780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d783 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d785 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d788 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1062d78b push edx */
  push32((uint32_t)(EDX));
  /* 1062d78c call 0x10623370 */
  push32(0x1062d791u); f_10623370();
  /* 1062d791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d794 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d799 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1062d79b push ecx */
  push32((uint32_t)(ECX));
  /* 1062d79c call 0x10623370 */
  push32(0x1062d7a1u); f_10623370();
  /* 1062d7a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d7a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d7a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d7a9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1062d7ac push eax */
  push32((uint32_t)(EAX));
  /* 1062d7ad call 0x10623370 */
  push32(0x1062d7b2u); f_10623370();
  /* 1062d7b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d7b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d7b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d7ba mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1062d7bd push edx */
  push32((uint32_t)(EDX));
  /* 1062d7be call 0x10623370 */
  push32(0x1062d7c3u); f_10623370();
  /* 1062d7c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d7c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d7c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d7cb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1062d7ce push ecx */
  push32((uint32_t)(ECX));
  /* 1062d7cf call 0x10623370 */
  push32(0x1062d7d4u); f_10623370();
  /* 1062d7d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d7d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d7d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d7dc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1062d7df push eax */
  push32((uint32_t)(EAX));
  /* 1062d7e0 call 0x10623370 */
  push32(0x1062d7e5u); f_10623370();
  /* 1062d7e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d7e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d7ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d7ed mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1062d7f0 push edx */
  push32((uint32_t)(EDX));
  /* 1062d7f1 call 0x10623370 */
  push32(0x1062d7f6u); f_10623370();
  /* 1062d7f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d7f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d7fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d7fe mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1062d801 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d802 call 0x10623370 */
  push32(0x1062d807u); f_10623370();
  /* 1062d807 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d80a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d80c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d80f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1062d812 push eax */
  push32((uint32_t)(EAX));
  /* 1062d813 call 0x10623370 */
  push32(0x1062d818u); f_10623370();
  /* 1062d818 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d81b push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d81d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d820 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1062d823 push edx */
  push32((uint32_t)(EDX));
  /* 1062d824 call 0x10623370 */
  push32(0x1062d829u); f_10623370();
  /* 1062d829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d82c push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d82e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d831 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1062d834 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d835 call 0x10623370 */
  push32(0x1062d83au); f_10623370();
  /* 1062d83a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d83d push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d83f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d842 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1062d845 push eax */
  push32((uint32_t)(EAX));
  /* 1062d846 call 0x10623370 */
  push32(0x1062d84bu); f_10623370();
  /* 1062d84b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d84e push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d853 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1062d856 push edx */
  push32((uint32_t)(EDX));
  /* 1062d857 call 0x10623370 */
  push32(0x1062d85cu); f_10623370();
  /* 1062d85c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d85f push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d861 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d864 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1062d867 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d868 call 0x10623370 */
  push32(0x1062d86du); f_10623370();
  /* 1062d86d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d870 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d872 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d875 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1062d878 push eax */
  push32((uint32_t)(EAX));
  /* 1062d879 call 0x10623370 */
  push32(0x1062d87eu); f_10623370();
  /* 1062d87e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d881 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d883 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d886 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1062d889 push edx */
  push32((uint32_t)(EDX));
  /* 1062d88a call 0x10623370 */
  push32(0x1062d88fu); f_10623370();
  /* 1062d88f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d892 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d897 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1062d89a push ecx */
  push32((uint32_t)(ECX));
  /* 1062d89b call 0x10623370 */
  push32(0x1062d8a0u); f_10623370();
  /* 1062d8a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d8a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d8a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d8a8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1062d8ab push eax */
  push32((uint32_t)(EAX));
  /* 1062d8ac call 0x10623370 */
  push32(0x1062d8b1u); f_10623370();
  /* 1062d8b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d8b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d8b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d8b9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1062d8bc push edx */
  push32((uint32_t)(EDX));
  /* 1062d8bd call 0x10623370 */
  push32(0x1062d8c2u); f_10623370();
  /* 1062d8c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d8c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d8c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d8ca mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1062d8cd push ecx */
  push32((uint32_t)(ECX));
  /* 1062d8ce call 0x10623370 */
  push32(0x1062d8d3u); f_10623370();
  /* 1062d8d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d8d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d8d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d8db mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1062d8de push eax */
  push32((uint32_t)(EAX));
  /* 1062d8df call 0x10623370 */
  push32(0x1062d8e4u); f_10623370();
  /* 1062d8e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d8e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d8e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d8ec mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1062d8ef push edx */
  push32((uint32_t)(EDX));
  /* 1062d8f0 call 0x10623370 */
  push32(0x1062d8f5u); f_10623370();
  /* 1062d8f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d8f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d8fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d8fd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1062d900 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d901 call 0x10623370 */
  push32(0x1062d906u); f_10623370();
  /* 1062d906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d909 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d90b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d90e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1062d911 push eax */
  push32((uint32_t)(EAX));
  /* 1062d912 call 0x10623370 */
  push32(0x1062d917u); f_10623370();
  /* 1062d917 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d91a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d91c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d91f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1062d922 push edx */
  push32((uint32_t)(EDX));
  /* 1062d923 call 0x10623370 */
  push32(0x1062d928u); f_10623370();
  /* 1062d928 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d92b push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d92d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d930 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1062d933 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d934 call 0x10623370 */
  push32(0x1062d939u); f_10623370();
  /* 1062d939 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d93c push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d93e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d941 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1062d944 push eax */
  push32((uint32_t)(EAX));
  /* 1062d945 call 0x10623370 */
  push32(0x1062d94au); f_10623370();
  /* 1062d94a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d94d push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d94f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d952 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1062d958 push edx */
  push32((uint32_t)(EDX));
  /* 1062d959 call 0x10623370 */
  push32(0x1062d95eu); f_10623370();
  /* 1062d95e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d961 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d966 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1062d96c push ecx */
  push32((uint32_t)(ECX));
  /* 1062d96d call 0x10623370 */
  push32(0x1062d972u); f_10623370();
  /* 1062d972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d975 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d977 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d97a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1062d980 push eax */
  push32((uint32_t)(EAX));
  /* 1062d981 call 0x10623370 */
  push32(0x1062d986u); f_10623370();
  /* 1062d986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d989 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d98b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d98e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1062d994 push edx */
  push32((uint32_t)(EDX));
  /* 1062d995 call 0x10623370 */
  push32(0x1062d99au); f_10623370();
  /* 1062d99a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d99d push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d99f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d9a2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1062d9a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d9a9 call 0x10623370 */
  push32(0x1062d9aeu); f_10623370();
  /* 1062d9ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d9b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d9b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d9b6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1062d9bc push eax */
  push32((uint32_t)(EAX));
  /* 1062d9bd call 0x10623370 */
  push32(0x1062d9c2u); f_10623370();
  /* 1062d9c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d9c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d9c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d9ca mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1062d9d0 push edx */
  push32((uint32_t)(EDX));
  /* 1062d9d1 call 0x10623370 */
  push32(0x1062d9d6u); f_10623370();
  /* 1062d9d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d9d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d9db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d9de mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1062d9e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1062d9e5 call 0x10623370 */
  push32(0x1062d9eau); f_10623370();
  /* 1062d9ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062d9ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1062d9ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062d9f2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1062d9f8 push eax */
  push32((uint32_t)(EAX));
  /* 1062d9f9 call 0x10623370 */
  push32(0x1062d9feu); f_10623370();
  /* 1062d9fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062da01 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062da03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062da06 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1062da0c push edx */
  push32((uint32_t)(EDX));
  /* 1062da0d call 0x10623370 */
  push32(0x1062da12u); f_10623370();
  /* 1062da12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062da15 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062da17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062da1a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1062da20 push ecx */
  push32((uint32_t)(ECX));
  /* 1062da21 call 0x10623370 */
  push32(0x1062da26u); f_10623370();
  /* 1062da26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062da29:;
  /* 1062da29 pop ebp */
  EBP = (pop32());
  /* 1062da2a ret  */
  ESPCHK(0x1062d720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da30 @ 0x1062da30 (678 bytes, 180 insns) */
void f_1062da30(void) {
  FTRACE(0x1062da30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062da30 push ebp */
  push32((uint32_t)(EBP));
  /* 1062da31 mov ebp, esp */
  EBP = (ESP);
  /* 1062da33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062da36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062da3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062da3f mov ax, word ptr [0x1064e672] */
  AX = (r16((uint32_t)(0x1064e672)));
  /* 1062da45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062da48 cmp dword ptr [0x1064e618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062da4f je 0x1062dbaa */
  if (C.zf) goto L_1062dbaa;
  /* 1062da55 push 0x1064e640 */
  push32((uint32_t)(0x1064e640u));
  /* 1062da5a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1062da5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062da5f push ecx */
  push32((uint32_t)(ECX));
  /* 1062da60 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062da62 call 0x10630aa0 */
  push32(0x1062da67u); f_10630aa0();
  /* 1062da67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062da6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062da6d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1062da6f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1062da72 push 0x1064e644 */
  push32((uint32_t)(0x1064e644u));
  /* 1062da77 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1062da79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062da7c push eax */
  push32((uint32_t)(EAX));
  /* 1062da7d push 1 */
  push32((uint32_t)(0x1u));
  /* 1062da7f call 0x10630aa0 */
  push32(0x1062da84u); f_10630aa0();
  /* 1062da84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062da87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062da8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062da8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062da8f push 0x1064e648 */
  push32((uint32_t)(0x1064e648u));
  /* 1062da94 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1062da96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062da99 push edx */
  push32((uint32_t)(EDX));
  /* 1062da9a push 1 */
  push32((uint32_t)(0x1u));
  /* 1062da9c call 0x10630aa0 */
  push32(0x1062daa1u); f_10630aa0();
  /* 1062daa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062daa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062daa7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062daa9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062daac mov edx, dword ptr [0x1064e648] */
  EDX = (r32((uint32_t)(0x1064e648)));
  /* 1062dab2 push edx */
  push32((uint32_t)(EDX));
  /* 1062dab3 call 0x1062dce0 */
  push32(0x1062dab8u); f_1062dce0();
  /* 1062dab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dabb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062dabf je 0x1062db19 */
  if (C.zf) goto L_1062db19;
  /* 1062dac1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dac3 mov eax, dword ptr [0x1064e640] */
  EAX = (r32((uint32_t)(0x1064e640)));
  /* 1062dac8 push eax */
  push32((uint32_t)(EAX));
  /* 1062dac9 call 0x10623370 */
  push32(0x1062daceu); f_10623370();
  /* 1062dace add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dad1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dad3 mov ecx, dword ptr [0x1064e644] */
  ECX = (r32((uint32_t)(0x1064e644)));
  /* 1062dad9 push ecx */
  push32((uint32_t)(ECX));
  /* 1062dada call 0x10623370 */
  push32(0x1062dadfu); f_10623370();
  /* 1062dadf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dae4 mov edx, dword ptr [0x1064e648] */
  EDX = (r32((uint32_t)(0x1064e648)));
  /* 1062daea push edx */
  push32((uint32_t)(EDX));
  /* 1062daeb call 0x10623370 */
  push32(0x1062daf0u); f_10623370();
  /* 1062daf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062daf3 mov dword ptr [0x1064e640], 0 */
  w32((uint32_t)(0x1064e640), (0x0u));
  /* 1062dafd mov dword ptr [0x1064e644], 0 */
  w32((uint32_t)(0x1064e644), (0x0u));
  /* 1062db07 mov dword ptr [0x1064e648], 0 */
  w32((uint32_t)(0x1064e648), (0x0u));
  /* 1062db11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062db14 jmp 0x1062dcd2 */
  goto L_1062dcd2;
L_1062db19:;
  /* 1062db19 mov eax, dword ptr [0x1064dd88] */
  EAX = (r32((uint32_t)(0x1064dd88)));
  /* 1062db1e cmp dword ptr [eax], 0x1064dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1064dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062db24 je 0x1062db60 */
  if (C.zf) goto L_1062db60;
  /* 1062db26 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062db28 mov ecx, dword ptr [0x1064dd88] */
  ECX = (r32((uint32_t)(0x1064dd88)));
  /* 1062db2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062db30 push edx */
  push32((uint32_t)(EDX));
  /* 1062db31 call 0x10623370 */
  push32(0x1062db36u); f_10623370();
  /* 1062db36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062db39 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062db3b mov eax, dword ptr [0x1064dd88] */
  EAX = (r32((uint32_t)(0x1064dd88)));
  /* 1062db40 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1062db43 push ecx */
  push32((uint32_t)(ECX));
  /* 1062db44 call 0x10623370 */
  push32(0x1062db49u); f_10623370();
  /* 1062db49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062db4c push 2 */
  push32((uint32_t)(0x2u));
  /* 1062db4e mov edx, dword ptr [0x1064dd88] */
  EDX = (r32((uint32_t)(0x1064dd88)));
  /* 1062db54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1062db57 push eax */
  push32((uint32_t)(EAX));
  /* 1062db58 call 0x10623370 */
  push32(0x1062db5du); f_10623370();
  /* 1062db5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062db60:;
  /* 1062db60 mov ecx, dword ptr [0x1064dd88] */
  ECX = (r32((uint32_t)(0x1064dd88)));
  /* 1062db66 mov edx, dword ptr [0x1064e640] */
  EDX = (r32((uint32_t)(0x1064e640)));
  /* 1062db6c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1062db6e mov eax, dword ptr [0x1064dd88] */
  EAX = (r32((uint32_t)(0x1064dd88)));
  /* 1062db73 mov ecx, dword ptr [0x1064e644] */
  ECX = (r32((uint32_t)(0x1064e644)));
  /* 1062db79 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1062db7c mov edx, dword ptr [0x1064dd88] */
  EDX = (r32((uint32_t)(0x1064dd88)));
  /* 1062db82 mov eax, dword ptr [0x1064e648] */
  EAX = (r32((uint32_t)(0x1064e648)));
  /* 1062db87 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1062db8a mov ecx, dword ptr [0x1064dd88] */
  ECX = (r32((uint32_t)(0x1064dd88)));
  /* 1062db90 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062db92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1062db94 mov byte ptr [0x1064cea8], al */
  w8((uint32_t)(0x1064cea8), (AL));
  /* 1062db99 mov dword ptr [0x1064ceac], 1 */
  w32((uint32_t)(0x1064ceac), (0x1u));
  /* 1062dba3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062dba5 jmp 0x1062dcd2 */
  goto L_1062dcd2;
L_1062dbaa:;
  /* 1062dbaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dbac mov ecx, dword ptr [0x1064e640] */
  ECX = (r32((uint32_t)(0x1064e640)));
  /* 1062dbb2 push ecx */
  push32((uint32_t)(ECX));
  /* 1062dbb3 call 0x10623370 */
  push32(0x1062dbb8u); f_10623370();
  /* 1062dbb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dbbb push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dbbd mov edx, dword ptr [0x1064e644] */
  EDX = (r32((uint32_t)(0x1064e644)));
  /* 1062dbc3 push edx */
  push32((uint32_t)(EDX));
  /* 1062dbc4 call 0x10623370 */
  push32(0x1062dbc9u); f_10623370();
  /* 1062dbc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dbcc push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dbce mov eax, dword ptr [0x1064e648] */
  EAX = (r32((uint32_t)(0x1064e648)));
  /* 1062dbd3 push eax */
  push32((uint32_t)(EAX));
  /* 1062dbd4 call 0x10623370 */
  push32(0x1062dbd9u); f_10623370();
  /* 1062dbd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dbdc mov dword ptr [0x1064e640], 0 */
  w32((uint32_t)(0x1064e640), (0x0u));
  /* 1062dbe6 mov dword ptr [0x1064e644], 0 */
  w32((uint32_t)(0x1064e644), (0x0u));
  /* 1062dbf0 mov dword ptr [0x1064e648], 0 */
  w32((uint32_t)(0x1064e648), (0x0u));
  /* 1062dbfa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1062dbff push 0x1064a014 */
  push32((uint32_t)(0x1064a014u));
  /* 1062dc04 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dc06 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dc08 call 0x106228e0 */
  push32(0x1062dc0du); f_106228e0();
  /* 1062dc0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dc10 mov ecx, dword ptr [0x1064dd88] */
  ECX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dc16 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1062dc18 mov edx, dword ptr [0x1064dd88] */
  EDX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dc1e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062dc21 jne 0x1062dc2b */
  if (!C.zf) goto L_1062dc2b;
  /* 1062dc23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062dc26 jmp 0x1062dcd2 */
  goto L_1062dcd2;
L_1062dc2b:;
  /* 1062dc2b push 0x10649fe4 */
  push32((uint32_t)(0x10649fe4u));
  /* 1062dc30 mov eax, dword ptr [0x1064dd88] */
  EAX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dc35 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1062dc37 push ecx */
  push32((uint32_t)(ECX));
  /* 1062dc38 call 0x10625890 */
  push32(0x1062dc3du); f_10625890();
  /* 1062dc3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dc40 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1062dc45 push 0x1064a014 */
  push32((uint32_t)(0x1064a014u));
  /* 1062dc4a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dc4c push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dc4e call 0x106228e0 */
  push32(0x1062dc53u); f_106228e0();
  /* 1062dc53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dc56 mov edx, dword ptr [0x1064dd88] */
  EDX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dc5c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1062dc5f mov eax, dword ptr [0x1064dd88] */
  EAX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dc64 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062dc68 jne 0x1062dc6f */
  if (!C.zf) goto L_1062dc6f;
  /* 1062dc6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062dc6d jmp 0x1062dcd2 */
  goto L_1062dcd2;
L_1062dc6f:;
  /* 1062dc6f mov ecx, dword ptr [0x1064dd88] */
  ECX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dc75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1062dc78 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1062dc7b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1062dc80 push 0x1064a014 */
  push32((uint32_t)(0x1064a014u));
  /* 1062dc85 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dc87 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dc89 call 0x106228e0 */
  push32(0x1062dc8eu); f_106228e0();
  /* 1062dc8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dc91 mov ecx, dword ptr [0x1064dd88] */
  ECX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dc97 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1062dc9a mov edx, dword ptr [0x1064dd88] */
  EDX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dca0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062dca4 jne 0x1062dcab */
  if (!C.zf) goto L_1062dcab;
  /* 1062dca6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062dca9 jmp 0x1062dcd2 */
  goto L_1062dcd2;
L_1062dcab:;
  /* 1062dcab mov eax, dword ptr [0x1064dd88] */
  EAX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dcb0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1062dcb3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1062dcb6 mov edx, dword ptr [0x1064dd88] */
  EDX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dcbc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1062dcbe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1062dcc0 mov byte ptr [0x1064cea8], cl */
  w8((uint32_t)(0x1064cea8), (CL));
  /* 1062dcc6 mov dword ptr [0x1064ceac], 1 */
  w32((uint32_t)(0x1064ceac), (0x1u));
  /* 1062dcd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062dcd2:;
  /* 1062dcd2 mov esp, ebp */
  ESP = (EBP);
  /* 1062dcd4 pop ebp */
  EBP = (pop32());
  /* 1062dcd5 ret  */
  ESPCHK(0x1062da30u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1062dce0 (125 bytes, 49 insns) */
void f_1062dce0(void) {
  FTRACE(0x1062dce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062dce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062dce1 mov ebp, esp */
  EBP = (ESP);
  /* 1062dce3 push ecx */
  push32((uint32_t)(ECX));
L_1062dce4:;
  /* 1062dce4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dce7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062dcea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062dcec je 0x1062dd59 */
  if (C.zf) goto L_1062dd59;
  /* 1062dcee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dcf1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1062dcf4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062dcf7 jl 0x1062dd1d */
  if ((C.sf!=C.of)) goto L_1062dd1d;
  /* 1062dcf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dcfc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062dcff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062dd02 jg 0x1062dd1d */
  if ((!C.zf&&C.sf==C.of)) goto L_1062dd1d;
  /* 1062dd04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dd07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062dd0a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062dd0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dd10 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1062dd12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dd15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dd18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1062dd1b jmp 0x1062dd57 */
  goto L_1062dd57;
L_1062dd1d:;
  /* 1062dd1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dd20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062dd23 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062dd26 jne 0x1062dd4e */
  if (!C.zf) goto L_1062dd4e;
  /* 1062dd28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dd2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062dd2e:;
  /* 1062dd2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dd31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dd34 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1062dd37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1062dd39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dd3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dd3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1062dd42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dd45 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1062dd48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062dd4a jne 0x1062dd2e */
  if (!C.zf) goto L_1062dd2e;
  /* 1062dd4c jmp 0x1062dd57 */
  goto L_1062dd57;
L_1062dd4e:;
  /* 1062dd4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dd51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dd54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1062dd57:;
  /* 1062dd57 jmp 0x1062dce4 */
  goto L_1062dce4;
L_1062dd59:;
  /* 1062dd59 mov esp, ebp */
  ESP = (EBP);
  /* 1062dd5b pop ebp */
  EBP = (pop32());
  /* 1062dd5c ret  */
  ESPCHK(0x1062dce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd60 @ 0x1062dd60 (304 bytes, 85 insns) */
void f_1062dd60(void) {
  FTRACE(0x1062dd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062dd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1062dd61 mov ebp, esp */
  EBP = (ESP);
  /* 1062dd63 push ecx */
  push32((uint32_t)(ECX));
  /* 1062dd64 cmp dword ptr [0x1064e614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062dd6b je 0x1062de2c */
  if (C.zf) goto L_1062de2c;
  /* 1062dd71 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1062dd73 push 0x1064a020 */
  push32((uint32_t)(0x1064a020u));
  /* 1062dd78 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062dd7a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1062dd7c push 1 */
  push32((uint32_t)(0x1u));
  /* 1062dd7e call 0x10622cf0 */
  push32(0x1062dd83u); f_10622cf0();
  /* 1062dd83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dd86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062dd89 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062dd8d jne 0x1062dd99 */
  if (!C.zf) goto L_1062dd99;
  /* 1062dd8f mov eax, 1 */
  EAX = (0x1u);
  /* 1062dd94 jmp 0x1062de8c */
  goto L_1062de8c;
L_1062dd99:;
  /* 1062dd99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dd9c push eax */
  push32((uint32_t)(EAX));
  /* 1062dd9d call 0x1062de90 */
  push32(0x1062dda2u); f_1062de90();
  /* 1062dda2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dda5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062dda7 je 0x1062ddcd */
  if (C.zf) goto L_1062ddcd;
  /* 1062dda9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ddac push ecx */
  push32((uint32_t)(ECX));
  /* 1062ddad call 0x1062e120 */
  push32(0x1062ddb2u); f_1062e120();
  /* 1062ddb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ddb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062ddb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ddba push edx */
  push32((uint32_t)(EDX));
  /* 1062ddbb call 0x10623370 */
  push32(0x1062ddc0u); f_10623370();
  /* 1062ddc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ddc3 mov eax, 1 */
  EAX = (0x1u);
  /* 1062ddc8 jmp 0x1062de8c */
  goto L_1062de8c;
L_1062ddcd:;
  /* 1062ddcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ddd0 mov ecx, dword ptr [0x1064dd88] */
  ECX = (r32((uint32_t)(0x1064dd88)));
  /* 1062ddd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062ddd8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1062ddda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dddd mov ecx, dword ptr [0x1064dd88] */
  ECX = (r32((uint32_t)(0x1064dd88)));
  /* 1062dde3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1062dde6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1062dde9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ddec mov ecx, dword ptr [0x1064dd88] */
  ECX = (r32((uint32_t)(0x1064dd88)));
  /* 1062ddf2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1062ddf5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1062ddf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ddfb mov dword ptr [0x1064dd88], eax */
  w32((uint32_t)(0x1064dd88), (EAX));
  /* 1062de00 mov ecx, dword ptr [0x1064e64c] */
  ECX = (r32((uint32_t)(0x1064e64c)));
  /* 1062de06 push ecx */
  push32((uint32_t)(ECX));
  /* 1062de07 call 0x1062e120 */
  push32(0x1062de0cu); f_1062e120();
  /* 1062de0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062de0f push 2 */
  push32((uint32_t)(0x2u));
  /* 1062de11 mov edx, dword ptr [0x1064e64c] */
  EDX = (r32((uint32_t)(0x1064e64c)));
  /* 1062de17 push edx */
  push32((uint32_t)(EDX));
  /* 1062de18 call 0x10623370 */
  push32(0x1062de1du); f_10623370();
  /* 1062de1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062de20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062de23 mov dword ptr [0x1064e64c], eax */
  w32((uint32_t)(0x1064e64c), (EAX));
  /* 1062de28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062de2a jmp 0x1062de8c */
  goto L_1062de8c;
L_1062de2c:;
  /* 1062de2c mov ecx, dword ptr [0x1064dd88] */
  ECX = (r32((uint32_t)(0x1064dd88)));
  /* 1062de32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062de34 mov dword ptr [0x1064dd58], edx */
  w32((uint32_t)(0x1064dd58), (EDX));
  /* 1062de3a mov eax, dword ptr [0x1064dd88] */
  EAX = (r32((uint32_t)(0x1064dd88)));
  /* 1062de3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1062de42 mov dword ptr [0x1064dd5c], ecx */
  w32((uint32_t)(0x1064dd5c), (ECX));
  /* 1062de48 mov edx, dword ptr [0x1064dd88] */
  EDX = (r32((uint32_t)(0x1064dd88)));
  /* 1062de4e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1062de51 mov dword ptr [0x1064dd60], eax */
  w32((uint32_t)(0x1064dd60), (EAX));
  /* 1062de56 mov dword ptr [0x1064dd88], 0x1064dd58 */
  w32((uint32_t)(0x1064dd88), (0x1064dd58u));
  /* 1062de60 mov ecx, dword ptr [0x1064e64c] */
  ECX = (r32((uint32_t)(0x1064e64c)));
  /* 1062de66 push ecx */
  push32((uint32_t)(ECX));
  /* 1062de67 call 0x1062e120 */
  push32(0x1062de6cu); f_1062e120();
  /* 1062de6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062de6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1062de71 mov edx, dword ptr [0x1064e64c] */
  EDX = (r32((uint32_t)(0x1064e64c)));
  /* 1062de77 push edx */
  push32((uint32_t)(EDX));
  /* 1062de78 call 0x10623370 */
  push32(0x1062de7du); f_10623370();
  /* 1062de7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062de80 mov dword ptr [0x1064e64c], 0 */
  w32((uint32_t)(0x1064e64c), (0x0u));
  /* 1062de8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062de8c:;
  /* 1062de8c mov esp, ebp */
  ESP = (EBP);
  /* 1062de8e pop ebp */
  EBP = (pop32());
  /* 1062de8f ret  */
  ESPCHK(0x1062dd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de90 @ 0x1062de90 (525 bytes, 200 insns) */
void f_1062de90(void) {
  FTRACE(0x1062de90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062de90 push ebp */
  push32((uint32_t)(EBP));
  /* 1062de91 mov ebp, esp */
  EBP = (ESP);
  /* 1062de93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062de96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062de9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062de9f mov ax, word ptr [0x1064e66c] */
  AX = (r16((uint32_t)(0x1064e66c)));
  /* 1062dea5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062dea8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062deac jne 0x1062deb6 */
  if (!C.zf) goto L_1062deb6;
  /* 1062deae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062deb1 jmp 0x1062e099 */
  goto L_1062e099;
L_1062deb6:;
  /* 1062deb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062deb9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062debc push ecx */
  push32((uint32_t)(ECX));
  /* 1062debd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1062debf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dec2 push edx */
  push32((uint32_t)(EDX));
  /* 1062dec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062dec5 call 0x10630aa0 */
  push32(0x1062decau); f_10630aa0();
  /* 1062deca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062decd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062ded0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062ded2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062ded5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ded8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dedb push edx */
  push32((uint32_t)(EDX));
  /* 1062dedc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1062dede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dee1 push eax */
  push32((uint32_t)(EAX));
  /* 1062dee2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062dee4 call 0x10630aa0 */
  push32(0x1062dee9u); f_10630aa0();
  /* 1062dee9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062deec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062deef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062def1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062def4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062def7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062defa push edx */
  push32((uint32_t)(EDX));
  /* 1062defb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1062defd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062df00 push eax */
  push32((uint32_t)(EAX));
  /* 1062df01 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062df03 call 0x10630aa0 */
  push32(0x1062df08u); f_10630aa0();
  /* 1062df08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062df0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062df0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062df10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062df13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062df16 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062df19 push edx */
  push32((uint32_t)(EDX));
  /* 1062df1a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1062df1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062df1f push eax */
  push32((uint32_t)(EAX));
  /* 1062df20 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062df22 call 0x10630aa0 */
  push32(0x1062df27u); f_10630aa0();
  /* 1062df27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062df2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062df2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062df2f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062df32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062df35 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062df38 push edx */
  push32((uint32_t)(EDX));
  /* 1062df39 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1062df3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062df3e push eax */
  push32((uint32_t)(EAX));
  /* 1062df3f push 1 */
  push32((uint32_t)(0x1u));
  /* 1062df41 call 0x10630aa0 */
  push32(0x1062df46u); f_10630aa0();
  /* 1062df46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062df49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062df4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062df4e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062df51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062df54 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1062df57 push eax */
  push32((uint32_t)(EAX));
  /* 1062df58 call 0x1062e0a0 */
  push32(0x1062df5du); f_1062e0a0();
  /* 1062df5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062df60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062df63 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062df66 push ecx */
  push32((uint32_t)(ECX));
  /* 1062df67 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1062df69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062df6c push edx */
  push32((uint32_t)(EDX));
  /* 1062df6d push 1 */
  push32((uint32_t)(0x1u));
  /* 1062df6f call 0x10630aa0 */
  push32(0x1062df74u); f_10630aa0();
  /* 1062df74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062df77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062df7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062df7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062df7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062df82 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062df85 push edx */
  push32((uint32_t)(EDX));
  /* 1062df86 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1062df88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062df8b push eax */
  push32((uint32_t)(EAX));
  /* 1062df8c push 1 */
  push32((uint32_t)(0x1u));
  /* 1062df8e call 0x10630aa0 */
  push32(0x1062df93u); f_10630aa0();
  /* 1062df93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062df96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062df99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062df9b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062df9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dfa1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dfa4 push edx */
  push32((uint32_t)(EDX));
  /* 1062dfa5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1062dfa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dfaa push eax */
  push32((uint32_t)(EAX));
  /* 1062dfab push 0 */
  push32((uint32_t)(0x0u));
  /* 1062dfad call 0x10630aa0 */
  push32(0x1062dfb2u); f_10630aa0();
  /* 1062dfb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dfb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062dfb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062dfba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062dfbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dfc0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dfc3 push edx */
  push32((uint32_t)(EDX));
  /* 1062dfc4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1062dfc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dfc9 push eax */
  push32((uint32_t)(EAX));
  /* 1062dfca push 0 */
  push32((uint32_t)(0x0u));
  /* 1062dfcc call 0x10630aa0 */
  push32(0x1062dfd1u); f_10630aa0();
  /* 1062dfd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dfd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062dfd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062dfd9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062dfdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dfdf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dfe2 push edx */
  push32((uint32_t)(EDX));
  /* 1062dfe3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1062dfe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062dfe8 push eax */
  push32((uint32_t)(EAX));
  /* 1062dfe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062dfeb call 0x10630aa0 */
  push32(0x1062dff0u); f_10630aa0();
  /* 1062dff0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062dff3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062dff6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062dff8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062dffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062dffe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e001 push edx */
  push32((uint32_t)(EDX));
  /* 1062e002 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1062e004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e007 push eax */
  push32((uint32_t)(EAX));
  /* 1062e008 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e00a call 0x10630aa0 */
  push32(0x1062e00fu); f_10630aa0();
  /* 1062e00f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e012 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062e015 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e017 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062e01a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e01d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e020 push edx */
  push32((uint32_t)(EDX));
  /* 1062e021 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1062e023 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e026 push eax */
  push32((uint32_t)(EAX));
  /* 1062e027 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e029 call 0x10630aa0 */
  push32(0x1062e02eu); f_10630aa0();
  /* 1062e02e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e031 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062e034 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e036 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062e039 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e03c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e03f push edx */
  push32((uint32_t)(EDX));
  /* 1062e040 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1062e042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e045 push eax */
  push32((uint32_t)(EAX));
  /* 1062e046 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e048 call 0x10630aa0 */
  push32(0x1062e04du); f_10630aa0();
  /* 1062e04d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e050 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062e053 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e055 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062e058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e05b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e05e push edx */
  push32((uint32_t)(EDX));
  /* 1062e05f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1062e061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e064 push eax */
  push32((uint32_t)(EAX));
  /* 1062e065 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e067 call 0x10630aa0 */
  push32(0x1062e06cu); f_10630aa0();
  /* 1062e06c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e06f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062e072 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e074 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062e077 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e07a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e07d push edx */
  push32((uint32_t)(EDX));
  /* 1062e07e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1062e080 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e083 push eax */
  push32((uint32_t)(EAX));
  /* 1062e084 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e086 call 0x10630aa0 */
  push32(0x1062e08bu); f_10630aa0();
  /* 1062e08b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e08e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062e091 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e093 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062e096 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1062e099:;
  /* 1062e099 mov esp, ebp */
  ESP = (EBP);
  /* 1062e09b pop ebp */
  EBP = (pop32());
  /* 1062e09c ret  */
  ESPCHK(0x1062de90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1062e0a0 (125 bytes, 49 insns) */
void f_1062e0a0(void) {
  FTRACE(0x1062e0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062e0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1062e0a3 push ecx */
  push32((uint32_t)(ECX));
L_1062e0a4:;
  /* 1062e0a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e0a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062e0aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062e0ac je 0x1062e119 */
  if (C.zf) goto L_1062e119;
  /* 1062e0ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e0b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1062e0b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e0b7 jl 0x1062e0dd */
  if ((C.sf!=C.of)) goto L_1062e0dd;
  /* 1062e0b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e0bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062e0bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e0c2 jg 0x1062e0dd */
  if ((!C.zf&&C.sf==C.of)) goto L_1062e0dd;
  /* 1062e0c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e0c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062e0ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062e0cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e0d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1062e0d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e0d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e0d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1062e0db jmp 0x1062e117 */
  goto L_1062e117;
L_1062e0dd:;
  /* 1062e0dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e0e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062e0e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e0e6 jne 0x1062e10e */
  if (!C.zf) goto L_1062e10e;
  /* 1062e0e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e0eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062e0ee:;
  /* 1062e0ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e0f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e0f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1062e0f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1062e0f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e0fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e0ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1062e102 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e105 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1062e108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e10a jne 0x1062e0ee */
  if (!C.zf) goto L_1062e0ee;
  /* 1062e10c jmp 0x1062e117 */
  goto L_1062e117;
L_1062e10e:;
  /* 1062e10e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e111 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e114 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1062e117:;
  /* 1062e117 jmp 0x1062e0a4 */
  goto L_1062e0a4;
L_1062e119:;
  /* 1062e119 mov esp, ebp */
  ESP = (EBP);
  /* 1062e11b pop ebp */
  EBP = (pop32());
  /* 1062e11c ret  */
  ESPCHK(0x1062e0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e120 @ 0x1062e120 (147 bytes, 52 insns) */
void f_1062e120(void) {
  FTRACE(0x1062e120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e120 push ebp */
  push32((uint32_t)(EBP));
  /* 1062e121 mov ebp, esp */
  EBP = (ESP);
  /* 1062e123 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e127 jne 0x1062e12e */
  if (!C.zf) goto L_1062e12e;
  /* 1062e129 jmp 0x1062e1b1 */
  goto L_1062e1b1;
L_1062e12e:;
  /* 1062e12e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e131 cmp dword ptr [eax + 0xc], 0x1064e6a8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1064e6a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e138 je 0x1062e1b1 */
  if (C.zf) goto L_1062e1b1;
  /* 1062e13a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e13c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e13f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062e142 push edx */
  push32((uint32_t)(EDX));
  /* 1062e143 call 0x10623370 */
  push32(0x1062e148u); f_10623370();
  /* 1062e148 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e14b push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e14d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e150 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1062e153 push ecx */
  push32((uint32_t)(ECX));
  /* 1062e154 call 0x10623370 */
  push32(0x1062e159u); f_10623370();
  /* 1062e159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e15c push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e15e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e161 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1062e164 push eax */
  push32((uint32_t)(EAX));
  /* 1062e165 call 0x10623370 */
  push32(0x1062e16au); f_10623370();
  /* 1062e16a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e16d push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e16f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e172 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1062e175 push edx */
  push32((uint32_t)(EDX));
  /* 1062e176 call 0x10623370 */
  push32(0x1062e17bu); f_10623370();
  /* 1062e17b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e17e push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e183 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1062e186 push ecx */
  push32((uint32_t)(ECX));
  /* 1062e187 call 0x10623370 */
  push32(0x1062e18cu); f_10623370();
  /* 1062e18c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e18f push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e191 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e194 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1062e197 push eax */
  push32((uint32_t)(EAX));
  /* 1062e198 call 0x10623370 */
  push32(0x1062e19du); f_10623370();
  /* 1062e19d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e1a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e1a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e1a5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1062e1a8 push edx */
  push32((uint32_t)(EDX));
  /* 1062e1a9 call 0x10623370 */
  push32(0x1062e1aeu); f_10623370();
  /* 1062e1ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062e1b1:;
  /* 1062e1b1 pop ebp */
  EBP = (pop32());
  /* 1062e1b2 ret  */
  ESPCHK(0x1062e120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1c0 @ 0x1062e1c0 (928 bytes, 284 insns) */
void f_1062e1c0(void) {
  FTRACE(0x1062e1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062e1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1062e1c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062e1c6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1062e1cd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1062e1d4 cmp dword ptr [0x1064e610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e1db je 0x1062e511 */
  if (C.zf) goto L_1062e511;
  /* 1062e1e1 cmp dword ptr [0x1064e620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e1e8 jne 0x1062e210 */
  if (!C.zf) goto L_1062e210;
  /* 1062e1ea push 0x1064e620 */
  push32((uint32_t)(0x1064e620u));
  /* 1062e1ef push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1062e1f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e1f6 mov ax, word ptr [0x1064e664] */
  AX = (r16((uint32_t)(0x1064e664)));
  /* 1062e1fc push eax */
  push32((uint32_t)(EAX));
  /* 1062e1fd push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e1ff call 0x10630aa0 */
  push32(0x1062e204u); f_10630aa0();
  /* 1062e204 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e207 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e209 je 0x1062e210 */
  if (C.zf) goto L_1062e210;
  /* 1062e20b jmp 0x1062e4d2 */
  goto L_1062e4d2;
L_1062e210:;
  /* 1062e210 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1062e212 push 0x1064a02c */
  push32((uint32_t)(0x1064a02cu));
  /* 1062e217 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e219 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1062e21e call 0x106228e0 */
  push32(0x1062e223u); f_106228e0();
  /* 1062e223 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e226 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1062e229 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1062e22b push 0x1064a02c */
  push32((uint32_t)(0x1064a02cu));
  /* 1062e230 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e232 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1062e237 call 0x106228e0 */
  push32(0x1062e23cu); f_106228e0();
  /* 1062e23c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e23f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1062e242 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1062e244 push 0x1064a02c */
  push32((uint32_t)(0x1064a02cu));
  /* 1062e249 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e24b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1062e250 call 0x106228e0 */
  push32(0x1062e255u); f_106228e0();
  /* 1062e255 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e258 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1062e25b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1062e25d push 0x1064a02c */
  push32((uint32_t)(0x1064a02cu));
  /* 1062e262 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e264 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1062e269 call 0x106228e0 */
  push32(0x1062e26eu); f_106228e0();
  /* 1062e26e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e271 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1062e274 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e278 je 0x1062e28c */
  if (C.zf) goto L_1062e28c;
  /* 1062e27a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e27e je 0x1062e28c */
  if (C.zf) goto L_1062e28c;
  /* 1062e280 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e284 je 0x1062e28c */
  if (C.zf) goto L_1062e28c;
  /* 1062e286 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e28a jne 0x1062e291 */
  if (!C.zf) goto L_1062e291;
L_1062e28c:;
  /* 1062e28c jmp 0x1062e4d2 */
  goto L_1062e4d2;
L_1062e291:;
  /* 1062e291 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1062e294 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1062e297 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1062e29e jmp 0x1062e2a9 */
  goto L_1062e2a9;
L_1062e2a0:;
  /* 1062e2a0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062e2a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e2a6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1062e2a9:;
  /* 1062e2a9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e2b0 jge 0x1062e2c5 */
  if ((C.sf==C.of)) goto L_1062e2c5;
  /* 1062e2b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e2b5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1062e2b8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1062e2ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e2bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e2c0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1062e2c3 jmp 0x1062e2a0 */
  goto L_1062e2a0;
L_1062e2c5:;
  /* 1062e2c5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1062e2c8 push eax */
  push32((uint32_t)(EAX));
  /* 1062e2c9 mov ecx, dword ptr [0x1064e620] */
  ECX = (r32((uint32_t)(0x1064e620)));
  /* 1062e2cf push ecx */
  push32((uint32_t)(ECX));
  /* 1062e2d0 call dword ptr [0x10650318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650318))), 0x1062e2d6u);
  /* 1062e2d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e2d8 jne 0x1062e2df */
  if (!C.zf) goto L_1062e2df;
  /* 1062e2da jmp 0x1062e4d2 */
  goto L_1062e4d2;
L_1062e2df:;
  /* 1062e2df cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e2e3 jbe 0x1062e2ea */
  if ((C.cf||C.zf)) goto L_1062e2ea;
  /* 1062e2e5 jmp 0x1062e4d2 */
  goto L_1062e4d2;
L_1062e2ea:;
  /* 1062e2ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062e2ed and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1062e2f3 mov dword ptr [0x1064cea4], edx */
  w32((uint32_t)(0x1064cea4), (EDX));
  /* 1062e2f9 cmp dword ptr [0x1064cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e300 jle 0x1062e359 */
  if ((C.zf||C.sf!=C.of)) goto L_1062e359;
  /* 1062e302 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1062e305 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1062e308 jmp 0x1062e313 */
  goto L_1062e313;
L_1062e30a:;
  /* 1062e30a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e30d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e310 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1062e313:;
  /* 1062e313 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e316 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e318 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1062e31a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e31c je 0x1062e359 */
  if (C.zf) goto L_1062e359;
  /* 1062e31e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e321 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1062e323 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1062e326 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062e328 je 0x1062e359 */
  if (C.zf) goto L_1062e359;
  /* 1062e32a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e32d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e32f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1062e331 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1062e334 jmp 0x1062e33f */
  goto L_1062e33f;
L_1062e336:;
  /* 1062e336 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062e339 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e33c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1062e33f:;
  /* 1062e33f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e342 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e344 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1062e347 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e34a jg 0x1062e357 */
  if ((!C.zf&&C.sf==C.of)) goto L_1062e357;
  /* 1062e34c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1062e34f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e352 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1062e355 jmp 0x1062e336 */
  goto L_1062e336;
L_1062e357:;
  /* 1062e357 jmp 0x1062e30a */
  goto L_1062e30a;
L_1062e359:;
  /* 1062e359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e35b push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e35d push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e35f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062e362 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e365 push eax */
  push32((uint32_t)(EAX));
  /* 1062e366 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1062e36b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1062e36e push ecx */
  push32((uint32_t)(ECX));
  /* 1062e36f push 1 */
  push32((uint32_t)(0x1u));
  /* 1062e371 call 0x1062ab10 */
  push32(0x1062e376u); f_1062ab10();
  /* 1062e376 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e37b jne 0x1062e382 */
  if (!C.zf) goto L_1062e382;
  /* 1062e37d jmp 0x1062e4d2 */
  goto L_1062e4d2;
L_1062e382:;
  /* 1062e382 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062e385 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1062e38a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062e38d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1062e390 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1062e397 jmp 0x1062e3a2 */
  goto L_1062e3a2;
L_1062e399:;
  /* 1062e399 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062e39c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e39f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1062e3a2:;
  /* 1062e3a2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e3a9 jge 0x1062e3c0 */
  if ((C.sf==C.of)) goto L_1062e3c0;
  /* 1062e3ab mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062e3ae mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1062e3b2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1062e3b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062e3b8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e3bb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1062e3be jmp 0x1062e399 */
  goto L_1062e399;
L_1062e3c0:;
  /* 1062e3c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e3c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062e3c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1062e3c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e3ca push edx */
  push32((uint32_t)(EDX));
  /* 1062e3cb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1062e3d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062e3d3 push eax */
  push32((uint32_t)(EAX));
  /* 1062e3d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062e3d6 call 0x10630d40 */
  push32(0x1062e3dbu); f_10630d40();
  /* 1062e3db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e3de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e3e0 jne 0x1062e3e7 */
  if (!C.zf) goto L_1062e3e7;
  /* 1062e3e2 jmp 0x1062e4d2 */
  goto L_1062e4d2;
L_1062e3e7:;
  /* 1062e3e7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1062e3ea mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1062e3ef cmp dword ptr [0x1064cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e3f6 jle 0x1062e453 */
  if ((C.zf||C.sf!=C.of)) goto L_1062e453;
  /* 1062e3f8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1062e3fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1062e3fe jmp 0x1062e409 */
  goto L_1062e409;
L_1062e400:;
  /* 1062e400 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e403 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e406 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1062e409:;
  /* 1062e409 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e40c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1062e40e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1062e410 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062e412 je 0x1062e453 */
  if (C.zf) goto L_1062e453;
  /* 1062e414 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e417 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e419 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1062e41c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062e41e je 0x1062e453 */
  if (C.zf) goto L_1062e453;
  /* 1062e420 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e425 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1062e427 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1062e42a jmp 0x1062e435 */
  goto L_1062e435;
L_1062e42c:;
  /* 1062e42c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062e42f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e432 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1062e435:;
  /* 1062e435 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062e438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e43a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1062e43d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e440 jg 0x1062e451 */
  if ((!C.zf&&C.sf==C.of)) goto L_1062e451;
  /* 1062e442 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1062e445 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062e448 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1062e44f jmp 0x1062e42c */
  goto L_1062e42c;
L_1062e451:;
  /* 1062e451 jmp 0x1062e400 */
  goto L_1062e400;
L_1062e453:;
  /* 1062e453 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062e456 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e459 mov dword ptr [0x1064cc98], eax */
  w32((uint32_t)(0x1064cc98), (EAX));
  /* 1062e45e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1062e461 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e464 mov dword ptr [0x1064cc9c], ecx */
  w32((uint32_t)(0x1064cc9c), (ECX));
  /* 1062e46a cmp dword ptr [0x1064e650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e471 je 0x1062e484 */
  if (C.zf) goto L_1062e484;
  /* 1062e473 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e475 mov edx, dword ptr [0x1064e650] */
  EDX = (r32((uint32_t)(0x1064e650)));
  /* 1062e47b push edx */
  push32((uint32_t)(EDX));
  /* 1062e47c call 0x10623370 */
  push32(0x1062e481u); f_10623370();
  /* 1062e481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062e484:;
  /* 1062e484 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062e487 mov dword ptr [0x1064e650], eax */
  w32((uint32_t)(0x1064e650), (EAX));
  /* 1062e48c cmp dword ptr [0x1064e654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e493 je 0x1062e4a6 */
  if (C.zf) goto L_1062e4a6;
  /* 1062e495 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e497 mov ecx, dword ptr [0x1064e654] */
  ECX = (r32((uint32_t)(0x1064e654)));
  /* 1062e49d push ecx */
  push32((uint32_t)(ECX));
  /* 1062e49e call 0x10623370 */
  push32(0x1062e4a3u); f_10623370();
  /* 1062e4a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062e4a6:;
  /* 1062e4a6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1062e4a9 mov dword ptr [0x1064e654], edx */
  w32((uint32_t)(0x1064e654), (EDX));
  /* 1062e4af push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e4b1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1062e4b4 push eax */
  push32((uint32_t)(EAX));
  /* 1062e4b5 call 0x10623370 */
  push32(0x1062e4bau); f_10623370();
  /* 1062e4ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e4bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e4bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062e4c2 push ecx */
  push32((uint32_t)(ECX));
  /* 1062e4c3 call 0x10623370 */
  push32(0x1062e4c8u); f_10623370();
  /* 1062e4c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e4cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e4cd jmp 0x1062e55c */
  goto L_1062e55c;
L_1062e4d2:;
  /* 1062e4d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e4d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1062e4d7 push edx */
  push32((uint32_t)(EDX));
  /* 1062e4d8 call 0x10623370 */
  push32(0x1062e4ddu); f_10623370();
  /* 1062e4dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e4e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e4e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1062e4e5 push eax */
  push32((uint32_t)(EAX));
  /* 1062e4e6 call 0x10623370 */
  push32(0x1062e4ebu); f_10623370();
  /* 1062e4eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e4ee push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e4f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1062e4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062e4f4 call 0x10623370 */
  push32(0x1062e4f9u); f_10623370();
  /* 1062e4f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e4fc push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e4fe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1062e501 push edx */
  push32((uint32_t)(EDX));
  /* 1062e502 call 0x10623370 */
  push32(0x1062e507u); f_10623370();
  /* 1062e507 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e50a mov eax, 1 */
  EAX = (0x1u);
  /* 1062e50f jmp 0x1062e55c */
  goto L_1062e55c;
L_1062e511:;
  /* 1062e511 mov dword ptr [0x1064cc98], 0x1064cca2 */
  w32((uint32_t)(0x1064cc98), (0x1064cca2u));
  /* 1062e51b mov dword ptr [0x1064cc9c], 0x1064cca2 */
  w32((uint32_t)(0x1064cc9c), (0x1064cca2u));
  /* 1062e525 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e527 mov eax, dword ptr [0x1064e650] */
  EAX = (r32((uint32_t)(0x1064e650)));
  /* 1062e52c push eax */
  push32((uint32_t)(EAX));
  /* 1062e52d call 0x10623370 */
  push32(0x1062e532u); f_10623370();
  /* 1062e532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e535 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062e537 mov ecx, dword ptr [0x1064e654] */
  ECX = (r32((uint32_t)(0x1064e654)));
  /* 1062e53d push ecx */
  push32((uint32_t)(ECX));
  /* 1062e53e call 0x10623370 */
  push32(0x1062e543u); f_10623370();
  /* 1062e543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e546 mov dword ptr [0x1064e650], 0 */
  w32((uint32_t)(0x1064e650), (0x0u));
  /* 1062e550 mov dword ptr [0x1064e654], 0 */
  w32((uint32_t)(0x1064e654), (0x0u));
  /* 1062e55a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062e55c:;
  /* 1062e55c mov esp, ebp */
  ESP = (EBP);
  /* 1062e55e pop ebp */
  EBP = (pop32());
  /* 1062e55f ret  */
  ESPCHK(0x1062e1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e560 @ 0x1062e560 (7 bytes, 5 insns) */
void f_1062e560(void) {
  FTRACE(0x1062e560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e560 push ebp */
  push32((uint32_t)(EBP));
  /* 1062e561 mov ebp, esp */
  EBP = (ESP);
  /* 1062e563 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e565 pop ebp */
  EBP = (pop32());
  /* 1062e566 ret  */
  ESPCHK(0x1062e560u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1062e570 (129 bytes, 56 insns) */
void f_1062e570(void) {
  FTRACE(0x1062e570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e570 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1062e574 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1062e578 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1062e57e jne 0x1062e5bc */
  if (!C.zf) goto L_1062e5bc;
L_1062e580:;
  /* 1062e580 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1062e582 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1062e584 jne 0x1062e5b4 */
  if (!C.zf) goto L_1062e5b4;
  /* 1062e586 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1062e588 je 0x1062e5b0 */
  if (C.zf) goto L_1062e5b0;
  /* 1062e58a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1062e58d jne 0x1062e5b4 */
  if (!C.zf) goto L_1062e5b4;
  /* 1062e58f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1062e591 je 0x1062e5b0 */
  if (C.zf) goto L_1062e5b0;
  /* 1062e593 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1062e596 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1062e599 jne 0x1062e5b4 */
  if (!C.zf) goto L_1062e5b4;
  /* 1062e59b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1062e59d je 0x1062e5b0 */
  if (C.zf) goto L_1062e5b0;
  /* 1062e59f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1062e5a2 jne 0x1062e5b4 */
  if (!C.zf) goto L_1062e5b4;
  /* 1062e5a4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e5a7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e5aa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1062e5ac jne 0x1062e580 */
  if (!C.zf) goto L_1062e580;
  /* 1062e5ae mov edi, edi */
  EDI = (EDI);
L_1062e5b0:;
  /* 1062e5b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e5b2 ret  */
  ESPCHK(0x1062e570u, _esp0);
  ESP += 4; return;
  /* 1062e5b3 nop  */
  /* nop */
L_1062e5b4:;
  /* 1062e5b4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062e5b6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1062e5b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1062e5b9 ret  */
  ESPCHK(0x1062e570u, _esp0);
  ESP += 4; return;
  /* 1062e5ba mov edi, edi */
  EDI = (EDI);
L_1062e5bc:;
  /* 1062e5bc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1062e5c2 je 0x1062e5d8 */
  if (C.zf) goto L_1062e5d8;
  /* 1062e5c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1062e5c6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1062e5c7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1062e5c9 jne 0x1062e5b4 */
  if (!C.zf) goto L_1062e5b4;
  /* 1062e5cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1062e5cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1062e5ce je 0x1062e5b0 */
  if (C.zf) goto L_1062e5b0;
  /* 1062e5d0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1062e5d6 je 0x1062e580 */
  if (C.zf) goto L_1062e580;
L_1062e5d8:;
  /* 1062e5d8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1062e5db add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e5de cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1062e5e0 jne 0x1062e5b4 */
  if (!C.zf) goto L_1062e5b4;
  /* 1062e5e2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1062e5e4 je 0x1062e5b0 */
  if (C.zf) goto L_1062e5b0;
  /* 1062e5e6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1062e5e9 jne 0x1062e5b4 */
  if (!C.zf) goto L_1062e5b4;
  /* 1062e5eb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1062e5ed je 0x1062e5b0 */
  if (C.zf) goto L_1062e5b0;
  /* 1062e5ef add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e5f2 jmp 0x1062e580 */
  goto L_1062e580;
}

/* FUN_1000e600 @ 0x1062e600 (62 bytes, 35 insns) */
void f_1062e600(void) {
  FTRACE(0x1062e600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e600 push ebp */
  push32((uint32_t)(EBP));
  /* 1062e601 mov ebp, esp */
  EBP = (ESP);
  /* 1062e603 push esi */
  push32((uint32_t)(ESI));
  /* 1062e604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e606 push eax */
  push32((uint32_t)(EAX));
  /* 1062e607 push eax */
  push32((uint32_t)(EAX));
  /* 1062e608 push eax */
  push32((uint32_t)(EAX));
  /* 1062e609 push eax */
  push32((uint32_t)(EAX));
  /* 1062e60a push eax */
  push32((uint32_t)(EAX));
  /* 1062e60b push eax */
  push32((uint32_t)(EAX));
  /* 1062e60c push eax */
  push32((uint32_t)(EAX));
  /* 1062e60d push eax */
  push32((uint32_t)(EAX));
  /* 1062e60e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062e611 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1062e614:;
  /* 1062e614 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1062e616 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1062e618 je 0x1062e621 */
  if (C.zf) goto L_1062e621;
  /* 1062e61a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1062e61b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1062e61b");
  /* 1062e61f jmp 0x1062e614 */
  goto L_1062e614;
L_1062e621:;
  /* 1062e621 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e624 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1062e627 nop  */
  /* nop */
L_1062e628:;
  /* 1062e628 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1062e629 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1062e62b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1062e62d je 0x1062e636 */
  if (C.zf) goto L_1062e636;
  /* 1062e62f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1062e630 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1062e630");
  /* 1062e634 jae 0x1062e628 */
  if (!C.cf) goto L_1062e628;
L_1062e636:;
  /* 1062e636 mov eax, ecx */
  EAX = (ECX);
  /* 1062e638 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e63b pop esi */
  ESI = (pop32());
  /* 1062e63c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062e63d ret  */
  ESPCHK(0x1062e600u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1062e640 (56 bytes, 31 insns) */
void f_1062e640(void) {
  FTRACE(0x1062e640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e640 push ebp */
  push32((uint32_t)(EBP));
  /* 1062e641 mov ebp, esp */
  EBP = (ESP);
  /* 1062e643 push edi */
  push32((uint32_t)(EDI));
  /* 1062e644 push esi */
  push32((uint32_t)(ESI));
  /* 1062e645 push ebx */
  push32((uint32_t)(EBX));
  /* 1062e646 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062e649 jecxz 0x1062e671 */
  x86_unimpl("jecxz @ 0x1062e649");
  /* 1062e64b mov ebx, ecx */
  EBX = (ECX);
  /* 1062e64d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e650 mov esi, edi */
  ESI = (EDI);
  /* 1062e652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e654 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1062e656 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062e658 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e65a mov edi, esi */
  EDI = (ESI);
  /* 1062e65c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1062e65f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1062e661 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1062e664 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e666 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1062e669 ja 0x1062e66f */
  if ((!C.cf&&!C.zf)) goto L_1062e66f;
  /* 1062e66b je 0x1062e671 */
  if (C.zf) goto L_1062e671;
  /* 1062e66d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1062e66e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1062e66f:;
  /* 1062e66f not ecx */
  ECX = (~(ECX));
L_1062e671:;
  /* 1062e671 mov eax, ecx */
  EAX = (ECX);
  /* 1062e673 pop ebx */
  EBX = (pop32());
  /* 1062e674 pop esi */
  ESI = (pop32());
  /* 1062e675 pop edi */
  EDI = (pop32());
  /* 1062e676 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062e677 ret  */
  ESPCHK(0x1062e640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e680 @ 0x1062e680 (58 bytes, 32 insns) */
void f_1062e680(void) {
  FTRACE(0x1062e680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e680 push ebp */
  push32((uint32_t)(EBP));
  /* 1062e681 mov ebp, esp */
  EBP = (ESP);
  /* 1062e683 push esi */
  push32((uint32_t)(ESI));
  /* 1062e684 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e686 push eax */
  push32((uint32_t)(EAX));
  /* 1062e687 push eax */
  push32((uint32_t)(EAX));
  /* 1062e688 push eax */
  push32((uint32_t)(EAX));
  /* 1062e689 push eax */
  push32((uint32_t)(EAX));
  /* 1062e68a push eax */
  push32((uint32_t)(EAX));
  /* 1062e68b push eax */
  push32((uint32_t)(EAX));
  /* 1062e68c push eax */
  push32((uint32_t)(EAX));
  /* 1062e68d push eax */
  push32((uint32_t)(EAX));
  /* 1062e68e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062e691 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1062e694:;
  /* 1062e694 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1062e696 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1062e698 je 0x1062e6a1 */
  if (C.zf) goto L_1062e6a1;
  /* 1062e69a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1062e69b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1062e69b");
  /* 1062e69f jmp 0x1062e694 */
  goto L_1062e694;
L_1062e6a1:;
  /* 1062e6a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1062e6a4:;
  /* 1062e6a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1062e6a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1062e6a8 je 0x1062e6b4 */
  if (C.zf) goto L_1062e6b4;
  /* 1062e6aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1062e6ab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1062e6ab");
  /* 1062e6af jae 0x1062e6a4 */
  if (!C.cf) goto L_1062e6a4;
  /* 1062e6b1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1062e6b4:;
  /* 1062e6b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e6b7 pop esi */
  ESI = (pop32());
  /* 1062e6b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1062e6b9 ret  */
  ESPCHK(0x1062e680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6c0 @ 0x1062e6c0 (512 bytes, 147 insns) */
void f_1062e6c0(void) {
  FTRACE(0x1062e6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062e6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1062e6c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062e6c6 cmp dword ptr [0x1064e69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e6cd jne 0x1062e6f2 */
  if (!C.zf) goto L_1062e6f2;
  /* 1062e6cf call 0x1062f190 */
  push32(0x1062e6d4u); f_1062f190();
  /* 1062e6d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e6d6 je 0x1062e6e2 */
  if (C.zf) goto L_1062e6e2;
  /* 1062e6d8 mov eax, dword ptr [0x10650250] */
  EAX = (r32((uint32_t)(0x10650250)));
  /* 1062e6dd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062e6e0 jmp 0x1062e6e9 */
  goto L_1062e6e9;
L_1062e6e2:;
  /* 1062e6e2 mov dword ptr [ebp - 8], 0x1062f1e0 */
  w32((uint32_t)(EBP + -0x8), (0x1062f1e0u));
L_1062e6e9:;
  /* 1062e6e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062e6ec mov dword ptr [0x1064e69c], ecx */
  w32((uint32_t)(0x1064e69c), (ECX));
L_1062e6f2:;
  /* 1062e6f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e6f6 jne 0x1062e702 */
  if (!C.zf) goto L_1062e702;
  /* 1062e6f8 call 0x1062efe0 */
  push32(0x1062e6fdu); f_1062efe0();
  /* 1062e6fd jmp 0x1062e7ce */
  goto L_1062e7ce;
L_1062e702:;
  /* 1062e702 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e705 mov dword ptr [0x1064e68c], edx */
  w32((uint32_t)(0x1064e68c), (EDX));
  /* 1062e70b cmp dword ptr [0x1064e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e712 je 0x1062e734 */
  if (C.zf) goto L_1062e734;
  /* 1062e714 mov eax, dword ptr [0x1064e68c] */
  EAX = (r32((uint32_t)(0x1064e68c)));
  /* 1062e719 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062e71c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062e71e je 0x1062e734 */
  if (C.zf) goto L_1062e734;
  /* 1062e720 push 0x1064e68c */
  push32((uint32_t)(0x1064e68cu));
  /* 1062e725 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1062e727 push 0x1064da90 */
  push32((uint32_t)(0x1064da90u));
  /* 1062e72c call 0x1062e8c0 */
  push32(0x1062e731u); f_1062e8c0();
  /* 1062e731 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062e734:;
  /* 1062e734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e737 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e73a mov dword ptr [0x1064e690], edx */
  w32((uint32_t)(0x1064e690), (EDX));
  /* 1062e740 cmp dword ptr [0x1064e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e747 je 0x1062e769 */
  if (C.zf) goto L_1062e769;
  /* 1062e749 mov eax, dword ptr [0x1064e690] */
  EAX = (r32((uint32_t)(0x1064e690)));
  /* 1062e74e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062e751 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062e753 je 0x1062e769 */
  if (C.zf) goto L_1062e769;
  /* 1062e755 push 0x1064e690 */
  push32((uint32_t)(0x1064e690u));
  /* 1062e75a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1062e75c push 0x1064d9d8 */
  push32((uint32_t)(0x1064d9d8u));
  /* 1062e761 call 0x1062e8c0 */
  push32(0x1062e766u); f_1062e8c0();
  /* 1062e766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062e769:;
  /* 1062e769 mov dword ptr [0x1064e694], 0 */
  w32((uint32_t)(0x1064e694), (0x0u));
  /* 1062e773 cmp dword ptr [0x1064e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e77a je 0x1062e7ad */
  if (C.zf) goto L_1062e7ad;
  /* 1062e77c mov edx, dword ptr [0x1064e68c] */
  EDX = (r32((uint32_t)(0x1064e68c)));
  /* 1062e782 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1062e785 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e787 je 0x1062e7ad */
  if (C.zf) goto L_1062e7ad;
  /* 1062e789 cmp dword ptr [0x1064e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e790 je 0x1062e7a6 */
  if (C.zf) goto L_1062e7a6;
  /* 1062e792 mov ecx, dword ptr [0x1064e690] */
  ECX = (r32((uint32_t)(0x1064e690)));
  /* 1062e798 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1062e79b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062e79d je 0x1062e7a6 */
  if (C.zf) goto L_1062e7a6;
  /* 1062e79f call 0x1062e950 */
  push32(0x1062e7a4u); f_1062e950();
  /* 1062e7a4 jmp 0x1062e7ab */
  goto L_1062e7ab;
L_1062e7a6:;
  /* 1062e7a6 call 0x1062ed40 */
  push32(0x1062e7abu); f_1062ed40();
L_1062e7ab:;
  /* 1062e7ab jmp 0x1062e7ce */
  goto L_1062e7ce;
L_1062e7ad:;
  /* 1062e7ad cmp dword ptr [0x1064e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e7b4 je 0x1062e7c9 */
  if (C.zf) goto L_1062e7c9;
  /* 1062e7b6 mov eax, dword ptr [0x1064e690] */
  EAX = (r32((uint32_t)(0x1064e690)));
  /* 1062e7bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062e7be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062e7c0 je 0x1062e7c9 */
  if (C.zf) goto L_1062e7c9;
  /* 1062e7c2 call 0x1062eee0 */
  push32(0x1062e7c7u); f_1062eee0();
  /* 1062e7c7 jmp 0x1062e7ce */
  goto L_1062e7ce;
L_1062e7c9:;
  /* 1062e7c9 call 0x1062efe0 */
  push32(0x1062e7ceu); f_1062efe0();
L_1062e7ce:;
  /* 1062e7ce cmp dword ptr [0x1064e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e7d5 jne 0x1062e7de */
  if (!C.zf) goto L_1062e7de;
  /* 1062e7d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e7d9 jmp 0x1062e8bc */
  goto L_1062e8bc;
L_1062e7de:;
  /* 1062e7de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e7e1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e7e7 push edx */
  push32((uint32_t)(EDX));
  /* 1062e7e8 call 0x1062f010 */
  push32(0x1062e7edu); f_1062f010();
  /* 1062e7ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e7f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062e7f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e7f7 je 0x1062e80c */
  if (C.zf) goto L_1062e80c;
  /* 1062e7f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e7fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062e801 push eax */
  push32((uint32_t)(EAX));
  /* 1062e802 call dword ptr [0x10650254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650254))), 0x1062e808u);
  /* 1062e808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e80a jne 0x1062e813 */
  if (!C.zf) goto L_1062e813;
L_1062e80c:;
  /* 1062e80c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e80e jmp 0x1062e8bc */
  goto L_1062e8bc;
L_1062e813:;
  /* 1062e813 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062e815 mov ecx, dword ptr [0x1064e67c] */
  ECX = (r32((uint32_t)(0x1064e67c)));
  /* 1062e81b push ecx */
  push32((uint32_t)(ECX));
  /* 1062e81c call dword ptr [0x10650310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650310))), 0x1062e822u);
  /* 1062e822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e824 jne 0x1062e82d */
  if (!C.zf) goto L_1062e82d;
  /* 1062e826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e828 jmp 0x1062e8bc */
  goto L_1062e8bc;
L_1062e82d:;
  /* 1062e82d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e831 je 0x1062e858 */
  if (C.zf) goto L_1062e858;
  /* 1062e833 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062e836 mov ax, word ptr [0x1064e67c] */
  AX = (r16((uint32_t)(0x1064e67c)));
  /* 1062e83c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1062e83f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062e842 mov dx, word ptr [0x1064e698] */
  DX = (r16((uint32_t)(0x1064e698)));
  /* 1062e849 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1062e84d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062e850 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1062e854 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1062e858:;
  /* 1062e858 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e85c je 0x1062e8b7 */
  if (C.zf) goto L_1062e8b7;
  /* 1062e85e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1062e860 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062e863 push edx */
  push32((uint32_t)(EDX));
  /* 1062e864 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1062e869 mov eax, dword ptr [0x1064e67c] */
  EAX = (r32((uint32_t)(0x1064e67c)));
  /* 1062e86e push eax */
  push32((uint32_t)(EAX));
  /* 1062e86f call dword ptr [0x1064e69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e69c))), 0x1062e875u);
  /* 1062e875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e877 jne 0x1062e87d */
  if (!C.zf) goto L_1062e87d;
  /* 1062e879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e87b jmp 0x1062e8bc */
  goto L_1062e8bc;
L_1062e87d:;
  /* 1062e87d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1062e87f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062e882 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e885 push ecx */
  push32((uint32_t)(ECX));
  /* 1062e886 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1062e88b mov edx, dword ptr [0x1064e698] */
  EDX = (r32((uint32_t)(0x1064e698)));
  /* 1062e891 push edx */
  push32((uint32_t)(EDX));
  /* 1062e892 call dword ptr [0x1064e69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e69c))), 0x1062e898u);
  /* 1062e898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e89a jne 0x1062e8a0 */
  if (!C.zf) goto L_1062e8a0;
  /* 1062e89c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062e89e jmp 0x1062e8bc */
  goto L_1062e8bc;
L_1062e8a0:;
  /* 1062e8a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 1062e8a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062e8a5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e8aa push eax */
  push32((uint32_t)(EAX));
  /* 1062e8ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e8ae push ecx */
  push32((uint32_t)(ECX));
  /* 1062e8af call 0x10625420 */
  push32(0x1062e8b4u); f_10625420();
  /* 1062e8b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062e8b7:;
  /* 1062e8b7 mov eax, 1 */
  EAX = (0x1u);
L_1062e8bc:;
  /* 1062e8bc mov esp, ebp */
  ESP = (EBP);
  /* 1062e8be pop ebp */
  EBP = (pop32());
  /* 1062e8bf ret  */
  ESPCHK(0x1062e6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8c0 @ 0x1062e8c0 (130 bytes, 47 insns) */
void f_1062e8c0(void) {
  FTRACE(0x1062e8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062e8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1062e8c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062e8c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1062e8cd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1062e8d4:;
  /* 1062e8d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062e8d7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e8da jg 0x1062e93e */
  if ((!C.zf&&C.sf==C.of)) goto L_1062e93e;
  /* 1062e8dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e8e0 je 0x1062e93e */
  if (C.zf) goto L_1062e93e;
  /* 1062e8e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062e8e5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e8e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1062e8e9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062e8eb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1062e8ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062e8f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e8f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e8f6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1062e8f9 push eax */
  push32((uint32_t)(EAX));
  /* 1062e8fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062e8fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062e8ff push edx */
  push32((uint32_t)(EDX));
  /* 1062e900 call 0x10630fb0 */
  push32(0x1062e905u); f_10630fb0();
  /* 1062e905 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e908 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062e90b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e90f jne 0x1062e922 */
  if (!C.zf) goto L_1062e922;
  /* 1062e911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e914 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062e917 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1062e91b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062e91e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1062e920 jmp 0x1062e93c */
  goto L_1062e93c;
L_1062e922:;
  /* 1062e922 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e926 jge 0x1062e933 */
  if ((C.sf==C.of)) goto L_1062e933;
  /* 1062e928 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e92b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062e92e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1062e931 jmp 0x1062e93c */
  goto L_1062e93c;
L_1062e933:;
  /* 1062e933 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e936 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e939 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1062e93c:;
  /* 1062e93c jmp 0x1062e8d4 */
  goto L_1062e8d4;
L_1062e93e:;
  /* 1062e93e mov esp, ebp */
  ESP = (EBP);
  /* 1062e940 pop ebp */
  EBP = (pop32());
  /* 1062e941 ret  */
  ESPCHK(0x1062e8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e950 @ 0x1062e950 (186 bytes, 50 insns) */
void f_1062e950(void) {
  FTRACE(0x1062e950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062e950 push ebp */
  push32((uint32_t)(EBP));
  /* 1062e951 mov ebp, esp */
  EBP = (ESP);
  /* 1062e953 push ecx */
  push32((uint32_t)(ECX));
  /* 1062e954 mov eax, dword ptr [0x1064e68c] */
  EAX = (r32((uint32_t)(0x1064e68c)));
  /* 1062e959 push eax */
  push32((uint32_t)(EAX));
  /* 1062e95a call 0x10625710 */
  push32(0x1062e95fu); f_10625710();
  /* 1062e95f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e962 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e964 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e967 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1062e96a mov dword ptr [0x1064e688], ecx */
  w32((uint32_t)(0x1064e688), (ECX));
  /* 1062e970 mov edx, dword ptr [0x1064e690] */
  EDX = (r32((uint32_t)(0x1064e690)));
  /* 1062e976 push edx */
  push32((uint32_t)(EDX));
  /* 1062e977 call 0x10625710 */
  push32(0x1062e97cu); f_10625710();
  /* 1062e97c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e97f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062e981 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e984 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1062e987 mov dword ptr [0x1064e680], ecx */
  w32((uint32_t)(0x1064e680), (ECX));
  /* 1062e98d mov dword ptr [0x1064e67c], 0 */
  w32((uint32_t)(0x1064e67c), (0x0u));
  /* 1062e997 cmp dword ptr [0x1064e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062e99e je 0x1062e9a9 */
  if (C.zf) goto L_1062e9a9;
  /* 1062e9a0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1062e9a7 jmp 0x1062e9bb */
  goto L_1062e9bb;
L_1062e9a9:;
  /* 1062e9a9 mov edx, dword ptr [0x1064e68c] */
  EDX = (r32((uint32_t)(0x1064e68c)));
  /* 1062e9af push edx */
  push32((uint32_t)(EDX));
  /* 1062e9b0 call 0x1062f3f0 */
  push32(0x1062e9b5u); f_1062f3f0();
  /* 1062e9b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062e9b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062e9bb:;
  /* 1062e9bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062e9be mov dword ptr [0x1064e684], eax */
  w32((uint32_t)(0x1064e684), (EAX));
  /* 1062e9c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062e9c5 push 0x1062ea10 */
  push32((uint32_t)(0x1062ea10u));
  /* 1062e9ca call dword ptr [0x10650258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650258))), 0x1062e9d0u);
  /* 1062e9d0 mov ecx, dword ptr [0x1064e694] */
  ECX = (r32((uint32_t)(0x1064e694)));
  /* 1062e9d6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1062e9dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062e9de je 0x1062e9fc */
  if (C.zf) goto L_1062e9fc;
  /* 1062e9e0 mov edx, dword ptr [0x1064e694] */
  EDX = (r32((uint32_t)(0x1064e694)));
  /* 1062e9e6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1062e9ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062e9ee je 0x1062e9fc */
  if (C.zf) goto L_1062e9fc;
  /* 1062e9f0 mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062e9f5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1062e9f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062e9fa jne 0x1062ea06 */
  if (!C.zf) goto L_1062ea06;
L_1062e9fc:;
  /* 1062e9fc mov dword ptr [0x1064e694], 0 */
  w32((uint32_t)(0x1064e694), (0x0u));
L_1062ea06:;
  /* 1062ea06 mov esp, ebp */
  ESP = (EBP);
  /* 1062ea08 pop ebp */
  EBP = (pop32());
  /* 1062ea09 ret  */
  ESPCHK(0x1062e950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea10 @ 0x1062ea10 (804 bytes, 220 insns) */
void f_1062ea10(void) {
  FTRACE(0x1062ea10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062ea10 push ebp */
  push32((uint32_t)(EBP));
  /* 1062ea11 mov ebp, esp */
  EBP = (ESP);
  /* 1062ea13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062ea16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ea19 push eax */
  push32((uint32_t)(EAX));
  /* 1062ea1a call 0x1062f370 */
  push32(0x1062ea1fu); f_1062f370();
  /* 1062ea1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ea22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1062ea25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1062ea27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1062ea2a push ecx */
  push32((uint32_t)(ECX));
  /* 1062ea2b mov edx, dword ptr [0x1064e680] */
  EDX = (r32((uint32_t)(0x1064e680)));
  /* 1062ea31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062ea33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062ea35 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1062ea3b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ea41 push edx */
  push32((uint32_t)(EDX));
  /* 1062ea42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ea45 push eax */
  push32((uint32_t)(EAX));
  /* 1062ea46 call dword ptr [0x1064e69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e69c))), 0x1062ea4cu);
  /* 1062ea4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ea4e jne 0x1062ea64 */
  if (!C.zf) goto L_1062ea64;
  /* 1062ea50 mov dword ptr [0x1064e694], 0 */
  w32((uint32_t)(0x1064e694), (0x0u));
  /* 1062ea5a mov eax, 1 */
  EAX = (0x1u);
  /* 1062ea5f jmp 0x1062ed2e */
  goto L_1062ed2e;
L_1062ea64:;
  /* 1062ea64 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1062ea67 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ea68 mov edx, dword ptr [0x1064e690] */
  EDX = (r32((uint32_t)(0x1064e690)));
  /* 1062ea6e push edx */
  push32((uint32_t)(EDX));
  /* 1062ea6f call 0x10630fb0 */
  push32(0x1062ea74u); f_10630fb0();
  /* 1062ea74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ea77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ea79 jne 0x1062eb9f */
  if (!C.zf) goto L_1062eb9f;
  /* 1062ea7f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1062ea81 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1062ea84 push eax */
  push32((uint32_t)(EAX));
  /* 1062ea85 mov ecx, dword ptr [0x1064e688] */
  ECX = (r32((uint32_t)(0x1064e688)));
  /* 1062ea8b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062ea8d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062ea8f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1062ea95 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ea9b push ecx */
  push32((uint32_t)(ECX));
  /* 1062ea9c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ea9f push edx */
  push32((uint32_t)(EDX));
  /* 1062eaa0 call dword ptr [0x1064e69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e69c))), 0x1062eaa6u);
  /* 1062eaa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062eaa8 jne 0x1062eabe */
  if (!C.zf) goto L_1062eabe;
  /* 1062eaaa mov dword ptr [0x1064e694], 0 */
  w32((uint32_t)(0x1064e694), (0x0u));
  /* 1062eab4 mov eax, 1 */
  EAX = (0x1u);
  /* 1062eab9 jmp 0x1062ed2e */
  goto L_1062ed2e;
L_1062eabe:;
  /* 1062eabe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1062eac1 push eax */
  push32((uint32_t)(EAX));
  /* 1062eac2 mov ecx, dword ptr [0x1064e68c] */
  ECX = (r32((uint32_t)(0x1064e68c)));
  /* 1062eac8 push ecx */
  push32((uint32_t)(ECX));
  /* 1062eac9 call 0x10630fb0 */
  push32(0x1062eaceu); f_10630fb0();
  /* 1062eace add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ead1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ead3 jne 0x1062eb00 */
  if (!C.zf) goto L_1062eb00;
  /* 1062ead5 mov edx, dword ptr [0x1064e694] */
  EDX = (r32((uint32_t)(0x1064e694)));
  /* 1062eadb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1062eae1 mov dword ptr [0x1064e694], edx */
  w32((uint32_t)(0x1064e694), (EDX));
  /* 1062eae7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062eaea mov dword ptr [0x1064e698], eax */
  w32((uint32_t)(0x1064e698), (EAX));
  /* 1062eaef mov ecx, dword ptr [0x1064e698] */
  ECX = (r32((uint32_t)(0x1064e698)));
  /* 1062eaf5 mov dword ptr [0x1064e67c], ecx */
  w32((uint32_t)(0x1064e67c), (ECX));
  /* 1062eafb jmp 0x1062eb9f */
  goto L_1062eb9f;
L_1062eb00:;
  /* 1062eb00 mov edx, dword ptr [0x1064e694] */
  EDX = (r32((uint32_t)(0x1064e694)));
  /* 1062eb06 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1062eb09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062eb0b jne 0x1062eb9f */
  if (!C.zf) goto L_1062eb9f;
  /* 1062eb11 cmp dword ptr [0x1064e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062eb18 je 0x1062eb6d */
  if (C.zf) goto L_1062eb6d;
  /* 1062eb1a mov eax, dword ptr [0x1064e684] */
  EAX = (r32((uint32_t)(0x1064e684)));
  /* 1062eb1f push eax */
  push32((uint32_t)(EAX));
  /* 1062eb20 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1062eb23 push ecx */
  push32((uint32_t)(ECX));
  /* 1062eb24 mov edx, dword ptr [0x1064e68c] */
  EDX = (r32((uint32_t)(0x1064e68c)));
  /* 1062eb2a push edx */
  push32((uint32_t)(EDX));
  /* 1062eb2b call 0x10631080 */
  push32(0x1062eb30u); f_10631080();
  /* 1062eb30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062eb33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062eb35 jne 0x1062eb6d */
  if (!C.zf) goto L_1062eb6d;
  /* 1062eb37 mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062eb3c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1062eb3e mov dword ptr [0x1064e694], eax */
  w32((uint32_t)(0x1064e694), (EAX));
  /* 1062eb43 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062eb46 mov dword ptr [0x1064e698], ecx */
  w32((uint32_t)(0x1064e698), (ECX));
  /* 1062eb4c mov edx, dword ptr [0x1064e68c] */
  EDX = (r32((uint32_t)(0x1064e68c)));
  /* 1062eb52 push edx */
  push32((uint32_t)(EDX));
  /* 1062eb53 call 0x10625710 */
  push32(0x1062eb58u); f_10625710();
  /* 1062eb58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062eb5b cmp eax, dword ptr [0x1064e684] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064e684))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062eb61 jne 0x1062eb6b */
  if (!C.zf) goto L_1062eb6b;
  /* 1062eb63 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062eb66 mov dword ptr [0x1064e67c], eax */
  w32((uint32_t)(0x1064e67c), (EAX));
L_1062eb6b:;
  /* 1062eb6b jmp 0x1062eb9f */
  goto L_1062eb9f;
L_1062eb6d:;
  /* 1062eb6d mov ecx, dword ptr [0x1064e694] */
  ECX = (r32((uint32_t)(0x1064e694)));
  /* 1062eb73 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1062eb76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062eb78 jne 0x1062eb9f */
  if (!C.zf) goto L_1062eb9f;
  /* 1062eb7a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062eb7d push edx */
  push32((uint32_t)(EDX));
  /* 1062eb7e call 0x1062f0b0 */
  push32(0x1062eb83u); f_1062f0b0();
  /* 1062eb83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062eb86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062eb88 je 0x1062eb9f */
  if (C.zf) goto L_1062eb9f;
  /* 1062eb8a mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062eb8f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1062eb91 mov dword ptr [0x1064e694], eax */
  w32((uint32_t)(0x1064e694), (EAX));
  /* 1062eb96 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062eb99 mov dword ptr [0x1064e698], ecx */
  w32((uint32_t)(0x1064e698), (ECX));
L_1062eb9f:;
  /* 1062eb9f mov edx, dword ptr [0x1064e694] */
  EDX = (r32((uint32_t)(0x1064e694)));
  /* 1062eba5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1062ebab cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ebb1 je 0x1062ed21 */
  if (C.zf) goto L_1062ed21;
  /* 1062ebb7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1062ebb9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1062ebbc push eax */
  push32((uint32_t)(EAX));
  /* 1062ebbd mov ecx, dword ptr [0x1064e688] */
  ECX = (r32((uint32_t)(0x1064e688)));
  /* 1062ebc3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062ebc5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062ebc7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1062ebcd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ebd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ebd4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ebd7 push edx */
  push32((uint32_t)(EDX));
  /* 1062ebd8 call dword ptr [0x1064e69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e69c))), 0x1062ebdeu);
  /* 1062ebde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ebe0 jne 0x1062ebf6 */
  if (!C.zf) goto L_1062ebf6;
  /* 1062ebe2 mov dword ptr [0x1064e694], 0 */
  w32((uint32_t)(0x1064e694), (0x0u));
  /* 1062ebec mov eax, 1 */
  EAX = (0x1u);
  /* 1062ebf1 jmp 0x1062ed2e */
  goto L_1062ed2e;
L_1062ebf6:;
  /* 1062ebf6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1062ebf9 push eax */
  push32((uint32_t)(EAX));
  /* 1062ebfa mov ecx, dword ptr [0x1064e68c] */
  ECX = (r32((uint32_t)(0x1064e68c)));
  /* 1062ec00 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ec01 call 0x10630fb0 */
  push32(0x1062ec06u); f_10630fb0();
  /* 1062ec06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ec09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ec0b jne 0x1062ecc0 */
  if (!C.zf) goto L_1062ecc0;
  /* 1062ec11 mov edx, dword ptr [0x1064e694] */
  EDX = (r32((uint32_t)(0x1064e694)));
  /* 1062ec17 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1062ec1a mov dword ptr [0x1064e694], edx */
  w32((uint32_t)(0x1064e694), (EDX));
  /* 1062ec20 cmp dword ptr [0x1064e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ec27 je 0x1062ec4a */
  if (C.zf) goto L_1062ec4a;
  /* 1062ec29 mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062ec2e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1062ec31 mov dword ptr [0x1064e694], eax */
  w32((uint32_t)(0x1064e694), (EAX));
  /* 1062ec36 cmp dword ptr [0x1064e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ec3d jne 0x1062ec48 */
  if (!C.zf) goto L_1062ec48;
  /* 1062ec3f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ec42 mov dword ptr [0x1064e67c], ecx */
  w32((uint32_t)(0x1064e67c), (ECX));
L_1062ec48:;
  /* 1062ec48 jmp 0x1062ecbe */
  goto L_1062ecbe;
L_1062ec4a:;
  /* 1062ec4a cmp dword ptr [0x1064e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ec51 je 0x1062ec9f */
  if (C.zf) goto L_1062ec9f;
  /* 1062ec53 mov edx, dword ptr [0x1064e68c] */
  EDX = (r32((uint32_t)(0x1064e68c)));
  /* 1062ec59 push edx */
  push32((uint32_t)(EDX));
  /* 1062ec5a call 0x10625710 */
  push32(0x1062ec5fu); f_10625710();
  /* 1062ec5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ec62 cmp eax, dword ptr [0x1064e684] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064e684))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ec68 jne 0x1062ec9f */
  if (!C.zf) goto L_1062ec9f;
  /* 1062ec6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ec6c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ec6f push eax */
  push32((uint32_t)(EAX));
  /* 1062ec70 call 0x1062f100 */
  push32(0x1062ec75u); f_1062f100();
  /* 1062ec75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ec78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ec7a je 0x1062ec9d */
  if (C.zf) goto L_1062ec9d;
  /* 1062ec7c mov ecx, dword ptr [0x1064e694] */
  ECX = (r32((uint32_t)(0x1064e694)));
  /* 1062ec82 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1062ec85 mov dword ptr [0x1064e694], ecx */
  w32((uint32_t)(0x1064e694), (ECX));
  /* 1062ec8b cmp dword ptr [0x1064e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ec92 jne 0x1062ec9d */
  if (!C.zf) goto L_1062ec9d;
  /* 1062ec94 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ec97 mov dword ptr [0x1064e67c], edx */
  w32((uint32_t)(0x1064e67c), (EDX));
L_1062ec9d:;
  /* 1062ec9d jmp 0x1062ecbe */
  goto L_1062ecbe;
L_1062ec9f:;
  /* 1062ec9f mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062eca4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1062eca7 mov dword ptr [0x1064e694], eax */
  w32((uint32_t)(0x1064e694), (EAX));
  /* 1062ecac cmp dword ptr [0x1064e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ecb3 jne 0x1062ecbe */
  if (!C.zf) goto L_1062ecbe;
  /* 1062ecb5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ecb8 mov dword ptr [0x1064e67c], ecx */
  w32((uint32_t)(0x1064e67c), (ECX));
L_1062ecbe:;
  /* 1062ecbe jmp 0x1062ed21 */
  goto L_1062ed21;
L_1062ecc0:;
  /* 1062ecc0 cmp dword ptr [0x1064e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ecc7 jne 0x1062ed21 */
  if (!C.zf) goto L_1062ed21;
  /* 1062ecc9 cmp dword ptr [0x1064e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ecd0 je 0x1062ed21 */
  if (C.zf) goto L_1062ed21;
  /* 1062ecd2 mov edx, dword ptr [0x1064e684] */
  EDX = (r32((uint32_t)(0x1064e684)));
  /* 1062ecd8 push edx */
  push32((uint32_t)(EDX));
  /* 1062ecd9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1062ecdc push eax */
  push32((uint32_t)(EAX));
  /* 1062ecdd mov ecx, dword ptr [0x1064e68c] */
  ECX = (r32((uint32_t)(0x1064e68c)));
  /* 1062ece3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ece4 call 0x10631080 */
  push32(0x1062ece9u); f_10631080();
  /* 1062ece9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ecec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ecee jne 0x1062ed21 */
  if (!C.zf) goto L_1062ed21;
  /* 1062ecf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ecf2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ecf5 push edx */
  push32((uint32_t)(EDX));
  /* 1062ecf6 call 0x1062f100 */
  push32(0x1062ecfbu); f_1062f100();
  /* 1062ecfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ecfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ed00 je 0x1062ed21 */
  if (C.zf) goto L_1062ed21;
  /* 1062ed02 mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062ed07 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1062ed0a mov dword ptr [0x1064e694], eax */
  w32((uint32_t)(0x1064e694), (EAX));
  /* 1062ed0f cmp dword ptr [0x1064e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ed16 jne 0x1062ed21 */
  if (!C.zf) goto L_1062ed21;
  /* 1062ed18 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ed1b mov dword ptr [0x1064e67c], ecx */
  w32((uint32_t)(0x1064e67c), (ECX));
L_1062ed21:;
  /* 1062ed21 mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062ed26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1062ed29 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062ed2b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062ed2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1062ed2e:;
  /* 1062ed2e mov esp, ebp */
  ESP = (EBP);
  /* 1062ed30 pop ebp */
  EBP = (pop32());
  /* 1062ed31 ret 4 */
  ESPCHK(0x1062ea10u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ed40 @ 0x1062ed40 (116 bytes, 33 insns) */
void f_1062ed40(void) {
  FTRACE(0x1062ed40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062ed40 push ebp */
  push32((uint32_t)(EBP));
  /* 1062ed41 mov ebp, esp */
  EBP = (ESP);
  /* 1062ed43 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ed44 mov eax, dword ptr [0x1064e68c] */
  EAX = (r32((uint32_t)(0x1064e68c)));
  /* 1062ed49 push eax */
  push32((uint32_t)(EAX));
  /* 1062ed4a call 0x10625710 */
  push32(0x1062ed4fu); f_10625710();
  /* 1062ed4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ed52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062ed54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ed57 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1062ed5a mov dword ptr [0x1064e688], ecx */
  w32((uint32_t)(0x1064e688), (ECX));
  /* 1062ed60 cmp dword ptr [0x1064e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ed67 je 0x1062ed72 */
  if (C.zf) goto L_1062ed72;
  /* 1062ed69 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1062ed70 jmp 0x1062ed84 */
  goto L_1062ed84;
L_1062ed72:;
  /* 1062ed72 mov edx, dword ptr [0x1064e68c] */
  EDX = (r32((uint32_t)(0x1064e68c)));
  /* 1062ed78 push edx */
  push32((uint32_t)(EDX));
  /* 1062ed79 call 0x1062f3f0 */
  push32(0x1062ed7eu); f_1062f3f0();
  /* 1062ed7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ed81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062ed84:;
  /* 1062ed84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062ed87 mov dword ptr [0x1064e684], eax */
  w32((uint32_t)(0x1064e684), (EAX));
  /* 1062ed8c push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ed8e push 0x1062edc0 */
  push32((uint32_t)(0x1062edc0u));
  /* 1062ed93 call dword ptr [0x10650258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650258))), 0x1062ed99u);
  /* 1062ed99 mov ecx, dword ptr [0x1064e694] */
  ECX = (r32((uint32_t)(0x1064e694)));
  /* 1062ed9f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1062eda2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062eda4 jne 0x1062edb0 */
  if (!C.zf) goto L_1062edb0;
  /* 1062eda6 mov dword ptr [0x1064e694], 0 */
  w32((uint32_t)(0x1064e694), (0x0u));
L_1062edb0:;
  /* 1062edb0 mov esp, ebp */
  ESP = (EBP);
  /* 1062edb2 pop ebp */
  EBP = (pop32());
  /* 1062edb3 ret  */
  ESPCHK(0x1062ed40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edc0 @ 0x1062edc0 (287 bytes, 86 insns) */
void f_1062edc0(void) {
  FTRACE(0x1062edc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062edc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062edc1 mov ebp, esp */
  EBP = (ESP);
  /* 1062edc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062edc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062edc9 push eax */
  push32((uint32_t)(EAX));
  /* 1062edca call 0x1062f370 */
  push32(0x1062edcfu); f_1062f370();
  /* 1062edcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062edd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1062edd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1062edd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1062edda push ecx */
  push32((uint32_t)(ECX));
  /* 1062eddb mov edx, dword ptr [0x1064e688] */
  EDX = (r32((uint32_t)(0x1064e688)));
  /* 1062ede1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062ede3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062ede5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1062edeb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062edf1 push edx */
  push32((uint32_t)(EDX));
  /* 1062edf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062edf5 push eax */
  push32((uint32_t)(EAX));
  /* 1062edf6 call dword ptr [0x1064e69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e69c))), 0x1062edfcu);
  /* 1062edfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062edfe jne 0x1062ee14 */
  if (!C.zf) goto L_1062ee14;
  /* 1062ee00 mov dword ptr [0x1064e694], 0 */
  w32((uint32_t)(0x1064e694), (0x0u));
  /* 1062ee0a mov eax, 1 */
  EAX = (0x1u);
  /* 1062ee0f jmp 0x1062eed9 */
  goto L_1062eed9;
L_1062ee14:;
  /* 1062ee14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1062ee17 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ee18 mov edx, dword ptr [0x1064e68c] */
  EDX = (r32((uint32_t)(0x1064e68c)));
  /* 1062ee1e push edx */
  push32((uint32_t)(EDX));
  /* 1062ee1f call 0x10630fb0 */
  push32(0x1062ee24u); f_10630fb0();
  /* 1062ee24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ee27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ee29 jne 0x1062ee69 */
  if (!C.zf) goto L_1062ee69;
  /* 1062ee2b cmp dword ptr [0x1064e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ee32 jne 0x1062ee46 */
  if (!C.zf) goto L_1062ee46;
  /* 1062ee34 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ee36 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ee39 push eax */
  push32((uint32_t)(EAX));
  /* 1062ee3a call 0x1062f100 */
  push32(0x1062ee3fu); f_1062f100();
  /* 1062ee3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ee42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ee44 je 0x1062ee67 */
  if (C.zf) goto L_1062ee67;
L_1062ee46:;
  /* 1062ee46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ee49 mov dword ptr [0x1064e698], ecx */
  w32((uint32_t)(0x1064e698), (ECX));
  /* 1062ee4f mov edx, dword ptr [0x1064e698] */
  EDX = (r32((uint32_t)(0x1064e698)));
  /* 1062ee55 mov dword ptr [0x1064e67c], edx */
  w32((uint32_t)(0x1064e67c), (EDX));
  /* 1062ee5b mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062ee60 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1062ee62 mov dword ptr [0x1064e694], eax */
  w32((uint32_t)(0x1064e694), (EAX));
L_1062ee67:;
  /* 1062ee67 jmp 0x1062eecc */
  goto L_1062eecc;
L_1062ee69:;
  /* 1062ee69 cmp dword ptr [0x1064e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ee70 jne 0x1062eecc */
  if (!C.zf) goto L_1062eecc;
  /* 1062ee72 cmp dword ptr [0x1064e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062ee79 je 0x1062eecc */
  if (C.zf) goto L_1062eecc;
  /* 1062ee7b mov ecx, dword ptr [0x1064e684] */
  ECX = (r32((uint32_t)(0x1064e684)));
  /* 1062ee81 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ee82 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1062ee85 push edx */
  push32((uint32_t)(EDX));
  /* 1062ee86 mov eax, dword ptr [0x1064e68c] */
  EAX = (r32((uint32_t)(0x1064e68c)));
  /* 1062ee8b push eax */
  push32((uint32_t)(EAX));
  /* 1062ee8c call 0x10631080 */
  push32(0x1062ee91u); f_10631080();
  /* 1062ee91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ee94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ee96 jne 0x1062eecc */
  if (!C.zf) goto L_1062eecc;
  /* 1062ee98 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062ee9a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ee9d push ecx */
  push32((uint32_t)(ECX));
  /* 1062ee9e call 0x1062f100 */
  push32(0x1062eea3u); f_1062f100();
  /* 1062eea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062eea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062eea8 je 0x1062eecc */
  if (C.zf) goto L_1062eecc;
  /* 1062eeaa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062eead mov dword ptr [0x1064e698], edx */
  w32((uint32_t)(0x1064e698), (EDX));
  /* 1062eeb3 mov eax, dword ptr [0x1064e698] */
  EAX = (r32((uint32_t)(0x1064e698)));
  /* 1062eeb8 mov dword ptr [0x1064e67c], eax */
  w32((uint32_t)(0x1064e67c), (EAX));
  /* 1062eebd mov ecx, dword ptr [0x1064e694] */
  ECX = (r32((uint32_t)(0x1064e694)));
  /* 1062eec3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1062eec6 mov dword ptr [0x1064e694], ecx */
  w32((uint32_t)(0x1064e694), (ECX));
L_1062eecc:;
  /* 1062eecc mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062eed1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1062eed4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062eed6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062eed8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1062eed9:;
  /* 1062eed9 mov esp, ebp */
  ESP = (EBP);
  /* 1062eedb pop ebp */
  EBP = (pop32());
  /* 1062eedc ret 4 */
  ESPCHK(0x1062edc0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000eee0 @ 0x1062eee0 (69 bytes, 20 insns) */
void f_1062eee0(void) {
  FTRACE(0x1062eee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062eee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062eee1 mov ebp, esp */
  EBP = (ESP);
  /* 1062eee3 mov eax, dword ptr [0x1064e690] */
  EAX = (r32((uint32_t)(0x1064e690)));
  /* 1062eee8 push eax */
  push32((uint32_t)(EAX));
  /* 1062eee9 call 0x10625710 */
  push32(0x1062eeeeu); f_10625710();
  /* 1062eeee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062eef1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062eef3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062eef6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1062eef9 mov dword ptr [0x1064e680], ecx */
  w32((uint32_t)(0x1064e680), (ECX));
  /* 1062eeff push 1 */
  push32((uint32_t)(0x1u));
  /* 1062ef01 push 0x1062ef30 */
  push32((uint32_t)(0x1062ef30u));
  /* 1062ef06 call dword ptr [0x10650258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650258))), 0x1062ef0cu);
  /* 1062ef0c mov edx, dword ptr [0x1064e694] */
  EDX = (r32((uint32_t)(0x1064e694)));
  /* 1062ef12 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1062ef15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062ef17 jne 0x1062ef23 */
  if (!C.zf) goto L_1062ef23;
  /* 1062ef19 mov dword ptr [0x1064e694], 0 */
  w32((uint32_t)(0x1064e694), (0x0u));
L_1062ef23:;
  /* 1062ef23 pop ebp */
  EBP = (pop32());
  /* 1062ef24 ret  */
  ESPCHK(0x1062eee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef30 @ 0x1062ef30 (172 bytes, 54 insns) */
void f_1062ef30(void) {
  FTRACE(0x1062ef30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062ef30 push ebp */
  push32((uint32_t)(EBP));
  /* 1062ef31 mov ebp, esp */
  EBP = (ESP);
  /* 1062ef33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062ef36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062ef39 push eax */
  push32((uint32_t)(EAX));
  /* 1062ef3a call 0x1062f370 */
  push32(0x1062ef3fu); f_1062f370();
  /* 1062ef3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ef42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1062ef45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1062ef47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1062ef4a push ecx */
  push32((uint32_t)(ECX));
  /* 1062ef4b mov edx, dword ptr [0x1064e680] */
  EDX = (r32((uint32_t)(0x1064e680)));
  /* 1062ef51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062ef53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062ef55 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1062ef5b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ef61 push edx */
  push32((uint32_t)(EDX));
  /* 1062ef62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ef65 push eax */
  push32((uint32_t)(EAX));
  /* 1062ef66 call dword ptr [0x1064e69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e69c))), 0x1062ef6cu);
  /* 1062ef6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ef6e jne 0x1062ef81 */
  if (!C.zf) goto L_1062ef81;
  /* 1062ef70 mov dword ptr [0x1064e694], 0 */
  w32((uint32_t)(0x1064e694), (0x0u));
  /* 1062ef7a mov eax, 1 */
  EAX = (0x1u);
  /* 1062ef7f jmp 0x1062efd6 */
  goto L_1062efd6;
L_1062ef81:;
  /* 1062ef81 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1062ef84 push ecx */
  push32((uint32_t)(ECX));
  /* 1062ef85 mov edx, dword ptr [0x1064e690] */
  EDX = (r32((uint32_t)(0x1064e690)));
  /* 1062ef8b push edx */
  push32((uint32_t)(EDX));
  /* 1062ef8c call 0x10630fb0 */
  push32(0x1062ef91u); f_10630fb0();
  /* 1062ef91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062ef94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062ef96 jne 0x1062efc9 */
  if (!C.zf) goto L_1062efc9;
  /* 1062ef98 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062ef9b push eax */
  push32((uint32_t)(EAX));
  /* 1062ef9c call 0x1062f0b0 */
  push32(0x1062efa1u); f_1062f0b0();
  /* 1062efa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062efa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062efa6 je 0x1062efc9 */
  if (C.zf) goto L_1062efc9;
  /* 1062efa8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1062efab mov dword ptr [0x1064e698], ecx */
  w32((uint32_t)(0x1064e698), (ECX));
  /* 1062efb1 mov edx, dword ptr [0x1064e698] */
  EDX = (r32((uint32_t)(0x1064e698)));
  /* 1062efb7 mov dword ptr [0x1064e67c], edx */
  w32((uint32_t)(0x1064e67c), (EDX));
  /* 1062efbd mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062efc2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1062efc4 mov dword ptr [0x1064e694], eax */
  w32((uint32_t)(0x1064e694), (EAX));
L_1062efc9:;
  /* 1062efc9 mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062efce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1062efd1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062efd3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062efd5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1062efd6:;
  /* 1062efd6 mov esp, ebp */
  ESP = (EBP);
  /* 1062efd8 pop ebp */
  EBP = (pop32());
  /* 1062efd9 ret 4 */
  ESPCHK(0x1062ef30u, _esp0);
  ESP += 8; return;
}

/* FUN_1000efe0 @ 0x1062efe0 (43 bytes, 11 insns) */
void f_1062efe0(void) {
  FTRACE(0x1062efe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062efe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062efe1 mov ebp, esp */
  EBP = (ESP);
  /* 1062efe3 mov eax, dword ptr [0x1064e694] */
  EAX = (r32((uint32_t)(0x1064e694)));
  /* 1062efe8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1062efed mov dword ptr [0x1064e694], eax */
  w32((uint32_t)(0x1064e694), (EAX));
  /* 1062eff2 call dword ptr [0x10650248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650248))), 0x1062eff8u);
  /* 1062eff8 mov dword ptr [0x1064e698], eax */
  w32((uint32_t)(0x1064e698), (EAX));
  /* 1062effd mov ecx, dword ptr [0x1064e698] */
  ECX = (r32((uint32_t)(0x1064e698)));
  /* 1062f003 mov dword ptr [0x1064e67c], ecx */
  w32((uint32_t)(0x1064e67c), (ECX));
  /* 1062f009 pop ebp */
  EBP = (pop32());
  /* 1062f00a ret  */
  ESPCHK(0x1062efe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f010 @ 0x1062f010 (155 bytes, 57 insns) */
void f_1062f010(void) {
  FTRACE(0x1062f010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f010 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f011 mov ebp, esp */
  EBP = (ESP);
  /* 1062f013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f016 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f01a je 0x1062f03b */
  if (C.zf) goto L_1062f03b;
  /* 1062f01c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f01f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1062f022 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062f024 je 0x1062f03b */
  if (C.zf) goto L_1062f03b;
  /* 1062f026 push 0x1064a6bc */
  push32((uint32_t)(0x1064a6bcu));
  /* 1062f02b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f02e push edx */
  push32((uint32_t)(EDX));
  /* 1062f02f call 0x1062e570 */
  push32(0x1062f034u); f_1062e570();
  /* 1062f034 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062f039 jne 0x1062f063 */
  if (!C.zf) goto L_1062f063;
L_1062f03b:;
  /* 1062f03b push 8 */
  push32((uint32_t)(0x8u));
  /* 1062f03d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1062f040 push eax */
  push32((uint32_t)(EAX));
  /* 1062f041 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1062f046 mov ecx, dword ptr [0x1064e698] */
  ECX = (r32((uint32_t)(0x1064e698)));
  /* 1062f04c push ecx */
  push32((uint32_t)(ECX));
  /* 1062f04d call dword ptr [0x1064e69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e69c))), 0x1062f053u);
  /* 1062f053 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062f055 jne 0x1062f05b */
  if (!C.zf) goto L_1062f05b;
  /* 1062f057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062f059 jmp 0x1062f0a7 */
  goto L_1062f0a7;
L_1062f05b:;
  /* 1062f05b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1062f05e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1062f061 jmp 0x1062f09b */
  goto L_1062f09b;
L_1062f063:;
  /* 1062f063 push 0x1064a6b8 */
  push32((uint32_t)(0x1064a6b8u));
  /* 1062f068 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f06b push eax */
  push32((uint32_t)(EAX));
  /* 1062f06c call 0x1062e570 */
  push32(0x1062f071u); f_1062e570();
  /* 1062f071 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062f076 jne 0x1062f09b */
  if (!C.zf) goto L_1062f09b;
  /* 1062f078 push 8 */
  push32((uint32_t)(0x8u));
  /* 1062f07a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1062f07d push ecx */
  push32((uint32_t)(ECX));
  /* 1062f07e push 0xb */
  push32((uint32_t)(0xbu));
  /* 1062f080 mov edx, dword ptr [0x1064e698] */
  EDX = (r32((uint32_t)(0x1064e698)));
  /* 1062f086 push edx */
  push32((uint32_t)(EDX));
  /* 1062f087 call dword ptr [0x1064e69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e69c))), 0x1062f08du);
  /* 1062f08d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062f08f jne 0x1062f095 */
  if (!C.zf) goto L_1062f095;
  /* 1062f091 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062f093 jmp 0x1062f0a7 */
  goto L_1062f0a7;
L_1062f095:;
  /* 1062f095 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1062f098 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1062f09b:;
  /* 1062f09b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f09e push ecx */
  push32((uint32_t)(ECX));
  /* 1062f09f call 0x10631190 */
  push32(0x1062f0a4u); f_10631190();
  /* 1062f0a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062f0a7:;
  /* 1062f0a7 mov esp, ebp */
  ESP = (EBP);
  /* 1062f0a9 pop ebp */
  EBP = (pop32());
  /* 1062f0aa ret  */
  ESPCHK(0x1062f010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0b0 @ 0x1062f0b0 (79 bytes, 26 insns) */
void f_1062f0b0(void) {
  FTRACE(0x1062f0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1062f0b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f0b6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1062f0ba mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1062f0be mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062f0c5 jmp 0x1062f0d0 */
  goto L_1062f0d0;
L_1062f0c7:;
  /* 1062f0c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f0ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f0cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1062f0d0:;
  /* 1062f0d0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f0d4 jae 0x1062f0f6 */
  if (!C.cf) goto L_1062f0f6;
  /* 1062f0d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f0d9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1062f0df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f0e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062f0e4 mov cx, word ptr [eax*2 + 0x1064d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1064d9c4)));
  /* 1062f0ec cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f0ee jne 0x1062f0f4 */
  if (!C.zf) goto L_1062f0f4;
  /* 1062f0f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062f0f2 jmp 0x1062f0fb */
  goto L_1062f0fb;
L_1062f0f4:;
  /* 1062f0f4 jmp 0x1062f0c7 */
  goto L_1062f0c7;
L_1062f0f6:;
  /* 1062f0f6 mov eax, 1 */
  EAX = (0x1u);
L_1062f0fb:;
  /* 1062f0fb mov esp, ebp */
  ESP = (EBP);
  /* 1062f0fd pop ebp */
  EBP = (pop32());
  /* 1062f0fe ret  */
  ESPCHK(0x1062f0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f100 @ 0x1062f100 (135 bytes, 48 insns) */
void f_1062f100(void) {
  FTRACE(0x1062f100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f100 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f101 mov ebp, esp */
  EBP = (ESP);
  /* 1062f103 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f106 push esi */
  push32((uint32_t)(ESI));
  /* 1062f107 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f10a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062f10f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062f114 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062f119 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1062f11c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062f121 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062f124 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1062f126 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1062f129 push ecx */
  push32((uint32_t)(ECX));
  /* 1062f12a push 1 */
  push32((uint32_t)(0x1u));
  /* 1062f12c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f12f push edx */
  push32((uint32_t)(EDX));
  /* 1062f130 call dword ptr [0x1064e69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e69c))), 0x1062f136u);
  /* 1062f136 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062f138 jne 0x1062f13e */
  if (!C.zf) goto L_1062f13e;
  /* 1062f13a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062f13c jmp 0x1062f182 */
  goto L_1062f182;
L_1062f13e:;
  /* 1062f13e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1062f141 push eax */
  push32((uint32_t)(EAX));
  /* 1062f142 call 0x1062f370 */
  push32(0x1062f147u); f_1062f370();
  /* 1062f147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f14a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f14d je 0x1062f17d */
  if (C.zf) goto L_1062f17d;
  /* 1062f14f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f153 je 0x1062f17d */
  if (C.zf) goto L_1062f17d;
  /* 1062f155 mov ecx, dword ptr [0x1064e68c] */
  ECX = (r32((uint32_t)(0x1064e68c)));
  /* 1062f15b push ecx */
  push32((uint32_t)(ECX));
  /* 1062f15c call 0x1062f3f0 */
  push32(0x1062f161u); f_1062f3f0();
  /* 1062f161 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f164 mov esi, eax */
  ESI = (EAX);
  /* 1062f166 mov edx, dword ptr [0x1064e68c] */
  EDX = (r32((uint32_t)(0x1064e68c)));
  /* 1062f16c push edx */
  push32((uint32_t)(EDX));
  /* 1062f16d call 0x10625710 */
  push32(0x1062f172u); f_10625710();
  /* 1062f172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f175 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f177 jne 0x1062f17d */
  if (!C.zf) goto L_1062f17d;
  /* 1062f179 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062f17b jmp 0x1062f182 */
  goto L_1062f182;
L_1062f17d:;
  /* 1062f17d mov eax, 1 */
  EAX = (0x1u);
L_1062f182:;
  /* 1062f182 pop esi */
  ESI = (pop32());
  /* 1062f183 mov esp, ebp */
  ESP = (EBP);
  /* 1062f185 pop ebp */
  EBP = (pop32());
  /* 1062f186 ret  */
  ESPCHK(0x1062f100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f190 @ 0x1062f190 (77 bytes, 18 insns) */
void f_1062f190(void) {
  FTRACE(0x1062f190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f190 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f191 mov ebp, esp */
  EBP = (ESP);
  /* 1062f193 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f199 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1062f1a3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1062f1a9 push eax */
  push32((uint32_t)(EAX));
  /* 1062f1aa call dword ptr [0x10650244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650244))), 0x1062f1b0u);
  /* 1062f1b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062f1b2 je 0x1062f1c9 */
  if (C.zf) goto L_1062f1c9;
  /* 1062f1b4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f1bb jne 0x1062f1c9 */
  if (!C.zf) goto L_1062f1c9;
  /* 1062f1bd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1062f1c7 jmp 0x1062f1d3 */
  goto L_1062f1d3;
L_1062f1c9:;
  /* 1062f1c9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1062f1d3:;
  /* 1062f1d3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1062f1d9 mov esp, ebp */
  ESP = (EBP);
  /* 1062f1db pop ebp */
  EBP = (pop32());
  /* 1062f1dc ret  */
  ESPCHK(0x1062f190u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1062f1e0 (388 bytes, 118 insns) */
void f_1062f1e0(void) {
  FTRACE(0x1062f1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1062f1e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f1e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062f1ed mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1062f1f4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1062f1fb:;
  /* 1062f1fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f1fe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f201 jg 0x1062f348 */
  if ((!C.zf&&C.sf==C.of)) goto L_1062f348;
  /* 1062f207 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f20a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f20d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1062f20e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f210 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1062f212 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062f215 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f218 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f21b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f21e cmp edx, dword ptr [ecx + 0x1064d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1064d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f224 jne 0x1062f31e */
  if (!C.zf) goto L_1062f31e;
  /* 1062f22a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062f22d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1062f230 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f234 ja 0x1062f257 */
  if ((!C.cf&&!C.zf)) goto L_1062f257;
  /* 1062f236 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f23a je 0x1062f2c9 */
  if (C.zf) goto L_1062f2c9;
  /* 1062f240 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f244 je 0x1062f274 */
  if (C.zf) goto L_1062f274;
  /* 1062f246 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f24a je 0x1062f296 */
  if (C.zf) goto L_1062f296;
  /* 1062f24c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f250 je 0x1062f2b8 */
  if (C.zf) goto L_1062f2b8;
  /* 1062f252 jmp 0x1062f2e8 */
  goto L_1062f2e8;
L_1062f257:;
  /* 1062f257 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f25e je 0x1062f285 */
  if (C.zf) goto L_1062f285;
  /* 1062f260 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f267 je 0x1062f2a7 */
  if (C.zf) goto L_1062f2a7;
  /* 1062f269 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f270 je 0x1062f2da */
  if (C.zf) goto L_1062f2da;
  /* 1062f272 jmp 0x1062f2e8 */
  goto L_1062f2e8;
L_1062f274:;
  /* 1062f274 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f277 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f27a add ecx, 0x1064d524 */
  { uint32_t _a=(ECX),_b=(0x1064d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f280 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062f283 jmp 0x1062f2e8 */
  goto L_1062f2e8;
L_1062f285:;
  /* 1062f285 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f288 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f28b mov eax, dword ptr [edx + 0x1064d52c] */
  EAX = (r32((uint32_t)(EDX + 0x1064d52c)));
  /* 1062f291 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062f294 jmp 0x1062f2e8 */
  goto L_1062f2e8;
L_1062f296:;
  /* 1062f296 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f299 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f29c add ecx, 0x1064d530 */
  { uint32_t _a=(ECX),_b=(0x1064d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f2a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062f2a5 jmp 0x1062f2e8 */
  goto L_1062f2e8;
L_1062f2a7:;
  /* 1062f2a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f2aa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f2ad mov eax, dword ptr [edx + 0x1064d534] */
  EAX = (r32((uint32_t)(EDX + 0x1064d534)));
  /* 1062f2b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062f2b6 jmp 0x1062f2e8 */
  goto L_1062f2e8;
L_1062f2b8:;
  /* 1062f2b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f2bb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f2be add ecx, 0x1064d538 */
  { uint32_t _a=(ECX),_b=(0x1064d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f2c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062f2c7 jmp 0x1062f2e8 */
  goto L_1062f2e8;
L_1062f2c9:;
  /* 1062f2c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f2cc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f2cf add edx, 0x1064d53c */
  { uint32_t _a=(EDX),_b=(0x1064d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f2d5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1062f2d8 jmp 0x1062f2e8 */
  goto L_1062f2e8;
L_1062f2da:;
  /* 1062f2da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f2dd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f2e0 add eax, 0x1064d544 */
  { uint32_t _a=(EAX),_b=(0x1064d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f2e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1062f2e8:;
  /* 1062f2e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f2ec je 0x1062f2f4 */
  if (C.zf) goto L_1062f2f4;
  /* 1062f2ee cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f2f2 jge 0x1062f2f6 */
  if ((C.sf==C.of)) goto L_1062f2f6;
L_1062f2f4:;
  /* 1062f2f4 jmp 0x1062f348 */
  goto L_1062f348;
L_1062f2f6:;
  /* 1062f2f6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062f2f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f2fc push ecx */
  push32((uint32_t)(ECX));
  /* 1062f2fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f300 push edx */
  push32((uint32_t)(EDX));
  /* 1062f301 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062f304 push eax */
  push32((uint32_t)(EAX));
  /* 1062f305 call 0x10626100 */
  push32(0x1062f30au); f_10626100();
  /* 1062f30a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f30d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062f310 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f313 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1062f317 mov eax, 1 */
  EAX = (0x1u);
  /* 1062f31c jmp 0x1062f35e */
  goto L_1062f35e;
L_1062f31e:;
  /* 1062f31e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f321 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f327 cmp eax, dword ptr [edx + 0x1064d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1064d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f32d jae 0x1062f33a */
  if (!C.cf) goto L_1062f33a;
  /* 1062f32f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f332 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f335 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1062f338 jmp 0x1062f343 */
  goto L_1062f343;
L_1062f33a:;
  /* 1062f33a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f33d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f340 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1062f343:;
  /* 1062f343 jmp 0x1062f1fb */
  goto L_1062f1fb;
L_1062f348:;
  /* 1062f348 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062f34b push eax */
  push32((uint32_t)(EAX));
  /* 1062f34c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062f34f push ecx */
  push32((uint32_t)(ECX));
  /* 1062f350 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062f353 push edx */
  push32((uint32_t)(EDX));
  /* 1062f354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f357 push eax */
  push32((uint32_t)(EAX));
  /* 1062f358 call dword ptr [0x10650250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650250))), 0x1062f35eu);
L_1062f35e:;
  /* 1062f35e mov esp, ebp */
  ESP = (EBP);
  /* 1062f360 pop ebp */
  EBP = (pop32());
  /* 1062f361 ret 0x10 */
  ESPCHK(0x1062f1e0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f370 @ 0x1062f370 (118 bytes, 42 insns) */
void f_1062f370(void) {
  FTRACE(0x1062f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f370 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f371 mov ebp, esp */
  EBP = (ESP);
  /* 1062f373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f376 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1062f37d:;
  /* 1062f37d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f380 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1062f382 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1062f385 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062f389 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f38c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f38f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1062f392 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062f394 je 0x1062f3df */
  if (C.zf) goto L_1062f3df;
  /* 1062f396 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062f39a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f39d jl 0x1062f3b2 */
  if ((C.sf!=C.of)) goto L_1062f3b2;
  /* 1062f39f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062f3a3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f3a6 jg 0x1062f3b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_1062f3b2;
  /* 1062f3a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1062f3ab add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1062f3ad mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1062f3b0 jmp 0x1062f3cc */
  goto L_1062f3cc;
L_1062f3b2:;
  /* 1062f3b2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062f3b6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f3b9 jl 0x1062f3cc */
  if ((C.sf!=C.of)) goto L_1062f3cc;
  /* 1062f3bb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062f3bf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f3c2 jg 0x1062f3cc */
  if ((!C.zf&&C.sf==C.of)) goto L_1062f3cc;
  /* 1062f3c4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1062f3c7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1062f3c9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1062f3cc:;
  /* 1062f3cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f3cf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1062f3d2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1062f3d6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1062f3da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062f3dd jmp 0x1062f37d */
  goto L_1062f37d;
L_1062f3df:;
  /* 1062f3df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f3e2 mov esp, ebp */
  ESP = (EBP);
  /* 1062f3e4 pop ebp */
  EBP = (pop32());
  /* 1062f3e5 ret  */
  ESPCHK(0x1062f370u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x1062f3f0 (101 bytes, 36 insns) */
void f_1062f3f0(void) {
  FTRACE(0x1062f3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1062f3f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f3f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062f3fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f400 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1062f402 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1062f405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f408 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f40b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1062f40e:;
  /* 1062f40e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1062f412 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f415 jl 0x1062f420 */
  if ((C.sf!=C.of)) goto L_1062f420;
  /* 1062f417 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1062f41b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f41e jle 0x1062f432 */
  if ((C.zf||C.sf!=C.of)) goto L_1062f432;
L_1062f420:;
  /* 1062f420 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1062f424 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f427 jl 0x1062f44e */
  if ((C.sf!=C.of)) goto L_1062f44e;
  /* 1062f429 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1062f42d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f430 jg 0x1062f44e */
  if ((!C.zf&&C.sf==C.of)) goto L_1062f44e;
L_1062f432:;
  /* 1062f432 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f435 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f438 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1062f43b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f43e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1062f440 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1062f443 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f446 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f449 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1062f44c jmp 0x1062f40e */
  goto L_1062f40e;
L_1062f44e:;
  /* 1062f44e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f451 mov esp, ebp */
  ESP = (EBP);
  /* 1062f453 pop ebp */
  EBP = (pop32());
  /* 1062f454 ret  */
  ESPCHK(0x1062f3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f460 @ 0x1062f460 (122 bytes, 39 insns) */
void f_1062f460(void) {
  FTRACE(0x1062f460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f460 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f461 mov ebp, esp */
  EBP = (ESP);
  /* 1062f463 push ecx */
  push32((uint32_t)(ECX));
  /* 1062f464 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f467 cmp eax, dword ptr [0x1064ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f46d jae 0x1062f491 */
  if (!C.cf) goto L_1062f491;
  /* 1062f46f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f472 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1062f475 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f478 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1062f47b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f47e mov eax, dword ptr [ecx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062f485 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1062f48a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1062f48d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062f48f jne 0x1062f4ac */
  if (!C.zf) goto L_1062f4ac;
L_1062f491:;
  /* 1062f491 call 0x1062a7b0 */
  push32(0x1062f496u); f_1062a7b0();
  /* 1062f496 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1062f49c call 0x1062a7c0 */
  push32(0x1062f4a1u); f_1062a7c0();
  /* 1062f4a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1062f4a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062f4aa jmp 0x1062f4d6 */
  goto L_1062f4d6;
L_1062f4ac:;
  /* 1062f4ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f4af push edx */
  push32((uint32_t)(EDX));
  /* 1062f4b0 call 0x1062bfd0 */
  push32(0x1062f4b5u); f_1062bfd0();
  /* 1062f4b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f4b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f4bb push eax */
  push32((uint32_t)(EAX));
  /* 1062f4bc call 0x1062f4e0 */
  push32(0x1062f4c1u); f_1062f4e0();
  /* 1062f4c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f4c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062f4c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f4ca push ecx */
  push32((uint32_t)(ECX));
  /* 1062f4cb call 0x1062c060 */
  push32(0x1062f4d0u); f_1062c060();
  /* 1062f4d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f4d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1062f4d6:;
  /* 1062f4d6 mov esp, ebp */
  ESP = (EBP);
  /* 1062f4d8 pop ebp */
  EBP = (pop32());
  /* 1062f4d9 ret  */
  ESPCHK(0x1062f460u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x1062f4e0 (170 bytes, 59 insns) */
void f_1062f4e0(void) {
  FTRACE(0x1062f4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1062f4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062f4e4 push esi */
  push32((uint32_t)(ESI));
  /* 1062f4e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f4e8 push eax */
  push32((uint32_t)(EAX));
  /* 1062f4e9 call 0x1062be50 */
  push32(0x1062f4eeu); f_1062be50();
  /* 1062f4ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f4f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f4f4 je 0x1062f533 */
  if (C.zf) goto L_1062f533;
  /* 1062f4f6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f4fa je 0x1062f502 */
  if (C.zf) goto L_1062f502;
  /* 1062f4fc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f500 jne 0x1062f51c */
  if (!C.zf) goto L_1062f51c;
L_1062f502:;
  /* 1062f502 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062f504 call 0x1062be50 */
  push32(0x1062f509u); f_1062be50();
  /* 1062f509 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f50c mov esi, eax */
  ESI = (EAX);
  /* 1062f50e push 2 */
  push32((uint32_t)(0x2u));
  /* 1062f510 call 0x1062be50 */
  push32(0x1062f515u); f_1062be50();
  /* 1062f515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f518 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f51a je 0x1062f533 */
  if (C.zf) goto L_1062f533;
L_1062f51c:;
  /* 1062f51c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f51f push ecx */
  push32((uint32_t)(ECX));
  /* 1062f520 call 0x1062be50 */
  push32(0x1062f525u); f_1062be50();
  /* 1062f525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f528 push eax */
  push32((uint32_t)(EAX));
  /* 1062f529 call dword ptr [0x1065024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065024c))), 0x1062f52fu);
  /* 1062f52f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062f531 je 0x1062f53c */
  if (C.zf) goto L_1062f53c;
L_1062f533:;
  /* 1062f533 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062f53a jmp 0x1062f545 */
  goto L_1062f545;
L_1062f53c:;
  /* 1062f53c call dword ptr [0x106502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ac))), 0x1062f542u);
  /* 1062f542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062f545:;
  /* 1062f545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f548 push edx */
  push32((uint32_t)(EDX));
  /* 1062f549 call 0x1062bd70 */
  push32(0x1062f54eu); f_1062bd70();
  /* 1062f54e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f551 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f554 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1062f557 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f55a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1062f55d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1062f560 mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062f567 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1062f56c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f570 je 0x1062f583 */
  if (C.zf) goto L_1062f583;
  /* 1062f572 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f575 push eax */
  push32((uint32_t)(EAX));
  /* 1062f576 call 0x1062a710 */
  push32(0x1062f57bu); f_1062a710();
  /* 1062f57b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f57e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062f581 jmp 0x1062f585 */
  goto L_1062f585;
L_1062f583:;
  /* 1062f583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062f585:;
  /* 1062f585 pop esi */
  ESI = (pop32());
  /* 1062f586 mov esp, ebp */
  ESP = (EBP);
  /* 1062f588 pop ebp */
  EBP = (pop32());
  /* 1062f589 ret  */
  ESPCHK(0x1062f4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f590 @ 0x1062f590 (146 bytes, 52 insns) */
void f_1062f590(void) {
  FTRACE(0x1062f590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f590 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f591 mov ebp, esp */
  EBP = (ESP);
  /* 1062f593 push ebx */
  push32((uint32_t)(EBX));
  /* 1062f594 push esi */
  push32((uint32_t)(ESI));
  /* 1062f595 push edi */
  push32((uint32_t)(EDI));
L_1062f596:;
  /* 1062f596 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f59a jne 0x1062f5ba */
  if (!C.zf) goto L_1062f5ba;
  /* 1062f59c push 0x10649ff8 */
  push32((uint32_t)(0x10649ff8u));
  /* 1062f5a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062f5a3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1062f5a5 push 0x1064a6c0 */
  push32((uint32_t)(0x1064a6c0u));
  /* 1062f5aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1062f5ac call 0x106219a0 */
  push32(0x1062f5b1u); f_106219a0();
  /* 1062f5b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f5b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f5b7 jne 0x1062f5ba */
  if (!C.zf) goto L_1062f5ba;
  /* 1062f5b9 int3  */
  x86_unimpl("int3 @ 0x1062f5b9");
L_1062f5ba:;
  /* 1062f5ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062f5bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062f5be jne 0x1062f596 */
  if (!C.zf) goto L_1062f596;
  /* 1062f5c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f5c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062f5c6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1062f5cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062f5ce je 0x1062f61d */
  if (C.zf) goto L_1062f61d;
  /* 1062f5d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f5d3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1062f5d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1062f5d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062f5db je 0x1062f61d */
  if (C.zf) goto L_1062f61d;
  /* 1062f5dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1062f5df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f5e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1062f5e5 push eax */
  push32((uint32_t)(EAX));
  /* 1062f5e6 call 0x10623370 */
  push32(0x1062f5ebu); f_10623370();
  /* 1062f5eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f5ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f5f1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1062f5f4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1062f5fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f5fd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1062f600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f603 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1062f609 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f60c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1062f613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062f616 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1062f61d:;
  /* 1062f61d pop edi */
  EDI = (pop32());
  /* 1062f61e pop esi */
  ESI = (pop32());
  /* 1062f61f pop ebx */
  EBX = (pop32());
  /* 1062f620 pop ebp */
  EBP = (pop32());
  /* 1062f621 ret  */
  ESPCHK(0x1062f590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f630 @ 0x1062f630 (289 bytes, 97 insns) */
void f_1062f630(void) {
  FTRACE(0x1062f630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f630 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f631 mov ebp, esp */
  EBP = (ESP);
  /* 1062f633 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f636 push esi */
  push32((uint32_t)(ESI));
  /* 1062f637 mov eax, dword ptr [0x1064dc98] */
  EAX = (r32((uint32_t)(0x1064dc98)));
  /* 1062f63c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062f63f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062f646 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062f64d jmp 0x1062f658 */
  goto L_1062f658;
L_1062f64f:;
  /* 1062f64f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f652 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f655 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1062f658:;
  /* 1062f658 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f65c jae 0x1062f691 */
  if (!C.cf) goto L_1062f691;
  /* 1062f65e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f661 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f664 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1062f667 push ecx */
  push32((uint32_t)(ECX));
  /* 1062f668 call 0x10625710 */
  push32(0x1062f66du); f_10625710();
  /* 1062f66d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f670 mov esi, eax */
  ESI = (EAX);
  /* 1062f672 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f675 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f678 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1062f67c push ecx */
  push32((uint32_t)(ECX));
  /* 1062f67d call 0x10625710 */
  push32(0x1062f682u); f_10625710();
  /* 1062f682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f685 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f688 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1062f68c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1062f68f jmp 0x1062f64f */
  goto L_1062f64f;
L_1062f691:;
  /* 1062f691 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f694 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f697 push eax */
  push32((uint32_t)(EAX));
  /* 1062f698 call 0x106228c0 */
  push32(0x1062f69du); f_106228c0();
  /* 1062f69d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f6a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062f6a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f6a7 je 0x1062f749 */
  if (C.zf) goto L_1062f749;
  /* 1062f6ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f6b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1062f6b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062f6ba jmp 0x1062f6c5 */
  goto L_1062f6c5;
L_1062f6bc:;
  /* 1062f6bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f6bf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f6c2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1062f6c5:;
  /* 1062f6c5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f6c9 jae 0x1062f73a */
  if (!C.cf) goto L_1062f73a;
  /* 1062f6cb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f6ce mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1062f6d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f6d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f6d7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1062f6da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f6dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f6e0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1062f6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1062f6e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f6e7 push edx */
  push32((uint32_t)(EDX));
  /* 1062f6e8 call 0x10625890 */
  push32(0x1062f6edu); f_10625890();
  /* 1062f6ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f6f0 push eax */
  push32((uint32_t)(EAX));
  /* 1062f6f1 call 0x10625710 */
  push32(0x1062f6f6u); f_10625710();
  /* 1062f6f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f6f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f6fc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f6fe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1062f701 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f704 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1062f707 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f70a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f70d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1062f710 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f713 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f716 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1062f71a push eax */
  push32((uint32_t)(EAX));
  /* 1062f71b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f71e push ecx */
  push32((uint32_t)(ECX));
  /* 1062f71f call 0x10625890 */
  push32(0x1062f724u); f_10625890();
  /* 1062f724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f727 push eax */
  push32((uint32_t)(EAX));
  /* 1062f728 call 0x10625710 */
  push32(0x1062f72du); f_10625710();
  /* 1062f72d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f730 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f733 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f735 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1062f738 jmp 0x1062f6bc */
  goto L_1062f6bc;
L_1062f73a:;
  /* 1062f73a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f73d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1062f740 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f743 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f746 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1062f749:;
  /* 1062f749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f74c pop esi */
  ESI = (pop32());
  /* 1062f74d mov esp, ebp */
  ESP = (EBP);
  /* 1062f74f pop ebp */
  EBP = (pop32());
  /* 1062f750 ret  */
  ESPCHK(0x1062f630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f760 @ 0x1062f760 (291 bytes, 97 insns) */
void f_1062f760(void) {
  FTRACE(0x1062f760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062f760 push ebp */
  push32((uint32_t)(EBP));
  /* 1062f761 mov ebp, esp */
  EBP = (ESP);
  /* 1062f763 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062f766 push esi */
  push32((uint32_t)(ESI));
  /* 1062f767 mov eax, dword ptr [0x1064dc98] */
  EAX = (r32((uint32_t)(0x1064dc98)));
  /* 1062f76c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062f76f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062f776 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062f77d jmp 0x1062f788 */
  goto L_1062f788;
L_1062f77f:;
  /* 1062f77f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f782 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f785 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1062f788:;
  /* 1062f788 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f78c jae 0x1062f7c2 */
  if (!C.cf) goto L_1062f7c2;
  /* 1062f78e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f791 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f794 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1062f798 push ecx */
  push32((uint32_t)(ECX));
  /* 1062f799 call 0x10625710 */
  push32(0x1062f79eu); f_10625710();
  /* 1062f79e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f7a1 mov esi, eax */
  ESI = (EAX);
  /* 1062f7a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f7a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f7a9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1062f7ad push ecx */
  push32((uint32_t)(ECX));
  /* 1062f7ae call 0x10625710 */
  push32(0x1062f7b3u); f_10625710();
  /* 1062f7b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f7b6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f7b9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1062f7bd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1062f7c0 jmp 0x1062f77f */
  goto L_1062f77f;
L_1062f7c2:;
  /* 1062f7c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062f7c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f7c8 push eax */
  push32((uint32_t)(EAX));
  /* 1062f7c9 call 0x106228c0 */
  push32(0x1062f7ceu); f_106228c0();
  /* 1062f7ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f7d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062f7d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f7d8 je 0x1062f87b */
  if (C.zf) goto L_1062f87b;
  /* 1062f7de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f7e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1062f7e4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1062f7eb jmp 0x1062f7f6 */
  goto L_1062f7f6;
L_1062f7ed:;
  /* 1062f7ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f7f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f7f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1062f7f6:;
  /* 1062f7f6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062f7fa jae 0x1062f86c */
  if (!C.cf) goto L_1062f86c;
  /* 1062f7fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f7ff mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1062f802 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f805 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f808 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1062f80b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f80e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f811 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1062f815 push ecx */
  push32((uint32_t)(ECX));
  /* 1062f816 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f819 push edx */
  push32((uint32_t)(EDX));
  /* 1062f81a call 0x10625890 */
  push32(0x1062f81fu); f_10625890();
  /* 1062f81f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f822 push eax */
  push32((uint32_t)(EAX));
  /* 1062f823 call 0x10625710 */
  push32(0x1062f828u); f_10625710();
  /* 1062f828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f82b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f82e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f830 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1062f833 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f836 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1062f839 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f83c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f83f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1062f842 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062f845 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062f848 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1062f84c push eax */
  push32((uint32_t)(EAX));
  /* 1062f84d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f850 push ecx */
  push32((uint32_t)(ECX));
  /* 1062f851 call 0x10625890 */
  push32(0x1062f856u); f_10625890();
  /* 1062f856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f859 push eax */
  push32((uint32_t)(EAX));
  /* 1062f85a call 0x10625710 */
  push32(0x1062f85fu); f_10625710();
  /* 1062f85f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f862 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f865 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f867 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1062f86a jmp 0x1062f7ed */
  goto L_1062f7ed;
L_1062f86c:;
  /* 1062f86c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f86f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1062f872 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062f875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062f878 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1062f87b:;
  /* 1062f87b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062f87e pop esi */
  ESI = (pop32());
  /* 1062f87f mov esp, ebp */
  ESP = (EBP);
  /* 1062f881 pop ebp */
  EBP = (pop32());
  /* 1062f882 ret  */
  ESPCHK(0x1062f760u, _esp0);
  ESP += 4; return;
}

