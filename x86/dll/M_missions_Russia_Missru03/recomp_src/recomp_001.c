#include "recomp.h"

/* FUN_10009dd0 @ 0x10a09dd0 (116 bytes, 34 insns) */
void f_10a09dd0(void) {
  FTRACE(0x10a09dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a09dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09dd4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10a09ddb push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09ddd call 0x10a095f0 */
  push32(0x10a09de2u); f_10a095f0();
  /* 10a09de2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09de5 call 0x10a0b4e0 */
  push32(0x10a09deau); f_10a0b4e0();
  /* 10a09dea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a09dec jge 0x10a09df5 */
  if ((C.sf==C.of)) goto L_10a09df5;
  /* 10a09dee mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10a09df5:;
  /* 10a09df5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09df7 call 0x10a09690 */
  push32(0x10a09dfcu); f_10a09690();
  /* 10a09dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09dff push 0 */
  push32((uint32_t)(0x0u));
  /* 10a09e01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a09e03 mov eax, dword ptr [0x10a3308c] */
  EAX = (r32((uint32_t)(0x10a3308c)));
  /* 10a09e08 push eax */
  push32((uint32_t)(EAX));
  /* 10a09e09 call dword ptr [0x10a343a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343a8))), 0x10a09e0fu);
  /* 10a09e0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a09e11 jne 0x10a09e3d */
  if (!C.zf) goto L_10a09e3d;
  /* 10a09e13 call dword ptr [0x10a34388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34388))), 0x10a09e19u);
  /* 10a09e19 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09e1c jne 0x10a09e36 */
  if (!C.zf) goto L_10a09e36;
  /* 10a09e1e call 0x10a0dad0 */
  push32(0x10a09e23u); f_10a0dad0();
  /* 10a09e23 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10a09e29 call 0x10a0dac0 */
  push32(0x10a09e2eu); f_10a0dac0();
  /* 10a09e2e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10a09e34 jmp 0x10a09e3d */
  goto L_10a09e3d;
L_10a09e36:;
  /* 10a09e36 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10a09e3d:;
  /* 10a09e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09e40 mov esp, ebp */
  ESP = (EBP);
  /* 10a09e42 pop ebp */
  EBP = (pop32());
  /* 10a09e43 ret  */
  ESPCHK(0x10a09dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e50 @ 0x10a09e50 (10 bytes, 5 insns) */
void f_10a09e50(void) {
  FTRACE(0x10a09e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09e51 mov ebp, esp */
  EBP = (ESP);
  /* 10a09e53 call 0x10a09dd0 */
  push32(0x10a09e58u); f_10a09dd0();
  /* 10a09e58 pop ebp */
  EBP = (pop32());
  /* 10a09e59 ret  */
  ESPCHK(0x10a09e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e60 @ 0x10a09e60 (10 bytes, 5 insns) */
void f_10a09e60(void) {
  FTRACE(0x10a09e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09e61 mov ebp, esp */
  EBP = (ESP);
  /* 10a09e63 mov eax, dword ptr [0x10a2fc94] */
  EAX = (r32((uint32_t)(0x10a2fc94)));
  /* 10a09e68 pop ebp */
  EBP = (pop32());
  /* 10a09e69 ret  */
  ESPCHK(0x10a09e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e70 @ 0x10a09e70 (31 bytes, 11 insns) */
void f_10a09e70(void) {
  FTRACE(0x10a09e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09e71 mov ebp, esp */
  EBP = (ESP);
  /* 10a09e73 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09e7a jbe 0x10a09e80 */
  if ((C.cf||C.zf)) goto L_10a09e80;
  /* 10a09e7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a09e7e jmp 0x10a09e8d */
  goto L_10a09e8d;
L_10a09e80:;
  /* 10a09e80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09e83 mov dword ptr [0x10a2fc94], eax */
  w32((uint32_t)(0x10a2fc94), (EAX));
  /* 10a09e88 mov eax, 1 */
  EAX = (0x1u);
L_10a09e8d:;
  /* 10a09e8d pop ebp */
  EBP = (pop32());
  /* 10a09e8e ret  */
  ESPCHK(0x10a09e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e90 @ 0x10a09e90 (89 bytes, 20 insns) */
void f_10a09e90(void) {
  FTRACE(0x10a09e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09e91 mov ebp, esp */
  EBP = (ESP);
  /* 10a09e93 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10a09e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a09e9a mov eax, dword ptr [0x10a3308c] */
  EAX = (r32((uint32_t)(0x10a3308c)));
  /* 10a09e9f push eax */
  push32((uint32_t)(EAX));
  /* 10a09ea0 call dword ptr [0x10a34314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34314))), 0x10a09ea6u);
  /* 10a09ea6 mov dword ptr [0x10a33088], eax */
  w32((uint32_t)(0x10a33088), (EAX));
  /* 10a09eab cmp dword ptr [0x10a33088], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a33088))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09eb2 jne 0x10a09eb8 */
  if (!C.zf) goto L_10a09eb8;
  /* 10a09eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a09eb6 jmp 0x10a09ee7 */
  goto L_10a09ee7;
L_10a09eb8:;
  /* 10a09eb8 mov ecx, dword ptr [0x10a33088] */
  ECX = (r32((uint32_t)(0x10a33088)));
  /* 10a09ebe mov dword ptr [0x10a3307c], ecx */
  w32((uint32_t)(0x10a3307c), (ECX));
  /* 10a09ec4 mov dword ptr [0x10a33080], 0 */
  w32((uint32_t)(0x10a33080), (0x0u));
  /* 10a09ece mov dword ptr [0x10a33084], 0 */
  w32((uint32_t)(0x10a33084), (0x0u));
  /* 10a09ed8 mov dword ptr [0x10a33068], 0x10 */
  w32((uint32_t)(0x10a33068), (0x10u));
  /* 10a09ee2 mov eax, 1 */
  EAX = (0x1u);
L_10a09ee7:;
  /* 10a09ee7 pop ebp */
  EBP = (pop32());
  /* 10a09ee8 ret  */
  ESPCHK(0x10a09e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ef0 @ 0x10a09ef0 (85 bytes, 29 insns) */
void f_10a09ef0(void) {
  FTRACE(0x10a09ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10a09ef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09ef6 mov eax, dword ptr [0x10a33084] */
  EAX = (r32((uint32_t)(0x10a33084)));
  /* 10a09efb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a09efe mov ecx, dword ptr [0x10a33088] */
  ECX = (r32((uint32_t)(0x10a33088)));
  /* 10a09f04 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09f06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a09f09 mov edx, dword ptr [0x10a33088] */
  EDX = (r32((uint32_t)(0x10a33088)));
  /* 10a09f0f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a09f12:;
  /* 10a09f12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09f15 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09f18 jae 0x10a09f3f */
  if (!C.cf) goto L_10a09f3f;
  /* 10a09f1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09f1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09f20 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09f23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a09f26 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09f2d jae 0x10a09f34 */
  if (!C.cf) goto L_10a09f34;
  /* 10a09f2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09f32 jmp 0x10a09f41 */
  goto L_10a09f41;
L_10a09f34:;
  /* 10a09f34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09f37 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09f3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a09f3d jmp 0x10a09f12 */
  goto L_10a09f12;
L_10a09f3f:;
  /* 10a09f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a09f41:;
  /* 10a09f41 mov esp, ebp */
  ESP = (EBP);
  /* 10a09f43 pop ebp */
  EBP = (pop32());
  /* 10a09f44 ret  */
  ESPCHK(0x10a09ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f50 @ 0x10a09f50 (95 bytes, 33 insns) */
void f_10a09f50(void) {
  FTRACE(0x10a09f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09f51 mov ebp, esp */
  EBP = (ESP);
  /* 10a09f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09f59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09f5c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09f5f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a09f62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09f65 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10a09f68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a09f6b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a09f70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09f73 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a09f75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09f78 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a09f7b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a09f7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a09f7f jne 0x10a09fa1 */
  if (!C.zf) goto L_10a09fa1;
  /* 10a09f81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09f84 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10a09f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a09f89 jne 0x10a09fa1 */
  if (!C.zf) goto L_10a09fa1;
  /* 10a09f8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09f8e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a09f94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a09f96 je 0x10a09fa1 */
  if (C.zf) goto L_10a09fa1;
  /* 10a09f98 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10a09f9f jmp 0x10a09fa8 */
  goto L_10a09fa8;
L_10a09fa1:;
  /* 10a09fa1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10a09fa8:;
  /* 10a09fa8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a09fab mov esp, ebp */
  ESP = (EBP);
  /* 10a09fad pop ebp */
  EBP = (pop32());
  /* 10a09fae ret  */
  ESPCHK(0x10a09f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fb0 @ 0x10a09fb0 (1485 bytes, 453 insns) */
void f_10a09fb0(void) {
  FTRACE(0x10a09fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a09fb3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09fb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a09fbc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10a09fbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09fc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09fc5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09fc8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a09fcb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a09fce shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10a09fd1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a09fd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09fd7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a09fdd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a09fe0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10a09fe7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a09fea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09fed sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09ff0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a09ff3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a09ff6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a09ff8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09ffb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10a09ffe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a001 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a004 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10a0a007 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a00a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0a00c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a0a00f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a012 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10a0a015 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a0a018 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0a01b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a01e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0a020 jne 0x10a0a148 */
  if (!C.zf) goto L_10a0a148;
  /* 10a0a026 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0a029 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a0a02c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a02f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a0a032 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a036 jbe 0x10a0a03f */
  if ((C.cf||C.zf)) goto L_10a0a03f;
  /* 10a0a038 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10a0a03f:;
  /* 10a0a03f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a042 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a045 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0a048 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a04b jne 0x10a0a121 */
  if (!C.zf) goto L_10a0a121;
  /* 10a0a051 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a055 jae 0x10a0a0b6 */
  if (!C.cf) goto L_10a0a0b6;
  /* 10a0a057 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0a05c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0a05f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a061 not eax */
  EAX = (~(EAX));
  /* 10a0a063 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a066 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a069 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a0a06d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a06f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a072 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a075 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a0a079 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a07c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a07f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a0a082 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0a085 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a088 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a08b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a0a08e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a091 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a094 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0a098 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0a09a jne 0x10a0a0b4 */
  if (!C.zf) goto L_10a0a0b4;
  /* 10a0a09c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0a0a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0a0a4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a0a6 not eax */
  EAX = (~(EAX));
  /* 10a0a0a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a0ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0a0ad and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a0af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a0b2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a0a0b4:;
  /* 10a0a0b4 jmp 0x10a0a121 */
  goto L_10a0a121;
L_10a0a0b6:;
  /* 10a0a0b6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0a0b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a0bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0a0c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a0c3 not edx */
  EDX = (~(EDX));
  /* 10a0a0c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a0c8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a0cb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a0a0d2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a0d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a0d7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a0da mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10a0a0e1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a0e4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a0e7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a0a0ea sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0a0ed mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a0f0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a0f3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a0a0f6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a0f9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a0fc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a0a100 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0a102 jne 0x10a0a121 */
  if (!C.zf) goto L_10a0a121;
  /* 10a0a104 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0a107 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a10a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0a10f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a111 not edx */
  EDX = (~(EDX));
  /* 10a0a113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a116 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0a119 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a11b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a11e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a0a121:;
  /* 10a0a121 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a124 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0a127 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a12a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a0a12d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a0a130 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a133 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0a136 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a139 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0a13c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a0a13f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a142 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a145 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10a0a148:;
  /* 10a0a148 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a14b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a0a14e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a151 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a0a154 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a158 jbe 0x10a0a161 */
  if ((C.cf||C.zf)) goto L_10a0a161;
  /* 10a0a15a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10a0a161:;
  /* 10a0a161 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0a164 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a167 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0a169 jne 0x10a0a2c5 */
  if (!C.zf) goto L_10a0a2c5;
  /* 10a0a16f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a172 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a175 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10a0a178 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0a17b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a0a17e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a181 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10a0a184 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a188 jbe 0x10a0a191 */
  if ((C.cf||C.zf)) goto L_10a0a191;
  /* 10a0a18a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10a0a191:;
  /* 10a0a191 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a194 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a197 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10a0a19a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a19d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a0a1a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a1a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a0a1a6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a1aa jbe 0x10a0a1b3 */
  if ((C.cf||C.zf)) goto L_10a0a1b3;
  /* 10a0a1ac mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10a0a1b3:;
  /* 10a0a1b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0a1b6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a1b9 je 0x10a0a2bf */
  if (C.zf) goto L_10a0a2bf;
  /* 10a0a1bf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a1c2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a1c5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0a1c8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a1cb jne 0x10a0a2a1 */
  if (!C.zf) goto L_10a0a2a1;
  /* 10a0a1d1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a1d5 jae 0x10a0a236 */
  if (!C.cf) goto L_10a0a236;
  /* 10a0a1d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0a1dc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0a1df shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a1e1 not edx */
  EDX = (~(EDX));
  /* 10a0a1e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a1e6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a1e9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a0a1ed and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a1ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a1f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a1f5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a0a1f9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a1fc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a1ff mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a0a202 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0a205 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a208 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a20b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a0a20e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a211 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a214 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a0a218 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0a21a jne 0x10a0a234 */
  if (!C.zf) goto L_10a0a234;
  /* 10a0a21c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0a221 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0a224 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a226 not edx */
  EDX = (~(EDX));
  /* 10a0a228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a22b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0a22d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a22f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a232 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a0a234:;
  /* 10a0a234 jmp 0x10a0a2a1 */
  goto L_10a0a2a1;
L_10a0a236:;
  /* 10a0a236 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0a239 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a23c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0a241 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a243 not eax */
  EAX = (~(EAX));
  /* 10a0a245 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a248 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a24b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a0a252 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a254 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a257 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a25a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10a0a261 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a264 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a267 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a0a26a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0a26d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a270 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a273 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a0a276 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a279 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a27c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0a280 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0a282 jne 0x10a0a2a1 */
  if (!C.zf) goto L_10a0a2a1;
  /* 10a0a284 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0a287 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a28a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0a28f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a291 not eax */
  EAX = (~(EAX));
  /* 10a0a293 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a296 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0a299 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a29b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a29e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a0a2a1:;
  /* 10a0a2a1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a2a4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a0a2a7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a2aa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0a2ad mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a0a2b0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a2b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a0a2b6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a2b9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a0a2bc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10a0a2bf:;
  /* 10a0a2bf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a2c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10a0a2c5:;
  /* 10a0a2c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0a2c8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a2cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0a2cd jne 0x10a0a2db */
  if (!C.zf) goto L_10a0a2db;
  /* 10a0a2cf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0a2d2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a2d5 je 0x10a0a3eb */
  if (C.zf) goto L_10a0a3eb;
L_10a0a2db:;
  /* 10a0a2db mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0a2de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0a2e1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10a0a2e4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a0a2e7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a2ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a2ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0a2f0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a0a2f3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a2f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a2f9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10a0a2fc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a2ff mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a302 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a0a305 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a308 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0a30b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a30e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a0a311 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a314 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a317 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0a31a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a31d jne 0x10a0a3eb */
  if (!C.zf) goto L_10a0a3eb;
  /* 10a0a323 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a327 jae 0x10a0a384 */
  if (!C.cf) goto L_10a0a384;
  /* 10a0a329 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a32c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a32f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0a333 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a336 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a339 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a0a33c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a0a33f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a342 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a345 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a0a348 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0a34a jne 0x10a0a362 */
  if (!C.zf) goto L_10a0a362;
  /* 10a0a34c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0a351 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0a354 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a359 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0a35b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a35d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a360 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a0a362:;
  /* 10a0a362 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0a367 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0a36a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a36c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a36f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a372 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a0a376 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a37b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a37e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a0a382 jmp 0x10a0a3eb */
  goto L_10a0a3eb;
L_10a0a384:;
  /* 10a0a384 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a387 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a38a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0a38e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a391 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a394 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a0a397 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a0a39a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a39d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a3a0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a0a3a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0a3a5 jne 0x10a0a3c2 */
  if (!C.zf) goto L_10a0a3c2;
  /* 10a0a3a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0a3aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a3ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0a3b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a3b7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0a3ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a3bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a3bf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a0a3c2:;
  /* 10a0a3c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0a3c5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a3c8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0a3cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a3cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a3d2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a3d5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a0a3dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a3de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a3e1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a0a3e4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10a0a3eb:;
  /* 10a0a3eb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a3ee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a3f1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a0a3f3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a3f6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a3f9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a3fc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10a0a3ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0a402 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0a404 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a407 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0a40a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a0a40c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0a40f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a412 jne 0x10a0a579 */
  if (!C.zf) goto L_10a0a579;
  /* 10a0a418 cmp dword ptr [0x10a33080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a33080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a41f je 0x10a0a568 */
  if (C.zf) goto L_10a0a568;
  /* 10a0a425 mov eax, dword ptr [0x10a33078] */
  EAX = (r32((uint32_t)(0x10a33078)));
  /* 10a0a42a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10a0a42d mov ecx, dword ptr [0x10a33080] */
  ECX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a433 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0a436 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a438 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a0a43b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10a0a440 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a0a445 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a448 push eax */
  push32((uint32_t)(EAX));
  /* 10a0a449 call dword ptr [0x10a34330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34330))), 0x10a0a44fu);
  /* 10a0a44f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0a454 mov ecx, dword ptr [0x10a33078] */
  ECX = (r32((uint32_t)(0x10a33078)));
  /* 10a0a45a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a45c mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a461 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0a464 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a466 mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a46c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a0a46f mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a474 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0a477 mov edx, dword ptr [0x10a33078] */
  EDX = (r32((uint32_t)(0x10a33078)));
  /* 10a0a47d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10a0a488 mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a48d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0a490 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10a0a493 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0a496 mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a49b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0a49e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10a0a4a1 mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a4a7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a0a4aa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10a0a4ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0a4b0 jne 0x10a0a4c6 */
  if (!C.zf) goto L_10a0a4c6;
  /* 10a0a4b2 mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a4b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a0a4bb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10a0a4bd mov ecx, dword ptr [0x10a33080] */
  ECX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a4c3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10a0a4c6:;
  /* 10a0a4c6 mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a4cc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a4d0 jne 0x10a0a568 */
  if (!C.zf) goto L_10a0a568;
  /* 10a0a4d6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a0a4db push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0a4dd mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a4e2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0a4e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0a4e6 call dword ptr [0x10a34330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34330))), 0x10a0a4ecu);
  /* 10a0a4ec mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a4f2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a0a4f5 push eax */
  push32((uint32_t)(EAX));
  /* 10a0a4f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0a4f8 mov ecx, dword ptr [0x10a3308c] */
  ECX = (r32((uint32_t)(0x10a3308c)));
  /* 10a0a4fe push ecx */
  push32((uint32_t)(ECX));
  /* 10a0a4ff call dword ptr [0x10a34334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34334))), 0x10a0a505u);
  /* 10a0a505 mov edx, dword ptr [0x10a33084] */
  EDX = (r32((uint32_t)(0x10a33084)));
  /* 10a0a50b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0a50e mov eax, dword ptr [0x10a33088] */
  EAX = (r32((uint32_t)(0x10a33088)));
  /* 10a0a513 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a515 mov ecx, dword ptr [0x10a33080] */
  ECX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a51b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a51e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a520 push eax */
  push32((uint32_t)(EAX));
  /* 10a0a521 mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a527 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a52a push edx */
  push32((uint32_t)(EDX));
  /* 10a0a52b mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0a530 push eax */
  push32((uint32_t)(EAX));
  /* 10a0a531 call 0x10a0dae0 */
  push32(0x10a0a536u); f_10a0dae0();
  /* 10a0a536 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a539 mov ecx, dword ptr [0x10a33084] */
  ECX = (r32((uint32_t)(0x10a33084)));
  /* 10a0a53f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a542 mov dword ptr [0x10a33084], ecx */
  w32((uint32_t)(0x10a33084), (ECX));
  /* 10a0a548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a54b cmp edx, dword ptr [0x10a33080] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a33080))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a551 jbe 0x10a0a55c */
  if ((C.cf||C.zf)) goto L_10a0a55c;
  /* 10a0a553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a556 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a559 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a0a55c:;
  /* 10a0a55c mov ecx, dword ptr [0x10a33088] */
  ECX = (r32((uint32_t)(0x10a33088)));
  /* 10a0a562 mov dword ptr [0x10a3307c], ecx */
  w32((uint32_t)(0x10a3307c), (ECX));
L_10a0a568:;
  /* 10a0a568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a56b mov dword ptr [0x10a33080], edx */
  w32((uint32_t)(0x10a33080), (EDX));
  /* 10a0a571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a574 mov dword ptr [0x10a33078], eax */
  w32((uint32_t)(0x10a33078), (EAX));
L_10a0a579:;
  /* 10a0a579 mov esp, ebp */
  ESP = (EBP);
  /* 10a0a57b pop ebp */
  EBP = (pop32());
  /* 10a0a57c ret  */
  ESPCHK(0x10a09fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a580 @ 0x10a0a580 (1334 bytes, 427 insns) */
void f_10a0a580(void) {
  FTRACE(0x10a0a580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0a580 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0a581 mov ebp, esp */
  EBP = (ESP);
  /* 10a0a583 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a586 push esi */
  push32((uint32_t)(ESI));
  /* 10a0a587 mov eax, dword ptr [0x10a33084] */
  EAX = (r32((uint32_t)(0x10a33084)));
  /* 10a0a58c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0a58f mov ecx, dword ptr [0x10a33088] */
  ECX = (r32((uint32_t)(0x10a33088)));
  /* 10a0a595 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a597 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a0a59a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0a59d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a5a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a5a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a0a5a6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0a5a9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a0a5ac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a5af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a0a5b2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a5b6 jge 0x10a0a5cc */
  if ((C.sf==C.of)) goto L_10a0a5cc;
  /* 10a0a5b8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a5bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a5be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a5c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a0a5c3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10a0a5ca jmp 0x10a0a5e1 */
  goto L_10a0a5e1;
L_10a0a5cc:;
  /* 10a0a5cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a0a5d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a5d6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a5d9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a5dc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a5de mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10a0a5e1:;
  /* 10a0a5e1 mov ecx, dword ptr [0x10a3307c] */
  ECX = (r32((uint32_t)(0x10a3307c)));
  /* 10a0a5e7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10a0a5ea:;
  /* 10a0a5ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a5ed cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a5f0 jae 0x10a0a616 */
  if (!C.cf) goto L_10a0a616;
  /* 10a0a5f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a5f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0a5f8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a5fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a5fd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a600 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a603 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a605 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0a607 je 0x10a0a60b */
  if (C.zf) goto L_10a0a60b;
  /* 10a0a609 jmp 0x10a0a616 */
  goto L_10a0a616;
L_10a0a60b:;
  /* 10a0a60b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a60e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a611 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a0a614 jmp 0x10a0a5ea */
  goto L_10a0a5ea;
L_10a0a616:;
  /* 10a0a616 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a619 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a61c jne 0x10a0a6fd */
  if (!C.zf) goto L_10a0a6fd;
  /* 10a0a622 mov eax, dword ptr [0x10a33088] */
  EAX = (r32((uint32_t)(0x10a33088)));
  /* 10a0a627 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10a0a62a:;
  /* 10a0a62a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a62d cmp ecx, dword ptr [0x10a3307c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a3307c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a633 jae 0x10a0a659 */
  if (!C.cf) goto L_10a0a659;
  /* 10a0a635 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a638 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0a63b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a63d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a640 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a643 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a646 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0a64a je 0x10a0a64e */
  if (C.zf) goto L_10a0a64e;
  /* 10a0a64c jmp 0x10a0a659 */
  goto L_10a0a659;
L_10a0a64e:;
  /* 10a0a64e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a651 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a654 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a0a657 jmp 0x10a0a62a */
  goto L_10a0a62a;
L_10a0a659:;
  /* 10a0a659 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a65c cmp ecx, dword ptr [0x10a3307c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a3307c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a662 jne 0x10a0a6fd */
  if (!C.zf) goto L_10a0a6fd;
L_10a0a668:;
  /* 10a0a668 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a66b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a66e jae 0x10a0a686 */
  if (!C.cf) goto L_10a0a686;
  /* 10a0a670 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a673 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a677 je 0x10a0a67b */
  if (C.zf) goto L_10a0a67b;
  /* 10a0a679 jmp 0x10a0a686 */
  goto L_10a0a686;
L_10a0a67b:;
  /* 10a0a67b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a67e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a681 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a0a684 jmp 0x10a0a668 */
  goto L_10a0a668;
L_10a0a686:;
  /* 10a0a686 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a689 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a68c jne 0x10a0a6d7 */
  if (!C.zf) goto L_10a0a6d7;
  /* 10a0a68e mov eax, dword ptr [0x10a33088] */
  EAX = (r32((uint32_t)(0x10a33088)));
  /* 10a0a693 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10a0a696:;
  /* 10a0a696 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a699 cmp ecx, dword ptr [0x10a3307c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a3307c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a69f jae 0x10a0a6b7 */
  if (!C.cf) goto L_10a0a6b7;
  /* 10a0a6a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a6a4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a6a8 je 0x10a0a6ac */
  if (C.zf) goto L_10a0a6ac;
  /* 10a0a6aa jmp 0x10a0a6b7 */
  goto L_10a0a6b7;
L_10a0a6ac:;
  /* 10a0a6ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a6af add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a6b2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a0a6b5 jmp 0x10a0a696 */
  goto L_10a0a696;
L_10a0a6b7:;
  /* 10a0a6b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a6ba cmp ecx, dword ptr [0x10a3307c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a3307c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a6c0 jne 0x10a0a6d7 */
  if (!C.zf) goto L_10a0a6d7;
  /* 10a0a6c2 call 0x10a0aac0 */
  push32(0x10a0a6c7u); f_10a0aac0();
  /* 10a0a6c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a0a6ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a6ce jne 0x10a0a6d7 */
  if (!C.zf) goto L_10a0a6d7;
  /* 10a0a6d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a6d2 jmp 0x10a0aab1 */
  goto L_10a0aab1;
L_10a0a6d7:;
  /* 10a0a6d7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a6da push edx */
  push32((uint32_t)(EDX));
  /* 10a0a6db call 0x10a0abd0 */
  push32(0x10a0a6e0u); f_10a0abd0();
  /* 10a0a6e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a6e3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a6e6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a0a6e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a0a6eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a6ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0a6f1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a6f4 jne 0x10a0a6fd */
  if (!C.zf) goto L_10a0a6fd;
  /* 10a0a6f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a6f8 jmp 0x10a0aab1 */
  goto L_10a0aab1;
L_10a0a6fd:;
  /* 10a0a6fd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a700 mov dword ptr [0x10a3307c], edx */
  w32((uint32_t)(0x10a3307c), (EDX));
  /* 10a0a706 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a709 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0a70c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10a0a70f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a712 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0a714 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10a0a717 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a71b je 0x10a0a740 */
  if (C.zf) goto L_10a0a740;
  /* 10a0a71d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a720 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a723 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0a726 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a72a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a72d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a730 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a733 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10a0a73a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a73c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0a73e jne 0x10a0a775 */
  if (!C.zf) goto L_10a0a775;
L_10a0a740:;
  /* 10a0a740 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10a0a747:;
  /* 10a0a747 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a74a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a74d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0a750 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a754 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a757 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a75a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a75d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10a0a764 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a766 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0a768 jne 0x10a0a775 */
  if (!C.zf) goto L_10a0a775;
  /* 10a0a76a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a76d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a770 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10a0a773 jmp 0x10a0a747 */
  goto L_10a0a747;
L_10a0a775:;
  /* 10a0a775 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a778 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0a77e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a781 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10a0a788 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0a78b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a0a792 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a795 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a798 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0a79b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a79f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a0a7a2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a7a6 jne 0x10a0a7c2 */
  if (!C.zf) goto L_10a0a7c2;
  /* 10a0a7a8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10a0a7af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a7b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a7b5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0a7b8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a7bf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10a0a7c2:;
  /* 10a0a7c2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a7c6 jl 0x10a0a7db */
  if ((C.sf!=C.of)) goto L_10a0a7db;
  /* 10a0a7c8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0a7cb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a0a7cd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a0a7d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a7d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a7d6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a0a7d9 jmp 0x10a0a7c2 */
  goto L_10a0a7c2;
L_10a0a7db:;
  /* 10a0a7db mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a7de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a7e1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10a0a7e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a0a7e8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a7eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0a7ed sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a7f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0a7f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0a7f6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a0a7f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a7fc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a0a7ff cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a803 jle 0x10a0a80c */
  if ((C.zf||C.sf!=C.of)) goto L_10a0a80c;
  /* 10a0a805 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10a0a80c:;
  /* 10a0a80c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0a80f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a812 je 0x10a0aa30 */
  if (C.zf) goto L_10a0aa30;
  /* 10a0a818 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a81b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a81e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0a821 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a824 jne 0x10a0a8fa */
  if (!C.zf) goto L_10a0a8fa;
  /* 10a0a82a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a82e jge 0x10a0a88f */
  if ((C.sf==C.of)) goto L_10a0a88f;
  /* 10a0a830 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0a835 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a838 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a83a not eax */
  EAX = (~(EAX));
  /* 10a0a83c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a83f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a842 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a0a846 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a848 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a84b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a84e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a0a852 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a855 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a858 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a0a85b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0a85e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a861 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a864 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a0a867 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a86a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a86d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0a871 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0a873 jne 0x10a0a88d */
  if (!C.zf) goto L_10a0a88d;
  /* 10a0a875 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0a87a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a87d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a87f not eax */
  EAX = (~(EAX));
  /* 10a0a881 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a884 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0a886 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a888 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a88b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a0a88d:;
  /* 10a0a88d jmp 0x10a0a8fa */
  goto L_10a0a8fa;
L_10a0a88f:;
  /* 10a0a88f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a892 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a895 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0a89a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a89c not edx */
  EDX = (~(EDX));
  /* 10a0a89e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a8a1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a8a4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a0a8ab and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a8ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a8b0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a8b3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10a0a8ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a8bd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a8c0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a0a8c3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0a8c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a8c9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a8cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a0a8cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a8d2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a8d5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a0a8d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0a8db jne 0x10a0a8fa */
  if (!C.zf) goto L_10a0a8fa;
  /* 10a0a8dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0a8e0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a8e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0a8e8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a8ea not edx */
  EDX = (~(EDX));
  /* 10a0a8ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a8ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0a8f2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0a8f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a8f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a0a8fa:;
  /* 10a0a8fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a8fd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0a900 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a903 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a0a906 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a0a909 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a90c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0a90f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a912 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0a915 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a0a918 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a91c je 0x10a0aa30 */
  if (C.zf) goto L_10a0aa30;
  /* 10a0a922 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0a925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0a928 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10a0a92b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a0a92e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a931 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0a934 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0a937 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a0a93a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a93d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0a940 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a0a943 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0a946 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a949 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a0a94c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a94f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0a952 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a955 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a0a958 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a95b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0a95e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0a961 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a964 jne 0x10a0aa30 */
  if (!C.zf) goto L_10a0aa30;
  /* 10a0a96a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0a96e jge 0x10a0a9ca */
  if ((C.sf==C.of)) goto L_10a0a9ca;
  /* 10a0a970 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a973 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a976 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a0a97a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a97d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a980 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a0a983 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a0a985 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a988 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a98b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a0a98e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0a990 jne 0x10a0a9a8 */
  if (!C.zf) goto L_10a0a9a8;
  /* 10a0a992 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0a997 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0a99a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a99c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a99f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0a9a1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0a9a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a9a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a0a9a8:;
  /* 10a0a9a8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0a9ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0a9b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0a9b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a9b5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a9b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a0a9bc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0a9be mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0a9c1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a9c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a0a9c8 jmp 0x10a0aa30 */
  goto L_10a0aa30;
L_10a0a9ca:;
  /* 10a0a9ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a9cd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a9d0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a0a9d4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a9d7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a9da mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a0a9dd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a0a9df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0a9e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0a9e5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a0a9e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0a9ea jne 0x10a0aa07 */
  if (!C.zf) goto L_10a0aa07;
  /* 10a0a9ec mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0a9ef sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0a9f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0a9f7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0a9f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0a9fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0a9ff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0aa01 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0aa04 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a0aa07:;
  /* 10a0aa07 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0aa0a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0aa0d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0aa12 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0aa14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0aa17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0aa1a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a0aa21 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0aa23 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0aa26 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0aa29 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10a0aa30:;
  /* 10a0aa30 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0aa34 je 0x10a0aa4a */
  if (C.zf) goto L_10a0aa4a;
  /* 10a0aa36 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0aa39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0aa3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a0aa3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0aa41 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aa44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0aa47 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10a0aa4a:;
  /* 10a0aa4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0aa4d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aa50 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a0aa53 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0aa56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aa59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0aa5c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a0aa5e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0aa61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aa64 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0aa67 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aa6a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10a0aa6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0aa70 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0aa72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0aa75 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0aa77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aa7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0aa7d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a0aa7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0aa81 jne 0x10a0aaa3 */
  if (!C.zf) goto L_10a0aaa3;
  /* 10a0aa83 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0aa86 cmp eax, dword ptr [0x10a33080] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a33080))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0aa8c jne 0x10a0aaa3 */
  if (!C.zf) goto L_10a0aaa3;
  /* 10a0aa8e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0aa91 cmp ecx, dword ptr [0x10a33078] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a33078))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0aa97 jne 0x10a0aaa3 */
  if (!C.zf) goto L_10a0aaa3;
  /* 10a0aa99 mov dword ptr [0x10a33080], 0 */
  w32((uint32_t)(0x10a33080), (0x0u));
L_10a0aaa3:;
  /* 10a0aaa3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a0aaa6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0aaa9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a0aaab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0aaae add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10a0aab1:;
  /* 10a0aab1 pop esi */
  ESI = (pop32());
  /* 10a0aab2 mov esp, ebp */
  ESP = (EBP);
  /* 10a0aab4 pop ebp */
  EBP = (pop32());
  /* 10a0aab5 ret  */
  ESPCHK(0x10a0a580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aac0 @ 0x10a0aac0 (271 bytes, 78 insns) */
void f_10a0aac0(void) {
  FTRACE(0x10a0aac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0aac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0aac1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0aac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0aac4 mov eax, dword ptr [0x10a33084] */
  EAX = (r32((uint32_t)(0x10a33084)));
  /* 10a0aac9 cmp eax, dword ptr [0x10a33068] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a33068))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0aacf jne 0x10a0ab1b */
  if (!C.zf) goto L_10a0ab1b;
  /* 10a0aad1 mov ecx, dword ptr [0x10a33068] */
  ECX = (r32((uint32_t)(0x10a33068)));
  /* 10a0aad7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aada imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0aadd push ecx */
  push32((uint32_t)(ECX));
  /* 10a0aade mov edx, dword ptr [0x10a33088] */
  EDX = (r32((uint32_t)(0x10a33088)));
  /* 10a0aae4 push edx */
  push32((uint32_t)(EDX));
  /* 10a0aae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0aae7 mov eax, dword ptr [0x10a3308c] */
  EAX = (r32((uint32_t)(0x10a3308c)));
  /* 10a0aaec push eax */
  push32((uint32_t)(EAX));
  /* 10a0aaed call dword ptr [0x10a34310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34310))), 0x10a0aaf3u);
  /* 10a0aaf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0aaf6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0aafa jne 0x10a0ab03 */
  if (!C.zf) goto L_10a0ab03;
  /* 10a0aafc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0aafe jmp 0x10a0abcb */
  goto L_10a0abcb;
L_10a0ab03:;
  /* 10a0ab03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ab06 mov dword ptr [0x10a33088], ecx */
  w32((uint32_t)(0x10a33088), (ECX));
  /* 10a0ab0c mov edx, dword ptr [0x10a33068] */
  EDX = (r32((uint32_t)(0x10a33068)));
  /* 10a0ab12 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ab15 mov dword ptr [0x10a33068], edx */
  w32((uint32_t)(0x10a33068), (EDX));
L_10a0ab1b:;
  /* 10a0ab1b mov eax, dword ptr [0x10a33084] */
  EAX = (r32((uint32_t)(0x10a33084)));
  /* 10a0ab20 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0ab23 mov ecx, dword ptr [0x10a33088] */
  ECX = (r32((uint32_t)(0x10a33088)));
  /* 10a0ab29 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ab2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a0ab2e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10a0ab33 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a0ab35 mov edx, dword ptr [0x10a3308c] */
  EDX = (r32((uint32_t)(0x10a3308c)));
  /* 10a0ab3b push edx */
  push32((uint32_t)(EDX));
  /* 10a0ab3c call dword ptr [0x10a34314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34314))), 0x10a0ab42u);
  /* 10a0ab42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ab45 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10a0ab48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ab4b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ab4f jne 0x10a0ab55 */
  if (!C.zf) goto L_10a0ab55;
  /* 10a0ab51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ab53 jmp 0x10a0abcb */
  goto L_10a0abcb;
L_10a0ab55:;
  /* 10a0ab55 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a0ab57 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10a0ab5c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10a0ab61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0ab63 call dword ptr [0x10a3430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3430c))), 0x10a0ab69u);
  /* 10a0ab69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ab6c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10a0ab6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ab72 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ab76 jne 0x10a0ab92 */
  if (!C.zf) goto L_10a0ab92;
  /* 10a0ab78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ab7b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0ab7e push ecx */
  push32((uint32_t)(ECX));
  /* 10a0ab7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0ab81 mov edx, dword ptr [0x10a3308c] */
  EDX = (r32((uint32_t)(0x10a3308c)));
  /* 10a0ab87 push edx */
  push32((uint32_t)(EDX));
  /* 10a0ab88 call dword ptr [0x10a34334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34334))), 0x10a0ab8eu);
  /* 10a0ab8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ab90 jmp 0x10a0abcb */
  goto L_10a0abcb;
L_10a0ab92:;
  /* 10a0ab92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ab95 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a0ab9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ab9e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a0aba5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0aba8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10a0abaf mov eax, dword ptr [0x10a33084] */
  EAX = (r32((uint32_t)(0x10a33084)));
  /* 10a0abb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0abb7 mov dword ptr [0x10a33084], eax */
  w32((uint32_t)(0x10a33084), (EAX));
  /* 10a0abbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0abbf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a0abc2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10a0abc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a0abcb:;
  /* 10a0abcb mov esp, ebp */
  ESP = (EBP);
  /* 10a0abcd pop ebp */
  EBP = (pop32());
  /* 10a0abce ret  */
  ESPCHK(0x10a0aac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abd0 @ 0x10a0abd0 (494 bytes, 149 insns) */
void f_10a0abd0(void) {
  FTRACE(0x10a0abd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0abd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0abd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0abd3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0abd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0abd9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0abdc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a0abdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0abe2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a0abe5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0abe8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10a0abef:;
  /* 10a0abef cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0abf3 jl 0x10a0ac08 */
  if ((C.sf!=C.of)) goto L_10a0ac08;
  /* 10a0abf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0abf8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a0abfa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a0abfd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0ac00 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ac03 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a0ac06 jmp 0x10a0abef */
  goto L_10a0abef;
L_10a0ac08:;
  /* 10a0ac08 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0ac0b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0ac11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0ac14 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10a0ac1b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a0ac1e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a0ac25 jmp 0x10a0ac30 */
  goto L_10a0ac30;
L_10a0ac27:;
  /* 10a0ac27 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0ac2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ac2d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10a0ac30:;
  /* 10a0ac30 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ac34 jge 0x10a0ac56 */
  if ((C.sf==C.of)) goto L_10a0ac56;
  /* 10a0ac36 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0ac39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ac3c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10a0ac3f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a0ac42 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0ac45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0ac48 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a0ac4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0ac4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0ac51 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a0ac54 jmp 0x10a0ac27 */
  goto L_10a0ac27;
L_10a0ac56:;
  /* 10a0ac56 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0ac59 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10a0ac5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ac5f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0ac62 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ac64 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a0ac67 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a0ac69 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a0ac6e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a0ac73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0ac76 push edx */
  push32((uint32_t)(EDX));
  /* 10a0ac77 call dword ptr [0x10a3430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3430c))), 0x10a0ac7du);
  /* 10a0ac7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0ac7f jne 0x10a0ac89 */
  if (!C.zf) goto L_10a0ac89;
  /* 10a0ac81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ac84 jmp 0x10a0adba */
  goto L_10a0adba;
L_10a0ac89:;
  /* 10a0ac89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0ac8c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ac91 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a0ac94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0ac97 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a0ac9a jmp 0x10a0aca8 */
  goto L_10a0aca8;
L_10a0ac9c:;
  /* 10a0ac9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ac9f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aca5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a0aca8:;
  /* 10a0aca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0acab cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0acae ja 0x10a0ad0d */
  if ((!C.cf&&!C.zf)) goto L_10a0ad0d;
  /* 10a0acb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0acb3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10a0acba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0acbd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10a0acc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0acca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0accd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a0acd0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0acd3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10a0acd9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0acdc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ace2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0ace5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a0ace8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0aceb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0acf1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0acf4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a0acf7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0acfa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0acff mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a0ad02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0ad05 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10a0ad0b jmp 0x10a0ac9c */
  goto L_10a0ac9c;
L_10a0ad0d:;
  /* 10a0ad0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ad10 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ad16 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a0ad19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0ad1c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ad1f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0ad22 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a0ad25 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0ad28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a0ad2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a0ad2e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0ad31 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0ad34 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a0ad37 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0ad3a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ad3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0ad40 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10a0ad43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0ad46 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a0ad49 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a0ad4c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0ad4f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0ad52 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a0ad55 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0ad58 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0ad5b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10a0ad63 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0ad66 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0ad69 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10a0ad74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0ad77 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10a0ad7b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0ad7e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10a0ad81 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a0ad84 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0ad87 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10a0ad8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0ad8c jne 0x10a0ad9d */
  if (!C.zf) goto L_10a0ad9d;
  /* 10a0ad8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ad91 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0ad94 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0ad97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ad9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a0ad9d:;
  /* 10a0ad9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0ada2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0ada5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0ada7 not edx */
  EDX = (~(EDX));
  /* 10a0ada9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0adac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0adaf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0adb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0adb4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a0adb7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10a0adba:;
  /* 10a0adba mov esp, ebp */
  ESP = (EBP);
  /* 10a0adbc pop ebp */
  EBP = (pop32());
  /* 10a0adbd ret  */
  ESPCHK(0x10a0abd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adc0 @ 0x10a0adc0 (1515 bytes, 489 insns) */
void f_10a0adc0(void) {
  FTRACE(0x10a0adc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0adc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0adc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0adc3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0adc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0adc9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0adcc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10a0adce mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a0add1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0add4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a0add7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10a0adda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0addd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0ade0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ade3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a0ade6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ade9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10a0adec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0adef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0adf2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0adf8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0adfb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10a0ae02 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a0ae05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0ae08 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ae0b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a0ae0e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0ae11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0ae13 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ae16 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a0ae19 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0ae1c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ae1f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10a0ae22 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0ae25 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0ae27 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a0ae2a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0ae2d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ae30 jle 0x10a0b0e6 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0b0e6;
  /* 10a0ae36 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0ae39 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0ae3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0ae3e jne 0x10a0ae4b */
  if (!C.zf) goto L_10a0ae4b;
  /* 10a0ae40 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0ae43 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ae46 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ae49 jle 0x10a0ae52 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0ae52;
L_10a0ae4b:;
  /* 10a0ae4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ae4d jmp 0x10a0b3a7 */
  goto L_10a0b3a7;
L_10a0ae52:;
  /* 10a0ae52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0ae55 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a0ae58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ae5b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a0ae5e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ae62 jbe 0x10a0ae6b */
  if ((C.cf||C.zf)) goto L_10a0ae6b;
  /* 10a0ae64 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10a0ae6b:;
  /* 10a0ae6b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0ae6e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0ae71 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0ae74 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ae77 jne 0x10a0af4d */
  if (!C.zf) goto L_10a0af4d;
  /* 10a0ae7d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ae81 jae 0x10a0aee2 */
  if (!C.cf) goto L_10a0aee2;
  /* 10a0ae83 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0ae88 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0ae8b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0ae8d not edx */
  EDX = (~(EDX));
  /* 10a0ae8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ae92 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0ae95 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a0ae99 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ae9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ae9e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0aea1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a0aea5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0aea8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aeab mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a0aeae sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0aeb1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0aeb4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aeb7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a0aeba mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0aebd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aec0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a0aec4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0aec6 jne 0x10a0aee0 */
  if (!C.zf) goto L_10a0aee0;
  /* 10a0aec8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0aecd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0aed0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0aed2 not edx */
  EDX = (~(EDX));
  /* 10a0aed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0aed7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0aed9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0aedb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0aede mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a0aee0:;
  /* 10a0aee0 jmp 0x10a0af4d */
  goto L_10a0af4d;
L_10a0aee2:;
  /* 10a0aee2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0aee5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0aee8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0aeed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0aeef not eax */
  EAX = (~(EAX));
  /* 10a0aef1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0aef4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0aef7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a0aefe and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0af00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0af03 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0af06 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10a0af0d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0af10 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0af13 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a0af16 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0af19 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0af1c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0af1f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a0af22 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0af25 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0af28 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0af2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0af2e jne 0x10a0af4d */
  if (!C.zf) goto L_10a0af4d;
  /* 10a0af30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0af33 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0af36 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0af3b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0af3d not eax */
  EAX = (~(EAX));
  /* 10a0af3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0af42 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0af45 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0af47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0af4a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a0af4d:;
  /* 10a0af4d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0af50 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a0af53 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0af56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0af59 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a0af5c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0af5f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a0af62 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0af65 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a0af68 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10a0af6b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0af6e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0af71 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0af74 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a0af77 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0af7b jle 0x10a0b0c7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0b0c7;
  /* 10a0af81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0af84 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0af87 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a0af8a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0af8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a0af90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0af93 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a0af96 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0af9a jbe 0x10a0afa3 */
  if ((C.cf||C.zf)) goto L_10a0afa3;
  /* 10a0af9c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10a0afa3:;
  /* 10a0afa3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0afa6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0afa9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10a0afac mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a0afaf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0afb2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0afb5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0afb8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a0afbb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0afbe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0afc1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10a0afc4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0afc7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0afca mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a0afcd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0afd0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0afd3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0afd6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a0afd9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0afdc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0afdf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0afe2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0afe5 jne 0x10a0b0b3 */
  if (!C.zf) goto L_10a0b0b3;
  /* 10a0afeb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0afef jae 0x10a0b04c */
  if (!C.cf) goto L_10a0b04c;
  /* 10a0aff1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0aff4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0aff7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0affb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0affe add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b001 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a0b004 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a0b007 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b00a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b00d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a0b010 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0b012 jne 0x10a0b02a */
  if (!C.zf) goto L_10a0b02a;
  /* 10a0b014 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b019 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0b01c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b01e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b021 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0b023 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0b025 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b028 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a0b02a:;
  /* 10a0b02a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0b02f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0b032 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0b034 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b037 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b03a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a0b03e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0b040 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b043 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b046 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a0b04a jmp 0x10a0b0b3 */
  goto L_10a0b0b3;
L_10a0b04c:;
  /* 10a0b04c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b04f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b052 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0b056 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b059 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b05c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a0b05f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a0b062 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b065 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b068 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a0b06b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0b06d jne 0x10a0b08a */
  if (!C.zf) goto L_10a0b08a;
  /* 10a0b06f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0b072 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b075 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b07a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b07c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b07f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0b082 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0b084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b087 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a0b08a:;
  /* 10a0b08a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0b08d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b090 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0b095 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0b097 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b09a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b09d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a0b0a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0b0a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b0a9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b0ac mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10a0b0b3:;
  /* 10a0b0b3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0b0b6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0b0b9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a0b0bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0b0be add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b0c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0b0c4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10a0b0c7:;
  /* 10a0b0c7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0b0ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b0cd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b0d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a0b0d2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0b0d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b0d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b0db add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b0de mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10a0b0e1 jmp 0x10a0b3a2 */
  goto L_10a0b3a2;
L_10a0b0e6:;
  /* 10a0b0e6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0b0e9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b0ec jge 0x10a0b3a2 */
  if ((C.sf==C.of)) goto L_10a0b3a2;
  /* 10a0b0f2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0b0f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b0f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b0fb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a0b0fd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0b100 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b103 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b106 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b109 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10a0b10c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b10f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b112 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a0b115 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0b118 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b11b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a0b11e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0b121 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a0b124 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b127 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a0b12a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b12e jbe 0x10a0b137 */
  if ((C.cf||C.zf)) goto L_10a0b137;
  /* 10a0b130 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10a0b137:;
  /* 10a0b137 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0b13a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0b13d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0b13f jne 0x10a0b280 */
  if (!C.zf) goto L_10a0b280;
  /* 10a0b145 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0b148 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a0b14b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b14e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a0b151 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b155 jbe 0x10a0b15e */
  if ((C.cf||C.zf)) goto L_10a0b15e;
  /* 10a0b157 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10a0b15e:;
  /* 10a0b15e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0b161 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0b164 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0b167 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b16a jne 0x10a0b240 */
  if (!C.zf) goto L_10a0b240;
  /* 10a0b170 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b174 jae 0x10a0b1d5 */
  if (!C.cf) goto L_10a0b1d5;
  /* 10a0b176 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b17b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0b17e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b180 not edx */
  EDX = (~(EDX));
  /* 10a0b182 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b185 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b188 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a0b18c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0b18e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b191 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b194 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a0b198 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b19b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b19e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a0b1a1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0b1a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b1a7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b1aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a0b1ad mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b1b0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b1b3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a0b1b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0b1b9 jne 0x10a0b1d3 */
  if (!C.zf) goto L_10a0b1d3;
  /* 10a0b1bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b1c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0b1c3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b1c5 not edx */
  EDX = (~(EDX));
  /* 10a0b1c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b1ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0b1cc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0b1ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b1d1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a0b1d3:;
  /* 10a0b1d3 jmp 0x10a0b240 */
  goto L_10a0b240;
L_10a0b1d5:;
  /* 10a0b1d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0b1d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b1db mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0b1e0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0b1e2 not eax */
  EAX = (~(EAX));
  /* 10a0b1e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b1e7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b1ea mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a0b1f1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0b1f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b1f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b1f9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10a0b200 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b203 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b206 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a0b209 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0b20c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b20f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b212 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a0b215 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b218 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b21b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0b21f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0b221 jne 0x10a0b240 */
  if (!C.zf) goto L_10a0b240;
  /* 10a0b223 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0b226 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b229 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0b22e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0b230 not eax */
  EAX = (~(EAX));
  /* 10a0b232 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b235 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0b238 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0b23a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b23d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a0b240:;
  /* 10a0b240 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0b243 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a0b246 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0b249 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0b24c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a0b24f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0b252 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a0b255 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0b258 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a0b25b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10a0b25e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0b261 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b264 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a0b267 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0b26a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a0b26d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b270 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a0b273 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b277 jbe 0x10a0b280 */
  if ((C.cf||C.zf)) goto L_10a0b280;
  /* 10a0b279 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10a0b280:;
  /* 10a0b280 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0b283 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0b286 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10a0b289 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a0b28c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b28f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0b292 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0b295 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a0b298 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b29b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0b29e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a0b2a1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0b2a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b2a7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a0b2aa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b2ad mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0b2b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b2b3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a0b2b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b2b9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b2bc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0b2bf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b2c2 jne 0x10a0b38e */
  if (!C.zf) goto L_10a0b38e;
  /* 10a0b2c8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b2cc jae 0x10a0b328 */
  if (!C.cf) goto L_10a0b328;
  /* 10a0b2ce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b2d1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b2d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a0b2d8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b2db add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b2de mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a0b2e1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a0b2e3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b2e6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b2e9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a0b2ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0b2ee jne 0x10a0b306 */
  if (!C.zf) goto L_10a0b306;
  /* 10a0b2f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0b2f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0b2f8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0b2fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b2fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0b2ff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0b301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b304 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a0b306:;
  /* 10a0b306 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b30b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0b30e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b310 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b313 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b316 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a0b31a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0b31c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b31f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b322 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a0b326 jmp 0x10a0b38e */
  goto L_10a0b38e;
L_10a0b328:;
  /* 10a0b328 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b32b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b32e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a0b332 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b335 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b338 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a0b33b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a0b33d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b340 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b343 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a0b346 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0b348 jne 0x10a0b365 */
  if (!C.zf) goto L_10a0b365;
  /* 10a0b34a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0b34d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b350 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a0b355 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a0b357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b35a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0b35d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0b35f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0b362 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a0b365:;
  /* 10a0b365 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0b368 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b36b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b370 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b375 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b378 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a0b37f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0b381 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b384 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0b387 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10a0b38e:;
  /* 10a0b38e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b391 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0b394 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a0b396 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b399 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b39c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0b39f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10a0b3a2:;
  /* 10a0b3a2 mov eax, 1 */
  EAX = (0x1u);
L_10a0b3a7:;
  /* 10a0b3a7 mov esp, ebp */
  ESP = (EBP);
  /* 10a0b3a9 pop ebp */
  EBP = (pop32());
  /* 10a0b3aa ret  */
  ESPCHK(0x10a0adc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3b0 @ 0x10a0b3b0 (304 bytes, 79 insns) */
void f_10a0b3b0(void) {
  FTRACE(0x10a0b3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0b3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0b3b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0b3b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0b3b4 cmp dword ptr [0x10a33080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a33080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b3bb je 0x10a0b4dc */
  if (C.zf) goto L_10a0b4dc;
  /* 10a0b3c1 mov eax, dword ptr [0x10a33078] */
  EAX = (r32((uint32_t)(0x10a33078)));
  /* 10a0b3c6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10a0b3c9 mov ecx, dword ptr [0x10a33080] */
  ECX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b3cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0b3d2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b3d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0b3d7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10a0b3dc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a0b3e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0b3e4 push eax */
  push32((uint32_t)(EAX));
  /* 10a0b3e5 call dword ptr [0x10a34330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34330))), 0x10a0b3ebu);
  /* 10a0b3eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b3f0 mov ecx, dword ptr [0x10a33078] */
  ECX = (r32((uint32_t)(0x10a33078)));
  /* 10a0b3f6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b3f8 mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b3fd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0b400 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0b402 mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b408 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a0b40b mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b410 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0b413 mov edx, dword ptr [0x10a33078] */
  EDX = (r32((uint32_t)(0x10a33078)));
  /* 10a0b419 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10a0b424 mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b429 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0b42c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10a0b42f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a0b432 mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b437 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0b43a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10a0b43d mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b443 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a0b446 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10a0b44a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0b44c jne 0x10a0b462 */
  if (!C.zf) goto L_10a0b462;
  /* 10a0b44e mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b454 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a0b457 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10a0b459 mov ecx, dword ptr [0x10a33080] */
  ECX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b45f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10a0b462:;
  /* 10a0b462 mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b468 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b46c jne 0x10a0b4d2 */
  if (!C.zf) goto L_10a0b4d2;
  /* 10a0b46e cmp dword ptr [0x10a33084], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a33084))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b475 jle 0x10a0b4d2 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0b4d2;
  /* 10a0b477 mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b47c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0b47f push ecx */
  push32((uint32_t)(ECX));
  /* 10a0b480 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0b482 mov edx, dword ptr [0x10a3308c] */
  EDX = (r32((uint32_t)(0x10a3308c)));
  /* 10a0b488 push edx */
  push32((uint32_t)(EDX));
  /* 10a0b489 call dword ptr [0x10a34334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34334))), 0x10a0b48fu);
  /* 10a0b48f mov eax, dword ptr [0x10a33084] */
  EAX = (r32((uint32_t)(0x10a33084)));
  /* 10a0b494 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0b497 mov ecx, dword ptr [0x10a33088] */
  ECX = (r32((uint32_t)(0x10a33088)));
  /* 10a0b49d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b49f mov edx, dword ptr [0x10a33080] */
  EDX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b4a5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b4a8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b4aa push ecx */
  push32((uint32_t)(ECX));
  /* 10a0b4ab mov eax, dword ptr [0x10a33080] */
  EAX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b4b0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b4b3 push eax */
  push32((uint32_t)(EAX));
  /* 10a0b4b4 mov ecx, dword ptr [0x10a33080] */
  ECX = (r32((uint32_t)(0x10a33080)));
  /* 10a0b4ba push ecx */
  push32((uint32_t)(ECX));
  /* 10a0b4bb call 0x10a0dae0 */
  push32(0x10a0b4c0u); f_10a0dae0();
  /* 10a0b4c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b4c3 mov edx, dword ptr [0x10a33084] */
  EDX = (r32((uint32_t)(0x10a33084)));
  /* 10a0b4c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b4cc mov dword ptr [0x10a33084], edx */
  w32((uint32_t)(0x10a33084), (EDX));
L_10a0b4d2:;
  /* 10a0b4d2 mov dword ptr [0x10a33080], 0 */
  w32((uint32_t)(0x10a33080), (0x0u));
L_10a0b4dc:;
  /* 10a0b4dc mov esp, ebp */
  ESP = (EBP);
  /* 10a0b4de pop ebp */
  EBP = (pop32());
  /* 10a0b4df ret  */
  ESPCHK(0x10a0b3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4e0 @ 0x10a0b4e0 (1565 bytes, 343 insns) */
void f_10a0b4e0(void) {
  FTRACE(0x10a0b4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0b4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0b4e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0b4e3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b4e9 mov eax, dword ptr [0x10a33084] */
  EAX = (r32((uint32_t)(0x10a33084)));
  /* 10a0b4ee imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0b4f1 push eax */
  push32((uint32_t)(EAX));
  /* 10a0b4f2 mov ecx, dword ptr [0x10a33088] */
  ECX = (r32((uint32_t)(0x10a33088)));
  /* 10a0b4f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0b4f9 call dword ptr [0x10a3437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3437c))), 0x10a0b4ffu);
  /* 10a0b4ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0b501 je 0x10a0b50b */
  if (C.zf) goto L_10a0b50b;
  /* 10a0b503 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0b506 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b50b:;
  /* 10a0b50b mov edx, dword ptr [0x10a33088] */
  EDX = (r32((uint32_t)(0x10a33088)));
  /* 10a0b511 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10a0b517 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10a0b521 jmp 0x10a0b532 */
  goto L_10a0b532;
L_10a0b523:;
  /* 10a0b523 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10a0b529 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b52c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10a0b532:;
  /* 10a0b532 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10a0b538 cmp ecx, dword ptr [0x10a33084] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a33084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b53e jge 0x10a0baf7 */
  if ((C.sf==C.of)) goto L_10a0baf7;
  /* 10a0b544 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a0b54a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a0b54d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10a0b553 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10a0b558 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a0b55e push ecx */
  push32((uint32_t)(ECX));
  /* 10a0b55f call dword ptr [0x10a3437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3437c))), 0x10a0b565u);
  /* 10a0b565 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0b567 je 0x10a0b573 */
  if (C.zf) goto L_10a0b573;
  /* 10a0b569 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10a0b56e jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b573:;
  /* 10a0b573 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a0b579 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a0b57c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10a0b582 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a0b588 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b58e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a0b591 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a0b597 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a0b59a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0b59d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10a0b5a7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10a0b5b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a0b5b8 jmp 0x10a0b5c3 */
  goto L_10a0b5c3;
L_10a0b5ba:;
  /* 10a0b5ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0b5bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b5c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a0b5c3:;
  /* 10a0b5c3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b5c7 jge 0x10a0babb */
  if ((C.sf==C.of)) goto L_10a0babb;
  /* 10a0b5cd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10a0b5d7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10a0b5e1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10a0b5eb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10a0b5f5 jmp 0x10a0b606 */
  goto L_10a0b606;
L_10a0b5f7:;
  /* 10a0b5f7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a0b5fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b600 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10a0b606:;
  /* 10a0b606 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b60d jge 0x10a0b622 */
  if ((C.sf==C.of)) goto L_10a0b622;
  /* 10a0b60f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a0b615 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10a0b620 jmp 0x10a0b5f7 */
  goto L_10a0b5f7;
L_10a0b622:;
  /* 10a0b622 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b626 jl 0x10a0ba5d */
  if ((C.sf!=C.of)) goto L_10a0ba5d;
  /* 10a0b62c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a0b631 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a0b637 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0b638 call dword ptr [0x10a3437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3437c))), 0x10a0b63eu);
  /* 10a0b63e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0b640 je 0x10a0b64c */
  if (C.zf) goto L_10a0b64c;
  /* 10a0b642 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10a0b647 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b64c:;
  /* 10a0b64c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a0b652 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a0b655 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10a0b65f jmp 0x10a0b670 */
  goto L_10a0b670;
L_10a0b661:;
  /* 10a0b661 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10a0b667 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b66a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10a0b670:;
  /* 10a0b670 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b677 jge 0x10a0b7f4 */
  if ((C.sf==C.of)) goto L_10a0b7f4;
  /* 10a0b67d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0b680 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b683 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10a0b689 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a0b68f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b695 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10a0b69b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a0b6a1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b6a5 jne 0x10a0b6b2 */
  if (!C.zf) goto L_10a0b6b2;
  /* 10a0b6a7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10a0b6ad cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b6b0 je 0x10a0b6bc */
  if (C.zf) goto L_10a0b6bc;
L_10a0b6b2:;
  /* 10a0b6b2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10a0b6b7 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b6bc:;
  /* 10a0b6bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a0b6c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0b6c4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10a0b6ca mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a0b6d0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10a0b6d6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10a0b6dc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0b6df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0b6e1 je 0x10a0b719 */
  if (C.zf) goto L_10a0b719;
  /* 10a0b6e3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a0b6e9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b6ec mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10a0b6f2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b6fc jle 0x10a0b708 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0b708;
  /* 10a0b6fe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10a0b703 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b708:;
  /* 10a0b708 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10a0b70e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b711 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10a0b717 jmp 0x10a0b75b */
  goto L_10a0b75b;
L_10a0b719:;
  /* 10a0b719 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a0b71f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a0b722 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b725 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10a0b72b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b732 jle 0x10a0b73e */
  if ((C.zf||C.sf!=C.of)) goto L_10a0b73e;
  /* 10a0b734 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10a0b73e:;
  /* 10a0b73e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a0b744 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10a0b74b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b74e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a0b754 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10a0b75b:;
  /* 10a0b75b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b762 jl 0x10a0b77d */
  if ((C.sf!=C.of)) goto L_10a0b77d;
  /* 10a0b764 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a0b76a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0b76d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0b76f jne 0x10a0b77d */
  if (!C.zf) goto L_10a0b77d;
  /* 10a0b771 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b77b jle 0x10a0b787 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0b787;
L_10a0b77d:;
  /* 10a0b77d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10a0b782 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b787:;
  /* 10a0b787 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a0b78d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b793 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a0b796 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b79c je 0x10a0b7a8 */
  if (C.zf) goto L_10a0b7a8;
  /* 10a0b79e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10a0b7a3 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b7a8:;
  /* 10a0b7a8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a0b7ae add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b7b4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10a0b7ba mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a0b7c0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b7c6 jb 0x10a0b6bc */
  if (C.cf) goto L_10a0b6bc;
  /* 10a0b7cc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a0b7d2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b7d8 je 0x10a0b7e4 */
  if (C.zf) goto L_10a0b7e4;
  /* 10a0b7da mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10a0b7df jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b7e4:;
  /* 10a0b7e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0b7e7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b7ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0b7ef jmp 0x10a0b661 */
  goto L_10a0b661;
L_10a0b7f4:;
  /* 10a0b7f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0b7f7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0b7f9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b7ff je 0x10a0b80b */
  if (C.zf) goto L_10a0b80b;
  /* 10a0b801 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10a0b806 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b80b:;
  /* 10a0b80b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0b80e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10a0b814 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10a0b81b jmp 0x10a0b826 */
  goto L_10a0b826;
L_10a0b81d:;
  /* 10a0b81d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b820 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b823 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a0b826:;
  /* 10a0b826 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b82a jge 0x10a0ba5d */
  if ((C.sf==C.of)) goto L_10a0ba5d;
  /* 10a0b830 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10a0b83a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10a0b840 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10a0b846:;
  /* 10a0b846 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a0b84c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0b84f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10a0b855 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a0b85b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b861 je 0x10a0b98a */
  if (C.zf) goto L_10a0b98a;
  /* 10a0b867 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b86a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10a0b870 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b877 je 0x10a0b98a */
  if (C.zf) goto L_10a0b98a;
  /* 10a0b87d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a0b883 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b889 jb 0x10a0b89e */
  if (C.cf) goto L_10a0b89e;
  /* 10a0b88b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a0b891 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b896 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b89c jb 0x10a0b8a8 */
  if (C.cf) goto L_10a0b8a8;
L_10a0b89e:;
  /* 10a0b89e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10a0b8a3 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b8a8:;
  /* 10a0b8a8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a0b8ae and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0b8b4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10a0b8ba mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10a0b8c0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b8c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a0b8c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0b8c9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b8ce mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10a0b8d4:;
  /* 10a0b8d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0b8d7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b8dd je 0x10a0b8fe */
  if (C.zf) goto L_10a0b8fe;
  /* 10a0b8df mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0b8e2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b8e8 jne 0x10a0b8ec */
  if (!C.zf) goto L_10a0b8ec;
  /* 10a0b8ea jmp 0x10a0b8fe */
  goto L_10a0b8fe;
L_10a0b8ec:;
  /* 10a0b8ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0b8ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0b8f1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0b8f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0b8f7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b8f9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a0b8fc jmp 0x10a0b8d4 */
  goto L_10a0b8d4;
L_10a0b8fe:;
  /* 10a0b8fe mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0b901 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b907 jne 0x10a0b913 */
  if (!C.zf) goto L_10a0b913;
  /* 10a0b909 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10a0b90e jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b913:;
  /* 10a0b913 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a0b919 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0b91b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a0b91e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b921 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10a0b927 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b92e jle 0x10a0b93a */
  if ((C.zf||C.sf!=C.of)) goto L_10a0b93a;
  /* 10a0b930 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10a0b93a:;
  /* 10a0b93a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a0b940 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b943 je 0x10a0b94f */
  if (C.zf) goto L_10a0b94f;
  /* 10a0b945 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10a0b94a jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b94f:;
  /* 10a0b94f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a0b955 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a0b958 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b95e je 0x10a0b96a */
  if (C.zf) goto L_10a0b96a;
  /* 10a0b960 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10a0b965 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0b96a:;
  /* 10a0b96a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a0b970 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10a0b976 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10a0b97c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0b97f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10a0b985 jmp 0x10a0b846 */
  goto L_10a0b846;
L_10a0b98a:;
  /* 10a0b98a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b991 je 0x10a0ba01 */
  if (C.zf) goto L_10a0ba01;
  /* 10a0b993 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0b997 jge 0x10a0b9cb */
  if ((C.sf==C.of)) goto L_10a0b9cb;
  /* 10a0b999 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b99e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b9a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b9a3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10a0b9a9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0b9ab mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10a0b9b1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b9b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b9b9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b9bb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10a0b9c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0b9c3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10a0b9c9 jmp 0x10a0ba01 */
  goto L_10a0ba01;
L_10a0b9cb:;
  /* 10a0b9cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b9ce sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b9d1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b9d6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b9d8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10a0b9de or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0b9e0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10a0b9e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0b9e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0b9ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a0b9f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a0b9f3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10a0b9f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0b9fb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10a0ba01:;
  /* 10a0ba01 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a0ba07 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0ba0a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ba10 jne 0x10a0ba24 */
  if (!C.zf) goto L_10a0ba24;
  /* 10a0ba12 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0ba15 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10a0ba1b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ba22 je 0x10a0ba2e */
  if (C.zf) goto L_10a0ba2e;
L_10a0ba24:;
  /* 10a0ba24 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10a0ba29 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0ba2e:;
  /* 10a0ba2e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10a0ba34 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a0ba37 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ba3d je 0x10a0ba49 */
  if (C.zf) goto L_10a0ba49;
  /* 10a0ba3f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10a0ba44 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0ba49:;
  /* 10a0ba49 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10a0ba4f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ba52 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10a0ba58 jmp 0x10a0b81d */
  goto L_10a0b81d;
L_10a0ba5d:;
  /* 10a0ba5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ba60 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a0ba66 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10a0ba6c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ba70 jne 0x10a0ba8a */
  if (!C.zf) goto L_10a0ba8a;
  /* 10a0ba72 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ba75 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a0ba7b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10a0ba81 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ba88 je 0x10a0ba91 */
  if (C.zf) goto L_10a0ba91;
L_10a0ba8a:;
  /* 10a0ba8a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10a0ba8f jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0ba91:;
  /* 10a0ba91 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a0ba97 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ba9d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10a0baa3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0baa6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0baab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a0baae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0bab1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a0bab3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a0bab6 jmp 0x10a0b5ba */
  goto L_10a0b5ba;
L_10a0babb:;
  /* 10a0babb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a0bac1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10a0bac7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bac9 jne 0x10a0badc */
  if (!C.zf) goto L_10a0badc;
  /* 10a0bacb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a0bad1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10a0bad7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bada je 0x10a0bae3 */
  if (C.zf) goto L_10a0bae3;
L_10a0badc:;
  /* 10a0badc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10a0bae1 jmp 0x10a0baf9 */
  goto L_10a0baf9;
L_10a0bae3:;
  /* 10a0bae3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a0bae9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0baec mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10a0baf2 jmp 0x10a0b523 */
  goto L_10a0b523;
L_10a0baf7:;
  /* 10a0baf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a0baf9:;
  /* 10a0baf9 mov esp, ebp */
  ESP = (EBP);
  /* 10a0bafb pop ebp */
  EBP = (pop32());
  /* 10a0bafc ret  */
  ESPCHK(0x10a0b4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb00 @ 0x10a0bb00 (250 bytes, 92 insns) */
void f_10a0bb00(void) {
  FTRACE(0x10a0bb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0bb00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0bb01 mov ebp, esp */
  EBP = (ESP);
  /* 10a0bb03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0bb06 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0bb07 push esi */
  push32((uint32_t)(ESI));
  /* 10a0bb08 push edi */
  push32((uint32_t)(EDI));
  /* 10a0bb09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10a0bb0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a0bb0f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a0bb12 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10a0bb15:;
  /* 10a0bb15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bb19 jne 0x10a0bb39 */
  if (!C.zf) goto L_10a0bb39;
  /* 10a0bb1b push 0x10a2d0c0 */
  push32((uint32_t)(0x10a2d0c0u));
  /* 10a0bb20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0bb22 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10a0bb24 push 0x10a2d0b4 */
  push32((uint32_t)(0x10a2d0b4u));
  /* 10a0bb29 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0bb2b call 0x10a04cb0 */
  push32(0x10a0bb30u); f_10a04cb0();
  /* 10a0bb30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bb33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bb36 jne 0x10a0bb39 */
  if (!C.zf) goto L_10a0bb39;
  /* 10a0bb38 int3  */
  x86_unimpl("int3 @ 0x10a0bb38");
L_10a0bb39:;
  /* 10a0bb39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0bb3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0bb3d jne 0x10a0bb15 */
  if (!C.zf) goto L_10a0bb15;
L_10a0bb3f:;
  /* 10a0bb3f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bb43 jne 0x10a0bb63 */
  if (!C.zf) goto L_10a0bb63;
  /* 10a0bb45 push 0x10a2d0a4 */
  push32((uint32_t)(0x10a2d0a4u));
  /* 10a0bb4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0bb4c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10a0bb4e push 0x10a2d0b4 */
  push32((uint32_t)(0x10a2d0b4u));
  /* 10a0bb53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0bb55 call 0x10a04cb0 */
  push32(0x10a0bb5au); f_10a04cb0();
  /* 10a0bb5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bb5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bb60 jne 0x10a0bb63 */
  if (!C.zf) goto L_10a0bb63;
  /* 10a0bb62 int3  */
  x86_unimpl("int3 @ 0x10a0bb62");
L_10a0bb63:;
  /* 10a0bb63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bb65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0bb67 jne 0x10a0bb3f */
  if (!C.zf) goto L_10a0bb3f;
  /* 10a0bb69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bb6c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10a0bb73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bb76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0bb79 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a0bb7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bb7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0bb82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a0bb84 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bb87 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10a0bb8e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0bb91 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0bb92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0bb95 push edx */
  push32((uint32_t)(EDX));
  /* 10a0bb96 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bb99 push eax */
  push32((uint32_t)(EAX));
  /* 10a0bb9a call 0x10a0cb80 */
  push32(0x10a0bb9fu); f_10a0cb80();
  /* 10a0bb9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bba2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a0bba5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bba8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0bbab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0bbae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bbb1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a0bbb4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bbb7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bbbb jl 0x10a0bbdf */
  if ((C.sf!=C.of)) goto L_10a0bbdf;
  /* 10a0bbbd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bbc0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0bbc2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a0bbc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0bbc7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0bbcd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10a0bbd0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bbd3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0bbd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bbd8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bbdb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a0bbdd jmp 0x10a0bbf0 */
  goto L_10a0bbf0;
L_10a0bbdf:;
  /* 10a0bbdf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bbe2 push edx */
  push32((uint32_t)(EDX));
  /* 10a0bbe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0bbe5 call 0x10a0c900 */
  push32(0x10a0bbeau); f_10a0c900();
  /* 10a0bbea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bbed mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10a0bbf0:;
  /* 10a0bbf0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0bbf3 pop edi */
  EDI = (pop32());
  /* 10a0bbf4 pop esi */
  ESI = (pop32());
  /* 10a0bbf5 pop ebx */
  EBX = (pop32());
  /* 10a0bbf6 mov esp, ebp */
  ESP = (EBP);
  /* 10a0bbf8 pop ebp */
  EBP = (pop32());
  /* 10a0bbf9 ret  */
  ESPCHK(0x10a0bb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc00 @ 0x10a0bc00 (183 bytes, 58 insns) */
void f_10a0bc00(void) {
  FTRACE(0x10a0bc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0bc00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0bc01 mov ebp, esp */
  EBP = (ESP);
  /* 10a0bc03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0bc06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0bc09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bc0c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bc11 ja 0x10a0bc2a */
  if ((!C.cf&&!C.zf)) goto L_10a0bc2a;
  /* 10a0bc13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0bc16 mov edx, dword ptr [0x10a2fc98] */
  EDX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a0bc1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bc1e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10a0bc22 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bc25 jmp 0x10a0bcb3 */
  goto L_10a0bcb3;
L_10a0bc2a:;
  /* 10a0bc2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0bc2d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10a0bc30 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0bc36 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0bc3c mov edx, dword ptr [0x10a2fc98] */
  EDX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a0bc42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bc44 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10a0bc48 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bc4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0bc4f je 0x10a0bc73 */
  if (C.zf) goto L_10a0bc73;
  /* 10a0bc51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0bc54 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10a0bc57 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0bc5d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10a0bc60 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a0bc63 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10a0bc66 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10a0bc6a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10a0bc71 jmp 0x10a0bc84 */
  goto L_10a0bc84;
L_10a0bc73:;
  /* 10a0bc73 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a0bc76 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10a0bc79 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10a0bc7d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10a0bc84:;
  /* 10a0bc84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0bc86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0bc88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0bc8a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10a0bc8d push ecx */
  push32((uint32_t)(ECX));
  /* 10a0bc8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0bc91 push edx */
  push32((uint32_t)(EDX));
  /* 10a0bc92 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10a0bc95 push eax */
  push32((uint32_t)(EAX));
  /* 10a0bc96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0bc98 call 0x10a0de20 */
  push32(0x10a0bc9du); f_10a0de20();
  /* 10a0bc9d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0bca2 jne 0x10a0bca8 */
  if (!C.zf) goto L_10a0bca8;
  /* 10a0bca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bca6 jmp 0x10a0bcb3 */
  goto L_10a0bcb3;
L_10a0bca8:;
  /* 10a0bca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0bcab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bcb0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10a0bcb3:;
  /* 10a0bcb3 mov esp, ebp */
  ESP = (EBP);
  /* 10a0bcb5 pop ebp */
  EBP = (pop32());
  /* 10a0bcb6 ret  */
  ESPCHK(0x10a0bc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcc0 @ 0x10a0bcc0 (836 bytes, 238 insns) */
void f_10a0bcc0(void) {
  FTRACE(0x10a0bcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0bcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0bcc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0bcc3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0bcc6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a0bcc8 call 0x10a095f0 */
  push32(0x10a0bccdu); f_10a095f0();
  /* 10a0bccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bcd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0bcd3 push eax */
  push32((uint32_t)(EAX));
  /* 10a0bcd4 call 0x10a0c010 */
  push32(0x10a0bcd9u); f_10a0c010();
  /* 10a0bcd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bcdc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a0bcdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0bce2 cmp ecx, dword ptr [0x10a32dc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a32dc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bce8 jne 0x10a0bcfb */
  if (!C.zf) goto L_10a0bcfb;
  /* 10a0bcea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a0bcec call 0x10a09690 */
  push32(0x10a0bcf1u); f_10a09690();
  /* 10a0bcf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bcf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bcf6 jmp 0x10a0c000 */
  goto L_10a0c000;
L_10a0bcfb:;
  /* 10a0bcfb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bcff jne 0x10a0bd1c */
  if (!C.zf) goto L_10a0bd1c;
  /* 10a0bd01 call 0x10a0c0f0 */
  push32(0x10a0bd06u); f_10a0c0f0();
  /* 10a0bd06 call 0x10a0c170 */
  push32(0x10a0bd0bu); f_10a0c170();
  /* 10a0bd0b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a0bd0d call 0x10a09690 */
  push32(0x10a0bd12u); f_10a09690();
  /* 10a0bd12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bd15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bd17 jmp 0x10a0c000 */
  goto L_10a0c000;
L_10a0bd1c:;
  /* 10a0bd1c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0bd23 jmp 0x10a0bd2e */
  goto L_10a0bd2e;
L_10a0bd25:;
  /* 10a0bd25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0bd28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bd2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a0bd2e:;
  /* 10a0bd2e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bd32 jae 0x10a0be7f */
  if (!C.cf) goto L_10a0be7f;
  /* 10a0bd38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0bd3b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0bd3e mov ecx, dword ptr [eax + 0x10a2feb8] */
  ECX = (r32((uint32_t)(EAX + 0x10a2feb8)));
  /* 10a0bd44 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bd47 jne 0x10a0be7a */
  if (!C.zf) goto L_10a0be7a;
  /* 10a0bd4d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a0bd54 jmp 0x10a0bd5f */
  goto L_10a0bd5f;
L_10a0bd56:;
  /* 10a0bd56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bd59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bd5c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10a0bd5f:;
  /* 10a0bd5f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bd66 jae 0x10a0bd74 */
  if (!C.cf) goto L_10a0bd74;
  /* 10a0bd68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bd6b mov byte ptr [eax + 0x10a32f60], 0 */
  w8((uint32_t)(EAX + 0x10a32f60), (0x0u));
  /* 10a0bd72 jmp 0x10a0bd56 */
  goto L_10a0bd56;
L_10a0bd74:;
  /* 10a0bd74 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a0bd7b jmp 0x10a0bd86 */
  goto L_10a0bd86;
L_10a0bd7d:;
  /* 10a0bd7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0bd80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bd83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a0bd86:;
  /* 10a0bd86 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bd8a jae 0x10a0be07 */
  if (!C.cf) goto L_10a0be07;
  /* 10a0bd8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0bd8f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0bd92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0bd95 lea ecx, [edx + eax*8 + 0x10a2fec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10a2fec8));
  /* 10a0bd9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a0bd9f jmp 0x10a0bdaa */
  goto L_10a0bdaa;
L_10a0bda1:;
  /* 10a0bda1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0bda4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bda7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a0bdaa:;
  /* 10a0bdaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0bdad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0bdaf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a0bdb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0bdb3 je 0x10a0be02 */
  if (C.zf) goto L_10a0be02;
  /* 10a0bdb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0bdb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bdba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a0bdbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0bdbf je 0x10a0be02 */
  if (C.zf) goto L_10a0be02;
  /* 10a0bdc1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0bdc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0bdc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a0bdc8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a0bdcb jmp 0x10a0bdd6 */
  goto L_10a0bdd6;
L_10a0bdcd:;
  /* 10a0bdcd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bdd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bdd3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a0bdd6:;
  /* 10a0bdd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0bdd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0bddb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a0bdde cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bde1 ja 0x10a0be00 */
  if ((!C.cf&&!C.zf)) goto L_10a0be00;
  /* 10a0bde3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bde6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0bde9 mov dl, byte ptr [eax + 0x10a32f61] */
  DL = (r8((uint32_t)(EAX + 0x10a32f61)));
  /* 10a0bdef or dl, byte ptr [ecx + 0x10a2feb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10a2feb0))); DL = (_r); fl_logic(_r,8); }
  /* 10a0bdf5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bdf8 mov byte ptr [eax + 0x10a32f61], dl */
  w8((uint32_t)(EAX + 0x10a32f61), (DL));
  /* 10a0bdfe jmp 0x10a0bdcd */
  goto L_10a0bdcd;
L_10a0be00:;
  /* 10a0be00 jmp 0x10a0bda1 */
  goto L_10a0bda1;
L_10a0be02:;
  /* 10a0be02 jmp 0x10a0bd7d */
  goto L_10a0bd7d;
L_10a0be07:;
  /* 10a0be07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0be0a mov dword ptr [0x10a32dc4], ecx */
  w32((uint32_t)(0x10a32dc4), (ECX));
  /* 10a0be10 mov dword ptr [0x10a32e4c], 1 */
  w32((uint32_t)(0x10a32e4c), (0x1u));
  /* 10a0be1a mov edx, dword ptr [0x10a32dc4] */
  EDX = (r32((uint32_t)(0x10a32dc4)));
  /* 10a0be20 push edx */
  push32((uint32_t)(EDX));
  /* 10a0be21 call 0x10a0c070 */
  push32(0x10a0be26u); f_10a0c070();
  /* 10a0be26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0be29 mov dword ptr [0x10a33064], eax */
  w32((uint32_t)(0x10a33064), (EAX));
  /* 10a0be2e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a0be35 jmp 0x10a0be40 */
  goto L_10a0be40;
L_10a0be37:;
  /* 10a0be37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0be3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0be3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a0be40:;
  /* 10a0be40 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0be44 jae 0x10a0be64 */
  if (!C.cf) goto L_10a0be64;
  /* 10a0be46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0be49 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0be4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0be4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0be52 mov cx, word ptr [ecx + eax*2 + 0x10a2febc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10a2febc)));
  /* 10a0be5a mov word ptr [edx*2 + 0x10a32e40], cx */
  w16((uint32_t)(EDX*2 + 0x10a32e40), (CX));
  /* 10a0be62 jmp 0x10a0be37 */
  goto L_10a0be37;
L_10a0be64:;
  /* 10a0be64 call 0x10a0c170 */
  push32(0x10a0be69u); f_10a0c170();
  /* 10a0be69 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a0be6b call 0x10a09690 */
  push32(0x10a0be70u); f_10a09690();
  /* 10a0be70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0be73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0be75 jmp 0x10a0c000 */
  goto L_10a0c000;
L_10a0be7a:;
  /* 10a0be7a jmp 0x10a0bd25 */
  goto L_10a0bd25;
L_10a0be7f:;
  /* 10a0be7f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10a0be82 push edx */
  push32((uint32_t)(EDX));
  /* 10a0be83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0be86 push eax */
  push32((uint32_t)(EAX));
  /* 10a0be87 call dword ptr [0x10a34308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34308))), 0x10a0be8du);
  /* 10a0be8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0be90 jne 0x10a0bfd2 */
  if (!C.zf) goto L_10a0bfd2;
  /* 10a0be96 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a0be9d jmp 0x10a0bea8 */
  goto L_10a0bea8;
L_10a0be9f:;
  /* 10a0be9f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bea2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bea5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10a0bea8:;
  /* 10a0bea8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0beaf jae 0x10a0bebd */
  if (!C.cf) goto L_10a0bebd;
  /* 10a0beb1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0beb4 mov byte ptr [edx + 0x10a32f60], 0 */
  w8((uint32_t)(EDX + 0x10a32f60), (0x0u));
  /* 10a0bebb jmp 0x10a0be9f */
  goto L_10a0be9f;
L_10a0bebd:;
  /* 10a0bebd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0bec0 mov dword ptr [0x10a32dc4], eax */
  w32((uint32_t)(0x10a32dc4), (EAX));
  /* 10a0bec5 mov dword ptr [0x10a33064], 0 */
  w32((uint32_t)(0x10a33064), (0x0u));
  /* 10a0becf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bed3 jbe 0x10a0bf8e */
  if ((C.cf||C.zf)) goto L_10a0bf8e;
  /* 10a0bed9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10a0bedc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10a0bedf jmp 0x10a0beea */
  goto L_10a0beea;
L_10a0bee1:;
  /* 10a0bee1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0bee4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bee7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10a0beea:;
  /* 10a0beea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0beed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0beef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a0bef1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0bef3 je 0x10a0bf3c */
  if (C.zf) goto L_10a0bf3c;
  /* 10a0bef5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0bef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0befa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a0befd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0beff je 0x10a0bf3c */
  if (C.zf) goto L_10a0bf3c;
  /* 10a0bf01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0bf04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0bf06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a0bf08 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a0bf0b jmp 0x10a0bf16 */
  goto L_10a0bf16;
L_10a0bf0d:;
  /* 10a0bf0d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bf10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bf13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a0bf16:;
  /* 10a0bf16 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0bf19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0bf1b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a0bf1e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bf21 ja 0x10a0bf3a */
  if ((!C.cf&&!C.zf)) goto L_10a0bf3a;
  /* 10a0bf23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bf26 mov cl, byte ptr [eax + 0x10a32f61] */
  CL = (r8((uint32_t)(EAX + 0x10a32f61)));
  /* 10a0bf2c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10a0bf2f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bf32 mov byte ptr [edx + 0x10a32f61], cl */
  w8((uint32_t)(EDX + 0x10a32f61), (CL));
  /* 10a0bf38 jmp 0x10a0bf0d */
  goto L_10a0bf0d;
L_10a0bf3a:;
  /* 10a0bf3a jmp 0x10a0bee1 */
  goto L_10a0bee1;
L_10a0bf3c:;
  /* 10a0bf3c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10a0bf43 jmp 0x10a0bf4e */
  goto L_10a0bf4e;
L_10a0bf45:;
  /* 10a0bf45 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bf48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bf4b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a0bf4e:;
  /* 10a0bf4e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bf55 jae 0x10a0bf6e */
  if (!C.cf) goto L_10a0bf6e;
  /* 10a0bf57 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bf5a mov dl, byte ptr [ecx + 0x10a32f61] */
  DL = (r8((uint32_t)(ECX + 0x10a32f61)));
  /* 10a0bf60 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10a0bf63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0bf66 mov byte ptr [eax + 0x10a32f61], dl */
  w8((uint32_t)(EAX + 0x10a32f61), (DL));
  /* 10a0bf6c jmp 0x10a0bf45 */
  goto L_10a0bf45;
L_10a0bf6e:;
  /* 10a0bf6e mov ecx, dword ptr [0x10a32dc4] */
  ECX = (r32((uint32_t)(0x10a32dc4)));
  /* 10a0bf74 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0bf75 call 0x10a0c070 */
  push32(0x10a0bf7au); f_10a0c070();
  /* 10a0bf7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bf7d mov dword ptr [0x10a33064], eax */
  w32((uint32_t)(0x10a33064), (EAX));
  /* 10a0bf82 mov dword ptr [0x10a32e4c], 1 */
  w32((uint32_t)(0x10a32e4c), (0x1u));
  /* 10a0bf8c jmp 0x10a0bf98 */
  goto L_10a0bf98;
L_10a0bf8e:;
  /* 10a0bf8e mov dword ptr [0x10a32e4c], 0 */
  w32((uint32_t)(0x10a32e4c), (0x0u));
L_10a0bf98:;
  /* 10a0bf98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a0bf9f jmp 0x10a0bfaa */
  goto L_10a0bfaa;
L_10a0bfa1:;
  /* 10a0bfa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0bfa4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bfa7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a0bfaa:;
  /* 10a0bfaa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bfae jae 0x10a0bfbf */
  if (!C.cf) goto L_10a0bfbf;
  /* 10a0bfb0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0bfb3 mov word ptr [eax*2 + 0x10a32e40], 0 */
  w16((uint32_t)(EAX*2 + 0x10a32e40), (0x0u));
  /* 10a0bfbd jmp 0x10a0bfa1 */
  goto L_10a0bfa1;
L_10a0bfbf:;
  /* 10a0bfbf call 0x10a0c170 */
  push32(0x10a0bfc4u); f_10a0c170();
  /* 10a0bfc4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a0bfc6 call 0x10a09690 */
  push32(0x10a0bfcbu); f_10a09690();
  /* 10a0bfcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bfce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bfd0 jmp 0x10a0c000 */
  goto L_10a0c000;
L_10a0bfd2:;
  /* 10a0bfd2 cmp dword ptr [0x10a318c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0bfd9 je 0x10a0bff3 */
  if (C.zf) goto L_10a0bff3;
  /* 10a0bfdb call 0x10a0c0f0 */
  push32(0x10a0bfe0u); f_10a0c0f0();
  /* 10a0bfe0 call 0x10a0c170 */
  push32(0x10a0bfe5u); f_10a0c170();
  /* 10a0bfe5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a0bfe7 call 0x10a09690 */
  push32(0x10a0bfecu); f_10a09690();
  /* 10a0bfec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bfef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0bff1 jmp 0x10a0c000 */
  goto L_10a0c000;
L_10a0bff3:;
  /* 10a0bff3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a0bff5 call 0x10a09690 */
  push32(0x10a0bffau); f_10a09690();
  /* 10a0bffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0bffd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a0c000:;
  /* 10a0c000 mov esp, ebp */
  ESP = (EBP);
  /* 10a0c002 pop ebp */
  EBP = (pop32());
  /* 10a0c003 ret  */
  ESPCHK(0x10a0bcc0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10a0c010 (89 bytes, 21 insns) */
void f_10a0c010(void) {
  FTRACE(0x10a0c010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0c010 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0c011 mov ebp, esp */
  EBP = (ESP);
  /* 10a0c013 mov dword ptr [0x10a318c8], 0 */
  w32((uint32_t)(0x10a318c8), (0x0u));
  /* 10a0c01d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c021 jne 0x10a0c035 */
  if (!C.zf) goto L_10a0c035;
  /* 10a0c023 mov dword ptr [0x10a318c8], 1 */
  w32((uint32_t)(0x10a318c8), (0x1u));
  /* 10a0c02d call dword ptr [0x10a34300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34300))), 0x10a0c033u);
  /* 10a0c033 jmp 0x10a0c067 */
  goto L_10a0c067;
L_10a0c035:;
  /* 10a0c035 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c039 jne 0x10a0c04d */
  if (!C.zf) goto L_10a0c04d;
  /* 10a0c03b mov dword ptr [0x10a318c8], 1 */
  w32((uint32_t)(0x10a318c8), (0x1u));
  /* 10a0c045 call dword ptr [0x10a34304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34304))), 0x10a0c04bu);
  /* 10a0c04b jmp 0x10a0c067 */
  goto L_10a0c067;
L_10a0c04d:;
  /* 10a0c04d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c051 jne 0x10a0c064 */
  if (!C.zf) goto L_10a0c064;
  /* 10a0c053 mov dword ptr [0x10a318c8], 1 */
  w32((uint32_t)(0x10a318c8), (0x1u));
  /* 10a0c05d mov eax, dword ptr [0x10a318e8] */
  EAX = (r32((uint32_t)(0x10a318e8)));
  /* 10a0c062 jmp 0x10a0c067 */
  goto L_10a0c067;
L_10a0c064:;
  /* 10a0c064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10a0c067:;
  /* 10a0c067 pop ebp */
  EBP = (pop32());
  /* 10a0c068 ret  */
  ESPCHK(0x10a0c010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c070 @ 0x10a0c070 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10a0c070(void) {
  FTRACE(0x10a0c070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0c070 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0c071 mov ebp, esp */
  EBP = (ESP);
  /* 10a0c073 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0c074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0c077 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0c07a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c07d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c083 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a0c086 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c08a ja 0x10a0c0ba */
  if ((!C.cf&&!C.zf)) goto L_10a0c0ba;
  /* 10a0c08c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c08f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c091 mov dl, byte ptr [eax + 0x10a0c0d4] */
  DL = (r8((uint32_t)(EAX + 0x10a0c0d4)));
  /* 10a0c097 jmp dword ptr [edx*4 + 0x10a0c0c0] */
  switch (EDX) {
    case 0: goto L_10a0c09e;
    case 1: goto L_10a0c0a5;
    case 2: goto L_10a0c0ac;
    case 3: goto L_10a0c0b3;
    case 4: goto L_10a0c0ba;
    default: x86_unimpl("switch@0x10a0c097 out of table"); return;
  }
L_10a0c09e:;
  /* 10a0c09e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10a0c0a3 jmp 0x10a0c0bc */
  goto L_10a0c0bc;
L_10a0c0a5:;
  /* 10a0c0a5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10a0c0aa jmp 0x10a0c0bc */
  goto L_10a0c0bc;
L_10a0c0ac:;
  /* 10a0c0ac mov eax, 0x412 */
  EAX = (0x412u);
  /* 10a0c0b1 jmp 0x10a0c0bc */
  goto L_10a0c0bc;
L_10a0c0b3:;
  /* 10a0c0b3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10a0c0b8 jmp 0x10a0c0bc */
  goto L_10a0c0bc;
L_10a0c0ba:;
  /* 10a0c0ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a0c0bc:;
  /* 10a0c0bc mov esp, ebp */
  ESP = (EBP);
  /* 10a0c0be pop ebp */
  EBP = (pop32());
  /* 10a0c0bf ret  */
  ESPCHK(0x10a0c070u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10a0c0f0 (116 bytes, 29 insns) */
void f_10a0c0f0(void) {
  FTRACE(0x10a0c0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0c0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0c0f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0c0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0c0f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0c0fb jmp 0x10a0c106 */
  goto L_10a0c106;
L_10a0c0fd:;
  /* 10a0c0fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c100 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c103 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a0c106:;
  /* 10a0c106 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c10d jge 0x10a0c11b */
  if ((C.sf==C.of)) goto L_10a0c11b;
  /* 10a0c10f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c112 mov byte ptr [ecx + 0x10a32f60], 0 */
  w8((uint32_t)(ECX + 0x10a32f60), (0x0u));
  /* 10a0c119 jmp 0x10a0c0fd */
  goto L_10a0c0fd;
L_10a0c11b:;
  /* 10a0c11b mov dword ptr [0x10a32dc4], 0 */
  w32((uint32_t)(0x10a32dc4), (0x0u));
  /* 10a0c125 mov dword ptr [0x10a32e4c], 0 */
  w32((uint32_t)(0x10a32e4c), (0x0u));
  /* 10a0c12f mov dword ptr [0x10a33064], 0 */
  w32((uint32_t)(0x10a33064), (0x0u));
  /* 10a0c139 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0c140 jmp 0x10a0c14b */
  goto L_10a0c14b;
L_10a0c142:;
  /* 10a0c142 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c145 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c148 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a0c14b:;
  /* 10a0c14b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c14f jge 0x10a0c160 */
  if ((C.sf==C.of)) goto L_10a0c160;
  /* 10a0c151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c154 mov word ptr [eax*2 + 0x10a32e40], 0 */
  w16((uint32_t)(EAX*2 + 0x10a32e40), (0x0u));
  /* 10a0c15e jmp 0x10a0c142 */
  goto L_10a0c142;
L_10a0c160:;
  /* 10a0c160 mov esp, ebp */
  ESP = (EBP);
  /* 10a0c162 pop ebp */
  EBP = (pop32());
  /* 10a0c163 ret  */
  ESPCHK(0x10a0c0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c170 @ 0x10a0c170 (770 bytes, 175 insns) */
void f_10a0c170(void) {
  FTRACE(0x10a0c170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0c170 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0c171 mov ebp, esp */
  EBP = (ESP);
  /* 10a0c173 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c179 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10a0c17f push eax */
  push32((uint32_t)(EAX));
  /* 10a0c180 mov ecx, dword ptr [0x10a32dc4] */
  ECX = (r32((uint32_t)(0x10a32dc4)));
  /* 10a0c186 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0c187 call dword ptr [0x10a34308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34308))), 0x10a0c18du);
  /* 10a0c18d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c190 jne 0x10a0c3a9 */
  if (!C.zf) goto L_10a0c3a9;
  /* 10a0c196 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10a0c1a0 jmp 0x10a0c1b1 */
  goto L_10a0c1b1;
L_10a0c1a2:;
  /* 10a0c1a2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c1a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c1ab mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10a0c1b1:;
  /* 10a0c1b1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c1bb jae 0x10a0c1d2 */
  if (!C.cf) goto L_10a0c1d2;
  /* 10a0c1bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c1c3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10a0c1c9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10a0c1d0 jmp 0x10a0c1a2 */
  goto L_10a0c1a2;
L_10a0c1d2:;
  /* 10a0c1d2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10a0c1d9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10a0c1df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0c1e2 jmp 0x10a0c1ed */
  goto L_10a0c1ed;
L_10a0c1e4:;
  /* 10a0c1e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c1e7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c1ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a0c1ed:;
  /* 10a0c1ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c1f0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c1f2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a0c1f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0c1f6 je 0x10a0c238 */
  if (C.zf) goto L_10a0c238;
  /* 10a0c1f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c1fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0c1fd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a0c1ff mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10a0c205 jmp 0x10a0c216 */
  goto L_10a0c216;
L_10a0c207:;
  /* 10a0c207 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c20d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c210 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10a0c216:;
  /* 10a0c216 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c219 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0c21b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a0c21e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c224 ja 0x10a0c236 */
  if ((!C.cf&&!C.zf)) goto L_10a0c236;
  /* 10a0c226 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c22c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10a0c234 jmp 0x10a0c207 */
  goto L_10a0c207;
L_10a0c236:;
  /* 10a0c236 jmp 0x10a0c1e4 */
  goto L_10a0c1e4;
L_10a0c238:;
  /* 10a0c238 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0c23a mov eax, dword ptr [0x10a33064] */
  EAX = (r32((uint32_t)(0x10a33064)));
  /* 10a0c23f push eax */
  push32((uint32_t)(EAX));
  /* 10a0c240 mov ecx, dword ptr [0x10a32dc4] */
  ECX = (r32((uint32_t)(0x10a32dc4)));
  /* 10a0c246 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0c247 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10a0c24d push edx */
  push32((uint32_t)(EDX));
  /* 10a0c24e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a0c253 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10a0c259 push eax */
  push32((uint32_t)(EAX));
  /* 10a0c25a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0c25c call 0x10a0de20 */
  push32(0x10a0c261u); f_10a0de20();
  /* 10a0c261 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c264 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0c266 mov ecx, dword ptr [0x10a32dc4] */
  ECX = (r32((uint32_t)(0x10a32dc4)));
  /* 10a0c26c push ecx */
  push32((uint32_t)(ECX));
  /* 10a0c26d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a0c272 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10a0c278 push edx */
  push32((uint32_t)(EDX));
  /* 10a0c279 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a0c27e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10a0c284 push eax */
  push32((uint32_t)(EAX));
  /* 10a0c285 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a0c28a mov ecx, dword ptr [0x10a33064] */
  ECX = (r32((uint32_t)(0x10a33064)));
  /* 10a0c290 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0c291 call 0x10a0dfe0 */
  push32(0x10a0c296u); f_10a0dfe0();
  /* 10a0c296 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c299 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0c29b mov edx, dword ptr [0x10a32dc4] */
  EDX = (r32((uint32_t)(0x10a32dc4)));
  /* 10a0c2a1 push edx */
  push32((uint32_t)(EDX));
  /* 10a0c2a2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a0c2a7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10a0c2ad push eax */
  push32((uint32_t)(EAX));
  /* 10a0c2ae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a0c2b3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10a0c2b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0c2ba push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10a0c2bf mov edx, dword ptr [0x10a33064] */
  EDX = (r32((uint32_t)(0x10a33064)));
  /* 10a0c2c5 push edx */
  push32((uint32_t)(EDX));
  /* 10a0c2c6 call 0x10a0dfe0 */
  push32(0x10a0c2cbu); f_10a0dfe0();
  /* 10a0c2cb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c2ce mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10a0c2d8 jmp 0x10a0c2e9 */
  goto L_10a0c2e9;
L_10a0c2da:;
  /* 10a0c2da mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c2e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c2e3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10a0c2e9:;
  /* 10a0c2e9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c2f3 jae 0x10a0c3a4 */
  if (!C.cf) goto L_10a0c3a4;
  /* 10a0c2f9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c2ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c301 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10a0c309 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c30c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0c30e je 0x10a0c346 */
  if (C.zf) goto L_10a0c346;
  /* 10a0c310 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c316 mov cl, byte ptr [eax + 0x10a32f61] */
  CL = (r8((uint32_t)(EAX + 0x10a32f61)));
  /* 10a0c31c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10a0c31f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c325 mov byte ptr [edx + 0x10a32f61], cl */
  w8((uint32_t)(EDX + 0x10a32f61), (CL));
  /* 10a0c32b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c331 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c337 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10a0c33e mov byte ptr [eax + 0x10a32e60], dl */
  w8((uint32_t)(EAX + 0x10a32e60), (DL));
  /* 10a0c344 jmp 0x10a0c39f */
  goto L_10a0c39f;
L_10a0c346:;
  /* 10a0c346 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c34c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0c34e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10a0c356 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0c359 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0c35b je 0x10a0c392 */
  if (C.zf) goto L_10a0c392;
  /* 10a0c35d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c363 mov al, byte ptr [edx + 0x10a32f61] */
  AL = (r8((uint32_t)(EDX + 0x10a32f61)));
  /* 10a0c369 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10a0c36b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c371 mov byte ptr [ecx + 0x10a32f61], al */
  w8((uint32_t)(ECX + 0x10a32f61), (AL));
  /* 10a0c377 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c37d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c383 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10a0c38a mov byte ptr [edx + 0x10a32e60], cl */
  w8((uint32_t)(EDX + 0x10a32e60), (CL));
  /* 10a0c390 jmp 0x10a0c39f */
  goto L_10a0c39f;
L_10a0c392:;
  /* 10a0c392 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c398 mov byte ptr [edx + 0x10a32e60], 0 */
  w8((uint32_t)(EDX + 0x10a32e60), (0x0u));
L_10a0c39f:;
  /* 10a0c39f jmp 0x10a0c2da */
  goto L_10a0c2da;
L_10a0c3a4:;
  /* 10a0c3a4 jmp 0x10a0c46e */
  goto L_10a0c46e;
L_10a0c3a9:;
  /* 10a0c3a9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10a0c3b3 jmp 0x10a0c3c4 */
  goto L_10a0c3c4;
L_10a0c3b5:;
  /* 10a0c3b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c3bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c3be mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10a0c3c4:;
  /* 10a0c3c4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c3ce jae 0x10a0c46e */
  if (!C.cf) goto L_10a0c46e;
  /* 10a0c3d4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c3db jb 0x10a0c418 */
  if (C.cf) goto L_10a0c418;
  /* 10a0c3dd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c3e4 ja 0x10a0c418 */
  if ((!C.cf&&!C.zf)) goto L_10a0c418;
  /* 10a0c3e6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c3ec mov dl, byte ptr [ecx + 0x10a32f61] */
  DL = (r8((uint32_t)(ECX + 0x10a32f61)));
  /* 10a0c3f2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10a0c3f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c3fb mov byte ptr [eax + 0x10a32f61], dl */
  w8((uint32_t)(EAX + 0x10a32f61), (DL));
  /* 10a0c401 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c407 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c40a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c410 mov byte ptr [edx + 0x10a32e60], cl */
  w8((uint32_t)(EDX + 0x10a32e60), (CL));
  /* 10a0c416 jmp 0x10a0c469 */
  goto L_10a0c469;
L_10a0c418:;
  /* 10a0c418 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c41f jb 0x10a0c45c */
  if (C.cf) goto L_10a0c45c;
  /* 10a0c421 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c428 ja 0x10a0c45c */
  if ((!C.cf&&!C.zf)) goto L_10a0c45c;
  /* 10a0c42a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c430 mov cl, byte ptr [eax + 0x10a32f61] */
  CL = (r8((uint32_t)(EAX + 0x10a32f61)));
  /* 10a0c436 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a0c439 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c43f mov byte ptr [edx + 0x10a32f61], cl */
  w8((uint32_t)(EDX + 0x10a32f61), (CL));
  /* 10a0c445 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c44b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c44e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c454 mov byte ptr [ecx + 0x10a32e60], al */
  w8((uint32_t)(ECX + 0x10a32e60), (AL));
  /* 10a0c45a jmp 0x10a0c469 */
  goto L_10a0c469;
L_10a0c45c:;
  /* 10a0c45c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a0c462 mov byte ptr [edx + 0x10a32e60], 0 */
  w8((uint32_t)(EDX + 0x10a32e60), (0x0u));
L_10a0c469:;
  /* 10a0c469 jmp 0x10a0c3b5 */
  goto L_10a0c3b5;
L_10a0c46e:;
  /* 10a0c46e mov esp, ebp */
  ESP = (EBP);
  /* 10a0c470 pop ebp */
  EBP = (pop32());
  /* 10a0c471 ret  */
  ESPCHK(0x10a0c170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c480 @ 0x10a0c480 (23 bytes, 9 insns) */
void f_10a0c480(void) {
  FTRACE(0x10a0c480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0c480 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0c481 mov ebp, esp */
  EBP = (ESP);
  /* 10a0c483 cmp dword ptr [0x10a32e4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a32e4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c48a je 0x10a0c493 */
  if (C.zf) goto L_10a0c493;
  /* 10a0c48c mov eax, dword ptr [0x10a32dc4] */
  EAX = (r32((uint32_t)(0x10a32dc4)));
  /* 10a0c491 jmp 0x10a0c495 */
  goto L_10a0c495;
L_10a0c493:;
  /* 10a0c493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a0c495:;
  /* 10a0c495 pop ebp */
  EBP = (pop32());
  /* 10a0c496 ret  */
  ESPCHK(0x10a0c480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4a0 @ 0x10a0c4a0 (34 bytes, 10 insns) */
void f_10a0c4a0(void) {
  FTRACE(0x10a0c4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0c4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0c4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0c4a3 cmp dword ptr [0x10a33210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a33210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c4aa jne 0x10a0c4c0 */
  if (!C.zf) goto L_10a0c4c0;
  /* 10a0c4ac push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10a0c4ae call 0x10a0bcc0 */
  push32(0x10a0c4b3u); f_10a0bcc0();
  /* 10a0c4b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c4b6 mov dword ptr [0x10a33210], 1 */
  w32((uint32_t)(0x10a33210), (0x1u));
L_10a0c4c0:;
  /* 10a0c4c0 pop ebp */
  EBP = (pop32());
  /* 10a0c4c1 ret  */
  ESPCHK(0x10a0c4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4d0 @ 0x10a0c4d0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_10a0c4d0(void) {
  FTRACE(0x10a0c4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0c4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0c4d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0c4d3 push edi */
  push32((uint32_t)(EDI));
  /* 10a0c4d4 push esi */
  push32((uint32_t)(ESI));
  /* 10a0c4d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0c4d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0c4db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0c4de mov eax, ecx */
  EAX = (ECX);
  /* 10a0c4e0 mov edx, ecx */
  EDX = (ECX);
  /* 10a0c4e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c4e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c4e6 jbe 0x10a0c4f0 */
  if ((C.cf||C.zf)) goto L_10a0c4f0;
  /* 10a0c4e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c4ea jb 0x10a0c668 */
  if (C.cf) goto L_10a0c668;
L_10a0c4f0:;
  /* 10a0c4f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a0c4f6 jne 0x10a0c50c */
  if (!C.zf) goto L_10a0c50c;
  /* 10a0c4f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0c4fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c4fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c501 jb 0x10a0c52c */
  if (C.cf) goto L_10a0c52c;
  /* 10a0c503 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0c505 jmp dword ptr [edx*4 + 0x10a0c618] */
  switch (EDX) {
    case 0: goto L_10a0c628;
    case 1: goto L_10a0c630;
    case 2: goto L_10a0c63c;
    case 3: goto L_10a0c650;
    default: x86_unimpl("switch@0x10a0c505 out of table"); return;
  }
L_10a0c50c:;
  /* 10a0c50c mov eax, edi */
  EAX = (EDI);
  /* 10a0c50e mov edx, 3 */
  EDX = (0x3u);
  /* 10a0c513 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c516 jb 0x10a0c524 */
  if (C.cf) goto L_10a0c524;
  /* 10a0c518 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0c51b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c51d jmp dword ptr [eax*4 + 0x10a0c530] */
  switch (EAX) {
    case 1: goto L_10a0c540;
    case 2: goto L_10a0c56c;
    case 3: goto L_10a0c590;
    default: x86_unimpl("switch@0x10a0c51d out of table"); return;
  }
L_10a0c524:;
  /* 10a0c524 jmp dword ptr [ecx*4 + 0x10a0c628] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10a0c628)))); return;
  /* 10a0c52b nop  */
  /* nop */
L_10a0c52c:;
  /* 10a0c52c jmp dword ptr [ecx*4 + 0x10a0c5ac] */
  switch (ECX) {
    case 0: goto L_10a0c60f;
    case 1: goto L_10a0c5fc;
    case 2: goto L_10a0c5f4;
    case 3: goto L_10a0c5ec;
    case 4: goto L_10a0c5e4;
    case 5: goto L_10a0c5dc;
    case 6: goto L_10a0c5d4;
    case 7: goto L_10a0c5cc;
    default: x86_unimpl("switch@0x10a0c52c out of table"); return;
  }
  /* 10a0c533 nop  */
  /* nop */
L_10a0c540:;
  /* 10a0c540 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c542 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0c544 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0c546 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0c549 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0c54c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0c54f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0c552 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0c555 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c558 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c55b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c55e jb 0x10a0c52c */
  if (C.cf) goto L_10a0c52c;
  /* 10a0c560 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0c562 jmp dword ptr [edx*4 + 0x10a0c618] */
  switch (EDX) {
    case 0: goto L_10a0c628;
    case 1: goto L_10a0c630;
    case 2: goto L_10a0c63c;
    case 3: goto L_10a0c650;
    default: x86_unimpl("switch@0x10a0c562 out of table"); return;
  }
  /* 10a0c569 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0c56c:;
  /* 10a0c56c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c56e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0c570 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0c572 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0c575 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0c578 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0c57b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c57e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c581 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c584 jb 0x10a0c52c */
  if (C.cf) goto L_10a0c52c;
  /* 10a0c586 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0c588 jmp dword ptr [edx*4 + 0x10a0c618] */
  switch (EDX) {
    case 0: goto L_10a0c628;
    case 1: goto L_10a0c630;
    case 2: goto L_10a0c63c;
    case 3: goto L_10a0c650;
    default: x86_unimpl("switch@0x10a0c588 out of table"); return;
  }
  /* 10a0c58f nop  */
  /* nop */
L_10a0c590:;
  /* 10a0c590 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c592 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0c594 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0c596 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a0c597 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0c59a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a0c59b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c59e jb 0x10a0c52c */
  if (C.cf) goto L_10a0c52c;
  /* 10a0c5a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0c5a2 jmp dword ptr [edx*4 + 0x10a0c618] */
  switch (EDX) {
    case 0: goto L_10a0c628;
    case 1: goto L_10a0c630;
    case 2: goto L_10a0c63c;
    case 3: goto L_10a0c650;
    default: x86_unimpl("switch@0x10a0c5a2 out of table"); return;
  }
  /* 10a0c5a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0c5cc:;
  /* 10a0c5cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10a0c5d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10a0c5d4:;
  /* 10a0c5d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10a0c5d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10a0c5dc:;
  /* 10a0c5dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10a0c5e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10a0c5e4:;
  /* 10a0c5e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10a0c5e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10a0c5ec:;
  /* 10a0c5ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10a0c5f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10a0c5f4:;
  /* 10a0c5f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10a0c5f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10a0c5fc:;
  /* 10a0c5fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10a0c600 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10a0c604 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a0c60b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c60d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a0c60f:;
  /* 10a0c60f jmp dword ptr [edx*4 + 0x10a0c618] */
  switch (EDX) {
    case 0: goto L_10a0c628;
    case 1: goto L_10a0c630;
    case 2: goto L_10a0c63c;
    case 3: goto L_10a0c650;
    default: x86_unimpl("switch@0x10a0c60f out of table"); return;
  }
  /* 10a0c616 mov edi, edi */
  EDI = (EDI);
L_10a0c628:;
  /* 10a0c628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0c62b pop esi */
  ESI = (pop32());
  /* 10a0c62c pop edi */
  EDI = (pop32());
  /* 10a0c62d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0c62e ret  */
  ESPCHK(0x10a0c4d0u, _esp0);
  ESP += 4; return;
  /* 10a0c62f nop  */
  /* nop */
L_10a0c630:;
  /* 10a0c630 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0c632 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0c634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0c637 pop esi */
  ESI = (pop32());
  /* 10a0c638 pop edi */
  EDI = (pop32());
  /* 10a0c639 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0c63a ret  */
  ESPCHK(0x10a0c4d0u, _esp0);
  ESP += 4; return;
  /* 10a0c63b nop  */
  /* nop */
L_10a0c63c:;
  /* 10a0c63c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0c63e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0c640 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0c643 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0c646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0c649 pop esi */
  ESI = (pop32());
  /* 10a0c64a pop edi */
  EDI = (pop32());
  /* 10a0c64b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0c64c ret  */
  ESPCHK(0x10a0c4d0u, _esp0);
  ESP += 4; return;
  /* 10a0c64d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0c650:;
  /* 10a0c650 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0c652 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0c654 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0c657 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0c65a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0c65d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0c660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0c663 pop esi */
  ESI = (pop32());
  /* 10a0c664 pop edi */
  EDI = (pop32());
  /* 10a0c665 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0c666 ret  */
  ESPCHK(0x10a0c4d0u, _esp0);
  ESP += 4; return;
  /* 10a0c667 nop  */
  /* nop */
L_10a0c668:;
  /* 10a0c668 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10a0c66c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10a0c670 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a0c676 jne 0x10a0c69c */
  if (!C.zf) goto L_10a0c69c;
  /* 10a0c678 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0c67b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c67e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c681 jb 0x10a0c690 */
  if (C.cf) goto L_10a0c690;
  /* 10a0c683 std  */
  C.df=1;
  /* 10a0c684 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0c686 cld  */
  C.df=0;
  /* 10a0c687 jmp dword ptr [edx*4 + 0x10a0c7b0] */
  switch (EDX) {
    case 0: goto L_10a0c7c0;
    case 1: goto L_10a0c7c8;
    case 2: goto L_10a0c7d8;
    case 3: goto L_10a0c7ec;
    default: x86_unimpl("switch@0x10a0c687 out of table"); return;
  }
  /* 10a0c68e mov edi, edi */
  EDI = (EDI);
L_10a0c690:;
  /* 10a0c690 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0c692 jmp dword ptr [ecx*4 + 0x10a0c760] */
  switch (ECX) {
    case 0: goto L_10a0c7a7;
    default: x86_unimpl("switch@0x10a0c692 out of table"); return;
  }
  /* 10a0c699 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0c69c:;
  /* 10a0c69c mov eax, edi */
  EAX = (EDI);
  /* 10a0c69e mov edx, 3 */
  EDX = (0x3u);
  /* 10a0c6a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c6a6 jb 0x10a0c6b4 */
  if (C.cf) goto L_10a0c6b4;
  /* 10a0c6a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0c6ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c6ad jmp dword ptr [eax*4 + 0x10a0c6b8] */
  switch (EAX) {
    case 1: goto L_10a0c6c8;
    case 2: goto L_10a0c6e8;
    case 3: goto L_10a0c710;
    default: x86_unimpl("switch@0x10a0c6ad out of table"); return;
  }
L_10a0c6b4:;
  /* 10a0c6b4 jmp dword ptr [ecx*4 + 0x10a0c7b0] */
  switch (ECX) {
    case 0: goto L_10a0c7c0;
    case 1: goto L_10a0c7c8;
    case 2: goto L_10a0c7d8;
    case 3: goto L_10a0c7ec;
    default: x86_unimpl("switch@0x10a0c6b4 out of table"); return;
  }
  /* 10a0c6bb nop  */
  /* nop */
L_10a0c6c8:;
  /* 10a0c6c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0c6cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c6cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0c6d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10a0c6d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0c6d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10a0c6d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c6d8 jb 0x10a0c690 */
  if (C.cf) goto L_10a0c690;
  /* 10a0c6da std  */
  C.df=1;
  /* 10a0c6db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0c6dd cld  */
  C.df=0;
  /* 10a0c6de jmp dword ptr [edx*4 + 0x10a0c7b0] */
  switch (EDX) {
    case 0: goto L_10a0c7c0;
    case 1: goto L_10a0c7c8;
    case 2: goto L_10a0c7d8;
    case 3: goto L_10a0c7ec;
    default: x86_unimpl("switch@0x10a0c6de out of table"); return;
  }
  /* 10a0c6e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0c6e8:;
  /* 10a0c6e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0c6eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c6ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0c6f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0c6f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0c6f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0c6f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c6fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c6ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c702 jb 0x10a0c690 */
  if (C.cf) goto L_10a0c690;
  /* 10a0c704 std  */
  C.df=1;
  /* 10a0c705 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0c707 cld  */
  C.df=0;
  /* 10a0c708 jmp dword ptr [edx*4 + 0x10a0c7b0] */
  switch (EDX) {
    case 0: goto L_10a0c7c0;
    case 1: goto L_10a0c7c8;
    case 2: goto L_10a0c7d8;
    case 3: goto L_10a0c7ec;
    default: x86_unimpl("switch@0x10a0c708 out of table"); return;
  }
  /* 10a0c70f nop  */
  /* nop */
L_10a0c710:;
  /* 10a0c710 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0c713 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c715 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0c718 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0c71b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0c71e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0c721 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0c724 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0c727 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c72a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c72d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c730 jb 0x10a0c690 */
  if (C.cf) goto L_10a0c690;
  /* 10a0c736 std  */
  C.df=1;
  /* 10a0c737 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0c739 cld  */
  C.df=0;
  /* 10a0c73a jmp dword ptr [edx*4 + 0x10a0c7b0] */
  switch (EDX) {
    case 0: goto L_10a0c7c0;
    case 1: goto L_10a0c7c8;
    case 2: goto L_10a0c7d8;
    case 3: goto L_10a0c7ec;
    default: x86_unimpl("switch@0x10a0c73a out of table"); return;
  }
  /* 10a0c741 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10a0c746 mov al, byte ptr [0xa0c76c10] */
  AL = (r8((uint32_t)(0xa0c76c10)));
  /* 10a0c74b adc byte ptr [edi + eax*8 - 0x60], dh */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*8 + -0x60))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*8 + -0x60), (_r)); fl_add(_a,_b,_r,8); }
  /* 10a0c74f adc byte ptr [edi + eax*8 - 0x60], bh */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*8 + -0x60))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*8 + -0x60), (_r)); fl_add(_a,_b,_r,8); }
  /* 10a0c753 adc byte ptr [edi + eax*8 - 0x3873ef60], al */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*8 + -0x3873ef60))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*8 + -0x3873ef60), (_r)); fl_add(_a,_b,_r,8); }
  /* 10a0c75a mov al, byte ptr [0xa0c79410] */
  AL = (r8((uint32_t)(0xa0c79410)));
  /* 10a0c764 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10a0c768 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10a0c76c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10a0c770 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10a0c774 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10a0c778 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10a0c77c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10a0c780 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10a0c784 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10a0c788 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10a0c78c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10a0c790 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10a0c794 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10a0c798 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10a0c79c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a0c7a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c7a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a0c7a7:;
  /* 10a0c7a7 jmp dword ptr [edx*4 + 0x10a0c7b0] */
  switch (EDX) {
    case 0: goto L_10a0c7c0;
    case 1: goto L_10a0c7c8;
    case 2: goto L_10a0c7d8;
    case 3: goto L_10a0c7ec;
    default: x86_unimpl("switch@0x10a0c7a7 out of table"); return;
  }
  /* 10a0c7ae mov edi, edi */
  EDI = (EDI);
L_10a0c7c0:;
  /* 10a0c7c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0c7c3 pop esi */
  ESI = (pop32());
  /* 10a0c7c4 pop edi */
  EDI = (pop32());
  /* 10a0c7c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0c7c6 ret  */
  ESPCHK(0x10a0c4d0u, _esp0);
  ESP += 4; return;
  /* 10a0c7c7 nop  */
  /* nop */
L_10a0c7c8:;
  /* 10a0c7c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0c7cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0c7ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0c7d1 pop esi */
  ESI = (pop32());
  /* 10a0c7d2 pop edi */
  EDI = (pop32());
  /* 10a0c7d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0c7d4 ret  */
  ESPCHK(0x10a0c4d0u, _esp0);
  ESP += 4; return;
  /* 10a0c7d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0c7d8:;
  /* 10a0c7d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0c7db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0c7de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0c7e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0c7e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0c7e7 pop esi */
  ESI = (pop32());
  /* 10a0c7e8 pop edi */
  EDI = (pop32());
  /* 10a0c7e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0c7ea ret  */
  ESPCHK(0x10a0c4d0u, _esp0);
  ESP += 4; return;
  /* 10a0c7eb nop  */
  /* nop */
L_10a0c7ec:;
  /* 10a0c7ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0c7ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0c7f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0c7f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0c7f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0c7fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0c7fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0c801 pop esi */
  ESI = (pop32());
  /* 10a0c802 pop edi */
  EDI = (pop32());
  /* 10a0c803 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0c804 ret  */
  ESPCHK(0x10a0c4d0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10a0c810 (104 bytes, 43 insns) */
void f_10a0c810(void) {
  FTRACE(0x10a0c810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0c810 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0c811 push esi */
  push32((uint32_t)(ESI));
  /* 10a0c812 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10a0c816 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0c818 jne 0x10a0c832 */
  if (!C.zf) goto L_10a0c832;
  /* 10a0c81a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a0c81e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a0c822 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c824 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a0c826 mov ebx, eax */
  EBX = (EAX);
  /* 10a0c828 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a0c82c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a0c82e mov edx, ebx */
  EDX = (EBX);
  /* 10a0c830 jmp 0x10a0c873 */
  goto L_10a0c873;
L_10a0c832:;
  /* 10a0c832 mov ecx, eax */
  ECX = (EAX);
  /* 10a0c834 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a0c838 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a0c83c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10a0c840:;
  /* 10a0c840 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a0c842 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10a0c844 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a0c846 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10a0c848 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0c84a jne 0x10a0c840 */
  if (!C.zf) goto L_10a0c840;
  /* 10a0c84c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a0c84e mov esi, eax */
  ESI = (EAX);
  /* 10a0c850 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a0c854 mov ecx, eax */
  ECX = (EAX);
  /* 10a0c856 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a0c85a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a0c85c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c85e jb 0x10a0c86e */
  if (C.cf) goto L_10a0c86e;
  /* 10a0c860 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c864 ja 0x10a0c86e */
  if ((!C.cf&&!C.zf)) goto L_10a0c86e;
  /* 10a0c866 jb 0x10a0c86f */
  if (C.cf) goto L_10a0c86f;
  /* 10a0c868 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c86c jbe 0x10a0c86f */
  if ((C.cf||C.zf)) goto L_10a0c86f;
L_10a0c86e:;
  /* 10a0c86e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10a0c86f:;
  /* 10a0c86f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c871 mov eax, esi */
  EAX = (ESI);
L_10a0c873:;
  /* 10a0c873 pop esi */
  ESI = (pop32());
  /* 10a0c874 pop ebx */
  EBX = (pop32());
  /* 10a0c875 ret 0x10 */
  ESPCHK(0x10a0c810u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10a0c880 (117 bytes, 44 insns) */
void f_10a0c880(void) {
  FTRACE(0x10a0c880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0c880 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0c881 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a0c885 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0c887 jne 0x10a0c8a1 */
  if (!C.zf) goto L_10a0c8a1;
  /* 10a0c889 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a0c88d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a0c891 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c893 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a0c895 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a0c899 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a0c89b mov eax, edx */
  EAX = (EDX);
  /* 10a0c89d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c89f jmp 0x10a0c8f1 */
  goto L_10a0c8f1;
L_10a0c8a1:;
  /* 10a0c8a1 mov ecx, eax */
  ECX = (EAX);
  /* 10a0c8a3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a0c8a7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a0c8ab mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10a0c8af:;
  /* 10a0c8af shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a0c8b1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10a0c8b3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a0c8b5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10a0c8b7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0c8b9 jne 0x10a0c8af */
  if (!C.zf) goto L_10a0c8af;
  /* 10a0c8bb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a0c8bd mov ecx, eax */
  ECX = (EAX);
  /* 10a0c8bf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a0c8c3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10a0c8c4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a0c8c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c8ca jb 0x10a0c8da */
  if (C.cf) goto L_10a0c8da;
  /* 10a0c8cc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c8d0 ja 0x10a0c8da */
  if ((!C.cf&&!C.zf)) goto L_10a0c8da;
  /* 10a0c8d2 jb 0x10a0c8e2 */
  if (C.cf) goto L_10a0c8e2;
  /* 10a0c8d4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c8d8 jbe 0x10a0c8e2 */
  if ((C.cf||C.zf)) goto L_10a0c8e2;
L_10a0c8da:;
  /* 10a0c8da sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c8de sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10a0c8e2:;
  /* 10a0c8e2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c8e6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c8ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0c8ec neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0c8ee sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10a0c8f1:;
  /* 10a0c8f1 pop ebx */
  EBX = (pop32());
  /* 10a0c8f2 ret 0x10 */
  ESPCHK(0x10a0c880u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c900 @ 0x10a0c900 (628 bytes, 214 insns) */
void f_10a0c900(void) {
  FTRACE(0x10a0c900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0c900 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0c901 mov ebp, esp */
  EBP = (ESP);
  /* 10a0c903 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0c906 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0c907 push esi */
  push32((uint32_t)(ESI));
  /* 10a0c908 push edi */
  push32((uint32_t)(EDI));
L_10a0c909:;
  /* 10a0c909 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c90d jne 0x10a0c92d */
  if (!C.zf) goto L_10a0c92d;
  /* 10a0c90f push 0x10a2d16c */
  push32((uint32_t)(0x10a2d16cu));
  /* 10a0c914 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0c916 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10a0c918 push 0x10a2d160 */
  push32((uint32_t)(0x10a2d160u));
  /* 10a0c91d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0c91f call 0x10a04cb0 */
  push32(0x10a0c924u); f_10a04cb0();
  /* 10a0c924 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0c927 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0c92a jne 0x10a0c92d */
  if (!C.zf) goto L_10a0c92d;
  /* 10a0c92c int3  */
  x86_unimpl("int3 @ 0x10a0c92c");
L_10a0c92d:;
  /* 10a0c92d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0c92f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0c931 jne 0x10a0c909 */
  if (!C.zf) goto L_10a0c909;
  /* 10a0c933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0c936 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a0c939 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c93c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a0c93f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a0c942 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c945 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0c948 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c94e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0c950 je 0x10a0c95f */
  if (C.zf) goto L_10a0c95f;
  /* 10a0c952 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c955 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0c958 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0c95b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0c95d je 0x10a0c975 */
  if (C.zf) goto L_10a0c975;
L_10a0c95f:;
  /* 10a0c95f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c962 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a0c965 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10a0c967 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c96a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10a0c96d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0c970 jmp 0x10a0cb6d */
  goto L_10a0cb6d;
L_10a0c975:;
  /* 10a0c975 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c978 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a0c97b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0c97e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0c980 je 0x10a0c9cc */
  if (C.zf) goto L_10a0c9cc;
  /* 10a0c982 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c985 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a0c98c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c98f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a0c992 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0c995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0c997 je 0x10a0c9b5 */
  if (C.zf) goto L_10a0c9b5;
  /* 10a0c999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c99c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c99f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a0c9a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a0c9a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c9a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0c9aa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c9ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c9b0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a0c9b3 jmp 0x10a0c9cc */
  goto L_10a0c9cc;
L_10a0c9b5:;
  /* 10a0c9b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c9b8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0c9bb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c9be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c9c1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a0c9c4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0c9c7 jmp 0x10a0cb6d */
  goto L_10a0cb6d;
L_10a0c9cc:;
  /* 10a0c9cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c9cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0c9d2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c9d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c9d8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a0c9db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c9de mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0c9e1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0c9e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c9e7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a0c9ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0c9ed mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a0c9f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0c9fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0c9fe mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a0ca01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ca04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0ca07 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0ca0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0ca0f jne 0x10a0ca3f */
  if (!C.zf) goto L_10a0ca3f;
  /* 10a0ca11 cmp dword ptr [ebp - 8], 0x10a30140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10a30140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ca18 je 0x10a0ca23 */
  if (C.zf) goto L_10a0ca23;
  /* 10a0ca1a cmp dword ptr [ebp - 8], 0x10a30160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10a30160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ca21 jne 0x10a0ca33 */
  if (!C.zf) goto L_10a0ca33;
L_10a0ca23:;
  /* 10a0ca23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0ca26 push edx */
  push32((uint32_t)(EDX));
  /* 10a0ca27 call 0x10a0e870 */
  push32(0x10a0ca2cu); f_10a0e870();
  /* 10a0ca2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ca2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0ca31 jne 0x10a0ca3f */
  if (!C.zf) goto L_10a0ca3f;
L_10a0ca33:;
  /* 10a0ca33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ca36 push eax */
  push32((uint32_t)(EAX));
  /* 10a0ca37 call 0x10a0e7a0 */
  push32(0x10a0ca3cu); f_10a0e7a0();
  /* 10a0ca3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0ca3f:;
  /* 10a0ca3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ca42 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0ca45 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0ca4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0ca4d je 0x10a0cb2b */
  if (C.zf) goto L_10a0cb2b;
L_10a0ca53:;
  /* 10a0ca53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ca56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ca59 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10a0ca5b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ca5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0ca60 jge 0x10a0ca83 */
  if ((C.sf==C.of)) goto L_10a0ca83;
  /* 10a0ca62 push 0x10a2d120 */
  push32((uint32_t)(0x10a2d120u));
  /* 10a0ca67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0ca69 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10a0ca6e push 0x10a2d160 */
  push32((uint32_t)(0x10a2d160u));
  /* 10a0ca73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0ca75 call 0x10a04cb0 */
  push32(0x10a0ca7au); f_10a04cb0();
  /* 10a0ca7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ca7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ca80 jne 0x10a0ca83 */
  if (!C.zf) goto L_10a0ca83;
  /* 10a0ca82 int3  */
  x86_unimpl("int3 @ 0x10a0ca82");
L_10a0ca83:;
  /* 10a0ca83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ca85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0ca87 jne 0x10a0ca53 */
  if (!C.zf) goto L_10a0ca53;
  /* 10a0ca89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ca8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ca8f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a0ca91 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ca94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0ca97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ca9a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a0ca9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0caa0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0caa3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a0caa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0caa8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a0caab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0caae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0cab1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a0cab4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cab8 jle 0x10a0cad6 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0cad6;
  /* 10a0caba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cabd push ecx */
  push32((uint32_t)(ECX));
  /* 10a0cabe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0cac1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a0cac4 push eax */
  push32((uint32_t)(EAX));
  /* 10a0cac5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0cac8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0cac9 call 0x10a0e490 */
  push32(0x10a0caceu); f_10a0e490();
  /* 10a0cace add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cad1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a0cad4 jmp 0x10a0cb1e */
  goto L_10a0cb1e;
L_10a0cad6:;
  /* 10a0cad6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cada je 0x10a0caf9 */
  if (C.zf) goto L_10a0caf9;
  /* 10a0cadc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0cadf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a0cae2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0cae5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0cae8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0caeb mov ecx, dword ptr [edx*4 + 0x10a330c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10a330c0)));
  /* 10a0caf2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0caf4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a0caf7 jmp 0x10a0cb00 */
  goto L_10a0cb00;
L_10a0caf9:;
  /* 10a0caf9 mov dword ptr [ebp - 0x14], 0x10a2fa60 */
  w32((uint32_t)(EBP + -0x14), (0x10a2fa60u));
L_10a0cb00:;
  /* 10a0cb00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0cb03 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10a0cb07 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0cb0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0cb0c je 0x10a0cb1e */
  if (C.zf) goto L_10a0cb1e;
  /* 10a0cb0e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0cb10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0cb12 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0cb15 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0cb16 call 0x10a0e340 */
  push32(0x10a0cb1bu); f_10a0e340();
  /* 10a0cb1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0cb1e:;
  /* 10a0cb1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0cb21 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a0cb24 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a0cb27 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a0cb29 jmp 0x10a0cb49 */
  goto L_10a0cb49;
L_10a0cb2b:;
  /* 10a0cb2b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a0cb32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cb35 push edx */
  push32((uint32_t)(EDX));
  /* 10a0cb36 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10a0cb39 push eax */
  push32((uint32_t)(EAX));
  /* 10a0cb3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0cb3d push ecx */
  push32((uint32_t)(ECX));
  /* 10a0cb3e call 0x10a0e490 */
  push32(0x10a0cb43u); f_10a0e490();
  /* 10a0cb43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cb46 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a0cb49:;
  /* 10a0cb49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0cb4c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cb4f je 0x10a0cb65 */
  if (C.zf) goto L_10a0cb65;
  /* 10a0cb51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0cb54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0cb57 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0cb5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0cb5d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10a0cb60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0cb63 jmp 0x10a0cb6d */
  goto L_10a0cb6d;
L_10a0cb65:;
  /* 10a0cb65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0cb68 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10a0cb6d:;
  /* 10a0cb6d pop edi */
  EDI = (pop32());
  /* 10a0cb6e pop esi */
  ESI = (pop32());
  /* 10a0cb6f pop ebx */
  EBX = (pop32());
  /* 10a0cb70 mov esp, ebp */
  ESP = (EBP);
  /* 10a0cb72 pop ebp */
  EBP = (pop32());
  /* 10a0cb73 ret  */
  ESPCHK(0x10a0c900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb80 @ 0x10a0cb80 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10a0cb80(void) {
  FTRACE(0x10a0cb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0cb80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0cb81 mov ebp, esp */
  EBP = (ESP);
  /* 10a0cb83 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0cb89 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0cb8a push esi */
  push32((uint32_t)(ESI));
  /* 10a0cb8b push edi */
  push32((uint32_t)(EDI));
  /* 10a0cb8c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a0cb93 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10a0cb9d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10a0cba4:;
  /* 10a0cba4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0cba7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a0cba9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10a0cbac movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cbb0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0cbb3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cbb6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a0cbb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0cbbb je 0x10a0d797 */
  if (C.zf) goto L_10a0d797;
  /* 10a0cbc1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cbc8 jl 0x10a0d797 */
  if ((C.sf!=C.of)) goto L_10a0d797;
  /* 10a0cbce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cbd2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cbd5 jl 0x10a0cbf6 */
  if ((C.sf!=C.of)) goto L_10a0cbf6;
  /* 10a0cbd7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cbdb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cbde jg 0x10a0cbf6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a0cbf6;
  /* 10a0cbe0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cbe4 movsx ecx, byte ptr [eax + 0x10a2d158] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10a2d158))));
  /* 10a0cbeb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0cbee mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10a0cbf4 jmp 0x10a0cc00 */
  goto L_10a0cc00;
L_10a0cbf6:;
  /* 10a0cbf6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10a0cc00:;
  /* 10a0cc00 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10a0cc06 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a0cc09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0cc0c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0cc0f movsx edx, byte ptr [ecx + eax*8 + 0x10a2d178] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10a2d178))));
  /* 10a0cc17 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a0cc1a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a0cc1d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0cc20 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10a0cc26 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cc2d ja 0x10a0d792 */
  if ((!C.cf&&!C.zf)) goto L_10a0d792;
  /* 10a0cc33 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10a0cc39 jmp dword ptr [ecx*4 + 0x10a0d7a4] */
  switch (ECX) {
    case 0: goto L_10a0cc40;
    case 1: goto L_10a0ccda;
    case 2: goto L_10a0cd1c;
    case 3: goto L_10a0cd8b;
    case 4: goto L_10a0cde3;
    case 5: goto L_10a0cdf2;
    case 6: goto L_10a0ce3e;
    case 7: goto L_10a0ced1;
    case 8: goto L_10a0cd68;
    case 9: goto L_10a0cd73;
    case 10: goto L_10a0cd5e;
    case 11: goto L_10a0cd53;
    case 12: goto L_10a0cd7e;
    case 13: goto L_10a0cd86;
    default: x86_unimpl("switch@0x10a0cc39 out of table"); return;
  }
L_10a0cc40:;
  /* 10a0cc40 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10a0cc47 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0cc4a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0cc50 mov eax, dword ptr [0x10a2fc98] */
  EAX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a0cc55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0cc57 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a0cc5b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0cc61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0cc63 je 0x10a0ccbd */
  if (C.zf) goto L_10a0ccbd;
  /* 10a0cc65 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10a0cc6b push edx */
  push32((uint32_t)(EDX));
  /* 10a0cc6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0cc6f push eax */
  push32((uint32_t)(EAX));
  /* 10a0cc70 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cc74 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0cc75 call 0x10a0d8b0 */
  push32(0x10a0cc7au); f_10a0d8b0();
  /* 10a0cc7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cc7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0cc80 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a0cc82 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10a0cc85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0cc88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cc8b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a0cc8e:;
  /* 10a0cc8e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cc92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0cc94 jne 0x10a0ccb7 */
  if (!C.zf) goto L_10a0ccb7;
  /* 10a0cc96 push 0x10a2d1f8 */
  push32((uint32_t)(0x10a2d1f8u));
  /* 10a0cc9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0cc9d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10a0cca2 push 0x10a2d1ec */
  push32((uint32_t)(0x10a2d1ecu));
  /* 10a0cca7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0cca9 call 0x10a04cb0 */
  push32(0x10a0ccaeu); f_10a04cb0();
  /* 10a0ccae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ccb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ccb4 jne 0x10a0ccb7 */
  if (!C.zf) goto L_10a0ccb7;
  /* 10a0ccb6 int3  */
  x86_unimpl("int3 @ 0x10a0ccb6");
L_10a0ccb7:;
  /* 10a0ccb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ccb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0ccbb jne 0x10a0cc8e */
  if (!C.zf) goto L_10a0cc8e;
L_10a0ccbd:;
  /* 10a0ccbd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10a0ccc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0ccc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ccc7 push edx */
  push32((uint32_t)(EDX));
  /* 10a0ccc8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cccc push eax */
  push32((uint32_t)(EAX));
  /* 10a0cccd call 0x10a0d8b0 */
  push32(0x10a0ccd2u); f_10a0d8b0();
  /* 10a0ccd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ccd5 jmp 0x10a0d792 */
  goto L_10a0d792;
L_10a0ccda:;
  /* 10a0ccda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a0cce1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0cce4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10a0ccea mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10a0ccf0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10a0ccf6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a0ccfc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a0ccff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0cd06 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10a0cd10 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10a0cd17 jmp 0x10a0d792 */
  goto L_10a0d792;
L_10a0cd1c:;
  /* 10a0cd1c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cd20 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10a0cd26 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10a0cd2c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0cd2f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10a0cd35 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cd3c ja 0x10a0cd86 */
  if ((!C.cf&&!C.zf)) goto L_10a0cd86;
  /* 10a0cd3e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10a0cd44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0cd46 mov al, byte ptr [ecx + 0x10a0d7dc] */
  AL = (r8((uint32_t)(ECX + 0x10a0d7dc)));
  /* 10a0cd4c jmp dword ptr [eax*4 + 0x10a0d7c4] */
  switch (EAX) {
    case 0: goto L_10a0cd68;
    case 1: goto L_10a0cd73;
    case 2: goto L_10a0cd5e;
    case 3: goto L_10a0cd53;
    case 4: goto L_10a0cd7e;
    case 5: goto L_10a0cd86;
    default: x86_unimpl("switch@0x10a0cd4c out of table"); return;
  }
L_10a0cd53:;
  /* 10a0cd53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cd56 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0cd59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0cd5c jmp 0x10a0cd86 */
  goto L_10a0cd86;
L_10a0cd5e:;
  /* 10a0cd5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cd61 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10a0cd63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0cd66 jmp 0x10a0cd86 */
  goto L_10a0cd86;
L_10a0cd68:;
  /* 10a0cd68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cd6b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0cd6e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a0cd71 jmp 0x10a0cd86 */
  goto L_10a0cd86;
L_10a0cd73:;
  /* 10a0cd73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cd76 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10a0cd79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0cd7c jmp 0x10a0cd86 */
  goto L_10a0cd86;
L_10a0cd7e:;
  /* 10a0cd7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cd81 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10a0cd83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a0cd86:;
  /* 10a0cd86 jmp 0x10a0d792 */
  goto L_10a0d792;
L_10a0cd8b:;
  /* 10a0cd8b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cd8f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cd92 jne 0x10a0cdc7 */
  if (!C.zf) goto L_10a0cdc7;
  /* 10a0cd94 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a0cd97 push edx */
  push32((uint32_t)(EDX));
  /* 10a0cd98 call 0x10a0d9c0 */
  push32(0x10a0cd9du); f_10a0d9c0();
  /* 10a0cd9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cda0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10a0cda6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cdad jge 0x10a0cdc5 */
  if ((C.sf==C.of)) goto L_10a0cdc5;
  /* 10a0cdaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cdb2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10a0cdb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0cdb7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a0cdbd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0cdbf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10a0cdc5:;
  /* 10a0cdc5 jmp 0x10a0cdde */
  goto L_10a0cdde;
L_10a0cdc7:;
  /* 10a0cdc7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a0cdcd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0cdd0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cdd4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10a0cdd8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10a0cdde:;
  /* 10a0cdde jmp 0x10a0d792 */
  goto L_10a0d792;
L_10a0cde3:;
  /* 10a0cde3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10a0cded jmp 0x10a0d792 */
  goto L_10a0d792;
L_10a0cdf2:;
  /* 10a0cdf2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0cdf6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cdf9 jne 0x10a0ce22 */
  if (!C.zf) goto L_10a0ce22;
  /* 10a0cdfb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a0cdfe push eax */
  push32((uint32_t)(EAX));
  /* 10a0cdff call 0x10a0d9c0 */
  push32(0x10a0ce04u); f_10a0d9c0();
  /* 10a0ce04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ce07 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10a0ce0d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ce14 jge 0x10a0ce20 */
  if ((C.sf==C.of)) goto L_10a0ce20;
  /* 10a0ce16 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10a0ce20:;
  /* 10a0ce20 jmp 0x10a0ce39 */
  goto L_10a0ce39;
L_10a0ce22:;
  /* 10a0ce22 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a0ce28 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0ce2b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0ce2f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10a0ce33 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10a0ce39:;
  /* 10a0ce39 jmp 0x10a0d792 */
  goto L_10a0d792;
L_10a0ce3e:;
  /* 10a0ce3e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0ce42 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10a0ce48 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10a0ce4e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ce51 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10a0ce57 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ce5e ja 0x10a0cecc */
  if ((!C.cf&&!C.zf)) goto L_10a0cecc;
  /* 10a0ce60 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10a0ce66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ce68 mov al, byte ptr [ecx + 0x10a0d801] */
  AL = (r8((uint32_t)(ECX + 0x10a0d801)));
  /* 10a0ce6e jmp dword ptr [eax*4 + 0x10a0d7ed] */
  switch (EAX) {
    case 0: goto L_10a0ce80;
    case 1: goto L_10a0ceb9;
    case 2: goto L_10a0ce75;
    case 3: goto L_10a0cec3;
    case 4: goto L_10a0cecc;
    default: x86_unimpl("switch@0x10a0ce6e out of table"); return;
  }
L_10a0ce75:;
  /* 10a0ce75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ce78 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0ce7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0ce7e jmp 0x10a0cecc */
  goto L_10a0cecc;
L_10a0ce80:;
  /* 10a0ce80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0ce83 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a0ce86 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ce89 jne 0x10a0ceab */
  if (!C.zf) goto L_10a0ceab;
  /* 10a0ce8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0ce8e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a0ce92 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ce95 jne 0x10a0ceab */
  if (!C.zf) goto L_10a0ceab;
  /* 10a0ce97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0ce9a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ce9d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a0cea0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cea3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a0cea6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0cea9 jmp 0x10a0ceb7 */
  goto L_10a0ceb7;
L_10a0ceab:;
  /* 10a0ceab mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10a0ceb2 jmp 0x10a0cc40 */
  goto L_10a0cc40;
L_10a0ceb7:;
  /* 10a0ceb7 jmp 0x10a0cecc */
  goto L_10a0cecc;
L_10a0ceb9:;
  /* 10a0ceb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cebc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10a0cebe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0cec1 jmp 0x10a0cecc */
  goto L_10a0cecc;
L_10a0cec3:;
  /* 10a0cec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cec6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a0cec9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a0cecc:;
  /* 10a0cecc jmp 0x10a0d792 */
  goto L_10a0d792;
L_10a0ced1:;
  /* 10a0ced1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0ced5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10a0cedb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10a0cee1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0cee4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10a0ceea cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cef1 ja 0x10a0d5b7 */
  if ((!C.cf&&!C.zf)) goto L_10a0d5b7;
  /* 10a0cef7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10a0cefd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0ceff mov cl, byte ptr [edx + 0x10a0d86c] */
  CL = (r8((uint32_t)(EDX + 0x10a0d86c)));
  /* 10a0cf05 jmp dword ptr [ecx*4 + 0x10a0d830] */
  switch (ECX) {
    case 0: goto L_10a0cf0c;
    case 1: goto L_10a0d1a0;
    case 2: goto L_10a0d030;
    case 3: goto L_10a0d2d9;
    case 4: goto L_10a0cf9b;
    case 5: goto L_10a0cf21;
    case 6: goto L_10a0d2ab;
    case 7: goto L_10a0d1b0;
    case 8: goto L_10a0d155;
    case 9: goto L_10a0d325;
    case 10: goto L_10a0d2cf;
    case 11: goto L_10a0d046;
    case 12: goto L_10a0d2c3;
    case 13: goto L_10a0d2e5;
    case 14: goto L_10a0d5b7;
    default: x86_unimpl("switch@0x10a0cf05 out of table"); return;
  }
L_10a0cf0c:;
  /* 10a0cf0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cf0f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0cf14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0cf16 jne 0x10a0cf21 */
  if (!C.zf) goto L_10a0cf21;
  /* 10a0cf18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cf1b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a0cf1e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a0cf21:;
  /* 10a0cf21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cf24 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0cf2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0cf2c je 0x10a0cf67 */
  if (C.zf) goto L_10a0cf67;
  /* 10a0cf2e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a0cf31 push eax */
  push32((uint32_t)(EAX));
  /* 10a0cf32 call 0x10a0da00 */
  push32(0x10a0cf37u); f_10a0da00();
  /* 10a0cf37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cf3a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10a0cf3e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10a0cf42 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0cf43 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10a0cf49 push edx */
  push32((uint32_t)(EDX));
  /* 10a0cf4a call 0x10a0eae0 */
  push32(0x10a0cf4fu); f_10a0eae0();
  /* 10a0cf4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cf52 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a0cf55 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cf59 jge 0x10a0cf65 */
  if ((C.sf==C.of)) goto L_10a0cf65;
  /* 10a0cf5b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10a0cf65:;
  /* 10a0cf65 jmp 0x10a0cf8d */
  goto L_10a0cf8d;
L_10a0cf67:;
  /* 10a0cf67 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a0cf6a push eax */
  push32((uint32_t)(EAX));
  /* 10a0cf6b call 0x10a0d9c0 */
  push32(0x10a0cf70u); f_10a0d9c0();
  /* 10a0cf70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cf73 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10a0cf7a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10a0cf80 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10a0cf86 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10a0cf8d:;
  /* 10a0cf8d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10a0cf93 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a0cf96 jmp 0x10a0d5b7 */
  goto L_10a0d5b7;
L_10a0cf9b:;
  /* 10a0cf9b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a0cf9e push eax */
  push32((uint32_t)(EAX));
  /* 10a0cf9f call 0x10a0d9c0 */
  push32(0x10a0cfa4u); f_10a0d9c0();
  /* 10a0cfa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cfa7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10a0cfad cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cfb4 je 0x10a0cfc2 */
  if (C.zf) goto L_10a0cfc2;
  /* 10a0cfb6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a0cfbc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0cfc0 jne 0x10a0cfdc */
  if (!C.zf) goto L_10a0cfdc;
L_10a0cfc2:;
  /* 10a0cfc2 mov edx, dword ptr [0x10a2ffb0] */
  EDX = (r32((uint32_t)(0x10a2ffb0)));
  /* 10a0cfc8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a0cfcb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0cfce push eax */
  push32((uint32_t)(EAX));
  /* 10a0cfcf call 0x10a08a20 */
  push32(0x10a0cfd4u); f_10a08a20();
  /* 10a0cfd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0cfd7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a0cfda jmp 0x10a0d02b */
  goto L_10a0d02b;
L_10a0cfdc:;
  /* 10a0cfdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0cfdf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0cfe5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0cfe7 je 0x10a0d00c */
  if (C.zf) goto L_10a0d00c;
  /* 10a0cfe9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a0cfef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a0cff2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a0cff5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a0cffb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10a0cffe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a0d000 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a0d003 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10a0d00a jmp 0x10a0d02b */
  goto L_10a0d02b;
L_10a0d00c:;
  /* 10a0d00c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10a0d013 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a0d019 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0d01c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a0d01f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a0d025 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10a0d028 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a0d02b:;
  /* 10a0d02b jmp 0x10a0d5b7 */
  goto L_10a0d5b7;
L_10a0d030:;
  /* 10a0d030 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d033 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0d039 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0d03b jne 0x10a0d046 */
  if (!C.zf) goto L_10a0d046;
  /* 10a0d03d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d040 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a0d043 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a0d046:;
  /* 10a0d046 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d04d jne 0x10a0d05b */
  if (!C.zf) goto L_10a0d05b;
  /* 10a0d04f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10a0d059 jmp 0x10a0d067 */
  goto L_10a0d067;
L_10a0d05b:;
  /* 10a0d05b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a0d061 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10a0d067:;
  /* 10a0d067 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10a0d06d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10a0d073 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a0d076 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d077 call 0x10a0d9c0 */
  push32(0x10a0d07cu); f_10a0d9c0();
  /* 10a0d07c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d07f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a0d082 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d085 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d08a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d08c je 0x10a0d0f6 */
  if (C.zf) goto L_10a0d0f6;
  /* 10a0d08e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d092 jne 0x10a0d09d */
  if (!C.zf) goto L_10a0d09d;
  /* 10a0d094 mov ecx, dword ptr [0x10a2ffb4] */
  ECX = (r32((uint32_t)(0x10a2ffb4)));
  /* 10a0d09a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a0d09d:;
  /* 10a0d09d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10a0d0a4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d0a7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10a0d0ad:;
  /* 10a0d0ad mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a0d0b3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a0d0b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d0bc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10a0d0c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d0c4 je 0x10a0d0e6 */
  if (C.zf) goto L_10a0d0e6;
  /* 10a0d0c6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10a0d0cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d0ce mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10a0d0d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d0d3 je 0x10a0d0e6 */
  if (C.zf) goto L_10a0d0e6;
  /* 10a0d0d5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10a0d0db add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d0de mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10a0d0e4 jmp 0x10a0d0ad */
  goto L_10a0d0ad;
L_10a0d0e6:;
  /* 10a0d0e6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10a0d0ec sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d0ef sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a0d0f1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a0d0f4 jmp 0x10a0d150 */
  goto L_10a0d150;
L_10a0d0f6:;
  /* 10a0d0f6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d0fa jne 0x10a0d104 */
  if (!C.zf) goto L_10a0d104;
  /* 10a0d0fc mov eax, dword ptr [0x10a2ffb0] */
  EAX = (r32((uint32_t)(0x10a2ffb0)));
  /* 10a0d101 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10a0d104:;
  /* 10a0d104 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d107 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10a0d10d:;
  /* 10a0d10d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a0d113 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a0d119 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d11c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10a0d122 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d124 je 0x10a0d144 */
  if (C.zf) goto L_10a0d144;
  /* 10a0d126 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10a0d12c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a0d12f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d131 je 0x10a0d144 */
  if (C.zf) goto L_10a0d144;
  /* 10a0d133 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10a0d139 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d13c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10a0d142 jmp 0x10a0d10d */
  goto L_10a0d10d;
L_10a0d144:;
  /* 10a0d144 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10a0d14a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d14d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10a0d150:;
  /* 10a0d150 jmp 0x10a0d5b7 */
  goto L_10a0d5b7;
L_10a0d155:;
  /* 10a0d155 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a0d158 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d159 call 0x10a0d9c0 */
  push32(0x10a0d15eu); f_10a0d9c0();
  /* 10a0d15e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d161 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10a0d167 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d16a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d16d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d16f je 0x10a0d183 */
  if (C.zf) goto L_10a0d183;
  /* 10a0d171 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10a0d177 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10a0d17e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10a0d181 jmp 0x10a0d191 */
  goto L_10a0d191;
L_10a0d183:;
  /* 10a0d183 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10a0d189 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10a0d18f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10a0d191:;
  /* 10a0d191 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10a0d19b jmp 0x10a0d5b7 */
  goto L_10a0d5b7;
L_10a0d1a0:;
  /* 10a0d1a0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a0d1a7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10a0d1aa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a0d1ad mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10a0d1b0:;
  /* 10a0d1b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d1b3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10a0d1b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0d1b8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10a0d1be mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a0d1c1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d1c8 jge 0x10a0d1d6 */
  if ((C.sf==C.of)) goto L_10a0d1d6;
  /* 10a0d1ca mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10a0d1d4 jmp 0x10a0d1f2 */
  goto L_10a0d1f2;
L_10a0d1d6:;
  /* 10a0d1d6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d1dd jne 0x10a0d1f2 */
  if (!C.zf) goto L_10a0d1f2;
  /* 10a0d1df movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0d1e3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d1e6 jne 0x10a0d1f2 */
  if (!C.zf) goto L_10a0d1f2;
  /* 10a0d1e8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10a0d1f2:;
  /* 10a0d1f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0d1f5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d1f8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10a0d1fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0d1fe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d201 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0d203 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0d206 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10a0d20c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10a0d212 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0d215 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d216 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a0d21c push edx */
  push32((uint32_t)(EDX));
  /* 10a0d21d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0d221 push eax */
  push32((uint32_t)(EAX));
  /* 10a0d222 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d225 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d226 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10a0d22c push edx */
  push32((uint32_t)(EDX));
  /* 10a0d22d call dword ptr [0x10a303a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a303a0))), 0x10a0d233u);
  /* 10a0d233 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d239 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d23e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d240 je 0x10a0d258 */
  if (C.zf) goto L_10a0d258;
  /* 10a0d242 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d249 jne 0x10a0d258 */
  if (!C.zf) goto L_10a0d258;
  /* 10a0d24b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d24e push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d24f call dword ptr [0x10a303ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a303ac))), 0x10a0d255u);
  /* 10a0d255 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0d258:;
  /* 10a0d258 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a0d25c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d25f jne 0x10a0d27a */
  if (!C.zf) goto L_10a0d27a;
  /* 10a0d261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d264 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d26b jne 0x10a0d27a */
  if (!C.zf) goto L_10a0d27a;
  /* 10a0d26d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d270 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d271 call dword ptr [0x10a303a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a303a4))), 0x10a0d277u);
  /* 10a0d277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0d27a:;
  /* 10a0d27a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d27d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a0d280 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d283 jne 0x10a0d297 */
  if (!C.zf) goto L_10a0d297;
  /* 10a0d285 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d288 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a0d28b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a0d28e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d291 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d294 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10a0d297:;
  /* 10a0d297 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d29a push eax */
  push32((uint32_t)(EAX));
  /* 10a0d29b call 0x10a08a20 */
  push32(0x10a0d2a0u); f_10a08a20();
  /* 10a0d2a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d2a3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a0d2a6 jmp 0x10a0d5b7 */
  goto L_10a0d5b7;
L_10a0d2ab:;
  /* 10a0d2ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d2ae or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0d2b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a0d2b4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10a0d2be jmp 0x10a0d345 */
  goto L_10a0d345;
L_10a0d2c3:;
  /* 10a0d2c3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10a0d2cd jmp 0x10a0d345 */
  goto L_10a0d345;
L_10a0d2cf:;
  /* 10a0d2cf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10a0d2d9:;
  /* 10a0d2d9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10a0d2e3 jmp 0x10a0d2ef */
  goto L_10a0d2ef;
L_10a0d2e5:;
  /* 10a0d2e5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10a0d2ef:;
  /* 10a0d2ef mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10a0d2f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d2fc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0d302 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d304 je 0x10a0d323 */
  if (C.zf) goto L_10a0d323;
  /* 10a0d306 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10a0d30d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10a0d313 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d316 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10a0d31c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10a0d323:;
  /* 10a0d323 jmp 0x10a0d345 */
  goto L_10a0d345;
L_10a0d325:;
  /* 10a0d325 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10a0d32f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d332 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0d338 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0d33a je 0x10a0d345 */
  if (C.zf) goto L_10a0d345;
  /* 10a0d33c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d33f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a0d342 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a0d345:;
  /* 10a0d345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d348 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d34d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d34f je 0x10a0d36e */
  if (C.zf) goto L_10a0d36e;
  /* 10a0d351 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a0d354 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d355 call 0x10a0d9e0 */
  push32(0x10a0d35au); f_10a0d9e0();
  /* 10a0d35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d35d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a0d363 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10a0d369 jmp 0x10a0d3ff */
  goto L_10a0d3ff;
L_10a0d36e:;
  /* 10a0d36e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d371 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0d374 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d376 je 0x10a0d3c0 */
  if (C.zf) goto L_10a0d3c0;
  /* 10a0d378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d37b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d37e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d380 je 0x10a0d3a0 */
  if (C.zf) goto L_10a0d3a0;
  /* 10a0d382 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a0d385 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d386 call 0x10a0d9c0 */
  push32(0x10a0d38bu); f_10a0d9c0();
  /* 10a0d38b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d38e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10a0d391 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a0d392 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a0d398 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10a0d39e jmp 0x10a0d3be */
  goto L_10a0d3be;
L_10a0d3a0:;
  /* 10a0d3a0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a0d3a3 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d3a4 call 0x10a0d9c0 */
  push32(0x10a0d3a9u); f_10a0d9c0();
  /* 10a0d3a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d3ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d3b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a0d3b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a0d3b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10a0d3be:;
  /* 10a0d3be jmp 0x10a0d3ff */
  goto L_10a0d3ff;
L_10a0d3c0:;
  /* 10a0d3c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d3c3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d3c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d3c8 je 0x10a0d3e5 */
  if (C.zf) goto L_10a0d3e5;
  /* 10a0d3ca lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a0d3cd push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d3ce call 0x10a0d9c0 */
  push32(0x10a0d3d3u); f_10a0d9c0();
  /* 10a0d3d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d3d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a0d3d7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a0d3dd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10a0d3e3 jmp 0x10a0d3ff */
  goto L_10a0d3ff;
L_10a0d3e5:;
  /* 10a0d3e5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a0d3e8 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d3e9 call 0x10a0d9c0 */
  push32(0x10a0d3eeu); f_10a0d9c0();
  /* 10a0d3ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d3f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0d3f3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a0d3f9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10a0d3ff:;
  /* 10a0d3ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d402 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0d405 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d407 je 0x10a0d447 */
  if (C.zf) goto L_10a0d447;
  /* 10a0d409 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d410 jg 0x10a0d447 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a0d447;
  /* 10a0d412 jl 0x10a0d41d */
  if ((C.sf!=C.of)) goto L_10a0d41d;
  /* 10a0d414 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d41b jae 0x10a0d447 */
  if (!C.cf) goto L_10a0d447;
L_10a0d41d:;
  /* 10a0d41d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10a0d423 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0d425 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10a0d42b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d42e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0d430 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a0d436 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10a0d43c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d43f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a0d442 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0d445 jmp 0x10a0d45f */
  goto L_10a0d45f;
L_10a0d447:;
  /* 10a0d447 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10a0d44d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a0d453 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10a0d459 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10a0d45f:;
  /* 10a0d45f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d462 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0d468 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d46a jne 0x10a0d487 */
  if (!C.zf) goto L_10a0d487;
  /* 10a0d46c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a0d472 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10a0d478 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0d47b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a0d481 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10a0d487:;
  /* 10a0d487 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d48e jge 0x10a0d49c */
  if ((C.sf==C.of)) goto L_10a0d49c;
  /* 10a0d490 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10a0d49a jmp 0x10a0d4a5 */
  goto L_10a0d4a5;
L_10a0d49c:;
  /* 10a0d49c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d49f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0d4a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a0d4a5:;
  /* 10a0d4a5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a0d4ab or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d4b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d4b3 jne 0x10a0d4bc */
  if (!C.zf) goto L_10a0d4bc;
  /* 10a0d4b5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a0d4bc:;
  /* 10a0d4bc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10a0d4bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a0d4c2:;
  /* 10a0d4c2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a0d4c8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a0d4ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d4d1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10a0d4d7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d4d9 jg 0x10a0d4ef */
  if ((!C.zf&&C.sf==C.of)) goto L_10a0d4ef;
  /* 10a0d4db mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a0d4e1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10a0d4e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0d4e9 je 0x10a0d570 */
  if (C.zf) goto L_10a0d570;
L_10a0d4ef:;
  /* 10a0d4ef mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10a0d4f5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a0d4f6 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d4f7 push eax */
  push32((uint32_t)(EAX));
  /* 10a0d4f8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10a0d4fe push edx */
  push32((uint32_t)(EDX));
  /* 10a0d4ff mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a0d505 push eax */
  push32((uint32_t)(EAX));
  /* 10a0d506 call 0x10a0c880 */
  push32(0x10a0d50bu); f_10a0c880();
  /* 10a0d50b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d50e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10a0d514 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10a0d51a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a0d51b push edx */
  push32((uint32_t)(EDX));
  /* 10a0d51c push eax */
  push32((uint32_t)(EAX));
  /* 10a0d51d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10a0d523 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d524 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a0d52a push edx */
  push32((uint32_t)(EDX));
  /* 10a0d52b call 0x10a0c810 */
  push32(0x10a0d530u); f_10a0c810();
  /* 10a0d530 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a0d536 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10a0d53c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d543 jle 0x10a0d557 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0d557;
  /* 10a0d545 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10a0d54b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d551 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10a0d557:;
  /* 10a0d557 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d55a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10a0d560 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10a0d562 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d565 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d568 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a0d56b jmp 0x10a0d4c2 */
  goto L_10a0d4c2;
L_10a0d570:;
  /* 10a0d570 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10a0d573 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d576 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a0d579 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d57c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d57f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a0d582 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d585 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d58a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d58c je 0x10a0d5b7 */
  if (C.zf) goto L_10a0d5b7;
  /* 10a0d58e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d591 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a0d594 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d597 jne 0x10a0d59f */
  if (!C.zf) goto L_10a0d59f;
  /* 10a0d599 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d59d jne 0x10a0d5b7 */
  if (!C.zf) goto L_10a0d5b7;
L_10a0d59f:;
  /* 10a0d59f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d5a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d5a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a0d5a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d5ab mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10a0d5ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0d5b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d5b4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10a0d5b7:;
  /* 10a0d5b7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d5be jne 0x10a0d792 */
  if (!C.zf) goto L_10a0d792;
  /* 10a0d5c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d5c7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d5ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d5cc je 0x10a0d61d */
  if (C.zf) goto L_10a0d61d;
  /* 10a0d5ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d5d1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0d5d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0d5d9 je 0x10a0d5eb */
  if (C.zf) goto L_10a0d5eb;
  /* 10a0d5db mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10a0d5e2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a0d5e9 jmp 0x10a0d61d */
  goto L_10a0d61d;
L_10a0d5eb:;
  /* 10a0d5eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d5ee and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0d5f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d5f3 je 0x10a0d605 */
  if (C.zf) goto L_10a0d605;
  /* 10a0d5f5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10a0d5fc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a0d603 jmp 0x10a0d61d */
  goto L_10a0d61d;
L_10a0d605:;
  /* 10a0d605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d608 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0d60b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d60d je 0x10a0d61d */
  if (C.zf) goto L_10a0d61d;
  /* 10a0d60f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10a0d616 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10a0d61d:;
  /* 10a0d61d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a0d623 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d626 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d629 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10a0d62f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d632 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0d635 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d637 jne 0x10a0d655 */
  if (!C.zf) goto L_10a0d655;
  /* 10a0d639 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a0d63f push eax */
  push32((uint32_t)(EAX));
  /* 10a0d640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d643 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d644 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10a0d64a push edx */
  push32((uint32_t)(EDX));
  /* 10a0d64b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a0d64d call 0x10a0d930 */
  push32(0x10a0d652u); f_10a0d930();
  /* 10a0d652 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0d655:;
  /* 10a0d655 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a0d65b push eax */
  push32((uint32_t)(EAX));
  /* 10a0d65c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d65f push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d660 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0d663 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d664 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10a0d66a push eax */
  push32((uint32_t)(EAX));
  /* 10a0d66b call 0x10a0d970 */
  push32(0x10a0d670u); f_10a0d970();
  /* 10a0d670 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d676 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0d679 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0d67b je 0x10a0d6a3 */
  if (C.zf) goto L_10a0d6a3;
  /* 10a0d67d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d680 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0d683 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d685 jne 0x10a0d6a3 */
  if (!C.zf) goto L_10a0d6a3;
  /* 10a0d687 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a0d68d push eax */
  push32((uint32_t)(EAX));
  /* 10a0d68e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d691 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d692 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10a0d698 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d699 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a0d69b call 0x10a0d930 */
  push32(0x10a0d6a0u); f_10a0d930();
  /* 10a0d6a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0d6a3:;
  /* 10a0d6a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d6a7 je 0x10a0d751 */
  if (C.zf) goto L_10a0d751;
  /* 10a0d6ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d6b1 jle 0x10a0d751 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0d751;
  /* 10a0d6b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d6ba mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10a0d6c0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0d6c3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10a0d6c9:;
  /* 10a0d6c9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10a0d6cf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10a0d6d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d6d8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10a0d6de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d6e0 je 0x10a0d74f */
  if (C.zf) goto L_10a0d74f;
  /* 10a0d6e2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10a0d6e8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10a0d6eb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10a0d6f2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10a0d6f9 push eax */
  push32((uint32_t)(EAX));
  /* 10a0d6fa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10a0d700 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d701 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10a0d707 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d70a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10a0d710 call 0x10a0eae0 */
  push32(0x10a0d715u); f_10a0eae0();
  /* 10a0d715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d718 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10a0d71e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d725 jg 0x10a0d729 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a0d729;
  /* 10a0d727 jmp 0x10a0d74f */
  goto L_10a0d74f;
L_10a0d729:;
  /* 10a0d729 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a0d72f push eax */
  push32((uint32_t)(EAX));
  /* 10a0d730 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d733 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d734 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10a0d73a push edx */
  push32((uint32_t)(EDX));
  /* 10a0d73b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10a0d741 push eax */
  push32((uint32_t)(EAX));
  /* 10a0d742 call 0x10a0d970 */
  push32(0x10a0d747u); f_10a0d970();
  /* 10a0d747 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d74a jmp 0x10a0d6c9 */
  goto L_10a0d6c9;
L_10a0d74f:;
  /* 10a0d74f jmp 0x10a0d76c */
  goto L_10a0d76c;
L_10a0d751:;
  /* 10a0d751 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10a0d757 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d75b push edx */
  push32((uint32_t)(EDX));
  /* 10a0d75c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0d75f push eax */
  push32((uint32_t)(EAX));
  /* 10a0d760 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0d763 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d764 call 0x10a0d970 */
  push32(0x10a0d769u); f_10a0d970();
  /* 10a0d769 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0d76c:;
  /* 10a0d76c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d76f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0d772 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0d774 je 0x10a0d792 */
  if (C.zf) goto L_10a0d792;
  /* 10a0d776 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a0d77c push eax */
  push32((uint32_t)(EAX));
  /* 10a0d77d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d780 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d781 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10a0d787 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d788 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a0d78a call 0x10a0d930 */
  push32(0x10a0d78fu); f_10a0d930();
  /* 10a0d78f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0d792:;
  /* 10a0d792 jmp 0x10a0cba4 */
  goto L_10a0cba4;
L_10a0d797:;
  /* 10a0d797 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10a0d79d pop edi */
  EDI = (pop32());
  /* 10a0d79e pop esi */
  ESI = (pop32());
  /* 10a0d79f pop ebx */
  EBX = (pop32());
  /* 10a0d7a0 mov esp, ebp */
  ESP = (EBP);
  /* 10a0d7a2 pop ebp */
  EBP = (pop32());
  /* 10a0d7a3 ret  */
  ESPCHK(0x10a0cb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8b0 @ 0x10a0d8b0 (119 bytes, 44 insns) */
void f_10a0d8b0(void) {
  FTRACE(0x10a0d8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0d8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0d8b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0d8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d8b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d8b7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a0d8ba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d8bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d8c0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a0d8c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d8c6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d8ca jl 0x10a0d8f2 */
  if ((C.sf!=C.of)) goto L_10a0d8f2;
  /* 10a0d8cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d8cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0d8d1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a0d8d4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10a0d8d6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10a0d8da and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0d8e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a0d8e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d8e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0d8e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d8eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d8ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a0d8f0 jmp 0x10a0d905 */
  goto L_10a0d905;
L_10a0d8f2:;
  /* 10a0d8f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d8f5 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d8f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d8f9 push eax */
  push32((uint32_t)(EAX));
  /* 10a0d8fa call 0x10a0c900 */
  push32(0x10a0d8ffu); f_10a0c900();
  /* 10a0d8ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d902 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a0d905:;
  /* 10a0d905 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d909 jne 0x10a0d916 */
  if (!C.zf) goto L_10a0d916;
  /* 10a0d90b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0d90e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a0d914 jmp 0x10a0d923 */
  goto L_10a0d923;
L_10a0d916:;
  /* 10a0d916 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0d919 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0d91b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d91e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0d921 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10a0d923:;
  /* 10a0d923 mov esp, ebp */
  ESP = (EBP);
  /* 10a0d925 pop ebp */
  EBP = (pop32());
  /* 10a0d926 ret  */
  ESPCHK(0x10a0d8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d930 @ 0x10a0d930 (53 bytes, 23 insns) */
void f_10a0d930(void) {
  FTRACE(0x10a0d930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0d930 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0d931 mov ebp, esp */
  EBP = (ESP);
L_10a0d933:;
  /* 10a0d933 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d936 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d939 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d93c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a0d93f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d941 jle 0x10a0d963 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0d963;
  /* 10a0d943 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0d946 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d947 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0d94a push eax */
  push32((uint32_t)(EAX));
  /* 10a0d94b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d94e push ecx */
  push32((uint32_t)(ECX));
  /* 10a0d94f call 0x10a0d8b0 */
  push32(0x10a0d954u); f_10a0d8b0();
  /* 10a0d954 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d957 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0d95a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d95d jne 0x10a0d961 */
  if (!C.zf) goto L_10a0d961;
  /* 10a0d95f jmp 0x10a0d963 */
  goto L_10a0d963;
L_10a0d961:;
  /* 10a0d961 jmp 0x10a0d933 */
  goto L_10a0d933;
L_10a0d963:;
  /* 10a0d963 pop ebp */
  EBP = (pop32());
  /* 10a0d964 ret  */
  ESPCHK(0x10a0d930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d970 @ 0x10a0d970 (74 bytes, 31 insns) */
void f_10a0d970(void) {
  FTRACE(0x10a0d970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0d970 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0d971 mov ebp, esp */
  EBP = (ESP);
  /* 10a0d973 push ecx */
  push32((uint32_t)(ECX));
L_10a0d974:;
  /* 10a0d974 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d977 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0d97a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d97d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a0d980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0d982 jle 0x10a0d9b6 */
  if ((C.zf||C.sf!=C.of)) goto L_10a0d9b6;
  /* 10a0d984 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0d987 push edx */
  push32((uint32_t)(EDX));
  /* 10a0d988 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0d98b push eax */
  push32((uint32_t)(EAX));
  /* 10a0d98c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d98f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a0d992 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0d995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0d998 push eax */
  push32((uint32_t)(EAX));
  /* 10a0d999 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d99c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d99f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a0d9a2 call 0x10a0d8b0 */
  push32(0x10a0d9a7u); f_10a0d8b0();
  /* 10a0d9a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d9aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0d9ad cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0d9b0 jne 0x10a0d9b4 */
  if (!C.zf) goto L_10a0d9b4;
  /* 10a0d9b2 jmp 0x10a0d9b6 */
  goto L_10a0d9b6;
L_10a0d9b4:;
  /* 10a0d9b4 jmp 0x10a0d974 */
  goto L_10a0d974;
L_10a0d9b6:;
  /* 10a0d9b6 mov esp, ebp */
  ESP = (EBP);
  /* 10a0d9b8 pop ebp */
  EBP = (pop32());
  /* 10a0d9b9 ret  */
  ESPCHK(0x10a0d970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9c0 @ 0x10a0d9c0 (26 bytes, 12 insns) */
void f_10a0d9c0(void) {
  FTRACE(0x10a0d9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0d9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0d9c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0d9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d9c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0d9c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d9cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d9ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a0d9d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d9d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0d9d5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a0d9d8 pop ebp */
  EBP = (pop32());
  /* 10a0d9d9 ret  */
  ESPCHK(0x10a0d9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9e0 @ 0x10a0d9e0 (31 bytes, 14 insns) */
void f_10a0d9e0(void) {
  FTRACE(0x10a0d9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0d9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0d9e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0d9e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d9e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0d9e8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0d9eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d9ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a0d9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0d9f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0d9f5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0d9f8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a0d9fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a0d9fd pop ebp */
  EBP = (pop32());
  /* 10a0d9fe ret  */
  ESPCHK(0x10a0d9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da00 @ 0x10a0da00 (27 bytes, 12 insns) */
void f_10a0da00(void) {
  FTRACE(0x10a0da00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0da00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0da01 mov ebp, esp */
  EBP = (ESP);
  /* 10a0da03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0da06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0da08 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0da0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0da0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a0da10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0da13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0da15 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10a0da19 pop ebp */
  EBP = (pop32());
  /* 10a0da1a ret  */
  ESPCHK(0x10a0da00u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10a0da20 (145 bytes, 42 insns) */
void f_10a0da20(void) {
  FTRACE(0x10a0da20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0da20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0da21 mov ebp, esp */
  EBP = (ESP);
  /* 10a0da23 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0da24 call 0x10a0dad0 */
  push32(0x10a0da29u); f_10a0dad0();
  /* 10a0da29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0da2c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a0da2e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0da35 jmp 0x10a0da40 */
  goto L_10a0da40;
L_10a0da37:;
  /* 10a0da37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0da3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0da3d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a0da40:;
  /* 10a0da40 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0da44 jae 0x10a0da6a */
  if (!C.cf) goto L_10a0da6a;
  /* 10a0da46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0da49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0da4c cmp ecx, dword ptr [eax*8 + 0x10a2ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10a2ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0da53 jne 0x10a0da68 */
  if (!C.zf) goto L_10a0da68;
  /* 10a0da55 call 0x10a0dac0 */
  push32(0x10a0da5au); f_10a0dac0();
  /* 10a0da5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0da5d mov ecx, dword ptr [edx*8 + 0x10a2ffbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10a2ffbc)));
  /* 10a0da64 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a0da66 jmp 0x10a0daad */
  goto L_10a0daad;
L_10a0da68:;
  /* 10a0da68 jmp 0x10a0da37 */
  goto L_10a0da37;
L_10a0da6a:;
  /* 10a0da6a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0da6e jb 0x10a0da83 */
  if (C.cf) goto L_10a0da83;
  /* 10a0da70 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0da74 ja 0x10a0da83 */
  if ((!C.cf&&!C.zf)) goto L_10a0da83;
  /* 10a0da76 call 0x10a0dac0 */
  push32(0x10a0da7bu); f_10a0dac0();
  /* 10a0da7b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10a0da81 jmp 0x10a0daad */
  goto L_10a0daad;
L_10a0da83:;
  /* 10a0da83 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0da8a jb 0x10a0daa2 */
  if (C.cf) goto L_10a0daa2;
  /* 10a0da8c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0da93 ja 0x10a0daa2 */
  if ((!C.cf&&!C.zf)) goto L_10a0daa2;
  /* 10a0da95 call 0x10a0dac0 */
  push32(0x10a0da9au); f_10a0dac0();
  /* 10a0da9a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10a0daa0 jmp 0x10a0daad */
  goto L_10a0daad;
L_10a0daa2:;
  /* 10a0daa2 call 0x10a0dac0 */
  push32(0x10a0daa7u); f_10a0dac0();
  /* 10a0daa7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10a0daad:;
  /* 10a0daad mov esp, ebp */
  ESP = (EBP);
  /* 10a0daaf pop ebp */
  EBP = (pop32());
  /* 10a0dab0 ret  */
  ESPCHK(0x10a0da20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dac0 @ 0x10a0dac0 (13 bytes, 6 insns) */
void f_10a0dac0(void) {
  FTRACE(0x10a0dac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0dac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0dac1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0dac3 call 0x10a05630 */
  push32(0x10a0dac8u); f_10a05630();
  /* 10a0dac8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0dacb pop ebp */
  EBP = (pop32());
  /* 10a0dacc ret  */
  ESPCHK(0x10a0dac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dad0 @ 0x10a0dad0 (13 bytes, 6 insns) */
void f_10a0dad0(void) {
  FTRACE(0x10a0dad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0dad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0dad1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0dad3 call 0x10a05630 */
  push32(0x10a0dad8u); f_10a05630();
  /* 10a0dad8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0dadb pop ebp */
  EBP = (pop32());
  /* 10a0dadc ret  */
  ESPCHK(0x10a0dad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dae0 @ 0x10a0dae0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_10a0dae0(void) {
  FTRACE(0x10a0dae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0dae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0dae1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0dae3 push edi */
  push32((uint32_t)(EDI));
  /* 10a0dae4 push esi */
  push32((uint32_t)(ESI));
  /* 10a0dae5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0dae8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0daeb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0daee mov eax, ecx */
  EAX = (ECX);
  /* 10a0daf0 mov edx, ecx */
  EDX = (ECX);
  /* 10a0daf2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0daf4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0daf6 jbe 0x10a0db00 */
  if ((C.cf||C.zf)) goto L_10a0db00;
  /* 10a0daf8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dafa jb 0x10a0dc78 */
  if (C.cf) goto L_10a0dc78;
L_10a0db00:;
  /* 10a0db00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a0db06 jne 0x10a0db1c */
  if (!C.zf) goto L_10a0db1c;
  /* 10a0db08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0db0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0db0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0db11 jb 0x10a0db3c */
  if (C.cf) goto L_10a0db3c;
  /* 10a0db13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0db15 jmp dword ptr [edx*4 + 0x10a0dc28] */
  switch (EDX) {
    case 0: goto L_10a0dc38;
    case 1: goto L_10a0dc40;
    case 2: goto L_10a0dc4c;
    case 3: goto L_10a0dc60;
    default: x86_unimpl("switch@0x10a0db15 out of table"); return;
  }
L_10a0db1c:;
  /* 10a0db1c mov eax, edi */
  EAX = (EDI);
  /* 10a0db1e mov edx, 3 */
  EDX = (0x3u);
  /* 10a0db23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0db26 jb 0x10a0db34 */
  if (C.cf) goto L_10a0db34;
  /* 10a0db28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0db2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0db2d jmp dword ptr [eax*4 + 0x10a0db40] */
  switch (EAX) {
    case 1: goto L_10a0db50;
    case 2: goto L_10a0db7c;
    case 3: goto L_10a0dba0;
    default: x86_unimpl("switch@0x10a0db2d out of table"); return;
  }
L_10a0db34:;
  /* 10a0db34 jmp dword ptr [ecx*4 + 0x10a0dc38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10a0dc38)))); return;
  /* 10a0db3b nop  */
  /* nop */
L_10a0db3c:;
  /* 10a0db3c jmp dword ptr [ecx*4 + 0x10a0dbbc] */
  switch (ECX) {
    case 0: goto L_10a0dc1f;
    case 1: goto L_10a0dc0c;
    case 2: goto L_10a0dc04;
    case 3: goto L_10a0dbfc;
    case 4: goto L_10a0dbf4;
    case 5: goto L_10a0dbec;
    case 6: goto L_10a0dbe4;
    case 7: goto L_10a0dbdc;
    default: x86_unimpl("switch@0x10a0db3c out of table"); return;
  }
  /* 10a0db43 nop  */
  /* nop */
L_10a0db50:;
  /* 10a0db50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0db52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0db54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0db56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0db59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0db5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0db5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0db62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0db65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0db68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0db6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0db6e jb 0x10a0db3c */
  if (C.cf) goto L_10a0db3c;
  /* 10a0db70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0db72 jmp dword ptr [edx*4 + 0x10a0dc28] */
  switch (EDX) {
    case 0: goto L_10a0dc38;
    case 1: goto L_10a0dc40;
    case 2: goto L_10a0dc4c;
    case 3: goto L_10a0dc60;
    default: x86_unimpl("switch@0x10a0db72 out of table"); return;
  }
  /* 10a0db79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0db7c:;
  /* 10a0db7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0db7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0db80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0db82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0db85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0db88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0db8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0db8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0db91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0db94 jb 0x10a0db3c */
  if (C.cf) goto L_10a0db3c;
  /* 10a0db96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0db98 jmp dword ptr [edx*4 + 0x10a0dc28] */
  switch (EDX) {
    case 0: goto L_10a0dc38;
    case 1: goto L_10a0dc40;
    case 2: goto L_10a0dc4c;
    case 3: goto L_10a0dc60;
    default: x86_unimpl("switch@0x10a0db98 out of table"); return;
  }
  /* 10a0db9f nop  */
  /* nop */
L_10a0dba0:;
  /* 10a0dba0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0dba2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0dba4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0dba6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a0dba7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0dbaa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a0dbab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dbae jb 0x10a0db3c */
  if (C.cf) goto L_10a0db3c;
  /* 10a0dbb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0dbb2 jmp dword ptr [edx*4 + 0x10a0dc28] */
  switch (EDX) {
    case 0: goto L_10a0dc38;
    case 1: goto L_10a0dc40;
    case 2: goto L_10a0dc4c;
    case 3: goto L_10a0dc60;
    default: x86_unimpl("switch@0x10a0dbb2 out of table"); return;
  }
  /* 10a0dbb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0dbdc:;
  /* 10a0dbdc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10a0dbe0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10a0dbe4:;
  /* 10a0dbe4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10a0dbe8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10a0dbec:;
  /* 10a0dbec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10a0dbf0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10a0dbf4:;
  /* 10a0dbf4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10a0dbf8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10a0dbfc:;
  /* 10a0dbfc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10a0dc00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10a0dc04:;
  /* 10a0dc04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10a0dc08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10a0dc0c:;
  /* 10a0dc0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10a0dc10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10a0dc14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a0dc1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0dc1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a0dc1f:;
  /* 10a0dc1f jmp dword ptr [edx*4 + 0x10a0dc28] */
  switch (EDX) {
    case 0: goto L_10a0dc38;
    case 1: goto L_10a0dc40;
    case 2: goto L_10a0dc4c;
    case 3: goto L_10a0dc60;
    default: x86_unimpl("switch@0x10a0dc1f out of table"); return;
  }
  /* 10a0dc26 mov edi, edi */
  EDI = (EDI);
L_10a0dc38:;
  /* 10a0dc38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0dc3b pop esi */
  ESI = (pop32());
  /* 10a0dc3c pop edi */
  EDI = (pop32());
  /* 10a0dc3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0dc3e ret  */
  ESPCHK(0x10a0dae0u, _esp0);
  ESP += 4; return;
  /* 10a0dc3f nop  */
  /* nop */
L_10a0dc40:;
  /* 10a0dc40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0dc42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0dc44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0dc47 pop esi */
  ESI = (pop32());
  /* 10a0dc48 pop edi */
  EDI = (pop32());
  /* 10a0dc49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0dc4a ret  */
  ESPCHK(0x10a0dae0u, _esp0);
  ESP += 4; return;
  /* 10a0dc4b nop  */
  /* nop */
L_10a0dc4c:;
  /* 10a0dc4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0dc4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0dc50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0dc53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0dc56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0dc59 pop esi */
  ESI = (pop32());
  /* 10a0dc5a pop edi */
  EDI = (pop32());
  /* 10a0dc5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0dc5c ret  */
  ESPCHK(0x10a0dae0u, _esp0);
  ESP += 4; return;
  /* 10a0dc5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0dc60:;
  /* 10a0dc60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a0dc62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0dc64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0dc67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0dc6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0dc6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0dc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0dc73 pop esi */
  ESI = (pop32());
  /* 10a0dc74 pop edi */
  EDI = (pop32());
  /* 10a0dc75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0dc76 ret  */
  ESPCHK(0x10a0dae0u, _esp0);
  ESP += 4; return;
  /* 10a0dc77 nop  */
  /* nop */
L_10a0dc78:;
  /* 10a0dc78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10a0dc7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10a0dc80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a0dc86 jne 0x10a0dcac */
  if (!C.zf) goto L_10a0dcac;
  /* 10a0dc88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0dc8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0dc8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dc91 jb 0x10a0dca0 */
  if (C.cf) goto L_10a0dca0;
  /* 10a0dc93 std  */
  C.df=1;
  /* 10a0dc94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0dc96 cld  */
  C.df=0;
  /* 10a0dc97 jmp dword ptr [edx*4 + 0x10a0ddc0] */
  switch (EDX) {
    case 0: goto L_10a0ddd0;
    case 1: goto L_10a0ddd8;
    case 2: goto L_10a0dde8;
    case 3: goto L_10a0ddfc;
    default: x86_unimpl("switch@0x10a0dc97 out of table"); return;
  }
  /* 10a0dc9e mov edi, edi */
  EDI = (EDI);
L_10a0dca0:;
  /* 10a0dca0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0dca2 jmp dword ptr [ecx*4 + 0x10a0dd70] */
  switch (ECX) {
    case 0: goto L_10a0ddb7;
    default: x86_unimpl("switch@0x10a0dca2 out of table"); return;
  }
  /* 10a0dca9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0dcac:;
  /* 10a0dcac mov eax, edi */
  EAX = (EDI);
  /* 10a0dcae mov edx, 3 */
  EDX = (0x3u);
  /* 10a0dcb3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dcb6 jb 0x10a0dcc4 */
  if (C.cf) goto L_10a0dcc4;
  /* 10a0dcb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0dcbb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0dcbd jmp dword ptr [eax*4 + 0x10a0dcc8] */
  switch (EAX) {
    case 1: goto L_10a0dcd8;
    case 2: goto L_10a0dcf8;
    case 3: goto L_10a0dd20;
    default: x86_unimpl("switch@0x10a0dcbd out of table"); return;
  }
L_10a0dcc4:;
  /* 10a0dcc4 jmp dword ptr [ecx*4 + 0x10a0ddc0] */
  switch (ECX) {
    case 0: goto L_10a0ddd0;
    case 1: goto L_10a0ddd8;
    case 2: goto L_10a0dde8;
    case 3: goto L_10a0ddfc;
    default: x86_unimpl("switch@0x10a0dcc4 out of table"); return;
  }
  /* 10a0dccb nop  */
  /* nop */
L_10a0dcd8:;
  /* 10a0dcd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0dcdb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0dcdd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0dce0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10a0dce1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0dce4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10a0dce5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dce8 jb 0x10a0dca0 */
  if (C.cf) goto L_10a0dca0;
  /* 10a0dcea std  */
  C.df=1;
  /* 10a0dceb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0dced cld  */
  C.df=0;
  /* 10a0dcee jmp dword ptr [edx*4 + 0x10a0ddc0] */
  switch (EDX) {
    case 0: goto L_10a0ddd0;
    case 1: goto L_10a0ddd8;
    case 2: goto L_10a0dde8;
    case 3: goto L_10a0ddfc;
    default: x86_unimpl("switch@0x10a0dcee out of table"); return;
  }
  /* 10a0dcf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0dcf8:;
  /* 10a0dcf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0dcfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0dcfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0dd00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0dd03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0dd06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0dd09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0dd0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0dd0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dd12 jb 0x10a0dca0 */
  if (C.cf) goto L_10a0dca0;
  /* 10a0dd14 std  */
  C.df=1;
  /* 10a0dd15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0dd17 cld  */
  C.df=0;
  /* 10a0dd18 jmp dword ptr [edx*4 + 0x10a0ddc0] */
  switch (EDX) {
    case 0: goto L_10a0ddd0;
    case 1: goto L_10a0ddd8;
    case 2: goto L_10a0dde8;
    case 3: goto L_10a0ddfc;
    default: x86_unimpl("switch@0x10a0dd18 out of table"); return;
  }
  /* 10a0dd1f nop  */
  /* nop */
L_10a0dd20:;
  /* 10a0dd20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0dd23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0dd25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0dd28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0dd2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0dd2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0dd31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0dd34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0dd37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0dd3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0dd3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dd40 jb 0x10a0dca0 */
  if (C.cf) goto L_10a0dca0;
  /* 10a0dd46 std  */
  C.df=1;
  /* 10a0dd47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a0dd49 cld  */
  C.df=0;
  /* 10a0dd4a jmp dword ptr [edx*4 + 0x10a0ddc0] */
  switch (EDX) {
    case 0: goto L_10a0ddd0;
    case 1: goto L_10a0ddd8;
    case 2: goto L_10a0dde8;
    case 3: goto L_10a0ddfc;
    default: x86_unimpl("switch@0x10a0dd4a out of table"); return;
  }
  /* 10a0dd51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10a0dd54 je 0x10a0dd33 */
  if (C.zf) goto L_10a0dd33;
  /* 10a0dd56 mov al, byte ptr [0xa0dd7c10] */
  AL = (r8((uint32_t)(0xa0dd7c10)));
  /* 10a0dd5b adc byte ptr [ebp + ebx*8 - 0x2273ef60], al */
  { uint32_t _a=(r8((uint32_t)(EBP + EBX*8 + -0x2273ef60))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EBX*8 + -0x2273ef60), (_r)); fl_add(_a,_b,_r,8); }
  /* 10a0dd62 mov al, byte ptr [0xa0dd9410] */
  AL = (r8((uint32_t)(0xa0dd9410)));
  /* 10a0dd67 adc byte ptr [ebp + ebx*8 - 0x225bef60], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + EBX*8 + -0x225bef60))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EBX*8 + -0x225bef60), (_r)); fl_add(_a,_b,_r,8); }
  /* 10a0dd74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10a0dd78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10a0dd7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10a0dd80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10a0dd84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10a0dd88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10a0dd8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10a0dd90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10a0dd94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10a0dd98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10a0dd9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10a0dda0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10a0dda4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10a0dda8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10a0ddac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a0ddb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ddb5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a0ddb7:;
  /* 10a0ddb7 jmp dword ptr [edx*4 + 0x10a0ddc0] */
  switch (EDX) {
    case 0: goto L_10a0ddd0;
    case 1: goto L_10a0ddd8;
    case 2: goto L_10a0dde8;
    case 3: goto L_10a0ddfc;
    default: x86_unimpl("switch@0x10a0ddb7 out of table"); return;
  }
  /* 10a0ddbe mov edi, edi */
  EDI = (EDI);
L_10a0ddd0:;
  /* 10a0ddd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ddd3 pop esi */
  ESI = (pop32());
  /* 10a0ddd4 pop edi */
  EDI = (pop32());
  /* 10a0ddd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0ddd6 ret  */
  ESPCHK(0x10a0dae0u, _esp0);
  ESP += 4; return;
  /* 10a0ddd7 nop  */
  /* nop */
L_10a0ddd8:;
  /* 10a0ddd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0dddb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0ddde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0dde1 pop esi */
  ESI = (pop32());
  /* 10a0dde2 pop edi */
  EDI = (pop32());
  /* 10a0dde3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0dde4 ret  */
  ESPCHK(0x10a0dae0u, _esp0);
  ESP += 4; return;
  /* 10a0dde5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a0dde8:;
  /* 10a0dde8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0ddeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0ddee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0ddf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0ddf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ddf7 pop esi */
  ESI = (pop32());
  /* 10a0ddf8 pop edi */
  EDI = (pop32());
  /* 10a0ddf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0ddfa ret  */
  ESPCHK(0x10a0dae0u, _esp0);
  ESP += 4; return;
  /* 10a0ddfb nop  */
  /* nop */
L_10a0ddfc:;
  /* 10a0ddfc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a0ddff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a0de02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a0de05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a0de08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a0de0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a0de0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0de11 pop esi */
  ESI = (pop32());
  /* 10a0de12 pop edi */
  EDI = (pop32());
  /* 10a0de13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a0de14 ret  */
  ESPCHK(0x10a0dae0u, _esp0);
  ESP += 4; return;
L_10a0dd33: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x10a0dd33 (unresolved jump table)"); return;
}

/* FUN_1000de20 @ 0x10a0de20 (421 bytes, 148 insns) */
void f_10a0de20(void) {
  FTRACE(0x10a0de20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0de20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0de21 mov ebp, esp */
  EBP = (ESP);
  /* 10a0de23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a0de25 push 0x10a2d210 */
  push32((uint32_t)(0x10a2d210u));
  /* 10a0de2a push 0x10a0ecf8 */
  push32((uint32_t)(0x10a0ecf8u));
  /* 10a0de2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a0de35 push eax */
  push32((uint32_t)(EAX));
  /* 10a0de36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a0de3d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0de40 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0de41 push esi */
  push32((uint32_t)(ESI));
  /* 10a0de42 push edi */
  push32((uint32_t)(EDI));
  /* 10a0de43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a0de46 cmp dword ptr [0x10a318cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0de4d jne 0x10a0de9e */
  if (!C.zf) goto L_10a0de9e;
  /* 10a0de4f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10a0de52 push eax */
  push32((uint32_t)(EAX));
  /* 10a0de53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0de55 push 0x10a2d20c */
  push32((uint32_t)(0x10a2d20cu));
  /* 10a0de5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0de5c call dword ptr [0x10a342f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342f4))), 0x10a0de62u);
  /* 10a0de62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0de64 je 0x10a0de72 */
  if (C.zf) goto L_10a0de72;
  /* 10a0de66 mov dword ptr [0x10a318cc], 1 */
  w32((uint32_t)(0x10a318cc), (0x1u));
  /* 10a0de70 jmp 0x10a0de9e */
  goto L_10a0de9e;
L_10a0de72:;
  /* 10a0de72 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10a0de75 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0de76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0de78 push 0x10a2d208 */
  push32((uint32_t)(0x10a2d208u));
  /* 10a0de7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0de7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0de81 call dword ptr [0x10a342f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342f8))), 0x10a0de87u);
  /* 10a0de87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0de89 je 0x10a0de97 */
  if (C.zf) goto L_10a0de97;
  /* 10a0de8b mov dword ptr [0x10a318cc], 2 */
  w32((uint32_t)(0x10a318cc), (0x2u));
  /* 10a0de95 jmp 0x10a0de9e */
  goto L_10a0de9e;
L_10a0de97:;
  /* 10a0de97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0de99 jmp 0x10a0dfc8 */
  goto L_10a0dfc8;
L_10a0de9e:;
  /* 10a0de9e cmp dword ptr [0x10a318cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a318cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dea5 jne 0x10a0ded5 */
  if (!C.zf) goto L_10a0ded5;
  /* 10a0dea7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0deab jne 0x10a0deb6 */
  if (!C.zf) goto L_10a0deb6;
  /* 10a0dead mov edx, dword ptr [0x10a318d8] */
  EDX = (r32((uint32_t)(0x10a318d8)));
  /* 10a0deb3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10a0deb6:;
  /* 10a0deb6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0deb9 push eax */
  push32((uint32_t)(EAX));
  /* 10a0deba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0debd push ecx */
  push32((uint32_t)(ECX));
  /* 10a0debe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0dec1 push edx */
  push32((uint32_t)(EDX));
  /* 10a0dec2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0dec5 push eax */
  push32((uint32_t)(EAX));
  /* 10a0dec6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a0dec9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0deca call dword ptr [0x10a342f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342f8))), 0x10a0ded0u);
  /* 10a0ded0 jmp 0x10a0dfc8 */
  goto L_10a0dfc8;
L_10a0ded5:;
  /* 10a0ded5 cmp dword ptr [0x10a318cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a318cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dedc jne 0x10a0dfc6 */
  if (!C.zf) goto L_10a0dfc6;
  /* 10a0dee2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dee6 jne 0x10a0def1 */
  if (!C.zf) goto L_10a0def1;
  /* 10a0dee8 mov edx, dword ptr [0x10a318e8] */
  EDX = (r32((uint32_t)(0x10a318e8)));
  /* 10a0deee mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10a0def1:;
  /* 10a0def1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0def3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0def5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0def8 push eax */
  push32((uint32_t)(EAX));
  /* 10a0def9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0defc push ecx */
  push32((uint32_t)(ECX));
  /* 10a0defd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a0df00 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0df02 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0df04 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0df07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0df0a push edx */
  push32((uint32_t)(EDX));
  /* 10a0df0b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0df0e push eax */
  push32((uint32_t)(EAX));
  /* 10a0df0f call dword ptr [0x10a342fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342fc))), 0x10a0df15u);
  /* 10a0df15 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a0df18 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0df1c jne 0x10a0df25 */
  if (!C.zf) goto L_10a0df25;
  /* 10a0df1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0df20 jmp 0x10a0dfc8 */
  goto L_10a0dfc8;
L_10a0df25:;
  /* 10a0df25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0df2c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0df2f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a0df31 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0df34 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a0df36 call 0x10a08d90 */
  push32(0x10a0df3bu); f_10a08d90();
  /* 10a0df3b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10a0df3e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a0df41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0df44 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a0df47 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0df4a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a0df4c push edx */
  push32((uint32_t)(EDX));
  /* 10a0df4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0df4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0df52 push eax */
  push32((uint32_t)(EAX));
  /* 10a0df53 call 0x10a09960 */
  push32(0x10a0df58u); f_10a09960();
  /* 10a0df58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0df5b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a0df62 jmp 0x10a0df7b */
  goto L_10a0df7b;
  /* 10a0df64 mov eax, 1 */
  EAX = (0x1u);
  /* 10a0df69 ret  */
  ESPCHK(0x10a0de20u, _esp0);
  ESP += 4; return;
  /* 10a0df6a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0df6d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a0df74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a0df7b:;
  /* 10a0df7b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0df7f jne 0x10a0df85 */
  if (!C.zf) goto L_10a0df85;
  /* 10a0df81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0df83 jmp 0x10a0dfc8 */
  goto L_10a0dfc8;
L_10a0df85:;
  /* 10a0df85 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0df88 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0df89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0df8c push edx */
  push32((uint32_t)(EDX));
  /* 10a0df8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0df90 push eax */
  push32((uint32_t)(EAX));
  /* 10a0df91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0df94 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0df95 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0df97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0df9a push edx */
  push32((uint32_t)(EDX));
  /* 10a0df9b call dword ptr [0x10a342fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342fc))), 0x10a0dfa1u);
  /* 10a0dfa1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a0dfa4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0dfa8 jne 0x10a0dfae */
  if (!C.zf) goto L_10a0dfae;
  /* 10a0dfaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0dfac jmp 0x10a0dfc8 */
  goto L_10a0dfc8;
L_10a0dfae:;
  /* 10a0dfae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0dfb1 push eax */
  push32((uint32_t)(EAX));
  /* 10a0dfb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0dfb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0dfb6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0dfb9 push edx */
  push32((uint32_t)(EDX));
  /* 10a0dfba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0dfbd push eax */
  push32((uint32_t)(EAX));
  /* 10a0dfbe call dword ptr [0x10a342f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342f4))), 0x10a0dfc4u);
  /* 10a0dfc4 jmp 0x10a0dfc8 */
  goto L_10a0dfc8;
L_10a0dfc6:;
  /* 10a0dfc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a0dfc8:;
  /* 10a0dfc8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10a0dfcb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0dfce mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a0dfd5 pop edi */
  EDI = (pop32());
  /* 10a0dfd6 pop esi */
  ESI = (pop32());
  /* 10a0dfd7 pop ebx */
  EBX = (pop32());
  /* 10a0dfd8 mov esp, ebp */
  ESP = (EBP);
  /* 10a0dfda pop ebp */
  EBP = (pop32());
  /* 10a0dfdb ret  */
  ESPCHK(0x10a0de20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfe0 @ 0x10a0dfe0 (727 bytes, 263 insns) */
void f_10a0dfe0(void) {
  FTRACE(0x10a0dfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0dfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0dfe1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0dfe3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a0dfe5 push 0x10a2d220 */
  push32((uint32_t)(0x10a2d220u));
  /* 10a0dfea push 0x10a0ecf8 */
  push32((uint32_t)(0x10a0ecf8u));
  /* 10a0dfef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a0dff5 push eax */
  push32((uint32_t)(EAX));
  /* 10a0dff6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a0dffd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e000 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0e001 push esi */
  push32((uint32_t)(ESI));
  /* 10a0e002 push edi */
  push32((uint32_t)(EDI));
  /* 10a0e003 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a0e006 cmp dword ptr [0x10a318f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e00d jne 0x10a0e066 */
  if (!C.zf) goto L_10a0e066;
  /* 10a0e00f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e011 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e013 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0e015 push 0x10a2d20c */
  push32((uint32_t)(0x10a2d20cu));
  /* 10a0e01a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a0e01f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e021 call dword ptr [0x10a342ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342ec))), 0x10a0e027u);
  /* 10a0e027 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e029 je 0x10a0e037 */
  if (C.zf) goto L_10a0e037;
  /* 10a0e02b mov dword ptr [0x10a318f0], 1 */
  w32((uint32_t)(0x10a318f0), (0x1u));
  /* 10a0e035 jmp 0x10a0e066 */
  goto L_10a0e066;
L_10a0e037:;
  /* 10a0e037 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e039 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e03b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0e03d push 0x10a2d208 */
  push32((uint32_t)(0x10a2d208u));
  /* 10a0e042 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a0e047 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e049 call dword ptr [0x10a342f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342f0))), 0x10a0e04fu);
  /* 10a0e04f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e051 je 0x10a0e05f */
  if (C.zf) goto L_10a0e05f;
  /* 10a0e053 mov dword ptr [0x10a318f0], 2 */
  w32((uint32_t)(0x10a318f0), (0x2u));
  /* 10a0e05d jmp 0x10a0e066 */
  goto L_10a0e066;
L_10a0e05f:;
  /* 10a0e05f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e061 jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e066:;
  /* 10a0e066 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e06a jle 0x10a0e07f */
  if ((C.zf||C.sf!=C.of)) goto L_10a0e07f;
  /* 10a0e06c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0e06f push eax */
  push32((uint32_t)(EAX));
  /* 10a0e070 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0e073 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e074 call 0x10a0e2f0 */
  push32(0x10a0e079u); f_10a0e2f0();
  /* 10a0e079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e07c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10a0e07f:;
  /* 10a0e07f cmp dword ptr [0x10a318f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a318f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e086 jne 0x10a0e0ab */
  if (!C.zf) goto L_10a0e0ab;
  /* 10a0e088 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a0e08b push edx */
  push32((uint32_t)(EDX));
  /* 10a0e08c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0e08f push eax */
  push32((uint32_t)(EAX));
  /* 10a0e090 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0e093 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e094 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0e097 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e098 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e09b push eax */
  push32((uint32_t)(EAX));
  /* 10a0e09c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e09f push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e0a0 call dword ptr [0x10a342f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342f0))), 0x10a0e0a6u);
  /* 10a0e0a6 jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e0ab:;
  /* 10a0e0ab cmp dword ptr [0x10a318f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a318f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e0b2 jne 0x10a0e2cf */
  if (!C.zf) goto L_10a0e2cf;
  /* 10a0e0b8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e0bc jne 0x10a0e0c7 */
  if (!C.zf) goto L_10a0e0c7;
  /* 10a0e0be mov edx, dword ptr [0x10a318e8] */
  EDX = (r32((uint32_t)(0x10a318e8)));
  /* 10a0e0c4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10a0e0c7:;
  /* 10a0e0c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e0c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e0cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0e0ce push eax */
  push32((uint32_t)(EAX));
  /* 10a0e0cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0e0d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e0d3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10a0e0d6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0e0d8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e0da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0e0dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e0e0 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e0e1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a0e0e4 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e0e5 call dword ptr [0x10a342fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342fc))), 0x10a0e0ebu);
  /* 10a0e0eb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a0e0ee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e0f2 jne 0x10a0e0fb */
  if (!C.zf) goto L_10a0e0fb;
  /* 10a0e0f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e0f6 jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e0fb:;
  /* 10a0e0fb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0e102 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0e105 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a0e107 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e10a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a0e10c call 0x10a08d90 */
  push32(0x10a0e111u); f_10a08d90();
  /* 10a0e111 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10a0e114 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a0e117 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a0e11a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a0e11d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a0e124 jmp 0x10a0e13d */
  goto L_10a0e13d;
  /* 10a0e126 mov eax, 1 */
  EAX = (0x1u);
  /* 10a0e12b ret  */
  ESPCHK(0x10a0dfe0u, _esp0);
  ESP += 4; return;
  /* 10a0e12c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0e12f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a0e136 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a0e13d:;
  /* 10a0e13d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e141 jne 0x10a0e14a */
  if (!C.zf) goto L_10a0e14a;
  /* 10a0e143 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e145 jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e14a:;
  /* 10a0e14a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0e14d push edx */
  push32((uint32_t)(EDX));
  /* 10a0e14e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0e151 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e152 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0e155 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e156 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0e159 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e15a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0e15c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a0e15f push eax */
  push32((uint32_t)(EAX));
  /* 10a0e160 call dword ptr [0x10a342fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342fc))), 0x10a0e166u);
  /* 10a0e166 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e168 jne 0x10a0e171 */
  if (!C.zf) goto L_10a0e171;
  /* 10a0e16a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e16c jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e171:;
  /* 10a0e171 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e173 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e175 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0e178 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e179 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0e17c push edx */
  push32((uint32_t)(EDX));
  /* 10a0e17d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e180 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e181 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e184 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e185 call dword ptr [0x10a342ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342ec))), 0x10a0e18bu);
  /* 10a0e18b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a0e18e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e192 jne 0x10a0e19b */
  if (!C.zf) goto L_10a0e19b;
  /* 10a0e194 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e196 jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e19b:;
  /* 10a0e19b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e19e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0e1a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0e1a6 je 0x10a0e1eb */
  if (C.zf) goto L_10a0e1eb;
  /* 10a0e1a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e1ac je 0x10a0e1e6 */
  if (C.zf) goto L_10a0e1e6;
  /* 10a0e1ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0e1b1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e1b4 jle 0x10a0e1bd */
  if ((C.zf||C.sf!=C.of)) goto L_10a0e1bd;
  /* 10a0e1b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e1b8 jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e1bd:;
  /* 10a0e1bd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a0e1c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e1c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0e1c4 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e1c5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0e1c8 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e1c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0e1cc push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e1cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e1d0 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e1d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e1d4 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e1d5 call dword ptr [0x10a342ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342ec))), 0x10a0e1dbu);
  /* 10a0e1db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e1dd jne 0x10a0e1e6 */
  if (!C.zf) goto L_10a0e1e6;
  /* 10a0e1df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e1e1 jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e1e6:;
  /* 10a0e1e6 jmp 0x10a0e2ca */
  goto L_10a0e2ca;
L_10a0e1eb:;
  /* 10a0e1eb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0e1ee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a0e1f1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a0e1f8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0e1fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a0e1fd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e200 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a0e202 call 0x10a08d90 */
  push32(0x10a0e207u); f_10a08d90();
  /* 10a0e207 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10a0e20a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a0e20d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a0e210 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a0e213 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a0e21a jmp 0x10a0e233 */
  goto L_10a0e233;
  /* 10a0e21c mov eax, 1 */
  EAX = (0x1u);
  /* 10a0e221 ret  */
  ESPCHK(0x10a0dfe0u, _esp0);
  ESP += 4; return;
  /* 10a0e222 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0e225 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a0e22c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a0e233:;
  /* 10a0e233 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e237 jne 0x10a0e240 */
  if (!C.zf) goto L_10a0e240;
  /* 10a0e239 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e23b jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e240:;
  /* 10a0e240 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0e243 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e244 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0e247 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e248 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a0e24b push edx */
  push32((uint32_t)(EDX));
  /* 10a0e24c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a0e24f push eax */
  push32((uint32_t)(EAX));
  /* 10a0e250 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e253 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e254 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e257 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e258 call dword ptr [0x10a342ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342ec))), 0x10a0e25eu);
  /* 10a0e25e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e260 jne 0x10a0e266 */
  if (!C.zf) goto L_10a0e266;
  /* 10a0e262 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e264 jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e266:;
  /* 10a0e266 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e26a jne 0x10a0e29a */
  if (!C.zf) goto L_10a0e29a;
  /* 10a0e26c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e26e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e270 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e272 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e274 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0e277 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e278 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0e27b push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e27c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a0e281 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a0e284 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e285 call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a0e28bu);
  /* 10a0e28b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a0e28e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e292 jne 0x10a0e298 */
  if (!C.zf) goto L_10a0e298;
  /* 10a0e294 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e296 jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e298:;
  /* 10a0e298 jmp 0x10a0e2ca */
  goto L_10a0e2ca;
L_10a0e29a:;
  /* 10a0e29a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e29c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e29e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a0e2a1 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e2a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0e2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e2a6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a0e2a9 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e2aa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a0e2ad push eax */
  push32((uint32_t)(EAX));
  /* 10a0e2ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a0e2b3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a0e2b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e2b7 call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a0e2bdu);
  /* 10a0e2bd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a0e2c0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e2c4 jne 0x10a0e2ca */
  if (!C.zf) goto L_10a0e2ca;
  /* 10a0e2c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e2c8 jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e2ca:;
  /* 10a0e2ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a0e2cd jmp 0x10a0e2d1 */
  goto L_10a0e2d1;
L_10a0e2cf:;
  /* 10a0e2cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a0e2d1:;
  /* 10a0e2d1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10a0e2d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0e2d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a0e2de pop edi */
  EDI = (pop32());
  /* 10a0e2df pop esi */
  ESI = (pop32());
  /* 10a0e2e0 pop ebx */
  EBX = (pop32());
  /* 10a0e2e1 mov esp, ebp */
  ESP = (EBP);
  /* 10a0e2e3 pop ebp */
  EBP = (pop32());
  /* 10a0e2e4 ret  */
  ESPCHK(0x10a0dfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2f0 @ 0x10a0e2f0 (80 bytes, 32 insns) */
void f_10a0e2f0(void) {
  FTRACE(0x10a0e2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0e2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0e2f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0e2f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e2f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e2f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0e2fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e2ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a0e302:;
  /* 10a0e302 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0e305 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0e308 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e30b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0e30e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0e310 je 0x10a0e327 */
  if (C.zf) goto L_10a0e327;
  /* 10a0e312 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e315 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a0e318 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0e31a je 0x10a0e327 */
  if (C.zf) goto L_10a0e327;
  /* 10a0e31c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e31f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e322 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0e325 jmp 0x10a0e302 */
  goto L_10a0e302;
L_10a0e327:;
  /* 10a0e327 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e32a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a0e32d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0e32f jne 0x10a0e339 */
  if (!C.zf) goto L_10a0e339;
  /* 10a0e331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e334 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e337 jmp 0x10a0e33c */
  goto L_10a0e33c;
L_10a0e339:;
  /* 10a0e339 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10a0e33c:;
  /* 10a0e33c mov esp, ebp */
  ESP = (EBP);
  /* 10a0e33e pop ebp */
  EBP = (pop32());
  /* 10a0e33f ret  */
  ESPCHK(0x10a0e2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e340 @ 0x10a0e340 (130 bytes, 43 insns) */
void f_10a0e340(void) {
  FTRACE(0x10a0e340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0e340 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0e341 mov ebp, esp */
  EBP = (ESP);
  /* 10a0e343 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e347 cmp eax, dword ptr [0x10a331fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a331fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e34d jae 0x10a0e371 */
  if (!C.cf) goto L_10a0e371;
  /* 10a0e34f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e352 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0e355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e358 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0e35b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e35e mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0e365 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a0e36a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0e36d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0e36f jne 0x10a0e38c */
  if (!C.zf) goto L_10a0e38c;
L_10a0e371:;
  /* 10a0e371 call 0x10a0dac0 */
  push32(0x10a0e376u); f_10a0dac0();
  /* 10a0e376 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a0e37c call 0x10a0dad0 */
  push32(0x10a0e381u); f_10a0dad0();
  /* 10a0e381 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a0e387 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e38a jmp 0x10a0e3be */
  goto L_10a0e3be;
L_10a0e38c:;
  /* 10a0e38c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e38f push edx */
  push32((uint32_t)(EDX));
  /* 10a0e390 call 0x10a0f2e0 */
  push32(0x10a0e395u); f_10a0f2e0();
  /* 10a0e395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e398 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0e39b push eax */
  push32((uint32_t)(EAX));
  /* 10a0e39c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e39f push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e3a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e3a3 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e3a4 call 0x10a0e3d0 */
  push32(0x10a0e3a9u); f_10a0e3d0();
  /* 10a0e3a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e3ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0e3af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e3b2 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e3b3 call 0x10a0f370 */
  push32(0x10a0e3b8u); f_10a0f370();
  /* 10a0e3b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e3bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a0e3be:;
  /* 10a0e3be mov esp, ebp */
  ESP = (EBP);
  /* 10a0e3c0 pop ebp */
  EBP = (pop32());
  /* 10a0e3c1 ret  */
  ESPCHK(0x10a0e340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3d0 @ 0x10a0e3d0 (178 bytes, 56 insns) */
void f_10a0e3d0(void) {
  FTRACE(0x10a0e3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0e3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0e3d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0e3d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e3d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e3d9 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e3da call 0x10a0f160 */
  push32(0x10a0e3dfu); f_10a0f160();
  /* 10a0e3df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e3e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a0e3e5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e3e9 jne 0x10a0e3fe */
  if (!C.zf) goto L_10a0e3fe;
  /* 10a0e3eb call 0x10a0dac0 */
  push32(0x10a0e3f0u); f_10a0dac0();
  /* 10a0e3f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a0e3f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e3f9 jmp 0x10a0e47e */
  goto L_10a0e47e;
L_10a0e3fe:;
  /* 10a0e3fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0e401 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e402 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e404 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e407 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e408 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0e40b push eax */
  push32((uint32_t)(EAX));
  /* 10a0e40c call dword ptr [0x10a342e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342e8))), 0x10a0e412u);
  /* 10a0e412 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0e415 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e419 jne 0x10a0e426 */
  if (!C.zf) goto L_10a0e426;
  /* 10a0e41b call dword ptr [0x10a34388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34388))), 0x10a0e421u);
  /* 10a0e421 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0e424 jmp 0x10a0e42d */
  goto L_10a0e42d;
L_10a0e426:;
  /* 10a0e426 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a0e42d:;
  /* 10a0e42d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e431 je 0x10a0e444 */
  if (C.zf) goto L_10a0e444;
  /* 10a0e433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e436 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e437 call 0x10a0da20 */
  push32(0x10a0e43cu); f_10a0da20();
  /* 10a0e43c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e43f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e442 jmp 0x10a0e47e */
  goto L_10a0e47e;
L_10a0e444:;
  /* 10a0e444 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e447 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a0e44a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e44d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e450 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e453 mov ecx, dword ptr [edx*4 + 0x10a330c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10a330c0)));
  /* 10a0e45a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10a0e45e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10a0e461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e464 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0e467 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e46a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0e46d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e470 mov eax, dword ptr [eax*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a0e477 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10a0e47b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a0e47e:;
  /* 10a0e47e mov esp, ebp */
  ESP = (EBP);
  /* 10a0e480 pop ebp */
  EBP = (pop32());
  /* 10a0e481 ret  */
  ESPCHK(0x10a0e3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e490 @ 0x10a0e490 (130 bytes, 43 insns) */
void f_10a0e490(void) {
  FTRACE(0x10a0e490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0e490 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0e491 mov ebp, esp */
  EBP = (ESP);
  /* 10a0e493 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e497 cmp eax, dword ptr [0x10a331fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a331fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e49d jae 0x10a0e4c1 */
  if (!C.cf) goto L_10a0e4c1;
  /* 10a0e49f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e4a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0e4a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e4a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0e4ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e4ae mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0e4b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a0e4ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0e4bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0e4bf jne 0x10a0e4dc */
  if (!C.zf) goto L_10a0e4dc;
L_10a0e4c1:;
  /* 10a0e4c1 call 0x10a0dac0 */
  push32(0x10a0e4c6u); f_10a0dac0();
  /* 10a0e4c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a0e4cc call 0x10a0dad0 */
  push32(0x10a0e4d1u); f_10a0dad0();
  /* 10a0e4d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a0e4d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e4da jmp 0x10a0e50e */
  goto L_10a0e50e;
L_10a0e4dc:;
  /* 10a0e4dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e4df push edx */
  push32((uint32_t)(EDX));
  /* 10a0e4e0 call 0x10a0f2e0 */
  push32(0x10a0e4e5u); f_10a0f2e0();
  /* 10a0e4e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e4e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0e4eb push eax */
  push32((uint32_t)(EAX));
  /* 10a0e4ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e4ef push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e4f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e4f3 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e4f4 call 0x10a0e520 */
  push32(0x10a0e4f9u); f_10a0e520();
  /* 10a0e4f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e4fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0e4ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e502 push eax */
  push32((uint32_t)(EAX));
  /* 10a0e503 call 0x10a0f370 */
  push32(0x10a0e508u); f_10a0f370();
  /* 10a0e508 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e50b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a0e50e:;
  /* 10a0e50e mov esp, ebp */
  ESP = (EBP);
  /* 10a0e510 pop ebp */
  EBP = (pop32());
  /* 10a0e511 ret  */
  ESPCHK(0x10a0e490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x10a0e520 (627 bytes, 182 insns) */
void f_10a0e520(void) {
  FTRACE(0x10a0e520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0e520 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0e521 mov ebp, esp */
  EBP = (ESP);
  /* 10a0e523 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e529 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a0e530 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0e533 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10a0e539 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e53d jne 0x10a0e546 */
  if (!C.zf) goto L_10a0e546;
  /* 10a0e53f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e541 jmp 0x10a0e78f */
  goto L_10a0e78f;
L_10a0e546:;
  /* 10a0e546 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e549 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0e54c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e54f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0e552 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e555 mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0e55c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a0e561 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0e564 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0e566 je 0x10a0e578 */
  if (C.zf) goto L_10a0e578;
  /* 10a0e568 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0e56a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e56c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e56f push edx */
  push32((uint32_t)(EDX));
  /* 10a0e570 call 0x10a0e3d0 */
  push32(0x10a0e575u); f_10a0e3d0();
  /* 10a0e575 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0e578:;
  /* 10a0e578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e57b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0e57e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e581 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0e584 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e587 mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a0e58e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10a0e593 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e59a je 0x10a0e6ac */
  if (C.zf) goto L_10a0e6ac;
  /* 10a0e5a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e5a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a0e5a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10a0e5ad:;
  /* 10a0e5ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e5b0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e5b3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e5b6 jae 0x10a0e6aa */
  if (!C.cf) goto L_10a0e6aa;
  /* 10a0e5bc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10a0e5c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a0e5c5:;
  /* 10a0e5c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0e5c8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10a0e5ce sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e5d0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e5d6 jge 0x10a0e637 */
  if ((C.sf==C.of)) goto L_10a0e637;
  /* 10a0e5d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e5db sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e5de cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e5e1 jae 0x10a0e637 */
  if (!C.cf) goto L_10a0e637;
  /* 10a0e5e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e5e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a0e5e8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10a0e5ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e5f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e5f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0e5f7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10a0e5fe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e601 jne 0x10a0e621 */
  if (!C.zf) goto L_10a0e621;
  /* 10a0e603 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10a0e609 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e60c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10a0e612 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0e615 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10a0e618 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0e61b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e61e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a0e621:;
  /* 10a0e621 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0e624 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10a0e62a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10a0e62c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0e62f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e632 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a0e635 jmp 0x10a0e5c5 */
  goto L_10a0e5c5;
L_10a0e637:;
  /* 10a0e637 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e639 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10a0e63f push edx */
  push32((uint32_t)(EDX));
  /* 10a0e640 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0e643 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10a0e649 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e64b push eax */
  push32((uint32_t)(EAX));
  /* 10a0e64c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10a0e652 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e656 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0e659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e65c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0e65f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e662 mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a0e669 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10a0e66c push eax */
  push32((uint32_t)(EAX));
  /* 10a0e66d call dword ptr [0x10a34348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34348))), 0x10a0e673u);
  /* 10a0e673 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e675 je 0x10a0e69a */
  if (C.zf) goto L_10a0e69a;
  /* 10a0e677 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0e67a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e680 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a0e683 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0e686 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10a0e68c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0e68e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e694 jge 0x10a0e698 */
  if ((C.sf==C.of)) goto L_10a0e698;
  /* 10a0e696 jmp 0x10a0e6aa */
  goto L_10a0e6aa;
L_10a0e698:;
  /* 10a0e698 jmp 0x10a0e6a5 */
  goto L_10a0e6a5;
L_10a0e69a:;
  /* 10a0e69a call dword ptr [0x10a34388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34388))), 0x10a0e6a0u);
  /* 10a0e6a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a0e6a3 jmp 0x10a0e6aa */
  goto L_10a0e6aa;
L_10a0e6a5:;
  /* 10a0e6a5 jmp 0x10a0e5ad */
  goto L_10a0e5ad;
L_10a0e6aa:;
  /* 10a0e6aa jmp 0x10a0e6fc */
  goto L_10a0e6fc;
L_10a0e6ac:;
  /* 10a0e6ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e6ae lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10a0e6b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e6b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0e6b8 push edx */
  push32((uint32_t)(EDX));
  /* 10a0e6b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e6bc push eax */
  push32((uint32_t)(EAX));
  /* 10a0e6bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e6c0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0e6c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e6c6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0e6c9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e6cc mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0e6d3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10a0e6d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e6d7 call dword ptr [0x10a34348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34348))), 0x10a0e6ddu);
  /* 10a0e6dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e6df je 0x10a0e6f3 */
  if (C.zf) goto L_10a0e6f3;
  /* 10a0e6e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a0e6e8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10a0e6ee mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a0e6f1 jmp 0x10a0e6fc */
  goto L_10a0e6fc;
L_10a0e6f3:;
  /* 10a0e6f3 call dword ptr [0x10a34388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34388))), 0x10a0e6f9u);
  /* 10a0e6f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a0e6fc:;
  /* 10a0e6fc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e700 jne 0x10a0e786 */
  if (!C.zf) goto L_10a0e786;
  /* 10a0e706 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e70a je 0x10a0e73a */
  if (C.zf) goto L_10a0e73a;
  /* 10a0e70c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e710 jne 0x10a0e729 */
  if (!C.zf) goto L_10a0e729;
  /* 10a0e712 call 0x10a0dac0 */
  push32(0x10a0e717u); f_10a0dac0();
  /* 10a0e717 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a0e71d call 0x10a0dad0 */
  push32(0x10a0e722u); f_10a0dad0();
  /* 10a0e722 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0e725 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a0e727 jmp 0x10a0e735 */
  goto L_10a0e735;
L_10a0e729:;
  /* 10a0e729 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0e72c push edx */
  push32((uint32_t)(EDX));
  /* 10a0e72d call 0x10a0da20 */
  push32(0x10a0e732u); f_10a0da20();
  /* 10a0e732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0e735:;
  /* 10a0e735 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e738 jmp 0x10a0e78f */
  goto L_10a0e78f;
L_10a0e73a:;
  /* 10a0e73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e73d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0e740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e743 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0e746 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e749 mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a0e750 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10a0e755 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e75a je 0x10a0e76b */
  if (C.zf) goto L_10a0e76b;
  /* 10a0e75c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0e75f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a0e762 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e765 jne 0x10a0e76b */
  if (!C.zf) goto L_10a0e76b;
  /* 10a0e767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e769 jmp 0x10a0e78f */
  goto L_10a0e78f;
L_10a0e76b:;
  /* 10a0e76b call 0x10a0dac0 */
  push32(0x10a0e770u); f_10a0dac0();
  /* 10a0e770 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10a0e776 call 0x10a0dad0 */
  push32(0x10a0e77bu); f_10a0dad0();
  /* 10a0e77b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a0e781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e784 jmp 0x10a0e78f */
  goto L_10a0e78f;
L_10a0e786:;
  /* 10a0e786 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0e789 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10a0e78f:;
  /* 10a0e78f mov esp, ebp */
  ESP = (EBP);
  /* 10a0e791 pop ebp */
  EBP = (pop32());
  /* 10a0e792 ret  */
  ESPCHK(0x10a0e520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7a0 @ 0x10a0e7a0 (199 bytes, 68 insns) */
void f_10a0e7a0(void) {
  FTRACE(0x10a0e7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0e7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0e7a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0e7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e7a4 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0e7a5 push esi */
  push32((uint32_t)(ESI));
  /* 10a0e7a6 push edi */
  push32((uint32_t)(EDI));
L_10a0e7a7:;
  /* 10a0e7a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e7ab jne 0x10a0e7cb */
  if (!C.zf) goto L_10a0e7cb;
  /* 10a0e7ad push 0x10a2d16c */
  push32((uint32_t)(0x10a2d16cu));
  /* 10a0e7b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0e7b4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10a0e7b6 push 0x10a2d238 */
  push32((uint32_t)(0x10a2d238u));
  /* 10a0e7bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0e7bd call 0x10a04cb0 */
  push32(0x10a0e7c2u); f_10a04cb0();
  /* 10a0e7c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e7c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e7c8 jne 0x10a0e7cb */
  if (!C.zf) goto L_10a0e7cb;
  /* 10a0e7ca int3  */
  x86_unimpl("int3 @ 0x10a0e7ca");
L_10a0e7cb:;
  /* 10a0e7cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e7cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e7cf jne 0x10a0e7a7 */
  if (!C.zf) goto L_10a0e7a7;
  /* 10a0e7d1 mov ecx, dword ptr [0x10a318f4] */
  ECX = (r32((uint32_t)(0x10a318f4)));
  /* 10a0e7d7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e7da mov dword ptr [0x10a318f4], ecx */
  w32((uint32_t)(0x10a318f4), (ECX));
  /* 10a0e7e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e7e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0e7e6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10a0e7e8 push 0x10a2d238 */
  push32((uint32_t)(0x10a2d238u));
  /* 10a0e7ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0e7ef push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a0e7f4 call 0x10a05bf0 */
  push32(0x10a0e7f9u); f_10a05bf0();
  /* 10a0e7f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e7fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e7ff mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10a0e802 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e805 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e809 je 0x10a0e826 */
  if (C.zf) goto L_10a0e826;
  /* 10a0e80b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e80e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0e811 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0e814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e817 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10a0e81a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e81d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10a0e824 jmp 0x10a0e84b */
  goto L_10a0e84b;
L_10a0e826:;
  /* 10a0e826 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e829 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0e82c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0e82f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e832 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a0e835 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e838 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e83b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e83e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a0e841 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e844 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10a0e84b:;
  /* 10a0e84b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e84e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e851 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a0e854 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a0e856 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e859 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a0e860 pop edi */
  EDI = (pop32());
  /* 10a0e861 pop esi */
  ESI = (pop32());
  /* 10a0e862 pop ebx */
  EBX = (pop32());
  /* 10a0e863 mov esp, ebp */
  ESP = (EBP);
  /* 10a0e865 pop ebp */
  EBP = (pop32());
  /* 10a0e866 ret  */
  ESPCHK(0x10a0e7a0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10a0e870 (50 bytes, 17 insns) */
void f_10a0e870(void) {
  FTRACE(0x10a0e870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0e870 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0e871 mov ebp, esp */
  EBP = (ESP);
  /* 10a0e873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e876 cmp eax, dword ptr [0x10a331fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a331fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e87c jb 0x10a0e882 */
  if (C.cf) goto L_10a0e882;
  /* 10a0e87e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0e880 jmp 0x10a0e8a0 */
  goto L_10a0e8a0;
L_10a0e882:;
  /* 10a0e882 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e885 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0e888 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0e88b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0e88e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e891 mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0e898 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a0e89d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10a0e8a0:;
  /* 10a0e8a0 pop ebp */
  EBP = (pop32());
  /* 10a0e8a1 ret  */
  ESPCHK(0x10a0e870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8b0 @ 0x10a0e8b0 (300 bytes, 80 insns) */
void f_10a0e8b0(void) {
  FTRACE(0x10a0e8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0e8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0e8b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0e8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e8b4 cmp dword ptr [0x10a32dc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a32dc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e8bb jne 0x10a0e8c9 */
  if (!C.zf) goto L_10a0e8c9;
  /* 10a0e8bd mov dword ptr [0x10a32dc0], 0x200 */
  w32((uint32_t)(0x10a32dc0), (0x200u));
  /* 10a0e8c7 jmp 0x10a0e8dc */
  goto L_10a0e8dc;
L_10a0e8c9:;
  /* 10a0e8c9 cmp dword ptr [0x10a32dc0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10a32dc0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e8d0 jge 0x10a0e8dc */
  if ((C.sf==C.of)) goto L_10a0e8dc;
  /* 10a0e8d2 mov dword ptr [0x10a32dc0], 0x14 */
  w32((uint32_t)(0x10a32dc0), (0x14u));
L_10a0e8dc:;
  /* 10a0e8dc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10a0e8e1 push 0x10a2d244 */
  push32((uint32_t)(0x10a2d244u));
  /* 10a0e8e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0e8e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a0e8ea mov eax, dword ptr [0x10a32dc0] */
  EAX = (r32((uint32_t)(0x10a32dc0)));
  /* 10a0e8ef push eax */
  push32((uint32_t)(EAX));
  /* 10a0e8f0 call 0x10a06000 */
  push32(0x10a0e8f5u); f_10a06000();
  /* 10a0e8f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e8f8 mov dword ptr [0x10a31a68], eax */
  w32((uint32_t)(0x10a31a68), (EAX));
  /* 10a0e8fd cmp dword ptr [0x10a31a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e904 jne 0x10a0e945 */
  if (!C.zf) goto L_10a0e945;
  /* 10a0e906 mov dword ptr [0x10a32dc0], 0x14 */
  w32((uint32_t)(0x10a32dc0), (0x14u));
  /* 10a0e910 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10a0e915 push 0x10a2d244 */
  push32((uint32_t)(0x10a2d244u));
  /* 10a0e91a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0e91c push 4 */
  push32((uint32_t)(0x4u));
  /* 10a0e91e mov ecx, dword ptr [0x10a32dc0] */
  ECX = (r32((uint32_t)(0x10a32dc0)));
  /* 10a0e924 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0e925 call 0x10a06000 */
  push32(0x10a0e92au); f_10a06000();
  /* 10a0e92a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e92d mov dword ptr [0x10a31a68], eax */
  w32((uint32_t)(0x10a31a68), (EAX));
  /* 10a0e932 cmp dword ptr [0x10a31a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e939 jne 0x10a0e945 */
  if (!C.zf) goto L_10a0e945;
  /* 10a0e93b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10a0e93d call 0x10a04b60 */
  push32(0x10a0e942u); f_10a04b60();
  /* 10a0e942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0e945:;
  /* 10a0e945 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0e94c jmp 0x10a0e957 */
  goto L_10a0e957;
L_10a0e94e:;
  /* 10a0e94e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e951 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e954 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a0e957:;
  /* 10a0e957 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e95b jge 0x10a0e976 */
  if ((C.sf==C.of)) goto L_10a0e976;
  /* 10a0e95d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e960 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0e963 add eax, 0x10a30120 */
  { uint32_t _a=(EAX),_b=(0x10a30120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e968 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e96b mov edx, dword ptr [0x10a31a68] */
  EDX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0e971 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10a0e974 jmp 0x10a0e94e */
  goto L_10a0e94e;
L_10a0e976:;
  /* 10a0e976 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0e97d jmp 0x10a0e988 */
  goto L_10a0e988;
L_10a0e97f:;
  /* 10a0e97f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e982 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0e985 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a0e988:;
  /* 10a0e988 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e98c jge 0x10a0e9d8 */
  if ((C.sf==C.of)) goto L_10a0e9d8;
  /* 10a0e98e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e991 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0e994 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e997 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0e99a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e99d mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0e9a4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e9a8 je 0x10a0e9c6 */
  if (C.zf) goto L_10a0e9c6;
  /* 10a0e9aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e9ad sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0e9b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e9b3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0e9b6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0e9b9 mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0e9c0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0e9c4 jne 0x10a0e9d6 */
  if (!C.zf) goto L_10a0e9d6;
L_10a0e9c6:;
  /* 10a0e9c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0e9c9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0e9cc mov dword ptr [ecx + 0x10a30130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10a30130), (0xffffffffu));
L_10a0e9d6:;
  /* 10a0e9d6 jmp 0x10a0e97f */
  goto L_10a0e97f;
L_10a0e9d8:;
  /* 10a0e9d8 mov esp, ebp */
  ESP = (EBP);
  /* 10a0e9da pop ebp */
  EBP = (pop32());
  /* 10a0e9db ret  */
  ESPCHK(0x10a0e8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9e0 @ 0x10a0e9e0 (26 bytes, 9 insns) */
void f_10a0e9e0(void) {
  FTRACE(0x10a0e9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0e9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0e9e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0e9e3 call 0x10a0f5e0 */
  push32(0x10a0e9e8u); f_10a0f5e0();
  /* 10a0e9e8 movsx eax, byte ptr [0x10a31710] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10a31710))));
  /* 10a0e9ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0e9f1 je 0x10a0e9f8 */
  if (C.zf) goto L_10a0e9f8;
  /* 10a0e9f3 call 0x10a0f3a0 */
  push32(0x10a0e9f8u); f_10a0f3a0();
L_10a0e9f8:;
  /* 10a0e9f8 pop ebp */
  EBP = (pop32());
  /* 10a0e9f9 ret  */
  ESPCHK(0x10a0e9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea00 @ 0x10a0ea00 (61 bytes, 20 insns) */
void f_10a0ea00(void) {
  FTRACE(0x10a0ea00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0ea00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0ea01 mov ebp, esp */
  EBP = (ESP);
  /* 10a0ea03 cmp dword ptr [ebp + 8], 0x10a30120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10a30120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ea0a jb 0x10a0ea2e */
  if (C.cf) goto L_10a0ea2e;
  /* 10a0ea0c cmp dword ptr [ebp + 8], 0x10a30380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10a30380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ea13 ja 0x10a0ea2e */
  if ((!C.cf&&!C.zf)) goto L_10a0ea2e;
  /* 10a0ea15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ea18 sub eax, 0x10a30120 */
  { uint32_t _a=(EAX),_b=(0x10a30120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ea1d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0ea20 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ea23 push eax */
  push32((uint32_t)(EAX));
  /* 10a0ea24 call 0x10a095f0 */
  push32(0x10a0ea29u); f_10a095f0();
  /* 10a0ea29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ea2c jmp 0x10a0ea3b */
  goto L_10a0ea3b;
L_10a0ea2e:;
  /* 10a0ea2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ea31 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ea34 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0ea35 call dword ptr [0x10a34324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34324))), 0x10a0ea3bu);
L_10a0ea3b:;
  /* 10a0ea3b pop ebp */
  EBP = (pop32());
  /* 10a0ea3c ret  */
  ESPCHK(0x10a0ea00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea40 @ 0x10a0ea40 (41 bytes, 16 insns) */
void f_10a0ea40(void) {
  FTRACE(0x10a0ea40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0ea40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0ea41 mov ebp, esp */
  EBP = (ESP);
  /* 10a0ea43 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ea47 jge 0x10a0ea5a */
  if ((C.sf==C.of)) goto L_10a0ea5a;
  /* 10a0ea49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ea4c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ea4f push eax */
  push32((uint32_t)(EAX));
  /* 10a0ea50 call 0x10a095f0 */
  push32(0x10a0ea55u); f_10a095f0();
  /* 10a0ea55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ea58 jmp 0x10a0ea67 */
  goto L_10a0ea67;
L_10a0ea5a:;
  /* 10a0ea5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0ea5d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ea60 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0ea61 call dword ptr [0x10a34324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34324))), 0x10a0ea67u);
L_10a0ea67:;
  /* 10a0ea67 pop ebp */
  EBP = (pop32());
  /* 10a0ea68 ret  */
  ESPCHK(0x10a0ea40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea70 @ 0x10a0ea70 (61 bytes, 20 insns) */
void f_10a0ea70(void) {
  FTRACE(0x10a0ea70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0ea70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0ea71 mov ebp, esp */
  EBP = (ESP);
  /* 10a0ea73 cmp dword ptr [ebp + 8], 0x10a30120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10a30120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ea7a jb 0x10a0ea9e */
  if (C.cf) goto L_10a0ea9e;
  /* 10a0ea7c cmp dword ptr [ebp + 8], 0x10a30380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10a30380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ea83 ja 0x10a0ea9e */
  if ((!C.cf&&!C.zf)) goto L_10a0ea9e;
  /* 10a0ea85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ea88 sub eax, 0x10a30120 */
  { uint32_t _a=(EAX),_b=(0x10a30120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ea8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0ea90 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ea93 push eax */
  push32((uint32_t)(EAX));
  /* 10a0ea94 call 0x10a09690 */
  push32(0x10a0ea99u); f_10a09690();
  /* 10a0ea99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ea9c jmp 0x10a0eaab */
  goto L_10a0eaab;
L_10a0ea9e:;
  /* 10a0ea9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0eaa1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0eaa4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0eaa5 call dword ptr [0x10a34320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34320))), 0x10a0eaabu);
L_10a0eaab:;
  /* 10a0eaab pop ebp */
  EBP = (pop32());
  /* 10a0eaac ret  */
  ESPCHK(0x10a0ea70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eab0 @ 0x10a0eab0 (41 bytes, 16 insns) */
void f_10a0eab0(void) {
  FTRACE(0x10a0eab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0eab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0eab1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0eab3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0eab7 jge 0x10a0eaca */
  if ((C.sf==C.of)) goto L_10a0eaca;
  /* 10a0eab9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0eabc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0eabf push eax */
  push32((uint32_t)(EAX));
  /* 10a0eac0 call 0x10a09690 */
  push32(0x10a0eac5u); f_10a09690();
  /* 10a0eac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0eac8 jmp 0x10a0ead7 */
  goto L_10a0ead7;
L_10a0eaca:;
  /* 10a0eaca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0eacd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ead0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0ead1 call dword ptr [0x10a34320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34320))), 0x10a0ead7u);
L_10a0ead7:;
  /* 10a0ead7 pop ebp */
  EBP = (pop32());
  /* 10a0ead8 ret  */
  ESPCHK(0x10a0eab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eae0 @ 0x10a0eae0 (119 bytes, 34 insns) */
void f_10a0eae0(void) {
  FTRACE(0x10a0eae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0eae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0eae1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0eae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0eae6 push 0x10a31a64 */
  push32((uint32_t)(0x10a31a64u));
  /* 10a0eaeb call dword ptr [0x10a3435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3435c))), 0x10a0eaf1u);
  /* 10a0eaf1 cmp dword ptr [0x10a31a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0eaf8 je 0x10a0eb18 */
  if (C.zf) goto L_10a0eb18;
  /* 10a0eafa push 0x10a31a64 */
  push32((uint32_t)(0x10a31a64u));
  /* 10a0eaff call dword ptr [0x10a3434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3434c))), 0x10a0eb05u);
  /* 10a0eb05 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a0eb07 call 0x10a095f0 */
  push32(0x10a0eb0cu); f_10a095f0();
  /* 10a0eb0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0eb0f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a0eb16 jmp 0x10a0eb1f */
  goto L_10a0eb1f;
L_10a0eb18:;
  /* 10a0eb18 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a0eb1f:;
  /* 10a0eb1f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10a0eb23 push eax */
  push32((uint32_t)(EAX));
  /* 10a0eb24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0eb27 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0eb28 call 0x10a0eb60 */
  push32(0x10a0eb2du); f_10a0eb60();
  /* 10a0eb2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0eb30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0eb33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0eb37 je 0x10a0eb45 */
  if (C.zf) goto L_10a0eb45;
  /* 10a0eb39 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a0eb3b call 0x10a09690 */
  push32(0x10a0eb40u); f_10a09690();
  /* 10a0eb40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0eb43 jmp 0x10a0eb50 */
  goto L_10a0eb50;
L_10a0eb45:;
  /* 10a0eb45 push 0x10a31a64 */
  push32((uint32_t)(0x10a31a64u));
  /* 10a0eb4a call dword ptr [0x10a3434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3434c))), 0x10a0eb50u);
L_10a0eb50:;
  /* 10a0eb50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0eb53 mov esp, ebp */
  ESP = (EBP);
  /* 10a0eb55 pop ebp */
  EBP = (pop32());
  /* 10a0eb56 ret  */
  ESPCHK(0x10a0eae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb60 @ 0x10a0eb60 (160 bytes, 50 insns) */
void f_10a0eb60(void) {
  FTRACE(0x10a0eb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0eb60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0eb61 mov ebp, esp */
  EBP = (ESP);
  /* 10a0eb63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0eb66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0eb6a jne 0x10a0eb73 */
  if (!C.zf) goto L_10a0eb73;
  /* 10a0eb6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0eb6e jmp 0x10a0ebfc */
  goto L_10a0ebfc;
L_10a0eb73:;
  /* 10a0eb73 cmp dword ptr [0x10a318d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0eb7a jne 0x10a0ebaa */
  if (!C.zf) goto L_10a0ebaa;
  /* 10a0eb7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0eb7f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0eb84 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0eb89 jle 0x10a0eb9b */
  if ((C.zf||C.sf!=C.of)) goto L_10a0eb9b;
  /* 10a0eb8b call 0x10a0dac0 */
  push32(0x10a0eb90u); f_10a0dac0();
  /* 10a0eb90 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10a0eb96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0eb99 jmp 0x10a0ebfc */
  goto L_10a0ebfc;
L_10a0eb9b:;
  /* 10a0eb9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0eb9e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10a0eba1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10a0eba3 mov eax, 1 */
  EAX = (0x1u);
  /* 10a0eba8 jmp 0x10a0ebfc */
  goto L_10a0ebfc;
L_10a0ebaa:;
  /* 10a0ebaa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a0ebb1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a0ebb4 push eax */
  push32((uint32_t)(EAX));
  /* 10a0ebb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0ebb7 mov ecx, dword ptr [0x10a2fea4] */
  ECX = (r32((uint32_t)(0x10a2fea4)));
  /* 10a0ebbd push ecx */
  push32((uint32_t)(ECX));
  /* 10a0ebbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ebc1 push edx */
  push32((uint32_t)(EDX));
  /* 10a0ebc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0ebc4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10a0ebc7 push eax */
  push32((uint32_t)(EAX));
  /* 10a0ebc8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a0ebcd mov ecx, dword ptr [0x10a318e8] */
  ECX = (r32((uint32_t)(0x10a318e8)));
  /* 10a0ebd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0ebd4 call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a0ebdau);
  /* 10a0ebda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0ebdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ebe1 je 0x10a0ebe9 */
  if (C.zf) goto L_10a0ebe9;
  /* 10a0ebe3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ebe7 je 0x10a0ebf9 */
  if (C.zf) goto L_10a0ebf9;
L_10a0ebe9:;
  /* 10a0ebe9 call 0x10a0dac0 */
  push32(0x10a0ebeeu); f_10a0dac0();
  /* 10a0ebee mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10a0ebf4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ebf7 jmp 0x10a0ebfc */
  goto L_10a0ebfc;
L_10a0ebf9:;
  /* 10a0ebf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a0ebfc:;
  /* 10a0ebfc mov esp, ebp */
  ESP = (EBP);
  /* 10a0ebfe pop ebp */
  EBP = (pop32());
  /* 10a0ebff ret  */
  ESPCHK(0x10a0eb60u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10a0ec00 (32 bytes, 18 insns) */
void f_10a0ec00(void) {
  FTRACE(0x10a0ec00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0ec00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0ec01 mov ebp, esp */
  EBP = (ESP);
  /* 10a0ec03 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0ec04 push esi */
  push32((uint32_t)(ESI));
  /* 10a0ec05 push edi */
  push32((uint32_t)(EDI));
  /* 10a0ec06 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0ec07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0ec09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0ec0b push 0x10a0ec18 */
  push32((uint32_t)(0x10a0ec18u));
  /* 10a0ec10 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10a0ec13 call 0x10a1634c */
  push32(0x10a0ec18u); f_10a1634c();
  /* 10a0ec18 pop ebp */
  EBP = (pop32());
  /* 10a0ec19 pop edi */
  EDI = (pop32());
  /* 10a0ec1a pop esi */
  ESI = (pop32());
  /* 10a0ec1b pop ebx */
  EBX = (pop32());
  /* 10a0ec1c mov esp, ebp */
  ESP = (EBP);
  /* 10a0ec1e pop ebp */
  EBP = (pop32());
  /* 10a0ec1f ret  */
  ESPCHK(0x10a0ec00u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10a0ec42 (104 bytes, 33 insns) */
void f_10a0ec42(void) {
  FTRACE(0x10a0ec42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0ec42 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0ec43 push esi */
  push32((uint32_t)(ESI));
  /* 10a0ec44 push edi */
  push32((uint32_t)(EDI));
  /* 10a0ec45 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a0ec49 push eax */
  push32((uint32_t)(EAX));
  /* 10a0ec4a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10a0ec4c push 0x10a0ec20 */
  push32((uint32_t)(0x10a0ec20u));
  /* 10a0ec51 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10a0ec58 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10a0ec5f:;
  /* 10a0ec5f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10a0ec63 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0ec66 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0ec69 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ec6c je 0x10a0ec9c */
  if (C.zf) goto L_10a0ec9c;
  /* 10a0ec6e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ec72 je 0x10a0ec9c */
  if (C.zf) goto L_10a0ec9c;
  /* 10a0ec74 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10a0ec77 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10a0ec7a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10a0ec7e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10a0ec81 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ec86 jne 0x10a0ec9a */
  if (!C.zf) goto L_10a0ec9a;
  /* 10a0ec88 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10a0ec8d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10a0ec91 call 0x10a0ecd6 */
  push32(0x10a0ec96u); f_10a0ecd6();
  /* 10a0ec96 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10a0ec9au);
L_10a0ec9a:;
  /* 10a0ec9a jmp 0x10a0ec5f */
  goto L_10a0ec5f;
L_10a0ec9c:;
  /* 10a0ec9c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10a0eca3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0eca6 pop edi */
  EDI = (pop32());
  /* 10a0eca7 pop esi */
  ESI = (pop32());
  /* 10a0eca8 pop ebx */
  EBX = (pop32());
  /* 10a0eca9 ret  */
  ESPCHK(0x10a0ec42u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecd6 @ 0x10a0ecd6 (24 bytes, 10 insns) */
void f_10a0ecd6(void) {
  FTRACE(0x10a0ecd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0ecd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0ecd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0ecd8 mov ebx, 0x10a303b8 */
  EBX = (0x10a303b8u);
  /* 10a0ecdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ece0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10a0ece3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10a0ece6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10a0ece9 pop ecx */
  ECX = (pop32());
  /* 10a0ecea pop ebx */
  EBX = (pop32());
  /* 10a0eceb ret 4 */
  ESPCHK(0x10a0ecd6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000edb5 @ 0x10a0edb5 (27 bytes, 11 insns) */
void f_10a0edb5(void) {
  FTRACE(0x10a0edb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0edb5 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0edb6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a0edba mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10a0edbc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a0edbf push eax */
  push32((uint32_t)(EAX));
  /* 10a0edc0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a0edc3 push eax */
  push32((uint32_t)(EAX));
  /* 10a0edc4 call 0x10a0ec42 */
  push32(0x10a0edc9u); f_10a0ec42();
  /* 10a0edc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0edcc pop ebp */
  EBP = (pop32());
  /* 10a0edcd ret 4 */
  ESPCHK(0x10a0edb5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000edd0 @ 0x10a0edd0 (482 bytes, 138 insns) */
void f_10a0edd0(void) {
  FTRACE(0x10a0edd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0edd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0edd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0edd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0edd6 push esi */
  push32((uint32_t)(ESI));
  /* 10a0edd7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10a0edde push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10a0ede0 call 0x10a095f0 */
  push32(0x10a0ede5u); f_10a095f0();
  /* 10a0ede5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ede8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a0edef jmp 0x10a0edfa */
  goto L_10a0edfa;
L_10a0edf1:;
  /* 10a0edf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0edf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0edf7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a0edfa:;
  /* 10a0edfa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0edfe jge 0x10a0efa0 */
  if ((C.sf==C.of)) goto L_10a0efa0;
  /* 10a0ee04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ee07 cmp dword ptr [ecx*4 + 0x10a330c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10a330c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ee0f je 0x10a0ef06 */
  if (C.zf) goto L_10a0ef06;
  /* 10a0ee15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ee18 mov eax, dword ptr [edx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a330c0)));
  /* 10a0ee1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0ee22 jmp 0x10a0ee2d */
  goto L_10a0ee2d;
L_10a0ee24:;
  /* 10a0ee24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ee27 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ee2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a0ee2d:;
  /* 10a0ee2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ee30 mov eax, dword ptr [edx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a330c0)));
  /* 10a0ee37 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ee3c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ee3f jae 0x10a0eef6 */
  if (!C.cf) goto L_10a0eef6;
  /* 10a0ee45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ee48 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0ee4c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0ee4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0ee51 jne 0x10a0eef1 */
  if (!C.zf) goto L_10a0eef1;
  /* 10a0ee57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ee5a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ee5e jne 0x10a0ee99 */
  if (!C.zf) goto L_10a0ee99;
  /* 10a0ee60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a0ee62 call 0x10a095f0 */
  push32(0x10a0ee67u); f_10a095f0();
  /* 10a0ee67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ee6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ee6d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ee71 jne 0x10a0ee8f */
  if (!C.zf) goto L_10a0ee8f;
  /* 10a0ee73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ee76 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ee79 push edx */
  push32((uint32_t)(EDX));
  /* 10a0ee7a call dword ptr [0x10a34328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34328))), 0x10a0ee80u);
  /* 10a0ee80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ee83 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0ee86 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ee89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ee8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10a0ee8f:;
  /* 10a0ee8f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a0ee91 call 0x10a09690 */
  push32(0x10a0ee96u); f_10a09690();
  /* 10a0ee96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0ee99:;
  /* 10a0ee99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ee9c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ee9f push eax */
  push32((uint32_t)(EAX));
  /* 10a0eea0 call dword ptr [0x10a34324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34324))), 0x10a0eea6u);
  /* 10a0eea6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0eea9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a0eead and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0eeb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0eeb2 je 0x10a0eec6 */
  if (C.zf) goto L_10a0eec6;
  /* 10a0eeb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0eeb7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0eeba push eax */
  push32((uint32_t)(EAX));
  /* 10a0eebb call dword ptr [0x10a34320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34320))), 0x10a0eec1u);
  /* 10a0eec1 jmp 0x10a0ee24 */
  goto L_10a0ee24;
L_10a0eec6:;
  /* 10a0eec6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0eec9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a0eecf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0eed2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0eed5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0eed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0eedb sub eax, dword ptr [edx*4 + 0x10a330c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10a330c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0eee2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a0eee3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10a0eee8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a0eeea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0eeec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a0eeef jmp 0x10a0eef6 */
  goto L_10a0eef6;
L_10a0eef1:;
  /* 10a0eef1 jmp 0x10a0ee24 */
  goto L_10a0ee24;
L_10a0eef6:;
  /* 10a0eef6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0eefa je 0x10a0ef01 */
  if (C.zf) goto L_10a0ef01;
  /* 10a0eefc jmp 0x10a0efa0 */
  goto L_10a0efa0;
L_10a0ef01:;
  /* 10a0ef01 jmp 0x10a0ef9b */
  goto L_10a0ef9b;
L_10a0ef06:;
  /* 10a0ef06 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10a0ef08 push 0x10a2d24c */
  push32((uint32_t)(0x10a2d24cu));
  /* 10a0ef0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0ef0f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10a0ef14 call 0x10a05bf0 */
  push32(0x10a0ef19u); f_10a05bf0();
  /* 10a0ef19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ef1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0ef1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ef23 je 0x10a0ef99 */
  if (C.zf) goto L_10a0ef99;
  /* 10a0ef25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ef28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ef2b mov dword ptr [eax*4 + 0x10a330c0], ecx */
  w32((uint32_t)(EAX*4 + 0x10a330c0), (ECX));
  /* 10a0ef32 mov edx, dword ptr [0x10a331fc] */
  EDX = (r32((uint32_t)(0x10a331fc)));
  /* 10a0ef38 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ef3b mov dword ptr [0x10a331fc], edx */
  w32((uint32_t)(0x10a331fc), (EDX));
  /* 10a0ef41 jmp 0x10a0ef4c */
  goto L_10a0ef4c;
L_10a0ef43:;
  /* 10a0ef43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ef46 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ef49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a0ef4c:;
  /* 10a0ef4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ef4f mov edx, dword ptr [ecx*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0ef56 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ef5c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ef5f jae 0x10a0ef84 */
  if (!C.cf) goto L_10a0ef84;
  /* 10a0ef61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ef64 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a0ef68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ef6b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a0ef71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ef74 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10a0ef78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ef7b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a0ef82 jmp 0x10a0ef43 */
  goto L_10a0ef43;
L_10a0ef84:;
  /* 10a0ef84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0ef87 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0ef8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a0ef8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ef90 push edx */
  push32((uint32_t)(EDX));
  /* 10a0ef91 call 0x10a0f2e0 */
  push32(0x10a0ef96u); f_10a0f2e0();
  /* 10a0ef96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0ef99:;
  /* 10a0ef99 jmp 0x10a0efa0 */
  goto L_10a0efa0;
L_10a0ef9b:;
  /* 10a0ef9b jmp 0x10a0edf1 */
  goto L_10a0edf1;
L_10a0efa0:;
  /* 10a0efa0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10a0efa2 call 0x10a09690 */
  push32(0x10a0efa7u); f_10a09690();
  /* 10a0efa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0efaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0efad pop esi */
  ESI = (pop32());
  /* 10a0efae mov esp, ebp */
  ESP = (EBP);
  /* 10a0efb0 pop ebp */
  EBP = (pop32());
  /* 10a0efb1 ret  */
  ESPCHK(0x10a0edd0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10a0efc0 (183 bytes, 57 insns) */
void f_10a0efc0(void) {
  FTRACE(0x10a0efc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0efc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0efc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0efc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0efc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0efc7 cmp eax, dword ptr [0x10a331fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a331fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0efcd jae 0x10a0f05a */
  if (!C.cf) goto L_10a0f05a;
  /* 10a0efd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0efd6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0efd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0efdc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0efdf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0efe2 mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0efe9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0efed jne 0x10a0f05a */
  if (!C.zf) goto L_10a0f05a;
  /* 10a0efef cmp dword ptr [0x10a316d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a316d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0eff6 jne 0x10a0f03a */
  if (!C.zf) goto L_10a0f03a;
  /* 10a0eff8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0effb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a0effe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f002 je 0x10a0f012 */
  if (C.zf) goto L_10a0f012;
  /* 10a0f004 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f008 je 0x10a0f020 */
  if (C.zf) goto L_10a0f020;
  /* 10a0f00a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f00e je 0x10a0f02e */
  if (C.zf) goto L_10a0f02e;
  /* 10a0f010 jmp 0x10a0f03a */
  goto L_10a0f03a;
L_10a0f012:;
  /* 10a0f012 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f015 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f016 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10a0f018 call dword ptr [0x10a342e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342e0))), 0x10a0f01eu);
  /* 10a0f01e jmp 0x10a0f03a */
  goto L_10a0f03a;
L_10a0f020:;
  /* 10a0f020 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f023 push eax */
  push32((uint32_t)(EAX));
  /* 10a0f024 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10a0f026 call dword ptr [0x10a342e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342e0))), 0x10a0f02cu);
  /* 10a0f02c jmp 0x10a0f03a */
  goto L_10a0f03a;
L_10a0f02e:;
  /* 10a0f02e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f031 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f032 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a0f034 call dword ptr [0x10a342e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342e0))), 0x10a0f03au);
L_10a0f03a:;
  /* 10a0f03a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f03d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a0f040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f043 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f046 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f049 mov ecx, dword ptr [edx*4 + 0x10a330c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10a330c0)));
  /* 10a0f050 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f053 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10a0f056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f058 jmp 0x10a0f073 */
  goto L_10a0f073;
L_10a0f05a:;
  /* 10a0f05a call 0x10a0dac0 */
  push32(0x10a0f05fu); f_10a0dac0();
  /* 10a0f05f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a0f065 call 0x10a0dad0 */
  push32(0x10a0f06au); f_10a0dad0();
  /* 10a0f06a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a0f070 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a0f073:;
  /* 10a0f073 mov esp, ebp */
  ESP = (EBP);
  /* 10a0f075 pop ebp */
  EBP = (pop32());
  /* 10a0f076 ret  */
  ESPCHK(0x10a0efc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f080 @ 0x10a0f080 (216 bytes, 63 insns) */
void f_10a0f080(void) {
  FTRACE(0x10a0f080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f080 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f081 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f083 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f087 cmp eax, dword ptr [0x10a331fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a331fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f08d jae 0x10a0f13b */
  if (!C.cf) goto L_10a0f13b;
  /* 10a0f093 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f096 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0f099 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f09c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0f09f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f0a2 mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0f0a9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a0f0ae and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f0b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0f0b3 je 0x10a0f13b */
  if (C.zf) goto L_10a0f13b;
  /* 10a0f0b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f0bc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a0f0bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f0c2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f0c5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f0c8 mov ecx, dword ptr [edx*4 + 0x10a330c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10a330c0)));
  /* 10a0f0cf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f0d3 je 0x10a0f13b */
  if (C.zf) goto L_10a0f13b;
  /* 10a0f0d5 cmp dword ptr [0x10a316d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a316d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f0dc jne 0x10a0f11a */
  if (!C.zf) goto L_10a0f11a;
  /* 10a0f0de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f0e1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0f0e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f0e8 je 0x10a0f0f8 */
  if (C.zf) goto L_10a0f0f8;
  /* 10a0f0ea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f0ee je 0x10a0f104 */
  if (C.zf) goto L_10a0f104;
  /* 10a0f0f0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f0f4 je 0x10a0f110 */
  if (C.zf) goto L_10a0f110;
  /* 10a0f0f6 jmp 0x10a0f11a */
  goto L_10a0f11a;
L_10a0f0f8:;
  /* 10a0f0f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0f0fa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10a0f0fc call dword ptr [0x10a342e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342e0))), 0x10a0f102u);
  /* 10a0f102 jmp 0x10a0f11a */
  goto L_10a0f11a;
L_10a0f104:;
  /* 10a0f104 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0f106 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10a0f108 call dword ptr [0x10a342e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342e0))), 0x10a0f10eu);
  /* 10a0f10e jmp 0x10a0f11a */
  goto L_10a0f11a;
L_10a0f110:;
  /* 10a0f110 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0f112 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a0f114 call dword ptr [0x10a342e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342e0))), 0x10a0f11au);
L_10a0f11a:;
  /* 10a0f11a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f11d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0f120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f123 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f126 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f129 mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a0f130 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10a0f137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f139 jmp 0x10a0f154 */
  goto L_10a0f154;
L_10a0f13b:;
  /* 10a0f13b call 0x10a0dac0 */
  push32(0x10a0f140u); f_10a0dac0();
  /* 10a0f140 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a0f146 call 0x10a0dad0 */
  push32(0x10a0f14bu); f_10a0dad0();
  /* 10a0f14b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a0f151 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a0f154:;
  /* 10a0f154 mov esp, ebp */
  ESP = (EBP);
  /* 10a0f156 pop ebp */
  EBP = (pop32());
  /* 10a0f157 ret  */
  ESPCHK(0x10a0f080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f160 @ 0x10a0f160 (102 bytes, 30 insns) */
void f_10a0f160(void) {
  FTRACE(0x10a0f160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f160 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f161 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f166 cmp eax, dword ptr [0x10a331fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a331fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f16c jae 0x10a0f1ab */
  if (!C.cf) goto L_10a0f1ab;
  /* 10a0f16e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f171 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a0f174 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f177 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0f17a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f17d mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0f184 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a0f189 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f18c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0f18e je 0x10a0f1ab */
  if (C.zf) goto L_10a0f1ab;
  /* 10a0f190 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f193 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a0f196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f199 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f19c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f19f mov ecx, dword ptr [edx*4 + 0x10a330c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10a330c0)));
  /* 10a0f1a6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10a0f1a9 jmp 0x10a0f1c4 */
  goto L_10a0f1c4;
L_10a0f1ab:;
  /* 10a0f1ab call 0x10a0dac0 */
  push32(0x10a0f1b0u); f_10a0dac0();
  /* 10a0f1b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a0f1b6 call 0x10a0dad0 */
  push32(0x10a0f1bbu); f_10a0dad0();
  /* 10a0f1bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a0f1c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a0f1c4:;
  /* 10a0f1c4 pop ebp */
  EBP = (pop32());
  /* 10a0f1c5 ret  */
  ESPCHK(0x10a0f160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1d0 @ 0x10a0f1d0 (260 bytes, 83 insns) */
void f_10a0f1d0(void) {
  FTRACE(0x10a0f1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f1d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f1d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0f1d6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a0f1da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f1dd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f1e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0f1e2 je 0x10a0f1ed */
  if (C.zf) goto L_10a0f1ed;
  /* 10a0f1e4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a0f1e7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a0f1ea mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10a0f1ed:;
  /* 10a0f1ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f1f0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0f1f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0f1f8 je 0x10a0f202 */
  if (C.zf) goto L_10a0f202;
  /* 10a0f1fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a0f1fd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10a0f1ff mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10a0f202:;
  /* 10a0f202 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f205 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f20b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0f20d je 0x10a0f218 */
  if (C.zf) goto L_10a0f218;
  /* 10a0f20f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a0f212 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10a0f215 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10a0f218:;
  /* 10a0f218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f21b push eax */
  push32((uint32_t)(EAX));
  /* 10a0f21c call dword ptr [0x10a34394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34394))), 0x10a0f222u);
  /* 10a0f222 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0f225 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f229 jne 0x10a0f242 */
  if (!C.zf) goto L_10a0f242;
  /* 10a0f22b call dword ptr [0x10a34388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34388))), 0x10a0f231u);
  /* 10a0f231 push eax */
  push32((uint32_t)(EAX));
  /* 10a0f232 call 0x10a0da20 */
  push32(0x10a0f237u); f_10a0da20();
  /* 10a0f237 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f23a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f23d jmp 0x10a0f2d0 */
  goto L_10a0f2d0;
L_10a0f242:;
  /* 10a0f242 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f246 jne 0x10a0f253 */
  if (!C.zf) goto L_10a0f253;
  /* 10a0f248 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a0f24b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10a0f24e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10a0f251 jmp 0x10a0f262 */
  goto L_10a0f262;
L_10a0f253:;
  /* 10a0f253 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f257 jne 0x10a0f262 */
  if (!C.zf) goto L_10a0f262;
  /* 10a0f259 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a0f25c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10a0f25f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10a0f262:;
  /* 10a0f262 call 0x10a0edd0 */
  push32(0x10a0f267u); f_10a0edd0();
  /* 10a0f267 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0f26a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f26e jne 0x10a0f28b */
  if (!C.zf) goto L_10a0f28b;
  /* 10a0f270 call 0x10a0dac0 */
  push32(0x10a0f275u); f_10a0dac0();
  /* 10a0f275 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10a0f27b call 0x10a0dad0 */
  push32(0x10a0f280u); f_10a0dad0();
  /* 10a0f280 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a0f286 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f289 jmp 0x10a0f2d0 */
  goto L_10a0f2d0;
L_10a0f28b:;
  /* 10a0f28b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f28e push eax */
  push32((uint32_t)(EAX));
  /* 10a0f28f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f292 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f293 call 0x10a0efc0 */
  push32(0x10a0f298u); f_10a0efc0();
  /* 10a0f298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f29b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a0f29e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10a0f2a1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10a0f2a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f2a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0f2aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f2ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f2b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f2b3 mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a0f2ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a0f2bd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10a0f2c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f2c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f2c5 call 0x10a0f370 */
  push32(0x10a0f2cau); f_10a0f370();
  /* 10a0f2ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f2cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a0f2d0:;
  /* 10a0f2d0 mov esp, ebp */
  ESP = (EBP);
  /* 10a0f2d2 pop ebp */
  EBP = (pop32());
  /* 10a0f2d3 ret  */
  ESPCHK(0x10a0f1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x10a0f2e0 (134 bytes, 44 insns) */
void f_10a0f2e0(void) {
  FTRACE(0x10a0f2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f2e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f2e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f2e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0f2ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f2ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f2f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f2f3 mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a0f2fa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f2fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0f2ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0f302 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f306 jne 0x10a0f341 */
  if (!C.zf) goto L_10a0f341;
  /* 10a0f308 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a0f30a call 0x10a095f0 */
  push32(0x10a0f30fu); f_10a095f0();
  /* 10a0f30f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f312 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0f315 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f319 jne 0x10a0f337 */
  if (!C.zf) goto L_10a0f337;
  /* 10a0f31b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0f31e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f321 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f322 call dword ptr [0x10a34328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34328))), 0x10a0f328u);
  /* 10a0f328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0f32b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0f32e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f331 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0f334 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10a0f337:;
  /* 10a0f337 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a0f339 call 0x10a09690 */
  push32(0x10a0f33eu); f_10a09690();
  /* 10a0f33e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0f341:;
  /* 10a0f341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f344 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0f347 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f34a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f34d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f350 mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a0f357 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10a0f35b push eax */
  push32((uint32_t)(EAX));
  /* 10a0f35c call dword ptr [0x10a34324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34324))), 0x10a0f362u);
  /* 10a0f362 mov esp, ebp */
  ESP = (EBP);
  /* 10a0f364 pop ebp */
  EBP = (pop32());
  /* 10a0f365 ret  */
  ESPCHK(0x10a0f2e0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10a0f370 (38 bytes, 13 insns) */
void f_10a0f370(void) {
  FTRACE(0x10a0f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f370 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f371 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f376 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a0f379 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f37c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f37f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f382 mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a0f389 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10a0f38d push eax */
  push32((uint32_t)(EAX));
  /* 10a0f38e call dword ptr [0x10a34320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34320))), 0x10a0f394u);
  /* 10a0f394 pop ebp */
  EBP = (pop32());
  /* 10a0f395 ret  */
  ESPCHK(0x10a0f370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3a0 @ 0x10a0f3a0 (218 bytes, 63 insns) */
void f_10a0f3a0(void) {
  FTRACE(0x10a0f3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f3a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0f3a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0f3ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0f3af call 0x10a095f0 */
  push32(0x10a0f3b4u); f_10a095f0();
  /* 10a0f3b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f3b7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10a0f3be jmp 0x10a0f3c9 */
  goto L_10a0f3c9;
L_10a0f3c0:;
  /* 10a0f3c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f3c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f3c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a0f3c9:;
  /* 10a0f3c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f3cc cmp ecx, dword ptr [0x10a32dc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a32dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f3d2 jge 0x10a0f469 */
  if ((C.sf==C.of)) goto L_10a0f469;
  /* 10a0f3d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f3db mov eax, dword ptr [0x10a31a68] */
  EAX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f3e0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f3e4 je 0x10a0f464 */
  if (C.zf) goto L_10a0f464;
  /* 10a0f3e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f3e9 mov edx, dword ptr [0x10a31a68] */
  EDX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f3ef mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a0f3f2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0f3f5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f3fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0f3fd je 0x10a0f421 */
  if (C.zf) goto L_10a0f421;
  /* 10a0f3ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f402 mov eax, dword ptr [0x10a31a68] */
  EAX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f407 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a0f40a push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f40b call 0x10a10190 */
  push32(0x10a0f410u); f_10a10190();
  /* 10a0f410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f413 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f416 je 0x10a0f421 */
  if (C.zf) goto L_10a0f421;
  /* 10a0f418 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0f41b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f41e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a0f421:;
  /* 10a0f421 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f425 jl 0x10a0f464 */
  if ((C.sf!=C.of)) goto L_10a0f464;
  /* 10a0f427 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f42a mov ecx, dword ptr [0x10a31a68] */
  ECX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f430 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a0f433 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f436 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f437 call dword ptr [0x10a3439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3439c))), 0x10a0f43du);
  /* 10a0f43d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0f43f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f442 mov ecx, dword ptr [0x10a31a68] */
  ECX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f448 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a0f44b push edx */
  push32((uint32_t)(EDX));
  /* 10a0f44c call 0x10a06680 */
  push32(0x10a0f451u); f_10a06680();
  /* 10a0f451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f454 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f457 mov ecx, dword ptr [0x10a31a68] */
  ECX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f45d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10a0f464:;
  /* 10a0f464 jmp 0x10a0f3c0 */
  goto L_10a0f3c0;
L_10a0f469:;
  /* 10a0f469 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0f46b call 0x10a09690 */
  push32(0x10a0f470u); f_10a09690();
  /* 10a0f470 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0f476 mov esp, ebp */
  ESP = (EBP);
  /* 10a0f478 pop ebp */
  EBP = (pop32());
  /* 10a0f479 ret  */
  ESPCHK(0x10a0f3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f480 @ 0x10a0f480 (68 bytes, 26 insns) */
void f_10a0f480(void) {
  FTRACE(0x10a0f480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f480 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f481 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f483 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f484 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f488 jne 0x10a0f496 */
  if (!C.zf) goto L_10a0f496;
  /* 10a0f48a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0f48c call 0x10a0f5f0 */
  push32(0x10a0f491u); f_10a0f5f0();
  /* 10a0f491 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f494 jmp 0x10a0f4c0 */
  goto L_10a0f4c0;
L_10a0f496:;
  /* 10a0f496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f499 push eax */
  push32((uint32_t)(EAX));
  /* 10a0f49a call 0x10a0ea00 */
  push32(0x10a0f49fu); f_10a0ea00();
  /* 10a0f49f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f4a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f4a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f4a6 call 0x10a0f4d0 */
  push32(0x10a0f4abu); f_10a0f4d0();
  /* 10a0f4ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f4ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0f4b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f4b4 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f4b5 call 0x10a0ea70 */
  push32(0x10a0f4bau); f_10a0ea70();
  /* 10a0f4ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f4bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a0f4c0:;
  /* 10a0f4c0 mov esp, ebp */
  ESP = (EBP);
  /* 10a0f4c2 pop ebp */
  EBP = (pop32());
  /* 10a0f4c3 ret  */
  ESPCHK(0x10a0f480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4d0 @ 0x10a0f4d0 (65 bytes, 26 insns) */
void f_10a0f4d0(void) {
  FTRACE(0x10a0f4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f4d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f4d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f4d6 push eax */
  push32((uint32_t)(EAX));
  /* 10a0f4d7 call 0x10a0f520 */
  push32(0x10a0f4dcu); f_10a0f520();
  /* 10a0f4dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f4df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0f4e1 je 0x10a0f4e8 */
  if (C.zf) goto L_10a0f4e8;
  /* 10a0f4e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f4e6 jmp 0x10a0f50f */
  goto L_10a0f50f;
L_10a0f4e8:;
  /* 10a0f4e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f4eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0f4ee and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0f4f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0f4f6 je 0x10a0f50d */
  if (C.zf) goto L_10a0f50d;
  /* 10a0f4f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f4fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a0f4fe push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f4ff call 0x10a102e0 */
  push32(0x10a0f504u); f_10a102e0();
  /* 10a0f504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f507 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0f509 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0f50b jmp 0x10a0f50f */
  goto L_10a0f50f;
L_10a0f50d:;
  /* 10a0f50d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a0f50f:;
  /* 10a0f50f pop ebp */
  EBP = (pop32());
  /* 10a0f510 ret  */
  ESPCHK(0x10a0f4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f520 @ 0x10a0f520 (183 bytes, 62 insns) */
void f_10a0f520(void) {
  FTRACE(0x10a0f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f520 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f521 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f523 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0f526 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0f52d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f530 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0f533 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f536 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0f539 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0f53c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f53f jne 0x10a0f5bb */
  if (!C.zf) goto L_10a0f5bb;
  /* 10a0f541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f544 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0f547 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f54d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0f54f je 0x10a0f5bb */
  if (C.zf) goto L_10a0f5bb;
  /* 10a0f551 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f554 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f557 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10a0f559 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0f55c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a0f55f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f563 jle 0x10a0f5bb */
  if ((C.zf||C.sf!=C.of)) goto L_10a0f5bb;
  /* 10a0f565 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f568 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f569 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f56c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0f56f push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f570 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f573 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a0f576 push eax */
  push32((uint32_t)(EAX));
  /* 10a0f577 call 0x10a0e490 */
  push32(0x10a0f57cu); f_10a0e490();
  /* 10a0f57c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f57f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f582 jne 0x10a0f5a5 */
  if (!C.zf) goto L_10a0f5a5;
  /* 10a0f584 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f587 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0f58a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0f590 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0f592 je 0x10a0f5a3 */
  if (C.zf) goto L_10a0f5a3;
  /* 10a0f594 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f597 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0f59a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f59d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f5a0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10a0f5a3:;
  /* 10a0f5a3 jmp 0x10a0f5bb */
  goto L_10a0f5bb;
L_10a0f5a5:;
  /* 10a0f5a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f5a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0f5ab or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f5ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f5b1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10a0f5b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a0f5bb:;
  /* 10a0f5bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f5be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f5c1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a0f5c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a0f5c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0f5c9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a0f5d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0f5d3 mov esp, ebp */
  ESP = (EBP);
  /* 10a0f5d5 pop ebp */
  EBP = (pop32());
  /* 10a0f5d6 ret  */
  ESPCHK(0x10a0f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5e0 @ 0x10a0f5e0 (15 bytes, 7 insns) */
void f_10a0f5e0(void) {
  FTRACE(0x10a0f5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f5e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f5e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0f5e5 call 0x10a0f5f0 */
  push32(0x10a0f5eau); f_10a0f5f0();
  /* 10a0f5ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f5ed pop ebp */
  EBP = (pop32());
  /* 10a0f5ee ret  */
  ESPCHK(0x10a0f5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x10a0f5f0 (319 bytes, 94 insns) */
void f_10a0f5f0(void) {
  FTRACE(0x10a0f5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f5f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0f5f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0f5fd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a0f604 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0f606 call 0x10a095f0 */
  push32(0x10a0f60bu); f_10a095f0();
  /* 10a0f60b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f60e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a0f615 jmp 0x10a0f620 */
  goto L_10a0f620;
L_10a0f617:;
  /* 10a0f617 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f61a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f61d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a0f620:;
  /* 10a0f620 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f623 cmp ecx, dword ptr [0x10a32dc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a32dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f629 jge 0x10a0f713 */
  if ((C.sf==C.of)) goto L_10a0f713;
  /* 10a0f62f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f632 mov eax, dword ptr [0x10a31a68] */
  EAX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f637 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f63b je 0x10a0f70e */
  if (C.zf) goto L_10a0f70e;
  /* 10a0f641 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f644 mov edx, dword ptr [0x10a31a68] */
  EDX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f64a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a0f64d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0f650 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0f656 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0f658 je 0x10a0f70e */
  if (C.zf) goto L_10a0f70e;
  /* 10a0f65e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f661 mov eax, dword ptr [0x10a31a68] */
  EAX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f666 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a0f669 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f66a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f66d push edx */
  push32((uint32_t)(EDX));
  /* 10a0f66e call 0x10a0ea40 */
  push32(0x10a0f673u); f_10a0ea40();
  /* 10a0f673 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f676 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f679 mov ecx, dword ptr [0x10a31a68] */
  ECX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f67f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a0f682 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a0f685 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f68a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0f68c je 0x10a0f6f5 */
  if (C.zf) goto L_10a0f6f5;
  /* 10a0f68e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f692 jne 0x10a0f6b9 */
  if (!C.zf) goto L_10a0f6b9;
  /* 10a0f694 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f697 mov edx, dword ptr [0x10a31a68] */
  EDX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f69d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a0f6a0 push eax */
  push32((uint32_t)(EAX));
  /* 10a0f6a1 call 0x10a0f4d0 */
  push32(0x10a0f6a6u); f_10a0f4d0();
  /* 10a0f6a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f6a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f6ac je 0x10a0f6b7 */
  if (C.zf) goto L_10a0f6b7;
  /* 10a0f6ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0f6b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f6b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a0f6b7:;
  /* 10a0f6b7 jmp 0x10a0f6f5 */
  goto L_10a0f6f5;
L_10a0f6b9:;
  /* 10a0f6b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f6bd jne 0x10a0f6f5 */
  if (!C.zf) goto L_10a0f6f5;
  /* 10a0f6bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f6c2 mov eax, dword ptr [0x10a31a68] */
  EAX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f6c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a0f6ca mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0f6cd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0f6d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0f6d2 je 0x10a0f6f5 */
  if (C.zf) goto L_10a0f6f5;
  /* 10a0f6d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f6d7 mov ecx, dword ptr [0x10a31a68] */
  ECX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f6dd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a0f6e0 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f6e1 call 0x10a0f4d0 */
  push32(0x10a0f6e6u); f_10a0f4d0();
  /* 10a0f6e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f6e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f6ec jne 0x10a0f6f5 */
  if (!C.zf) goto L_10a0f6f5;
  /* 10a0f6ee mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10a0f6f5:;
  /* 10a0f6f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f6f8 mov ecx, dword ptr [0x10a31a68] */
  ECX = (r32((uint32_t)(0x10a31a68)));
  /* 10a0f6fe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a0f701 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f702 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f705 push eax */
  push32((uint32_t)(EAX));
  /* 10a0f706 call 0x10a0eab0 */
  push32(0x10a0f70bu); f_10a0eab0();
  /* 10a0f70b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0f70e:;
  /* 10a0f70e jmp 0x10a0f617 */
  goto L_10a0f617;
L_10a0f713:;
  /* 10a0f713 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0f715 call 0x10a09690 */
  push32(0x10a0f71au); f_10a09690();
  /* 10a0f71a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f71d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f721 jne 0x10a0f728 */
  if (!C.zf) goto L_10a0f728;
  /* 10a0f723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0f726 jmp 0x10a0f72b */
  goto L_10a0f72b;
L_10a0f728:;
  /* 10a0f728 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a0f72b:;
  /* 10a0f72b mov esp, ebp */
  ESP = (EBP);
  /* 10a0f72d pop ebp */
  EBP = (pop32());
  /* 10a0f72e ret  */
  ESPCHK(0x10a0f5f0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10a0f730 (15 bytes, 7 insns) */
void f_10a0f730(void) {
  FTRACE(0x10a0f730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f730 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f731 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f733 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0f735 call 0x10a04b60 */
  push32(0x10a0f73au); f_10a04b60();
  /* 10a0f73a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f73d pop ebp */
  EBP = (pop32());
  /* 10a0f73e ret  */
  ESPCHK(0x10a0f730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f740 @ 0x10a0f740 (1007 bytes, 269 insns) */
void f_10a0f740(void) {
  FTRACE(0x10a0f740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0f740 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0f741 mov ebp, esp */
  EBP = (ESP);
  /* 10a0f743 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0f749 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f74d jl 0x10a0f755 */
  if ((C.sf!=C.of)) goto L_10a0f755;
  /* 10a0f74f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f753 jle 0x10a0f75c */
  if ((C.zf||C.sf!=C.of)) goto L_10a0f75c;
L_10a0f755:;
  /* 10a0f755 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f757 jmp 0x10a0fb2b */
  goto L_10a0fb2b;
L_10a0f75c:;
  /* 10a0f75c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a0f75e call 0x10a095f0 */
  push32(0x10a0f763u); f_10a095f0();
  /* 10a0f763 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f766 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a0f76d mov eax, dword ptr [0x10a31a54] */
  EAX = (r32((uint32_t)(0x10a31a54)));
  /* 10a0f772 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f775 mov dword ptr [0x10a31a54], eax */
  w32((uint32_t)(0x10a31a54), (EAX));
L_10a0f77a:;
  /* 10a0f77a cmp dword ptr [0x10a31a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f781 je 0x10a0f78d */
  if (C.zf) goto L_10a0f78d;
  /* 10a0f783 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0f785 call dword ptr [0x10a342dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342dc))), 0x10a0f78bu);
  /* 10a0f78b jmp 0x10a0f77a */
  goto L_10a0f77a;
L_10a0f78d:;
  /* 10a0f78d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f791 je 0x10a0f7d1 */
  if (C.zf) goto L_10a0f7d1;
  /* 10a0f793 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f797 je 0x10a0f7b1 */
  if (C.zf) goto L_10a0f7b1;
  /* 10a0f799 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f79c push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f79d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f7a0 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f7a1 call 0x10a0fb30 */
  push32(0x10a0f7a6u); f_10a0fb30();
  /* 10a0f7a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f7a9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10a0f7af jmp 0x10a0f7c3 */
  goto L_10a0f7c3;
L_10a0f7b1:;
  /* 10a0f7b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0f7b4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f7b7 mov ecx, dword ptr [eax + 0x10a304dc] */
  ECX = (r32((uint32_t)(EAX + 0x10a304dc)));
  /* 10a0f7bd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10a0f7c3:;
  /* 10a0f7c3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10a0f7c9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a0f7cc jmp 0x10a0fb0b */
  goto L_10a0fb0b;
L_10a0f7d1:;
  /* 10a0f7d1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10a0f7d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a0f7df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f7e3 je 0x10a0fb03 */
  if (C.zf) goto L_10a0fb03;
  /* 10a0f7e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f7ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a0f7ef cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f7f2 jne 0x10a0fa14 */
  if (!C.zf) goto L_10a0fa14;
  /* 10a0f7f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f7fb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a0f7ff cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f802 jne 0x10a0fa14 */
  if (!C.zf) goto L_10a0fa14;
  /* 10a0f808 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f80b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10a0f80f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f812 jne 0x10a0fa14 */
  if (!C.zf) goto L_10a0fa14;
  /* 10a0f818 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0f81b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10a0f821:;
  /* 10a0f821 push 0x10a2d29c */
  push32((uint32_t)(0x10a2d29cu));
  /* 10a0f826 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a0f82c push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f82d call 0x10a11990 */
  push32(0x10a0f832u); f_10a11990();
  /* 10a0f832 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f835 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10a0f83b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f842 je 0x10a0f86d */
  if (C.zf) goto L_10a0f86d;
  /* 10a0f844 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a0f84a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0f850 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10a0f856 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f85d je 0x10a0f86d */
  if (C.zf) goto L_10a0f86d;
  /* 10a0f85f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a0f865 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a0f868 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f86b jne 0x10a0f893 */
  if (!C.zf) goto L_10a0f893;
L_10a0f86d:;
  /* 10a0f86d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f871 je 0x10a0f88c */
  if (C.zf) goto L_10a0f88c;
  /* 10a0f873 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a0f875 call 0x10a09690 */
  push32(0x10a0f87au); f_10a09690();
  /* 10a0f87a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f87d mov edx, dword ptr [0x10a31a54] */
  EDX = (r32((uint32_t)(0x10a31a54)));
  /* 10a0f883 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0f886 mov dword ptr [0x10a31a54], edx */
  w32((uint32_t)(0x10a31a54), (EDX));
L_10a0f88c:;
  /* 10a0f88c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f88e jmp 0x10a0fb2b */
  goto L_10a0fb2b;
L_10a0f893:;
  /* 10a0f893 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a0f89a jmp 0x10a0f8a5 */
  goto L_10a0f8a5;
L_10a0f89c:;
  /* 10a0f89c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0f89f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f8a2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a0f8a5:;
  /* 10a0f8a5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f8a9 jg 0x10a0f8f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a0f8f3;
  /* 10a0f8ab mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a0f8b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f8b2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a0f8b8 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f8b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0f8bc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f8bf mov ecx, dword ptr [eax + 0x10a304d8] */
  ECX = (r32((uint32_t)(EAX + 0x10a304d8)));
  /* 10a0f8c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f8c6 call 0x10a11950 */
  push32(0x10a0f8cbu); f_10a11950();
  /* 10a0f8cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f8ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0f8d0 jne 0x10a0f8f1 */
  if (!C.zf) goto L_10a0f8f1;
  /* 10a0f8d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0f8d5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0f8d8 mov eax, dword ptr [edx + 0x10a304d8] */
  EAX = (r32((uint32_t)(EDX + 0x10a304d8)));
  /* 10a0f8de push eax */
  push32((uint32_t)(EAX));
  /* 10a0f8df call 0x10a08a20 */
  push32(0x10a0f8e4u); f_10a08a20();
  /* 10a0f8e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f8e7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f8ed jne 0x10a0f8f1 */
  if (!C.zf) goto L_10a0f8f1;
  /* 10a0f8ef jmp 0x10a0f8f3 */
  goto L_10a0f8f3;
L_10a0f8f1:;
  /* 10a0f8f1 jmp 0x10a0f89c */
  goto L_10a0f89c;
L_10a0f8f3:;
  /* 10a0f8f3 push 0x10a2d298 */
  push32((uint32_t)(0x10a2d298u));
  /* 10a0f8f8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a0f8fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f901 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10a0f907 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a0f90d push edx */
  push32((uint32_t)(EDX));
  /* 10a0f90e call 0x10a11910 */
  push32(0x10a0f913u); f_10a11910();
  /* 10a0f913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f916 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10a0f91c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f923 jne 0x10a0f959 */
  if (!C.zf) goto L_10a0f959;
  /* 10a0f925 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a0f92b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a0f92e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f931 je 0x10a0f959 */
  if (C.zf) goto L_10a0f959;
  /* 10a0f933 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f937 je 0x10a0f952 */
  if (C.zf) goto L_10a0f952;
  /* 10a0f939 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a0f93b call 0x10a09690 */
  push32(0x10a0f940u); f_10a09690();
  /* 10a0f940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f943 mov edx, dword ptr [0x10a31a54] */
  EDX = (r32((uint32_t)(0x10a31a54)));
  /* 10a0f949 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0f94c mov dword ptr [0x10a31a54], edx */
  w32((uint32_t)(0x10a31a54), (EDX));
L_10a0f952:;
  /* 10a0f952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0f954 jmp 0x10a0fb2b */
  goto L_10a0fb2b;
L_10a0f959:;
  /* 10a0f959 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f95d jg 0x10a0f9aa */
  if ((!C.zf&&C.sf==C.of)) goto L_10a0f9aa;
  /* 10a0f95f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a0f965 push eax */
  push32((uint32_t)(EAX));
  /* 10a0f966 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a0f96c push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f96d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10a0f973 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f974 call 0x10a09410 */
  push32(0x10a0f979u); f_10a09410();
  /* 10a0f979 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f97c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a0f982 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10a0f98a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10a0f990 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0f991 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0f994 push edx */
  push32((uint32_t)(EDX));
  /* 10a0f995 call 0x10a0fb30 */
  push32(0x10a0f99au); f_10a0fb30();
  /* 10a0f99a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f99d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0f99f je 0x10a0f9aa */
  if (C.zf) goto L_10a0f9aa;
  /* 10a0f9a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0f9a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f9a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a0f9aa:;
  /* 10a0f9aa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a0f9b0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f9b6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10a0f9bc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a0f9c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a0f9c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0f9c7 je 0x10a0f9d8 */
  if (C.zf) goto L_10a0f9d8;
  /* 10a0f9c9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a0f9cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0f9d2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10a0f9d8:;
  /* 10a0f9d8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a0f9de movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a0f9e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0f9e3 jne 0x10a0f821 */
  if (!C.zf) goto L_10a0f821;
  /* 10a0f9e9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0f9ed je 0x10a0f9fc */
  if (C.zf) goto L_10a0f9fc;
  /* 10a0f9ef call 0x10a0fcd0 */
  push32(0x10a0f9f4u); f_10a0fcd0();
  /* 10a0f9f4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10a0f9fa jmp 0x10a0fa06 */
  goto L_10a0fa06;
L_10a0f9fc:;
  /* 10a0f9fc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10a0fa06:;
  /* 10a0fa06 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10a0fa0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a0fa0f jmp 0x10a0fb01 */
  goto L_10a0fb01;
L_10a0fa14:;
  /* 10a0fa14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fa17 push edx */
  push32((uint32_t)(EDX));
  /* 10a0fa18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0fa1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0fa1c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10a0fa22 push eax */
  push32((uint32_t)(EAX));
  /* 10a0fa23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0fa26 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fa27 call 0x10a0fdd0 */
  push32(0x10a0fa2cu); f_10a0fdd0();
  /* 10a0fa2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fa2f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0fa32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fa36 je 0x10a0fb01 */
  if (C.zf) goto L_10a0fb01;
  /* 10a0fa3c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a0fa43 jmp 0x10a0fa4e */
  goto L_10a0fa4e;
L_10a0fa45:;
  /* 10a0fa45 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0fa48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fa4b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a0fa4e:;
  /* 10a0fa4e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fa52 jg 0x10a0fab0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a0fab0;
  /* 10a0fa54 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fa58 je 0x10a0faae */
  if (C.zf) goto L_10a0faae;
  /* 10a0fa5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0fa5d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fa60 mov ecx, dword ptr [eax + 0x10a304dc] */
  ECX = (r32((uint32_t)(EAX + 0x10a304dc)));
  /* 10a0fa66 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fa67 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10a0fa6d push edx */
  push32((uint32_t)(EDX));
  /* 10a0fa6e call 0x10a11880 */
  push32(0x10a0fa73u); f_10a11880();
  /* 10a0fa73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fa76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fa78 je 0x10a0faa5 */
  if (C.zf) goto L_10a0faa5;
  /* 10a0fa7a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10a0fa80 push eax */
  push32((uint32_t)(EAX));
  /* 10a0fa81 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0fa84 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fa85 call 0x10a0fb30 */
  push32(0x10a0fa8au); f_10a0fb30();
  /* 10a0fa8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fa8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fa8f je 0x10a0fa9c */
  if (C.zf) goto L_10a0fa9c;
  /* 10a0fa91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0fa94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fa97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a0fa9a jmp 0x10a0faa3 */
  goto L_10a0faa3;
L_10a0fa9c:;
  /* 10a0fa9c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10a0faa3:;
  /* 10a0faa3 jmp 0x10a0faae */
  goto L_10a0faae;
L_10a0faa5:;
  /* 10a0faa5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0faa8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0faab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a0faae:;
  /* 10a0faae jmp 0x10a0fa45 */
  goto L_10a0fa45;
L_10a0fab0:;
  /* 10a0fab0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fab4 je 0x10a0fadb */
  if (C.zf) goto L_10a0fadb;
  /* 10a0fab6 call 0x10a0fcd0 */
  push32(0x10a0fabbu); f_10a0fcd0();
  /* 10a0fabb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0fabe push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0fac0 mov ecx, dword ptr [0x10a304dc] */
  ECX = (r32((uint32_t)(0x10a304dc)));
  /* 10a0fac6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fac7 call 0x10a06680 */
  push32(0x10a0faccu); f_10a06680();
  /* 10a0facc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0facf mov dword ptr [0x10a304dc], 0 */
  w32((uint32_t)(0x10a304dc), (0x0u));
  /* 10a0fad9 jmp 0x10a0fb01 */
  goto L_10a0fb01;
L_10a0fadb:;
  /* 10a0fadb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fadf je 0x10a0faee */
  if (C.zf) goto L_10a0faee;
  /* 10a0fae1 call 0x10a0fcd0 */
  push32(0x10a0fae6u); f_10a0fcd0();
  /* 10a0fae6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10a0faec jmp 0x10a0faf8 */
  goto L_10a0faf8;
L_10a0faee:;
  /* 10a0faee mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10a0faf8:;
  /* 10a0faf8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10a0fafe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a0fb01:;
  /* 10a0fb01 jmp 0x10a0fb0b */
  goto L_10a0fb0b;
L_10a0fb03:;
  /* 10a0fb03 call 0x10a0fcd0 */
  push32(0x10a0fb08u); f_10a0fcd0();
  /* 10a0fb08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a0fb0b:;
  /* 10a0fb0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fb0f je 0x10a0fb28 */
  if (C.zf) goto L_10a0fb28;
  /* 10a0fb11 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a0fb13 call 0x10a09690 */
  push32(0x10a0fb18u); f_10a09690();
  /* 10a0fb18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fb1b mov eax, dword ptr [0x10a31a54] */
  EAX = (r32((uint32_t)(0x10a31a54)));
  /* 10a0fb20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0fb23 mov dword ptr [0x10a31a54], eax */
  w32((uint32_t)(0x10a31a54), (EAX));
L_10a0fb28:;
  /* 10a0fb28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a0fb2b:;
  /* 10a0fb2b mov esp, ebp */
  ESP = (EBP);
  /* 10a0fb2d pop ebp */
  EBP = (pop32());
  /* 10a0fb2e ret  */
  ESPCHK(0x10a0f740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb30 @ 0x10a0fb30 (403 bytes, 117 insns) */
void f_10a0fb30(void) {
  FTRACE(0x10a0fb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0fb30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0fb31 mov ebp, esp */
  EBP = (ESP);
  /* 10a0fb33 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0fb39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fb3c push eax */
  push32((uint32_t)(EAX));
  /* 10a0fb3d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10a0fb43 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fb44 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10a0fb4a push edx */
  push32((uint32_t)(EDX));
  /* 10a0fb4b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10a0fb51 push eax */
  push32((uint32_t)(EAX));
  /* 10a0fb52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0fb55 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fb56 call 0x10a0fdd0 */
  push32(0x10a0fb5bu); f_10a0fdd0();
  /* 10a0fb5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fb5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fb60 jne 0x10a0fb69 */
  if (!C.zf) goto L_10a0fb69;
  /* 10a0fb62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0fb64 jmp 0x10a0fcbf */
  goto L_10a0fcbf;
L_10a0fb69:;
  /* 10a0fb69 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10a0fb6e push 0x10a2d2a0 */
  push32((uint32_t)(0x10a2d2a0u));
  /* 10a0fb73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0fb75 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10a0fb7b push edx */
  push32((uint32_t)(EDX));
  /* 10a0fb7c call 0x10a08a20 */
  push32(0x10a0fb81u); f_10a08a20();
  /* 10a0fb81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fb84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fb87 push eax */
  push32((uint32_t)(EAX));
  /* 10a0fb88 call 0x10a05bf0 */
  push32(0x10a0fb8du); f_10a05bf0();
  /* 10a0fb8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fb90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0fb93 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fb97 jne 0x10a0fba0 */
  if (!C.zf) goto L_10a0fba0;
  /* 10a0fb99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0fb9b jmp 0x10a0fcbf */
  goto L_10a0fcbf;
L_10a0fba0:;
  /* 10a0fba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fba3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fba6 mov ecx, dword ptr [eax + 0x10a304dc] */
  ECX = (r32((uint32_t)(EAX + 0x10a304dc)));
  /* 10a0fbac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a0fbaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fbb2 mov eax, dword ptr [edx*4 + 0x10a318d0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a318d0)));
  /* 10a0fbb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0fbbc push 6 */
  push32((uint32_t)(0x6u));
  /* 10a0fbbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fbc1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fbc4 add ecx, 0x10a31920 */
  { uint32_t _a=(ECX),_b=(0x10a31920u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fbca push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fbcb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10a0fbce push edx */
  push32((uint32_t)(EDX));
  /* 10a0fbcf call 0x10a0c4d0 */
  push32(0x10a0fbd4u); f_10a0c4d0();
  /* 10a0fbd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fbd7 mov eax, dword ptr [0x10a318e8] */
  EAX = (r32((uint32_t)(0x10a318e8)));
  /* 10a0fbdc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a0fbdf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10a0fbe5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fbe6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0fbe9 push edx */
  push32((uint32_t)(EDX));
  /* 10a0fbea call 0x10a08ba0 */
  push32(0x10a0fbefu); f_10a08ba0();
  /* 10a0fbef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fbf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fbf5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fbf8 mov dword ptr [ecx + 0x10a304dc], eax */
  w32((uint32_t)(ECX + 0x10a304dc), (EAX));
  /* 10a0fbfe mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10a0fc04 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0fc0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fc0d mov dword ptr [eax*4 + 0x10a318d0], edx */
  w32((uint32_t)(EAX*4 + 0x10a318d0), (EDX));
  /* 10a0fc14 push 6 */
  push32((uint32_t)(0x6u));
  /* 10a0fc16 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10a0fc1c push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fc1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fc20 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fc23 add edx, 0x10a31920 */
  { uint32_t _a=(EDX),_b=(0x10a31920u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fc29 push edx */
  push32((uint32_t)(EDX));
  /* 10a0fc2a call 0x10a0c4d0 */
  push32(0x10a0fc2fu); f_10a0c4d0();
  /* 10a0fc2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fc32 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fc36 jne 0x10a0fc43 */
  if (!C.zf) goto L_10a0fc43;
  /* 10a0fc38 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a0fc3e mov dword ptr [0x10a318e8], eax */
  w32((uint32_t)(0x10a318e8), (EAX));
L_10a0fc43:;
  /* 10a0fc43 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fc47 jne 0x10a0fc55 */
  if (!C.zf) goto L_10a0fc55;
  /* 10a0fc49 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a0fc4f mov dword ptr [0x10a318ec], ecx */
  w32((uint32_t)(0x10a318ec), (ECX));
L_10a0fc55:;
  /* 10a0fc55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fc58 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fc5b call dword ptr [edx + 0x10a304e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10a304e0))), 0x10a0fc61u);
  /* 10a0fc61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fc63 je 0x10a0fc9c */
  if (C.zf) goto L_10a0fc9c;
  /* 10a0fc65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fc68 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fc6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0fc6e mov dword ptr [eax + 0x10a304dc], ecx */
  w32((uint32_t)(EAX + 0x10a304dc), (ECX));
  /* 10a0fc74 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0fc76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0fc79 push edx */
  push32((uint32_t)(EDX));
  /* 10a0fc7a call 0x10a06680 */
  push32(0x10a0fc7fu); f_10a06680();
  /* 10a0fc7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fc82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fc85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0fc88 mov dword ptr [eax*4 + 0x10a318d0], ecx */
  w32((uint32_t)(EAX*4 + 0x10a318d0), (ECX));
  /* 10a0fc8f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0fc92 mov dword ptr [0x10a318e8], edx */
  w32((uint32_t)(0x10a318e8), (EDX));
  /* 10a0fc98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0fc9a jmp 0x10a0fcbf */
  goto L_10a0fcbf;
L_10a0fc9c:;
  /* 10a0fc9c cmp dword ptr [ebp - 0xc], 0x10a303c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10a303c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fca3 je 0x10a0fcb3 */
  if (C.zf) goto L_10a0fcb3;
  /* 10a0fca5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0fca7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0fcaa push eax */
  push32((uint32_t)(EAX));
  /* 10a0fcab call 0x10a06680 */
  push32(0x10a0fcb0u); f_10a06680();
  /* 10a0fcb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0fcb3:;
  /* 10a0fcb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fcb6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fcb9 mov eax, dword ptr [ecx + 0x10a304dc] */
  EAX = (r32((uint32_t)(ECX + 0x10a304dc)));
L_10a0fcbf:;
  /* 10a0fcbf mov esp, ebp */
  ESP = (EBP);
  /* 10a0fcc1 pop ebp */
  EBP = (pop32());
  /* 10a0fcc2 ret  */
  ESPCHK(0x10a0fb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcd0 @ 0x10a0fcd0 (256 bytes, 72 insns) */
void f_10a0fcd0(void) {
  FTRACE(0x10a0fcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0fcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0fcd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0fcd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0fcd6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a0fcdd cmp dword ptr [0x10a304dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a304dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fce4 jne 0x10a0fd04 */
  if (!C.zf) goto L_10a0fd04;
  /* 10a0fce6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10a0fceb push 0x10a2d2a0 */
  push32((uint32_t)(0x10a2d2a0u));
  /* 10a0fcf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0fcf2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10a0fcf7 call 0x10a05bf0 */
  push32(0x10a0fcfcu); f_10a05bf0();
  /* 10a0fcfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fcff mov dword ptr [0x10a304dc], eax */
  w32((uint32_t)(0x10a304dc), (EAX));
L_10a0fd04:;
  /* 10a0fd04 mov eax, dword ptr [0x10a304dc] */
  EAX = (r32((uint32_t)(0x10a304dc)));
  /* 10a0fd09 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a0fd0c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a0fd13 jmp 0x10a0fd1e */
  goto L_10a0fd1e;
L_10a0fd15:;
  /* 10a0fd15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0fd18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fd1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a0fd1e:;
  /* 10a0fd1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0fd21 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fd24 mov eax, dword ptr [edx + 0x10a304dc] */
  EAX = (r32((uint32_t)(EDX + 0x10a304dc)));
  /* 10a0fd2a push eax */
  push32((uint32_t)(EAX));
  /* 10a0fd2b push 0x10a2d2ac */
  push32((uint32_t)(0x10a2d2acu));
  /* 10a0fd30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0fd33 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fd36 mov edx, dword ptr [ecx + 0x10a304d8] */
  EDX = (r32((uint32_t)(ECX + 0x10a304d8)));
  /* 10a0fd3c push edx */
  push32((uint32_t)(EDX));
  /* 10a0fd3d push 3 */
  push32((uint32_t)(0x3u));
  /* 10a0fd3f mov eax, dword ptr [0x10a304dc] */
  EAX = (r32((uint32_t)(0x10a304dc)));
  /* 10a0fd44 push eax */
  push32((uint32_t)(EAX));
  /* 10a0fd45 call 0x10a0ff70 */
  push32(0x10a0fd4au); f_10a0ff70();
  /* 10a0fd4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fd4d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fd51 jge 0x10a0fd99 */
  if ((C.sf==C.of)) goto L_10a0fd99;
  /* 10a0fd53 push 0x10a2d298 */
  push32((uint32_t)(0x10a2d298u));
  /* 10a0fd58 mov ecx, dword ptr [0x10a304dc] */
  ECX = (r32((uint32_t)(0x10a304dc)));
  /* 10a0fd5e push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fd5f call 0x10a08bb0 */
  push32(0x10a0fd64u); f_10a08bb0();
  /* 10a0fd64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fd67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0fd6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fd6d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fd70 mov eax, dword ptr [edx + 0x10a304dc] */
  EAX = (r32((uint32_t)(EDX + 0x10a304dc)));
  /* 10a0fd76 push eax */
  push32((uint32_t)(EAX));
  /* 10a0fd77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0fd7a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0fd7d mov edx, dword ptr [ecx + 0x10a304dc] */
  EDX = (r32((uint32_t)(ECX + 0x10a304dc)));
  /* 10a0fd83 push edx */
  push32((uint32_t)(EDX));
  /* 10a0fd84 call 0x10a11880 */
  push32(0x10a0fd89u); f_10a11880();
  /* 10a0fd89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fd8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fd8e je 0x10a0fd97 */
  if (C.zf) goto L_10a0fd97;
  /* 10a0fd90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a0fd97:;
  /* 10a0fd97 jmp 0x10a0fdc7 */
  goto L_10a0fdc7;
L_10a0fd99:;
  /* 10a0fd99 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fd9d jne 0x10a0fda6 */
  if (!C.zf) goto L_10a0fda6;
  /* 10a0fd9f mov eax, dword ptr [0x10a304dc] */
  EAX = (r32((uint32_t)(0x10a304dc)));
  /* 10a0fda4 jmp 0x10a0fdcc */
  goto L_10a0fdcc;
L_10a0fda6:;
  /* 10a0fda6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0fda8 mov eax, dword ptr [0x10a304dc] */
  EAX = (r32((uint32_t)(0x10a304dc)));
  /* 10a0fdad push eax */
  push32((uint32_t)(EAX));
  /* 10a0fdae call 0x10a06680 */
  push32(0x10a0fdb3u); f_10a06680();
  /* 10a0fdb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fdb6 mov dword ptr [0x10a304dc], 0 */
  w32((uint32_t)(0x10a304dc), (0x0u));
  /* 10a0fdc0 mov eax, dword ptr [0x10a304f4] */
  EAX = (r32((uint32_t)(0x10a304f4)));
  /* 10a0fdc5 jmp 0x10a0fdcc */
  goto L_10a0fdcc;
L_10a0fdc7:;
  /* 10a0fdc7 jmp 0x10a0fd15 */
  goto L_10a0fd15;
L_10a0fdcc:;
  /* 10a0fdcc mov esp, ebp */
  ESP = (EBP);
  /* 10a0fdce pop ebp */
  EBP = (pop32());
  /* 10a0fdcf ret  */
  ESPCHK(0x10a0fcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdd0 @ 0x10a0fdd0 (388 bytes, 115 insns) */
void f_10a0fdd0(void) {
  FTRACE(0x10a0fdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0fdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0fdd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0fdd3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0fdd9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fddd jne 0x10a0fde6 */
  if (!C.zf) goto L_10a0fde6;
  /* 10a0fddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0fde1 jmp 0x10a0ff50 */
  goto L_10a0ff50;
L_10a0fde6:;
  /* 10a0fde6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fde9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a0fdec cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fdef jne 0x10a0fe40 */
  if (!C.zf) goto L_10a0fe40;
  /* 10a0fdf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fdf4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a0fdf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fdfa jne 0x10a0fe40 */
  if (!C.zf) goto L_10a0fe40;
  /* 10a0fdfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0fdff mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10a0fe02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0fe05 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10a0fe09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fe0d je 0x10a0fe29 */
  if (C.zf) goto L_10a0fe29;
  /* 10a0fe0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0fe12 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10a0fe17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0fe1a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10a0fe20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0fe23 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10a0fe29:;
  /* 10a0fe29 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fe2d je 0x10a0fe38 */
  if (C.zf) goto L_10a0fe38;
  /* 10a0fe2f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0fe32 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a0fe38:;
  /* 10a0fe38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0fe3b jmp 0x10a0ff50 */
  goto L_10a0ff50;
L_10a0fe40:;
  /* 10a0fe40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fe43 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fe44 push 0x10a30450 */
  push32((uint32_t)(0x10a30450u));
  /* 10a0fe49 call 0x10a11880 */
  push32(0x10a0fe4eu); f_10a11880();
  /* 10a0fe4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fe51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fe53 je 0x10a0ff08 */
  if (C.zf) goto L_10a0ff08;
  /* 10a0fe59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fe5c push edx */
  push32((uint32_t)(EDX));
  /* 10a0fe5d push 0x10a303cc */
  push32((uint32_t)(0x10a303ccu));
  /* 10a0fe62 call 0x10a11880 */
  push32(0x10a0fe67u); f_10a11880();
  /* 10a0fe67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fe6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fe6c je 0x10a0ff08 */
  if (C.zf) goto L_10a0ff08;
  /* 10a0fe72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fe75 push eax */
  push32((uint32_t)(EAX));
  /* 10a0fe76 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10a0fe7c push ecx */
  push32((uint32_t)(ECX));
  /* 10a0fe7d call 0x10a0ffc0 */
  push32(0x10a0fe82u); f_10a0ffc0();
  /* 10a0fe82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fe85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fe87 je 0x10a0fe90 */
  if (C.zf) goto L_10a0fe90;
  /* 10a0fe89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0fe8b jmp 0x10a0ff50 */
  goto L_10a0ff50;
L_10a0fe90:;
  /* 10a0fe90 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10a0fe96 push edx */
  push32((uint32_t)(EDX));
  /* 10a0fe97 push 0x10a318f8 */
  push32((uint32_t)(0x10a318f8u));
  /* 10a0fe9c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10a0fea2 push eax */
  push32((uint32_t)(EAX));
  /* 10a0fea3 call 0x10a119d0 */
  push32(0x10a0fea8u); f_10a119d0();
  /* 10a0fea8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0feab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fead jne 0x10a0feb6 */
  if (!C.zf) goto L_10a0feb6;
  /* 10a0feaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0feb1 jmp 0x10a0ff50 */
  goto L_10a0ff50;
L_10a0feb6:;
  /* 10a0feb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0feb8 mov cx, word ptr [0x10a318fc] */
  CX = (r16((uint32_t)(0x10a318fc)));
  /* 10a0febf mov dword ptr [0x10a31900], ecx */
  w32((uint32_t)(0x10a31900), (ECX));
  /* 10a0fec5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10a0fecb push edx */
  push32((uint32_t)(EDX));
  /* 10a0fecc push 0x10a30450 */
  push32((uint32_t)(0x10a30450u));
  /* 10a0fed1 call 0x10a10120 */
  push32(0x10a0fed6u); f_10a10120();
  /* 10a0fed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fed9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fedc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a0fedf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0fee1 je 0x10a0fef6 */
  if (C.zf) goto L_10a0fef6;
  /* 10a0fee3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0fee6 push edx */
  push32((uint32_t)(EDX));
  /* 10a0fee7 push 0x10a303cc */
  push32((uint32_t)(0x10a303ccu));
  /* 10a0feec call 0x10a08ba0 */
  push32(0x10a0fef1u); f_10a08ba0();
  /* 10a0fef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0fef4 jmp 0x10a0ff08 */
  goto L_10a0ff08;
L_10a0fef6:;
  /* 10a0fef6 push 0x10a30450 */
  push32((uint32_t)(0x10a30450u));
  /* 10a0fefb push 0x10a303cc */
  push32((uint32_t)(0x10a303ccu));
  /* 10a0ff00 call 0x10a08ba0 */
  push32(0x10a0ff05u); f_10a08ba0();
  /* 10a0ff05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0ff08:;
  /* 10a0ff08 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ff0c je 0x10a0ff21 */
  if (C.zf) goto L_10a0ff21;
  /* 10a0ff0e push 6 */
  push32((uint32_t)(0x6u));
  /* 10a0ff10 push 0x10a318f8 */
  push32((uint32_t)(0x10a318f8u));
  /* 10a0ff15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0ff18 push eax */
  push32((uint32_t)(EAX));
  /* 10a0ff19 call 0x10a0c4d0 */
  push32(0x10a0ff1eu); f_10a0c4d0();
  /* 10a0ff1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0ff21:;
  /* 10a0ff21 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ff25 je 0x10a0ff3a */
  if (C.zf) goto L_10a0ff3a;
  /* 10a0ff27 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a0ff29 push 0x10a31900 */
  push32((uint32_t)(0x10a31900u));
  /* 10a0ff2e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0ff31 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0ff32 call 0x10a0c4d0 */
  push32(0x10a0ff37u); f_10a0c4d0();
  /* 10a0ff37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0ff3a:;
  /* 10a0ff3a push 0x10a30450 */
  push32((uint32_t)(0x10a30450u));
  /* 10a0ff3f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0ff42 push edx */
  push32((uint32_t)(EDX));
  /* 10a0ff43 call 0x10a08ba0 */
  push32(0x10a0ff48u); f_10a08ba0();
  /* 10a0ff48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ff4b mov eax, 0x10a30450 */
  EAX = (0x10a30450u);
L_10a0ff50:;
  /* 10a0ff50 mov esp, ebp */
  ESP = (EBP);
  /* 10a0ff52 pop ebp */
  EBP = (pop32());
  /* 10a0ff53 ret  */
  ESPCHK(0x10a0fdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff60 @ 0x10a0ff60 (7 bytes, 5 insns) */
void f_10a0ff60(void) {
  FTRACE(0x10a0ff60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0ff60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0ff61 mov ebp, esp */
  EBP = (ESP);
  /* 10a0ff63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ff65 pop ebp */
  EBP = (pop32());
  /* 10a0ff66 ret  */
  ESPCHK(0x10a0ff60u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10a0ff70 (79 bytes, 28 insns) */
void f_10a0ff70(void) {
  FTRACE(0x10a0ff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0ff70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0ff71 mov ebp, esp */
  EBP = (ESP);
  /* 10a0ff73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ff76 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a0ff79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0ff7c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a0ff83 jmp 0x10a0ff8e */
  goto L_10a0ff8e;
L_10a0ff85:;
  /* 10a0ff85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ff88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ff8b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a0ff8e:;
  /* 10a0ff8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0ff91 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0ff94 jge 0x10a0ffb4 */
  if ((C.sf==C.of)) goto L_10a0ffb4;
  /* 10a0ff96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ff99 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ff9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0ff9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0ffa2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a0ffa5 push edx */
  push32((uint32_t)(EDX));
  /* 10a0ffa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ffa9 push eax */
  push32((uint32_t)(EAX));
  /* 10a0ffaa call 0x10a08bb0 */
  push32(0x10a0ffafu); f_10a08bb0();
  /* 10a0ffaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ffb2 jmp 0x10a0ff85 */
  goto L_10a0ff85;
L_10a0ffb4:;
  /* 10a0ffb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0ffbb mov esp, ebp */
  ESP = (EBP);
  /* 10a0ffbd pop ebp */
  EBP = (pop32());
  /* 10a0ffbe ret  */
  ESPCHK(0x10a0ff70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffc0 @ 0x10a0ffc0 (349 bytes, 122 insns) */
void f_10a0ffc0(void) {
  FTRACE(0x10a0ffc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0ffc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a0ffc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a0ffc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0ffc6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10a0ffcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0ffcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0ffd0 push eax */
  push32((uint32_t)(EAX));
  /* 10a0ffd1 call 0x10a09960 */
  push32(0x10a0ffd6u); f_10a09960();
  /* 10a0ffd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0ffd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0ffdc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a0ffdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0ffe1 jne 0x10a0ffea */
  if (!C.zf) goto L_10a0ffea;
  /* 10a0ffe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0ffe5 jmp 0x10a10119 */
  goto L_10a10119;
L_10a0ffea:;
  /* 10a0ffea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0ffed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a0fff0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0fff3 jne 0x10a10020 */
  if (!C.zf) goto L_10a10020;
  /* 10a0fff5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0fff8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a0fffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0fffe je 0x10a10020 */
  if (C.zf) goto L_10a10020;
  /* 10a10000 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a10003 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10006 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1000a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10010 push edx */
  push32((uint32_t)(EDX));
  /* 10a10011 call 0x10a08ba0 */
  push32(0x10a10016u); f_10a08ba0();
  /* 10a10016 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10019 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1001b jmp 0x10a10119 */
  goto L_10a10119;
L_10a10020:;
  /* 10a10020 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a10027 jmp 0x10a10032 */
  goto L_10a10032;
L_10a10029:;
  /* 10a10029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1002c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1002f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a10032:;
  /* 10a10032 push 0x10a2d2b0 */
  push32((uint32_t)(0x10a2d2b0u));
  /* 10a10037 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1003a push ecx */
  push32((uint32_t)(ECX));
  /* 10a1003b call 0x10a11910 */
  push32(0x10a10040u); f_10a11910();
  /* 10a10040 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10043 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a10046 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1004a jne 0x10a10054 */
  if (!C.zf) goto L_10a10054;
  /* 10a1004c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a1004f jmp 0x10a10119 */
  goto L_10a10119;
L_10a10054:;
  /* 10a10054 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a10057 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1005a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a1005c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10a1005f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10063 jne 0x10a1008a */
  if (!C.zf) goto L_10a1008a;
  /* 10a10065 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10069 jge 0x10a1008a */
  if ((C.sf==C.of)) goto L_10a1008a;
  /* 10a1006b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a1006f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10072 je 0x10a1008a */
  if (C.zf) goto L_10a1008a;
  /* 10a10074 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10077 push edx */
  push32((uint32_t)(EDX));
  /* 10a10078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1007b push eax */
  push32((uint32_t)(EAX));
  /* 10a1007c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1007f push ecx */
  push32((uint32_t)(ECX));
  /* 10a10080 call 0x10a09410 */
  push32(0x10a10085u); f_10a09410();
  /* 10a10085 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10088 jmp 0x10a100f0 */
  goto L_10a100f0;
L_10a1008a:;
  /* 10a1008a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1008e jne 0x10a100b8 */
  if (!C.zf) goto L_10a100b8;
  /* 10a10090 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10094 jge 0x10a100b8 */
  if ((C.sf==C.of)) goto L_10a100b8;
  /* 10a10096 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a1009a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1009d je 0x10a100b8 */
  if (C.zf) goto L_10a100b8;
  /* 10a1009f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a100a2 push eax */
  push32((uint32_t)(EAX));
  /* 10a100a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a100a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a100a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a100aa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a100ad push edx */
  push32((uint32_t)(EDX));
  /* 10a100ae call 0x10a09410 */
  push32(0x10a100b3u); f_10a09410();
  /* 10a100b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a100b6 jmp 0x10a100f0 */
  goto L_10a100f0;
L_10a100b8:;
  /* 10a100b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a100bc jne 0x10a100eb */
  if (!C.zf) goto L_10a100eb;
  /* 10a100be movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a100c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a100c4 je 0x10a100cf */
  if (C.zf) goto L_10a100cf;
  /* 10a100c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a100ca cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a100cd jne 0x10a100eb */
  if (!C.zf) goto L_10a100eb;
L_10a100cf:;
  /* 10a100cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a100d2 push edx */
  push32((uint32_t)(EDX));
  /* 10a100d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a100d6 push eax */
  push32((uint32_t)(EAX));
  /* 10a100d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a100da add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a100e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a100e1 call 0x10a09410 */
  push32(0x10a100e6u); f_10a09410();
  /* 10a100e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a100e9 jmp 0x10a100f0 */
  goto L_10a100f0;
L_10a100eb:;
  /* 10a100eb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a100ee jmp 0x10a10119 */
  goto L_10a10119;
L_10a100f0:;
  /* 10a100f0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a100f4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a100f7 jne 0x10a100fb */
  if (!C.zf) goto L_10a100fb;
  /* 10a100f9 jmp 0x10a10117 */
  goto L_10a10117;
L_10a100fb:;
  /* 10a100fb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a100ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a10101 jne 0x10a10105 */
  if (!C.zf) goto L_10a10105;
  /* 10a10103 jmp 0x10a10117 */
  goto L_10a10117;
L_10a10105:;
  /* 10a10105 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10108 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1010b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10a1010f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a10112 jmp 0x10a10029 */
  goto L_10a10029;
L_10a10117:;
  /* 10a10117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a10119:;
  /* 10a10119 mov esp, ebp */
  ESP = (EBP);
  /* 10a1011b pop ebp */
  EBP = (pop32());
  /* 10a1011c ret  */
  ESPCHK(0x10a0ffc0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10a10120 (101 bytes, 36 insns) */
void f_10a10120(void) {
  FTRACE(0x10a10120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a10120 push ebp */
  push32((uint32_t)(EBP));
  /* 10a10121 mov ebp, esp */
  EBP = (ESP);
  /* 10a10123 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a10126 push eax */
  push32((uint32_t)(EAX));
  /* 10a10127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1012a push ecx */
  push32((uint32_t)(ECX));
  /* 10a1012b call 0x10a08ba0 */
  push32(0x10a10130u); f_10a08ba0();
  /* 10a10130 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10133 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a10136 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10a1013a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1013c je 0x10a10158 */
  if (C.zf) goto L_10a10158;
  /* 10a1013e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a10141 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10144 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10145 push 0x10a2d2b8 */
  push32((uint32_t)(0x10a2d2b8u));
  /* 10a1014a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1014c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1014f push edx */
  push32((uint32_t)(EDX));
  /* 10a10150 call 0x10a0ff70 */
  push32(0x10a10155u); f_10a0ff70();
  /* 10a10155 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a10158:;
  /* 10a10158 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1015b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10a10162 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a10164 je 0x10a10183 */
  if (C.zf) goto L_10a10183;
  /* 10a10166 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a10169 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1016f push edx */
  push32((uint32_t)(EDX));
  /* 10a10170 push 0x10a2d2b4 */
  push32((uint32_t)(0x10a2d2b4u));
  /* 10a10175 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1017a push eax */
  push32((uint32_t)(EAX));
  /* 10a1017b call 0x10a0ff70 */
  push32(0x10a10180u); f_10a0ff70();
  /* 10a10180 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a10183:;
  /* 10a10183 pop ebp */
  EBP = (pop32());
  /* 10a10184 ret  */
  ESPCHK(0x10a10120u, _esp0);
  ESP += 4; return;
}

/* FUN_10010190 @ 0x10a10190 (130 bytes, 50 insns) */
void f_10a10190(void) {
  FTRACE(0x10a10190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a10190 push ebp */
  push32((uint32_t)(EBP));
  /* 10a10191 mov ebp, esp */
  EBP = (ESP);
  /* 10a10193 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10194 push ebx */
  push32((uint32_t)(EBX));
  /* 10a10195 push esi */
  push32((uint32_t)(ESI));
  /* 10a10196 push edi */
  push32((uint32_t)(EDI));
  /* 10a10197 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a1019e:;
  /* 10a1019e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a101a2 jne 0x10a101c2 */
  if (!C.zf) goto L_10a101c2;
  /* 10a101a4 push 0x10a2d2c8 */
  push32((uint32_t)(0x10a2d2c8u));
  /* 10a101a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a101ab push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10a101ad push 0x10a2d2bc */
  push32((uint32_t)(0x10a2d2bcu));
  /* 10a101b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a101b4 call 0x10a04cb0 */
  push32(0x10a101b9u); f_10a04cb0();
  /* 10a101b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a101bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a101bf jne 0x10a101c2 */
  if (!C.zf) goto L_10a101c2;
  /* 10a101c1 int3  */
  x86_unimpl("int3 @ 0x10a101c1");
L_10a101c2:;
  /* 10a101c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a101c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a101c6 jne 0x10a1019e */
  if (!C.zf) goto L_10a1019e;
  /* 10a101c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a101cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a101ce and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10a101d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a101d3 je 0x10a101e1 */
  if (C.zf) goto L_10a101e1;
  /* 10a101d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a101d8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10a101df jmp 0x10a10208 */
  goto L_10a10208;
L_10a101e1:;
  /* 10a101e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a101e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a101e5 call 0x10a0ea00 */
  push32(0x10a101eau); f_10a0ea00();
  /* 10a101ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a101ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a101f0 push edx */
  push32((uint32_t)(EDX));
  /* 10a101f1 call 0x10a10220 */
  push32(0x10a101f6u); f_10a10220();
  /* 10a101f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a101f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a101fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a101ff push eax */
  push32((uint32_t)(EAX));
  /* 10a10200 call 0x10a0ea70 */
  push32(0x10a10205u); f_10a0ea70();
  /* 10a10205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a10208:;
  /* 10a10208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1020b pop edi */
  EDI = (pop32());
  /* 10a1020c pop esi */
  ESI = (pop32());
  /* 10a1020d pop ebx */
  EBX = (pop32());
  /* 10a1020e mov esp, ebp */
  ESP = (EBP);
  /* 10a10210 pop ebp */
  EBP = (pop32());
  /* 10a10211 ret  */
  ESPCHK(0x10a10190u, _esp0);
  ESP += 4; return;
}

/* FUN_10010220 @ 0x10a10220 (190 bytes, 67 insns) */
void f_10a10220(void) {
  FTRACE(0x10a10220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a10220 push ebp */
  push32((uint32_t)(EBP));
  /* 10a10221 mov ebp, esp */
  EBP = (ESP);
  /* 10a10223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a10226 push ebx */
  push32((uint32_t)(EBX));
  /* 10a10227 push esi */
  push32((uint32_t)(ESI));
  /* 10a10228 push edi */
  push32((uint32_t)(EDI));
  /* 10a10229 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a10230 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10233 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a10236:;
  /* 10a10236 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1023a jne 0x10a1025a */
  if (!C.zf) goto L_10a1025a;
  /* 10a1023c push 0x10a2d16c */
  push32((uint32_t)(0x10a2d16cu));
  /* 10a10241 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a10243 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10a10245 push 0x10a2d2bc */
  push32((uint32_t)(0x10a2d2bcu));
  /* 10a1024a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1024c call 0x10a04cb0 */
  push32(0x10a10251u); f_10a04cb0();
  /* 10a10251 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10254 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10257 jne 0x10a1025a */
  if (!C.zf) goto L_10a1025a;
  /* 10a10259 int3  */
  x86_unimpl("int3 @ 0x10a10259");
L_10a1025a:;
  /* 10a1025a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1025c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a1025e jne 0x10a10236 */
  if (!C.zf) goto L_10a10236;
  /* 10a10260 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a10263 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a10266 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10a1026b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1026d je 0x10a102ca */
  if (C.zf) goto L_10a102ca;
  /* 10a1026f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a10272 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10273 call 0x10a0f520 */
  push32(0x10a10278u); f_10a0f520();
  /* 10a10278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1027b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a1027e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a10281 push edx */
  push32((uint32_t)(EDX));
  /* 10a10282 call 0x10a128a0 */
  push32(0x10a10287u); f_10a128a0();
  /* 10a10287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1028a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a1028d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a10290 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10291 call 0x10a12770 */
  push32(0x10a10296u); f_10a12770();
  /* 10a10296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10299 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1029b jge 0x10a102a6 */
  if ((C.sf==C.of)) goto L_10a102a6;
  /* 10a1029d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a102a4 jmp 0x10a102ca */
  goto L_10a102ca;
L_10a102a6:;
  /* 10a102a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a102a9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a102ad je 0x10a102ca */
  if (C.zf) goto L_10a102ca;
  /* 10a102af push 2 */
  push32((uint32_t)(0x2u));
  /* 10a102b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a102b4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a102b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a102b8 call 0x10a06680 */
  push32(0x10a102bdu); f_10a06680();
  /* 10a102bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a102c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a102c3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10a102ca:;
  /* 10a102ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a102cd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10a102d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a102d7 pop edi */
  EDI = (pop32());
  /* 10a102d8 pop esi */
  ESI = (pop32());
  /* 10a102d9 pop ebx */
  EBX = (pop32());
  /* 10a102da mov esp, ebp */
  ESP = (EBP);
  /* 10a102dc pop ebp */
  EBP = (pop32());
  /* 10a102dd ret  */
  ESPCHK(0x10a10220u, _esp0);
  ESP += 4; return;
}

/* FUN_100102e0 @ 0x10a102e0 (210 bytes, 63 insns) */
void f_10a102e0(void) {
  FTRACE(0x10a102e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a102e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a102e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a102e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a102e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a102e7 cmp eax, dword ptr [0x10a331fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a331fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a102ed jae 0x10a10311 */
  if (!C.cf) goto L_10a10311;
  /* 10a102ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a102f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a102f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a102f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a102fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a102fe mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a10305 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a1030a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a1030d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a1030f jne 0x10a10324 */
  if (!C.zf) goto L_10a10324;
L_10a10311:;
  /* 10a10311 call 0x10a0dac0 */
  push32(0x10a10316u); f_10a0dac0();
  /* 10a10316 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a1031c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a1031f jmp 0x10a103ae */
  goto L_10a103ae;
L_10a10324:;
  /* 10a10324 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10327 push edx */
  push32((uint32_t)(EDX));
  /* 10a10328 call 0x10a0f2e0 */
  push32(0x10a1032du); f_10a0f2e0();
  /* 10a1032d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10333 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a10336 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10339 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a1033c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a1033f mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a10346 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10a1034b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a1034e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a10350 je 0x10a1038d */
  if (C.zf) goto L_10a1038d;
  /* 10a10352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10355 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10356 call 0x10a0f160 */
  push32(0x10a1035bu); f_10a0f160();
  /* 10a1035b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1035e push eax */
  push32((uint32_t)(EAX));
  /* 10a1035f call dword ptr [0x10a342d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342d8))), 0x10a10365u);
  /* 10a10365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a10367 jne 0x10a10374 */
  if (!C.zf) goto L_10a10374;
  /* 10a10369 call dword ptr [0x10a34388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34388))), 0x10a1036fu);
  /* 10a1036f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a10372 jmp 0x10a1037b */
  goto L_10a1037b;
L_10a10374:;
  /* 10a10374 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a1037b:;
  /* 10a1037b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1037f jne 0x10a10383 */
  if (!C.zf) goto L_10a10383;
  /* 10a10381 jmp 0x10a1039f */
  goto L_10a1039f;
L_10a10383:;
  /* 10a10383 call 0x10a0dad0 */
  push32(0x10a10388u); f_10a0dad0();
  /* 10a10388 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1038b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a1038d:;
  /* 10a1038d call 0x10a0dac0 */
  push32(0x10a10392u); f_10a0dac0();
  /* 10a10392 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a10398 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a1039f:;
  /* 10a1039f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a103a2 push eax */
  push32((uint32_t)(EAX));
  /* 10a103a3 call 0x10a0f370 */
  push32(0x10a103a8u); f_10a0f370();
  /* 10a103a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a103ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a103ae:;
  /* 10a103ae mov esp, ebp */
  ESP = (EBP);
  /* 10a103b0 pop ebp */
  EBP = (pop32());
  /* 10a103b1 ret  */
  ESPCHK(0x10a102e0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10a103c0 (219 bytes, 64 insns) */
void f_10a103c0(void) {
  FTRACE(0x10a103c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a103c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a103c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a103c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a103c4 cmp dword ptr [0x10a318e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a103cb je 0x10a10461 */
  if (C.zf) goto L_10a10461;
  /* 10a103d1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10a103d3 push 0x10a2d2d8 */
  push32((uint32_t)(0x10a2d2d8u));
  /* 10a103d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a103da push 0xac */
  push32((uint32_t)(0xacu));
  /* 10a103df push 1 */
  push32((uint32_t)(0x1u));
  /* 10a103e1 call 0x10a06000 */
  push32(0x10a103e6u); f_10a06000();
  /* 10a103e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a103e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a103ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a103f0 jne 0x10a103fc */
  if (!C.zf) goto L_10a103fc;
  /* 10a103f2 mov eax, 1 */
  EAX = (0x1u);
  /* 10a103f7 jmp 0x10a10497 */
  goto L_10a10497;
L_10a103fc:;
  /* 10a103fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a103ff push eax */
  push32((uint32_t)(EAX));
  /* 10a10400 call 0x10a104a0 */
  push32(0x10a10405u); f_10a104a0();
  /* 10a10405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1040a je 0x10a1042d */
  if (C.zf) goto L_10a1042d;
  /* 10a1040c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1040f push ecx */
  push32((uint32_t)(ECX));
  /* 10a10410 call 0x10a10a30 */
  push32(0x10a10415u); f_10a10a30();
  /* 10a10415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10418 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1041a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1041d push edx */
  push32((uint32_t)(EDX));
  /* 10a1041e call 0x10a06680 */
  push32(0x10a10423u); f_10a06680();
  /* 10a10423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10426 mov eax, 1 */
  EAX = (0x1u);
  /* 10a1042b jmp 0x10a10497 */
  goto L_10a10497;
L_10a1042d:;
  /* 10a1042d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10430 mov dword ptr [0x10a30c98], eax */
  w32((uint32_t)(0x10a30c98), (EAX));
  /* 10a10435 mov ecx, dword ptr [0x10a31904] */
  ECX = (r32((uint32_t)(0x10a31904)));
  /* 10a1043b push ecx */
  push32((uint32_t)(ECX));
  /* 10a1043c call 0x10a10a30 */
  push32(0x10a10441u); f_10a10a30();
  /* 10a10441 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10444 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10446 mov edx, dword ptr [0x10a31904] */
  EDX = (r32((uint32_t)(0x10a31904)));
  /* 10a1044c push edx */
  push32((uint32_t)(EDX));
  /* 10a1044d call 0x10a06680 */
  push32(0x10a10452u); f_10a06680();
  /* 10a10452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10458 mov dword ptr [0x10a31904], eax */
  w32((uint32_t)(0x10a31904), (EAX));
  /* 10a1045d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1045f jmp 0x10a10497 */
  goto L_10a10497;
L_10a10461:;
  /* 10a10461 mov dword ptr [0x10a30c98], 0x10a30ca0 */
  w32((uint32_t)(0x10a30c98), (0x10a30ca0u));
  /* 10a1046b mov ecx, dword ptr [0x10a31904] */
  ECX = (r32((uint32_t)(0x10a31904)));
  /* 10a10471 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10472 call 0x10a10a30 */
  push32(0x10a10477u); f_10a10a30();
  /* 10a10477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1047a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1047c mov edx, dword ptr [0x10a31904] */
  EDX = (r32((uint32_t)(0x10a31904)));
  /* 10a10482 push edx */
  push32((uint32_t)(EDX));
  /* 10a10483 call 0x10a06680 */
  push32(0x10a10488u); f_10a06680();
  /* 10a10488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1048b mov dword ptr [0x10a31904], 0 */
  w32((uint32_t)(0x10a31904), (0x0u));
  /* 10a10495 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a10497:;
  /* 10a10497 mov esp, ebp */
  ESP = (EBP);
  /* 10a10499 pop ebp */
  EBP = (pop32());
  /* 10a1049a ret  */
  ESPCHK(0x10a103c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100104a0 @ 0x10a104a0 (1423 bytes, 533 insns) */
void f_10a104a0(void) {
  FTRACE(0x10a104a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a104a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a104a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a104a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a104a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a104ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a104af mov ax, word ptr [0x10a3193e] */
  AX = (r16((uint32_t)(0x10a3193e)));
  /* 10a104b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a104b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a104ba mov cx, word ptr [0x10a31940] */
  CX = (r16((uint32_t)(0x10a31940)));
  /* 10a104c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a104c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a104c8 jne 0x10a104d2 */
  if (!C.zf) goto L_10a104d2;
  /* 10a104ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a104cd jmp 0x10a10a2b */
  goto L_10a10a2b;
L_10a104d2:;
  /* 10a104d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a104d5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a104d8 push edx */
  push32((uint32_t)(EDX));
  /* 10a104d9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10a104db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a104de push eax */
  push32((uint32_t)(EAX));
  /* 10a104df push 1 */
  push32((uint32_t)(0x1u));
  /* 10a104e1 call 0x10a13db0 */
  push32(0x10a104e6u); f_10a13db0();
  /* 10a104e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a104e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a104ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a104ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a104f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a104f4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a104f7 push edx */
  push32((uint32_t)(EDX));
  /* 10a104f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10a104fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a104fd push eax */
  push32((uint32_t)(EAX));
  /* 10a104fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10500 call 0x10a13db0 */
  push32(0x10a10505u); f_10a13db0();
  /* 10a10505 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10508 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1050b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1050d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10510 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10513 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10516 push edx */
  push32((uint32_t)(EDX));
  /* 10a10517 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10a10519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1051c push eax */
  push32((uint32_t)(EAX));
  /* 10a1051d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1051f call 0x10a13db0 */
  push32(0x10a10524u); f_10a13db0();
  /* 10a10524 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10527 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1052a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1052c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a1052f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10532 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10535 push edx */
  push32((uint32_t)(EDX));
  /* 10a10536 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10a10538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1053b push eax */
  push32((uint32_t)(EAX));
  /* 10a1053c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1053e call 0x10a13db0 */
  push32(0x10a10543u); f_10a13db0();
  /* 10a10543 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10546 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10549 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1054b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a1054e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10551 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10554 push edx */
  push32((uint32_t)(EDX));
  /* 10a10555 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10a10557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1055a push eax */
  push32((uint32_t)(EAX));
  /* 10a1055b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1055d call 0x10a13db0 */
  push32(0x10a10562u); f_10a13db0();
  /* 10a10562 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10565 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10568 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1056a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a1056d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10570 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10573 push edx */
  push32((uint32_t)(EDX));
  /* 10a10574 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10a10576 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10579 push eax */
  push32((uint32_t)(EAX));
  /* 10a1057a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1057c call 0x10a13db0 */
  push32(0x10a10581u); f_10a13db0();
  /* 10a10581 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10584 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10587 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10589 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a1058c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1058f push edx */
  push32((uint32_t)(EDX));
  /* 10a10590 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10a10592 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10595 push eax */
  push32((uint32_t)(EAX));
  /* 10a10596 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10598 call 0x10a13db0 */
  push32(0x10a1059du); f_10a13db0();
  /* 10a1059d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a105a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a105a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a105a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a105a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a105ab add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a105ae push edx */
  push32((uint32_t)(EDX));
  /* 10a105af push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10a105b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a105b4 push eax */
  push32((uint32_t)(EAX));
  /* 10a105b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a105b7 call 0x10a13db0 */
  push32(0x10a105bcu); f_10a13db0();
  /* 10a105bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a105bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a105c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a105c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a105c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a105ca add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a105cd push edx */
  push32((uint32_t)(EDX));
  /* 10a105ce push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10a105d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a105d3 push eax */
  push32((uint32_t)(EAX));
  /* 10a105d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a105d6 call 0x10a13db0 */
  push32(0x10a105dbu); f_10a13db0();
  /* 10a105db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a105de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a105e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a105e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a105e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a105e9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a105ec push edx */
  push32((uint32_t)(EDX));
  /* 10a105ed push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10a105ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a105f2 push eax */
  push32((uint32_t)(EAX));
  /* 10a105f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a105f5 call 0x10a13db0 */
  push32(0x10a105fau); f_10a13db0();
  /* 10a105fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a105fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10600 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10602 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10605 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10608 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1060b push edx */
  push32((uint32_t)(EDX));
  /* 10a1060c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10a1060e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10611 push eax */
  push32((uint32_t)(EAX));
  /* 10a10612 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10614 call 0x10a13db0 */
  push32(0x10a10619u); f_10a13db0();
  /* 10a10619 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1061c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1061f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10621 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10624 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10627 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1062a push edx */
  push32((uint32_t)(EDX));
  /* 10a1062b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10a1062d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10630 push eax */
  push32((uint32_t)(EAX));
  /* 10a10631 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10633 call 0x10a13db0 */
  push32(0x10a10638u); f_10a13db0();
  /* 10a10638 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1063b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1063e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10640 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10643 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10646 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10649 push edx */
  push32((uint32_t)(EDX));
  /* 10a1064a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10a1064c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1064f push eax */
  push32((uint32_t)(EAX));
  /* 10a10650 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10652 call 0x10a13db0 */
  push32(0x10a10657u); f_10a13db0();
  /* 10a10657 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1065a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1065d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1065f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10662 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10665 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10668 push edx */
  push32((uint32_t)(EDX));
  /* 10a10669 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a1066b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1066e push eax */
  push32((uint32_t)(EAX));
  /* 10a1066f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10671 call 0x10a13db0 */
  push32(0x10a10676u); f_10a13db0();
  /* 10a10676 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10679 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1067c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1067e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10684 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10687 push edx */
  push32((uint32_t)(EDX));
  /* 10a10688 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10a1068a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1068d push eax */
  push32((uint32_t)(EAX));
  /* 10a1068e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10690 call 0x10a13db0 */
  push32(0x10a10695u); f_10a13db0();
  /* 10a10695 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10698 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1069b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1069d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a106a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a106a3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a106a6 push edx */
  push32((uint32_t)(EDX));
  /* 10a106a7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10a106a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a106ac push eax */
  push32((uint32_t)(EAX));
  /* 10a106ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10a106af call 0x10a13db0 */
  push32(0x10a106b4u); f_10a13db0();
  /* 10a106b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a106b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a106ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a106bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a106bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a106c2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a106c5 push edx */
  push32((uint32_t)(EDX));
  /* 10a106c6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10a106c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a106cb push eax */
  push32((uint32_t)(EAX));
  /* 10a106cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10a106ce call 0x10a13db0 */
  push32(0x10a106d3u); f_10a13db0();
  /* 10a106d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a106d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a106d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a106db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a106de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a106e1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a106e4 push edx */
  push32((uint32_t)(EDX));
  /* 10a106e5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10a106e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a106ea push eax */
  push32((uint32_t)(EAX));
  /* 10a106eb push 1 */
  push32((uint32_t)(0x1u));
  /* 10a106ed call 0x10a13db0 */
  push32(0x10a106f2u); f_10a13db0();
  /* 10a106f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a106f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a106f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a106fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a106fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10700 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10703 push edx */
  push32((uint32_t)(EDX));
  /* 10a10704 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10a10706 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10709 push eax */
  push32((uint32_t)(EAX));
  /* 10a1070a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1070c call 0x10a13db0 */
  push32(0x10a10711u); f_10a13db0();
  /* 10a10711 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10714 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10717 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10719 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a1071c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1071f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10722 push edx */
  push32((uint32_t)(EDX));
  /* 10a10723 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10a10725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10728 push eax */
  push32((uint32_t)(EAX));
  /* 10a10729 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1072b call 0x10a13db0 */
  push32(0x10a10730u); f_10a13db0();
  /* 10a10730 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10733 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10736 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10738 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a1073b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1073e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10741 push edx */
  push32((uint32_t)(EDX));
  /* 10a10742 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10a10744 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10747 push eax */
  push32((uint32_t)(EAX));
  /* 10a10748 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1074a call 0x10a13db0 */
  push32(0x10a1074fu); f_10a13db0();
  /* 10a1074f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10752 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10755 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10757 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a1075a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1075d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10760 push edx */
  push32((uint32_t)(EDX));
  /* 10a10761 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10a10763 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10766 push eax */
  push32((uint32_t)(EAX));
  /* 10a10767 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10769 call 0x10a13db0 */
  push32(0x10a1076eu); f_10a13db0();
  /* 10a1076e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10771 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10774 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10776 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10779 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1077c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1077f push edx */
  push32((uint32_t)(EDX));
  /* 10a10780 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10a10782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10785 push eax */
  push32((uint32_t)(EAX));
  /* 10a10786 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10788 call 0x10a13db0 */
  push32(0x10a1078du); f_10a13db0();
  /* 10a1078d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10790 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10793 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10795 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1079b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1079e push edx */
  push32((uint32_t)(EDX));
  /* 10a1079f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10a107a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a107a4 push eax */
  push32((uint32_t)(EAX));
  /* 10a107a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a107a7 call 0x10a13db0 */
  push32(0x10a107acu); f_10a13db0();
  /* 10a107ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a107af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a107b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a107b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a107b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a107ba add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a107bd push edx */
  push32((uint32_t)(EDX));
  /* 10a107be push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10a107c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a107c3 push eax */
  push32((uint32_t)(EAX));
  /* 10a107c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a107c6 call 0x10a13db0 */
  push32(0x10a107cbu); f_10a13db0();
  /* 10a107cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a107ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a107d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a107d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a107d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a107d9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a107dc push edx */
  push32((uint32_t)(EDX));
  /* 10a107dd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10a107df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a107e2 push eax */
  push32((uint32_t)(EAX));
  /* 10a107e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a107e5 call 0x10a13db0 */
  push32(0x10a107eau); f_10a13db0();
  /* 10a107ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a107ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a107f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a107f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a107f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a107f8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a107fb push edx */
  push32((uint32_t)(EDX));
  /* 10a107fc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10a107fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10801 push eax */
  push32((uint32_t)(EAX));
  /* 10a10802 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10804 call 0x10a13db0 */
  push32(0x10a10809u); f_10a13db0();
  /* 10a10809 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1080c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1080f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10811 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10814 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10817 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1081a push edx */
  push32((uint32_t)(EDX));
  /* 10a1081b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10a1081d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10820 push eax */
  push32((uint32_t)(EAX));
  /* 10a10821 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10823 call 0x10a13db0 */
  push32(0x10a10828u); f_10a13db0();
  /* 10a10828 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1082b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1082e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10830 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10833 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10836 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10839 push edx */
  push32((uint32_t)(EDX));
  /* 10a1083a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10a1083c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1083f push eax */
  push32((uint32_t)(EAX));
  /* 10a10840 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10842 call 0x10a13db0 */
  push32(0x10a10847u); f_10a13db0();
  /* 10a10847 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1084a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1084d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1084f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10855 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10858 push edx */
  push32((uint32_t)(EDX));
  /* 10a10859 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10a1085b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1085e push eax */
  push32((uint32_t)(EAX));
  /* 10a1085f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10861 call 0x10a13db0 */
  push32(0x10a10866u); f_10a13db0();
  /* 10a10866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10869 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1086c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1086e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10874 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10877 push edx */
  push32((uint32_t)(EDX));
  /* 10a10878 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10a1087a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1087d push eax */
  push32((uint32_t)(EAX));
  /* 10a1087e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10880 call 0x10a13db0 */
  push32(0x10a10885u); f_10a13db0();
  /* 10a10885 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10888 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1088b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1088d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10890 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10893 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10896 push edx */
  push32((uint32_t)(EDX));
  /* 10a10897 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10a10899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1089c push eax */
  push32((uint32_t)(EAX));
  /* 10a1089d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1089f call 0x10a13db0 */
  push32(0x10a108a4u); f_10a13db0();
  /* 10a108a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a108a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a108aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a108ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a108af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a108b2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a108b8 push edx */
  push32((uint32_t)(EDX));
  /* 10a108b9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10a108bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a108be push eax */
  push32((uint32_t)(EAX));
  /* 10a108bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a108c1 call 0x10a13db0 */
  push32(0x10a108c6u); f_10a13db0();
  /* 10a108c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a108c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a108cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a108ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a108d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a108d4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a108da push edx */
  push32((uint32_t)(EDX));
  /* 10a108db push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10a108dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a108e0 push eax */
  push32((uint32_t)(EAX));
  /* 10a108e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a108e3 call 0x10a13db0 */
  push32(0x10a108e8u); f_10a13db0();
  /* 10a108e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a108eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a108ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a108f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a108f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a108f6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a108fc push edx */
  push32((uint32_t)(EDX));
  /* 10a108fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a108ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10902 push eax */
  push32((uint32_t)(EAX));
  /* 10a10903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10905 call 0x10a13db0 */
  push32(0x10a1090au); f_10a13db0();
  /* 10a1090a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1090d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10910 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10912 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10918 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1091e push edx */
  push32((uint32_t)(EDX));
  /* 10a1091f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10a10921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10924 push eax */
  push32((uint32_t)(EAX));
  /* 10a10925 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10927 call 0x10a13db0 */
  push32(0x10a1092cu); f_10a13db0();
  /* 10a1092c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1092f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10932 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10934 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10937 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1093a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10940 push edx */
  push32((uint32_t)(EDX));
  /* 10a10941 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10a10943 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10946 push eax */
  push32((uint32_t)(EAX));
  /* 10a10947 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10949 call 0x10a13db0 */
  push32(0x10a1094eu); f_10a13db0();
  /* 10a1094e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10951 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10954 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10956 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10959 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1095c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10962 push edx */
  push32((uint32_t)(EDX));
  /* 10a10963 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10a10965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10968 push eax */
  push32((uint32_t)(EAX));
  /* 10a10969 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1096b call 0x10a13db0 */
  push32(0x10a10970u); f_10a13db0();
  /* 10a10970 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10973 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10976 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10978 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a1097b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1097e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10984 push edx */
  push32((uint32_t)(EDX));
  /* 10a10985 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10a10987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1098a push eax */
  push32((uint32_t)(EAX));
  /* 10a1098b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1098d call 0x10a13db0 */
  push32(0x10a10992u); f_10a13db0();
  /* 10a10992 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10995 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10998 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1099a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a1099d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a109a0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a109a6 push edx */
  push32((uint32_t)(EDX));
  /* 10a109a7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10a109a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a109ac push eax */
  push32((uint32_t)(EAX));
  /* 10a109ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10a109af call 0x10a13db0 */
  push32(0x10a109b4u); f_10a13db0();
  /* 10a109b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a109b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a109ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a109bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a109bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a109c2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a109c8 push edx */
  push32((uint32_t)(EDX));
  /* 10a109c9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10a109cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a109ce push eax */
  push32((uint32_t)(EAX));
  /* 10a109cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a109d1 call 0x10a13db0 */
  push32(0x10a109d6u); f_10a13db0();
  /* 10a109d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a109d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a109dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a109de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a109e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a109e4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a109ea push edx */
  push32((uint32_t)(EDX));
  /* 10a109eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a109ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a109f0 push eax */
  push32((uint32_t)(EAX));
  /* 10a109f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a109f3 call 0x10a13db0 */
  push32(0x10a109f8u); f_10a13db0();
  /* 10a109f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a109fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a109fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10a00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10a03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10a06 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10a0c push edx */
  push32((uint32_t)(EDX));
  /* 10a10a0d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10a10a12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a10a15 push eax */
  push32((uint32_t)(EAX));
  /* 10a10a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10a18 call 0x10a13db0 */
  push32(0x10a10a1du); f_10a13db0();
  /* 10a10a1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10a20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a10a23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10a25 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a10a28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10a10a2b:;
  /* 10a10a2b mov esp, ebp */
  ESP = (EBP);
  /* 10a10a2d pop ebp */
  EBP = (pop32());
  /* 10a10a2e ret  */
  ESPCHK(0x10a104a0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10a10a30 (779 bytes, 265 insns) */
void f_10a10a30(void) {
  FTRACE(0x10a10a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a10a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a10a31 mov ebp, esp */
  EBP = (ESP);
  /* 10a10a33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10a37 jne 0x10a10a3e */
  if (!C.zf) goto L_10a10a3e;
  /* 10a10a39 jmp 0x10a10d39 */
  goto L_10a10d39;
L_10a10a3e:;
  /* 10a10a3e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10a40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10a43 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a10a46 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10a47 call 0x10a06680 */
  push32(0x10a10a4cu); f_10a06680();
  /* 10a10a4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10a51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10a54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a10a57 push eax */
  push32((uint32_t)(EAX));
  /* 10a10a58 call 0x10a06680 */
  push32(0x10a10a5du); f_10a06680();
  /* 10a10a5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10a60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10a62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10a65 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a10a68 push edx */
  push32((uint32_t)(EDX));
  /* 10a10a69 call 0x10a06680 */
  push32(0x10a10a6eu); f_10a06680();
  /* 10a10a6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10a71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10a73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10a76 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a10a79 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10a7a call 0x10a06680 */
  push32(0x10a10a7fu); f_10a06680();
  /* 10a10a7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10a82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10a84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10a87 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a10a8a push eax */
  push32((uint32_t)(EAX));
  /* 10a10a8b call 0x10a06680 */
  push32(0x10a10a90u); f_10a06680();
  /* 10a10a90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10a93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10a95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10a98 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a10a9b push edx */
  push32((uint32_t)(EDX));
  /* 10a10a9c call 0x10a06680 */
  push32(0x10a10aa1u); f_10a06680();
  /* 10a10aa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10aa4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10aa9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a10aab push ecx */
  push32((uint32_t)(ECX));
  /* 10a10aac call 0x10a06680 */
  push32(0x10a10ab1u); f_10a06680();
  /* 10a10ab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10ab4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10ab6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10ab9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10a10abc push eax */
  push32((uint32_t)(EAX));
  /* 10a10abd call 0x10a06680 */
  push32(0x10a10ac2u); f_10a06680();
  /* 10a10ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10ac5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10ac7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10aca mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10a10acd push edx */
  push32((uint32_t)(EDX));
  /* 10a10ace call 0x10a06680 */
  push32(0x10a10ad3u); f_10a06680();
  /* 10a10ad3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10ad6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10ad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10adb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10a10ade push ecx */
  push32((uint32_t)(ECX));
  /* 10a10adf call 0x10a06680 */
  push32(0x10a10ae4u); f_10a06680();
  /* 10a10ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10ae9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10aec mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10a10aef push eax */
  push32((uint32_t)(EAX));
  /* 10a10af0 call 0x10a06680 */
  push32(0x10a10af5u); f_10a06680();
  /* 10a10af5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10af8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10afa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10afd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10a10b00 push edx */
  push32((uint32_t)(EDX));
  /* 10a10b01 call 0x10a06680 */
  push32(0x10a10b06u); f_10a06680();
  /* 10a10b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10b09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10b0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10b0e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10a10b11 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10b12 call 0x10a06680 */
  push32(0x10a10b17u); f_10a06680();
  /* 10a10b17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10b1a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10b1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10b1f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a10b22 push eax */
  push32((uint32_t)(EAX));
  /* 10a10b23 call 0x10a06680 */
  push32(0x10a10b28u); f_10a06680();
  /* 10a10b28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10b2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10b2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10b30 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10a10b33 push edx */
  push32((uint32_t)(EDX));
  /* 10a10b34 call 0x10a06680 */
  push32(0x10a10b39u); f_10a06680();
  /* 10a10b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10b3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10b3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10b41 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10a10b44 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10b45 call 0x10a06680 */
  push32(0x10a10b4au); f_10a06680();
  /* 10a10b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10b4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10b52 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10a10b55 push eax */
  push32((uint32_t)(EAX));
  /* 10a10b56 call 0x10a06680 */
  push32(0x10a10b5bu); f_10a06680();
  /* 10a10b5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10b5e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10b63 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10a10b66 push edx */
  push32((uint32_t)(EDX));
  /* 10a10b67 call 0x10a06680 */
  push32(0x10a10b6cu); f_10a06680();
  /* 10a10b6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10b6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10b71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10b74 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10a10b77 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10b78 call 0x10a06680 */
  push32(0x10a10b7du); f_10a06680();
  /* 10a10b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10b80 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10b82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10b85 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10a10b88 push eax */
  push32((uint32_t)(EAX));
  /* 10a10b89 call 0x10a06680 */
  push32(0x10a10b8eu); f_10a06680();
  /* 10a10b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10b91 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10b93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10b96 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a10b99 push edx */
  push32((uint32_t)(EDX));
  /* 10a10b9a call 0x10a06680 */
  push32(0x10a10b9fu); f_10a06680();
  /* 10a10b9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10ba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10ba7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10a10baa push ecx */
  push32((uint32_t)(ECX));
  /* 10a10bab call 0x10a06680 */
  push32(0x10a10bb0u); f_10a06680();
  /* 10a10bb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10bb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10bb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10bb8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10a10bbb push eax */
  push32((uint32_t)(EAX));
  /* 10a10bbc call 0x10a06680 */
  push32(0x10a10bc1u); f_10a06680();
  /* 10a10bc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10bc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10bc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10bc9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10a10bcc push edx */
  push32((uint32_t)(EDX));
  /* 10a10bcd call 0x10a06680 */
  push32(0x10a10bd2u); f_10a06680();
  /* 10a10bd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10bd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10bd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10bda mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10a10bdd push ecx */
  push32((uint32_t)(ECX));
  /* 10a10bde call 0x10a06680 */
  push32(0x10a10be3u); f_10a06680();
  /* 10a10be3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10be6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10be8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10beb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10a10bee push eax */
  push32((uint32_t)(EAX));
  /* 10a10bef call 0x10a06680 */
  push32(0x10a10bf4u); f_10a06680();
  /* 10a10bf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10bf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10bfc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10a10bff push edx */
  push32((uint32_t)(EDX));
  /* 10a10c00 call 0x10a06680 */
  push32(0x10a10c05u); f_10a06680();
  /* 10a10c05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10c08 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10c0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10c0d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10a10c10 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10c11 call 0x10a06680 */
  push32(0x10a10c16u); f_10a06680();
  /* 10a10c16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10c19 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10c1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10c1e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10a10c21 push eax */
  push32((uint32_t)(EAX));
  /* 10a10c22 call 0x10a06680 */
  push32(0x10a10c27u); f_10a06680();
  /* 10a10c27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10c2a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10c2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10c2f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10a10c32 push edx */
  push32((uint32_t)(EDX));
  /* 10a10c33 call 0x10a06680 */
  push32(0x10a10c38u); f_10a06680();
  /* 10a10c38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10c3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10c3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10c40 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10a10c43 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10c44 call 0x10a06680 */
  push32(0x10a10c49u); f_10a06680();
  /* 10a10c49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10c4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10c51 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10a10c54 push eax */
  push32((uint32_t)(EAX));
  /* 10a10c55 call 0x10a06680 */
  push32(0x10a10c5au); f_10a06680();
  /* 10a10c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10c5d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10c5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10c62 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10a10c68 push edx */
  push32((uint32_t)(EDX));
  /* 10a10c69 call 0x10a06680 */
  push32(0x10a10c6eu); f_10a06680();
  /* 10a10c6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10c71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10c73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10c76 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10a10c7c push ecx */
  push32((uint32_t)(ECX));
  /* 10a10c7d call 0x10a06680 */
  push32(0x10a10c82u); f_10a06680();
  /* 10a10c82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10c85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10c87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10c8a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10a10c90 push eax */
  push32((uint32_t)(EAX));
  /* 10a10c91 call 0x10a06680 */
  push32(0x10a10c96u); f_10a06680();
  /* 10a10c96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10c99 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10c9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10c9e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10a10ca4 push edx */
  push32((uint32_t)(EDX));
  /* 10a10ca5 call 0x10a06680 */
  push32(0x10a10caau); f_10a06680();
  /* 10a10caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10cad push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10cb2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10a10cb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10cb9 call 0x10a06680 */
  push32(0x10a10cbeu); f_10a06680();
  /* 10a10cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10cc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10cc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10cc6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10a10ccc push eax */
  push32((uint32_t)(EAX));
  /* 10a10ccd call 0x10a06680 */
  push32(0x10a10cd2u); f_10a06680();
  /* 10a10cd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10cd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10cd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10cda mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10a10ce0 push edx */
  push32((uint32_t)(EDX));
  /* 10a10ce1 call 0x10a06680 */
  push32(0x10a10ce6u); f_10a06680();
  /* 10a10ce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10ce9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10ceb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10cee mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10a10cf4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10cf5 call 0x10a06680 */
  push32(0x10a10cfau); f_10a06680();
  /* 10a10cfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10cfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10cff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10d02 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10a10d08 push eax */
  push32((uint32_t)(EAX));
  /* 10a10d09 call 0x10a06680 */
  push32(0x10a10d0eu); f_10a06680();
  /* 10a10d0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10d11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10d16 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10a10d1c push edx */
  push32((uint32_t)(EDX));
  /* 10a10d1d call 0x10a06680 */
  push32(0x10a10d22u); f_10a06680();
  /* 10a10d22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10d25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10d27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10d2a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10a10d30 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10d31 call 0x10a06680 */
  push32(0x10a10d36u); f_10a06680();
  /* 10a10d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a10d39:;
  /* 10a10d39 pop ebp */
  EBP = (pop32());
  /* 10a10d3a ret  */
  ESPCHK(0x10a10a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d40 @ 0x10a10d40 (678 bytes, 180 insns) */
void f_10a10d40(void) {
  FTRACE(0x10a10d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a10d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a10d41 mov ebp, esp */
  EBP = (ESP);
  /* 10a10d43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a10d46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a10d4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a10d4f mov ax, word ptr [0x10a3193a] */
  AX = (r16((uint32_t)(0x10a3193a)));
  /* 10a10d55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a10d58 cmp dword ptr [0x10a318e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10d5f je 0x10a10eba */
  if (C.zf) goto L_10a10eba;
  /* 10a10d65 push 0x10a31908 */
  push32((uint32_t)(0x10a31908u));
  /* 10a10d6a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10a10d6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10d6f push ecx */
  push32((uint32_t)(ECX));
  /* 10a10d70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10d72 call 0x10a13db0 */
  push32(0x10a10d77u); f_10a13db0();
  /* 10a10d77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10d7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a10d7d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a10d7f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a10d82 push 0x10a3190c */
  push32((uint32_t)(0x10a3190cu));
  /* 10a10d87 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10a10d89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10d8c push eax */
  push32((uint32_t)(EAX));
  /* 10a10d8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10d8f call 0x10a13db0 */
  push32(0x10a10d94u); f_10a13db0();
  /* 10a10d94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10d97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a10d9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10d9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a10d9f push 0x10a31910 */
  push32((uint32_t)(0x10a31910u));
  /* 10a10da4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10a10da6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a10da9 push edx */
  push32((uint32_t)(EDX));
  /* 10a10daa push 1 */
  push32((uint32_t)(0x1u));
  /* 10a10dac call 0x10a13db0 */
  push32(0x10a10db1u); f_10a13db0();
  /* 10a10db1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10db4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a10db7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a10db9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a10dbc mov edx, dword ptr [0x10a31910] */
  EDX = (r32((uint32_t)(0x10a31910)));
  /* 10a10dc2 push edx */
  push32((uint32_t)(EDX));
  /* 10a10dc3 call 0x10a10ff0 */
  push32(0x10a10dc8u); f_10a10ff0();
  /* 10a10dc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10dcb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10dcf je 0x10a10e29 */
  if (C.zf) goto L_10a10e29;
  /* 10a10dd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10dd3 mov eax, dword ptr [0x10a31908] */
  EAX = (r32((uint32_t)(0x10a31908)));
  /* 10a10dd8 push eax */
  push32((uint32_t)(EAX));
  /* 10a10dd9 call 0x10a06680 */
  push32(0x10a10ddeu); f_10a06680();
  /* 10a10dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10de1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10de3 mov ecx, dword ptr [0x10a3190c] */
  ECX = (r32((uint32_t)(0x10a3190c)));
  /* 10a10de9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10dea call 0x10a06680 */
  push32(0x10a10defu); f_10a06680();
  /* 10a10def add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10df2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10df4 mov edx, dword ptr [0x10a31910] */
  EDX = (r32((uint32_t)(0x10a31910)));
  /* 10a10dfa push edx */
  push32((uint32_t)(EDX));
  /* 10a10dfb call 0x10a06680 */
  push32(0x10a10e00u); f_10a06680();
  /* 10a10e00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10e03 mov dword ptr [0x10a31908], 0 */
  w32((uint32_t)(0x10a31908), (0x0u));
  /* 10a10e0d mov dword ptr [0x10a3190c], 0 */
  w32((uint32_t)(0x10a3190c), (0x0u));
  /* 10a10e17 mov dword ptr [0x10a31910], 0 */
  w32((uint32_t)(0x10a31910), (0x0u));
  /* 10a10e21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a10e24 jmp 0x10a10fe2 */
  goto L_10a10fe2;
L_10a10e29:;
  /* 10a10e29 mov eax, dword ptr [0x10a30d88] */
  EAX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10e2e cmp dword ptr [eax], 0x10a30d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10a30d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10e34 je 0x10a10e70 */
  if (C.zf) goto L_10a10e70;
  /* 10a10e36 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10e38 mov ecx, dword ptr [0x10a30d88] */
  ECX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10e3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a10e40 push edx */
  push32((uint32_t)(EDX));
  /* 10a10e41 call 0x10a06680 */
  push32(0x10a10e46u); f_10a06680();
  /* 10a10e46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10e49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10e4b mov eax, dword ptr [0x10a30d88] */
  EAX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10e50 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a10e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10e54 call 0x10a06680 */
  push32(0x10a10e59u); f_10a06680();
  /* 10a10e59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10e5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10e5e mov edx, dword ptr [0x10a30d88] */
  EDX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10e64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a10e67 push eax */
  push32((uint32_t)(EAX));
  /* 10a10e68 call 0x10a06680 */
  push32(0x10a10e6du); f_10a06680();
  /* 10a10e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a10e70:;
  /* 10a10e70 mov ecx, dword ptr [0x10a30d88] */
  ECX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10e76 mov edx, dword ptr [0x10a31908] */
  EDX = (r32((uint32_t)(0x10a31908)));
  /* 10a10e7c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a10e7e mov eax, dword ptr [0x10a30d88] */
  EAX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10e83 mov ecx, dword ptr [0x10a3190c] */
  ECX = (r32((uint32_t)(0x10a3190c)));
  /* 10a10e89 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a10e8c mov edx, dword ptr [0x10a30d88] */
  EDX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10e92 mov eax, dword ptr [0x10a31910] */
  EAX = (r32((uint32_t)(0x10a31910)));
  /* 10a10e97 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a10e9a mov ecx, dword ptr [0x10a30d88] */
  ECX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10ea0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a10ea2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a10ea4 mov byte ptr [0x10a2fea8], al */
  w8((uint32_t)(0x10a2fea8), (AL));
  /* 10a10ea9 mov dword ptr [0x10a2feac], 1 */
  w32((uint32_t)(0x10a2feac), (0x1u));
  /* 10a10eb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a10eb5 jmp 0x10a10fe2 */
  goto L_10a10fe2;
L_10a10eba:;
  /* 10a10eba push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10ebc mov ecx, dword ptr [0x10a31908] */
  ECX = (r32((uint32_t)(0x10a31908)));
  /* 10a10ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10ec3 call 0x10a06680 */
  push32(0x10a10ec8u); f_10a06680();
  /* 10a10ec8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10ecb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10ecd mov edx, dword ptr [0x10a3190c] */
  EDX = (r32((uint32_t)(0x10a3190c)));
  /* 10a10ed3 push edx */
  push32((uint32_t)(EDX));
  /* 10a10ed4 call 0x10a06680 */
  push32(0x10a10ed9u); f_10a06680();
  /* 10a10ed9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10edc push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10ede mov eax, dword ptr [0x10a31910] */
  EAX = (r32((uint32_t)(0x10a31910)));
  /* 10a10ee3 push eax */
  push32((uint32_t)(EAX));
  /* 10a10ee4 call 0x10a06680 */
  push32(0x10a10ee9u); f_10a06680();
  /* 10a10ee9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10eec mov dword ptr [0x10a31908], 0 */
  w32((uint32_t)(0x10a31908), (0x0u));
  /* 10a10ef6 mov dword ptr [0x10a3190c], 0 */
  w32((uint32_t)(0x10a3190c), (0x0u));
  /* 10a10f00 mov dword ptr [0x10a31910], 0 */
  w32((uint32_t)(0x10a31910), (0x0u));
  /* 10a10f0a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10a10f0f push 0x10a2d2e4 */
  push32((uint32_t)(0x10a2d2e4u));
  /* 10a10f14 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10f16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10f18 call 0x10a05bf0 */
  push32(0x10a10f1du); f_10a05bf0();
  /* 10a10f1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10f20 mov ecx, dword ptr [0x10a30d88] */
  ECX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10f26 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a10f28 mov edx, dword ptr [0x10a30d88] */
  EDX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10f2e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10f31 jne 0x10a10f3b */
  if (!C.zf) goto L_10a10f3b;
  /* 10a10f33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a10f36 jmp 0x10a10fe2 */
  goto L_10a10fe2;
L_10a10f3b:;
  /* 10a10f3b push 0x10a2d2b4 */
  push32((uint32_t)(0x10a2d2b4u));
  /* 10a10f40 mov eax, dword ptr [0x10a30d88] */
  EAX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10f45 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a10f47 push ecx */
  push32((uint32_t)(ECX));
  /* 10a10f48 call 0x10a08ba0 */
  push32(0x10a10f4du); f_10a08ba0();
  /* 10a10f4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10f50 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10a10f55 push 0x10a2d2e4 */
  push32((uint32_t)(0x10a2d2e4u));
  /* 10a10f5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10f5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10f5e call 0x10a05bf0 */
  push32(0x10a10f63u); f_10a05bf0();
  /* 10a10f63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10f66 mov edx, dword ptr [0x10a30d88] */
  EDX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10f6c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a10f6f mov eax, dword ptr [0x10a30d88] */
  EAX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10f74 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10f78 jne 0x10a10f7f */
  if (!C.zf) goto L_10a10f7f;
  /* 10a10f7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a10f7d jmp 0x10a10fe2 */
  goto L_10a10fe2;
L_10a10f7f:;
  /* 10a10f7f mov ecx, dword ptr [0x10a30d88] */
  ECX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10f85 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a10f88 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a10f8b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10a10f90 push 0x10a2d2e4 */
  push32((uint32_t)(0x10a2d2e4u));
  /* 10a10f95 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10f97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a10f99 call 0x10a05bf0 */
  push32(0x10a10f9eu); f_10a05bf0();
  /* 10a10f9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a10fa1 mov ecx, dword ptr [0x10a30d88] */
  ECX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10fa7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10a10faa mov edx, dword ptr [0x10a30d88] */
  EDX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10fb0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a10fb4 jne 0x10a10fbb */
  if (!C.zf) goto L_10a10fbb;
  /* 10a10fb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a10fb9 jmp 0x10a10fe2 */
  goto L_10a10fe2;
L_10a10fbb:;
  /* 10a10fbb mov eax, dword ptr [0x10a30d88] */
  EAX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10fc0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a10fc3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a10fc6 mov edx, dword ptr [0x10a30d88] */
  EDX = (r32((uint32_t)(0x10a30d88)));
  /* 10a10fcc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a10fce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a10fd0 mov byte ptr [0x10a2fea8], cl */
  w8((uint32_t)(0x10a2fea8), (CL));
  /* 10a10fd6 mov dword ptr [0x10a2feac], 1 */
  w32((uint32_t)(0x10a2feac), (0x1u));
  /* 10a10fe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a10fe2:;
  /* 10a10fe2 mov esp, ebp */
  ESP = (EBP);
  /* 10a10fe4 pop ebp */
  EBP = (pop32());
  /* 10a10fe5 ret  */
  ESPCHK(0x10a10d40u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10a10ff0 (125 bytes, 49 insns) */
void f_10a10ff0(void) {
  FTRACE(0x10a10ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a10ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a10ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10a10ff3 push ecx */
  push32((uint32_t)(ECX));
L_10a10ff4:;
  /* 10a10ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a10ff7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a10ffa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a10ffc je 0x10a11069 */
  if (C.zf) goto L_10a11069;
  /* 10a10ffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11001 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a11004 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11007 jl 0x10a1102d */
  if ((C.sf!=C.of)) goto L_10a1102d;
  /* 10a11009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1100c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a1100f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11012 jg 0x10a1102d */
  if ((!C.zf&&C.sf==C.of)) goto L_10a1102d;
  /* 10a11014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11017 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a1101a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a1101d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11020 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a11022 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11025 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11028 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a1102b jmp 0x10a11067 */
  goto L_10a11067;
L_10a1102d:;
  /* 10a1102d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11030 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a11033 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11036 jne 0x10a1105e */
  if (!C.zf) goto L_10a1105e;
  /* 10a11038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1103b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a1103e:;
  /* 10a1103e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11041 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11044 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a11047 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a11049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1104c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1104f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a11052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11055 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a11058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1105a jne 0x10a1103e */
  if (!C.zf) goto L_10a1103e;
  /* 10a1105c jmp 0x10a11067 */
  goto L_10a11067;
L_10a1105e:;
  /* 10a1105e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11061 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11064 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a11067:;
  /* 10a11067 jmp 0x10a10ff4 */
  goto L_10a10ff4;
L_10a11069:;
  /* 10a11069 mov esp, ebp */
  ESP = (EBP);
  /* 10a1106b pop ebp */
  EBP = (pop32());
  /* 10a1106c ret  */
  ESPCHK(0x10a10ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011070 @ 0x10a11070 (304 bytes, 85 insns) */
void f_10a11070(void) {
  FTRACE(0x10a11070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a11070 push ebp */
  push32((uint32_t)(EBP));
  /* 10a11071 mov ebp, esp */
  EBP = (ESP);
  /* 10a11073 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11074 cmp dword ptr [0x10a318dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1107b je 0x10a1113c */
  if (C.zf) goto L_10a1113c;
  /* 10a11081 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10a11083 push 0x10a2d2f0 */
  push32((uint32_t)(0x10a2d2f0u));
  /* 10a11088 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1108a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a1108c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1108e call 0x10a06000 */
  push32(0x10a11093u); f_10a06000();
  /* 10a11093 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11096 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a11099 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1109d jne 0x10a110a9 */
  if (!C.zf) goto L_10a110a9;
  /* 10a1109f mov eax, 1 */
  EAX = (0x1u);
  /* 10a110a4 jmp 0x10a1119c */
  goto L_10a1119c;
L_10a110a9:;
  /* 10a110a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a110ac push eax */
  push32((uint32_t)(EAX));
  /* 10a110ad call 0x10a111a0 */
  push32(0x10a110b2u); f_10a111a0();
  /* 10a110b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a110b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a110b7 je 0x10a110dd */
  if (C.zf) goto L_10a110dd;
  /* 10a110b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a110bc push ecx */
  push32((uint32_t)(ECX));
  /* 10a110bd call 0x10a11430 */
  push32(0x10a110c2u); f_10a11430();
  /* 10a110c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a110c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a110c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a110ca push edx */
  push32((uint32_t)(EDX));
  /* 10a110cb call 0x10a06680 */
  push32(0x10a110d0u); f_10a06680();
  /* 10a110d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a110d3 mov eax, 1 */
  EAX = (0x1u);
  /* 10a110d8 jmp 0x10a1119c */
  goto L_10a1119c;
L_10a110dd:;
  /* 10a110dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a110e0 mov ecx, dword ptr [0x10a30d88] */
  ECX = (r32((uint32_t)(0x10a30d88)));
  /* 10a110e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a110e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a110ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a110ed mov ecx, dword ptr [0x10a30d88] */
  ECX = (r32((uint32_t)(0x10a30d88)));
  /* 10a110f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a110f6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a110f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a110fc mov ecx, dword ptr [0x10a30d88] */
  ECX = (r32((uint32_t)(0x10a30d88)));
  /* 10a11102 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a11105 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10a11108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1110b mov dword ptr [0x10a30d88], eax */
  w32((uint32_t)(0x10a30d88), (EAX));
  /* 10a11110 mov ecx, dword ptr [0x10a31914] */
  ECX = (r32((uint32_t)(0x10a31914)));
  /* 10a11116 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11117 call 0x10a11430 */
  push32(0x10a1111cu); f_10a11430();
  /* 10a1111c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1111f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a11121 mov edx, dword ptr [0x10a31914] */
  EDX = (r32((uint32_t)(0x10a31914)));
  /* 10a11127 push edx */
  push32((uint32_t)(EDX));
  /* 10a11128 call 0x10a06680 */
  push32(0x10a1112du); f_10a06680();
  /* 10a1112d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11130 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11133 mov dword ptr [0x10a31914], eax */
  w32((uint32_t)(0x10a31914), (EAX));
  /* 10a11138 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1113a jmp 0x10a1119c */
  goto L_10a1119c;
L_10a1113c:;
  /* 10a1113c mov ecx, dword ptr [0x10a30d88] */
  ECX = (r32((uint32_t)(0x10a30d88)));
  /* 10a11142 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a11144 mov dword ptr [0x10a30d58], edx */
  w32((uint32_t)(0x10a30d58), (EDX));
  /* 10a1114a mov eax, dword ptr [0x10a30d88] */
  EAX = (r32((uint32_t)(0x10a30d88)));
  /* 10a1114f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a11152 mov dword ptr [0x10a30d5c], ecx */
  w32((uint32_t)(0x10a30d5c), (ECX));
  /* 10a11158 mov edx, dword ptr [0x10a30d88] */
  EDX = (r32((uint32_t)(0x10a30d88)));
  /* 10a1115e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a11161 mov dword ptr [0x10a30d60], eax */
  w32((uint32_t)(0x10a30d60), (EAX));
  /* 10a11166 mov dword ptr [0x10a30d88], 0x10a30d58 */
  w32((uint32_t)(0x10a30d88), (0x10a30d58u));
  /* 10a11170 mov ecx, dword ptr [0x10a31914] */
  ECX = (r32((uint32_t)(0x10a31914)));
  /* 10a11176 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11177 call 0x10a11430 */
  push32(0x10a1117cu); f_10a11430();
  /* 10a1117c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1117f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a11181 mov edx, dword ptr [0x10a31914] */
  EDX = (r32((uint32_t)(0x10a31914)));
  /* 10a11187 push edx */
  push32((uint32_t)(EDX));
  /* 10a11188 call 0x10a06680 */
  push32(0x10a1118du); f_10a06680();
  /* 10a1118d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11190 mov dword ptr [0x10a31914], 0 */
  w32((uint32_t)(0x10a31914), (0x0u));
  /* 10a1119a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a1119c:;
  /* 10a1119c mov esp, ebp */
  ESP = (EBP);
  /* 10a1119e pop ebp */
  EBP = (pop32());
  /* 10a1119f ret  */
  ESPCHK(0x10a11070u, _esp0);
  ESP += 4; return;
}

/* FUN_100111a0 @ 0x10a111a0 (525 bytes, 200 insns) */
void f_10a111a0(void) {
  FTRACE(0x10a111a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a111a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a111a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a111a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a111a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a111ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a111af mov ax, word ptr [0x10a31934] */
  AX = (r16((uint32_t)(0x10a31934)));
  /* 10a111b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a111b8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a111bc jne 0x10a111c6 */
  if (!C.zf) goto L_10a111c6;
  /* 10a111be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a111c1 jmp 0x10a113a9 */
  goto L_10a113a9;
L_10a111c6:;
  /* 10a111c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a111c9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a111cc push ecx */
  push32((uint32_t)(ECX));
  /* 10a111cd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10a111cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a111d2 push edx */
  push32((uint32_t)(EDX));
  /* 10a111d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a111d5 call 0x10a13db0 */
  push32(0x10a111dau); f_10a13db0();
  /* 10a111da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a111dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a111e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a111e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a111e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a111e8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a111eb push edx */
  push32((uint32_t)(EDX));
  /* 10a111ec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10a111ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a111f1 push eax */
  push32((uint32_t)(EAX));
  /* 10a111f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a111f4 call 0x10a13db0 */
  push32(0x10a111f9u); f_10a13db0();
  /* 10a111f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a111fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a111ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11201 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a11204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11207 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1120a push edx */
  push32((uint32_t)(EDX));
  /* 10a1120b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a1120d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11210 push eax */
  push32((uint32_t)(EAX));
  /* 10a11211 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a11213 call 0x10a13db0 */
  push32(0x10a11218u); f_10a13db0();
  /* 10a11218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1121b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a1121e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11220 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a11223 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11226 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11229 push edx */
  push32((uint32_t)(EDX));
  /* 10a1122a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10a1122c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1122f push eax */
  push32((uint32_t)(EAX));
  /* 10a11230 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a11232 call 0x10a13db0 */
  push32(0x10a11237u); f_10a13db0();
  /* 10a11237 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1123a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a1123d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1123f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a11242 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11245 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11248 push edx */
  push32((uint32_t)(EDX));
  /* 10a11249 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10a1124b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1124e push eax */
  push32((uint32_t)(EAX));
  /* 10a1124f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a11251 call 0x10a13db0 */
  push32(0x10a11256u); f_10a13db0();
  /* 10a11256 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11259 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a1125c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1125e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a11261 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11264 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a11267 push eax */
  push32((uint32_t)(EAX));
  /* 10a11268 call 0x10a113b0 */
  push32(0x10a1126du); f_10a113b0();
  /* 10a1126d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11273 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11276 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11277 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10a11279 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1127c push edx */
  push32((uint32_t)(EDX));
  /* 10a1127d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1127f call 0x10a13db0 */
  push32(0x10a11284u); f_10a13db0();
  /* 10a11284 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11287 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a1128a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1128c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a1128f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11292 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11295 push edx */
  push32((uint32_t)(EDX));
  /* 10a11296 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10a11298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1129b push eax */
  push32((uint32_t)(EAX));
  /* 10a1129c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1129e call 0x10a13db0 */
  push32(0x10a112a3u); f_10a13db0();
  /* 10a112a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a112a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a112a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a112ab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a112ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a112b1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a112b4 push edx */
  push32((uint32_t)(EDX));
  /* 10a112b5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10a112b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a112ba push eax */
  push32((uint32_t)(EAX));
  /* 10a112bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a112bd call 0x10a13db0 */
  push32(0x10a112c2u); f_10a13db0();
  /* 10a112c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a112c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a112c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a112ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a112cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a112d0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a112d3 push edx */
  push32((uint32_t)(EDX));
  /* 10a112d4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a112d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a112d9 push eax */
  push32((uint32_t)(EAX));
  /* 10a112da push 0 */
  push32((uint32_t)(0x0u));
  /* 10a112dc call 0x10a13db0 */
  push32(0x10a112e1u); f_10a13db0();
  /* 10a112e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a112e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a112e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a112e9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a112ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a112ef add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a112f2 push edx */
  push32((uint32_t)(EDX));
  /* 10a112f3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10a112f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a112f8 push eax */
  push32((uint32_t)(EAX));
  /* 10a112f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a112fb call 0x10a13db0 */
  push32(0x10a11300u); f_10a13db0();
  /* 10a11300 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11303 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a11306 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11308 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a1130b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1130e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11311 push edx */
  push32((uint32_t)(EDX));
  /* 10a11312 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10a11314 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11317 push eax */
  push32((uint32_t)(EAX));
  /* 10a11318 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1131a call 0x10a13db0 */
  push32(0x10a1131fu); f_10a13db0();
  /* 10a1131f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11322 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a11325 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11327 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a1132a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1132d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11330 push edx */
  push32((uint32_t)(EDX));
  /* 10a11331 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10a11333 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11336 push eax */
  push32((uint32_t)(EAX));
  /* 10a11337 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a11339 call 0x10a13db0 */
  push32(0x10a1133eu); f_10a13db0();
  /* 10a1133e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11341 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a11344 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11346 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a11349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1134c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1134f push edx */
  push32((uint32_t)(EDX));
  /* 10a11350 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10a11352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11355 push eax */
  push32((uint32_t)(EAX));
  /* 10a11356 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a11358 call 0x10a13db0 */
  push32(0x10a1135du); f_10a13db0();
  /* 10a1135d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11360 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a11363 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11365 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a11368 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1136b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1136e push edx */
  push32((uint32_t)(EDX));
  /* 10a1136f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10a11371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11374 push eax */
  push32((uint32_t)(EAX));
  /* 10a11375 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a11377 call 0x10a13db0 */
  push32(0x10a1137cu); f_10a13db0();
  /* 10a1137c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1137f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a11382 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11384 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a11387 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1138a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1138d push edx */
  push32((uint32_t)(EDX));
  /* 10a1138e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10a11390 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11393 push eax */
  push32((uint32_t)(EAX));
  /* 10a11394 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a11396 call 0x10a13db0 */
  push32(0x10a1139bu); f_10a13db0();
  /* 10a1139b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1139e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a113a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a113a3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a113a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a113a9:;
  /* 10a113a9 mov esp, ebp */
  ESP = (EBP);
  /* 10a113ab pop ebp */
  EBP = (pop32());
  /* 10a113ac ret  */
  ESPCHK(0x10a111a0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10a113b0 (125 bytes, 49 insns) */
void f_10a113b0(void) {
  FTRACE(0x10a113b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a113b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a113b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a113b3 push ecx */
  push32((uint32_t)(ECX));
L_10a113b4:;
  /* 10a113b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a113b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a113ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a113bc je 0x10a11429 */
  if (C.zf) goto L_10a11429;
  /* 10a113be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a113c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a113c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a113c7 jl 0x10a113ed */
  if ((C.sf!=C.of)) goto L_10a113ed;
  /* 10a113c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a113cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a113cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a113d2 jg 0x10a113ed */
  if ((!C.zf&&C.sf==C.of)) goto L_10a113ed;
  /* 10a113d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a113d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a113da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a113dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a113e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a113e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a113e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a113e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a113eb jmp 0x10a11427 */
  goto L_10a11427;
L_10a113ed:;
  /* 10a113ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a113f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a113f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a113f6 jne 0x10a1141e */
  if (!C.zf) goto L_10a1141e;
  /* 10a113f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a113fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a113fe:;
  /* 10a113fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11401 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11404 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a11407 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a11409 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1140c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1140f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a11412 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11415 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a11418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1141a jne 0x10a113fe */
  if (!C.zf) goto L_10a113fe;
  /* 10a1141c jmp 0x10a11427 */
  goto L_10a11427;
L_10a1141e:;
  /* 10a1141e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11421 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11424 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a11427:;
  /* 10a11427 jmp 0x10a113b4 */
  goto L_10a113b4;
L_10a11429:;
  /* 10a11429 mov esp, ebp */
  ESP = (EBP);
  /* 10a1142b pop ebp */
  EBP = (pop32());
  /* 10a1142c ret  */
  ESPCHK(0x10a113b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011430 @ 0x10a11430 (147 bytes, 52 insns) */
void f_10a11430(void) {
  FTRACE(0x10a11430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a11430 push ebp */
  push32((uint32_t)(EBP));
  /* 10a11431 mov ebp, esp */
  EBP = (ESP);
  /* 10a11433 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11437 jne 0x10a1143e */
  if (!C.zf) goto L_10a1143e;
  /* 10a11439 jmp 0x10a114c1 */
  goto L_10a114c1;
L_10a1143e:;
  /* 10a1143e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11441 cmp dword ptr [eax + 0xc], 0x10a31970 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10a31970u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11448 je 0x10a114c1 */
  if (C.zf) goto L_10a114c1;
  /* 10a1144a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1144c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1144f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a11452 push edx */
  push32((uint32_t)(EDX));
  /* 10a11453 call 0x10a06680 */
  push32(0x10a11458u); f_10a06680();
  /* 10a11458 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1145b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1145d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11460 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a11463 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11464 call 0x10a06680 */
  push32(0x10a11469u); f_10a06680();
  /* 10a11469 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1146c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1146e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11471 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a11474 push eax */
  push32((uint32_t)(EAX));
  /* 10a11475 call 0x10a06680 */
  push32(0x10a1147au); f_10a06680();
  /* 10a1147a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1147d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1147f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11482 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a11485 push edx */
  push32((uint32_t)(EDX));
  /* 10a11486 call 0x10a06680 */
  push32(0x10a1148bu); f_10a06680();
  /* 10a1148b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1148e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a11490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11493 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a11496 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11497 call 0x10a06680 */
  push32(0x10a1149cu); f_10a06680();
  /* 10a1149c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1149f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a114a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a114a4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10a114a7 push eax */
  push32((uint32_t)(EAX));
  /* 10a114a8 call 0x10a06680 */
  push32(0x10a114adu); f_10a06680();
  /* 10a114ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a114b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a114b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a114b5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10a114b8 push edx */
  push32((uint32_t)(EDX));
  /* 10a114b9 call 0x10a06680 */
  push32(0x10a114beu); f_10a06680();
  /* 10a114be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a114c1:;
  /* 10a114c1 pop ebp */
  EBP = (pop32());
  /* 10a114c2 ret  */
  ESPCHK(0x10a11430u, _esp0);
  ESP += 4; return;
}

/* FUN_100114d0 @ 0x10a114d0 (928 bytes, 284 insns) */
void f_10a114d0(void) {
  FTRACE(0x10a114d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a114d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a114d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a114d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a114d6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10a114dd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10a114e4 cmp dword ptr [0x10a318d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a114eb je 0x10a11821 */
  if (C.zf) goto L_10a11821;
  /* 10a114f1 cmp dword ptr [0x10a318e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a114f8 jne 0x10a11520 */
  if (!C.zf) goto L_10a11520;
  /* 10a114fa push 0x10a318e8 */
  push32((uint32_t)(0x10a318e8u));
  /* 10a114ff push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10a11504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11506 mov ax, word ptr [0x10a3192c] */
  AX = (r16((uint32_t)(0x10a3192c)));
  /* 10a1150c push eax */
  push32((uint32_t)(EAX));
  /* 10a1150d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1150f call 0x10a13db0 */
  push32(0x10a11514u); f_10a13db0();
  /* 10a11514 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11517 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11519 je 0x10a11520 */
  if (C.zf) goto L_10a11520;
  /* 10a1151b jmp 0x10a117e2 */
  goto L_10a117e2;
L_10a11520:;
  /* 10a11520 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10a11522 push 0x10a2d2fc */
  push32((uint32_t)(0x10a2d2fcu));
  /* 10a11527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a11529 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10a1152e call 0x10a05bf0 */
  push32(0x10a11533u); f_10a05bf0();
  /* 10a11533 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11536 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10a11539 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10a1153b push 0x10a2d2fc */
  push32((uint32_t)(0x10a2d2fcu));
  /* 10a11540 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a11542 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10a11547 call 0x10a05bf0 */
  push32(0x10a1154cu); f_10a05bf0();
  /* 10a1154c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1154f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a11552 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10a11554 push 0x10a2d2fc */
  push32((uint32_t)(0x10a2d2fcu));
  /* 10a11559 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1155b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10a11560 call 0x10a05bf0 */
  push32(0x10a11565u); f_10a05bf0();
  /* 10a11565 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11568 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10a1156b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10a1156d push 0x10a2d2fc */
  push32((uint32_t)(0x10a2d2fcu));
  /* 10a11572 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a11574 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10a11579 call 0x10a05bf0 */
  push32(0x10a1157eu); f_10a05bf0();
  /* 10a1157e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11581 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a11584 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11588 je 0x10a1159c */
  if (C.zf) goto L_10a1159c;
  /* 10a1158a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1158e je 0x10a1159c */
  if (C.zf) goto L_10a1159c;
  /* 10a11590 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11594 je 0x10a1159c */
  if (C.zf) goto L_10a1159c;
  /* 10a11596 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1159a jne 0x10a115a1 */
  if (!C.zf) goto L_10a115a1;
L_10a1159c:;
  /* 10a1159c jmp 0x10a117e2 */
  goto L_10a117e2;
L_10a115a1:;
  /* 10a115a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a115a4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a115a7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a115ae jmp 0x10a115b9 */
  goto L_10a115b9;
L_10a115b0:;
  /* 10a115b0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a115b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a115b6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10a115b9:;
  /* 10a115b9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a115c0 jge 0x10a115d5 */
  if ((C.sf==C.of)) goto L_10a115d5;
  /* 10a115c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a115c5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10a115c8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a115ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a115cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a115d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a115d3 jmp 0x10a115b0 */
  goto L_10a115b0;
L_10a115d5:;
  /* 10a115d5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10a115d8 push eax */
  push32((uint32_t)(EAX));
  /* 10a115d9 mov ecx, dword ptr [0x10a318e8] */
  ECX = (r32((uint32_t)(0x10a318e8)));
  /* 10a115df push ecx */
  push32((uint32_t)(ECX));
  /* 10a115e0 call dword ptr [0x10a34308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34308))), 0x10a115e6u);
  /* 10a115e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a115e8 jne 0x10a115ef */
  if (!C.zf) goto L_10a115ef;
  /* 10a115ea jmp 0x10a117e2 */
  goto L_10a117e2;
L_10a115ef:;
  /* 10a115ef cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a115f3 jbe 0x10a115fa */
  if ((C.cf||C.zf)) goto L_10a115fa;
  /* 10a115f5 jmp 0x10a117e2 */
  goto L_10a117e2;
L_10a115fa:;
  /* 10a115fa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a115fd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a11603 mov dword ptr [0x10a2fea4], edx */
  w32((uint32_t)(0x10a2fea4), (EDX));
  /* 10a11609 cmp dword ptr [0x10a2fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11610 jle 0x10a11669 */
  if ((C.zf||C.sf!=C.of)) goto L_10a11669;
  /* 10a11612 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10a11615 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a11618 jmp 0x10a11623 */
  goto L_10a11623;
L_10a1161a:;
  /* 10a1161a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a1161d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11620 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10a11623:;
  /* 10a11623 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a11626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11628 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a1162a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1162c je 0x10a11669 */
  if (C.zf) goto L_10a11669;
  /* 10a1162e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a11631 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a11633 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a11636 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a11638 je 0x10a11669 */
  if (C.zf) goto L_10a11669;
  /* 10a1163a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a1163d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1163f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a11641 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a11644 jmp 0x10a1164f */
  goto L_10a1164f;
L_10a11646:;
  /* 10a11646 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a11649 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1164c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10a1164f:;
  /* 10a1164f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a11652 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11654 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a11657 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1165a jg 0x10a11667 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a11667;
  /* 10a1165c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a1165f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11662 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a11665 jmp 0x10a11646 */
  goto L_10a11646;
L_10a11667:;
  /* 10a11667 jmp 0x10a1161a */
  goto L_10a1161a;
L_10a11669:;
  /* 10a11669 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1166b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1166d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1166f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a11672 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11675 push eax */
  push32((uint32_t)(EAX));
  /* 10a11676 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a1167b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a1167e push ecx */
  push32((uint32_t)(ECX));
  /* 10a1167f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a11681 call 0x10a0de20 */
  push32(0x10a11686u); f_10a0de20();
  /* 10a11686 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11689 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1168b jne 0x10a11692 */
  if (!C.zf) goto L_10a11692;
  /* 10a1168d jmp 0x10a117e2 */
  goto L_10a117e2;
L_10a11692:;
  /* 10a11692 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a11695 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10a1169a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a1169d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a116a0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a116a7 jmp 0x10a116b2 */
  goto L_10a116b2;
L_10a116a9:;
  /* 10a116a9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a116ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a116af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a116b2:;
  /* 10a116b2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a116b9 jge 0x10a116d0 */
  if ((C.sf==C.of)) goto L_10a116d0;
  /* 10a116bb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a116be mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10a116c2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10a116c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a116c8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a116cb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a116ce jmp 0x10a116a9 */
  goto L_10a116a9;
L_10a116d0:;
  /* 10a116d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a116d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a116d4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a116d7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a116da push edx */
  push32((uint32_t)(EDX));
  /* 10a116db push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a116e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a116e3 push eax */
  push32((uint32_t)(EAX));
  /* 10a116e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a116e6 call 0x10a14050 */
  push32(0x10a116ebu); f_10a14050();
  /* 10a116eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a116ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a116f0 jne 0x10a116f7 */
  if (!C.zf) goto L_10a116f7;
  /* 10a116f2 jmp 0x10a117e2 */
  goto L_10a117e2;
L_10a116f7:;
  /* 10a116f7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a116fa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10a116ff cmp dword ptr [0x10a2fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11706 jle 0x10a11763 */
  if ((C.zf||C.sf!=C.of)) goto L_10a11763;
  /* 10a11708 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10a1170b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a1170e jmp 0x10a11719 */
  goto L_10a11719;
L_10a11710:;
  /* 10a11710 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a11713 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11716 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10a11719:;
  /* 10a11719 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a1171c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a1171e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a11720 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a11722 je 0x10a11763 */
  if (C.zf) goto L_10a11763;
  /* 10a11724 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a11727 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11729 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a1172c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a1172e je 0x10a11763 */
  if (C.zf) goto L_10a11763;
  /* 10a11730 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a11733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11735 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a11737 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a1173a jmp 0x10a11745 */
  goto L_10a11745;
L_10a1173c:;
  /* 10a1173c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a1173f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11742 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a11745:;
  /* 10a11745 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a11748 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1174a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a1174d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11750 jg 0x10a11761 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a11761;
  /* 10a11752 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a11755 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a11758 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10a1175f jmp 0x10a1173c */
  goto L_10a1173c;
L_10a11761:;
  /* 10a11761 jmp 0x10a11710 */
  goto L_10a11710;
L_10a11763:;
  /* 10a11763 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a11766 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11769 mov dword ptr [0x10a2fc98], eax */
  w32((uint32_t)(0x10a2fc98), (EAX));
  /* 10a1176e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a11771 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11774 mov dword ptr [0x10a2fc9c], ecx */
  w32((uint32_t)(0x10a2fc9c), (ECX));
  /* 10a1177a cmp dword ptr [0x10a31918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11781 je 0x10a11794 */
  if (C.zf) goto L_10a11794;
  /* 10a11783 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a11785 mov edx, dword ptr [0x10a31918] */
  EDX = (r32((uint32_t)(0x10a31918)));
  /* 10a1178b push edx */
  push32((uint32_t)(EDX));
  /* 10a1178c call 0x10a06680 */
  push32(0x10a11791u); f_10a06680();
  /* 10a11791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a11794:;
  /* 10a11794 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a11797 mov dword ptr [0x10a31918], eax */
  w32((uint32_t)(0x10a31918), (EAX));
  /* 10a1179c cmp dword ptr [0x10a3191c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3191c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a117a3 je 0x10a117b6 */
  if (C.zf) goto L_10a117b6;
  /* 10a117a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a117a7 mov ecx, dword ptr [0x10a3191c] */
  ECX = (r32((uint32_t)(0x10a3191c)));
  /* 10a117ad push ecx */
  push32((uint32_t)(ECX));
  /* 10a117ae call 0x10a06680 */
  push32(0x10a117b3u); f_10a06680();
  /* 10a117b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a117b6:;
  /* 10a117b6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a117b9 mov dword ptr [0x10a3191c], edx */
  w32((uint32_t)(0x10a3191c), (EDX));
  /* 10a117bf push 2 */
  push32((uint32_t)(0x2u));
  /* 10a117c1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a117c4 push eax */
  push32((uint32_t)(EAX));
  /* 10a117c5 call 0x10a06680 */
  push32(0x10a117cau); f_10a06680();
  /* 10a117ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a117cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a117cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a117d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a117d3 call 0x10a06680 */
  push32(0x10a117d8u); f_10a06680();
  /* 10a117d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a117db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a117dd jmp 0x10a1186c */
  goto L_10a1186c;
L_10a117e2:;
  /* 10a117e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a117e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a117e7 push edx */
  push32((uint32_t)(EDX));
  /* 10a117e8 call 0x10a06680 */
  push32(0x10a117edu); f_10a06680();
  /* 10a117ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a117f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a117f2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a117f5 push eax */
  push32((uint32_t)(EAX));
  /* 10a117f6 call 0x10a06680 */
  push32(0x10a117fbu); f_10a06680();
  /* 10a117fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a117fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10a11800 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a11803 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11804 call 0x10a06680 */
  push32(0x10a11809u); f_10a06680();
  /* 10a11809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1180c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1180e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a11811 push edx */
  push32((uint32_t)(EDX));
  /* 10a11812 call 0x10a06680 */
  push32(0x10a11817u); f_10a06680();
  /* 10a11817 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1181a mov eax, 1 */
  EAX = (0x1u);
  /* 10a1181f jmp 0x10a1186c */
  goto L_10a1186c;
L_10a11821:;
  /* 10a11821 mov dword ptr [0x10a2fc98], 0x10a2fca2 */
  w32((uint32_t)(0x10a2fc98), (0x10a2fca2u));
  /* 10a1182b mov dword ptr [0x10a2fc9c], 0x10a2fca2 */
  w32((uint32_t)(0x10a2fc9c), (0x10a2fca2u));
  /* 10a11835 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a11837 mov eax, dword ptr [0x10a31918] */
  EAX = (r32((uint32_t)(0x10a31918)));
  /* 10a1183c push eax */
  push32((uint32_t)(EAX));
  /* 10a1183d call 0x10a06680 */
  push32(0x10a11842u); f_10a06680();
  /* 10a11842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11845 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a11847 mov ecx, dword ptr [0x10a3191c] */
  ECX = (r32((uint32_t)(0x10a3191c)));
  /* 10a1184d push ecx */
  push32((uint32_t)(ECX));
  /* 10a1184e call 0x10a06680 */
  push32(0x10a11853u); f_10a06680();
  /* 10a11853 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11856 mov dword ptr [0x10a31918], 0 */
  w32((uint32_t)(0x10a31918), (0x0u));
  /* 10a11860 mov dword ptr [0x10a3191c], 0 */
  w32((uint32_t)(0x10a3191c), (0x0u));
  /* 10a1186a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a1186c:;
  /* 10a1186c mov esp, ebp */
  ESP = (EBP);
  /* 10a1186e pop ebp */
  EBP = (pop32());
  /* 10a1186f ret  */
  ESPCHK(0x10a114d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011870 @ 0x10a11870 (7 bytes, 5 insns) */
void f_10a11870(void) {
  FTRACE(0x10a11870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a11870 push ebp */
  push32((uint32_t)(EBP));
  /* 10a11871 mov ebp, esp */
  EBP = (ESP);
  /* 10a11873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11875 pop ebp */
  EBP = (pop32());
  /* 10a11876 ret  */
  ESPCHK(0x10a11870u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10a11880 (129 bytes, 56 insns) */
void f_10a11880(void) {
  FTRACE(0x10a11880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a11880 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a11884 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a11888 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10a1188e jne 0x10a118cc */
  if (!C.zf) goto L_10a118cc;
L_10a11890:;
  /* 10a11890 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a11892 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a11894 jne 0x10a118c4 */
  if (!C.zf) goto L_10a118c4;
  /* 10a11896 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a11898 je 0x10a118c0 */
  if (C.zf) goto L_10a118c0;
  /* 10a1189a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a1189d jne 0x10a118c4 */
  if (!C.zf) goto L_10a118c4;
  /* 10a1189f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a118a1 je 0x10a118c0 */
  if (C.zf) goto L_10a118c0;
  /* 10a118a3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a118a6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a118a9 jne 0x10a118c4 */
  if (!C.zf) goto L_10a118c4;
  /* 10a118ab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a118ad je 0x10a118c0 */
  if (C.zf) goto L_10a118c0;
  /* 10a118af cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a118b2 jne 0x10a118c4 */
  if (!C.zf) goto L_10a118c4;
  /* 10a118b4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a118b7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a118ba or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a118bc jne 0x10a11890 */
  if (!C.zf) goto L_10a11890;
  /* 10a118be mov edi, edi */
  EDI = (EDI);
L_10a118c0:;
  /* 10a118c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a118c2 ret  */
  ESPCHK(0x10a11880u, _esp0);
  ESP += 4; return;
  /* 10a118c3 nop  */
  /* nop */
L_10a118c4:;
  /* 10a118c4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a118c6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a118c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10a118c9 ret  */
  ESPCHK(0x10a11880u, _esp0);
  ESP += 4; return;
  /* 10a118ca mov edi, edi */
  EDI = (EDI);
L_10a118cc:;
  /* 10a118cc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10a118d2 je 0x10a118e8 */
  if (C.zf) goto L_10a118e8;
  /* 10a118d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a118d6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a118d7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a118d9 jne 0x10a118c4 */
  if (!C.zf) goto L_10a118c4;
  /* 10a118db inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a118dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a118de je 0x10a118c0 */
  if (C.zf) goto L_10a118c0;
  /* 10a118e0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10a118e6 je 0x10a11890 */
  if (C.zf) goto L_10a11890;
L_10a118e8:;
  /* 10a118e8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10a118eb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a118ee cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a118f0 jne 0x10a118c4 */
  if (!C.zf) goto L_10a118c4;
  /* 10a118f2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a118f4 je 0x10a118c0 */
  if (C.zf) goto L_10a118c0;
  /* 10a118f6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a118f9 jne 0x10a118c4 */
  if (!C.zf) goto L_10a118c4;
  /* 10a118fb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a118fd je 0x10a118c0 */
  if (C.zf) goto L_10a118c0;
  /* 10a118ff add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11902 jmp 0x10a11890 */
  goto L_10a11890;
}

/* FUN_10011910 @ 0x10a11910 (62 bytes, 35 insns) */
void f_10a11910(void) {
  FTRACE(0x10a11910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a11910 push ebp */
  push32((uint32_t)(EBP));
  /* 10a11911 mov ebp, esp */
  EBP = (ESP);
  /* 10a11913 push esi */
  push32((uint32_t)(ESI));
  /* 10a11914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11916 push eax */
  push32((uint32_t)(EAX));
  /* 10a11917 push eax */
  push32((uint32_t)(EAX));
  /* 10a11918 push eax */
  push32((uint32_t)(EAX));
  /* 10a11919 push eax */
  push32((uint32_t)(EAX));
  /* 10a1191a push eax */
  push32((uint32_t)(EAX));
  /* 10a1191b push eax */
  push32((uint32_t)(EAX));
  /* 10a1191c push eax */
  push32((uint32_t)(EAX));
  /* 10a1191d push eax */
  push32((uint32_t)(EAX));
  /* 10a1191e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a11921 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a11924:;
  /* 10a11924 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a11926 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a11928 je 0x10a11931 */
  if (C.zf) goto L_10a11931;
  /* 10a1192a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a1192b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10a1192b");
  /* 10a1192f jmp 0x10a11924 */
  goto L_10a11924;
L_10a11931:;
  /* 10a11931 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11934 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a11937 nop  */
  /* nop */
L_10a11938:;
  /* 10a11938 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a11939 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a1193b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a1193d je 0x10a11946 */
  if (C.zf) goto L_10a11946;
  /* 10a1193f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a11940 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10a11940");
  /* 10a11944 jae 0x10a11938 */
  if (!C.cf) goto L_10a11938;
L_10a11946:;
  /* 10a11946 mov eax, ecx */
  EAX = (ECX);
  /* 10a11948 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1194b pop esi */
  ESI = (pop32());
  /* 10a1194c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a1194d ret  */
  ESPCHK(0x10a11910u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10a11950 (56 bytes, 31 insns) */
void f_10a11950(void) {
  FTRACE(0x10a11950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a11950 push ebp */
  push32((uint32_t)(EBP));
  /* 10a11951 mov ebp, esp */
  EBP = (ESP);
  /* 10a11953 push edi */
  push32((uint32_t)(EDI));
  /* 10a11954 push esi */
  push32((uint32_t)(ESI));
  /* 10a11955 push ebx */
  push32((uint32_t)(EBX));
  /* 10a11956 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a11959 jecxz 0x10a11981 */
  x86_unimpl("jecxz @ 0x10a11959");
  /* 10a1195b mov ebx, ecx */
  EBX = (ECX);
  /* 10a1195d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11960 mov esi, edi */
  ESI = (EDI);
  /* 10a11962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11964 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10a11966 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a11968 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1196a mov edi, esi */
  EDI = (ESI);
  /* 10a1196c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1196f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10a11971 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10a11974 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11976 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a11979 ja 0x10a1197f */
  if ((!C.cf&&!C.zf)) goto L_10a1197f;
  /* 10a1197b je 0x10a11981 */
  if (C.zf) goto L_10a11981;
  /* 10a1197d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a1197e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10a1197f:;
  /* 10a1197f not ecx */
  ECX = (~(ECX));
L_10a11981:;
  /* 10a11981 mov eax, ecx */
  EAX = (ECX);
  /* 10a11983 pop ebx */
  EBX = (pop32());
  /* 10a11984 pop esi */
  ESI = (pop32());
  /* 10a11985 pop edi */
  EDI = (pop32());
  /* 10a11986 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a11987 ret  */
  ESPCHK(0x10a11950u, _esp0);
  ESP += 4; return;
}

/* FUN_10011990 @ 0x10a11990 (58 bytes, 32 insns) */
void f_10a11990(void) {
  FTRACE(0x10a11990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a11990 push ebp */
  push32((uint32_t)(EBP));
  /* 10a11991 mov ebp, esp */
  EBP = (ESP);
  /* 10a11993 push esi */
  push32((uint32_t)(ESI));
  /* 10a11994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11996 push eax */
  push32((uint32_t)(EAX));
  /* 10a11997 push eax */
  push32((uint32_t)(EAX));
  /* 10a11998 push eax */
  push32((uint32_t)(EAX));
  /* 10a11999 push eax */
  push32((uint32_t)(EAX));
  /* 10a1199a push eax */
  push32((uint32_t)(EAX));
  /* 10a1199b push eax */
  push32((uint32_t)(EAX));
  /* 10a1199c push eax */
  push32((uint32_t)(EAX));
  /* 10a1199d push eax */
  push32((uint32_t)(EAX));
  /* 10a1199e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a119a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a119a4:;
  /* 10a119a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a119a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a119a8 je 0x10a119b1 */
  if (C.zf) goto L_10a119b1;
  /* 10a119aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a119ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10a119ab");
  /* 10a119af jmp 0x10a119a4 */
  goto L_10a119a4;
L_10a119b1:;
  /* 10a119b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10a119b4:;
  /* 10a119b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a119b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a119b8 je 0x10a119c4 */
  if (C.zf) goto L_10a119c4;
  /* 10a119ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a119bb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10a119bb");
  /* 10a119bf jae 0x10a119b4 */
  if (!C.cf) goto L_10a119b4;
  /* 10a119c1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10a119c4:;
  /* 10a119c4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a119c7 pop esi */
  ESI = (pop32());
  /* 10a119c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a119c9 ret  */
  ESPCHK(0x10a11990u, _esp0);
  ESP += 4; return;
}

/* FUN_100119d0 @ 0x10a119d0 (512 bytes, 147 insns) */
void f_10a119d0(void) {
  FTRACE(0x10a119d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a119d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a119d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a119d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a119d6 cmp dword ptr [0x10a31964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a119dd jne 0x10a11a02 */
  if (!C.zf) goto L_10a11a02;
  /* 10a119df call 0x10a124a0 */
  push32(0x10a119e4u); f_10a124a0();
  /* 10a119e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a119e6 je 0x10a119f2 */
  if (C.zf) goto L_10a119f2;
  /* 10a119e8 mov eax, dword ptr [0x10a342cc] */
  EAX = (r32((uint32_t)(0x10a342cc)));
  /* 10a119ed mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a119f0 jmp 0x10a119f9 */
  goto L_10a119f9;
L_10a119f2:;
  /* 10a119f2 mov dword ptr [ebp - 8], 0x10a124f0 */
  w32((uint32_t)(EBP + -0x8), (0x10a124f0u));
L_10a119f9:;
  /* 10a119f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a119fc mov dword ptr [0x10a31964], ecx */
  w32((uint32_t)(0x10a31964), (ECX));
L_10a11a02:;
  /* 10a11a02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11a06 jne 0x10a11a12 */
  if (!C.zf) goto L_10a11a12;
  /* 10a11a08 call 0x10a122f0 */
  push32(0x10a11a0du); f_10a122f0();
  /* 10a11a0d jmp 0x10a11ade */
  goto L_10a11ade;
L_10a11a12:;
  /* 10a11a12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11a15 mov dword ptr [0x10a31954], edx */
  w32((uint32_t)(0x10a31954), (EDX));
  /* 10a11a1b cmp dword ptr [0x10a31954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11a22 je 0x10a11a44 */
  if (C.zf) goto L_10a11a44;
  /* 10a11a24 mov eax, dword ptr [0x10a31954] */
  EAX = (r32((uint32_t)(0x10a31954)));
  /* 10a11a29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a11a2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a11a2e je 0x10a11a44 */
  if (C.zf) goto L_10a11a44;
  /* 10a11a30 push 0x10a31954 */
  push32((uint32_t)(0x10a31954u));
  /* 10a11a35 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a11a37 push 0x10a30a90 */
  push32((uint32_t)(0x10a30a90u));
  /* 10a11a3c call 0x10a11bd0 */
  push32(0x10a11a41u); f_10a11bd0();
  /* 10a11a41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a11a44:;
  /* 10a11a44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11a47 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11a4a mov dword ptr [0x10a31958], edx */
  w32((uint32_t)(0x10a31958), (EDX));
  /* 10a11a50 cmp dword ptr [0x10a31958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11a57 je 0x10a11a79 */
  if (C.zf) goto L_10a11a79;
  /* 10a11a59 mov eax, dword ptr [0x10a31958] */
  EAX = (r32((uint32_t)(0x10a31958)));
  /* 10a11a5e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a11a61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a11a63 je 0x10a11a79 */
  if (C.zf) goto L_10a11a79;
  /* 10a11a65 push 0x10a31958 */
  push32((uint32_t)(0x10a31958u));
  /* 10a11a6a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a11a6c push 0x10a309d8 */
  push32((uint32_t)(0x10a309d8u));
  /* 10a11a71 call 0x10a11bd0 */
  push32(0x10a11a76u); f_10a11bd0();
  /* 10a11a76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a11a79:;
  /* 10a11a79 mov dword ptr [0x10a3195c], 0 */
  w32((uint32_t)(0x10a3195c), (0x0u));
  /* 10a11a83 cmp dword ptr [0x10a31954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11a8a je 0x10a11abd */
  if (C.zf) goto L_10a11abd;
  /* 10a11a8c mov edx, dword ptr [0x10a31954] */
  EDX = (r32((uint32_t)(0x10a31954)));
  /* 10a11a92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a11a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11a97 je 0x10a11abd */
  if (C.zf) goto L_10a11abd;
  /* 10a11a99 cmp dword ptr [0x10a31958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11aa0 je 0x10a11ab6 */
  if (C.zf) goto L_10a11ab6;
  /* 10a11aa2 mov ecx, dword ptr [0x10a31958] */
  ECX = (r32((uint32_t)(0x10a31958)));
  /* 10a11aa8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a11aab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a11aad je 0x10a11ab6 */
  if (C.zf) goto L_10a11ab6;
  /* 10a11aaf call 0x10a11c60 */
  push32(0x10a11ab4u); f_10a11c60();
  /* 10a11ab4 jmp 0x10a11abb */
  goto L_10a11abb;
L_10a11ab6:;
  /* 10a11ab6 call 0x10a12050 */
  push32(0x10a11abbu); f_10a12050();
L_10a11abb:;
  /* 10a11abb jmp 0x10a11ade */
  goto L_10a11ade;
L_10a11abd:;
  /* 10a11abd cmp dword ptr [0x10a31958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11ac4 je 0x10a11ad9 */
  if (C.zf) goto L_10a11ad9;
  /* 10a11ac6 mov eax, dword ptr [0x10a31958] */
  EAX = (r32((uint32_t)(0x10a31958)));
  /* 10a11acb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a11ace test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a11ad0 je 0x10a11ad9 */
  if (C.zf) goto L_10a11ad9;
  /* 10a11ad2 call 0x10a121f0 */
  push32(0x10a11ad7u); f_10a121f0();
  /* 10a11ad7 jmp 0x10a11ade */
  goto L_10a11ade;
L_10a11ad9:;
  /* 10a11ad9 call 0x10a122f0 */
  push32(0x10a11adeu); f_10a122f0();
L_10a11ade:;
  /* 10a11ade cmp dword ptr [0x10a3195c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3195c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11ae5 jne 0x10a11aee */
  if (!C.zf) goto L_10a11aee;
  /* 10a11ae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11ae9 jmp 0x10a11bcc */
  goto L_10a11bcc;
L_10a11aee:;
  /* 10a11aee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11af1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11af7 push edx */
  push32((uint32_t)(EDX));
  /* 10a11af8 call 0x10a12320 */
  push32(0x10a11afdu); f_10a12320();
  /* 10a11afd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11b00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a11b03 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11b07 je 0x10a11b1c */
  if (C.zf) goto L_10a11b1c;
  /* 10a11b09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11b0c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a11b11 push eax */
  push32((uint32_t)(EAX));
  /* 10a11b12 call dword ptr [0x10a342d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342d0))), 0x10a11b18u);
  /* 10a11b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11b1a jne 0x10a11b23 */
  if (!C.zf) goto L_10a11b23;
L_10a11b1c:;
  /* 10a11b1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11b1e jmp 0x10a11bcc */
  goto L_10a11bcc;
L_10a11b23:;
  /* 10a11b23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a11b25 mov ecx, dword ptr [0x10a31944] */
  ECX = (r32((uint32_t)(0x10a31944)));
  /* 10a11b2b push ecx */
  push32((uint32_t)(ECX));
  /* 10a11b2c call dword ptr [0x10a342d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342d4))), 0x10a11b32u);
  /* 10a11b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11b34 jne 0x10a11b3d */
  if (!C.zf) goto L_10a11b3d;
  /* 10a11b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11b38 jmp 0x10a11bcc */
  goto L_10a11bcc;
L_10a11b3d:;
  /* 10a11b3d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11b41 je 0x10a11b68 */
  if (C.zf) goto L_10a11b68;
  /* 10a11b43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a11b46 mov ax, word ptr [0x10a31944] */
  AX = (r16((uint32_t)(0x10a31944)));
  /* 10a11b4c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10a11b4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a11b52 mov dx, word ptr [0x10a31960] */
  DX = (r16((uint32_t)(0x10a31960)));
  /* 10a11b59 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10a11b5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a11b60 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10a11b64 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10a11b68:;
  /* 10a11b68 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11b6c je 0x10a11bc7 */
  if (C.zf) goto L_10a11bc7;
  /* 10a11b6e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a11b70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a11b73 push edx */
  push32((uint32_t)(EDX));
  /* 10a11b74 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10a11b79 mov eax, dword ptr [0x10a31944] */
  EAX = (r32((uint32_t)(0x10a31944)));
  /* 10a11b7e push eax */
  push32((uint32_t)(EAX));
  /* 10a11b7f call dword ptr [0x10a31964] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31964))), 0x10a11b85u);
  /* 10a11b85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11b87 jne 0x10a11b8d */
  if (!C.zf) goto L_10a11b8d;
  /* 10a11b89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11b8b jmp 0x10a11bcc */
  goto L_10a11bcc;
L_10a11b8d:;
  /* 10a11b8d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a11b8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a11b92 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11b95 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11b96 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10a11b9b mov edx, dword ptr [0x10a31960] */
  EDX = (r32((uint32_t)(0x10a31960)));
  /* 10a11ba1 push edx */
  push32((uint32_t)(EDX));
  /* 10a11ba2 call dword ptr [0x10a31964] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31964))), 0x10a11ba8u);
  /* 10a11ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11baa jne 0x10a11bb0 */
  if (!C.zf) goto L_10a11bb0;
  /* 10a11bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a11bae jmp 0x10a11bcc */
  goto L_10a11bcc;
L_10a11bb0:;
  /* 10a11bb0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a11bb2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a11bb5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11bba push eax */
  push32((uint32_t)(EAX));
  /* 10a11bbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11bbe push ecx */
  push32((uint32_t)(ECX));
  /* 10a11bbf call 0x10a08730 */
  push32(0x10a11bc4u); f_10a08730();
  /* 10a11bc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a11bc7:;
  /* 10a11bc7 mov eax, 1 */
  EAX = (0x1u);
L_10a11bcc:;
  /* 10a11bcc mov esp, ebp */
  ESP = (EBP);
  /* 10a11bce pop ebp */
  EBP = (pop32());
  /* 10a11bcf ret  */
  ESPCHK(0x10a119d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bd0 @ 0x10a11bd0 (130 bytes, 47 insns) */
void f_10a11bd0(void) {
  FTRACE(0x10a11bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a11bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a11bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a11bd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a11bd6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a11bdd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10a11be4:;
  /* 10a11be4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a11be7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11bea jg 0x10a11c4e */
  if ((!C.zf&&C.sf==C.of)) goto L_10a11c4e;
  /* 10a11bec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11bf0 je 0x10a11c4e */
  if (C.zf) goto L_10a11c4e;
  /* 10a11bf2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a11bf5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11bf8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a11bf9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a11bfb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a11bfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a11c00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11c03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11c06 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10a11c09 push eax */
  push32((uint32_t)(EAX));
  /* 10a11c0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a11c0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a11c0f push edx */
  push32((uint32_t)(EDX));
  /* 10a11c10 call 0x10a142c0 */
  push32(0x10a11c15u); f_10a142c0();
  /* 10a11c15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11c18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a11c1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11c1f jne 0x10a11c32 */
  if (!C.zf) goto L_10a11c32;
  /* 10a11c21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11c24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11c27 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10a11c2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a11c2e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a11c30 jmp 0x10a11c4c */
  goto L_10a11c4c;
L_10a11c32:;
  /* 10a11c32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11c36 jge 0x10a11c43 */
  if ((C.sf==C.of)) goto L_10a11c43;
  /* 10a11c38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11c3b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a11c3e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a11c41 jmp 0x10a11c4c */
  goto L_10a11c4c;
L_10a11c43:;
  /* 10a11c43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11c46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11c49 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a11c4c:;
  /* 10a11c4c jmp 0x10a11be4 */
  goto L_10a11be4;
L_10a11c4e:;
  /* 10a11c4e mov esp, ebp */
  ESP = (EBP);
  /* 10a11c50 pop ebp */
  EBP = (pop32());
  /* 10a11c51 ret  */
  ESPCHK(0x10a11bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c60 @ 0x10a11c60 (186 bytes, 50 insns) */
void f_10a11c60(void) {
  FTRACE(0x10a11c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a11c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a11c61 mov ebp, esp */
  EBP = (ESP);
  /* 10a11c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11c64 mov eax, dword ptr [0x10a31954] */
  EAX = (r32((uint32_t)(0x10a31954)));
  /* 10a11c69 push eax */
  push32((uint32_t)(EAX));
  /* 10a11c6a call 0x10a08a20 */
  push32(0x10a11c6fu); f_10a08a20();
  /* 10a11c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11c72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11c74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11c77 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a11c7a mov dword ptr [0x10a31950], ecx */
  w32((uint32_t)(0x10a31950), (ECX));
  /* 10a11c80 mov edx, dword ptr [0x10a31958] */
  EDX = (r32((uint32_t)(0x10a31958)));
  /* 10a11c86 push edx */
  push32((uint32_t)(EDX));
  /* 10a11c87 call 0x10a08a20 */
  push32(0x10a11c8cu); f_10a08a20();
  /* 10a11c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11c8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a11c91 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11c94 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a11c97 mov dword ptr [0x10a31948], ecx */
  w32((uint32_t)(0x10a31948), (ECX));
  /* 10a11c9d mov dword ptr [0x10a31944], 0 */
  w32((uint32_t)(0x10a31944), (0x0u));
  /* 10a11ca7 cmp dword ptr [0x10a31950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11cae je 0x10a11cb9 */
  if (C.zf) goto L_10a11cb9;
  /* 10a11cb0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a11cb7 jmp 0x10a11ccb */
  goto L_10a11ccb;
L_10a11cb9:;
  /* 10a11cb9 mov edx, dword ptr [0x10a31954] */
  EDX = (r32((uint32_t)(0x10a31954)));
  /* 10a11cbf push edx */
  push32((uint32_t)(EDX));
  /* 10a11cc0 call 0x10a12700 */
  push32(0x10a11cc5u); f_10a12700();
  /* 10a11cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11cc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a11ccb:;
  /* 10a11ccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a11cce mov dword ptr [0x10a3194c], eax */
  w32((uint32_t)(0x10a3194c), (EAX));
  /* 10a11cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a11cd5 push 0x10a11d20 */
  push32((uint32_t)(0x10a11d20u));
  /* 10a11cda call dword ptr [0x10a342c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342c8))), 0x10a11ce0u);
  /* 10a11ce0 mov ecx, dword ptr [0x10a3195c] */
  ECX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11ce6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10a11cec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a11cee je 0x10a11d0c */
  if (C.zf) goto L_10a11d0c;
  /* 10a11cf0 mov edx, dword ptr [0x10a3195c] */
  EDX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11cf6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10a11cfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a11cfe je 0x10a11d0c */
  if (C.zf) goto L_10a11d0c;
  /* 10a11d00 mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11d05 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10a11d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11d0a jne 0x10a11d16 */
  if (!C.zf) goto L_10a11d16;
L_10a11d0c:;
  /* 10a11d0c mov dword ptr [0x10a3195c], 0 */
  w32((uint32_t)(0x10a3195c), (0x0u));
L_10a11d16:;
  /* 10a11d16 mov esp, ebp */
  ESP = (EBP);
  /* 10a11d18 pop ebp */
  EBP = (pop32());
  /* 10a11d19 ret  */
  ESPCHK(0x10a11c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d20 @ 0x10a11d20 (804 bytes, 220 insns) */
void f_10a11d20(void) {
  FTRACE(0x10a11d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a11d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a11d21 mov ebp, esp */
  EBP = (ESP);
  /* 10a11d23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a11d26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a11d29 push eax */
  push32((uint32_t)(EAX));
  /* 10a11d2a call 0x10a12680 */
  push32(0x10a11d2fu); f_10a12680();
  /* 10a11d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11d32 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10a11d35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a11d37 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a11d3a push ecx */
  push32((uint32_t)(ECX));
  /* 10a11d3b mov edx, dword ptr [0x10a31948] */
  EDX = (r32((uint32_t)(0x10a31948)));
  /* 10a11d41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a11d43 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a11d45 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10a11d4b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11d51 push edx */
  push32((uint32_t)(EDX));
  /* 10a11d52 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11d55 push eax */
  push32((uint32_t)(EAX));
  /* 10a11d56 call dword ptr [0x10a31964] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31964))), 0x10a11d5cu);
  /* 10a11d5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11d5e jne 0x10a11d74 */
  if (!C.zf) goto L_10a11d74;
  /* 10a11d60 mov dword ptr [0x10a3195c], 0 */
  w32((uint32_t)(0x10a3195c), (0x0u));
  /* 10a11d6a mov eax, 1 */
  EAX = (0x1u);
  /* 10a11d6f jmp 0x10a1203e */
  goto L_10a1203e;
L_10a11d74:;
  /* 10a11d74 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a11d77 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11d78 mov edx, dword ptr [0x10a31958] */
  EDX = (r32((uint32_t)(0x10a31958)));
  /* 10a11d7e push edx */
  push32((uint32_t)(EDX));
  /* 10a11d7f call 0x10a142c0 */
  push32(0x10a11d84u); f_10a142c0();
  /* 10a11d84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11d87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11d89 jne 0x10a11eaf */
  if (!C.zf) goto L_10a11eaf;
  /* 10a11d8f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a11d91 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a11d94 push eax */
  push32((uint32_t)(EAX));
  /* 10a11d95 mov ecx, dword ptr [0x10a31950] */
  ECX = (r32((uint32_t)(0x10a31950)));
  /* 10a11d9b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a11d9d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a11d9f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10a11da5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11dab push ecx */
  push32((uint32_t)(ECX));
  /* 10a11dac mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11daf push edx */
  push32((uint32_t)(EDX));
  /* 10a11db0 call dword ptr [0x10a31964] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31964))), 0x10a11db6u);
  /* 10a11db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11db8 jne 0x10a11dce */
  if (!C.zf) goto L_10a11dce;
  /* 10a11dba mov dword ptr [0x10a3195c], 0 */
  w32((uint32_t)(0x10a3195c), (0x0u));
  /* 10a11dc4 mov eax, 1 */
  EAX = (0x1u);
  /* 10a11dc9 jmp 0x10a1203e */
  goto L_10a1203e;
L_10a11dce:;
  /* 10a11dce lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a11dd1 push eax */
  push32((uint32_t)(EAX));
  /* 10a11dd2 mov ecx, dword ptr [0x10a31954] */
  ECX = (r32((uint32_t)(0x10a31954)));
  /* 10a11dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11dd9 call 0x10a142c0 */
  push32(0x10a11ddeu); f_10a142c0();
  /* 10a11dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11de3 jne 0x10a11e10 */
  if (!C.zf) goto L_10a11e10;
  /* 10a11de5 mov edx, dword ptr [0x10a3195c] */
  EDX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11deb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10a11df1 mov dword ptr [0x10a3195c], edx */
  w32((uint32_t)(0x10a3195c), (EDX));
  /* 10a11df7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11dfa mov dword ptr [0x10a31960], eax */
  w32((uint32_t)(0x10a31960), (EAX));
  /* 10a11dff mov ecx, dword ptr [0x10a31960] */
  ECX = (r32((uint32_t)(0x10a31960)));
  /* 10a11e05 mov dword ptr [0x10a31944], ecx */
  w32((uint32_t)(0x10a31944), (ECX));
  /* 10a11e0b jmp 0x10a11eaf */
  goto L_10a11eaf;
L_10a11e10:;
  /* 10a11e10 mov edx, dword ptr [0x10a3195c] */
  EDX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11e16 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10a11e19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a11e1b jne 0x10a11eaf */
  if (!C.zf) goto L_10a11eaf;
  /* 10a11e21 cmp dword ptr [0x10a3194c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3194c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11e28 je 0x10a11e7d */
  if (C.zf) goto L_10a11e7d;
  /* 10a11e2a mov eax, dword ptr [0x10a3194c] */
  EAX = (r32((uint32_t)(0x10a3194c)));
  /* 10a11e2f push eax */
  push32((uint32_t)(EAX));
  /* 10a11e30 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a11e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11e34 mov edx, dword ptr [0x10a31954] */
  EDX = (r32((uint32_t)(0x10a31954)));
  /* 10a11e3a push edx */
  push32((uint32_t)(EDX));
  /* 10a11e3b call 0x10a14390 */
  push32(0x10a11e40u); f_10a14390();
  /* 10a11e40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11e43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11e45 jne 0x10a11e7d */
  if (!C.zf) goto L_10a11e7d;
  /* 10a11e47 mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11e4c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10a11e4e mov dword ptr [0x10a3195c], eax */
  w32((uint32_t)(0x10a3195c), (EAX));
  /* 10a11e53 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11e56 mov dword ptr [0x10a31960], ecx */
  w32((uint32_t)(0x10a31960), (ECX));
  /* 10a11e5c mov edx, dword ptr [0x10a31954] */
  EDX = (r32((uint32_t)(0x10a31954)));
  /* 10a11e62 push edx */
  push32((uint32_t)(EDX));
  /* 10a11e63 call 0x10a08a20 */
  push32(0x10a11e68u); f_10a08a20();
  /* 10a11e68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11e6b cmp eax, dword ptr [0x10a3194c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a3194c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11e71 jne 0x10a11e7b */
  if (!C.zf) goto L_10a11e7b;
  /* 10a11e73 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11e76 mov dword ptr [0x10a31944], eax */
  w32((uint32_t)(0x10a31944), (EAX));
L_10a11e7b:;
  /* 10a11e7b jmp 0x10a11eaf */
  goto L_10a11eaf;
L_10a11e7d:;
  /* 10a11e7d mov ecx, dword ptr [0x10a3195c] */
  ECX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11e83 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a11e86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a11e88 jne 0x10a11eaf */
  if (!C.zf) goto L_10a11eaf;
  /* 10a11e8a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11e8d push edx */
  push32((uint32_t)(EDX));
  /* 10a11e8e call 0x10a123c0 */
  push32(0x10a11e93u); f_10a123c0();
  /* 10a11e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11e98 je 0x10a11eaf */
  if (C.zf) goto L_10a11eaf;
  /* 10a11e9a mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11e9f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10a11ea1 mov dword ptr [0x10a3195c], eax */
  w32((uint32_t)(0x10a3195c), (EAX));
  /* 10a11ea6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11ea9 mov dword ptr [0x10a31960], ecx */
  w32((uint32_t)(0x10a31960), (ECX));
L_10a11eaf:;
  /* 10a11eaf mov edx, dword ptr [0x10a3195c] */
  EDX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11eb5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10a11ebb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11ec1 je 0x10a12031 */
  if (C.zf) goto L_10a12031;
  /* 10a11ec7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a11ec9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a11ecc push eax */
  push32((uint32_t)(EAX));
  /* 10a11ecd mov ecx, dword ptr [0x10a31950] */
  ECX = (r32((uint32_t)(0x10a31950)));
  /* 10a11ed3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a11ed5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a11ed7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10a11edd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11ee4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11ee7 push edx */
  push32((uint32_t)(EDX));
  /* 10a11ee8 call dword ptr [0x10a31964] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31964))), 0x10a11eeeu);
  /* 10a11eee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11ef0 jne 0x10a11f06 */
  if (!C.zf) goto L_10a11f06;
  /* 10a11ef2 mov dword ptr [0x10a3195c], 0 */
  w32((uint32_t)(0x10a3195c), (0x0u));
  /* 10a11efc mov eax, 1 */
  EAX = (0x1u);
  /* 10a11f01 jmp 0x10a1203e */
  goto L_10a1203e;
L_10a11f06:;
  /* 10a11f06 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a11f09 push eax */
  push32((uint32_t)(EAX));
  /* 10a11f0a mov ecx, dword ptr [0x10a31954] */
  ECX = (r32((uint32_t)(0x10a31954)));
  /* 10a11f10 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11f11 call 0x10a142c0 */
  push32(0x10a11f16u); f_10a142c0();
  /* 10a11f16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11f19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11f1b jne 0x10a11fd0 */
  if (!C.zf) goto L_10a11fd0;
  /* 10a11f21 mov edx, dword ptr [0x10a3195c] */
  EDX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11f27 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a11f2a mov dword ptr [0x10a3195c], edx */
  w32((uint32_t)(0x10a3195c), (EDX));
  /* 10a11f30 cmp dword ptr [0x10a31950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11f37 je 0x10a11f5a */
  if (C.zf) goto L_10a11f5a;
  /* 10a11f39 mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11f3e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10a11f41 mov dword ptr [0x10a3195c], eax */
  w32((uint32_t)(0x10a3195c), (EAX));
  /* 10a11f46 cmp dword ptr [0x10a31944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11f4d jne 0x10a11f58 */
  if (!C.zf) goto L_10a11f58;
  /* 10a11f4f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11f52 mov dword ptr [0x10a31944], ecx */
  w32((uint32_t)(0x10a31944), (ECX));
L_10a11f58:;
  /* 10a11f58 jmp 0x10a11fce */
  goto L_10a11fce;
L_10a11f5a:;
  /* 10a11f5a cmp dword ptr [0x10a3194c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3194c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11f61 je 0x10a11faf */
  if (C.zf) goto L_10a11faf;
  /* 10a11f63 mov edx, dword ptr [0x10a31954] */
  EDX = (r32((uint32_t)(0x10a31954)));
  /* 10a11f69 push edx */
  push32((uint32_t)(EDX));
  /* 10a11f6a call 0x10a08a20 */
  push32(0x10a11f6fu); f_10a08a20();
  /* 10a11f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11f72 cmp eax, dword ptr [0x10a3194c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a3194c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11f78 jne 0x10a11faf */
  if (!C.zf) goto L_10a11faf;
  /* 10a11f7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a11f7c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11f7f push eax */
  push32((uint32_t)(EAX));
  /* 10a11f80 call 0x10a12410 */
  push32(0x10a11f85u); f_10a12410();
  /* 10a11f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11f8a je 0x10a11fad */
  if (C.zf) goto L_10a11fad;
  /* 10a11f8c mov ecx, dword ptr [0x10a3195c] */
  ECX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11f92 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a11f95 mov dword ptr [0x10a3195c], ecx */
  w32((uint32_t)(0x10a3195c), (ECX));
  /* 10a11f9b cmp dword ptr [0x10a31944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11fa2 jne 0x10a11fad */
  if (!C.zf) goto L_10a11fad;
  /* 10a11fa4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11fa7 mov dword ptr [0x10a31944], edx */
  w32((uint32_t)(0x10a31944), (EDX));
L_10a11fad:;
  /* 10a11fad jmp 0x10a11fce */
  goto L_10a11fce;
L_10a11faf:;
  /* 10a11faf mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a11fb4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10a11fb7 mov dword ptr [0x10a3195c], eax */
  w32((uint32_t)(0x10a3195c), (EAX));
  /* 10a11fbc cmp dword ptr [0x10a31944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11fc3 jne 0x10a11fce */
  if (!C.zf) goto L_10a11fce;
  /* 10a11fc5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a11fc8 mov dword ptr [0x10a31944], ecx */
  w32((uint32_t)(0x10a31944), (ECX));
L_10a11fce:;
  /* 10a11fce jmp 0x10a12031 */
  goto L_10a12031;
L_10a11fd0:;
  /* 10a11fd0 cmp dword ptr [0x10a31950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11fd7 jne 0x10a12031 */
  if (!C.zf) goto L_10a12031;
  /* 10a11fd9 cmp dword ptr [0x10a3194c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3194c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a11fe0 je 0x10a12031 */
  if (C.zf) goto L_10a12031;
  /* 10a11fe2 mov edx, dword ptr [0x10a3194c] */
  EDX = (r32((uint32_t)(0x10a3194c)));
  /* 10a11fe8 push edx */
  push32((uint32_t)(EDX));
  /* 10a11fe9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a11fec push eax */
  push32((uint32_t)(EAX));
  /* 10a11fed mov ecx, dword ptr [0x10a31954] */
  ECX = (r32((uint32_t)(0x10a31954)));
  /* 10a11ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a11ff4 call 0x10a14390 */
  push32(0x10a11ff9u); f_10a14390();
  /* 10a11ff9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a11ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a11ffe jne 0x10a12031 */
  if (!C.zf) goto L_10a12031;
  /* 10a12000 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a12002 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a12005 push edx */
  push32((uint32_t)(EDX));
  /* 10a12006 call 0x10a12410 */
  push32(0x10a1200bu); f_10a12410();
  /* 10a1200b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1200e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a12010 je 0x10a12031 */
  if (C.zf) goto L_10a12031;
  /* 10a12012 mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a12017 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10a1201a mov dword ptr [0x10a3195c], eax */
  w32((uint32_t)(0x10a3195c), (EAX));
  /* 10a1201f cmp dword ptr [0x10a31944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12026 jne 0x10a12031 */
  if (!C.zf) goto L_10a12031;
  /* 10a12028 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a1202b mov dword ptr [0x10a31944], ecx */
  w32((uint32_t)(0x10a31944), (ECX));
L_10a12031:;
  /* 10a12031 mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a12036 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a12039 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a1203b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a1203d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10a1203e:;
  /* 10a1203e mov esp, ebp */
  ESP = (EBP);
  /* 10a12040 pop ebp */
  EBP = (pop32());
  /* 10a12041 ret 4 */
  ESPCHK(0x10a11d20u, _esp0);
  ESP += 8; return;
}

/* FUN_10012050 @ 0x10a12050 (116 bytes, 33 insns) */
void f_10a12050(void) {
  FTRACE(0x10a12050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12050 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12051 mov ebp, esp */
  EBP = (ESP);
  /* 10a12053 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12054 mov eax, dword ptr [0x10a31954] */
  EAX = (r32((uint32_t)(0x10a31954)));
  /* 10a12059 push eax */
  push32((uint32_t)(EAX));
  /* 10a1205a call 0x10a08a20 */
  push32(0x10a1205fu); f_10a08a20();
  /* 10a1205f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12062 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a12064 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12067 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a1206a mov dword ptr [0x10a31950], ecx */
  w32((uint32_t)(0x10a31950), (ECX));
  /* 10a12070 cmp dword ptr [0x10a31950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12077 je 0x10a12082 */
  if (C.zf) goto L_10a12082;
  /* 10a12079 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a12080 jmp 0x10a12094 */
  goto L_10a12094;
L_10a12082:;
  /* 10a12082 mov edx, dword ptr [0x10a31954] */
  EDX = (r32((uint32_t)(0x10a31954)));
  /* 10a12088 push edx */
  push32((uint32_t)(EDX));
  /* 10a12089 call 0x10a12700 */
  push32(0x10a1208eu); f_10a12700();
  /* 10a1208e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12091 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a12094:;
  /* 10a12094 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a12097 mov dword ptr [0x10a3194c], eax */
  w32((uint32_t)(0x10a3194c), (EAX));
  /* 10a1209c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1209e push 0x10a120d0 */
  push32((uint32_t)(0x10a120d0u));
  /* 10a120a3 call dword ptr [0x10a342c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342c8))), 0x10a120a9u);
  /* 10a120a9 mov ecx, dword ptr [0x10a3195c] */
  ECX = (r32((uint32_t)(0x10a3195c)));
  /* 10a120af and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a120b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a120b4 jne 0x10a120c0 */
  if (!C.zf) goto L_10a120c0;
  /* 10a120b6 mov dword ptr [0x10a3195c], 0 */
  w32((uint32_t)(0x10a3195c), (0x0u));
L_10a120c0:;
  /* 10a120c0 mov esp, ebp */
  ESP = (EBP);
  /* 10a120c2 pop ebp */
  EBP = (pop32());
  /* 10a120c3 ret  */
  ESPCHK(0x10a12050u, _esp0);
  ESP += 4; return;
}

/* FUN_100120d0 @ 0x10a120d0 (287 bytes, 86 insns) */
void f_10a120d0(void) {
  FTRACE(0x10a120d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a120d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a120d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a120d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a120d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a120d9 push eax */
  push32((uint32_t)(EAX));
  /* 10a120da call 0x10a12680 */
  push32(0x10a120dfu); f_10a12680();
  /* 10a120df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a120e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10a120e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a120e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a120ea push ecx */
  push32((uint32_t)(ECX));
  /* 10a120eb mov edx, dword ptr [0x10a31950] */
  EDX = (r32((uint32_t)(0x10a31950)));
  /* 10a120f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a120f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a120f5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10a120fb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12101 push edx */
  push32((uint32_t)(EDX));
  /* 10a12102 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a12105 push eax */
  push32((uint32_t)(EAX));
  /* 10a12106 call dword ptr [0x10a31964] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31964))), 0x10a1210cu);
  /* 10a1210c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1210e jne 0x10a12124 */
  if (!C.zf) goto L_10a12124;
  /* 10a12110 mov dword ptr [0x10a3195c], 0 */
  w32((uint32_t)(0x10a3195c), (0x0u));
  /* 10a1211a mov eax, 1 */
  EAX = (0x1u);
  /* 10a1211f jmp 0x10a121e9 */
  goto L_10a121e9;
L_10a12124:;
  /* 10a12124 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a12127 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12128 mov edx, dword ptr [0x10a31954] */
  EDX = (r32((uint32_t)(0x10a31954)));
  /* 10a1212e push edx */
  push32((uint32_t)(EDX));
  /* 10a1212f call 0x10a142c0 */
  push32(0x10a12134u); f_10a142c0();
  /* 10a12134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a12139 jne 0x10a12179 */
  if (!C.zf) goto L_10a12179;
  /* 10a1213b cmp dword ptr [0x10a31950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12142 jne 0x10a12156 */
  if (!C.zf) goto L_10a12156;
  /* 10a12144 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a12146 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a12149 push eax */
  push32((uint32_t)(EAX));
  /* 10a1214a call 0x10a12410 */
  push32(0x10a1214fu); f_10a12410();
  /* 10a1214f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a12154 je 0x10a12177 */
  if (C.zf) goto L_10a12177;
L_10a12156:;
  /* 10a12156 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a12159 mov dword ptr [0x10a31960], ecx */
  w32((uint32_t)(0x10a31960), (ECX));
  /* 10a1215f mov edx, dword ptr [0x10a31960] */
  EDX = (r32((uint32_t)(0x10a31960)));
  /* 10a12165 mov dword ptr [0x10a31944], edx */
  w32((uint32_t)(0x10a31944), (EDX));
  /* 10a1216b mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a12170 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10a12172 mov dword ptr [0x10a3195c], eax */
  w32((uint32_t)(0x10a3195c), (EAX));
L_10a12177:;
  /* 10a12177 jmp 0x10a121dc */
  goto L_10a121dc;
L_10a12179:;
  /* 10a12179 cmp dword ptr [0x10a31950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12180 jne 0x10a121dc */
  if (!C.zf) goto L_10a121dc;
  /* 10a12182 cmp dword ptr [0x10a3194c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3194c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12189 je 0x10a121dc */
  if (C.zf) goto L_10a121dc;
  /* 10a1218b mov ecx, dword ptr [0x10a3194c] */
  ECX = (r32((uint32_t)(0x10a3194c)));
  /* 10a12191 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12192 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10a12195 push edx */
  push32((uint32_t)(EDX));
  /* 10a12196 mov eax, dword ptr [0x10a31954] */
  EAX = (r32((uint32_t)(0x10a31954)));
  /* 10a1219b push eax */
  push32((uint32_t)(EAX));
  /* 10a1219c call 0x10a14390 */
  push32(0x10a121a1u); f_10a14390();
  /* 10a121a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a121a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a121a6 jne 0x10a121dc */
  if (!C.zf) goto L_10a121dc;
  /* 10a121a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a121aa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a121ad push ecx */
  push32((uint32_t)(ECX));
  /* 10a121ae call 0x10a12410 */
  push32(0x10a121b3u); f_10a12410();
  /* 10a121b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a121b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a121b8 je 0x10a121dc */
  if (C.zf) goto L_10a121dc;
  /* 10a121ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a121bd mov dword ptr [0x10a31960], edx */
  w32((uint32_t)(0x10a31960), (EDX));
  /* 10a121c3 mov eax, dword ptr [0x10a31960] */
  EAX = (r32((uint32_t)(0x10a31960)));
  /* 10a121c8 mov dword ptr [0x10a31944], eax */
  w32((uint32_t)(0x10a31944), (EAX));
  /* 10a121cd mov ecx, dword ptr [0x10a3195c] */
  ECX = (r32((uint32_t)(0x10a3195c)));
  /* 10a121d3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a121d6 mov dword ptr [0x10a3195c], ecx */
  w32((uint32_t)(0x10a3195c), (ECX));
L_10a121dc:;
  /* 10a121dc mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a121e1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a121e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a121e6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a121e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10a121e9:;
  /* 10a121e9 mov esp, ebp */
  ESP = (EBP);
  /* 10a121eb pop ebp */
  EBP = (pop32());
  /* 10a121ec ret 4 */
  ESPCHK(0x10a120d0u, _esp0);
  ESP += 8; return;
}

/* FUN_100121f0 @ 0x10a121f0 (69 bytes, 20 insns) */
void f_10a121f0(void) {
  FTRACE(0x10a121f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a121f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a121f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a121f3 mov eax, dword ptr [0x10a31958] */
  EAX = (r32((uint32_t)(0x10a31958)));
  /* 10a121f8 push eax */
  push32((uint32_t)(EAX));
  /* 10a121f9 call 0x10a08a20 */
  push32(0x10a121feu); f_10a08a20();
  /* 10a121fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12201 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a12203 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12206 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a12209 mov dword ptr [0x10a31948], ecx */
  w32((uint32_t)(0x10a31948), (ECX));
  /* 10a1220f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a12211 push 0x10a12240 */
  push32((uint32_t)(0x10a12240u));
  /* 10a12216 call dword ptr [0x10a342c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342c8))), 0x10a1221cu);
  /* 10a1221c mov edx, dword ptr [0x10a3195c] */
  EDX = (r32((uint32_t)(0x10a3195c)));
  /* 10a12222 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a12225 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a12227 jne 0x10a12233 */
  if (!C.zf) goto L_10a12233;
  /* 10a12229 mov dword ptr [0x10a3195c], 0 */
  w32((uint32_t)(0x10a3195c), (0x0u));
L_10a12233:;
  /* 10a12233 pop ebp */
  EBP = (pop32());
  /* 10a12234 ret  */
  ESPCHK(0x10a121f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012240 @ 0x10a12240 (172 bytes, 54 insns) */
void f_10a12240(void) {
  FTRACE(0x10a12240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12240 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12241 mov ebp, esp */
  EBP = (ESP);
  /* 10a12243 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12249 push eax */
  push32((uint32_t)(EAX));
  /* 10a1224a call 0x10a12680 */
  push32(0x10a1224fu); f_10a12680();
  /* 10a1224f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12252 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10a12255 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a12257 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a1225a push ecx */
  push32((uint32_t)(ECX));
  /* 10a1225b mov edx, dword ptr [0x10a31948] */
  EDX = (r32((uint32_t)(0x10a31948)));
  /* 10a12261 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a12263 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12265 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10a1226b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12271 push edx */
  push32((uint32_t)(EDX));
  /* 10a12272 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a12275 push eax */
  push32((uint32_t)(EAX));
  /* 10a12276 call dword ptr [0x10a31964] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31964))), 0x10a1227cu);
  /* 10a1227c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1227e jne 0x10a12291 */
  if (!C.zf) goto L_10a12291;
  /* 10a12280 mov dword ptr [0x10a3195c], 0 */
  w32((uint32_t)(0x10a3195c), (0x0u));
  /* 10a1228a mov eax, 1 */
  EAX = (0x1u);
  /* 10a1228f jmp 0x10a122e6 */
  goto L_10a122e6;
L_10a12291:;
  /* 10a12291 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a12294 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12295 mov edx, dword ptr [0x10a31958] */
  EDX = (r32((uint32_t)(0x10a31958)));
  /* 10a1229b push edx */
  push32((uint32_t)(EDX));
  /* 10a1229c call 0x10a142c0 */
  push32(0x10a122a1u); f_10a142c0();
  /* 10a122a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a122a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a122a6 jne 0x10a122d9 */
  if (!C.zf) goto L_10a122d9;
  /* 10a122a8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a122ab push eax */
  push32((uint32_t)(EAX));
  /* 10a122ac call 0x10a123c0 */
  push32(0x10a122b1u); f_10a123c0();
  /* 10a122b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a122b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a122b6 je 0x10a122d9 */
  if (C.zf) goto L_10a122d9;
  /* 10a122b8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a122bb mov dword ptr [0x10a31960], ecx */
  w32((uint32_t)(0x10a31960), (ECX));
  /* 10a122c1 mov edx, dword ptr [0x10a31960] */
  EDX = (r32((uint32_t)(0x10a31960)));
  /* 10a122c7 mov dword ptr [0x10a31944], edx */
  w32((uint32_t)(0x10a31944), (EDX));
  /* 10a122cd mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a122d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10a122d4 mov dword ptr [0x10a3195c], eax */
  w32((uint32_t)(0x10a3195c), (EAX));
L_10a122d9:;
  /* 10a122d9 mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a122de and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a122e1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a122e3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a122e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10a122e6:;
  /* 10a122e6 mov esp, ebp */
  ESP = (EBP);
  /* 10a122e8 pop ebp */
  EBP = (pop32());
  /* 10a122e9 ret 4 */
  ESPCHK(0x10a12240u, _esp0);
  ESP += 8; return;
}

/* FUN_100122f0 @ 0x10a122f0 (43 bytes, 11 insns) */
void f_10a122f0(void) {
  FTRACE(0x10a122f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a122f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a122f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a122f3 mov eax, dword ptr [0x10a3195c] */
  EAX = (r32((uint32_t)(0x10a3195c)));
  /* 10a122f8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10a122fd mov dword ptr [0x10a3195c], eax */
  w32((uint32_t)(0x10a3195c), (EAX));
  /* 10a12302 call dword ptr [0x10a342c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342c4))), 0x10a12308u);
  /* 10a12308 mov dword ptr [0x10a31960], eax */
  w32((uint32_t)(0x10a31960), (EAX));
  /* 10a1230d mov ecx, dword ptr [0x10a31960] */
  ECX = (r32((uint32_t)(0x10a31960)));
  /* 10a12313 mov dword ptr [0x10a31944], ecx */
  w32((uint32_t)(0x10a31944), (ECX));
  /* 10a12319 pop ebp */
  EBP = (pop32());
  /* 10a1231a ret  */
  ESPCHK(0x10a122f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012320 @ 0x10a12320 (155 bytes, 57 insns) */
void f_10a12320(void) {
  FTRACE(0x10a12320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12320 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12321 mov ebp, esp */
  EBP = (ESP);
  /* 10a12323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12326 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1232a je 0x10a1234b */
  if (C.zf) goto L_10a1234b;
  /* 10a1232c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1232f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a12332 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a12334 je 0x10a1234b */
  if (C.zf) goto L_10a1234b;
  /* 10a12336 push 0x10a2d98c */
  push32((uint32_t)(0x10a2d98cu));
  /* 10a1233b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1233e push edx */
  push32((uint32_t)(EDX));
  /* 10a1233f call 0x10a11880 */
  push32(0x10a12344u); f_10a11880();
  /* 10a12344 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a12349 jne 0x10a12373 */
  if (!C.zf) goto L_10a12373;
L_10a1234b:;
  /* 10a1234b push 8 */
  push32((uint32_t)(0x8u));
  /* 10a1234d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a12350 push eax */
  push32((uint32_t)(EAX));
  /* 10a12351 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10a12356 mov ecx, dword ptr [0x10a31960] */
  ECX = (r32((uint32_t)(0x10a31960)));
  /* 10a1235c push ecx */
  push32((uint32_t)(ECX));
  /* 10a1235d call dword ptr [0x10a31964] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31964))), 0x10a12363u);
  /* 10a12363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a12365 jne 0x10a1236b */
  if (!C.zf) goto L_10a1236b;
  /* 10a12367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a12369 jmp 0x10a123b7 */
  goto L_10a123b7;
L_10a1236b:;
  /* 10a1236b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10a1236e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a12371 jmp 0x10a123ab */
  goto L_10a123ab;
L_10a12373:;
  /* 10a12373 push 0x10a2d988 */
  push32((uint32_t)(0x10a2d988u));
  /* 10a12378 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1237b push eax */
  push32((uint32_t)(EAX));
  /* 10a1237c call 0x10a11880 */
  push32(0x10a12381u); f_10a11880();
  /* 10a12381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12384 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a12386 jne 0x10a123ab */
  if (!C.zf) goto L_10a123ab;
  /* 10a12388 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a1238a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10a1238d push ecx */
  push32((uint32_t)(ECX));
  /* 10a1238e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a12390 mov edx, dword ptr [0x10a31960] */
  EDX = (r32((uint32_t)(0x10a31960)));
  /* 10a12396 push edx */
  push32((uint32_t)(EDX));
  /* 10a12397 call dword ptr [0x10a31964] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31964))), 0x10a1239du);
  /* 10a1239d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1239f jne 0x10a123a5 */
  if (!C.zf) goto L_10a123a5;
  /* 10a123a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a123a3 jmp 0x10a123b7 */
  goto L_10a123b7;
L_10a123a5:;
  /* 10a123a5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a123a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a123ab:;
  /* 10a123ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a123ae push ecx */
  push32((uint32_t)(ECX));
  /* 10a123af call 0x10a144a0 */
  push32(0x10a123b4u); f_10a144a0();
  /* 10a123b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a123b7:;
  /* 10a123b7 mov esp, ebp */
  ESP = (EBP);
  /* 10a123b9 pop ebp */
  EBP = (pop32());
  /* 10a123ba ret  */
  ESPCHK(0x10a12320u, _esp0);
  ESP += 4; return;
}

/* FUN_100123c0 @ 0x10a123c0 (79 bytes, 26 insns) */
void f_10a123c0(void) {
  FTRACE(0x10a123c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a123c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a123c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a123c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a123c6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10a123ca mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10a123ce mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a123d5 jmp 0x10a123e0 */
  goto L_10a123e0;
L_10a123d7:;
  /* 10a123d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a123da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a123dd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a123e0:;
  /* 10a123e0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a123e4 jae 0x10a12406 */
  if (!C.cf) goto L_10a12406;
  /* 10a123e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a123e9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a123ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a123f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a123f4 mov cx, word ptr [eax*2 + 0x10a309c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10a309c4)));
  /* 10a123fc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a123fe jne 0x10a12404 */
  if (!C.zf) goto L_10a12404;
  /* 10a12400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a12402 jmp 0x10a1240b */
  goto L_10a1240b;
L_10a12404:;
  /* 10a12404 jmp 0x10a123d7 */
  goto L_10a123d7;
L_10a12406:;
  /* 10a12406 mov eax, 1 */
  EAX = (0x1u);
L_10a1240b:;
  /* 10a1240b mov esp, ebp */
  ESP = (EBP);
  /* 10a1240d pop ebp */
  EBP = (pop32());
  /* 10a1240e ret  */
  ESPCHK(0x10a123c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012410 @ 0x10a12410 (135 bytes, 48 insns) */
void f_10a12410(void) {
  FTRACE(0x10a12410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12410 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12411 mov ebp, esp */
  EBP = (ESP);
  /* 10a12413 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12416 push esi */
  push32((uint32_t)(ESI));
  /* 10a12417 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1241a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a1241f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a12424 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a12429 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10a1242c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a12431 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a12434 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a12436 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10a12439 push ecx */
  push32((uint32_t)(ECX));
  /* 10a1243a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1243c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1243f push edx */
  push32((uint32_t)(EDX));
  /* 10a12440 call dword ptr [0x10a31964] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31964))), 0x10a12446u);
  /* 10a12446 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a12448 jne 0x10a1244e */
  if (!C.zf) goto L_10a1244e;
  /* 10a1244a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1244c jmp 0x10a12492 */
  goto L_10a12492;
L_10a1244e:;
  /* 10a1244e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10a12451 push eax */
  push32((uint32_t)(EAX));
  /* 10a12452 call 0x10a12680 */
  push32(0x10a12457u); f_10a12680();
  /* 10a12457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1245a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1245d je 0x10a1248d */
  if (C.zf) goto L_10a1248d;
  /* 10a1245f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12463 je 0x10a1248d */
  if (C.zf) goto L_10a1248d;
  /* 10a12465 mov ecx, dword ptr [0x10a31954] */
  ECX = (r32((uint32_t)(0x10a31954)));
  /* 10a1246b push ecx */
  push32((uint32_t)(ECX));
  /* 10a1246c call 0x10a12700 */
  push32(0x10a12471u); f_10a12700();
  /* 10a12471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12474 mov esi, eax */
  ESI = (EAX);
  /* 10a12476 mov edx, dword ptr [0x10a31954] */
  EDX = (r32((uint32_t)(0x10a31954)));
  /* 10a1247c push edx */
  push32((uint32_t)(EDX));
  /* 10a1247d call 0x10a08a20 */
  push32(0x10a12482u); f_10a08a20();
  /* 10a12482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12485 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12487 jne 0x10a1248d */
  if (!C.zf) goto L_10a1248d;
  /* 10a12489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1248b jmp 0x10a12492 */
  goto L_10a12492;
L_10a1248d:;
  /* 10a1248d mov eax, 1 */
  EAX = (0x1u);
L_10a12492:;
  /* 10a12492 pop esi */
  ESI = (pop32());
  /* 10a12493 mov esp, ebp */
  ESP = (EBP);
  /* 10a12495 pop ebp */
  EBP = (pop32());
  /* 10a12496 ret  */
  ESPCHK(0x10a12410u, _esp0);
  ESP += 4; return;
}

/* FUN_100124a0 @ 0x10a124a0 (77 bytes, 18 insns) */
void f_10a124a0(void) {
  FTRACE(0x10a124a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a124a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a124a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a124a3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a124a9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10a124b3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10a124b9 push eax */
  push32((uint32_t)(EAX));
  /* 10a124ba call dword ptr [0x10a342c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342c0))), 0x10a124c0u);
  /* 10a124c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a124c2 je 0x10a124d9 */
  if (C.zf) goto L_10a124d9;
  /* 10a124c4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a124cb jne 0x10a124d9 */
  if (!C.zf) goto L_10a124d9;
  /* 10a124cd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10a124d7 jmp 0x10a124e3 */
  goto L_10a124e3;
L_10a124d9:;
  /* 10a124d9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10a124e3:;
  /* 10a124e3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10a124e9 mov esp, ebp */
  ESP = (EBP);
  /* 10a124eb pop ebp */
  EBP = (pop32());
  /* 10a124ec ret  */
  ESPCHK(0x10a124a0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10a124f0 (388 bytes, 118 insns) */
void f_10a124f0(void) {
  FTRACE(0x10a124f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a124f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a124f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a124f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a124f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a124fd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10a12504 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a1250b:;
  /* 10a1250b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a1250e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12511 jg 0x10a12658 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a12658;
  /* 10a12517 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a1251a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1251d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a1251e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12520 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a12522 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a12525 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12528 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a1252b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1252e cmp edx, dword ptr [ecx + 0x10a30520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10a30520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12534 jne 0x10a1262e */
  if (!C.zf) goto L_10a1262e;
  /* 10a1253a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1253d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a12540 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12544 ja 0x10a12567 */
  if ((!C.cf&&!C.zf)) goto L_10a12567;
  /* 10a12546 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1254a je 0x10a125d9 */
  if (C.zf) goto L_10a125d9;
  /* 10a12550 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12554 je 0x10a12584 */
  if (C.zf) goto L_10a12584;
  /* 10a12556 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1255a je 0x10a125a6 */
  if (C.zf) goto L_10a125a6;
  /* 10a1255c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12560 je 0x10a125c8 */
  if (C.zf) goto L_10a125c8;
  /* 10a12562 jmp 0x10a125f8 */
  goto L_10a125f8;
L_10a12567:;
  /* 10a12567 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1256e je 0x10a12595 */
  if (C.zf) goto L_10a12595;
  /* 10a12570 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12577 je 0x10a125b7 */
  if (C.zf) goto L_10a125b7;
  /* 10a12579 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12580 je 0x10a125ea */
  if (C.zf) goto L_10a125ea;
  /* 10a12582 jmp 0x10a125f8 */
  goto L_10a125f8;
L_10a12584:;
  /* 10a12584 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12587 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a1258a add ecx, 0x10a30524 */
  { uint32_t _a=(ECX),_b=(0x10a30524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12590 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a12593 jmp 0x10a125f8 */
  goto L_10a125f8;
L_10a12595:;
  /* 10a12595 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12598 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a1259b mov eax, dword ptr [edx + 0x10a3052c] */
  EAX = (r32((uint32_t)(EDX + 0x10a3052c)));
  /* 10a125a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a125a4 jmp 0x10a125f8 */
  goto L_10a125f8;
L_10a125a6:;
  /* 10a125a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a125a9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a125ac add ecx, 0x10a30530 */
  { uint32_t _a=(ECX),_b=(0x10a30530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a125b2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a125b5 jmp 0x10a125f8 */
  goto L_10a125f8;
L_10a125b7:;
  /* 10a125b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a125ba imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a125bd mov eax, dword ptr [edx + 0x10a30534] */
  EAX = (r32((uint32_t)(EDX + 0x10a30534)));
  /* 10a125c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a125c6 jmp 0x10a125f8 */
  goto L_10a125f8;
L_10a125c8:;
  /* 10a125c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a125cb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a125ce add ecx, 0x10a30538 */
  { uint32_t _a=(ECX),_b=(0x10a30538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a125d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a125d7 jmp 0x10a125f8 */
  goto L_10a125f8;
L_10a125d9:;
  /* 10a125d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a125dc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a125df add edx, 0x10a3053c */
  { uint32_t _a=(EDX),_b=(0x10a3053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a125e5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a125e8 jmp 0x10a125f8 */
  goto L_10a125f8;
L_10a125ea:;
  /* 10a125ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a125ed imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a125f0 add eax, 0x10a30544 */
  { uint32_t _a=(EAX),_b=(0x10a30544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a125f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a125f8:;
  /* 10a125f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a125fc je 0x10a12604 */
  if (C.zf) goto L_10a12604;
  /* 10a125fe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12602 jge 0x10a12606 */
  if ((C.sf==C.of)) goto L_10a12606;
L_10a12604:;
  /* 10a12604 jmp 0x10a12658 */
  goto L_10a12658;
L_10a12606:;
  /* 10a12606 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a12609 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a1260c push ecx */
  push32((uint32_t)(ECX));
  /* 10a1260d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a12610 push edx */
  push32((uint32_t)(EDX));
  /* 10a12611 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a12614 push eax */
  push32((uint32_t)(EAX));
  /* 10a12615 call 0x10a09410 */
  push32(0x10a1261au); f_10a09410();
  /* 10a1261a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1261d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a12620 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12623 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10a12627 mov eax, 1 */
  EAX = (0x1u);
  /* 10a1262c jmp 0x10a1266e */
  goto L_10a1266e;
L_10a1262e:;
  /* 10a1262e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12631 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a12634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12637 cmp eax, dword ptr [edx + 0x10a30520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10a30520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1263d jae 0x10a1264a */
  if (!C.cf) goto L_10a1264a;
  /* 10a1263f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12642 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12645 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a12648 jmp 0x10a12653 */
  goto L_10a12653;
L_10a1264a:;
  /* 10a1264a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1264d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12650 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a12653:;
  /* 10a12653 jmp 0x10a1250b */
  goto L_10a1250b;
L_10a12658:;
  /* 10a12658 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1265b push eax */
  push32((uint32_t)(EAX));
  /* 10a1265c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1265f push ecx */
  push32((uint32_t)(ECX));
  /* 10a12660 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a12663 push edx */
  push32((uint32_t)(EDX));
  /* 10a12664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12667 push eax */
  push32((uint32_t)(EAX));
  /* 10a12668 call dword ptr [0x10a342cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342cc))), 0x10a1266eu);
L_10a1266e:;
  /* 10a1266e mov esp, ebp */
  ESP = (EBP);
  /* 10a12670 pop ebp */
  EBP = (pop32());
  /* 10a12671 ret 0x10 */
  ESPCHK(0x10a124f0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012680 @ 0x10a12680 (118 bytes, 42 insns) */
void f_10a12680(void) {
  FTRACE(0x10a12680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12680 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12681 mov ebp, esp */
  EBP = (ESP);
  /* 10a12683 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12686 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a1268d:;
  /* 10a1268d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12690 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a12692 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10a12695 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a12699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1269c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1269f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a126a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a126a4 je 0x10a126ef */
  if (C.zf) goto L_10a126ef;
  /* 10a126a6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a126aa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a126ad jl 0x10a126c2 */
  if ((C.sf!=C.of)) goto L_10a126c2;
  /* 10a126af movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a126b3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a126b6 jg 0x10a126c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a126c2;
  /* 10a126b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10a126bb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a126bd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10a126c0 jmp 0x10a126dc */
  goto L_10a126dc;
L_10a126c2:;
  /* 10a126c2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a126c6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a126c9 jl 0x10a126dc */
  if ((C.sf!=C.of)) goto L_10a126dc;
  /* 10a126cb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a126cf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a126d2 jg 0x10a126dc */
  if ((!C.zf&&C.sf==C.of)) goto L_10a126dc;
  /* 10a126d4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10a126d7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a126d9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10a126dc:;
  /* 10a126dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a126df shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a126e2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a126e6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10a126ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a126ed jmp 0x10a1268d */
  goto L_10a1268d;
L_10a126ef:;
  /* 10a126ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a126f2 mov esp, ebp */
  ESP = (EBP);
  /* 10a126f4 pop ebp */
  EBP = (pop32());
  /* 10a126f5 ret  */
  ESPCHK(0x10a12680u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10a12700 (101 bytes, 36 insns) */
void f_10a12700(void) {
  FTRACE(0x10a12700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12700 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12701 mov ebp, esp */
  EBP = (ESP);
  /* 10a12703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12706 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a1270d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12710 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a12712 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10a12715 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12718 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1271b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10a1271e:;
  /* 10a1271e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a12722 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12725 jl 0x10a12730 */
  if ((C.sf!=C.of)) goto L_10a12730;
  /* 10a12727 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a1272b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1272e jle 0x10a12742 */
  if ((C.zf||C.sf!=C.of)) goto L_10a12742;
L_10a12730:;
  /* 10a12730 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a12734 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12737 jl 0x10a1275e */
  if ((C.sf!=C.of)) goto L_10a1275e;
  /* 10a12739 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a1273d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12740 jg 0x10a1275e */
  if ((!C.zf&&C.sf==C.of)) goto L_10a1275e;
L_10a12742:;
  /* 10a12742 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a12745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12748 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a1274b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1274e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a12750 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10a12753 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12756 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12759 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a1275c jmp 0x10a1271e */
  goto L_10a1271e;
L_10a1275e:;
  /* 10a1275e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a12761 mov esp, ebp */
  ESP = (EBP);
  /* 10a12763 pop ebp */
  EBP = (pop32());
  /* 10a12764 ret  */
  ESPCHK(0x10a12700u, _esp0);
  ESP += 4; return;
}

/* FUN_10012770 @ 0x10a12770 (122 bytes, 39 insns) */
void f_10a12770(void) {
  FTRACE(0x10a12770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12770 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12771 mov ebp, esp */
  EBP = (ESP);
  /* 10a12773 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12777 cmp eax, dword ptr [0x10a331fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a331fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1277d jae 0x10a127a1 */
  if (!C.cf) goto L_10a127a1;
  /* 10a1277f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12782 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a12785 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12788 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a1278b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a1278e mov eax, dword ptr [ecx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a12795 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a1279a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a1279d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a1279f jne 0x10a127bc */
  if (!C.zf) goto L_10a127bc;
L_10a127a1:;
  /* 10a127a1 call 0x10a0dac0 */
  push32(0x10a127a6u); f_10a0dac0();
  /* 10a127a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a127ac call 0x10a0dad0 */
  push32(0x10a127b1u); f_10a0dad0();
  /* 10a127b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a127b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a127ba jmp 0x10a127e6 */
  goto L_10a127e6;
L_10a127bc:;
  /* 10a127bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a127bf push edx */
  push32((uint32_t)(EDX));
  /* 10a127c0 call 0x10a0f2e0 */
  push32(0x10a127c5u); f_10a0f2e0();
  /* 10a127c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a127c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a127cb push eax */
  push32((uint32_t)(EAX));
  /* 10a127cc call 0x10a127f0 */
  push32(0x10a127d1u); f_10a127f0();
  /* 10a127d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a127d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a127d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a127da push ecx */
  push32((uint32_t)(ECX));
  /* 10a127db call 0x10a0f370 */
  push32(0x10a127e0u); f_10a0f370();
  /* 10a127e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a127e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a127e6:;
  /* 10a127e6 mov esp, ebp */
  ESP = (EBP);
  /* 10a127e8 pop ebp */
  EBP = (pop32());
  /* 10a127e9 ret  */
  ESPCHK(0x10a12770u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10a127f0 (170 bytes, 59 insns) */
void f_10a127f0(void) {
  FTRACE(0x10a127f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a127f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a127f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a127f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a127f4 push esi */
  push32((uint32_t)(ESI));
  /* 10a127f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a127f8 push eax */
  push32((uint32_t)(EAX));
  /* 10a127f9 call 0x10a0f160 */
  push32(0x10a127feu); f_10a0f160();
  /* 10a127fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12801 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12804 je 0x10a12843 */
  if (C.zf) goto L_10a12843;
  /* 10a12806 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1280a je 0x10a12812 */
  if (C.zf) goto L_10a12812;
  /* 10a1280c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12810 jne 0x10a1282c */
  if (!C.zf) goto L_10a1282c;
L_10a12812:;
  /* 10a12812 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a12814 call 0x10a0f160 */
  push32(0x10a12819u); f_10a0f160();
  /* 10a12819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1281c mov esi, eax */
  ESI = (EAX);
  /* 10a1281e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a12820 call 0x10a0f160 */
  push32(0x10a12825u); f_10a0f160();
  /* 10a12825 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12828 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1282a je 0x10a12843 */
  if (C.zf) goto L_10a12843;
L_10a1282c:;
  /* 10a1282c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1282f push ecx */
  push32((uint32_t)(ECX));
  /* 10a12830 call 0x10a0f160 */
  push32(0x10a12835u); f_10a0f160();
  /* 10a12835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12838 push eax */
  push32((uint32_t)(EAX));
  /* 10a12839 call dword ptr [0x10a342bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342bc))), 0x10a1283fu);
  /* 10a1283f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a12841 je 0x10a1284c */
  if (C.zf) goto L_10a1284c;
L_10a12843:;
  /* 10a12843 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a1284a jmp 0x10a12855 */
  goto L_10a12855;
L_10a1284c:;
  /* 10a1284c call dword ptr [0x10a34388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34388))), 0x10a12852u);
  /* 10a12852 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a12855:;
  /* 10a12855 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12858 push edx */
  push32((uint32_t)(EDX));
  /* 10a12859 call 0x10a0f080 */
  push32(0x10a1285eu); f_10a0f080();
  /* 10a1285e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12861 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12864 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a12867 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1286a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a1286d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a12870 mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a12877 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10a1287c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12880 je 0x10a12893 */
  if (C.zf) goto L_10a12893;
  /* 10a12882 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a12885 push eax */
  push32((uint32_t)(EAX));
  /* 10a12886 call 0x10a0da20 */
  push32(0x10a1288bu); f_10a0da20();
  /* 10a1288b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1288e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a12891 jmp 0x10a12895 */
  goto L_10a12895;
L_10a12893:;
  /* 10a12893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a12895:;
  /* 10a12895 pop esi */
  ESI = (pop32());
  /* 10a12896 mov esp, ebp */
  ESP = (EBP);
  /* 10a12898 pop ebp */
  EBP = (pop32());
  /* 10a12899 ret  */
  ESPCHK(0x10a127f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100128a0 @ 0x10a128a0 (146 bytes, 52 insns) */
void f_10a128a0(void) {
  FTRACE(0x10a128a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a128a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a128a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a128a3 push ebx */
  push32((uint32_t)(EBX));
  /* 10a128a4 push esi */
  push32((uint32_t)(ESI));
  /* 10a128a5 push edi */
  push32((uint32_t)(EDI));
L_10a128a6:;
  /* 10a128a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a128aa jne 0x10a128ca */
  if (!C.zf) goto L_10a128ca;
  /* 10a128ac push 0x10a2d2c8 */
  push32((uint32_t)(0x10a2d2c8u));
  /* 10a128b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a128b3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a128b5 push 0x10a2d990 */
  push32((uint32_t)(0x10a2d990u));
  /* 10a128ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10a128bc call 0x10a04cb0 */
  push32(0x10a128c1u); f_10a04cb0();
  /* 10a128c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a128c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a128c7 jne 0x10a128ca */
  if (!C.zf) goto L_10a128ca;
  /* 10a128c9 int3  */
  x86_unimpl("int3 @ 0x10a128c9");
L_10a128ca:;
  /* 10a128ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a128cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a128ce jne 0x10a128a6 */
  if (!C.zf) goto L_10a128a6;
  /* 10a128d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a128d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a128d6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10a128dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a128de je 0x10a1292d */
  if (C.zf) goto L_10a1292d;
  /* 10a128e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a128e3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a128e6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a128e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a128eb je 0x10a1292d */
  if (C.zf) goto L_10a1292d;
  /* 10a128ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10a128ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a128f2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a128f5 push eax */
  push32((uint32_t)(EAX));
  /* 10a128f6 call 0x10a06680 */
  push32(0x10a128fbu); f_10a06680();
  /* 10a128fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a128fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12901 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a12904 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10a1290a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1290d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a12910 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12913 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10a12919 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1291c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10a12923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12926 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10a1292d:;
  /* 10a1292d pop edi */
  EDI = (pop32());
  /* 10a1292e pop esi */
  ESI = (pop32());
  /* 10a1292f pop ebx */
  EBX = (pop32());
  /* 10a12930 pop ebp */
  EBP = (pop32());
  /* 10a12931 ret  */
  ESPCHK(0x10a128a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012940 @ 0x10a12940 (289 bytes, 97 insns) */
void f_10a12940(void) {
  FTRACE(0x10a12940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12940 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12941 mov ebp, esp */
  EBP = (ESP);
  /* 10a12943 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12946 push esi */
  push32((uint32_t)(ESI));
  /* 10a12947 mov eax, dword ptr [0x10a30c98] */
  EAX = (r32((uint32_t)(0x10a30c98)));
  /* 10a1294c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a1294f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a12956 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a1295d jmp 0x10a12968 */
  goto L_10a12968;
L_10a1295f:;
  /* 10a1295f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12965 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a12968:;
  /* 10a12968 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1296c jae 0x10a129a1 */
  if (!C.cf) goto L_10a129a1;
  /* 10a1296e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12971 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12974 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a12977 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12978 call 0x10a08a20 */
  push32(0x10a1297du); f_10a08a20();
  /* 10a1297d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12980 mov esi, eax */
  ESI = (EAX);
  /* 10a12982 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12985 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12988 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10a1298c push ecx */
  push32((uint32_t)(ECX));
  /* 10a1298d call 0x10a08a20 */
  push32(0x10a12992u); f_10a08a20();
  /* 10a12992 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12995 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12998 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a1299c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a1299f jmp 0x10a1295f */
  goto L_10a1295f;
L_10a129a1:;
  /* 10a129a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a129a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a129a7 push eax */
  push32((uint32_t)(EAX));
  /* 10a129a8 call 0x10a05bd0 */
  push32(0x10a129adu); f_10a05bd0();
  /* 10a129ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a129b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a129b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a129b7 je 0x10a12a59 */
  if (C.zf) goto L_10a12a59;
  /* 10a129bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a129c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a129c3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a129ca jmp 0x10a129d5 */
  goto L_10a129d5;
L_10a129cc:;
  /* 10a129cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a129cf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a129d2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a129d5:;
  /* 10a129d5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a129d9 jae 0x10a12a4a */
  if (!C.cf) goto L_10a12a4a;
  /* 10a129db mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a129de mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10a129e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a129e4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a129e7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a129ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a129ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a129f0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a129f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a129f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a129f7 push edx */
  push32((uint32_t)(EDX));
  /* 10a129f8 call 0x10a08ba0 */
  push32(0x10a129fdu); f_10a08ba0();
  /* 10a129fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12a00 push eax */
  push32((uint32_t)(EAX));
  /* 10a12a01 call 0x10a08a20 */
  push32(0x10a12a06u); f_10a08a20();
  /* 10a12a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12a09 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12a0c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12a0e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a12a11 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12a14 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10a12a17 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12a1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12a1d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a12a20 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12a23 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12a26 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10a12a2a push eax */
  push32((uint32_t)(EAX));
  /* 10a12a2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12a2e push ecx */
  push32((uint32_t)(ECX));
  /* 10a12a2f call 0x10a08ba0 */
  push32(0x10a12a34u); f_10a08ba0();
  /* 10a12a34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12a37 push eax */
  push32((uint32_t)(EAX));
  /* 10a12a38 call 0x10a08a20 */
  push32(0x10a12a3du); f_10a08a20();
  /* 10a12a3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12a40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12a43 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12a45 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a12a48 jmp 0x10a129cc */
  goto L_10a129cc;
L_10a12a4a:;
  /* 10a12a4a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12a4d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a12a50 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12a53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12a56 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a12a59:;
  /* 10a12a59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a12a5c pop esi */
  ESI = (pop32());
  /* 10a12a5d mov esp, ebp */
  ESP = (EBP);
  /* 10a12a5f pop ebp */
  EBP = (pop32());
  /* 10a12a60 ret  */
  ESPCHK(0x10a12940u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a70 @ 0x10a12a70 (291 bytes, 97 insns) */
void f_10a12a70(void) {
  FTRACE(0x10a12a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12a71 mov ebp, esp */
  EBP = (ESP);
  /* 10a12a73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12a76 push esi */
  push32((uint32_t)(ESI));
  /* 10a12a77 mov eax, dword ptr [0x10a30c98] */
  EAX = (r32((uint32_t)(0x10a30c98)));
  /* 10a12a7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a12a7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a12a86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a12a8d jmp 0x10a12a98 */
  goto L_10a12a98;
L_10a12a8f:;
  /* 10a12a8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12a92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12a95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a12a98:;
  /* 10a12a98 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12a9c jae 0x10a12ad2 */
  if (!C.cf) goto L_10a12ad2;
  /* 10a12a9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12aa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12aa4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10a12aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12aa9 call 0x10a08a20 */
  push32(0x10a12aaeu); f_10a08a20();
  /* 10a12aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12ab1 mov esi, eax */
  ESI = (EAX);
  /* 10a12ab3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12ab6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12ab9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10a12abd push ecx */
  push32((uint32_t)(ECX));
  /* 10a12abe call 0x10a08a20 */
  push32(0x10a12ac3u); f_10a08a20();
  /* 10a12ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12ac6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12ac9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a12acd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a12ad0 jmp 0x10a12a8f */
  goto L_10a12a8f;
L_10a12ad2:;
  /* 10a12ad2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a12ad5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12ad8 push eax */
  push32((uint32_t)(EAX));
  /* 10a12ad9 call 0x10a05bd0 */
  push32(0x10a12adeu); f_10a05bd0();
  /* 10a12ade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12ae1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a12ae4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12ae8 je 0x10a12b8b */
  if (C.zf) goto L_10a12b8b;
  /* 10a12aee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a12af1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a12af4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a12afb jmp 0x10a12b06 */
  goto L_10a12b06;
L_10a12afd:;
  /* 10a12afd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12b00 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12b03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a12b06:;
  /* 10a12b06 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12b0a jae 0x10a12b7c */
  if (!C.cf) goto L_10a12b7c;
  /* 10a12b0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12b0f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10a12b12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12b15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12b18 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a12b1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12b1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12b21 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10a12b25 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12b26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12b29 push edx */
  push32((uint32_t)(EDX));
  /* 10a12b2a call 0x10a08ba0 */
  push32(0x10a12b2fu); f_10a08ba0();
  /* 10a12b2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12b32 push eax */
  push32((uint32_t)(EAX));
  /* 10a12b33 call 0x10a08a20 */
  push32(0x10a12b38u); f_10a08a20();
  /* 10a12b38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12b3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12b3e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12b40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a12b43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12b46 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10a12b49 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12b4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12b4f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a12b52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12b55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12b58 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a12b5c push eax */
  push32((uint32_t)(EAX));
  /* 10a12b5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12b60 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12b61 call 0x10a08ba0 */
  push32(0x10a12b66u); f_10a08ba0();
  /* 10a12b66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12b69 push eax */
  push32((uint32_t)(EAX));
  /* 10a12b6a call 0x10a08a20 */
  push32(0x10a12b6fu); f_10a08a20();
  /* 10a12b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12b72 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12b75 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12b77 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a12b7a jmp 0x10a12afd */
  goto L_10a12afd;
L_10a12b7c:;
  /* 10a12b7c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12b7f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a12b82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12b85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12b88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a12b8b:;
  /* 10a12b8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a12b8e pop esi */
  ESI = (pop32());
  /* 10a12b8f mov esp, ebp */
  ESP = (EBP);
  /* 10a12b91 pop ebp */
  EBP = (pop32());
  /* 10a12b92 ret  */
  ESPCHK(0x10a12a70u, _esp0);
  ESP += 4; return;
}

