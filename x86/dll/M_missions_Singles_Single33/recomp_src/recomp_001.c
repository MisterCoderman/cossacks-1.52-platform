#include "recomp.h"

/* FUN_1000bb40 @ 0x1152bb40 (10 bytes, 5 insns) */
void f_1152bb40(void) {
  FTRACE(0x1152bb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152bb40 push ebp */
  push32((uint32_t)(EBP));
  /* 1152bb41 mov ebp, esp */
  EBP = (ESP);
  /* 1152bb43 mov eax, dword ptr [0x11551c94] */
  EAX = (r32((uint32_t)(0x11551c94)));
  /* 1152bb48 pop ebp */
  EBP = (pop32());
  /* 1152bb49 ret  */
  ESPCHK(0x1152bb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb50 @ 0x1152bb50 (31 bytes, 11 insns) */
void f_1152bb50(void) {
  FTRACE(0x1152bb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152bb50 push ebp */
  push32((uint32_t)(EBP));
  /* 1152bb51 mov ebp, esp */
  EBP = (ESP);
  /* 1152bb53 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152bb5a jbe 0x1152bb60 */
  if ((C.cf||C.zf)) goto L_1152bb60;
  /* 1152bb5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152bb5e jmp 0x1152bb6d */
  goto L_1152bb6d;
L_1152bb60:;
  /* 1152bb60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bb63 mov dword ptr [0x11551c94], eax */
  w32((uint32_t)(0x11551c94), (EAX));
  /* 1152bb68 mov eax, 1 */
  EAX = (0x1u);
L_1152bb6d:;
  /* 1152bb6d pop ebp */
  EBP = (pop32());
  /* 1152bb6e ret  */
  ESPCHK(0x1152bb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb70 @ 0x1152bb70 (89 bytes, 20 insns) */
void f_1152bb70(void) {
  FTRACE(0x1152bb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152bb70 push ebp */
  push32((uint32_t)(EBP));
  /* 1152bb71 mov ebp, esp */
  EBP = (ESP);
  /* 1152bb73 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1152bb78 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152bb7a mov eax, dword ptr [0x1155520c] */
  EAX = (r32((uint32_t)(0x1155520c)));
  /* 1152bb7f push eax */
  push32((uint32_t)(EAX));
  /* 1152bb80 call dword ptr [0x11556358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556358))), 0x1152bb86u);
  /* 1152bb86 mov dword ptr [0x11555208], eax */
  w32((uint32_t)(0x11555208), (EAX));
  /* 1152bb8b cmp dword ptr [0x11555208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11555208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152bb92 jne 0x1152bb98 */
  if (!C.zf) goto L_1152bb98;
  /* 1152bb94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152bb96 jmp 0x1152bbc7 */
  goto L_1152bbc7;
L_1152bb98:;
  /* 1152bb98 mov ecx, dword ptr [0x11555208] */
  ECX = (r32((uint32_t)(0x11555208)));
  /* 1152bb9e mov dword ptr [0x115551fc], ecx */
  w32((uint32_t)(0x115551fc), (ECX));
  /* 1152bba4 mov dword ptr [0x11555200], 0 */
  w32((uint32_t)(0x11555200), (0x0u));
  /* 1152bbae mov dword ptr [0x11555204], 0 */
  w32((uint32_t)(0x11555204), (0x0u));
  /* 1152bbb8 mov dword ptr [0x115551e8], 0x10 */
  w32((uint32_t)(0x115551e8), (0x10u));
  /* 1152bbc2 mov eax, 1 */
  EAX = (0x1u);
L_1152bbc7:;
  /* 1152bbc7 pop ebp */
  EBP = (pop32());
  /* 1152bbc8 ret  */
  ESPCHK(0x1152bb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbd0 @ 0x1152bbd0 (85 bytes, 29 insns) */
void f_1152bbd0(void) {
  FTRACE(0x1152bbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152bbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152bbd1 mov ebp, esp */
  EBP = (ESP);
  /* 1152bbd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bbd6 mov eax, dword ptr [0x11555204] */
  EAX = (r32((uint32_t)(0x11555204)));
  /* 1152bbdb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152bbde mov ecx, dword ptr [0x11555208] */
  ECX = (r32((uint32_t)(0x11555208)));
  /* 1152bbe4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bbe6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1152bbe9 mov edx, dword ptr [0x11555208] */
  EDX = (r32((uint32_t)(0x11555208)));
  /* 1152bbef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1152bbf2:;
  /* 1152bbf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152bbf5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152bbf8 jae 0x1152bc1f */
  if (!C.cf) goto L_1152bc1f;
  /* 1152bbfa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152bbfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bc00 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bc03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152bc06 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152bc0d jae 0x1152bc14 */
  if (!C.cf) goto L_1152bc14;
  /* 1152bc0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152bc12 jmp 0x1152bc21 */
  goto L_1152bc21;
L_1152bc14:;
  /* 1152bc14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152bc17 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bc1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152bc1d jmp 0x1152bbf2 */
  goto L_1152bbf2;
L_1152bc1f:;
  /* 1152bc1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152bc21:;
  /* 1152bc21 mov esp, ebp */
  ESP = (EBP);
  /* 1152bc23 pop ebp */
  EBP = (pop32());
  /* 1152bc24 ret  */
  ESPCHK(0x1152bbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x1152bc30 (95 bytes, 33 insns) */
void f_1152bc30(void) {
  FTRACE(0x1152bc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152bc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1152bc31 mov ebp, esp */
  EBP = (ESP);
  /* 1152bc33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bc39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152bc3c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bc3f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1152bc42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152bc45 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1152bc48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152bc4b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152bc50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bc53 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152bc55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bc58 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1152bc5b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1152bc5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152bc5f jne 0x1152bc81 */
  if (!C.zf) goto L_1152bc81;
  /* 1152bc61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152bc64 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1152bc67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152bc69 jne 0x1152bc81 */
  if (!C.zf) goto L_1152bc81;
  /* 1152bc6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152bc6e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152bc74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152bc76 je 0x1152bc81 */
  if (C.zf) goto L_1152bc81;
  /* 1152bc78 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1152bc7f jmp 0x1152bc88 */
  goto L_1152bc88;
L_1152bc81:;
  /* 1152bc81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1152bc88:;
  /* 1152bc88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152bc8b mov esp, ebp */
  ESP = (EBP);
  /* 1152bc8d pop ebp */
  EBP = (pop32());
  /* 1152bc8e ret  */
  ESPCHK(0x1152bc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc90 @ 0x1152bc90 (1485 bytes, 453 insns) */
void f_1152bc90(void) {
  FTRACE(0x1152bc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152bc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1152bc91 mov ebp, esp */
  EBP = (ESP);
  /* 1152bc93 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bc96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bc99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152bc9c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1152bc9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bca2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152bca5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bca8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1152bcab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152bcae shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1152bcb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152bcb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bcb7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152bcbd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bcc0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1152bcc7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1152bcca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152bccd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bcd0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1152bcd3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152bcd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152bcd8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bcdb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1152bcde mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152bce1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bce4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1152bce7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152bcea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152bcec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1152bcef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152bcf2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1152bcf5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152bcf8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152bcfb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1152bcfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152bd00 jne 0x1152be28 */
  if (!C.zf) goto L_1152be28;
  /* 1152bd06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152bd09 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1152bd0c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bd0f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1152bd12 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152bd16 jbe 0x1152bd1f */
  if ((C.cf||C.zf)) goto L_1152bd1f;
  /* 1152bd18 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1152bd1f:;
  /* 1152bd1f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152bd22 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152bd25 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152bd28 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152bd2b jne 0x1152be01 */
  if (!C.zf) goto L_1152be01;
  /* 1152bd31 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152bd35 jae 0x1152bd96 */
  if (!C.cf) goto L_1152bd96;
  /* 1152bd37 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152bd3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152bd3f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152bd41 not eax */
  EAX = (~(EAX));
  /* 1152bd43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bd46 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bd49 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1152bd4d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1152bd4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bd52 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bd55 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1152bd59 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bd5c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bd5f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1152bd62 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152bd65 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bd68 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bd6b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1152bd6e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bd71 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bd74 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1152bd78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152bd7a jne 0x1152bd94 */
  if (!C.zf) goto L_1152bd94;
  /* 1152bd7c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152bd81 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152bd84 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152bd86 not eax */
  EAX = (~(EAX));
  /* 1152bd88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bd8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152bd8d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1152bd8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bd92 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1152bd94:;
  /* 1152bd94 jmp 0x1152be01 */
  goto L_1152be01;
L_1152bd96:;
  /* 1152bd96 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152bd99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bd9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152bda1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152bda3 not edx */
  EDX = (~(EDX));
  /* 1152bda5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bda8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bdab mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1152bdb2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152bdb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bdb7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bdba mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1152bdc1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bdc4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bdc7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1152bdca sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152bdcd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bdd0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bdd3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1152bdd6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bdd9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bddc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1152bde0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152bde2 jne 0x1152be01 */
  if (!C.zf) goto L_1152be01;
  /* 1152bde4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152bde7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bdea mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152bdef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152bdf1 not edx */
  EDX = (~(EDX));
  /* 1152bdf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bdf6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152bdf9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152bdfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bdfe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1152be01:;
  /* 1152be01 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152be04 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1152be07 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152be0a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152be0d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1152be10 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152be13 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152be16 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152be19 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1152be1c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1152be1f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152be22 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152be25 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1152be28:;
  /* 1152be28 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152be2b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1152be2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152be31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1152be34 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152be38 jbe 0x1152be41 */
  if ((C.cf||C.zf)) goto L_1152be41;
  /* 1152be3a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1152be41:;
  /* 1152be41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152be44 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1152be47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152be49 jne 0x1152bfa5 */
  if (!C.zf) goto L_1152bfa5;
  /* 1152be4f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152be52 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152be55 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1152be58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152be5b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1152be5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152be61 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1152be64 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152be68 jbe 0x1152be71 */
  if ((C.cf||C.zf)) goto L_1152be71;
  /* 1152be6a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1152be71:;
  /* 1152be71 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152be74 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152be77 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1152be7a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152be7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1152be80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152be83 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1152be86 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152be8a jbe 0x1152be93 */
  if ((C.cf||C.zf)) goto L_1152be93;
  /* 1152be8c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1152be93:;
  /* 1152be93 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152be96 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152be99 je 0x1152bf9f */
  if (C.zf) goto L_1152bf9f;
  /* 1152be9f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152bea2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152bea5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152bea8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152beab jne 0x1152bf81 */
  if (!C.zf) goto L_1152bf81;
  /* 1152beb1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152beb5 jae 0x1152bf16 */
  if (!C.cf) goto L_1152bf16;
  /* 1152beb7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152bebc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152bebf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152bec1 not edx */
  EDX = (~(EDX));
  /* 1152bec3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bec6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bec9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1152becd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152becf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bed2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bed5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1152bed9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bedc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bedf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1152bee2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152bee5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bee8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152beeb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1152beee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bef1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bef4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1152bef8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152befa jne 0x1152bf14 */
  if (!C.zf) goto L_1152bf14;
  /* 1152befc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152bf01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152bf04 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152bf06 not edx */
  EDX = (~(EDX));
  /* 1152bf08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bf0b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152bf0d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152bf0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bf12 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1152bf14:;
  /* 1152bf14 jmp 0x1152bf81 */
  goto L_1152bf81;
L_1152bf16:;
  /* 1152bf16 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152bf19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bf1c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152bf21 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152bf23 not eax */
  EAX = (~(EAX));
  /* 1152bf25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bf28 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bf2b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1152bf32 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1152bf34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bf37 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bf3a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1152bf41 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bf44 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bf47 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1152bf4a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152bf4d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bf50 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bf53 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1152bf56 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152bf59 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bf5c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1152bf60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152bf62 jne 0x1152bf81 */
  if (!C.zf) goto L_1152bf81;
  /* 1152bf64 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152bf67 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152bf6a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152bf6f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152bf71 not eax */
  EAX = (~(EAX));
  /* 1152bf73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bf76 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152bf79 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1152bf7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152bf7e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1152bf81:;
  /* 1152bf81 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152bf84 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1152bf87 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152bf8a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152bf8d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1152bf90 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152bf93 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152bf96 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152bf99 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1152bf9c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1152bf9f:;
  /* 1152bf9f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152bfa2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1152bfa5:;
  /* 1152bfa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152bfa8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1152bfab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152bfad jne 0x1152bfbb */
  if (!C.zf) goto L_1152bfbb;
  /* 1152bfaf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152bfb2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152bfb5 je 0x1152c0cb */
  if (C.zf) goto L_1152c0cb;
L_1152bfbb:;
  /* 1152bfbb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152bfbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152bfc1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1152bfc4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1152bfc7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152bfca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152bfcd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152bfd0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1152bfd3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152bfd6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152bfd9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1152bfdc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152bfdf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152bfe2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1152bfe5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152bfe8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152bfeb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152bfee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1152bff1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152bff4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152bff7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152bffa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152bffd jne 0x1152c0cb */
  if (!C.zf) goto L_1152c0cb;
  /* 1152c003 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c007 jae 0x1152c064 */
  if (!C.cf) goto L_1152c064;
  /* 1152c009 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152c00c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c00f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1152c013 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152c016 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c019 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1152c01c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1152c01f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152c022 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c025 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1152c028 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152c02a jne 0x1152c042 */
  if (!C.zf) goto L_1152c042;
  /* 1152c02c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152c031 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152c034 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152c036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c039 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152c03b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152c03d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c040 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1152c042:;
  /* 1152c042 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152c047 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152c04a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152c04c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c04f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152c052 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1152c056 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1152c058 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c05b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152c05e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1152c062 jmp 0x1152c0cb */
  goto L_1152c0cb;
L_1152c064:;
  /* 1152c064 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152c067 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c06a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1152c06e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152c071 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c074 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1152c077 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1152c07a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152c07d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c080 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1152c083 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152c085 jne 0x1152c0a2 */
  if (!C.zf) goto L_1152c0a2;
  /* 1152c087 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152c08a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c08d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152c092 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152c094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c097 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152c09a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152c09c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c09f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1152c0a2:;
  /* 1152c0a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152c0a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c0a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152c0ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152c0af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c0b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152c0b5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1152c0bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1152c0be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c0c1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1152c0c4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1152c0cb:;
  /* 1152c0cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152c0ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c0d1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1152c0d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152c0d6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c0d9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c0dc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1152c0df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152c0e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152c0e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c0e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152c0ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1152c0ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152c0ef cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c0f2 jne 0x1152c259 */
  if (!C.zf) goto L_1152c259;
  /* 1152c0f8 cmp dword ptr [0x11555200], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11555200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c0ff je 0x1152c248 */
  if (C.zf) goto L_1152c248;
  /* 1152c105 mov eax, dword ptr [0x115551f8] */
  EAX = (r32((uint32_t)(0x115551f8)));
  /* 1152c10a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1152c10d mov ecx, dword ptr [0x11555200] */
  ECX = (r32((uint32_t)(0x11555200)));
  /* 1152c113 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1152c116 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c118 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1152c11b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1152c120 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1152c125 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c128 push eax */
  push32((uint32_t)(EAX));
  /* 1152c129 call dword ptr [0x11556374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556374))), 0x1152c12fu);
  /* 1152c12f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152c134 mov ecx, dword ptr [0x115551f8] */
  ECX = (r32((uint32_t)(0x115551f8)));
  /* 1152c13a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152c13c mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152c141 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1152c144 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152c146 mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152c14c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1152c14f mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152c154 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152c157 mov edx, dword ptr [0x115551f8] */
  EDX = (r32((uint32_t)(0x115551f8)));
  /* 1152c15d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1152c168 mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152c16d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152c170 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1152c173 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152c176 mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152c17b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152c17e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1152c181 mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152c187 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1152c18a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1152c18e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152c190 jne 0x1152c1a6 */
  if (!C.zf) goto L_1152c1a6;
  /* 1152c192 mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152c198 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152c19b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1152c19d mov ecx, dword ptr [0x11555200] */
  ECX = (r32((uint32_t)(0x11555200)));
  /* 1152c1a3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1152c1a6:;
  /* 1152c1a6 mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152c1ac cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c1b0 jne 0x1152c248 */
  if (!C.zf) goto L_1152c248;
  /* 1152c1b6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1152c1bb push 0 */
  push32((uint32_t)(0x0u));
  /* 1152c1bd mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152c1c2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1152c1c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1152c1c6 call dword ptr [0x11556374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556374))), 0x1152c1ccu);
  /* 1152c1cc mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152c1d2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1152c1d5 push eax */
  push32((uint32_t)(EAX));
  /* 1152c1d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152c1d8 mov ecx, dword ptr [0x1155520c] */
  ECX = (r32((uint32_t)(0x1155520c)));
  /* 1152c1de push ecx */
  push32((uint32_t)(ECX));
  /* 1152c1df call dword ptr [0x11556378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556378))), 0x1152c1e5u);
  /* 1152c1e5 mov edx, dword ptr [0x11555204] */
  EDX = (r32((uint32_t)(0x11555204)));
  /* 1152c1eb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152c1ee mov eax, dword ptr [0x11555208] */
  EAX = (r32((uint32_t)(0x11555208)));
  /* 1152c1f3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c1f5 mov ecx, dword ptr [0x11555200] */
  ECX = (r32((uint32_t)(0x11555200)));
  /* 1152c1fb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c1fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c200 push eax */
  push32((uint32_t)(EAX));
  /* 1152c201 mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152c207 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c20a push edx */
  push32((uint32_t)(EDX));
  /* 1152c20b mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152c210 push eax */
  push32((uint32_t)(EAX));
  /* 1152c211 call 0x1152f7c0 */
  push32(0x1152c216u); f_1152f7c0();
  /* 1152c216 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c219 mov ecx, dword ptr [0x11555204] */
  ECX = (r32((uint32_t)(0x11555204)));
  /* 1152c21f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c222 mov dword ptr [0x11555204], ecx */
  w32((uint32_t)(0x11555204), (ECX));
  /* 1152c228 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c22b cmp edx, dword ptr [0x11555200] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11555200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c231 jbe 0x1152c23c */
  if ((C.cf||C.zf)) goto L_1152c23c;
  /* 1152c233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c236 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c239 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1152c23c:;
  /* 1152c23c mov ecx, dword ptr [0x11555208] */
  ECX = (r32((uint32_t)(0x11555208)));
  /* 1152c242 mov dword ptr [0x115551fc], ecx */
  w32((uint32_t)(0x115551fc), (ECX));
L_1152c248:;
  /* 1152c248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c24b mov dword ptr [0x11555200], edx */
  w32((uint32_t)(0x11555200), (EDX));
  /* 1152c251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c254 mov dword ptr [0x115551f8], eax */
  w32((uint32_t)(0x115551f8), (EAX));
L_1152c259:;
  /* 1152c259 mov esp, ebp */
  ESP = (EBP);
  /* 1152c25b pop ebp */
  EBP = (pop32());
  /* 1152c25c ret  */
  ESPCHK(0x1152bc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x1152c260 (1334 bytes, 427 insns) */
void f_1152c260(void) {
  FTRACE(0x1152c260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152c260 push ebp */
  push32((uint32_t)(EBP));
  /* 1152c261 mov ebp, esp */
  EBP = (ESP);
  /* 1152c263 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c266 push esi */
  push32((uint32_t)(ESI));
  /* 1152c267 mov eax, dword ptr [0x11555204] */
  EAX = (r32((uint32_t)(0x11555204)));
  /* 1152c26c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152c26f mov ecx, dword ptr [0x11555208] */
  ECX = (r32((uint32_t)(0x11555208)));
  /* 1152c275 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c277 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1152c27a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c27d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c280 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1152c283 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1152c286 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152c289 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1152c28c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c28f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1152c292 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c296 jge 0x1152c2ac */
  if ((C.sf==C.of)) goto L_1152c2ac;
  /* 1152c298 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1152c29b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152c29e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152c2a0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1152c2a3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1152c2aa jmp 0x1152c2c1 */
  goto L_1152c2c1;
L_1152c2ac:;
  /* 1152c2ac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1152c2b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152c2b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c2b9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152c2bc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152c2be mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1152c2c1:;
  /* 1152c2c1 mov ecx, dword ptr [0x115551fc] */
  ECX = (r32((uint32_t)(0x115551fc)));
  /* 1152c2c7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1152c2ca:;
  /* 1152c2ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c2cd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c2d0 jae 0x1152c2f6 */
  if (!C.cf) goto L_1152c2f6;
  /* 1152c2d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c2d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152c2d8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1152c2da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c2dd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152c2e0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1152c2e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1152c2e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152c2e7 je 0x1152c2eb */
  if (C.zf) goto L_1152c2eb;
  /* 1152c2e9 jmp 0x1152c2f6 */
  goto L_1152c2f6;
L_1152c2eb:;
  /* 1152c2eb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c2ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c2f1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1152c2f4 jmp 0x1152c2ca */
  goto L_1152c2ca;
L_1152c2f6:;
  /* 1152c2f6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c2f9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c2fc jne 0x1152c3dd */
  if (!C.zf) goto L_1152c3dd;
  /* 1152c302 mov eax, dword ptr [0x11555208] */
  EAX = (r32((uint32_t)(0x11555208)));
  /* 1152c307 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1152c30a:;
  /* 1152c30a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c30d cmp ecx, dword ptr [0x115551fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115551fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c313 jae 0x1152c339 */
  if (!C.cf) goto L_1152c339;
  /* 1152c315 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c318 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152c31b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1152c31d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c320 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152c323 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1152c326 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152c328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152c32a je 0x1152c32e */
  if (C.zf) goto L_1152c32e;
  /* 1152c32c jmp 0x1152c339 */
  goto L_1152c339;
L_1152c32e:;
  /* 1152c32e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c331 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c334 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1152c337 jmp 0x1152c30a */
  goto L_1152c30a;
L_1152c339:;
  /* 1152c339 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c33c cmp ecx, dword ptr [0x115551fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115551fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c342 jne 0x1152c3dd */
  if (!C.zf) goto L_1152c3dd;
L_1152c348:;
  /* 1152c348 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c34b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c34e jae 0x1152c366 */
  if (!C.cf) goto L_1152c366;
  /* 1152c350 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c353 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c357 je 0x1152c35b */
  if (C.zf) goto L_1152c35b;
  /* 1152c359 jmp 0x1152c366 */
  goto L_1152c366;
L_1152c35b:;
  /* 1152c35b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c35e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c361 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1152c364 jmp 0x1152c348 */
  goto L_1152c348;
L_1152c366:;
  /* 1152c366 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c369 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c36c jne 0x1152c3b7 */
  if (!C.zf) goto L_1152c3b7;
  /* 1152c36e mov eax, dword ptr [0x11555208] */
  EAX = (r32((uint32_t)(0x11555208)));
  /* 1152c373 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1152c376:;
  /* 1152c376 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c379 cmp ecx, dword ptr [0x115551fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115551fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c37f jae 0x1152c397 */
  if (!C.cf) goto L_1152c397;
  /* 1152c381 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c384 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c388 je 0x1152c38c */
  if (C.zf) goto L_1152c38c;
  /* 1152c38a jmp 0x1152c397 */
  goto L_1152c397;
L_1152c38c:;
  /* 1152c38c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c38f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c392 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1152c395 jmp 0x1152c376 */
  goto L_1152c376;
L_1152c397:;
  /* 1152c397 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c39a cmp ecx, dword ptr [0x115551fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115551fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c3a0 jne 0x1152c3b7 */
  if (!C.zf) goto L_1152c3b7;
  /* 1152c3a2 call 0x1152c7a0 */
  push32(0x1152c3a7u); f_1152c7a0();
  /* 1152c3a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1152c3aa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c3ae jne 0x1152c3b7 */
  if (!C.zf) goto L_1152c3b7;
  /* 1152c3b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152c3b2 jmp 0x1152c791 */
  goto L_1152c791;
L_1152c3b7:;
  /* 1152c3b7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c3ba push edx */
  push32((uint32_t)(EDX));
  /* 1152c3bb call 0x1152c8b0 */
  push32(0x1152c3c0u); f_1152c8b0();
  /* 1152c3c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c3c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c3c6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1152c3c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1152c3cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c3ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152c3d1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c3d4 jne 0x1152c3dd */
  if (!C.zf) goto L_1152c3dd;
  /* 1152c3d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152c3d8 jmp 0x1152c791 */
  goto L_1152c791;
L_1152c3dd:;
  /* 1152c3dd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c3e0 mov dword ptr [0x115551fc], edx */
  w32((uint32_t)(0x115551fc), (EDX));
  /* 1152c3e6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c3e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152c3ec mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1152c3ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c3f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152c3f4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1152c3f7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c3fb je 0x1152c420 */
  if (C.zf) goto L_1152c420;
  /* 1152c3fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c400 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c403 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152c406 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1152c40a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c40d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c410 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1152c413 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1152c41a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1152c41c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152c41e jne 0x1152c455 */
  if (!C.zf) goto L_1152c455;
L_1152c420:;
  /* 1152c420 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1152c427:;
  /* 1152c427 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c42a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c42d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152c430 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1152c434 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c437 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c43a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1152c43d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1152c444 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1152c446 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152c448 jne 0x1152c455 */
  if (!C.zf) goto L_1152c455;
  /* 1152c44a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c44d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c450 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1152c453 jmp 0x1152c427 */
  goto L_1152c427;
L_1152c455:;
  /* 1152c455 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c458 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152c45e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c461 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1152c468 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152c46b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1152c472 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c475 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c478 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152c47b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1152c47f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1152c482 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c486 jne 0x1152c4a2 */
  if (!C.zf) goto L_1152c4a2;
  /* 1152c488 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1152c48f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c492 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c495 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152c498 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1152c49f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1152c4a2:;
  /* 1152c4a2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c4a6 jl 0x1152c4bb */
  if ((C.sf!=C.of)) goto L_1152c4bb;
  /* 1152c4a8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152c4ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1152c4ad mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1152c4b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152c4b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c4b6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1152c4b9 jmp 0x1152c4a2 */
  goto L_1152c4a2;
L_1152c4bb:;
  /* 1152c4bb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152c4be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c4c1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1152c4c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1152c4c8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c4cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152c4cd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c4d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152c4d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152c4d6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1152c4d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c4dc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1152c4df cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c4e3 jle 0x1152c4ec */
  if ((C.zf||C.sf!=C.of)) goto L_1152c4ec;
  /* 1152c4e5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1152c4ec:;
  /* 1152c4ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152c4ef cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c4f2 je 0x1152c710 */
  if (C.zf) goto L_1152c710;
  /* 1152c4f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c4fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c4fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152c501 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c504 jne 0x1152c5da */
  if (!C.zf) goto L_1152c5da;
  /* 1152c50a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c50e jge 0x1152c56f */
  if ((C.sf==C.of)) goto L_1152c56f;
  /* 1152c510 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152c515 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152c518 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152c51a not eax */
  EAX = (~(EAX));
  /* 1152c51c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c51f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c522 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1152c526 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1152c528 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c52b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c52e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1152c532 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c535 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c538 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1152c53b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152c53e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c541 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c544 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1152c547 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c54a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c54d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1152c551 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152c553 jne 0x1152c56d */
  if (!C.zf) goto L_1152c56d;
  /* 1152c555 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152c55a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152c55d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152c55f not eax */
  EAX = (~(EAX));
  /* 1152c561 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c564 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152c566 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1152c568 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c56b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1152c56d:;
  /* 1152c56d jmp 0x1152c5da */
  goto L_1152c5da;
L_1152c56f:;
  /* 1152c56f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152c572 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c575 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152c57a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152c57c not edx */
  EDX = (~(EDX));
  /* 1152c57e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c581 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c584 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1152c58b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152c58d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c590 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c593 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1152c59a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c59d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c5a0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1152c5a3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152c5a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c5a9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c5ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1152c5af mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c5b2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c5b5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1152c5b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152c5bb jne 0x1152c5da */
  if (!C.zf) goto L_1152c5da;
  /* 1152c5bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152c5c0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c5c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152c5c8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152c5ca not edx */
  EDX = (~(EDX));
  /* 1152c5cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c5cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152c5d2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152c5d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c5d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1152c5da:;
  /* 1152c5da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c5dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1152c5e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c5e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152c5e6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1152c5e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c5ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152c5ef mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c5f2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1152c5f5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1152c5f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c5fc je 0x1152c710 */
  if (C.zf) goto L_1152c710;
  /* 1152c602 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152c605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c608 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1152c60b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1152c60e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c611 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152c614 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152c617 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1152c61a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c61d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152c620 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1152c623 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152c626 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c629 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1152c62c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c62f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152c632 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c635 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1152c638 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c63b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c63e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152c641 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c644 jne 0x1152c710 */
  if (!C.zf) goto L_1152c710;
  /* 1152c64a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c64e jge 0x1152c6aa */
  if ((C.sf==C.of)) goto L_1152c6aa;
  /* 1152c650 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c653 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c656 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1152c65a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c65d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c660 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1152c663 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1152c665 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c668 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c66b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1152c66e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152c670 jne 0x1152c688 */
  if (!C.zf) goto L_1152c688;
  /* 1152c672 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152c677 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152c67a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152c67c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c67f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152c681 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1152c683 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c686 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1152c688:;
  /* 1152c688 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152c68d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152c690 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152c692 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c695 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c698 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1152c69c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152c69e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c6a1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c6a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1152c6a8 jmp 0x1152c710 */
  goto L_1152c710;
L_1152c6aa:;
  /* 1152c6aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c6ad add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c6b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1152c6b4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c6b7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c6ba mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1152c6bd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1152c6bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c6c2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c6c5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1152c6c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152c6ca jne 0x1152c6e7 */
  if (!C.zf) goto L_1152c6e7;
  /* 1152c6cc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152c6cf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c6d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152c6d7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152c6d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c6dc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152c6df or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1152c6e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c6e4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1152c6e7:;
  /* 1152c6e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152c6ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c6ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152c6f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152c6f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c6f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c6fa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1152c701 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152c703 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c706 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c709 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1152c710:;
  /* 1152c710 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c714 je 0x1152c72a */
  if (C.zf) goto L_1152c72a;
  /* 1152c716 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c719 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152c71c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1152c71e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c721 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c724 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152c727 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1152c72a:;
  /* 1152c72a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c72d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c730 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1152c733 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152c736 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c739 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c73c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1152c73e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152c741 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c744 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c747 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c74a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1152c74d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c750 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152c752 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c755 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152c757 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c75a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c75d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1152c75f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152c761 jne 0x1152c783 */
  if (!C.zf) goto L_1152c783;
  /* 1152c763 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c766 cmp eax, dword ptr [0x11555200] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11555200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c76c jne 0x1152c783 */
  if (!C.zf) goto L_1152c783;
  /* 1152c76e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c771 cmp ecx, dword ptr [0x115551f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115551f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c777 jne 0x1152c783 */
  if (!C.zf) goto L_1152c783;
  /* 1152c779 mov dword ptr [0x11555200], 0 */
  w32((uint32_t)(0x11555200), (0x0u));
L_1152c783:;
  /* 1152c783 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1152c786 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152c789 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1152c78b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c78e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1152c791:;
  /* 1152c791 pop esi */
  ESI = (pop32());
  /* 1152c792 mov esp, ebp */
  ESP = (EBP);
  /* 1152c794 pop ebp */
  EBP = (pop32());
  /* 1152c795 ret  */
  ESPCHK(0x1152c260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7a0 @ 0x1152c7a0 (271 bytes, 78 insns) */
void f_1152c7a0(void) {
  FTRACE(0x1152c7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152c7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152c7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1152c7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1152c7a4 mov eax, dword ptr [0x11555204] */
  EAX = (r32((uint32_t)(0x11555204)));
  /* 1152c7a9 cmp eax, dword ptr [0x115551e8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115551e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c7af jne 0x1152c7fb */
  if (!C.zf) goto L_1152c7fb;
  /* 1152c7b1 mov ecx, dword ptr [0x115551e8] */
  ECX = (r32((uint32_t)(0x115551e8)));
  /* 1152c7b7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c7ba imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152c7bd push ecx */
  push32((uint32_t)(ECX));
  /* 1152c7be mov edx, dword ptr [0x11555208] */
  EDX = (r32((uint32_t)(0x11555208)));
  /* 1152c7c4 push edx */
  push32((uint32_t)(EDX));
  /* 1152c7c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152c7c7 mov eax, dword ptr [0x1155520c] */
  EAX = (r32((uint32_t)(0x1155520c)));
  /* 1152c7cc push eax */
  push32((uint32_t)(EAX));
  /* 1152c7cd call dword ptr [0x11556354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556354))), 0x1152c7d3u);
  /* 1152c7d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152c7d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c7da jne 0x1152c7e3 */
  if (!C.zf) goto L_1152c7e3;
  /* 1152c7dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152c7de jmp 0x1152c8ab */
  goto L_1152c8ab;
L_1152c7e3:;
  /* 1152c7e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c7e6 mov dword ptr [0x11555208], ecx */
  w32((uint32_t)(0x11555208), (ECX));
  /* 1152c7ec mov edx, dword ptr [0x115551e8] */
  EDX = (r32((uint32_t)(0x115551e8)));
  /* 1152c7f2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c7f5 mov dword ptr [0x115551e8], edx */
  w32((uint32_t)(0x115551e8), (EDX));
L_1152c7fb:;
  /* 1152c7fb mov eax, dword ptr [0x11555204] */
  EAX = (r32((uint32_t)(0x11555204)));
  /* 1152c800 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152c803 mov ecx, dword ptr [0x11555208] */
  ECX = (r32((uint32_t)(0x11555208)));
  /* 1152c809 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c80b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152c80e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1152c813 push 8 */
  push32((uint32_t)(0x8u));
  /* 1152c815 mov edx, dword ptr [0x1155520c] */
  EDX = (r32((uint32_t)(0x1155520c)));
  /* 1152c81b push edx */
  push32((uint32_t)(EDX));
  /* 1152c81c call dword ptr [0x11556358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556358))), 0x1152c822u);
  /* 1152c822 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c825 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1152c828 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c82b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c82f jne 0x1152c835 */
  if (!C.zf) goto L_1152c835;
  /* 1152c831 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152c833 jmp 0x1152c8ab */
  goto L_1152c8ab;
L_1152c835:;
  /* 1152c835 push 4 */
  push32((uint32_t)(0x4u));
  /* 1152c837 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1152c83c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1152c841 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152c843 call dword ptr [0x11556350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556350))), 0x1152c849u);
  /* 1152c849 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c84c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1152c84f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c852 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c856 jne 0x1152c872 */
  if (!C.zf) goto L_1152c872;
  /* 1152c858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c85b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152c85e push ecx */
  push32((uint32_t)(ECX));
  /* 1152c85f push 0 */
  push32((uint32_t)(0x0u));
  /* 1152c861 mov edx, dword ptr [0x1155520c] */
  EDX = (r32((uint32_t)(0x1155520c)));
  /* 1152c867 push edx */
  push32((uint32_t)(EDX));
  /* 1152c868 call dword ptr [0x11556378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556378))), 0x1152c86eu);
  /* 1152c86e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152c870 jmp 0x1152c8ab */
  goto L_1152c8ab;
L_1152c872:;
  /* 1152c872 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c875 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1152c87b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c87e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1152c885 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c888 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1152c88f mov eax, dword ptr [0x11555204] */
  EAX = (r32((uint32_t)(0x11555204)));
  /* 1152c894 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c897 mov dword ptr [0x11555204], eax */
  w32((uint32_t)(0x11555204), (EAX));
  /* 1152c89c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c89f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1152c8a2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1152c8a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1152c8ab:;
  /* 1152c8ab mov esp, ebp */
  ESP = (EBP);
  /* 1152c8ad pop ebp */
  EBP = (pop32());
  /* 1152c8ae ret  */
  ESPCHK(0x1152c7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8b0 @ 0x1152c8b0 (494 bytes, 149 insns) */
void f_1152c8b0(void) {
  FTRACE(0x1152c8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152c8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152c8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1152c8b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c8b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c8b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152c8bc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1152c8bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c8c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1152c8c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152c8c8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1152c8cf:;
  /* 1152c8cf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c8d3 jl 0x1152c8e8 */
  if ((C.sf!=C.of)) goto L_1152c8e8;
  /* 1152c8d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152c8d8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1152c8da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1152c8dd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152c8e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c8e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1152c8e6 jmp 0x1152c8cf */
  goto L_1152c8cf;
L_1152c8e8:;
  /* 1152c8e8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152c8eb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152c8f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152c8f4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1152c8fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1152c8fe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1152c905 jmp 0x1152c910 */
  goto L_1152c910;
L_1152c907:;
  /* 1152c907 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152c90a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c90d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1152c910:;
  /* 1152c910 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c914 jge 0x1152c936 */
  if ((C.sf==C.of)) goto L_1152c936;
  /* 1152c916 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152c919 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152c91c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1152c91f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1152c922 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c925 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c928 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1152c92b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c92e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c931 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1152c934 jmp 0x1152c907 */
  goto L_1152c907;
L_1152c936:;
  /* 1152c936 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152c939 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1152c93c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152c93f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1152c942 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c944 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1152c947 push 4 */
  push32((uint32_t)(0x4u));
  /* 1152c949 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1152c94e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1152c953 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c956 push edx */
  push32((uint32_t)(EDX));
  /* 1152c957 call dword ptr [0x11556350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556350))), 0x1152c95du);
  /* 1152c95d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152c95f jne 0x1152c969 */
  if (!C.zf) goto L_1152c969;
  /* 1152c961 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152c964 jmp 0x1152ca9a */
  goto L_1152ca9a;
L_1152c969:;
  /* 1152c969 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c96c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c971 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1152c974 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c977 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152c97a jmp 0x1152c988 */
  goto L_1152c988;
L_1152c97c:;
  /* 1152c97c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c97f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c985 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1152c988:;
  /* 1152c988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c98b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152c98e ja 0x1152c9ed */
  if ((!C.cf&&!C.zf)) goto L_1152c9ed;
  /* 1152c990 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c993 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1152c99a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c99d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1152c9a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152c9aa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c9ad mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1152c9b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c9b3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1152c9b9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c9bc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c9c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c9c5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1152c9c8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c9cb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152c9d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c9d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1152c9d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152c9da add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c9df mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1152c9e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152c9e5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1152c9eb jmp 0x1152c97c */
  goto L_1152c97c;
L_1152c9ed:;
  /* 1152c9ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152c9f0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c9f6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1152c9f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152c9fc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152c9ff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152ca02 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1152ca05 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152ca08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152ca0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1152ca0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152ca11 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152ca14 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1152ca17 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152ca1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ca1d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152ca20 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1152ca23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152ca26 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1152ca29 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1152ca2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152ca2f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152ca32 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1152ca35 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152ca38 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ca3b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1152ca43 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152ca46 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ca49 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1152ca54 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ca57 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1152ca5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ca5e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1152ca61 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1152ca64 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ca67 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1152ca6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152ca6c jne 0x1152ca7d */
  if (!C.zf) goto L_1152ca7d;
  /* 1152ca6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ca71 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152ca74 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1152ca77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ca7a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1152ca7d:;
  /* 1152ca7d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152ca82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152ca85 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152ca87 not edx */
  EDX = (~(EDX));
  /* 1152ca89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ca8c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1152ca8f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152ca91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ca94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1152ca97 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1152ca9a:;
  /* 1152ca9a mov esp, ebp */
  ESP = (EBP);
  /* 1152ca9c pop ebp */
  EBP = (pop32());
  /* 1152ca9d ret  */
  ESPCHK(0x1152c8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caa0 @ 0x1152caa0 (1515 bytes, 489 insns) */
void f_1152caa0(void) {
  FTRACE(0x1152caa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152caa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152caa1 mov ebp, esp */
  EBP = (ESP);
  /* 1152caa3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152caa6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152caa9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152caac and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1152caae mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1152cab1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cab4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1152cab7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1152caba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cabd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152cac0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cac3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1152cac6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152cac9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1152cacc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152cacf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cad2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152cad8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cadb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1152cae2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1152cae5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152cae8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152caeb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1152caee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152caf1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152caf3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152caf6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1152caf9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cafc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152caff mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1152cb02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cb05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152cb07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1152cb0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152cb0d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cb10 jle 0x1152cdc6 */
  if ((C.zf||C.sf!=C.of)) goto L_1152cdc6;
  /* 1152cb16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152cb19 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1152cb1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152cb1e jne 0x1152cb2b */
  if (!C.zf) goto L_1152cb2b;
  /* 1152cb20 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152cb23 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cb26 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cb29 jle 0x1152cb32 */
  if ((C.zf||C.sf!=C.of)) goto L_1152cb32;
L_1152cb2b:;
  /* 1152cb2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152cb2d jmp 0x1152d087 */
  goto L_1152d087;
L_1152cb32:;
  /* 1152cb32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152cb35 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1152cb38 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cb3b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1152cb3e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cb42 jbe 0x1152cb4b */
  if ((C.cf||C.zf)) goto L_1152cb4b;
  /* 1152cb44 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1152cb4b:;
  /* 1152cb4b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cb4e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cb51 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152cb54 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cb57 jne 0x1152cc2d */
  if (!C.zf) goto L_1152cc2d;
  /* 1152cb5d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cb61 jae 0x1152cbc2 */
  if (!C.cf) goto L_1152cbc2;
  /* 1152cb63 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152cb68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152cb6b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152cb6d not edx */
  EDX = (~(EDX));
  /* 1152cb6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cb72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cb75 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1152cb79 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152cb7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cb7e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cb81 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1152cb85 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cb88 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cb8b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1152cb8e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152cb91 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cb94 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cb97 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1152cb9a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cb9d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cba0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1152cba4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152cba6 jne 0x1152cbc0 */
  if (!C.zf) goto L_1152cbc0;
  /* 1152cba8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152cbad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152cbb0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152cbb2 not edx */
  EDX = (~(EDX));
  /* 1152cbb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cbb7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152cbb9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152cbbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cbbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1152cbc0:;
  /* 1152cbc0 jmp 0x1152cc2d */
  goto L_1152cc2d;
L_1152cbc2:;
  /* 1152cbc2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152cbc5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cbc8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152cbcd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152cbcf not eax */
  EAX = (~(EAX));
  /* 1152cbd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cbd4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cbd7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1152cbde and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1152cbe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cbe3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cbe6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1152cbed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cbf0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cbf3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1152cbf6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152cbf9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cbfc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cbff mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1152cc02 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cc05 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cc08 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1152cc0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152cc0e jne 0x1152cc2d */
  if (!C.zf) goto L_1152cc2d;
  /* 1152cc10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152cc13 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cc16 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152cc1b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152cc1d not eax */
  EAX = (~(EAX));
  /* 1152cc1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cc22 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152cc25 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1152cc27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cc2a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1152cc2d:;
  /* 1152cc2d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cc30 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1152cc33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cc36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152cc39 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1152cc3c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cc3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152cc42 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cc45 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1152cc48 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1152cc4b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152cc4e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cc51 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cc54 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1152cc57 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cc5b jle 0x1152cda7 */
  if ((C.zf||C.sf!=C.of)) goto L_1152cda7;
  /* 1152cc61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cc64 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cc67 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1152cc6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152cc6d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1152cc70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cc73 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1152cc76 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cc7a jbe 0x1152cc83 */
  if ((C.cf||C.zf)) goto L_1152cc83;
  /* 1152cc7c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1152cc83:;
  /* 1152cc83 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152cc86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152cc89 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1152cc8c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1152cc8f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cc92 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152cc95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152cc98 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1152cc9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cc9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152cca1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1152cca4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152cca7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ccaa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1152ccad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ccb0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152ccb3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ccb6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1152ccb9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ccbc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ccbf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152ccc2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ccc5 jne 0x1152cd93 */
  if (!C.zf) goto L_1152cd93;
  /* 1152cccb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cccf jae 0x1152cd2c */
  if (!C.cf) goto L_1152cd2c;
  /* 1152ccd1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ccd4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ccd7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1152ccdb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ccde add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cce1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1152cce4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1152cce7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ccea add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cced mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1152ccf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152ccf2 jne 0x1152cd0a */
  if (!C.zf) goto L_1152cd0a;
  /* 1152ccf4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152ccf9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ccfc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152ccfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cd01 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152cd03 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152cd05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cd08 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1152cd0a:;
  /* 1152cd0a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152cd0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152cd12 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152cd14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cd17 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cd1a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1152cd1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1152cd20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cd23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cd26 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1152cd2a jmp 0x1152cd93 */
  goto L_1152cd93;
L_1152cd2c:;
  /* 1152cd2c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cd2f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cd32 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1152cd36 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cd39 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cd3c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1152cd3f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1152cd42 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cd45 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cd48 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1152cd4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152cd4d jne 0x1152cd6a */
  if (!C.zf) goto L_1152cd6a;
  /* 1152cd4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152cd52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cd55 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152cd5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152cd5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cd5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152cd62 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152cd64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cd67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1152cd6a:;
  /* 1152cd6a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152cd6d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cd70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152cd75 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152cd77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cd7a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cd7d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1152cd84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1152cd86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cd89 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cd8c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1152cd93:;
  /* 1152cd93 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cd96 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152cd99 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1152cd9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cd9e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cda1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152cda4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1152cda7:;
  /* 1152cda7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152cdaa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cdad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cdb0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1152cdb2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152cdb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cdb8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cdbb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cdbe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1152cdc1 jmp 0x1152d082 */
  goto L_1152d082;
L_1152cdc6:;
  /* 1152cdc6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152cdc9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cdcc jge 0x1152d082 */
  if ((C.sf==C.of)) goto L_1152d082;
  /* 1152cdd2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152cdd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cdd8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cddb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1152cddd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152cde0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cde3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cde6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cde9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1152cdec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cdef add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cdf2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1152cdf5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152cdf8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cdfb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1152cdfe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152ce01 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1152ce04 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ce07 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1152ce0a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ce0e jbe 0x1152ce17 */
  if ((C.cf||C.zf)) goto L_1152ce17;
  /* 1152ce10 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1152ce17:;
  /* 1152ce17 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152ce1a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1152ce1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152ce1f jne 0x1152cf60 */
  if (!C.zf) goto L_1152cf60;
  /* 1152ce25 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152ce28 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1152ce2b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ce2e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1152ce31 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ce35 jbe 0x1152ce3e */
  if ((C.cf||C.zf)) goto L_1152ce3e;
  /* 1152ce37 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1152ce3e:;
  /* 1152ce3e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ce41 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ce44 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152ce47 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ce4a jne 0x1152cf20 */
  if (!C.zf) goto L_1152cf20;
  /* 1152ce50 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ce54 jae 0x1152ceb5 */
  if (!C.cf) goto L_1152ceb5;
  /* 1152ce56 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152ce5b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ce5e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152ce60 not edx */
  EDX = (~(EDX));
  /* 1152ce62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ce65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ce68 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1152ce6c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152ce6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ce71 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ce74 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1152ce78 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ce7b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ce7e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1152ce81 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152ce84 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ce87 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ce8a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1152ce8d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ce90 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ce93 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1152ce97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152ce99 jne 0x1152ceb3 */
  if (!C.zf) goto L_1152ceb3;
  /* 1152ce9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152cea0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152cea3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152cea5 not edx */
  EDX = (~(EDX));
  /* 1152cea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ceaa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152ceac and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152ceae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ceb1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1152ceb3:;
  /* 1152ceb3 jmp 0x1152cf20 */
  goto L_1152cf20;
L_1152ceb5:;
  /* 1152ceb5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ceb8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cebb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152cec0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152cec2 not eax */
  EAX = (~(EAX));
  /* 1152cec4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cec7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ceca mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1152ced1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1152ced3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ced6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ced9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1152cee0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cee3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cee6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1152cee9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152ceec mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152ceef add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cef2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1152cef5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cef8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cefb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1152ceff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152cf01 jne 0x1152cf20 */
  if (!C.zf) goto L_1152cf20;
  /* 1152cf03 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152cf06 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cf09 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152cf0e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152cf10 not eax */
  EAX = (~(EAX));
  /* 1152cf12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cf15 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152cf18 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1152cf1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cf1d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1152cf20:;
  /* 1152cf20 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cf23 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1152cf26 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cf29 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152cf2c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1152cf2f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cf32 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152cf35 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152cf38 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1152cf3b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1152cf3e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152cf41 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cf44 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1152cf47 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152cf4a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1152cf4d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152cf50 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1152cf53 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cf57 jbe 0x1152cf60 */
  if ((C.cf||C.zf)) goto L_1152cf60;
  /* 1152cf59 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1152cf60:;
  /* 1152cf60 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152cf63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152cf66 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1152cf69 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1152cf6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cf6f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152cf72 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152cf75 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1152cf78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cf7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152cf7e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1152cf81 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152cf84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cf87 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1152cf8a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cf8d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152cf90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cf93 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1152cf96 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cf99 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152cf9c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152cf9f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cfa2 jne 0x1152d06e */
  if (!C.zf) goto L_1152d06e;
  /* 1152cfa8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152cfac jae 0x1152d008 */
  if (!C.cf) goto L_1152d008;
  /* 1152cfae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cfb1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cfb4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1152cfb8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cfbb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cfbe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1152cfc1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1152cfc3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cfc6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152cfc9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1152cfcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152cfce jne 0x1152cfe6 */
  if (!C.zf) goto L_1152cfe6;
  /* 1152cfd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152cfd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152cfd8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152cfda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cfdd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152cfdf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1152cfe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152cfe4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1152cfe6:;
  /* 1152cfe6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152cfeb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152cfee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152cff0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cff3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152cff6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1152cffa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152cffc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152cfff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152d002 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1152d006 jmp 0x1152d06e */
  goto L_1152d06e;
L_1152d008:;
  /* 1152d008 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152d00b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d00e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1152d012 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152d015 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d018 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1152d01b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1152d01d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152d020 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d023 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1152d026 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152d028 jne 0x1152d045 */
  if (!C.zf) goto L_1152d045;
  /* 1152d02a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d02d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d030 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1152d035 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1152d037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152d03a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152d03d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1152d03f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152d042 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1152d045:;
  /* 1152d045 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d048 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d04b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152d050 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152d052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152d055 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152d058 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1152d05f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d061 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152d064 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152d067 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1152d06e:;
  /* 1152d06e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152d071 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152d074 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1152d076 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152d079 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d07c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152d07f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1152d082:;
  /* 1152d082 mov eax, 1 */
  EAX = (0x1u);
L_1152d087:;
  /* 1152d087 mov esp, ebp */
  ESP = (EBP);
  /* 1152d089 pop ebp */
  EBP = (pop32());
  /* 1152d08a ret  */
  ESPCHK(0x1152caa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d090 @ 0x1152d090 (304 bytes, 79 insns) */
void f_1152d090(void) {
  FTRACE(0x1152d090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152d090 push ebp */
  push32((uint32_t)(EBP));
  /* 1152d091 mov ebp, esp */
  EBP = (ESP);
  /* 1152d093 push ecx */
  push32((uint32_t)(ECX));
  /* 1152d094 cmp dword ptr [0x11555200], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11555200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d09b je 0x1152d1bc */
  if (C.zf) goto L_1152d1bc;
  /* 1152d0a1 mov eax, dword ptr [0x115551f8] */
  EAX = (r32((uint32_t)(0x115551f8)));
  /* 1152d0a6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1152d0a9 mov ecx, dword ptr [0x11555200] */
  ECX = (r32((uint32_t)(0x11555200)));
  /* 1152d0af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1152d0b2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d0b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152d0b7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1152d0bc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1152d0c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152d0c4 push eax */
  push32((uint32_t)(EAX));
  /* 1152d0c5 call dword ptr [0x11556374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556374))), 0x1152d0cbu);
  /* 1152d0cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152d0d0 mov ecx, dword ptr [0x115551f8] */
  ECX = (r32((uint32_t)(0x115551f8)));
  /* 1152d0d6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152d0d8 mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152d0dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1152d0e0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1152d0e2 mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152d0e8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1152d0eb mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152d0f0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152d0f3 mov edx, dword ptr [0x115551f8] */
  EDX = (r32((uint32_t)(0x115551f8)));
  /* 1152d0f9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1152d104 mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152d109 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152d10c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1152d10f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1152d112 mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152d117 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152d11a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1152d11d mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152d123 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1152d126 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1152d12a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152d12c jne 0x1152d142 */
  if (!C.zf) goto L_1152d142;
  /* 1152d12e mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152d134 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152d137 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1152d139 mov ecx, dword ptr [0x11555200] */
  ECX = (r32((uint32_t)(0x11555200)));
  /* 1152d13f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1152d142:;
  /* 1152d142 mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152d148 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d14c jne 0x1152d1b2 */
  if (!C.zf) goto L_1152d1b2;
  /* 1152d14e cmp dword ptr [0x11555204], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11555204))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d155 jle 0x1152d1b2 */
  if ((C.zf||C.sf!=C.of)) goto L_1152d1b2;
  /* 1152d157 mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152d15c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1152d15f push ecx */
  push32((uint32_t)(ECX));
  /* 1152d160 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152d162 mov edx, dword ptr [0x1155520c] */
  EDX = (r32((uint32_t)(0x1155520c)));
  /* 1152d168 push edx */
  push32((uint32_t)(EDX));
  /* 1152d169 call dword ptr [0x11556378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556378))), 0x1152d16fu);
  /* 1152d16f mov eax, dword ptr [0x11555204] */
  EAX = (r32((uint32_t)(0x11555204)));
  /* 1152d174 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152d177 mov ecx, dword ptr [0x11555208] */
  ECX = (r32((uint32_t)(0x11555208)));
  /* 1152d17d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d17f mov edx, dword ptr [0x11555200] */
  EDX = (r32((uint32_t)(0x11555200)));
  /* 1152d185 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d188 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d18a push ecx */
  push32((uint32_t)(ECX));
  /* 1152d18b mov eax, dword ptr [0x11555200] */
  EAX = (r32((uint32_t)(0x11555200)));
  /* 1152d190 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d193 push eax */
  push32((uint32_t)(EAX));
  /* 1152d194 mov ecx, dword ptr [0x11555200] */
  ECX = (r32((uint32_t)(0x11555200)));
  /* 1152d19a push ecx */
  push32((uint32_t)(ECX));
  /* 1152d19b call 0x1152f7c0 */
  push32(0x1152d1a0u); f_1152f7c0();
  /* 1152d1a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d1a3 mov edx, dword ptr [0x11555204] */
  EDX = (r32((uint32_t)(0x11555204)));
  /* 1152d1a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d1ac mov dword ptr [0x11555204], edx */
  w32((uint32_t)(0x11555204), (EDX));
L_1152d1b2:;
  /* 1152d1b2 mov dword ptr [0x11555200], 0 */
  w32((uint32_t)(0x11555200), (0x0u));
L_1152d1bc:;
  /* 1152d1bc mov esp, ebp */
  ESP = (EBP);
  /* 1152d1be pop ebp */
  EBP = (pop32());
  /* 1152d1bf ret  */
  ESPCHK(0x1152d090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1c0 @ 0x1152d1c0 (1565 bytes, 343 insns) */
void f_1152d1c0(void) {
  FTRACE(0x1152d1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152d1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152d1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1152d1c3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d1c9 mov eax, dword ptr [0x11555204] */
  EAX = (r32((uint32_t)(0x11555204)));
  /* 1152d1ce imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152d1d1 push eax */
  push32((uint32_t)(EAX));
  /* 1152d1d2 mov ecx, dword ptr [0x11555208] */
  ECX = (r32((uint32_t)(0x11555208)));
  /* 1152d1d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1152d1d9 call dword ptr [0x115563a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a0))), 0x1152d1dfu);
  /* 1152d1df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152d1e1 je 0x1152d1eb */
  if (C.zf) goto L_1152d1eb;
  /* 1152d1e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152d1e6 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d1eb:;
  /* 1152d1eb mov edx, dword ptr [0x11555208] */
  EDX = (r32((uint32_t)(0x11555208)));
  /* 1152d1f1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1152d1f7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1152d201 jmp 0x1152d212 */
  goto L_1152d212;
L_1152d203:;
  /* 1152d203 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1152d209 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d20c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1152d212:;
  /* 1152d212 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1152d218 cmp ecx, dword ptr [0x11555204] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11555204))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d21e jge 0x1152d7d7 */
  if ((C.sf==C.of)) goto L_1152d7d7;
  /* 1152d224 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1152d22a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1152d22d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1152d233 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1152d238 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1152d23e push ecx */
  push32((uint32_t)(ECX));
  /* 1152d23f call dword ptr [0x115563a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a0))), 0x1152d245u);
  /* 1152d245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152d247 je 0x1152d253 */
  if (C.zf) goto L_1152d253;
  /* 1152d249 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1152d24e jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d253:;
  /* 1152d253 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1152d259 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1152d25c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1152d262 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1152d268 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d26e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1152d271 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1152d277 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1152d27a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152d27d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1152d287 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1152d291 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1152d298 jmp 0x1152d2a3 */
  goto L_1152d2a3;
L_1152d29a:;
  /* 1152d29a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152d29d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d2a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1152d2a3:;
  /* 1152d2a3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d2a7 jge 0x1152d79b */
  if ((C.sf==C.of)) goto L_1152d79b;
  /* 1152d2ad mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1152d2b7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1152d2c1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1152d2cb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1152d2d5 jmp 0x1152d2e6 */
  goto L_1152d2e6;
L_1152d2d7:;
  /* 1152d2d7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1152d2dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d2e0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1152d2e6:;
  /* 1152d2e6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d2ed jge 0x1152d302 */
  if ((C.sf==C.of)) goto L_1152d302;
  /* 1152d2ef mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1152d2f5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1152d300 jmp 0x1152d2d7 */
  goto L_1152d2d7;
L_1152d302:;
  /* 1152d302 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d306 jl 0x1152d73d */
  if ((C.sf!=C.of)) goto L_1152d73d;
  /* 1152d30c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1152d311 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1152d317 push ecx */
  push32((uint32_t)(ECX));
  /* 1152d318 call dword ptr [0x115563a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a0))), 0x1152d31eu);
  /* 1152d31e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152d320 je 0x1152d32c */
  if (C.zf) goto L_1152d32c;
  /* 1152d322 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1152d327 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d32c:;
  /* 1152d32c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1152d332 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1152d335 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1152d33f jmp 0x1152d350 */
  goto L_1152d350;
L_1152d341:;
  /* 1152d341 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1152d347 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d34a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1152d350:;
  /* 1152d350 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d357 jge 0x1152d4d4 */
  if ((C.sf==C.of)) goto L_1152d4d4;
  /* 1152d35d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152d360 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d363 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1152d369 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1152d36f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d375 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1152d37b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1152d381 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d385 jne 0x1152d392 */
  if (!C.zf) goto L_1152d392;
  /* 1152d387 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1152d38d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d390 je 0x1152d39c */
  if (C.zf) goto L_1152d39c;
L_1152d392:;
  /* 1152d392 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1152d397 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d39c:;
  /* 1152d39c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1152d3a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152d3a4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1152d3aa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1152d3b0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1152d3b6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1152d3bc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1152d3bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152d3c1 je 0x1152d3f9 */
  if (C.zf) goto L_1152d3f9;
  /* 1152d3c3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1152d3c9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d3cc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1152d3d2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d3dc jle 0x1152d3e8 */
  if ((C.zf||C.sf!=C.of)) goto L_1152d3e8;
  /* 1152d3de mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1152d3e3 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d3e8:;
  /* 1152d3e8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1152d3ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d3f1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1152d3f7 jmp 0x1152d43b */
  goto L_1152d43b;
L_1152d3f9:;
  /* 1152d3f9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1152d3ff sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1152d402 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d405 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1152d40b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d412 jle 0x1152d41e */
  if ((C.zf||C.sf!=C.of)) goto L_1152d41e;
  /* 1152d414 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1152d41e:;
  /* 1152d41e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1152d424 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1152d42b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d42e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1152d434 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1152d43b:;
  /* 1152d43b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d442 jl 0x1152d45d */
  if ((C.sf!=C.of)) goto L_1152d45d;
  /* 1152d444 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1152d44a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1152d44d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152d44f jne 0x1152d45d */
  if (!C.zf) goto L_1152d45d;
  /* 1152d451 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d45b jle 0x1152d467 */
  if ((C.zf||C.sf!=C.of)) goto L_1152d467;
L_1152d45d:;
  /* 1152d45d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1152d462 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d467:;
  /* 1152d467 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1152d46d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d473 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1152d476 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d47c je 0x1152d488 */
  if (C.zf) goto L_1152d488;
  /* 1152d47e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1152d483 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d488:;
  /* 1152d488 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1152d48e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d494 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1152d49a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1152d4a0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d4a6 jb 0x1152d39c */
  if (C.cf) goto L_1152d39c;
  /* 1152d4ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1152d4b2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d4b8 je 0x1152d4c4 */
  if (C.zf) goto L_1152d4c4;
  /* 1152d4ba mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1152d4bf jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d4c4:;
  /* 1152d4c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152d4c7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d4cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152d4cf jmp 0x1152d341 */
  goto L_1152d341;
L_1152d4d4:;
  /* 1152d4d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152d4d7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152d4d9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d4df je 0x1152d4eb */
  if (C.zf) goto L_1152d4eb;
  /* 1152d4e1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1152d4e6 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d4eb:;
  /* 1152d4eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152d4ee mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1152d4f4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1152d4fb jmp 0x1152d506 */
  goto L_1152d506;
L_1152d4fd:;
  /* 1152d4fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152d500 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d503 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1152d506:;
  /* 1152d506 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d50a jge 0x1152d73d */
  if ((C.sf==C.of)) goto L_1152d73d;
  /* 1152d510 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1152d51a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1152d520 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1152d526:;
  /* 1152d526 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1152d52c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152d52f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1152d535 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1152d53b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d541 je 0x1152d66a */
  if (C.zf) goto L_1152d66a;
  /* 1152d547 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152d54a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1152d550 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d557 je 0x1152d66a */
  if (C.zf) goto L_1152d66a;
  /* 1152d55d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1152d563 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d569 jb 0x1152d57e */
  if (C.cf) goto L_1152d57e;
  /* 1152d56b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1152d571 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d576 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d57c jb 0x1152d588 */
  if (C.cf) goto L_1152d588;
L_1152d57e:;
  /* 1152d57e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1152d583 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d588:;
  /* 1152d588 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1152d58e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1152d594 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1152d59a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1152d5a0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d5a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1152d5a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152d5a9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d5ae mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1152d5b4:;
  /* 1152d5b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152d5b7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d5bd je 0x1152d5de */
  if (C.zf) goto L_1152d5de;
  /* 1152d5bf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152d5c2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d5c8 jne 0x1152d5cc */
  if (!C.zf) goto L_1152d5cc;
  /* 1152d5ca jmp 0x1152d5de */
  goto L_1152d5de;
L_1152d5cc:;
  /* 1152d5cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152d5cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152d5d1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1152d5d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152d5d7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d5d9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1152d5dc jmp 0x1152d5b4 */
  goto L_1152d5b4;
L_1152d5de:;
  /* 1152d5de mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152d5e1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d5e7 jne 0x1152d5f3 */
  if (!C.zf) goto L_1152d5f3;
  /* 1152d5e9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1152d5ee jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d5f3:;
  /* 1152d5f3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1152d5f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152d5fb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1152d5fe sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d601 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1152d607 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d60e jle 0x1152d61a */
  if ((C.zf||C.sf!=C.of)) goto L_1152d61a;
  /* 1152d610 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1152d61a:;
  /* 1152d61a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1152d620 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d623 je 0x1152d62f */
  if (C.zf) goto L_1152d62f;
  /* 1152d625 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1152d62a jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d62f:;
  /* 1152d62f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1152d635 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1152d638 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d63e je 0x1152d64a */
  if (C.zf) goto L_1152d64a;
  /* 1152d640 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1152d645 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d64a:;
  /* 1152d64a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1152d650 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1152d656 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1152d65c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d65f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1152d665 jmp 0x1152d526 */
  goto L_1152d526;
L_1152d66a:;
  /* 1152d66a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d671 je 0x1152d6e1 */
  if (C.zf) goto L_1152d6e1;
  /* 1152d673 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d677 jge 0x1152d6ab */
  if ((C.sf==C.of)) goto L_1152d6ab;
  /* 1152d679 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152d67e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152d681 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152d683 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1152d689 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d68b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1152d691 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152d696 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152d699 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152d69b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1152d6a1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d6a3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1152d6a9 jmp 0x1152d6e1 */
  goto L_1152d6e1;
L_1152d6ab:;
  /* 1152d6ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152d6ae sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d6b1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152d6b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152d6b8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1152d6be or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d6c0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1152d6c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152d6c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d6cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1152d6d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1152d6d3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1152d6d9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d6db mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1152d6e1:;
  /* 1152d6e1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1152d6e7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152d6ea cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d6f0 jne 0x1152d704 */
  if (!C.zf) goto L_1152d704;
  /* 1152d6f2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152d6f5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1152d6fb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d702 je 0x1152d70e */
  if (C.zf) goto L_1152d70e;
L_1152d704:;
  /* 1152d704 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1152d709 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d70e:;
  /* 1152d70e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1152d714 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1152d717 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d71d je 0x1152d729 */
  if (C.zf) goto L_1152d729;
  /* 1152d71f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1152d724 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d729:;
  /* 1152d729 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1152d72f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d732 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1152d738 jmp 0x1152d4fd */
  goto L_1152d4fd;
L_1152d73d:;
  /* 1152d73d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152d740 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1152d746 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1152d74c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d750 jne 0x1152d76a */
  if (!C.zf) goto L_1152d76a;
  /* 1152d752 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152d755 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1152d75b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1152d761 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d768 je 0x1152d771 */
  if (C.zf) goto L_1152d771;
L_1152d76a:;
  /* 1152d76a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1152d76f jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d771:;
  /* 1152d771 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1152d777 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d77d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1152d783 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152d786 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d78b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1152d78e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152d791 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1152d793 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152d796 jmp 0x1152d29a */
  goto L_1152d29a;
L_1152d79b:;
  /* 1152d79b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1152d7a1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1152d7a7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d7a9 jne 0x1152d7bc */
  if (!C.zf) goto L_1152d7bc;
  /* 1152d7ab mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1152d7b1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1152d7b7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d7ba je 0x1152d7c3 */
  if (C.zf) goto L_1152d7c3;
L_1152d7bc:;
  /* 1152d7bc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1152d7c1 jmp 0x1152d7d9 */
  goto L_1152d7d9;
L_1152d7c3:;
  /* 1152d7c3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1152d7c9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d7cc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1152d7d2 jmp 0x1152d203 */
  goto L_1152d203;
L_1152d7d7:;
  /* 1152d7d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152d7d9:;
  /* 1152d7d9 mov esp, ebp */
  ESP = (EBP);
  /* 1152d7db pop ebp */
  EBP = (pop32());
  /* 1152d7dc ret  */
  ESPCHK(0x1152d1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7e0 @ 0x1152d7e0 (250 bytes, 92 insns) */
void f_1152d7e0(void) {
  FTRACE(0x1152d7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152d7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152d7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1152d7e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d7e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1152d7e7 push esi */
  push32((uint32_t)(ESI));
  /* 1152d7e8 push edi */
  push32((uint32_t)(EDI));
  /* 1152d7e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1152d7ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1152d7ef lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1152d7f2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1152d7f5:;
  /* 1152d7f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d7f9 jne 0x1152d819 */
  if (!C.zf) goto L_1152d819;
  /* 1152d7fb push 0x1154f36c */
  push32((uint32_t)(0x1154f36cu));
  /* 1152d800 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152d802 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1152d804 push 0x1154f360 */
  push32((uint32_t)(0x1154f360u));
  /* 1152d809 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152d80b call 0x11526990 */
  push32(0x1152d810u); f_11526990();
  /* 1152d810 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d813 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d816 jne 0x1152d819 */
  if (!C.zf) goto L_1152d819;
  /* 1152d818 int3  */
  x86_unimpl("int3 @ 0x1152d818");
L_1152d819:;
  /* 1152d819 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152d81b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152d81d jne 0x1152d7f5 */
  if (!C.zf) goto L_1152d7f5;
L_1152d81f:;
  /* 1152d81f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d823 jne 0x1152d843 */
  if (!C.zf) goto L_1152d843;
  /* 1152d825 push 0x1154f350 */
  push32((uint32_t)(0x1154f350u));
  /* 1152d82a push 0 */
  push32((uint32_t)(0x0u));
  /* 1152d82c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1152d82e push 0x1154f360 */
  push32((uint32_t)(0x1154f360u));
  /* 1152d833 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152d835 call 0x11526990 */
  push32(0x1152d83au); f_11526990();
  /* 1152d83a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d83d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d840 jne 0x1152d843 */
  if (!C.zf) goto L_1152d843;
  /* 1152d842 int3  */
  x86_unimpl("int3 @ 0x1152d842");
L_1152d843:;
  /* 1152d843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152d847 jne 0x1152d81f */
  if (!C.zf) goto L_1152d81f;
  /* 1152d849 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d84c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1152d853 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152d859 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1152d85c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d85f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152d862 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1152d864 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d867 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1152d86e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152d871 push ecx */
  push32((uint32_t)(ECX));
  /* 1152d872 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152d875 push edx */
  push32((uint32_t)(EDX));
  /* 1152d876 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d879 push eax */
  push32((uint32_t)(EAX));
  /* 1152d87a call 0x1152e860 */
  push32(0x1152d87fu); f_1152e860();
  /* 1152d87f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d882 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1152d885 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d888 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152d88b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d88e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d891 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1152d894 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d897 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d89b jl 0x1152d8bf */
  if ((C.sf!=C.of)) goto L_1152d8bf;
  /* 1152d89d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d8a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152d8a2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1152d8a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152d8a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152d8ad mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1152d8b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d8b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152d8b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d8b8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d8bb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1152d8bd jmp 0x1152d8d0 */
  goto L_1152d8d0;
L_1152d8bf:;
  /* 1152d8bf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152d8c2 push edx */
  push32((uint32_t)(EDX));
  /* 1152d8c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152d8c5 call 0x1152e5e0 */
  push32(0x1152d8cau); f_1152e5e0();
  /* 1152d8ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d8cd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1152d8d0:;
  /* 1152d8d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152d8d3 pop edi */
  EDI = (pop32());
  /* 1152d8d4 pop esi */
  ESI = (pop32());
  /* 1152d8d5 pop ebx */
  EBX = (pop32());
  /* 1152d8d6 mov esp, ebp */
  ESP = (EBP);
  /* 1152d8d8 pop ebp */
  EBP = (pop32());
  /* 1152d8d9 ret  */
  ESPCHK(0x1152d7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8e0 @ 0x1152d8e0 (183 bytes, 58 insns) */
void f_1152d8e0(void) {
  FTRACE(0x1152d8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152d8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152d8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1152d8e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d8e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152d8e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d8ec cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d8f1 ja 0x1152d90a */
  if ((!C.cf&&!C.zf)) goto L_1152d90a;
  /* 1152d8f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152d8f6 mov edx, dword ptr [0x11551c98] */
  EDX = (r32((uint32_t)(0x11551c98)));
  /* 1152d8fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d8fe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1152d902 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1152d905 jmp 0x1152d993 */
  goto L_1152d993;
L_1152d90a:;
  /* 1152d90a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152d90d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1152d910 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152d916 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152d91c mov edx, dword ptr [0x11551c98] */
  EDX = (r32((uint32_t)(0x11551c98)));
  /* 1152d922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d924 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1152d928 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1152d92d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152d92f je 0x1152d953 */
  if (C.zf) goto L_1152d953;
  /* 1152d931 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152d934 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1152d937 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152d93d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1152d940 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1152d943 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1152d946 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1152d94a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1152d951 jmp 0x1152d964 */
  goto L_1152d964;
L_1152d953:;
  /* 1152d953 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1152d956 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1152d959 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1152d95d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1152d964:;
  /* 1152d964 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152d966 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152d968 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152d96a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1152d96d push ecx */
  push32((uint32_t)(ECX));
  /* 1152d96e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152d971 push edx */
  push32((uint32_t)(EDX));
  /* 1152d972 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1152d975 push eax */
  push32((uint32_t)(EAX));
  /* 1152d976 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152d978 call 0x1152fb00 */
  push32(0x1152d97du); f_1152fb00();
  /* 1152d97d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152d982 jne 0x1152d988 */
  if (!C.zf) goto L_1152d988;
  /* 1152d984 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d986 jmp 0x1152d993 */
  goto L_1152d993;
L_1152d988:;
  /* 1152d988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152d98b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152d990 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1152d993:;
  /* 1152d993 mov esp, ebp */
  ESP = (EBP);
  /* 1152d995 pop ebp */
  EBP = (pop32());
  /* 1152d996 ret  */
  ESPCHK(0x1152d8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9a0 @ 0x1152d9a0 (836 bytes, 238 insns) */
void f_1152d9a0(void) {
  FTRACE(0x1152d9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152d9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152d9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1152d9a3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152d9a6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1152d9a8 call 0x1152b2d0 */
  push32(0x1152d9adu); f_1152b2d0();
  /* 1152d9ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d9b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152d9b3 push eax */
  push32((uint32_t)(EAX));
  /* 1152d9b4 call 0x1152dcf0 */
  push32(0x1152d9b9u); f_1152dcf0();
  /* 1152d9b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d9bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1152d9bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152d9c2 cmp ecx, dword ptr [0x11554f44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11554f44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d9c8 jne 0x1152d9db */
  if (!C.zf) goto L_1152d9db;
  /* 1152d9ca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1152d9cc call 0x1152b370 */
  push32(0x1152d9d1u); f_1152b370();
  /* 1152d9d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d9d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d9d6 jmp 0x1152dce0 */
  goto L_1152dce0;
L_1152d9db:;
  /* 1152d9db cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152d9df jne 0x1152d9fc */
  if (!C.zf) goto L_1152d9fc;
  /* 1152d9e1 call 0x1152ddd0 */
  push32(0x1152d9e6u); f_1152ddd0();
  /* 1152d9e6 call 0x1152de50 */
  push32(0x1152d9ebu); f_1152de50();
  /* 1152d9eb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1152d9ed call 0x1152b370 */
  push32(0x1152d9f2u); f_1152b370();
  /* 1152d9f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152d9f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152d9f7 jmp 0x1152dce0 */
  goto L_1152dce0;
L_1152d9fc:;
  /* 1152d9fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152da03 jmp 0x1152da0e */
  goto L_1152da0e;
L_1152da05:;
  /* 1152da05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152da08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152da0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1152da0e:;
  /* 1152da0e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152da12 jae 0x1152db5f */
  if (!C.cf) goto L_1152db5f;
  /* 1152da18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152da1b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152da1e mov ecx, dword ptr [eax + 0x11551eb8] */
  ECX = (r32((uint32_t)(EAX + 0x11551eb8)));
  /* 1152da24 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152da27 jne 0x1152db5a */
  if (!C.zf) goto L_1152db5a;
  /* 1152da2d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1152da34 jmp 0x1152da3f */
  goto L_1152da3f;
L_1152da36:;
  /* 1152da36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152da39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152da3c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1152da3f:;
  /* 1152da3f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152da46 jae 0x1152da54 */
  if (!C.cf) goto L_1152da54;
  /* 1152da48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152da4b mov byte ptr [eax + 0x115550e0], 0 */
  w8((uint32_t)(EAX + 0x115550e0), (0x0u));
  /* 1152da52 jmp 0x1152da36 */
  goto L_1152da36;
L_1152da54:;
  /* 1152da54 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1152da5b jmp 0x1152da66 */
  goto L_1152da66;
L_1152da5d:;
  /* 1152da5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152da60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152da63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1152da66:;
  /* 1152da66 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152da6a jae 0x1152dae7 */
  if (!C.cf) goto L_1152dae7;
  /* 1152da6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152da6f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152da72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152da75 lea ecx, [edx + eax*8 + 0x11551ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11551ec8));
  /* 1152da7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1152da7f jmp 0x1152da8a */
  goto L_1152da8a;
L_1152da81:;
  /* 1152da81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152da84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152da87 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1152da8a:;
  /* 1152da8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152da8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152da8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1152da91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152da93 je 0x1152dae2 */
  if (C.zf) goto L_1152dae2;
  /* 1152da95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152da98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152da9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1152da9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152da9f je 0x1152dae2 */
  if (C.zf) goto L_1152dae2;
  /* 1152daa1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152daa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152daa6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1152daa8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1152daab jmp 0x1152dab6 */
  goto L_1152dab6;
L_1152daad:;
  /* 1152daad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152dab0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dab3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1152dab6:;
  /* 1152dab6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152dab9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152dabb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1152dabe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dac1 ja 0x1152dae0 */
  if ((!C.cf&&!C.zf)) goto L_1152dae0;
  /* 1152dac3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152dac6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152dac9 mov dl, byte ptr [eax + 0x115550e1] */
  DL = (r8((uint32_t)(EAX + 0x115550e1)));
  /* 1152dacf or dl, byte ptr [ecx + 0x11551eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11551eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1152dad5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152dad8 mov byte ptr [eax + 0x115550e1], dl */
  w8((uint32_t)(EAX + 0x115550e1), (DL));
  /* 1152dade jmp 0x1152daad */
  goto L_1152daad;
L_1152dae0:;
  /* 1152dae0 jmp 0x1152da81 */
  goto L_1152da81;
L_1152dae2:;
  /* 1152dae2 jmp 0x1152da5d */
  goto L_1152da5d;
L_1152dae7:;
  /* 1152dae7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152daea mov dword ptr [0x11554f44], ecx */
  w32((uint32_t)(0x11554f44), (ECX));
  /* 1152daf0 mov dword ptr [0x11554fcc], 1 */
  w32((uint32_t)(0x11554fcc), (0x1u));
  /* 1152dafa mov edx, dword ptr [0x11554f44] */
  EDX = (r32((uint32_t)(0x11554f44)));
  /* 1152db00 push edx */
  push32((uint32_t)(EDX));
  /* 1152db01 call 0x1152dd50 */
  push32(0x1152db06u); f_1152dd50();
  /* 1152db06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152db09 mov dword ptr [0x115551e4], eax */
  w32((uint32_t)(0x115551e4), (EAX));
  /* 1152db0e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1152db15 jmp 0x1152db20 */
  goto L_1152db20;
L_1152db17:;
  /* 1152db17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152db1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152db1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1152db20:;
  /* 1152db20 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152db24 jae 0x1152db44 */
  if (!C.cf) goto L_1152db44;
  /* 1152db26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152db29 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152db2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152db2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152db32 mov cx, word ptr [ecx + eax*2 + 0x11551ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11551ebc)));
  /* 1152db3a mov word ptr [edx*2 + 0x11554fc0], cx */
  w16((uint32_t)(EDX*2 + 0x11554fc0), (CX));
  /* 1152db42 jmp 0x1152db17 */
  goto L_1152db17;
L_1152db44:;
  /* 1152db44 call 0x1152de50 */
  push32(0x1152db49u); f_1152de50();
  /* 1152db49 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1152db4b call 0x1152b370 */
  push32(0x1152db50u); f_1152b370();
  /* 1152db50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152db53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152db55 jmp 0x1152dce0 */
  goto L_1152dce0;
L_1152db5a:;
  /* 1152db5a jmp 0x1152da05 */
  goto L_1152da05;
L_1152db5f:;
  /* 1152db5f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1152db62 push edx */
  push32((uint32_t)(EDX));
  /* 1152db63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152db66 push eax */
  push32((uint32_t)(EAX));
  /* 1152db67 call dword ptr [0x1155634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155634c))), 0x1152db6du);
  /* 1152db6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152db70 jne 0x1152dcb2 */
  if (!C.zf) goto L_1152dcb2;
  /* 1152db76 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1152db7d jmp 0x1152db88 */
  goto L_1152db88;
L_1152db7f:;
  /* 1152db7f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152db82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152db85 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1152db88:;
  /* 1152db88 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152db8f jae 0x1152db9d */
  if (!C.cf) goto L_1152db9d;
  /* 1152db91 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152db94 mov byte ptr [edx + 0x115550e0], 0 */
  w8((uint32_t)(EDX + 0x115550e0), (0x0u));
  /* 1152db9b jmp 0x1152db7f */
  goto L_1152db7f;
L_1152db9d:;
  /* 1152db9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152dba0 mov dword ptr [0x11554f44], eax */
  w32((uint32_t)(0x11554f44), (EAX));
  /* 1152dba5 mov dword ptr [0x115551e4], 0 */
  w32((uint32_t)(0x115551e4), (0x0u));
  /* 1152dbaf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dbb3 jbe 0x1152dc6e */
  if ((C.cf||C.zf)) goto L_1152dc6e;
  /* 1152dbb9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1152dbbc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1152dbbf jmp 0x1152dbca */
  goto L_1152dbca;
L_1152dbc1:;
  /* 1152dbc1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152dbc4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dbc7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1152dbca:;
  /* 1152dbca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152dbcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152dbcf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1152dbd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152dbd3 je 0x1152dc1c */
  if (C.zf) goto L_1152dc1c;
  /* 1152dbd5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152dbd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152dbda mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1152dbdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152dbdf je 0x1152dc1c */
  if (C.zf) goto L_1152dc1c;
  /* 1152dbe1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152dbe4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152dbe6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1152dbe8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1152dbeb jmp 0x1152dbf6 */
  goto L_1152dbf6;
L_1152dbed:;
  /* 1152dbed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152dbf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dbf3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1152dbf6:;
  /* 1152dbf6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152dbf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152dbfb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1152dbfe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dc01 ja 0x1152dc1a */
  if ((!C.cf&&!C.zf)) goto L_1152dc1a;
  /* 1152dc03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152dc06 mov cl, byte ptr [eax + 0x115550e1] */
  CL = (r8((uint32_t)(EAX + 0x115550e1)));
  /* 1152dc0c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1152dc0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152dc12 mov byte ptr [edx + 0x115550e1], cl */
  w8((uint32_t)(EDX + 0x115550e1), (CL));
  /* 1152dc18 jmp 0x1152dbed */
  goto L_1152dbed;
L_1152dc1a:;
  /* 1152dc1a jmp 0x1152dbc1 */
  goto L_1152dbc1;
L_1152dc1c:;
  /* 1152dc1c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1152dc23 jmp 0x1152dc2e */
  goto L_1152dc2e;
L_1152dc25:;
  /* 1152dc25 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152dc28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dc2b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1152dc2e:;
  /* 1152dc2e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dc35 jae 0x1152dc4e */
  if (!C.cf) goto L_1152dc4e;
  /* 1152dc37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152dc3a mov dl, byte ptr [ecx + 0x115550e1] */
  DL = (r8((uint32_t)(ECX + 0x115550e1)));
  /* 1152dc40 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1152dc43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152dc46 mov byte ptr [eax + 0x115550e1], dl */
  w8((uint32_t)(EAX + 0x115550e1), (DL));
  /* 1152dc4c jmp 0x1152dc25 */
  goto L_1152dc25;
L_1152dc4e:;
  /* 1152dc4e mov ecx, dword ptr [0x11554f44] */
  ECX = (r32((uint32_t)(0x11554f44)));
  /* 1152dc54 push ecx */
  push32((uint32_t)(ECX));
  /* 1152dc55 call 0x1152dd50 */
  push32(0x1152dc5au); f_1152dd50();
  /* 1152dc5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dc5d mov dword ptr [0x115551e4], eax */
  w32((uint32_t)(0x115551e4), (EAX));
  /* 1152dc62 mov dword ptr [0x11554fcc], 1 */
  w32((uint32_t)(0x11554fcc), (0x1u));
  /* 1152dc6c jmp 0x1152dc78 */
  goto L_1152dc78;
L_1152dc6e:;
  /* 1152dc6e mov dword ptr [0x11554fcc], 0 */
  w32((uint32_t)(0x11554fcc), (0x0u));
L_1152dc78:;
  /* 1152dc78 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1152dc7f jmp 0x1152dc8a */
  goto L_1152dc8a;
L_1152dc81:;
  /* 1152dc81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152dc84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dc87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1152dc8a:;
  /* 1152dc8a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dc8e jae 0x1152dc9f */
  if (!C.cf) goto L_1152dc9f;
  /* 1152dc90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152dc93 mov word ptr [eax*2 + 0x11554fc0], 0 */
  w16((uint32_t)(EAX*2 + 0x11554fc0), (0x0u));
  /* 1152dc9d jmp 0x1152dc81 */
  goto L_1152dc81;
L_1152dc9f:;
  /* 1152dc9f call 0x1152de50 */
  push32(0x1152dca4u); f_1152de50();
  /* 1152dca4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1152dca6 call 0x1152b370 */
  push32(0x1152dcabu); f_1152b370();
  /* 1152dcab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dcae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152dcb0 jmp 0x1152dce0 */
  goto L_1152dce0;
L_1152dcb2:;
  /* 1152dcb2 cmp dword ptr [0x11553a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dcb9 je 0x1152dcd3 */
  if (C.zf) goto L_1152dcd3;
  /* 1152dcbb call 0x1152ddd0 */
  push32(0x1152dcc0u); f_1152ddd0();
  /* 1152dcc0 call 0x1152de50 */
  push32(0x1152dcc5u); f_1152de50();
  /* 1152dcc5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1152dcc7 call 0x1152b370 */
  push32(0x1152dcccu); f_1152b370();
  /* 1152dccc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152dcd1 jmp 0x1152dce0 */
  goto L_1152dce0;
L_1152dcd3:;
  /* 1152dcd3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1152dcd5 call 0x1152b370 */
  push32(0x1152dcdau); f_1152b370();
  /* 1152dcda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dcdd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1152dce0:;
  /* 1152dce0 mov esp, ebp */
  ESP = (EBP);
  /* 1152dce2 pop ebp */
  EBP = (pop32());
  /* 1152dce3 ret  */
  ESPCHK(0x1152d9a0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1152dcf0 (89 bytes, 21 insns) */
void f_1152dcf0(void) {
  FTRACE(0x1152dcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152dcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152dcf1 mov ebp, esp */
  EBP = (ESP);
  /* 1152dcf3 mov dword ptr [0x11553a50], 0 */
  w32((uint32_t)(0x11553a50), (0x0u));
  /* 1152dcfd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dd01 jne 0x1152dd15 */
  if (!C.zf) goto L_1152dd15;
  /* 1152dd03 mov dword ptr [0x11553a50], 1 */
  w32((uint32_t)(0x11553a50), (0x1u));
  /* 1152dd0d call dword ptr [0x11556344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556344))), 0x1152dd13u);
  /* 1152dd13 jmp 0x1152dd47 */
  goto L_1152dd47;
L_1152dd15:;
  /* 1152dd15 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dd19 jne 0x1152dd2d */
  if (!C.zf) goto L_1152dd2d;
  /* 1152dd1b mov dword ptr [0x11553a50], 1 */
  w32((uint32_t)(0x11553a50), (0x1u));
  /* 1152dd25 call dword ptr [0x11556348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556348))), 0x1152dd2bu);
  /* 1152dd2b jmp 0x1152dd47 */
  goto L_1152dd47;
L_1152dd2d:;
  /* 1152dd2d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dd31 jne 0x1152dd44 */
  if (!C.zf) goto L_1152dd44;
  /* 1152dd33 mov dword ptr [0x11553a50], 1 */
  w32((uint32_t)(0x11553a50), (0x1u));
  /* 1152dd3d mov eax, dword ptr [0x11553a70] */
  EAX = (r32((uint32_t)(0x11553a70)));
  /* 1152dd42 jmp 0x1152dd47 */
  goto L_1152dd47;
L_1152dd44:;
  /* 1152dd44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1152dd47:;
  /* 1152dd47 pop ebp */
  EBP = (pop32());
  /* 1152dd48 ret  */
  ESPCHK(0x1152dcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd50 @ 0x1152dd50 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1152dd50(void) {
  FTRACE(0x1152dd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152dd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1152dd51 mov ebp, esp */
  EBP = (ESP);
  /* 1152dd53 push ecx */
  push32((uint32_t)(ECX));
  /* 1152dd54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152dd57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152dd5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152dd5d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152dd63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152dd66 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dd6a ja 0x1152dd9a */
  if ((!C.cf&&!C.zf)) goto L_1152dd9a;
  /* 1152dd6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152dd6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152dd71 mov dl, byte ptr [eax + 0x1152ddb4] */
  DL = (r8((uint32_t)(EAX + 0x1152ddb4)));
  /* 1152dd77 jmp dword ptr [edx*4 + 0x1152dda0] */
  switch (EDX) {
    case 0: goto L_1152dd7e;
    case 1: goto L_1152dd85;
    case 2: goto L_1152dd8c;
    case 3: goto L_1152dd93;
    case 4: goto L_1152dd9a;
    default: x86_unimpl("switch@0x1152dd77 out of table"); return;
  }
L_1152dd7e:;
  /* 1152dd7e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1152dd83 jmp 0x1152dd9c */
  goto L_1152dd9c;
L_1152dd85:;
  /* 1152dd85 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1152dd8a jmp 0x1152dd9c */
  goto L_1152dd9c;
L_1152dd8c:;
  /* 1152dd8c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1152dd91 jmp 0x1152dd9c */
  goto L_1152dd9c;
L_1152dd93:;
  /* 1152dd93 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1152dd98 jmp 0x1152dd9c */
  goto L_1152dd9c;
L_1152dd9a:;
  /* 1152dd9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152dd9c:;
  /* 1152dd9c mov esp, ebp */
  ESP = (EBP);
  /* 1152dd9e pop ebp */
  EBP = (pop32());
  /* 1152dd9f ret  */
  ESPCHK(0x1152dd50u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1152ddd0 (116 bytes, 29 insns) */
void f_1152ddd0(void) {
  FTRACE(0x1152ddd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152ddd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152ddd1 mov ebp, esp */
  EBP = (ESP);
  /* 1152ddd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1152ddd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152dddb jmp 0x1152dde6 */
  goto L_1152dde6;
L_1152dddd:;
  /* 1152dddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152dde0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dde3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152dde6:;
  /* 1152dde6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dded jge 0x1152ddfb */
  if ((C.sf==C.of)) goto L_1152ddfb;
  /* 1152ddef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ddf2 mov byte ptr [ecx + 0x115550e0], 0 */
  w8((uint32_t)(ECX + 0x115550e0), (0x0u));
  /* 1152ddf9 jmp 0x1152dddd */
  goto L_1152dddd;
L_1152ddfb:;
  /* 1152ddfb mov dword ptr [0x11554f44], 0 */
  w32((uint32_t)(0x11554f44), (0x0u));
  /* 1152de05 mov dword ptr [0x11554fcc], 0 */
  w32((uint32_t)(0x11554fcc), (0x0u));
  /* 1152de0f mov dword ptr [0x115551e4], 0 */
  w32((uint32_t)(0x115551e4), (0x0u));
  /* 1152de19 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152de20 jmp 0x1152de2b */
  goto L_1152de2b;
L_1152de22:;
  /* 1152de22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152de25 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152de28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1152de2b:;
  /* 1152de2b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152de2f jge 0x1152de40 */
  if ((C.sf==C.of)) goto L_1152de40;
  /* 1152de31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152de34 mov word ptr [eax*2 + 0x11554fc0], 0 */
  w16((uint32_t)(EAX*2 + 0x11554fc0), (0x0u));
  /* 1152de3e jmp 0x1152de22 */
  goto L_1152de22;
L_1152de40:;
  /* 1152de40 mov esp, ebp */
  ESP = (EBP);
  /* 1152de42 pop ebp */
  EBP = (pop32());
  /* 1152de43 ret  */
  ESPCHK(0x1152ddd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de50 @ 0x1152de50 (770 bytes, 175 insns) */
void f_1152de50(void) {
  FTRACE(0x1152de50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152de50 push ebp */
  push32((uint32_t)(EBP));
  /* 1152de51 mov ebp, esp */
  EBP = (ESP);
  /* 1152de53 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152de59 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1152de5f push eax */
  push32((uint32_t)(EAX));
  /* 1152de60 mov ecx, dword ptr [0x11554f44] */
  ECX = (r32((uint32_t)(0x11554f44)));
  /* 1152de66 push ecx */
  push32((uint32_t)(ECX));
  /* 1152de67 call dword ptr [0x1155634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155634c))), 0x1152de6du);
  /* 1152de6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152de70 jne 0x1152e089 */
  if (!C.zf) goto L_1152e089;
  /* 1152de76 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1152de80 jmp 0x1152de91 */
  goto L_1152de91;
L_1152de82:;
  /* 1152de82 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152de88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152de8b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1152de91:;
  /* 1152de91 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152de9b jae 0x1152deb2 */
  if (!C.cf) goto L_1152deb2;
  /* 1152de9d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152dea3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1152dea9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1152deb0 jmp 0x1152de82 */
  goto L_1152de82;
L_1152deb2:;
  /* 1152deb2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1152deb9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1152debf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152dec2 jmp 0x1152decd */
  goto L_1152decd;
L_1152dec4:;
  /* 1152dec4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152dec7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152deca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152decd:;
  /* 1152decd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ded0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152ded2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1152ded4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152ded6 je 0x1152df18 */
  if (C.zf) goto L_1152df18;
  /* 1152ded8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152dedb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152dedd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1152dedf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1152dee5 jmp 0x1152def6 */
  goto L_1152def6;
L_1152dee7:;
  /* 1152dee7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152deed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152def0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1152def6:;
  /* 1152def6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152def9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152defb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1152defe cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152df04 ja 0x1152df16 */
  if ((!C.cf&&!C.zf)) goto L_1152df16;
  /* 1152df06 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152df0c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1152df14 jmp 0x1152dee7 */
  goto L_1152dee7;
L_1152df16:;
  /* 1152df16 jmp 0x1152dec4 */
  goto L_1152dec4;
L_1152df18:;
  /* 1152df18 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152df1a mov eax, dword ptr [0x115551e4] */
  EAX = (r32((uint32_t)(0x115551e4)));
  /* 1152df1f push eax */
  push32((uint32_t)(EAX));
  /* 1152df20 mov ecx, dword ptr [0x11554f44] */
  ECX = (r32((uint32_t)(0x11554f44)));
  /* 1152df26 push ecx */
  push32((uint32_t)(ECX));
  /* 1152df27 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1152df2d push edx */
  push32((uint32_t)(EDX));
  /* 1152df2e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1152df33 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1152df39 push eax */
  push32((uint32_t)(EAX));
  /* 1152df3a push 1 */
  push32((uint32_t)(0x1u));
  /* 1152df3c call 0x1152fb00 */
  push32(0x1152df41u); f_1152fb00();
  /* 1152df41 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152df44 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152df46 mov ecx, dword ptr [0x11554f44] */
  ECX = (r32((uint32_t)(0x11554f44)));
  /* 1152df4c push ecx */
  push32((uint32_t)(ECX));
  /* 1152df4d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1152df52 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1152df58 push edx */
  push32((uint32_t)(EDX));
  /* 1152df59 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1152df5e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1152df64 push eax */
  push32((uint32_t)(EAX));
  /* 1152df65 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1152df6a mov ecx, dword ptr [0x115551e4] */
  ECX = (r32((uint32_t)(0x115551e4)));
  /* 1152df70 push ecx */
  push32((uint32_t)(ECX));
  /* 1152df71 call 0x1152fcc0 */
  push32(0x1152df76u); f_1152fcc0();
  /* 1152df76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152df79 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152df7b mov edx, dword ptr [0x11554f44] */
  EDX = (r32((uint32_t)(0x11554f44)));
  /* 1152df81 push edx */
  push32((uint32_t)(EDX));
  /* 1152df82 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1152df87 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1152df8d push eax */
  push32((uint32_t)(EAX));
  /* 1152df8e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1152df93 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1152df99 push ecx */
  push32((uint32_t)(ECX));
  /* 1152df9a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1152df9f mov edx, dword ptr [0x115551e4] */
  EDX = (r32((uint32_t)(0x115551e4)));
  /* 1152dfa5 push edx */
  push32((uint32_t)(EDX));
  /* 1152dfa6 call 0x1152fcc0 */
  push32(0x1152dfabu); f_1152fcc0();
  /* 1152dfab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dfae mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1152dfb8 jmp 0x1152dfc9 */
  goto L_1152dfc9;
L_1152dfba:;
  /* 1152dfba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152dfc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152dfc3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1152dfc9:;
  /* 1152dfc9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152dfd3 jae 0x1152e084 */
  if (!C.cf) goto L_1152e084;
  /* 1152dfd9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152dfdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152dfe1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1152dfe9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1152dfec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152dfee je 0x1152e026 */
  if (C.zf) goto L_1152e026;
  /* 1152dff0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152dff6 mov cl, byte ptr [eax + 0x115550e1] */
  CL = (r8((uint32_t)(EAX + 0x115550e1)));
  /* 1152dffc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1152dfff mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e005 mov byte ptr [edx + 0x115550e1], cl */
  w8((uint32_t)(EDX + 0x115550e1), (CL));
  /* 1152e00b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e011 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e017 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1152e01e mov byte ptr [eax + 0x11554fe0], dl */
  w8((uint32_t)(EAX + 0x11554fe0), (DL));
  /* 1152e024 jmp 0x1152e07f */
  goto L_1152e07f;
L_1152e026:;
  /* 1152e026 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e02c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152e02e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1152e036 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1152e039 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152e03b je 0x1152e072 */
  if (C.zf) goto L_1152e072;
  /* 1152e03d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e043 mov al, byte ptr [edx + 0x115550e1] */
  AL = (r8((uint32_t)(EDX + 0x115550e1)));
  /* 1152e049 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1152e04b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e051 mov byte ptr [ecx + 0x115550e1], al */
  w8((uint32_t)(ECX + 0x115550e1), (AL));
  /* 1152e057 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e05d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e063 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1152e06a mov byte ptr [edx + 0x11554fe0], cl */
  w8((uint32_t)(EDX + 0x11554fe0), (CL));
  /* 1152e070 jmp 0x1152e07f */
  goto L_1152e07f;
L_1152e072:;
  /* 1152e072 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e078 mov byte ptr [edx + 0x11554fe0], 0 */
  w8((uint32_t)(EDX + 0x11554fe0), (0x0u));
L_1152e07f:;
  /* 1152e07f jmp 0x1152dfba */
  goto L_1152dfba;
L_1152e084:;
  /* 1152e084 jmp 0x1152e14e */
  goto L_1152e14e;
L_1152e089:;
  /* 1152e089 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1152e093 jmp 0x1152e0a4 */
  goto L_1152e0a4;
L_1152e095:;
  /* 1152e095 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e09b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e09e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1152e0a4:;
  /* 1152e0a4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e0ae jae 0x1152e14e */
  if (!C.cf) goto L_1152e14e;
  /* 1152e0b4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e0bb jb 0x1152e0f8 */
  if (C.cf) goto L_1152e0f8;
  /* 1152e0bd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e0c4 ja 0x1152e0f8 */
  if ((!C.cf&&!C.zf)) goto L_1152e0f8;
  /* 1152e0c6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e0cc mov dl, byte ptr [ecx + 0x115550e1] */
  DL = (r8((uint32_t)(ECX + 0x115550e1)));
  /* 1152e0d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1152e0d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e0db mov byte ptr [eax + 0x115550e1], dl */
  w8((uint32_t)(EAX + 0x115550e1), (DL));
  /* 1152e0e1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e0e7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e0ea mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e0f0 mov byte ptr [edx + 0x11554fe0], cl */
  w8((uint32_t)(EDX + 0x11554fe0), (CL));
  /* 1152e0f6 jmp 0x1152e149 */
  goto L_1152e149;
L_1152e0f8:;
  /* 1152e0f8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e0ff jb 0x1152e13c */
  if (C.cf) goto L_1152e13c;
  /* 1152e101 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e108 ja 0x1152e13c */
  if ((!C.cf&&!C.zf)) goto L_1152e13c;
  /* 1152e10a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e110 mov cl, byte ptr [eax + 0x115550e1] */
  CL = (r8((uint32_t)(EAX + 0x115550e1)));
  /* 1152e116 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1152e119 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e11f mov byte ptr [edx + 0x115550e1], cl */
  w8((uint32_t)(EDX + 0x115550e1), (CL));
  /* 1152e125 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e12b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e12e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e134 mov byte ptr [ecx + 0x11554fe0], al */
  w8((uint32_t)(ECX + 0x11554fe0), (AL));
  /* 1152e13a jmp 0x1152e149 */
  goto L_1152e149;
L_1152e13c:;
  /* 1152e13c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1152e142 mov byte ptr [edx + 0x11554fe0], 0 */
  w8((uint32_t)(EDX + 0x11554fe0), (0x0u));
L_1152e149:;
  /* 1152e149 jmp 0x1152e095 */
  goto L_1152e095;
L_1152e14e:;
  /* 1152e14e mov esp, ebp */
  ESP = (EBP);
  /* 1152e150 pop ebp */
  EBP = (pop32());
  /* 1152e151 ret  */
  ESPCHK(0x1152de50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e160 @ 0x1152e160 (23 bytes, 9 insns) */
void f_1152e160(void) {
  FTRACE(0x1152e160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152e160 push ebp */
  push32((uint32_t)(EBP));
  /* 1152e161 mov ebp, esp */
  EBP = (ESP);
  /* 1152e163 cmp dword ptr [0x11554fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11554fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e16a je 0x1152e173 */
  if (C.zf) goto L_1152e173;
  /* 1152e16c mov eax, dword ptr [0x11554f44] */
  EAX = (r32((uint32_t)(0x11554f44)));
  /* 1152e171 jmp 0x1152e175 */
  goto L_1152e175;
L_1152e173:;
  /* 1152e173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152e175:;
  /* 1152e175 pop ebp */
  EBP = (pop32());
  /* 1152e176 ret  */
  ESPCHK(0x1152e160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e180 @ 0x1152e180 (34 bytes, 10 insns) */
void f_1152e180(void) {
  FTRACE(0x1152e180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152e180 push ebp */
  push32((uint32_t)(EBP));
  /* 1152e181 mov ebp, esp */
  EBP = (ESP);
  /* 1152e183 cmp dword ptr [0x11555390], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11555390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e18a jne 0x1152e1a0 */
  if (!C.zf) goto L_1152e1a0;
  /* 1152e18c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1152e18e call 0x1152d9a0 */
  push32(0x1152e193u); f_1152d9a0();
  /* 1152e193 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e196 mov dword ptr [0x11555390], 1 */
  w32((uint32_t)(0x11555390), (0x1u));
L_1152e1a0:;
  /* 1152e1a0 pop ebp */
  EBP = (pop32());
  /* 1152e1a1 ret  */
  ESPCHK(0x1152e180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1b0 @ 0x1152e1b0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_1152e1b0(void) {
  FTRACE(0x1152e1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152e1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152e1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1152e1b3 push edi */
  push32((uint32_t)(EDI));
  /* 1152e1b4 push esi */
  push32((uint32_t)(ESI));
  /* 1152e1b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1152e1b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152e1bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e1be mov eax, ecx */
  EAX = (ECX);
  /* 1152e1c0 mov edx, ecx */
  EDX = (ECX);
  /* 1152e1c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e1c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e1c6 jbe 0x1152e1d0 */
  if ((C.cf||C.zf)) goto L_1152e1d0;
  /* 1152e1c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e1ca jb 0x1152e348 */
  if (C.cf) goto L_1152e348;
L_1152e1d0:;
  /* 1152e1d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1152e1d6 jne 0x1152e1ec */
  if (!C.zf) goto L_1152e1ec;
  /* 1152e1d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152e1db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1152e1de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e1e1 jb 0x1152e20c */
  if (C.cf) goto L_1152e20c;
  /* 1152e1e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152e1e5 jmp dword ptr [edx*4 + 0x1152e2f8] */
  switch (EDX) {
    case 0: goto L_1152e308;
    case 1: goto L_1152e310;
    case 2: goto L_1152e31c;
    case 3: goto L_1152e330;
    default: x86_unimpl("switch@0x1152e1e5 out of table"); return;
  }
L_1152e1ec:;
  /* 1152e1ec mov eax, edi */
  EAX = (EDI);
  /* 1152e1ee mov edx, 3 */
  EDX = (0x3u);
  /* 1152e1f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e1f6 jb 0x1152e204 */
  if (C.cf) goto L_1152e204;
  /* 1152e1f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1152e1fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e1fd jmp dword ptr [eax*4 + 0x1152e210] */
  switch (EAX) {
    case 1: goto L_1152e220;
    case 2: goto L_1152e24c;
    case 3: goto L_1152e270;
    default: x86_unimpl("switch@0x1152e1fd out of table"); return;
  }
L_1152e204:;
  /* 1152e204 jmp dword ptr [ecx*4 + 0x1152e308] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1152e308)))); return;
  /* 1152e20b nop  */
  /* nop */
L_1152e20c:;
  /* 1152e20c jmp dword ptr [ecx*4 + 0x1152e28c] */
  switch (ECX) {
    case 0: goto L_1152e2ef;
    case 1: goto L_1152e2dc;
    case 2: goto L_1152e2d4;
    case 3: goto L_1152e2cc;
    case 4: goto L_1152e2c4;
    case 5: goto L_1152e2bc;
    case 6: goto L_1152e2b4;
    case 7: goto L_1152e2ac;
    default: x86_unimpl("switch@0x1152e20c out of table"); return;
  }
  /* 1152e213 nop  */
  /* nop */
L_1152e220:;
  /* 1152e220 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152e222 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152e224 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152e226 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152e229 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152e22c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152e22f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152e232 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152e235 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e238 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e23b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e23e jb 0x1152e20c */
  if (C.cf) goto L_1152e20c;
  /* 1152e240 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152e242 jmp dword ptr [edx*4 + 0x1152e2f8] */
  switch (EDX) {
    case 0: goto L_1152e308;
    case 1: goto L_1152e310;
    case 2: goto L_1152e31c;
    case 3: goto L_1152e330;
    default: x86_unimpl("switch@0x1152e242 out of table"); return;
  }
  /* 1152e249 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152e24c:;
  /* 1152e24c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152e24e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152e250 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152e252 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152e255 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152e258 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152e25b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e25e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e261 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e264 jb 0x1152e20c */
  if (C.cf) goto L_1152e20c;
  /* 1152e266 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152e268 jmp dword ptr [edx*4 + 0x1152e2f8] */
  switch (EDX) {
    case 0: goto L_1152e308;
    case 1: goto L_1152e310;
    case 2: goto L_1152e31c;
    case 3: goto L_1152e330;
    default: x86_unimpl("switch@0x1152e268 out of table"); return;
  }
  /* 1152e26f nop  */
  /* nop */
L_1152e270:;
  /* 1152e270 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152e272 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152e274 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152e276 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1152e277 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152e27a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1152e27b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e27e jb 0x1152e20c */
  if (C.cf) goto L_1152e20c;
  /* 1152e280 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152e282 jmp dword ptr [edx*4 + 0x1152e2f8] */
  switch (EDX) {
    case 0: goto L_1152e308;
    case 1: goto L_1152e310;
    case 2: goto L_1152e31c;
    case 3: goto L_1152e330;
    default: x86_unimpl("switch@0x1152e282 out of table"); return;
  }
  /* 1152e289 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152e2ac:;
  /* 1152e2ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1152e2b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1152e2b4:;
  /* 1152e2b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1152e2b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1152e2bc:;
  /* 1152e2bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1152e2c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1152e2c4:;
  /* 1152e2c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1152e2c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1152e2cc:;
  /* 1152e2cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1152e2d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1152e2d4:;
  /* 1152e2d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1152e2d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1152e2dc:;
  /* 1152e2dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1152e2e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1152e2e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1152e2eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e2ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1152e2ef:;
  /* 1152e2ef jmp dword ptr [edx*4 + 0x1152e2f8] */
  switch (EDX) {
    case 0: goto L_1152e308;
    case 1: goto L_1152e310;
    case 2: goto L_1152e31c;
    case 3: goto L_1152e330;
    default: x86_unimpl("switch@0x1152e2ef out of table"); return;
  }
  /* 1152e2f6 mov edi, edi */
  EDI = (EDI);
L_1152e308:;
  /* 1152e308 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e30b pop esi */
  ESI = (pop32());
  /* 1152e30c pop edi */
  EDI = (pop32());
  /* 1152e30d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152e30e ret  */
  ESPCHK(0x1152e1b0u, _esp0);
  ESP += 4; return;
  /* 1152e30f nop  */
  /* nop */
L_1152e310:;
  /* 1152e310 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152e312 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152e314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e317 pop esi */
  ESI = (pop32());
  /* 1152e318 pop edi */
  EDI = (pop32());
  /* 1152e319 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152e31a ret  */
  ESPCHK(0x1152e1b0u, _esp0);
  ESP += 4; return;
  /* 1152e31b nop  */
  /* nop */
L_1152e31c:;
  /* 1152e31c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152e31e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152e320 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152e323 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152e326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e329 pop esi */
  ESI = (pop32());
  /* 1152e32a pop edi */
  EDI = (pop32());
  /* 1152e32b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152e32c ret  */
  ESPCHK(0x1152e1b0u, _esp0);
  ESP += 4; return;
  /* 1152e32d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152e330:;
  /* 1152e330 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152e332 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152e334 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152e337 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152e33a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152e33d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152e340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e343 pop esi */
  ESI = (pop32());
  /* 1152e344 pop edi */
  EDI = (pop32());
  /* 1152e345 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152e346 ret  */
  ESPCHK(0x1152e1b0u, _esp0);
  ESP += 4; return;
  /* 1152e347 nop  */
  /* nop */
L_1152e348:;
  /* 1152e348 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1152e34c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1152e350 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1152e356 jne 0x1152e37c */
  if (!C.zf) goto L_1152e37c;
  /* 1152e358 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152e35b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1152e35e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e361 jb 0x1152e370 */
  if (C.cf) goto L_1152e370;
  /* 1152e363 std  */
  C.df=1;
  /* 1152e364 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152e366 cld  */
  C.df=0;
  /* 1152e367 jmp dword ptr [edx*4 + 0x1152e490] */
  switch (EDX) {
    case 0: goto L_1152e4a0;
    case 1: goto L_1152e4a8;
    case 2: goto L_1152e4b8;
    case 3: goto L_1152e4cc;
    default: x86_unimpl("switch@0x1152e367 out of table"); return;
  }
  /* 1152e36e mov edi, edi */
  EDI = (EDI);
L_1152e370:;
  /* 1152e370 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152e372 jmp dword ptr [ecx*4 + 0x1152e440] */
  switch (ECX) {
    case 0: goto L_1152e487;
    default: x86_unimpl("switch@0x1152e372 out of table"); return;
  }
  /* 1152e379 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152e37c:;
  /* 1152e37c mov eax, edi */
  EAX = (EDI);
  /* 1152e37e mov edx, 3 */
  EDX = (0x3u);
  /* 1152e383 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e386 jb 0x1152e394 */
  if (C.cf) goto L_1152e394;
  /* 1152e388 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1152e38b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e38d jmp dword ptr [eax*4 + 0x1152e398] */
  switch (EAX) {
    case 1: goto L_1152e3a8;
    case 2: goto L_1152e3c8;
    case 3: goto L_1152e3f0;
    default: x86_unimpl("switch@0x1152e38d out of table"); return;
  }
L_1152e394:;
  /* 1152e394 jmp dword ptr [ecx*4 + 0x1152e490] */
  switch (ECX) {
    case 0: goto L_1152e4a0;
    case 1: goto L_1152e4a8;
    case 2: goto L_1152e4b8;
    case 3: goto L_1152e4cc;
    default: x86_unimpl("switch@0x1152e394 out of table"); return;
  }
  /* 1152e39b nop  */
  /* nop */
L_1152e3a8:;
  /* 1152e3a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152e3ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152e3ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152e3b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1152e3b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152e3b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1152e3b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e3b8 jb 0x1152e370 */
  if (C.cf) goto L_1152e370;
  /* 1152e3ba std  */
  C.df=1;
  /* 1152e3bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152e3bd cld  */
  C.df=0;
  /* 1152e3be jmp dword ptr [edx*4 + 0x1152e490] */
  switch (EDX) {
    case 0: goto L_1152e4a0;
    case 1: goto L_1152e4a8;
    case 2: goto L_1152e4b8;
    case 3: goto L_1152e4cc;
    default: x86_unimpl("switch@0x1152e3be out of table"); return;
  }
  /* 1152e3c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152e3c8:;
  /* 1152e3c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152e3cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152e3cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152e3d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152e3d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152e3d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152e3d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e3dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e3df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e3e2 jb 0x1152e370 */
  if (C.cf) goto L_1152e370;
  /* 1152e3e4 std  */
  C.df=1;
  /* 1152e3e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152e3e7 cld  */
  C.df=0;
  /* 1152e3e8 jmp dword ptr [edx*4 + 0x1152e490] */
  switch (EDX) {
    case 0: goto L_1152e4a0;
    case 1: goto L_1152e4a8;
    case 2: goto L_1152e4b8;
    case 3: goto L_1152e4cc;
    default: x86_unimpl("switch@0x1152e3e8 out of table"); return;
  }
  /* 1152e3ef nop  */
  /* nop */
L_1152e3f0:;
  /* 1152e3f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152e3f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152e3f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152e3f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152e3fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152e3fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152e401 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152e404 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152e407 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e40a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e40d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e410 jb 0x1152e370 */
  if (C.cf) goto L_1152e370;
  /* 1152e416 std  */
  C.df=1;
  /* 1152e417 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152e419 cld  */
  C.df=0;
  /* 1152e41a jmp dword ptr [edx*4 + 0x1152e490] */
  switch (EDX) {
    case 0: goto L_1152e4a0;
    case 1: goto L_1152e4a8;
    case 2: goto L_1152e4b8;
    case 3: goto L_1152e4cc;
    default: x86_unimpl("switch@0x1152e41a out of table"); return;
  }
  /* 1152e421 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1152e424 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1152e425 in al, 0x52 */
  x86_unimpl("in @ 0x1152e425");
  /* 1152e427 adc dword ptr [esp + 0x52], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x52))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152e42b adc dword ptr [esp + 0x52], edx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x52))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152e42f adc dword ptr [esp + 0x52], ebx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x52))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152e433 adc dword ptr [esp + 0x52], esp */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x52))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESP + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152e437 adc dword ptr [esp + 0x52], ebp */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x52))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESP + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152e43b adc dword ptr [esp + 0x52], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x52))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESP + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152e444 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1152e448 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1152e44c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1152e450 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1152e454 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1152e458 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1152e45c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1152e460 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1152e464 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1152e468 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1152e46c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1152e470 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1152e474 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1152e478 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1152e47c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1152e483 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e485 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1152e487:;
  /* 1152e487 jmp dword ptr [edx*4 + 0x1152e490] */
  switch (EDX) {
    case 0: goto L_1152e4a0;
    case 1: goto L_1152e4a8;
    case 2: goto L_1152e4b8;
    case 3: goto L_1152e4cc;
    default: x86_unimpl("switch@0x1152e487 out of table"); return;
  }
  /* 1152e48e mov edi, edi */
  EDI = (EDI);
L_1152e4a0:;
  /* 1152e4a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e4a3 pop esi */
  ESI = (pop32());
  /* 1152e4a4 pop edi */
  EDI = (pop32());
  /* 1152e4a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152e4a6 ret  */
  ESPCHK(0x1152e1b0u, _esp0);
  ESP += 4; return;
  /* 1152e4a7 nop  */
  /* nop */
L_1152e4a8:;
  /* 1152e4a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152e4ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152e4ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e4b1 pop esi */
  ESI = (pop32());
  /* 1152e4b2 pop edi */
  EDI = (pop32());
  /* 1152e4b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152e4b4 ret  */
  ESPCHK(0x1152e1b0u, _esp0);
  ESP += 4; return;
  /* 1152e4b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152e4b8:;
  /* 1152e4b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152e4bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152e4be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152e4c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152e4c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e4c7 pop esi */
  ESI = (pop32());
  /* 1152e4c8 pop edi */
  EDI = (pop32());
  /* 1152e4c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152e4ca ret  */
  ESPCHK(0x1152e1b0u, _esp0);
  ESP += 4; return;
  /* 1152e4cb nop  */
  /* nop */
L_1152e4cc:;
  /* 1152e4cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152e4cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152e4d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152e4d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152e4d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152e4db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152e4de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e4e1 pop esi */
  ESI = (pop32());
  /* 1152e4e2 pop edi */
  EDI = (pop32());
  /* 1152e4e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152e4e4 ret  */
  ESPCHK(0x1152e1b0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1152e4f0 (104 bytes, 43 insns) */
void f_1152e4f0(void) {
  FTRACE(0x1152e4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152e4f0 push ebx */
  push32((uint32_t)(EBX));
  /* 1152e4f1 push esi */
  push32((uint32_t)(ESI));
  /* 1152e4f2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1152e4f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152e4f8 jne 0x1152e512 */
  if (!C.zf) goto L_1152e512;
  /* 1152e4fa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1152e4fe mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1152e502 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152e504 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1152e506 mov ebx, eax */
  EBX = (EAX);
  /* 1152e508 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1152e50c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1152e50e mov edx, ebx */
  EDX = (EBX);
  /* 1152e510 jmp 0x1152e553 */
  goto L_1152e553;
L_1152e512:;
  /* 1152e512 mov ecx, eax */
  ECX = (EAX);
  /* 1152e514 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1152e518 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1152e51c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1152e520:;
  /* 1152e520 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1152e522 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1152e524 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1152e526 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1152e528 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152e52a jne 0x1152e520 */
  if (!C.zf) goto L_1152e520;
  /* 1152e52c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1152e52e mov esi, eax */
  ESI = (EAX);
  /* 1152e530 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1152e534 mov ecx, eax */
  ECX = (EAX);
  /* 1152e536 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1152e53a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1152e53c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e53e jb 0x1152e54e */
  if (C.cf) goto L_1152e54e;
  /* 1152e540 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e544 ja 0x1152e54e */
  if ((!C.cf&&!C.zf)) goto L_1152e54e;
  /* 1152e546 jb 0x1152e54f */
  if (C.cf) goto L_1152e54f;
  /* 1152e548 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e54c jbe 0x1152e54f */
  if ((C.cf||C.zf)) goto L_1152e54f;
L_1152e54e:;
  /* 1152e54e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1152e54f:;
  /* 1152e54f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152e551 mov eax, esi */
  EAX = (ESI);
L_1152e553:;
  /* 1152e553 pop esi */
  ESI = (pop32());
  /* 1152e554 pop ebx */
  EBX = (pop32());
  /* 1152e555 ret 0x10 */
  ESPCHK(0x1152e4f0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1152e560 (117 bytes, 44 insns) */
void f_1152e560(void) {
  FTRACE(0x1152e560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152e560 push ebx */
  push32((uint32_t)(EBX));
  /* 1152e561 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1152e565 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152e567 jne 0x1152e581 */
  if (!C.zf) goto L_1152e581;
  /* 1152e569 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1152e56d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1152e571 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152e573 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1152e575 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1152e579 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1152e57b mov eax, edx */
  EAX = (EDX);
  /* 1152e57d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152e57f jmp 0x1152e5d1 */
  goto L_1152e5d1;
L_1152e581:;
  /* 1152e581 mov ecx, eax */
  ECX = (EAX);
  /* 1152e583 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1152e587 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1152e58b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1152e58f:;
  /* 1152e58f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1152e591 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1152e593 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1152e595 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1152e597 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152e599 jne 0x1152e58f */
  if (!C.zf) goto L_1152e58f;
  /* 1152e59b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1152e59d mov ecx, eax */
  ECX = (EAX);
  /* 1152e59f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1152e5a3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1152e5a4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1152e5a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e5aa jb 0x1152e5ba */
  if (C.cf) goto L_1152e5ba;
  /* 1152e5ac cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e5b0 ja 0x1152e5ba */
  if ((!C.cf&&!C.zf)) goto L_1152e5ba;
  /* 1152e5b2 jb 0x1152e5c2 */
  if (C.cf) goto L_1152e5c2;
  /* 1152e5b4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e5b8 jbe 0x1152e5c2 */
  if ((C.cf||C.zf)) goto L_1152e5c2;
L_1152e5ba:;
  /* 1152e5ba sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e5be sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1152e5c2:;
  /* 1152e5c2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e5c6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e5ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152e5cc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152e5ce sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1152e5d1:;
  /* 1152e5d1 pop ebx */
  EBX = (pop32());
  /* 1152e5d2 ret 0x10 */
  ESPCHK(0x1152e560u, _esp0);
  ESP += 20; return;
}

/* FUN_1000e5e0 @ 0x1152e5e0 (628 bytes, 214 insns) */
void f_1152e5e0(void) {
  FTRACE(0x1152e5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152e5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152e5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1152e5e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e5e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1152e5e7 push esi */
  push32((uint32_t)(ESI));
  /* 1152e5e8 push edi */
  push32((uint32_t)(EDI));
L_1152e5e9:;
  /* 1152e5e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e5ed jne 0x1152e60d */
  if (!C.zf) goto L_1152e60d;
  /* 1152e5ef push 0x1154f418 */
  push32((uint32_t)(0x1154f418u));
  /* 1152e5f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152e5f6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1152e5f8 push 0x1154f40c */
  push32((uint32_t)(0x1154f40cu));
  /* 1152e5fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1152e5ff call 0x11526990 */
  push32(0x1152e604u); f_11526990();
  /* 1152e604 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e607 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e60a jne 0x1152e60d */
  if (!C.zf) goto L_1152e60d;
  /* 1152e60c int3  */
  x86_unimpl("int3 @ 0x1152e60c");
L_1152e60d:;
  /* 1152e60d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152e60f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152e611 jne 0x1152e5e9 */
  if (!C.zf) goto L_1152e5e9;
  /* 1152e613 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152e616 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1152e619 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e61c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1152e61f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1152e622 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e625 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1152e628 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1152e62e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152e630 je 0x1152e63f */
  if (C.zf) goto L_1152e63f;
  /* 1152e632 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e635 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1152e638 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1152e63b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152e63d je 0x1152e655 */
  if (C.zf) goto L_1152e655;
L_1152e63f:;
  /* 1152e63f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e642 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1152e645 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1152e647 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e64a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1152e64d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152e650 jmp 0x1152e84d */
  goto L_1152e84d;
L_1152e655:;
  /* 1152e655 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e658 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1152e65b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1152e65e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152e660 je 0x1152e6ac */
  if (C.zf) goto L_1152e6ac;
  /* 1152e662 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e665 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1152e66c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e66f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1152e672 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1152e675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152e677 je 0x1152e695 */
  if (C.zf) goto L_1152e695;
  /* 1152e679 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e67c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e67f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1152e682 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1152e684 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e687 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1152e68a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1152e68d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e690 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1152e693 jmp 0x1152e6ac */
  goto L_1152e6ac;
L_1152e695:;
  /* 1152e695 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e698 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1152e69b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1152e69e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e6a1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1152e6a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152e6a7 jmp 0x1152e84d */
  goto L_1152e84d;
L_1152e6ac:;
  /* 1152e6ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e6af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1152e6b2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1152e6b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e6b8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1152e6bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e6be mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1152e6c1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1152e6c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e6c7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1152e6ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e6cd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1152e6d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152e6db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152e6de mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1152e6e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e6e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1152e6e7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1152e6ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152e6ef jne 0x1152e71f */
  if (!C.zf) goto L_1152e71f;
  /* 1152e6f1 cmp dword ptr [ebp - 8], 0x11552140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11552140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e6f8 je 0x1152e703 */
  if (C.zf) goto L_1152e703;
  /* 1152e6fa cmp dword ptr [ebp - 8], 0x11552160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11552160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e701 jne 0x1152e713 */
  if (!C.zf) goto L_1152e713;
L_1152e703:;
  /* 1152e703 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152e706 push edx */
  push32((uint32_t)(EDX));
  /* 1152e707 call 0x11530550 */
  push32(0x1152e70cu); f_11530550();
  /* 1152e70c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e70f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152e711 jne 0x1152e71f */
  if (!C.zf) goto L_1152e71f;
L_1152e713:;
  /* 1152e713 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e716 push eax */
  push32((uint32_t)(EAX));
  /* 1152e717 call 0x11530480 */
  push32(0x1152e71cu); f_11530480();
  /* 1152e71c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152e71f:;
  /* 1152e71f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e722 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1152e725 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1152e72b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152e72d je 0x1152e80b */
  if (C.zf) goto L_1152e80b;
L_1152e733:;
  /* 1152e733 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e736 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e739 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1152e73b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e73e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152e740 jge 0x1152e763 */
  if ((C.sf==C.of)) goto L_1152e763;
  /* 1152e742 push 0x1154f3cc */
  push32((uint32_t)(0x1154f3ccu));
  /* 1152e747 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152e749 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1152e74e push 0x1154f40c */
  push32((uint32_t)(0x1154f40cu));
  /* 1152e753 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152e755 call 0x11526990 */
  push32(0x1152e75au); f_11526990();
  /* 1152e75a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e75d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e760 jne 0x1152e763 */
  if (!C.zf) goto L_1152e763;
  /* 1152e762 int3  */
  x86_unimpl("int3 @ 0x1152e762");
L_1152e763:;
  /* 1152e763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152e765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152e767 jne 0x1152e733 */
  if (!C.zf) goto L_1152e733;
  /* 1152e769 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e76c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e76f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1152e771 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e774 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152e777 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e77a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1152e77d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e780 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e783 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1152e785 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e788 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1152e78b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e78e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e791 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1152e794 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e798 jle 0x1152e7b6 */
  if ((C.zf||C.sf!=C.of)) goto L_1152e7b6;
  /* 1152e79a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152e79d push ecx */
  push32((uint32_t)(ECX));
  /* 1152e79e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e7a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1152e7a4 push eax */
  push32((uint32_t)(EAX));
  /* 1152e7a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152e7a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1152e7a9 call 0x11530170 */
  push32(0x1152e7aeu); f_11530170();
  /* 1152e7ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e7b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152e7b4 jmp 0x1152e7fe */
  goto L_1152e7fe;
L_1152e7b6:;
  /* 1152e7b6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e7ba je 0x1152e7d9 */
  if (C.zf) goto L_1152e7d9;
  /* 1152e7bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152e7bf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1152e7c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152e7c5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1152e7c8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152e7cb mov ecx, dword ptr [edx*4 + 0x11555240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11555240)));
  /* 1152e7d2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e7d4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1152e7d7 jmp 0x1152e7e0 */
  goto L_1152e7e0;
L_1152e7d9:;
  /* 1152e7d9 mov dword ptr [ebp - 0x14], 0x11551a60 */
  w32((uint32_t)(EBP + -0x14), (0x11551a60u));
L_1152e7e0:;
  /* 1152e7e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152e7e3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1152e7e7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1152e7ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152e7ec je 0x1152e7fe */
  if (C.zf) goto L_1152e7fe;
  /* 1152e7ee push 2 */
  push32((uint32_t)(0x2u));
  /* 1152e7f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152e7f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152e7f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1152e7f6 call 0x11530020 */
  push32(0x1152e7fbu); f_11530020();
  /* 1152e7fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152e7fe:;
  /* 1152e7fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e801 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1152e804 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1152e807 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1152e809 jmp 0x1152e829 */
  goto L_1152e829;
L_1152e80b:;
  /* 1152e80b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1152e812 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152e815 push edx */
  push32((uint32_t)(EDX));
  /* 1152e816 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1152e819 push eax */
  push32((uint32_t)(EAX));
  /* 1152e81a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152e81d push ecx */
  push32((uint32_t)(ECX));
  /* 1152e81e call 0x11530170 */
  push32(0x1152e823u); f_11530170();
  /* 1152e823 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e826 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1152e829:;
  /* 1152e829 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152e82c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e82f je 0x1152e845 */
  if (C.zf) goto L_1152e845;
  /* 1152e831 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e834 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1152e837 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1152e83a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e83d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1152e840 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152e843 jmp 0x1152e84d */
  goto L_1152e84d;
L_1152e845:;
  /* 1152e845 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e848 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1152e84d:;
  /* 1152e84d pop edi */
  EDI = (pop32());
  /* 1152e84e pop esi */
  ESI = (pop32());
  /* 1152e84f pop ebx */
  EBX = (pop32());
  /* 1152e850 mov esp, ebp */
  ESP = (EBP);
  /* 1152e852 pop ebp */
  EBP = (pop32());
  /* 1152e853 ret  */
  ESPCHK(0x1152e5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e860 @ 0x1152e860 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1152e860(void) {
  FTRACE(0x1152e860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152e860 push ebp */
  push32((uint32_t)(EBP));
  /* 1152e861 mov ebp, esp */
  EBP = (ESP);
  /* 1152e863 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152e869 push ebx */
  push32((uint32_t)(EBX));
  /* 1152e86a push esi */
  push32((uint32_t)(ESI));
  /* 1152e86b push edi */
  push32((uint32_t)(EDI));
  /* 1152e86c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1152e873 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1152e87d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1152e884:;
  /* 1152e884 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152e887 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1152e889 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1152e88c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152e890 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152e893 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e896 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1152e899 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152e89b je 0x1152f477 */
  if (C.zf) goto L_1152f477;
  /* 1152e8a1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e8a8 jl 0x1152f477 */
  if ((C.sf!=C.of)) goto L_1152f477;
  /* 1152e8ae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152e8b2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e8b5 jl 0x1152e8d6 */
  if ((C.sf!=C.of)) goto L_1152e8d6;
  /* 1152e8b7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152e8bb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e8be jg 0x1152e8d6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1152e8d6;
  /* 1152e8c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152e8c4 movsx ecx, byte ptr [eax + 0x1154f404] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1154f404))));
  /* 1152e8cb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1152e8ce mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1152e8d4 jmp 0x1152e8e0 */
  goto L_1152e8e0;
L_1152e8d6:;
  /* 1152e8d6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1152e8e0:;
  /* 1152e8e0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1152e8e6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1152e8e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152e8ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152e8ef movsx edx, byte ptr [ecx + eax*8 + 0x1154f424] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1154f424))));
  /* 1152e8f7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1152e8fa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1152e8fd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152e900 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1152e906 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e90d ja 0x1152f472 */
  if ((!C.cf&&!C.zf)) goto L_1152f472;
  /* 1152e913 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1152e919 jmp dword ptr [ecx*4 + 0x1152f484] */
  switch (ECX) {
    case 0: goto L_1152e920;
    case 1: goto L_1152e9ba;
    case 2: goto L_1152e9fc;
    case 3: goto L_1152ea6b;
    case 4: goto L_1152eac3;
    case 5: goto L_1152ead2;
    case 6: goto L_1152eb1e;
    case 7: goto L_1152ebb1;
    case 8: goto L_1152ea48;
    case 9: goto L_1152ea53;
    case 10: goto L_1152ea3e;
    case 11: goto L_1152ea33;
    case 12: goto L_1152ea5e;
    case 13: goto L_1152ea66;
    default: x86_unimpl("switch@0x1152e919 out of table"); return;
  }
L_1152e920:;
  /* 1152e920 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1152e927 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152e92a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1152e930 mov eax, dword ptr [0x11551c98] */
  EAX = (r32((uint32_t)(0x11551c98)));
  /* 1152e935 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152e937 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1152e93b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1152e941 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152e943 je 0x1152e99d */
  if (C.zf) goto L_1152e99d;
  /* 1152e945 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1152e94b push edx */
  push32((uint32_t)(EDX));
  /* 1152e94c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e94f push eax */
  push32((uint32_t)(EAX));
  /* 1152e950 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152e954 push ecx */
  push32((uint32_t)(ECX));
  /* 1152e955 call 0x1152f590 */
  push32(0x1152e95au); f_1152f590();
  /* 1152e95a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e95d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152e960 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1152e962 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1152e965 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152e968 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e96b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1152e96e:;
  /* 1152e96e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152e972 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152e974 jne 0x1152e997 */
  if (!C.zf) goto L_1152e997;
  /* 1152e976 push 0x1154f4a4 */
  push32((uint32_t)(0x1154f4a4u));
  /* 1152e97b push 0 */
  push32((uint32_t)(0x0u));
  /* 1152e97d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1152e982 push 0x1154f498 */
  push32((uint32_t)(0x1154f498u));
  /* 1152e987 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152e989 call 0x11526990 */
  push32(0x1152e98eu); f_11526990();
  /* 1152e98e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e991 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152e994 jne 0x1152e997 */
  if (!C.zf) goto L_1152e997;
  /* 1152e996 int3  */
  x86_unimpl("int3 @ 0x1152e996");
L_1152e997:;
  /* 1152e997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152e999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152e99b jne 0x1152e96e */
  if (!C.zf) goto L_1152e96e;
L_1152e99d:;
  /* 1152e99d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1152e9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1152e9a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152e9a7 push edx */
  push32((uint32_t)(EDX));
  /* 1152e9a8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152e9ac push eax */
  push32((uint32_t)(EAX));
  /* 1152e9ad call 0x1152f590 */
  push32(0x1152e9b2u); f_1152f590();
  /* 1152e9b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152e9b5 jmp 0x1152f472 */
  goto L_1152f472;
L_1152e9ba:;
  /* 1152e9ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1152e9c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152e9c4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1152e9ca mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1152e9d0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1152e9d6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1152e9dc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1152e9df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152e9e6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1152e9f0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1152e9f7 jmp 0x1152f472 */
  goto L_1152f472;
L_1152e9fc:;
  /* 1152e9fc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152ea00 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1152ea06 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1152ea0c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ea0f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1152ea15 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ea1c ja 0x1152ea66 */
  if ((!C.cf&&!C.zf)) goto L_1152ea66;
  /* 1152ea1e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1152ea24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152ea26 mov al, byte ptr [ecx + 0x1152f4bc] */
  AL = (r8((uint32_t)(ECX + 0x1152f4bc)));
  /* 1152ea2c jmp dword ptr [eax*4 + 0x1152f4a4] */
  switch (EAX) {
    case 0: goto L_1152ea48;
    case 1: goto L_1152ea53;
    case 2: goto L_1152ea3e;
    case 3: goto L_1152ea33;
    case 4: goto L_1152ea5e;
    case 5: goto L_1152ea66;
    default: x86_unimpl("switch@0x1152ea2c out of table"); return;
  }
L_1152ea33:;
  /* 1152ea33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ea36 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1152ea39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152ea3c jmp 0x1152ea66 */
  goto L_1152ea66;
L_1152ea3e:;
  /* 1152ea3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ea41 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1152ea43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152ea46 jmp 0x1152ea66 */
  goto L_1152ea66;
L_1152ea48:;
  /* 1152ea48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ea4b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1152ea4e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152ea51 jmp 0x1152ea66 */
  goto L_1152ea66;
L_1152ea53:;
  /* 1152ea53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ea56 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1152ea59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152ea5c jmp 0x1152ea66 */
  goto L_1152ea66;
L_1152ea5e:;
  /* 1152ea5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ea61 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1152ea63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152ea66:;
  /* 1152ea66 jmp 0x1152f472 */
  goto L_1152f472;
L_1152ea6b:;
  /* 1152ea6b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152ea6f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ea72 jne 0x1152eaa7 */
  if (!C.zf) goto L_1152eaa7;
  /* 1152ea74 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1152ea77 push edx */
  push32((uint32_t)(EDX));
  /* 1152ea78 call 0x1152f6a0 */
  push32(0x1152ea7du); f_1152f6a0();
  /* 1152ea7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ea80 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1152ea86 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ea8d jge 0x1152eaa5 */
  if ((C.sf==C.of)) goto L_1152eaa5;
  /* 1152ea8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ea92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1152ea94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152ea97 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1152ea9d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152ea9f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1152eaa5:;
  /* 1152eaa5 jmp 0x1152eabe */
  goto L_1152eabe;
L_1152eaa7:;
  /* 1152eaa7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1152eaad imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152eab0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152eab4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1152eab8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1152eabe:;
  /* 1152eabe jmp 0x1152f472 */
  goto L_1152f472;
L_1152eac3:;
  /* 1152eac3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1152eacd jmp 0x1152f472 */
  goto L_1152f472;
L_1152ead2:;
  /* 1152ead2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152ead6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ead9 jne 0x1152eb02 */
  if (!C.zf) goto L_1152eb02;
  /* 1152eadb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1152eade push eax */
  push32((uint32_t)(EAX));
  /* 1152eadf call 0x1152f6a0 */
  push32(0x1152eae4u); f_1152f6a0();
  /* 1152eae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152eae7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1152eaed cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152eaf4 jge 0x1152eb00 */
  if ((C.sf==C.of)) goto L_1152eb00;
  /* 1152eaf6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1152eb00:;
  /* 1152eb00 jmp 0x1152eb19 */
  goto L_1152eb19;
L_1152eb02:;
  /* 1152eb02 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1152eb08 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152eb0b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152eb0f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1152eb13 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1152eb19:;
  /* 1152eb19 jmp 0x1152f472 */
  goto L_1152f472;
L_1152eb1e:;
  /* 1152eb1e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152eb22 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1152eb28 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1152eb2e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152eb31 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1152eb37 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152eb3e ja 0x1152ebac */
  if ((!C.cf&&!C.zf)) goto L_1152ebac;
  /* 1152eb40 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1152eb46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152eb48 mov al, byte ptr [ecx + 0x1152f4e1] */
  AL = (r8((uint32_t)(ECX + 0x1152f4e1)));
  /* 1152eb4e jmp dword ptr [eax*4 + 0x1152f4cd] */
  switch (EAX) {
    case 0: goto L_1152eb60;
    case 1: goto L_1152eb99;
    case 2: goto L_1152eb55;
    case 3: goto L_1152eba3;
    case 4: goto L_1152ebac;
    default: x86_unimpl("switch@0x1152eb4e out of table"); return;
  }
L_1152eb55:;
  /* 1152eb55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152eb58 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1152eb5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152eb5e jmp 0x1152ebac */
  goto L_1152ebac;
L_1152eb60:;
  /* 1152eb60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152eb63 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1152eb66 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152eb69 jne 0x1152eb8b */
  if (!C.zf) goto L_1152eb8b;
  /* 1152eb6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152eb6e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1152eb72 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152eb75 jne 0x1152eb8b */
  if (!C.zf) goto L_1152eb8b;
  /* 1152eb77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152eb7a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152eb7d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1152eb80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152eb83 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1152eb86 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152eb89 jmp 0x1152eb97 */
  goto L_1152eb97;
L_1152eb8b:;
  /* 1152eb8b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1152eb92 jmp 0x1152e920 */
  goto L_1152e920;
L_1152eb97:;
  /* 1152eb97 jmp 0x1152ebac */
  goto L_1152ebac;
L_1152eb99:;
  /* 1152eb99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152eb9c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1152eb9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152eba1 jmp 0x1152ebac */
  goto L_1152ebac;
L_1152eba3:;
  /* 1152eba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152eba6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1152eba9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1152ebac:;
  /* 1152ebac jmp 0x1152f472 */
  goto L_1152f472;
L_1152ebb1:;
  /* 1152ebb1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152ebb5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1152ebbb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1152ebc1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ebc4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1152ebca cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ebd1 ja 0x1152f297 */
  if ((!C.cf&&!C.zf)) goto L_1152f297;
  /* 1152ebd7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1152ebdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152ebdf mov cl, byte ptr [edx + 0x1152f54c] */
  CL = (r8((uint32_t)(EDX + 0x1152f54c)));
  /* 1152ebe5 jmp dword ptr [ecx*4 + 0x1152f510] */
  switch (ECX) {
    case 0: goto L_1152ebec;
    case 1: goto L_1152ee80;
    case 2: goto L_1152ed10;
    case 3: goto L_1152efb9;
    case 4: goto L_1152ec7b;
    case 5: goto L_1152ec01;
    case 6: goto L_1152ef8b;
    case 7: goto L_1152ee90;
    case 8: goto L_1152ee35;
    case 9: goto L_1152f005;
    case 10: goto L_1152efaf;
    case 11: goto L_1152ed26;
    case 12: goto L_1152efa3;
    case 13: goto L_1152efc5;
    case 14: goto L_1152f297;
    default: x86_unimpl("switch@0x1152ebe5 out of table"); return;
  }
L_1152ebec:;
  /* 1152ebec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ebef and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1152ebf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152ebf6 jne 0x1152ec01 */
  if (!C.zf) goto L_1152ec01;
  /* 1152ebf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ebfb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1152ebfe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1152ec01:;
  /* 1152ec01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ec04 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1152ec0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152ec0c je 0x1152ec47 */
  if (C.zf) goto L_1152ec47;
  /* 1152ec0e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1152ec11 push eax */
  push32((uint32_t)(EAX));
  /* 1152ec12 call 0x1152f6e0 */
  push32(0x1152ec17u); f_1152f6e0();
  /* 1152ec17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ec1a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1152ec1e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1152ec22 push ecx */
  push32((uint32_t)(ECX));
  /* 1152ec23 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1152ec29 push edx */
  push32((uint32_t)(EDX));
  /* 1152ec2a call 0x115307c0 */
  push32(0x1152ec2fu); f_115307c0();
  /* 1152ec2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ec32 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1152ec35 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ec39 jge 0x1152ec45 */
  if ((C.sf==C.of)) goto L_1152ec45;
  /* 1152ec3b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1152ec45:;
  /* 1152ec45 jmp 0x1152ec6d */
  goto L_1152ec6d;
L_1152ec47:;
  /* 1152ec47 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1152ec4a push eax */
  push32((uint32_t)(EAX));
  /* 1152ec4b call 0x1152f6a0 */
  push32(0x1152ec50u); f_1152f6a0();
  /* 1152ec50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ec53 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1152ec5a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1152ec60 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1152ec66 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1152ec6d:;
  /* 1152ec6d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1152ec73 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1152ec76 jmp 0x1152f297 */
  goto L_1152f297;
L_1152ec7b:;
  /* 1152ec7b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1152ec7e push eax */
  push32((uint32_t)(EAX));
  /* 1152ec7f call 0x1152f6a0 */
  push32(0x1152ec84u); f_1152f6a0();
  /* 1152ec84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ec87 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1152ec8d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ec94 je 0x1152eca2 */
  if (C.zf) goto L_1152eca2;
  /* 1152ec96 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1152ec9c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152eca0 jne 0x1152ecbc */
  if (!C.zf) goto L_1152ecbc;
L_1152eca2:;
  /* 1152eca2 mov edx, dword ptr [0x11551fb0] */
  EDX = (r32((uint32_t)(0x11551fb0)));
  /* 1152eca8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1152ecab mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ecae push eax */
  push32((uint32_t)(EAX));
  /* 1152ecaf call 0x1152a700 */
  push32(0x1152ecb4u); f_1152a700();
  /* 1152ecb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ecb7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1152ecba jmp 0x1152ed0b */
  goto L_1152ed0b;
L_1152ecbc:;
  /* 1152ecbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ecbf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1152ecc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152ecc7 je 0x1152ecec */
  if (C.zf) goto L_1152ecec;
  /* 1152ecc9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1152eccf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152ecd2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1152ecd5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1152ecdb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1152ecde shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1152ece0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1152ece3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1152ecea jmp 0x1152ed0b */
  goto L_1152ed0b;
L_1152ecec:;
  /* 1152ecec mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1152ecf3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1152ecf9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152ecfc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1152ecff mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1152ed05 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1152ed08 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1152ed0b:;
  /* 1152ed0b jmp 0x1152f297 */
  goto L_1152f297;
L_1152ed10:;
  /* 1152ed10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ed13 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1152ed19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152ed1b jne 0x1152ed26 */
  if (!C.zf) goto L_1152ed26;
  /* 1152ed1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ed20 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1152ed23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1152ed26:;
  /* 1152ed26 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ed2d jne 0x1152ed3b */
  if (!C.zf) goto L_1152ed3b;
  /* 1152ed2f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1152ed39 jmp 0x1152ed47 */
  goto L_1152ed47;
L_1152ed3b:;
  /* 1152ed3b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1152ed41 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1152ed47:;
  /* 1152ed47 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1152ed4d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1152ed53 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1152ed56 push edx */
  push32((uint32_t)(EDX));
  /* 1152ed57 call 0x1152f6a0 */
  push32(0x1152ed5cu); f_1152f6a0();
  /* 1152ed5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ed5f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1152ed62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ed65 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1152ed6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152ed6c je 0x1152edd6 */
  if (C.zf) goto L_1152edd6;
  /* 1152ed6e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ed72 jne 0x1152ed7d */
  if (!C.zf) goto L_1152ed7d;
  /* 1152ed74 mov ecx, dword ptr [0x11551fb4] */
  ECX = (r32((uint32_t)(0x11551fb4)));
  /* 1152ed7a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1152ed7d:;
  /* 1152ed7d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1152ed84 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ed87 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1152ed8d:;
  /* 1152ed8d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1152ed93 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1152ed99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ed9c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1152eda2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152eda4 je 0x1152edc6 */
  if (C.zf) goto L_1152edc6;
  /* 1152eda6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1152edac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152edae mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1152edb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152edb3 je 0x1152edc6 */
  if (C.zf) goto L_1152edc6;
  /* 1152edb5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1152edbb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152edbe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1152edc4 jmp 0x1152ed8d */
  goto L_1152ed8d;
L_1152edc6:;
  /* 1152edc6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1152edcc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152edcf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1152edd1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1152edd4 jmp 0x1152ee30 */
  goto L_1152ee30;
L_1152edd6:;
  /* 1152edd6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152edda jne 0x1152ede4 */
  if (!C.zf) goto L_1152ede4;
  /* 1152eddc mov eax, dword ptr [0x11551fb0] */
  EAX = (r32((uint32_t)(0x11551fb0)));
  /* 1152ede1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1152ede4:;
  /* 1152ede4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ede7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1152eded:;
  /* 1152eded mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1152edf3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1152edf9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152edfc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1152ee02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152ee04 je 0x1152ee24 */
  if (C.zf) goto L_1152ee24;
  /* 1152ee06 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1152ee0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1152ee0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152ee11 je 0x1152ee24 */
  if (C.zf) goto L_1152ee24;
  /* 1152ee13 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1152ee19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ee1c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1152ee22 jmp 0x1152eded */
  goto L_1152eded;
L_1152ee24:;
  /* 1152ee24 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1152ee2a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ee2d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1152ee30:;
  /* 1152ee30 jmp 0x1152f297 */
  goto L_1152f297;
L_1152ee35:;
  /* 1152ee35 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1152ee38 push edx */
  push32((uint32_t)(EDX));
  /* 1152ee39 call 0x1152f6a0 */
  push32(0x1152ee3eu); f_1152f6a0();
  /* 1152ee3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ee41 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1152ee47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ee4a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1152ee4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152ee4f je 0x1152ee63 */
  if (C.zf) goto L_1152ee63;
  /* 1152ee51 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1152ee57 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1152ee5e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1152ee61 jmp 0x1152ee71 */
  goto L_1152ee71;
L_1152ee63:;
  /* 1152ee63 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1152ee69 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1152ee6f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1152ee71:;
  /* 1152ee71 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1152ee7b jmp 0x1152f297 */
  goto L_1152f297;
L_1152ee80:;
  /* 1152ee80 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1152ee87 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1152ee8a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1152ee8d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1152ee90:;
  /* 1152ee90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ee93 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1152ee95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152ee98 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1152ee9e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1152eea1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152eea8 jge 0x1152eeb6 */
  if ((C.sf==C.of)) goto L_1152eeb6;
  /* 1152eeaa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1152eeb4 jmp 0x1152eed2 */
  goto L_1152eed2;
L_1152eeb6:;
  /* 1152eeb6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152eebd jne 0x1152eed2 */
  if (!C.zf) goto L_1152eed2;
  /* 1152eebf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152eec3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152eec6 jne 0x1152eed2 */
  if (!C.zf) goto L_1152eed2;
  /* 1152eec8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1152eed2:;
  /* 1152eed2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152eed5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152eed8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1152eedb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152eede sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152eee1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152eee3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152eee6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1152eeec mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1152eef2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152eef5 push ecx */
  push32((uint32_t)(ECX));
  /* 1152eef6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1152eefc push edx */
  push32((uint32_t)(EDX));
  /* 1152eefd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152ef01 push eax */
  push32((uint32_t)(EAX));
  /* 1152ef02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ef05 push ecx */
  push32((uint32_t)(ECX));
  /* 1152ef06 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1152ef0c push edx */
  push32((uint32_t)(EDX));
  /* 1152ef0d call dword ptr [0x115523a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115523a0))), 0x1152ef13u);
  /* 1152ef13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ef16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ef19 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1152ef1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152ef20 je 0x1152ef38 */
  if (C.zf) goto L_1152ef38;
  /* 1152ef22 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ef29 jne 0x1152ef38 */
  if (!C.zf) goto L_1152ef38;
  /* 1152ef2b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ef2e push ecx */
  push32((uint32_t)(ECX));
  /* 1152ef2f call dword ptr [0x115523ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115523ac))), 0x1152ef35u);
  /* 1152ef35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152ef38:;
  /* 1152ef38 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1152ef3c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ef3f jne 0x1152ef5a */
  if (!C.zf) goto L_1152ef5a;
  /* 1152ef41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ef44 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1152ef49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152ef4b jne 0x1152ef5a */
  if (!C.zf) goto L_1152ef5a;
  /* 1152ef4d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ef50 push ecx */
  push32((uint32_t)(ECX));
  /* 1152ef51 call dword ptr [0x115523a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115523a4))), 0x1152ef57u);
  /* 1152ef57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152ef5a:;
  /* 1152ef5a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ef5d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1152ef60 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ef63 jne 0x1152ef77 */
  if (!C.zf) goto L_1152ef77;
  /* 1152ef65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ef68 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1152ef6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152ef6e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ef71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ef74 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1152ef77:;
  /* 1152ef77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ef7a push eax */
  push32((uint32_t)(EAX));
  /* 1152ef7b call 0x1152a700 */
  push32(0x1152ef80u); f_1152a700();
  /* 1152ef80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ef83 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1152ef86 jmp 0x1152f297 */
  goto L_1152f297;
L_1152ef8b:;
  /* 1152ef8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ef8e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1152ef91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152ef94 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1152ef9e jmp 0x1152f025 */
  goto L_1152f025;
L_1152efa3:;
  /* 1152efa3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1152efad jmp 0x1152f025 */
  goto L_1152f025;
L_1152efaf:;
  /* 1152efaf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1152efb9:;
  /* 1152efb9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1152efc3 jmp 0x1152efcf */
  goto L_1152efcf;
L_1152efc5:;
  /* 1152efc5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1152efcf:;
  /* 1152efcf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1152efd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152efdc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1152efe2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152efe4 je 0x1152f003 */
  if (C.zf) goto L_1152f003;
  /* 1152efe6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1152efed mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1152eff3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152eff6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1152effc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1152f003:;
  /* 1152f003 jmp 0x1152f025 */
  goto L_1152f025;
L_1152f005:;
  /* 1152f005 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1152f00f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f012 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1152f018 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152f01a je 0x1152f025 */
  if (C.zf) goto L_1152f025;
  /* 1152f01c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f01f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1152f022 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1152f025:;
  /* 1152f025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f028 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1152f02d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152f02f je 0x1152f04e */
  if (C.zf) goto L_1152f04e;
  /* 1152f031 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1152f034 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f035 call 0x1152f6c0 */
  push32(0x1152f03au); f_1152f6c0();
  /* 1152f03a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f03d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1152f043 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1152f049 jmp 0x1152f0df */
  goto L_1152f0df;
L_1152f04e:;
  /* 1152f04e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f051 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1152f054 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152f056 je 0x1152f0a0 */
  if (C.zf) goto L_1152f0a0;
  /* 1152f058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f05b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1152f05e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152f060 je 0x1152f080 */
  if (C.zf) goto L_1152f080;
  /* 1152f062 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1152f065 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f066 call 0x1152f6a0 */
  push32(0x1152f06bu); f_1152f6a0();
  /* 1152f06b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f06e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1152f071 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1152f072 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1152f078 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1152f07e jmp 0x1152f09e */
  goto L_1152f09e;
L_1152f080:;
  /* 1152f080 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1152f083 push edx */
  push32((uint32_t)(EDX));
  /* 1152f084 call 0x1152f6a0 */
  push32(0x1152f089u); f_1152f6a0();
  /* 1152f089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f08c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152f091 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1152f092 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1152f098 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1152f09e:;
  /* 1152f09e jmp 0x1152f0df */
  goto L_1152f0df;
L_1152f0a0:;
  /* 1152f0a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f0a3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1152f0a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152f0a8 je 0x1152f0c5 */
  if (C.zf) goto L_1152f0c5;
  /* 1152f0aa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1152f0ad push ecx */
  push32((uint32_t)(ECX));
  /* 1152f0ae call 0x1152f6a0 */
  push32(0x1152f0b3u); f_1152f6a0();
  /* 1152f0b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f0b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1152f0b7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1152f0bd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1152f0c3 jmp 0x1152f0df */
  goto L_1152f0df;
L_1152f0c5:;
  /* 1152f0c5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1152f0c8 push edx */
  push32((uint32_t)(EDX));
  /* 1152f0c9 call 0x1152f6a0 */
  push32(0x1152f0ceu); f_1152f6a0();
  /* 1152f0ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f0d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152f0d3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1152f0d9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1152f0df:;
  /* 1152f0df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f0e2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1152f0e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152f0e7 je 0x1152f127 */
  if (C.zf) goto L_1152f127;
  /* 1152f0e9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f0f0 jg 0x1152f127 */
  if ((!C.zf&&C.sf==C.of)) goto L_1152f127;
  /* 1152f0f2 jl 0x1152f0fd */
  if ((C.sf!=C.of)) goto L_1152f0fd;
  /* 1152f0f4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f0fb jae 0x1152f127 */
  if (!C.cf) goto L_1152f127;
L_1152f0fd:;
  /* 1152f0fd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1152f103 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152f105 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1152f10b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f10e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152f110 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1152f116 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1152f11c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f11f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1152f122 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152f125 jmp 0x1152f13f */
  goto L_1152f13f;
L_1152f127:;
  /* 1152f127 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1152f12d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1152f133 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1152f139 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1152f13f:;
  /* 1152f13f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f142 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1152f148 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152f14a jne 0x1152f167 */
  if (!C.zf) goto L_1152f167;
  /* 1152f14c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1152f152 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1152f158 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1152f15b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1152f161 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1152f167:;
  /* 1152f167 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f16e jge 0x1152f17c */
  if ((C.sf==C.of)) goto L_1152f17c;
  /* 1152f170 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1152f17a jmp 0x1152f185 */
  goto L_1152f185;
L_1152f17c:;
  /* 1152f17c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f17f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1152f182 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1152f185:;
  /* 1152f185 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1152f18b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1152f191 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152f193 jne 0x1152f19c */
  if (!C.zf) goto L_1152f19c;
  /* 1152f195 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1152f19c:;
  /* 1152f19c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1152f19f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1152f1a2:;
  /* 1152f1a2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1152f1a8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1152f1ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f1b1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1152f1b7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152f1b9 jg 0x1152f1cf */
  if ((!C.zf&&C.sf==C.of)) goto L_1152f1cf;
  /* 1152f1bb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1152f1c1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1152f1c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152f1c9 je 0x1152f250 */
  if (C.zf) goto L_1152f250;
L_1152f1cf:;
  /* 1152f1cf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1152f1d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1152f1d6 push edx */
  push32((uint32_t)(EDX));
  /* 1152f1d7 push eax */
  push32((uint32_t)(EAX));
  /* 1152f1d8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1152f1de push edx */
  push32((uint32_t)(EDX));
  /* 1152f1df mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1152f1e5 push eax */
  push32((uint32_t)(EAX));
  /* 1152f1e6 call 0x1152e560 */
  push32(0x1152f1ebu); f_1152e560();
  /* 1152f1eb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f1ee mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1152f1f4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1152f1fa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1152f1fb push edx */
  push32((uint32_t)(EDX));
  /* 1152f1fc push eax */
  push32((uint32_t)(EAX));
  /* 1152f1fd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1152f203 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f204 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1152f20a push edx */
  push32((uint32_t)(EDX));
  /* 1152f20b call 0x1152e4f0 */
  push32(0x1152f210u); f_1152e4f0();
  /* 1152f210 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1152f216 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1152f21c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f223 jle 0x1152f237 */
  if ((C.zf||C.sf!=C.of)) goto L_1152f237;
  /* 1152f225 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1152f22b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f231 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1152f237:;
  /* 1152f237 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152f23a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1152f240 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1152f242 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152f245 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f248 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1152f24b jmp 0x1152f1a2 */
  goto L_1152f1a2;
L_1152f250:;
  /* 1152f250 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1152f253 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f256 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1152f259 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152f25c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f25f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1152f262 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f265 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1152f26a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152f26c je 0x1152f297 */
  if (C.zf) goto L_1152f297;
  /* 1152f26e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152f271 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1152f274 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f277 jne 0x1152f27f */
  if (!C.zf) goto L_1152f27f;
  /* 1152f279 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f27d jne 0x1152f297 */
  if (!C.zf) goto L_1152f297;
L_1152f27f:;
  /* 1152f27f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152f282 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f285 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1152f288 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152f28b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1152f28e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152f291 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f294 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1152f297:;
  /* 1152f297 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f29e jne 0x1152f472 */
  if (!C.zf) goto L_1152f472;
  /* 1152f2a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f2a7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1152f2aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152f2ac je 0x1152f2fd */
  if (C.zf) goto L_1152f2fd;
  /* 1152f2ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f2b1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1152f2b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152f2b9 je 0x1152f2cb */
  if (C.zf) goto L_1152f2cb;
  /* 1152f2bb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1152f2c2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1152f2c9 jmp 0x1152f2fd */
  goto L_1152f2fd;
L_1152f2cb:;
  /* 1152f2cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f2ce and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1152f2d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152f2d3 je 0x1152f2e5 */
  if (C.zf) goto L_1152f2e5;
  /* 1152f2d5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1152f2dc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1152f2e3 jmp 0x1152f2fd */
  goto L_1152f2fd;
L_1152f2e5:;
  /* 1152f2e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f2e8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1152f2eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152f2ed je 0x1152f2fd */
  if (C.zf) goto L_1152f2fd;
  /* 1152f2ef mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1152f2f6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1152f2fd:;
  /* 1152f2fd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1152f303 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f306 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f309 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1152f30f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f312 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1152f315 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152f317 jne 0x1152f335 */
  if (!C.zf) goto L_1152f335;
  /* 1152f319 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1152f31f push eax */
  push32((uint32_t)(EAX));
  /* 1152f320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f323 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f324 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1152f32a push edx */
  push32((uint32_t)(EDX));
  /* 1152f32b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1152f32d call 0x1152f610 */
  push32(0x1152f332u); f_1152f610();
  /* 1152f332 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152f335:;
  /* 1152f335 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1152f33b push eax */
  push32((uint32_t)(EAX));
  /* 1152f33c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f33f push ecx */
  push32((uint32_t)(ECX));
  /* 1152f340 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152f343 push edx */
  push32((uint32_t)(EDX));
  /* 1152f344 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1152f34a push eax */
  push32((uint32_t)(EAX));
  /* 1152f34b call 0x1152f650 */
  push32(0x1152f350u); f_1152f650();
  /* 1152f350 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f353 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f356 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1152f359 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152f35b je 0x1152f383 */
  if (C.zf) goto L_1152f383;
  /* 1152f35d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f360 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1152f363 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152f365 jne 0x1152f383 */
  if (!C.zf) goto L_1152f383;
  /* 1152f367 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1152f36d push eax */
  push32((uint32_t)(EAX));
  /* 1152f36e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f371 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f372 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1152f378 push edx */
  push32((uint32_t)(EDX));
  /* 1152f379 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1152f37b call 0x1152f610 */
  push32(0x1152f380u); f_1152f610();
  /* 1152f380 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152f383:;
  /* 1152f383 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f387 je 0x1152f431 */
  if (C.zf) goto L_1152f431;
  /* 1152f38d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f391 jle 0x1152f431 */
  if ((C.zf||C.sf!=C.of)) goto L_1152f431;
  /* 1152f397 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152f39a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1152f3a0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152f3a3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1152f3a9:;
  /* 1152f3a9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1152f3af mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1152f3b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f3b8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1152f3be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152f3c0 je 0x1152f42f */
  if (C.zf) goto L_1152f42f;
  /* 1152f3c2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1152f3c8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1152f3cb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1152f3d2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1152f3d9 push eax */
  push32((uint32_t)(EAX));
  /* 1152f3da lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1152f3e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f3e1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1152f3e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f3ea mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1152f3f0 call 0x115307c0 */
  push32(0x1152f3f5u); f_115307c0();
  /* 1152f3f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f3f8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1152f3fe cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f405 jg 0x1152f409 */
  if ((!C.zf&&C.sf==C.of)) goto L_1152f409;
  /* 1152f407 jmp 0x1152f42f */
  goto L_1152f42f;
L_1152f409:;
  /* 1152f409 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1152f40f push eax */
  push32((uint32_t)(EAX));
  /* 1152f410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f413 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f414 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1152f41a push edx */
  push32((uint32_t)(EDX));
  /* 1152f41b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1152f421 push eax */
  push32((uint32_t)(EAX));
  /* 1152f422 call 0x1152f650 */
  push32(0x1152f427u); f_1152f650();
  /* 1152f427 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f42a jmp 0x1152f3a9 */
  goto L_1152f3a9;
L_1152f42f:;
  /* 1152f42f jmp 0x1152f44c */
  goto L_1152f44c;
L_1152f431:;
  /* 1152f431 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1152f437 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f438 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f43b push edx */
  push32((uint32_t)(EDX));
  /* 1152f43c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152f43f push eax */
  push32((uint32_t)(EAX));
  /* 1152f440 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152f443 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f444 call 0x1152f650 */
  push32(0x1152f449u); f_1152f650();
  /* 1152f449 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152f44c:;
  /* 1152f44c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f44f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1152f452 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152f454 je 0x1152f472 */
  if (C.zf) goto L_1152f472;
  /* 1152f456 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1152f45c push eax */
  push32((uint32_t)(EAX));
  /* 1152f45d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f460 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f461 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1152f467 push edx */
  push32((uint32_t)(EDX));
  /* 1152f468 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1152f46a call 0x1152f610 */
  push32(0x1152f46fu); f_1152f610();
  /* 1152f46f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152f472:;
  /* 1152f472 jmp 0x1152e884 */
  goto L_1152e884;
L_1152f477:;
  /* 1152f477 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1152f47d pop edi */
  EDI = (pop32());
  /* 1152f47e pop esi */
  ESI = (pop32());
  /* 1152f47f pop ebx */
  EBX = (pop32());
  /* 1152f480 mov esp, ebp */
  ESP = (EBP);
  /* 1152f482 pop ebp */
  EBP = (pop32());
  /* 1152f483 ret  */
  ESPCHK(0x1152e860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f590 @ 0x1152f590 (119 bytes, 44 insns) */
void f_1152f590(void) {
  FTRACE(0x1152f590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152f590 push ebp */
  push32((uint32_t)(EBP));
  /* 1152f591 mov ebp, esp */
  EBP = (ESP);
  /* 1152f593 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f594 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f597 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152f59a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f59d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f5a0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1152f5a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f5a6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f5aa jl 0x1152f5d2 */
  if ((C.sf!=C.of)) goto L_1152f5d2;
  /* 1152f5ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f5af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152f5b1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1152f5b4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1152f5b6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1152f5ba and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152f5c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152f5c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f5c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152f5c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f5cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f5ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1152f5d0 jmp 0x1152f5e5 */
  goto L_1152f5e5;
L_1152f5d2:;
  /* 1152f5d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f5d5 push edx */
  push32((uint32_t)(EDX));
  /* 1152f5d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f5d9 push eax */
  push32((uint32_t)(EAX));
  /* 1152f5da call 0x1152e5e0 */
  push32(0x1152f5dfu); f_1152e5e0();
  /* 1152f5df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f5e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152f5e5:;
  /* 1152f5e5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f5e9 jne 0x1152f5f6 */
  if (!C.zf) goto L_1152f5f6;
  /* 1152f5eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152f5ee mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1152f5f4 jmp 0x1152f603 */
  goto L_1152f603;
L_1152f5f6:;
  /* 1152f5f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152f5f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152f5fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f5fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152f601 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1152f603:;
  /* 1152f603 mov esp, ebp */
  ESP = (EBP);
  /* 1152f605 pop ebp */
  EBP = (pop32());
  /* 1152f606 ret  */
  ESPCHK(0x1152f590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f610 @ 0x1152f610 (53 bytes, 23 insns) */
void f_1152f610(void) {
  FTRACE(0x1152f610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152f610 push ebp */
  push32((uint32_t)(EBP));
  /* 1152f611 mov ebp, esp */
  EBP = (ESP);
L_1152f613:;
  /* 1152f613 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f616 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f619 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f61c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1152f61f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152f621 jle 0x1152f643 */
  if ((C.zf||C.sf!=C.of)) goto L_1152f643;
  /* 1152f623 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152f626 push edx */
  push32((uint32_t)(EDX));
  /* 1152f627 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152f62a push eax */
  push32((uint32_t)(EAX));
  /* 1152f62b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f62e push ecx */
  push32((uint32_t)(ECX));
  /* 1152f62f call 0x1152f590 */
  push32(0x1152f634u); f_1152f590();
  /* 1152f634 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f637 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152f63a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f63d jne 0x1152f641 */
  if (!C.zf) goto L_1152f641;
  /* 1152f63f jmp 0x1152f643 */
  goto L_1152f643;
L_1152f641:;
  /* 1152f641 jmp 0x1152f613 */
  goto L_1152f613;
L_1152f643:;
  /* 1152f643 pop ebp */
  EBP = (pop32());
  /* 1152f644 ret  */
  ESPCHK(0x1152f610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f650 @ 0x1152f650 (74 bytes, 31 insns) */
void f_1152f650(void) {
  FTRACE(0x1152f650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152f650 push ebp */
  push32((uint32_t)(EBP));
  /* 1152f651 mov ebp, esp */
  EBP = (ESP);
  /* 1152f653 push ecx */
  push32((uint32_t)(ECX));
L_1152f654:;
  /* 1152f654 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f657 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f65a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f65d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1152f660 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152f662 jle 0x1152f696 */
  if ((C.zf||C.sf!=C.of)) goto L_1152f696;
  /* 1152f664 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152f667 push edx */
  push32((uint32_t)(EDX));
  /* 1152f668 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152f66b push eax */
  push32((uint32_t)(EAX));
  /* 1152f66c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f66f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1152f672 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152f675 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f678 push eax */
  push32((uint32_t)(EAX));
  /* 1152f679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f67c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f67f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1152f682 call 0x1152f590 */
  push32(0x1152f687u); f_1152f590();
  /* 1152f687 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f68a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152f68d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f690 jne 0x1152f694 */
  if (!C.zf) goto L_1152f694;
  /* 1152f692 jmp 0x1152f696 */
  goto L_1152f696;
L_1152f694:;
  /* 1152f694 jmp 0x1152f654 */
  goto L_1152f654;
L_1152f696:;
  /* 1152f696 mov esp, ebp */
  ESP = (EBP);
  /* 1152f698 pop ebp */
  EBP = (pop32());
  /* 1152f699 ret  */
  ESPCHK(0x1152f650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6a0 @ 0x1152f6a0 (26 bytes, 12 insns) */
void f_1152f6a0(void) {
  FTRACE(0x1152f6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152f6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152f6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1152f6a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f6a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152f6a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f6ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f6ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1152f6b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f6b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152f6b5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1152f6b8 pop ebp */
  EBP = (pop32());
  /* 1152f6b9 ret  */
  ESPCHK(0x1152f6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6c0 @ 0x1152f6c0 (31 bytes, 14 insns) */
void f_1152f6c0(void) {
  FTRACE(0x1152f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1152f6c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f6c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152f6c8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f6cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f6ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1152f6d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f6d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152f6d5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f6d8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1152f6da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152f6dd pop ebp */
  EBP = (pop32());
  /* 1152f6de ret  */
  ESPCHK(0x1152f6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6e0 @ 0x1152f6e0 (27 bytes, 12 insns) */
void f_1152f6e0(void) {
  FTRACE(0x1152f6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152f6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152f6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1152f6e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f6e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152f6e8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f6eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f6ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1152f6f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f6f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152f6f5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1152f6f9 pop ebp */
  EBP = (pop32());
  /* 1152f6fa ret  */
  ESPCHK(0x1152f6e0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1152f700 (145 bytes, 42 insns) */
void f_1152f700(void) {
  FTRACE(0x1152f700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152f700 push ebp */
  push32((uint32_t)(EBP));
  /* 1152f701 mov ebp, esp */
  EBP = (ESP);
  /* 1152f703 push ecx */
  push32((uint32_t)(ECX));
  /* 1152f704 call 0x1152f7b0 */
  push32(0x1152f709u); f_1152f7b0();
  /* 1152f709 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f70c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1152f70e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152f715 jmp 0x1152f720 */
  goto L_1152f720;
L_1152f717:;
  /* 1152f717 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f71a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f71d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1152f720:;
  /* 1152f720 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f724 jae 0x1152f74a */
  if (!C.cf) goto L_1152f74a;
  /* 1152f726 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f729 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f72c cmp ecx, dword ptr [eax*8 + 0x11551fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11551fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f733 jne 0x1152f748 */
  if (!C.zf) goto L_1152f748;
  /* 1152f735 call 0x1152f7a0 */
  push32(0x1152f73au); f_1152f7a0();
  /* 1152f73a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152f73d mov ecx, dword ptr [edx*8 + 0x11551fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11551fbc)));
  /* 1152f744 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1152f746 jmp 0x1152f78d */
  goto L_1152f78d;
L_1152f748:;
  /* 1152f748 jmp 0x1152f717 */
  goto L_1152f717;
L_1152f74a:;
  /* 1152f74a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f74e jb 0x1152f763 */
  if (C.cf) goto L_1152f763;
  /* 1152f750 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f754 ja 0x1152f763 */
  if ((!C.cf&&!C.zf)) goto L_1152f763;
  /* 1152f756 call 0x1152f7a0 */
  push32(0x1152f75bu); f_1152f7a0();
  /* 1152f75b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1152f761 jmp 0x1152f78d */
  goto L_1152f78d;
L_1152f763:;
  /* 1152f763 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f76a jb 0x1152f782 */
  if (C.cf) goto L_1152f782;
  /* 1152f76c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f773 ja 0x1152f782 */
  if ((!C.cf&&!C.zf)) goto L_1152f782;
  /* 1152f775 call 0x1152f7a0 */
  push32(0x1152f77au); f_1152f7a0();
  /* 1152f77a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1152f780 jmp 0x1152f78d */
  goto L_1152f78d;
L_1152f782:;
  /* 1152f782 call 0x1152f7a0 */
  push32(0x1152f787u); f_1152f7a0();
  /* 1152f787 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1152f78d:;
  /* 1152f78d mov esp, ebp */
  ESP = (EBP);
  /* 1152f78f pop ebp */
  EBP = (pop32());
  /* 1152f790 ret  */
  ESPCHK(0x1152f700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7a0 @ 0x1152f7a0 (13 bytes, 6 insns) */
void f_1152f7a0(void) {
  FTRACE(0x1152f7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152f7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152f7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1152f7a3 call 0x11527310 */
  push32(0x1152f7a8u); f_11527310();
  /* 1152f7a8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f7ab pop ebp */
  EBP = (pop32());
  /* 1152f7ac ret  */
  ESPCHK(0x1152f7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7b0 @ 0x1152f7b0 (13 bytes, 6 insns) */
void f_1152f7b0(void) {
  FTRACE(0x1152f7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152f7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152f7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1152f7b3 call 0x11527310 */
  push32(0x1152f7b8u); f_11527310();
  /* 1152f7b8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f7bb pop ebp */
  EBP = (pop32());
  /* 1152f7bc ret  */
  ESPCHK(0x1152f7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7c0 @ 0x1152f7c0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1152f7c0(void) {
  FTRACE(0x1152f7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152f7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152f7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1152f7c3 push edi */
  push32((uint32_t)(EDI));
  /* 1152f7c4 push esi */
  push32((uint32_t)(ESI));
  /* 1152f7c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1152f7c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152f7cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f7ce mov eax, ecx */
  EAX = (ECX);
  /* 1152f7d0 mov edx, ecx */
  EDX = (ECX);
  /* 1152f7d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f7d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f7d6 jbe 0x1152f7e0 */
  if ((C.cf||C.zf)) goto L_1152f7e0;
  /* 1152f7d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f7da jb 0x1152f958 */
  if (C.cf) goto L_1152f958;
L_1152f7e0:;
  /* 1152f7e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1152f7e6 jne 0x1152f7fc */
  if (!C.zf) goto L_1152f7fc;
  /* 1152f7e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152f7eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1152f7ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f7f1 jb 0x1152f81c */
  if (C.cf) goto L_1152f81c;
  /* 1152f7f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152f7f5 jmp dword ptr [edx*4 + 0x1152f908] */
  switch (EDX) {
    case 0: goto L_1152f918;
    case 1: goto L_1152f920;
    case 2: goto L_1152f92c;
    case 3: goto L_1152f940;
    default: x86_unimpl("switch@0x1152f7f5 out of table"); return;
  }
L_1152f7fc:;
  /* 1152f7fc mov eax, edi */
  EAX = (EDI);
  /* 1152f7fe mov edx, 3 */
  EDX = (0x3u);
  /* 1152f803 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f806 jb 0x1152f814 */
  if (C.cf) goto L_1152f814;
  /* 1152f808 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1152f80b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f80d jmp dword ptr [eax*4 + 0x1152f820] */
  switch (EAX) {
    case 1: goto L_1152f830;
    case 2: goto L_1152f85c;
    case 3: goto L_1152f880;
    default: x86_unimpl("switch@0x1152f80d out of table"); return;
  }
L_1152f814:;
  /* 1152f814 jmp dword ptr [ecx*4 + 0x1152f918] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1152f918)))); return;
  /* 1152f81b nop  */
  /* nop */
L_1152f81c:;
  /* 1152f81c jmp dword ptr [ecx*4 + 0x1152f89c] */
  switch (ECX) {
    case 0: goto L_1152f8ff;
    case 1: goto L_1152f8ec;
    case 2: goto L_1152f8e4;
    case 3: goto L_1152f8dc;
    case 4: goto L_1152f8d4;
    case 5: goto L_1152f8cc;
    case 6: goto L_1152f8c4;
    case 7: goto L_1152f8bc;
    default: x86_unimpl("switch@0x1152f81c out of table"); return;
  }
  /* 1152f823 nop  */
  /* nop */
L_1152f830:;
  /* 1152f830 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152f832 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152f834 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152f836 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152f839 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152f83c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152f83f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152f842 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152f845 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f848 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f84b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f84e jb 0x1152f81c */
  if (C.cf) goto L_1152f81c;
  /* 1152f850 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152f852 jmp dword ptr [edx*4 + 0x1152f908] */
  switch (EDX) {
    case 0: goto L_1152f918;
    case 1: goto L_1152f920;
    case 2: goto L_1152f92c;
    case 3: goto L_1152f940;
    default: x86_unimpl("switch@0x1152f852 out of table"); return;
  }
  /* 1152f859 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152f85c:;
  /* 1152f85c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152f85e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152f860 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152f862 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152f865 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152f868 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152f86b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f86e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f871 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f874 jb 0x1152f81c */
  if (C.cf) goto L_1152f81c;
  /* 1152f876 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152f878 jmp dword ptr [edx*4 + 0x1152f908] */
  switch (EDX) {
    case 0: goto L_1152f918;
    case 1: goto L_1152f920;
    case 2: goto L_1152f92c;
    case 3: goto L_1152f940;
    default: x86_unimpl("switch@0x1152f878 out of table"); return;
  }
  /* 1152f87f nop  */
  /* nop */
L_1152f880:;
  /* 1152f880 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152f882 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152f884 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152f886 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1152f887 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152f88a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1152f88b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f88e jb 0x1152f81c */
  if (C.cf) goto L_1152f81c;
  /* 1152f890 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152f892 jmp dword ptr [edx*4 + 0x1152f908] */
  switch (EDX) {
    case 0: goto L_1152f918;
    case 1: goto L_1152f920;
    case 2: goto L_1152f92c;
    case 3: goto L_1152f940;
    default: x86_unimpl("switch@0x1152f892 out of table"); return;
  }
  /* 1152f899 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152f8bc:;
  /* 1152f8bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1152f8c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1152f8c4:;
  /* 1152f8c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1152f8c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1152f8cc:;
  /* 1152f8cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1152f8d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1152f8d4:;
  /* 1152f8d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1152f8d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1152f8dc:;
  /* 1152f8dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1152f8e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1152f8e4:;
  /* 1152f8e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1152f8e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1152f8ec:;
  /* 1152f8ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1152f8f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1152f8f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1152f8fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152f8fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1152f8ff:;
  /* 1152f8ff jmp dword ptr [edx*4 + 0x1152f908] */
  switch (EDX) {
    case 0: goto L_1152f918;
    case 1: goto L_1152f920;
    case 2: goto L_1152f92c;
    case 3: goto L_1152f940;
    default: x86_unimpl("switch@0x1152f8ff out of table"); return;
  }
  /* 1152f906 mov edi, edi */
  EDI = (EDI);
L_1152f918:;
  /* 1152f918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f91b pop esi */
  ESI = (pop32());
  /* 1152f91c pop edi */
  EDI = (pop32());
  /* 1152f91d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152f91e ret  */
  ESPCHK(0x1152f7c0u, _esp0);
  ESP += 4; return;
  /* 1152f91f nop  */
  /* nop */
L_1152f920:;
  /* 1152f920 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152f922 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152f924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f927 pop esi */
  ESI = (pop32());
  /* 1152f928 pop edi */
  EDI = (pop32());
  /* 1152f929 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152f92a ret  */
  ESPCHK(0x1152f7c0u, _esp0);
  ESP += 4; return;
  /* 1152f92b nop  */
  /* nop */
L_1152f92c:;
  /* 1152f92c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152f92e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152f930 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152f933 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152f936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f939 pop esi */
  ESI = (pop32());
  /* 1152f93a pop edi */
  EDI = (pop32());
  /* 1152f93b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152f93c ret  */
  ESPCHK(0x1152f7c0u, _esp0);
  ESP += 4; return;
  /* 1152f93d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152f940:;
  /* 1152f940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152f942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152f944 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152f947 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152f94a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152f94d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152f950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152f953 pop esi */
  ESI = (pop32());
  /* 1152f954 pop edi */
  EDI = (pop32());
  /* 1152f955 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152f956 ret  */
  ESPCHK(0x1152f7c0u, _esp0);
  ESP += 4; return;
  /* 1152f957 nop  */
  /* nop */
L_1152f958:;
  /* 1152f958 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1152f95c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1152f960 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1152f966 jne 0x1152f98c */
  if (!C.zf) goto L_1152f98c;
  /* 1152f968 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152f96b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1152f96e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f971 jb 0x1152f980 */
  if (C.cf) goto L_1152f980;
  /* 1152f973 std  */
  C.df=1;
  /* 1152f974 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152f976 cld  */
  C.df=0;
  /* 1152f977 jmp dword ptr [edx*4 + 0x1152faa0] */
  switch (EDX) {
    case 0: goto L_1152fab0;
    case 1: goto L_1152fab8;
    case 2: goto L_1152fac8;
    case 3: goto L_1152fadc;
    default: x86_unimpl("switch@0x1152f977 out of table"); return;
  }
  /* 1152f97e mov edi, edi */
  EDI = (EDI);
L_1152f980:;
  /* 1152f980 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152f982 jmp dword ptr [ecx*4 + 0x1152fa50] */
  switch (ECX) {
    case 0: goto L_1152fa97;
    default: x86_unimpl("switch@0x1152f982 out of table"); return;
  }
  /* 1152f989 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152f98c:;
  /* 1152f98c mov eax, edi */
  EAX = (EDI);
  /* 1152f98e mov edx, 3 */
  EDX = (0x3u);
  /* 1152f993 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f996 jb 0x1152f9a4 */
  if (C.cf) goto L_1152f9a4;
  /* 1152f998 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1152f99b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f99d jmp dword ptr [eax*4 + 0x1152f9a8] */
  switch (EAX) {
    case 1: goto L_1152f9b8;
    case 2: goto L_1152f9d8;
    case 3: goto L_1152fa00;
    default: x86_unimpl("switch@0x1152f99d out of table"); return;
  }
L_1152f9a4:;
  /* 1152f9a4 jmp dword ptr [ecx*4 + 0x1152faa0] */
  switch (ECX) {
    case 0: goto L_1152fab0;
    case 1: goto L_1152fab8;
    case 2: goto L_1152fac8;
    case 3: goto L_1152fadc;
    default: x86_unimpl("switch@0x1152f9a4 out of table"); return;
  }
  /* 1152f9ab nop  */
  /* nop */
L_1152f9b8:;
  /* 1152f9b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152f9bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152f9bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152f9c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1152f9c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152f9c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1152f9c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f9c8 jb 0x1152f980 */
  if (C.cf) goto L_1152f980;
  /* 1152f9ca std  */
  C.df=1;
  /* 1152f9cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152f9cd cld  */
  C.df=0;
  /* 1152f9ce jmp dword ptr [edx*4 + 0x1152faa0] */
  switch (EDX) {
    case 0: goto L_1152fab0;
    case 1: goto L_1152fab8;
    case 2: goto L_1152fac8;
    case 3: goto L_1152fadc;
    default: x86_unimpl("switch@0x1152f9ce out of table"); return;
  }
  /* 1152f9d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152f9d8:;
  /* 1152f9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152f9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152f9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152f9e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152f9e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152f9e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152f9e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f9ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152f9ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152f9f2 jb 0x1152f980 */
  if (C.cf) goto L_1152f980;
  /* 1152f9f4 std  */
  C.df=1;
  /* 1152f9f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152f9f7 cld  */
  C.df=0;
  /* 1152f9f8 jmp dword ptr [edx*4 + 0x1152faa0] */
  switch (EDX) {
    case 0: goto L_1152fab0;
    case 1: goto L_1152fab8;
    case 2: goto L_1152fac8;
    case 3: goto L_1152fadc;
    default: x86_unimpl("switch@0x1152f9f8 out of table"); return;
  }
  /* 1152f9ff nop  */
  /* nop */
L_1152fa00:;
  /* 1152fa00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152fa03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1152fa05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152fa08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152fa0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152fa0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152fa11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152fa14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152fa17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152fa1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152fa1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fa20 jb 0x1152f980 */
  if (C.cf) goto L_1152f980;
  /* 1152fa26 std  */
  C.df=1;
  /* 1152fa27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1152fa29 cld  */
  C.df=0;
  /* 1152fa2a jmp dword ptr [edx*4 + 0x1152faa0] */
  switch (EDX) {
    case 0: goto L_1152fab0;
    case 1: goto L_1152fab8;
    case 2: goto L_1152fac8;
    case 3: goto L_1152fadc;
    default: x86_unimpl("switch@0x1152fa2a out of table"); return;
  }
  /* 1152fa31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1152fa34 push esp */
  push32((uint32_t)(ESP));
  /* 1152fa35 cli  */
  x86_unimpl("cli @ 0x1152fa35");
  /* 1152fa36 push edx */
  push32((uint32_t)(EDX));
  /* 1152fa37 adc dword ptr [edx + edi*8 + 0x52], ebx */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*8 + 0x52))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*8 + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152fa3b adc dword ptr [edx + edi*8 + 0x52], esp */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*8 + 0x52))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*8 + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152fa3f adc dword ptr [edx + edi*8 + 0x52], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*8 + 0x52))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*8 + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152fa43 adc dword ptr [edx + edi*8 + 0x52], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*8 + 0x52))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*8 + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152fa47 adc dword ptr [edx + edi*8 + 0x52], edi */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*8 + 0x52))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*8 + 0x52), (_r)); fl_add(_a,_b,_r,32); }
  /* 1152fa4c test dl, bh */
  { uint32_t _r=(DL)&(C.b.b.h); fl_logic(_r,8); }
  /* 1152fa4e push edx */
  push32((uint32_t)(EDX));
  /* 1152fa54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1152fa58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1152fa5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1152fa60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1152fa64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1152fa68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1152fa6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1152fa70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1152fa74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1152fa78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1152fa7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1152fa80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1152fa84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1152fa88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1152fa8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1152fa93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152fa95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1152fa97:;
  /* 1152fa97 jmp dword ptr [edx*4 + 0x1152faa0] */
  switch (EDX) {
    case 0: goto L_1152fab0;
    case 1: goto L_1152fab8;
    case 2: goto L_1152fac8;
    case 3: goto L_1152fadc;
    default: x86_unimpl("switch@0x1152fa97 out of table"); return;
  }
  /* 1152fa9e mov edi, edi */
  EDI = (EDI);
L_1152fab0:;
  /* 1152fab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152fab3 pop esi */
  ESI = (pop32());
  /* 1152fab4 pop edi */
  EDI = (pop32());
  /* 1152fab5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152fab6 ret  */
  ESPCHK(0x1152f7c0u, _esp0);
  ESP += 4; return;
  /* 1152fab7 nop  */
  /* nop */
L_1152fab8:;
  /* 1152fab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152fabb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152fabe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152fac1 pop esi */
  ESI = (pop32());
  /* 1152fac2 pop edi */
  EDI = (pop32());
  /* 1152fac3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152fac4 ret  */
  ESPCHK(0x1152f7c0u, _esp0);
  ESP += 4; return;
  /* 1152fac5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1152fac8:;
  /* 1152fac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152facb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152face mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152fad1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152fad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152fad7 pop esi */
  ESI = (pop32());
  /* 1152fad8 pop edi */
  EDI = (pop32());
  /* 1152fad9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152fada ret  */
  ESPCHK(0x1152f7c0u, _esp0);
  ESP += 4; return;
  /* 1152fadb nop  */
  /* nop */
L_1152fadc:;
  /* 1152fadc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1152fadf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1152fae2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1152fae5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1152fae8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1152faeb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1152faee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152faf1 pop esi */
  ESI = (pop32());
  /* 1152faf2 pop edi */
  EDI = (pop32());
  /* 1152faf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1152faf4 ret  */
  ESPCHK(0x1152f7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb00 @ 0x1152fb00 (421 bytes, 148 insns) */
void f_1152fb00(void) {
  FTRACE(0x1152fb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152fb00 push ebp */
  push32((uint32_t)(EBP));
  /* 1152fb01 mov ebp, esp */
  EBP = (ESP);
  /* 1152fb03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1152fb05 push 0x1154f4c0 */
  push32((uint32_t)(0x1154f4c0u));
  /* 1152fb0a push 0x115309d8 */
  push32((uint32_t)(0x115309d8u));
  /* 1152fb0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1152fb15 push eax */
  push32((uint32_t)(EAX));
  /* 1152fb16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1152fb1d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152fb20 push ebx */
  push32((uint32_t)(EBX));
  /* 1152fb21 push esi */
  push32((uint32_t)(ESI));
  /* 1152fb22 push edi */
  push32((uint32_t)(EDI));
  /* 1152fb23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1152fb26 cmp dword ptr [0x11553a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fb2d jne 0x1152fb7e */
  if (!C.zf) goto L_1152fb7e;
  /* 1152fb2f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1152fb32 push eax */
  push32((uint32_t)(EAX));
  /* 1152fb33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152fb35 push 0x1154f4b8 */
  push32((uint32_t)(0x1154f4b8u));
  /* 1152fb3a push 1 */
  push32((uint32_t)(0x1u));
  /* 1152fb3c call dword ptr [0x11556338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556338))), 0x1152fb42u);
  /* 1152fb42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152fb44 je 0x1152fb52 */
  if (C.zf) goto L_1152fb52;
  /* 1152fb46 mov dword ptr [0x11553a54], 1 */
  w32((uint32_t)(0x11553a54), (0x1u));
  /* 1152fb50 jmp 0x1152fb7e */
  goto L_1152fb7e;
L_1152fb52:;
  /* 1152fb52 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1152fb55 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fb56 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152fb58 push 0x1154f4b4 */
  push32((uint32_t)(0x1154f4b4u));
  /* 1152fb5d push 1 */
  push32((uint32_t)(0x1u));
  /* 1152fb5f push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fb61 call dword ptr [0x1155633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155633c))), 0x1152fb67u);
  /* 1152fb67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152fb69 je 0x1152fb77 */
  if (C.zf) goto L_1152fb77;
  /* 1152fb6b mov dword ptr [0x11553a54], 2 */
  w32((uint32_t)(0x11553a54), (0x2u));
  /* 1152fb75 jmp 0x1152fb7e */
  goto L_1152fb7e;
L_1152fb77:;
  /* 1152fb77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fb79 jmp 0x1152fca8 */
  goto L_1152fca8;
L_1152fb7e:;
  /* 1152fb7e cmp dword ptr [0x11553a54], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11553a54))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fb85 jne 0x1152fbb5 */
  if (!C.zf) goto L_1152fbb5;
  /* 1152fb87 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fb8b jne 0x1152fb96 */
  if (!C.zf) goto L_1152fb96;
  /* 1152fb8d mov edx, dword ptr [0x11553a60] */
  EDX = (r32((uint32_t)(0x11553a60)));
  /* 1152fb93 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1152fb96:;
  /* 1152fb96 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152fb99 push eax */
  push32((uint32_t)(EAX));
  /* 1152fb9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152fb9d push ecx */
  push32((uint32_t)(ECX));
  /* 1152fb9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152fba1 push edx */
  push32((uint32_t)(EDX));
  /* 1152fba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152fba5 push eax */
  push32((uint32_t)(EAX));
  /* 1152fba6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1152fba9 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fbaa call dword ptr [0x1155633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155633c))), 0x1152fbb0u);
  /* 1152fbb0 jmp 0x1152fca8 */
  goto L_1152fca8;
L_1152fbb5:;
  /* 1152fbb5 cmp dword ptr [0x11553a54], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553a54))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fbbc jne 0x1152fca6 */
  if (!C.zf) goto L_1152fca6;
  /* 1152fbc2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fbc6 jne 0x1152fbd1 */
  if (!C.zf) goto L_1152fbd1;
  /* 1152fbc8 mov edx, dword ptr [0x11553a70] */
  EDX = (r32((uint32_t)(0x11553a70)));
  /* 1152fbce mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1152fbd1:;
  /* 1152fbd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fbd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fbd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152fbd8 push eax */
  push32((uint32_t)(EAX));
  /* 1152fbd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152fbdc push ecx */
  push32((uint32_t)(ECX));
  /* 1152fbdd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1152fbe0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152fbe2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152fbe4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1152fbe7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152fbea push edx */
  push32((uint32_t)(EDX));
  /* 1152fbeb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1152fbee push eax */
  push32((uint32_t)(EAX));
  /* 1152fbef call dword ptr [0x11556340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556340))), 0x1152fbf5u);
  /* 1152fbf5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1152fbf8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fbfc jne 0x1152fc05 */
  if (!C.zf) goto L_1152fc05;
  /* 1152fbfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fc00 jmp 0x1152fca8 */
  goto L_1152fca8;
L_1152fc05:;
  /* 1152fc05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152fc0c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152fc0f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1152fc11 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152fc14 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1152fc16 call 0x1152aa70 */
  push32(0x1152fc1bu); f_1152aa70();
  /* 1152fc1b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1152fc1e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1152fc21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152fc24 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1152fc27 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152fc2a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1152fc2c push edx */
  push32((uint32_t)(EDX));
  /* 1152fc2d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fc2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152fc32 push eax */
  push32((uint32_t)(EAX));
  /* 1152fc33 call 0x1152b640 */
  push32(0x1152fc38u); f_1152b640();
  /* 1152fc38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152fc3b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1152fc42 jmp 0x1152fc5b */
  goto L_1152fc5b;
  /* 1152fc44 mov eax, 1 */
  EAX = (0x1u);
  /* 1152fc49 ret  */
  ESPCHK(0x1152fb00u, _esp0);
  ESP += 4; return;
  /* 1152fc4a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1152fc4d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1152fc54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1152fc5b:;
  /* 1152fc5b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fc5f jne 0x1152fc65 */
  if (!C.zf) goto L_1152fc65;
  /* 1152fc61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fc63 jmp 0x1152fca8 */
  goto L_1152fca8;
L_1152fc65:;
  /* 1152fc65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152fc68 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fc69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152fc6c push edx */
  push32((uint32_t)(EDX));
  /* 1152fc6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152fc70 push eax */
  push32((uint32_t)(EAX));
  /* 1152fc71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152fc74 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fc75 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152fc77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1152fc7a push edx */
  push32((uint32_t)(EDX));
  /* 1152fc7b call dword ptr [0x11556340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556340))), 0x1152fc81u);
  /* 1152fc81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1152fc84 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fc88 jne 0x1152fc8e */
  if (!C.zf) goto L_1152fc8e;
  /* 1152fc8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fc8c jmp 0x1152fca8 */
  goto L_1152fca8;
L_1152fc8e:;
  /* 1152fc8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152fc91 push eax */
  push32((uint32_t)(EAX));
  /* 1152fc92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152fc95 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fc96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152fc99 push edx */
  push32((uint32_t)(EDX));
  /* 1152fc9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152fc9d push eax */
  push32((uint32_t)(EAX));
  /* 1152fc9e call dword ptr [0x11556338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556338))), 0x1152fca4u);
  /* 1152fca4 jmp 0x1152fca8 */
  goto L_1152fca8;
L_1152fca6:;
  /* 1152fca6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152fca8:;
  /* 1152fca8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1152fcab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152fcae mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1152fcb5 pop edi */
  EDI = (pop32());
  /* 1152fcb6 pop esi */
  ESI = (pop32());
  /* 1152fcb7 pop ebx */
  EBX = (pop32());
  /* 1152fcb8 mov esp, ebp */
  ESP = (EBP);
  /* 1152fcba pop ebp */
  EBP = (pop32());
  /* 1152fcbb ret  */
  ESPCHK(0x1152fb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcc0 @ 0x1152fcc0 (727 bytes, 263 insns) */
void f_1152fcc0(void) {
  FTRACE(0x1152fcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152fcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152fcc1 mov ebp, esp */
  EBP = (ESP);
  /* 1152fcc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1152fcc5 push 0x1154f4d0 */
  push32((uint32_t)(0x1154f4d0u));
  /* 1152fcca push 0x115309d8 */
  push32((uint32_t)(0x115309d8u));
  /* 1152fccf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1152fcd5 push eax */
  push32((uint32_t)(EAX));
  /* 1152fcd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1152fcdd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152fce0 push ebx */
  push32((uint32_t)(EBX));
  /* 1152fce1 push esi */
  push32((uint32_t)(ESI));
  /* 1152fce2 push edi */
  push32((uint32_t)(EDI));
  /* 1152fce3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1152fce6 cmp dword ptr [0x11553a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fced jne 0x1152fd46 */
  if (!C.zf) goto L_1152fd46;
  /* 1152fcef push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fcf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fcf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152fcf5 push 0x1154f4b8 */
  push32((uint32_t)(0x1154f4b8u));
  /* 1152fcfa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1152fcff push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fd01 call dword ptr [0x11556330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556330))), 0x1152fd07u);
  /* 1152fd07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152fd09 je 0x1152fd17 */
  if (C.zf) goto L_1152fd17;
  /* 1152fd0b mov dword ptr [0x11553a78], 1 */
  w32((uint32_t)(0x11553a78), (0x1u));
  /* 1152fd15 jmp 0x1152fd46 */
  goto L_1152fd46;
L_1152fd17:;
  /* 1152fd17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fd19 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fd1b push 1 */
  push32((uint32_t)(0x1u));
  /* 1152fd1d push 0x1154f4b4 */
  push32((uint32_t)(0x1154f4b4u));
  /* 1152fd22 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1152fd27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fd29 call dword ptr [0x11556334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556334))), 0x1152fd2fu);
  /* 1152fd2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152fd31 je 0x1152fd3f */
  if (C.zf) goto L_1152fd3f;
  /* 1152fd33 mov dword ptr [0x11553a78], 2 */
  w32((uint32_t)(0x11553a78), (0x2u));
  /* 1152fd3d jmp 0x1152fd46 */
  goto L_1152fd46;
L_1152fd3f:;
  /* 1152fd3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fd41 jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152fd46:;
  /* 1152fd46 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fd4a jle 0x1152fd5f */
  if ((C.zf||C.sf!=C.of)) goto L_1152fd5f;
  /* 1152fd4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152fd4f push eax */
  push32((uint32_t)(EAX));
  /* 1152fd50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152fd53 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fd54 call 0x1152ffd0 */
  push32(0x1152fd59u); f_1152ffd0();
  /* 1152fd59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152fd5c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1152fd5f:;
  /* 1152fd5f cmp dword ptr [0x11553a78], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11553a78))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fd66 jne 0x1152fd8b */
  if (!C.zf) goto L_1152fd8b;
  /* 1152fd68 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1152fd6b push edx */
  push32((uint32_t)(EDX));
  /* 1152fd6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1152fd6f push eax */
  push32((uint32_t)(EAX));
  /* 1152fd70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152fd73 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fd74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152fd77 push edx */
  push32((uint32_t)(EDX));
  /* 1152fd78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152fd7b push eax */
  push32((uint32_t)(EAX));
  /* 1152fd7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152fd7f push ecx */
  push32((uint32_t)(ECX));
  /* 1152fd80 call dword ptr [0x11556334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556334))), 0x1152fd86u);
  /* 1152fd86 jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152fd8b:;
  /* 1152fd8b cmp dword ptr [0x11553a78], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553a78))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fd92 jne 0x1152ffaf */
  if (!C.zf) goto L_1152ffaf;
  /* 1152fd98 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fd9c jne 0x1152fda7 */
  if (!C.zf) goto L_1152fda7;
  /* 1152fd9e mov edx, dword ptr [0x11553a70] */
  EDX = (r32((uint32_t)(0x11553a70)));
  /* 1152fda4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1152fda7:;
  /* 1152fda7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fda9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fdab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152fdae push eax */
  push32((uint32_t)(EAX));
  /* 1152fdaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152fdb2 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fdb3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1152fdb6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152fdb8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152fdba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1152fdbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152fdc0 push edx */
  push32((uint32_t)(EDX));
  /* 1152fdc1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1152fdc4 push eax */
  push32((uint32_t)(EAX));
  /* 1152fdc5 call dword ptr [0x11556340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556340))), 0x1152fdcbu);
  /* 1152fdcb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1152fdce cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fdd2 jne 0x1152fddb */
  if (!C.zf) goto L_1152fddb;
  /* 1152fdd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fdd6 jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152fddb:;
  /* 1152fddb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152fde2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152fde5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1152fde7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152fdea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1152fdec call 0x1152aa70 */
  push32(0x1152fdf1u); f_1152aa70();
  /* 1152fdf1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1152fdf4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1152fdf7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1152fdfa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1152fdfd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1152fe04 jmp 0x1152fe1d */
  goto L_1152fe1d;
  /* 1152fe06 mov eax, 1 */
  EAX = (0x1u);
  /* 1152fe0b ret  */
  ESPCHK(0x1152fcc0u, _esp0);
  ESP += 4; return;
  /* 1152fe0c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1152fe0f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1152fe16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1152fe1d:;
  /* 1152fe1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fe21 jne 0x1152fe2a */
  if (!C.zf) goto L_1152fe2a;
  /* 1152fe23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fe25 jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152fe2a:;
  /* 1152fe2a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152fe2d push edx */
  push32((uint32_t)(EDX));
  /* 1152fe2e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152fe31 push eax */
  push32((uint32_t)(EAX));
  /* 1152fe32 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152fe35 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fe36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152fe39 push edx */
  push32((uint32_t)(EDX));
  /* 1152fe3a push 1 */
  push32((uint32_t)(0x1u));
  /* 1152fe3c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1152fe3f push eax */
  push32((uint32_t)(EAX));
  /* 1152fe40 call dword ptr [0x11556340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556340))), 0x1152fe46u);
  /* 1152fe46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152fe48 jne 0x1152fe51 */
  if (!C.zf) goto L_1152fe51;
  /* 1152fe4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fe4c jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152fe51:;
  /* 1152fe51 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fe53 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152fe55 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152fe58 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fe59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152fe5c push edx */
  push32((uint32_t)(EDX));
  /* 1152fe5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152fe60 push eax */
  push32((uint32_t)(EAX));
  /* 1152fe61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152fe64 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fe65 call dword ptr [0x11556330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556330))), 0x1152fe6bu);
  /* 1152fe6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1152fe6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fe72 jne 0x1152fe7b */
  if (!C.zf) goto L_1152fe7b;
  /* 1152fe74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fe76 jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152fe7b:;
  /* 1152fe7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152fe7e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1152fe84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152fe86 je 0x1152fecb */
  if (C.zf) goto L_1152fecb;
  /* 1152fe88 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fe8c je 0x1152fec6 */
  if (C.zf) goto L_1152fec6;
  /* 1152fe8e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152fe91 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152fe94 jle 0x1152fe9d */
  if ((C.zf||C.sf!=C.of)) goto L_1152fe9d;
  /* 1152fe96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fe98 jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152fe9d:;
  /* 1152fe9d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1152fea0 push ecx */
  push32((uint32_t)(ECX));
  /* 1152fea1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1152fea4 push edx */
  push32((uint32_t)(EDX));
  /* 1152fea5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152fea8 push eax */
  push32((uint32_t)(EAX));
  /* 1152fea9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152feac push ecx */
  push32((uint32_t)(ECX));
  /* 1152fead mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152feb0 push edx */
  push32((uint32_t)(EDX));
  /* 1152feb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152feb4 push eax */
  push32((uint32_t)(EAX));
  /* 1152feb5 call dword ptr [0x11556330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556330))), 0x1152febbu);
  /* 1152febb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152febd jne 0x1152fec6 */
  if (!C.zf) goto L_1152fec6;
  /* 1152febf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152fec1 jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152fec6:;
  /* 1152fec6 jmp 0x1152ffaa */
  goto L_1152ffaa;
L_1152fecb:;
  /* 1152fecb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152fece mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1152fed1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1152fed8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152fedb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1152fedd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152fee0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1152fee2 call 0x1152aa70 */
  push32(0x1152fee7u); f_1152aa70();
  /* 1152fee7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1152feea mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1152feed mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1152fef0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1152fef3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1152fefa jmp 0x1152ff13 */
  goto L_1152ff13;
  /* 1152fefc mov eax, 1 */
  EAX = (0x1u);
  /* 1152ff01 ret  */
  ESPCHK(0x1152fcc0u, _esp0);
  ESP += 4; return;
  /* 1152ff02 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1152ff05 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1152ff0c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1152ff13:;
  /* 1152ff13 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ff17 jne 0x1152ff20 */
  if (!C.zf) goto L_1152ff20;
  /* 1152ff19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152ff1b jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152ff20:;
  /* 1152ff20 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ff23 push eax */
  push32((uint32_t)(EAX));
  /* 1152ff24 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ff27 push ecx */
  push32((uint32_t)(ECX));
  /* 1152ff28 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1152ff2b push edx */
  push32((uint32_t)(EDX));
  /* 1152ff2c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152ff2f push eax */
  push32((uint32_t)(EAX));
  /* 1152ff30 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152ff33 push ecx */
  push32((uint32_t)(ECX));
  /* 1152ff34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ff37 push edx */
  push32((uint32_t)(EDX));
  /* 1152ff38 call dword ptr [0x11556330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556330))), 0x1152ff3eu);
  /* 1152ff3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152ff40 jne 0x1152ff46 */
  if (!C.zf) goto L_1152ff46;
  /* 1152ff42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152ff44 jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152ff46:;
  /* 1152ff46 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ff4a jne 0x1152ff7a */
  if (!C.zf) goto L_1152ff7a;
  /* 1152ff4c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152ff4e push 0 */
  push32((uint32_t)(0x0u));
  /* 1152ff50 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152ff52 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152ff54 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ff57 push eax */
  push32((uint32_t)(EAX));
  /* 1152ff58 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ff5b push ecx */
  push32((uint32_t)(ECX));
  /* 1152ff5c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1152ff61 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1152ff64 push edx */
  push32((uint32_t)(EDX));
  /* 1152ff65 call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x1152ff6bu);
  /* 1152ff6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1152ff6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ff72 jne 0x1152ff78 */
  if (!C.zf) goto L_1152ff78;
  /* 1152ff74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152ff76 jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152ff78:;
  /* 1152ff78 jmp 0x1152ffaa */
  goto L_1152ffaa;
L_1152ff7a:;
  /* 1152ff7a push 0 */
  push32((uint32_t)(0x0u));
  /* 1152ff7c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152ff7e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1152ff81 push eax */
  push32((uint32_t)(EAX));
  /* 1152ff82 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1152ff85 push ecx */
  push32((uint32_t)(ECX));
  /* 1152ff86 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152ff89 push edx */
  push32((uint32_t)(EDX));
  /* 1152ff8a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ff8d push eax */
  push32((uint32_t)(EAX));
  /* 1152ff8e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1152ff93 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1152ff96 push ecx */
  push32((uint32_t)(ECX));
  /* 1152ff97 call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x1152ff9du);
  /* 1152ff9d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1152ffa0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ffa4 jne 0x1152ffaa */
  if (!C.zf) goto L_1152ffaa;
  /* 1152ffa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152ffa8 jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152ffaa:;
  /* 1152ffaa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152ffad jmp 0x1152ffb1 */
  goto L_1152ffb1;
L_1152ffaf:;
  /* 1152ffaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152ffb1:;
  /* 1152ffb1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1152ffb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152ffb7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1152ffbe pop edi */
  EDI = (pop32());
  /* 1152ffbf pop esi */
  ESI = (pop32());
  /* 1152ffc0 pop ebx */
  EBX = (pop32());
  /* 1152ffc1 mov esp, ebp */
  ESP = (EBP);
  /* 1152ffc3 pop ebp */
  EBP = (pop32());
  /* 1152ffc4 ret  */
  ESPCHK(0x1152fcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffd0 @ 0x1152ffd0 (80 bytes, 32 insns) */
void f_1152ffd0(void) {
  FTRACE(0x1152ffd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152ffd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152ffd1 mov ebp, esp */
  EBP = (ESP);
  /* 1152ffd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ffd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152ffd9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152ffdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ffdf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1152ffe2:;
  /* 1152ffe2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152ffe5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152ffe8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ffeb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152ffee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152fff0 je 0x11530007 */
  if (C.zf) goto L_11530007;
  /* 1152fff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152fff5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1152fff8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152fffa je 0x11530007 */
  if (C.zf) goto L_11530007;
  /* 1152fffc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ffff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530002 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11530005 jmp 0x1152ffe2 */
  goto L_1152ffe2;
L_11530007:;
  /* 11530007 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153000a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1153000d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1153000f jne 0x11530019 */
  if (!C.zf) goto L_11530019;
  /* 11530011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530014 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11530017 jmp 0x1153001c */
  goto L_1153001c;
L_11530019:;
  /* 11530019 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1153001c:;
  /* 1153001c mov esp, ebp */
  ESP = (EBP);
  /* 1153001e pop ebp */
  EBP = (pop32());
  /* 1153001f ret  */
  ESPCHK(0x1152ffd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010020 @ 0x11530020 (130 bytes, 43 insns) */
void f_11530020(void) {
  FTRACE(0x11530020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530020 push ebp */
  push32((uint32_t)(EBP));
  /* 11530021 mov ebp, esp */
  EBP = (ESP);
  /* 11530023 push ecx */
  push32((uint32_t)(ECX));
  /* 11530024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530027 cmp eax, dword ptr [0x1155537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1155537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153002d jae 0x11530051 */
  if (!C.cf) goto L_11530051;
  /* 1153002f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530032 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11530035 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530038 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1153003b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153003e mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 11530045 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1153004a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1153004d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1153004f jne 0x1153006c */
  if (!C.zf) goto L_1153006c;
L_11530051:;
  /* 11530051 call 0x1152f7a0 */
  push32(0x11530056u); f_1152f7a0();
  /* 11530056 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1153005c call 0x1152f7b0 */
  push32(0x11530061u); f_1152f7b0();
  /* 11530061 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11530067 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1153006a jmp 0x1153009e */
  goto L_1153009e;
L_1153006c:;
  /* 1153006c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153006f push edx */
  push32((uint32_t)(EDX));
  /* 11530070 call 0x11530fc0 */
  push32(0x11530075u); f_11530fc0();
  /* 11530075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530078 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153007b push eax */
  push32((uint32_t)(EAX));
  /* 1153007c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153007f push ecx */
  push32((uint32_t)(ECX));
  /* 11530080 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530083 push edx */
  push32((uint32_t)(EDX));
  /* 11530084 call 0x115300b0 */
  push32(0x11530089u); f_115300b0();
  /* 11530089 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153008c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1153008f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530092 push eax */
  push32((uint32_t)(EAX));
  /* 11530093 call 0x11531050 */
  push32(0x11530098u); f_11531050();
  /* 11530098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153009b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1153009e:;
  /* 1153009e mov esp, ebp */
  ESP = (EBP);
  /* 115300a0 pop ebp */
  EBP = (pop32());
  /* 115300a1 ret  */
  ESPCHK(0x11530020u, _esp0);
  ESP += 4; return;
}

/* FUN_100100b0 @ 0x115300b0 (178 bytes, 56 insns) */
void f_115300b0(void) {
  FTRACE(0x115300b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115300b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115300b1 mov ebp, esp */
  EBP = (ESP);
  /* 115300b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115300b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115300b9 push eax */
  push32((uint32_t)(EAX));
  /* 115300ba call 0x11530e40 */
  push32(0x115300bfu); f_11530e40();
  /* 115300bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115300c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115300c5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115300c9 jne 0x115300de */
  if (!C.zf) goto L_115300de;
  /* 115300cb call 0x1152f7a0 */
  push32(0x115300d0u); f_1152f7a0();
  /* 115300d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115300d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115300d9 jmp 0x1153015e */
  goto L_1153015e;
L_115300de:;
  /* 115300de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115300e1 push ecx */
  push32((uint32_t)(ECX));
  /* 115300e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115300e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115300e7 push edx */
  push32((uint32_t)(EDX));
  /* 115300e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115300eb push eax */
  push32((uint32_t)(EAX));
  /* 115300ec call dword ptr [0x1155632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155632c))), 0x115300f2u);
  /* 115300f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115300f5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115300f9 jne 0x11530106 */
  if (!C.zf) goto L_11530106;
  /* 115300fb call dword ptr [0x11556400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556400))), 0x11530101u);
  /* 11530101 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11530104 jmp 0x1153010d */
  goto L_1153010d;
L_11530106:;
  /* 11530106 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1153010d:;
  /* 1153010d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530111 je 0x11530124 */
  if (C.zf) goto L_11530124;
  /* 11530113 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530116 push ecx */
  push32((uint32_t)(ECX));
  /* 11530117 call 0x1152f700 */
  push32(0x1153011cu); f_1152f700();
  /* 1153011c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153011f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11530122 jmp 0x1153015e */
  goto L_1153015e;
L_11530124:;
  /* 11530124 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530127 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1153012a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153012d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11530130 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530133 mov ecx, dword ptr [edx*4 + 0x11555240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11555240)));
  /* 1153013a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1153013e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11530141 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530144 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11530147 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153014a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1153014d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530150 mov eax, dword ptr [eax*4 + 0x11555240] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 11530157 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1153015b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1153015e:;
  /* 1153015e mov esp, ebp */
  ESP = (EBP);
  /* 11530160 pop ebp */
  EBP = (pop32());
  /* 11530161 ret  */
  ESPCHK(0x115300b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010170 @ 0x11530170 (130 bytes, 43 insns) */
void f_11530170(void) {
  FTRACE(0x11530170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530170 push ebp */
  push32((uint32_t)(EBP));
  /* 11530171 mov ebp, esp */
  EBP = (ESP);
  /* 11530173 push ecx */
  push32((uint32_t)(ECX));
  /* 11530174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530177 cmp eax, dword ptr [0x1155537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1155537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153017d jae 0x115301a1 */
  if (!C.cf) goto L_115301a1;
  /* 1153017f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530182 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11530185 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530188 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1153018b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153018e mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 11530195 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1153019a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1153019d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1153019f jne 0x115301bc */
  if (!C.zf) goto L_115301bc;
L_115301a1:;
  /* 115301a1 call 0x1152f7a0 */
  push32(0x115301a6u); f_1152f7a0();
  /* 115301a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115301ac call 0x1152f7b0 */
  push32(0x115301b1u); f_1152f7b0();
  /* 115301b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115301b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115301ba jmp 0x115301ee */
  goto L_115301ee;
L_115301bc:;
  /* 115301bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115301bf push edx */
  push32((uint32_t)(EDX));
  /* 115301c0 call 0x11530fc0 */
  push32(0x115301c5u); f_11530fc0();
  /* 115301c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115301c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115301cb push eax */
  push32((uint32_t)(EAX));
  /* 115301cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115301cf push ecx */
  push32((uint32_t)(ECX));
  /* 115301d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115301d3 push edx */
  push32((uint32_t)(EDX));
  /* 115301d4 call 0x11530200 */
  push32(0x115301d9u); f_11530200();
  /* 115301d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115301dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115301df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115301e2 push eax */
  push32((uint32_t)(EAX));
  /* 115301e3 call 0x11531050 */
  push32(0x115301e8u); f_11531050();
  /* 115301e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115301eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115301ee:;
  /* 115301ee mov esp, ebp */
  ESP = (EBP);
  /* 115301f0 pop ebp */
  EBP = (pop32());
  /* 115301f1 ret  */
  ESPCHK(0x11530170u, _esp0);
  ESP += 4; return;
}

/* FUN_10010200 @ 0x11530200 (627 bytes, 182 insns) */
void f_11530200(void) {
  FTRACE(0x11530200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530200 push ebp */
  push32((uint32_t)(EBP));
  /* 11530201 mov ebp, esp */
  EBP = (ESP);
  /* 11530203 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11530209 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11530210 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11530213 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11530219 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153021d jne 0x11530226 */
  if (!C.zf) goto L_11530226;
  /* 1153021f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11530221 jmp 0x1153046f */
  goto L_1153046f;
L_11530226:;
  /* 11530226 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530229 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1153022c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153022f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11530232 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530235 mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 1153023c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11530241 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11530244 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11530246 je 0x11530258 */
  if (C.zf) goto L_11530258;
  /* 11530248 push 2 */
  push32((uint32_t)(0x2u));
  /* 1153024a push 0 */
  push32((uint32_t)(0x0u));
  /* 1153024c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153024f push edx */
  push32((uint32_t)(EDX));
  /* 11530250 call 0x115300b0 */
  push32(0x11530255u); f_115300b0();
  /* 11530255 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11530258:;
  /* 11530258 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153025b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1153025e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530261 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11530264 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530267 mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 1153026e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11530273 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11530278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153027a je 0x1153038c */
  if (C.zf) goto L_1153038c;
  /* 11530280 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11530283 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11530286 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1153028d:;
  /* 1153028d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530290 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11530293 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530296 jae 0x1153038a */
  if (!C.cf) goto L_1153038a;
  /* 1153029c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 115302a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115302a5:;
  /* 115302a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115302a8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 115302ae sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115302b0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115302b6 jge 0x11530317 */
  if ((C.sf==C.of)) goto L_11530317;
  /* 115302b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115302bb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115302be cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115302c1 jae 0x11530317 */
  if (!C.cf) goto L_11530317;
  /* 115302c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115302c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115302c8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 115302ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115302d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115302d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115302d7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 115302de cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115302e1 jne 0x11530301 */
  if (!C.zf) goto L_11530301;
  /* 115302e3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 115302e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115302ec mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 115302f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115302f5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 115302f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115302fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115302fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11530301:;
  /* 11530301 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11530304 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1153030a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1153030c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1153030f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530312 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11530315 jmp 0x115302a5 */
  goto L_115302a5;
L_11530317:;
  /* 11530317 push 0 */
  push32((uint32_t)(0x0u));
  /* 11530319 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1153031f push edx */
  push32((uint32_t)(EDX));
  /* 11530320 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11530323 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11530329 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153032b push eax */
  push32((uint32_t)(EAX));
  /* 1153032c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11530332 push edx */
  push32((uint32_t)(EDX));
  /* 11530333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530336 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11530339 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153033c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1153033f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530342 mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 11530349 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1153034c push eax */
  push32((uint32_t)(EAX));
  /* 1153034d call dword ptr [0x115563c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c4))), 0x11530353u);
  /* 11530353 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11530355 je 0x1153037a */
  if (C.zf) goto L_1153037a;
  /* 11530357 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1153035a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530360 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11530363 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11530366 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1153036c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153036e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530374 jge 0x11530378 */
  if ((C.sf==C.of)) goto L_11530378;
  /* 11530376 jmp 0x1153038a */
  goto L_1153038a;
L_11530378:;
  /* 11530378 jmp 0x11530385 */
  goto L_11530385;
L_1153037a:;
  /* 1153037a call dword ptr [0x11556400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556400))), 0x11530380u);
  /* 11530380 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11530383 jmp 0x1153038a */
  goto L_1153038a;
L_11530385:;
  /* 11530385 jmp 0x1153028d */
  goto L_1153028d;
L_1153038a:;
  /* 1153038a jmp 0x115303dc */
  goto L_115303dc;
L_1153038c:;
  /* 1153038c push 0 */
  push32((uint32_t)(0x0u));
  /* 1153038e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11530394 push ecx */
  push32((uint32_t)(ECX));
  /* 11530395 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11530398 push edx */
  push32((uint32_t)(EDX));
  /* 11530399 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153039c push eax */
  push32((uint32_t)(EAX));
  /* 1153039d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115303a0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115303a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115303a6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115303a9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115303ac mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 115303b3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 115303b6 push ecx */
  push32((uint32_t)(ECX));
  /* 115303b7 call dword ptr [0x115563c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c4))), 0x115303bdu);
  /* 115303bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115303bf je 0x115303d3 */
  if (C.zf) goto L_115303d3;
  /* 115303c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115303c8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 115303ce mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 115303d1 jmp 0x115303dc */
  goto L_115303dc;
L_115303d3:;
  /* 115303d3 call dword ptr [0x11556400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556400))), 0x115303d9u);
  /* 115303d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115303dc:;
  /* 115303dc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115303e0 jne 0x11530466 */
  if (!C.zf) goto L_11530466;
  /* 115303e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115303ea je 0x1153041a */
  if (C.zf) goto L_1153041a;
  /* 115303ec cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115303f0 jne 0x11530409 */
  if (!C.zf) goto L_11530409;
  /* 115303f2 call 0x1152f7a0 */
  push32(0x115303f7u); f_1152f7a0();
  /* 115303f7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115303fd call 0x1152f7b0 */
  push32(0x11530402u); f_1152f7b0();
  /* 11530402 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11530405 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11530407 jmp 0x11530415 */
  goto L_11530415;
L_11530409:;
  /* 11530409 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153040c push edx */
  push32((uint32_t)(EDX));
  /* 1153040d call 0x1152f700 */
  push32(0x11530412u); f_1152f700();
  /* 11530412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11530415:;
  /* 11530415 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11530418 jmp 0x1153046f */
  goto L_1153046f;
L_1153041a:;
  /* 1153041a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153041d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11530420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530423 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11530426 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530429 mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 11530430 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11530435 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11530438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153043a je 0x1153044b */
  if (C.zf) goto L_1153044b;
  /* 1153043c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153043f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11530442 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530445 jne 0x1153044b */
  if (!C.zf) goto L_1153044b;
  /* 11530447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11530449 jmp 0x1153046f */
  goto L_1153046f;
L_1153044b:;
  /* 1153044b call 0x1152f7a0 */
  push32(0x11530450u); f_1152f7a0();
  /* 11530450 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11530456 call 0x1152f7b0 */
  push32(0x1153045bu); f_1152f7b0();
  /* 1153045b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11530461 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11530464 jmp 0x1153046f */
  goto L_1153046f;
L_11530466:;
  /* 11530466 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11530469 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1153046f:;
  /* 1153046f mov esp, ebp */
  ESP = (EBP);
  /* 11530471 pop ebp */
  EBP = (pop32());
  /* 11530472 ret  */
  ESPCHK(0x11530200u, _esp0);
  ESP += 4; return;
}

/* FUN_10010480 @ 0x11530480 (199 bytes, 68 insns) */
void f_11530480(void) {
  FTRACE(0x11530480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530480 push ebp */
  push32((uint32_t)(EBP));
  /* 11530481 mov ebp, esp */
  EBP = (ESP);
  /* 11530483 push ecx */
  push32((uint32_t)(ECX));
  /* 11530484 push ebx */
  push32((uint32_t)(EBX));
  /* 11530485 push esi */
  push32((uint32_t)(ESI));
  /* 11530486 push edi */
  push32((uint32_t)(EDI));
L_11530487:;
  /* 11530487 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153048b jne 0x115304ab */
  if (!C.zf) goto L_115304ab;
  /* 1153048d push 0x1154f418 */
  push32((uint32_t)(0x1154f418u));
  /* 11530492 push 0 */
  push32((uint32_t)(0x0u));
  /* 11530494 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11530496 push 0x1154f4e8 */
  push32((uint32_t)(0x1154f4e8u));
  /* 1153049b push 2 */
  push32((uint32_t)(0x2u));
  /* 1153049d call 0x11526990 */
  push32(0x115304a2u); f_11526990();
  /* 115304a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115304a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115304a8 jne 0x115304ab */
  if (!C.zf) goto L_115304ab;
  /* 115304aa int3  */
  x86_unimpl("int3 @ 0x115304aa");
L_115304ab:;
  /* 115304ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115304ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115304af jne 0x11530487 */
  if (!C.zf) goto L_11530487;
  /* 115304b1 mov ecx, dword ptr [0x11553a7c] */
  ECX = (r32((uint32_t)(0x11553a7c)));
  /* 115304b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115304ba mov dword ptr [0x11553a7c], ecx */
  w32((uint32_t)(0x11553a7c), (ECX));
  /* 115304c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115304c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115304c6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 115304c8 push 0x1154f4e8 */
  push32((uint32_t)(0x1154f4e8u));
  /* 115304cd push 2 */
  push32((uint32_t)(0x2u));
  /* 115304cf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115304d4 call 0x115278d0 */
  push32(0x115304d9u); f_115278d0();
  /* 115304d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115304dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115304df mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 115304e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115304e5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115304e9 je 0x11530506 */
  if (C.zf) goto L_11530506;
  /* 115304eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115304ee mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115304f1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 115304f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115304f7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 115304fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115304fd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11530504 jmp 0x1153052b */
  goto L_1153052b;
L_11530506:;
  /* 11530506 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530509 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1153050c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1153050f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530512 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11530515 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530518 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153051b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153051e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11530521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530524 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1153052b:;
  /* 1153052b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153052e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530531 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11530534 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11530536 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530539 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11530540 pop edi */
  EDI = (pop32());
  /* 11530541 pop esi */
  ESI = (pop32());
  /* 11530542 pop ebx */
  EBX = (pop32());
  /* 11530543 mov esp, ebp */
  ESP = (EBP);
  /* 11530545 pop ebp */
  EBP = (pop32());
  /* 11530546 ret  */
  ESPCHK(0x11530480u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11530550 (50 bytes, 17 insns) */
void f_11530550(void) {
  FTRACE(0x11530550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530550 push ebp */
  push32((uint32_t)(EBP));
  /* 11530551 mov ebp, esp */
  EBP = (ESP);
  /* 11530553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530556 cmp eax, dword ptr [0x1155537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1155537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153055c jb 0x11530562 */
  if (C.cf) goto L_11530562;
  /* 1153055e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11530560 jmp 0x11530580 */
  goto L_11530580;
L_11530562:;
  /* 11530562 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530565 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11530568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153056b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1153056e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530571 mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 11530578 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1153057d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11530580:;
  /* 11530580 pop ebp */
  EBP = (pop32());
  /* 11530581 ret  */
  ESPCHK(0x11530550u, _esp0);
  ESP += 4; return;
}

/* FUN_10010590 @ 0x11530590 (300 bytes, 80 insns) */
void f_11530590(void) {
  FTRACE(0x11530590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530590 push ebp */
  push32((uint32_t)(EBP));
  /* 11530591 mov ebp, esp */
  EBP = (ESP);
  /* 11530593 push ecx */
  push32((uint32_t)(ECX));
  /* 11530594 cmp dword ptr [0x11554f40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11554f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153059b jne 0x115305a9 */
  if (!C.zf) goto L_115305a9;
  /* 1153059d mov dword ptr [0x11554f40], 0x200 */
  w32((uint32_t)(0x11554f40), (0x200u));
  /* 115305a7 jmp 0x115305bc */
  goto L_115305bc;
L_115305a9:;
  /* 115305a9 cmp dword ptr [0x11554f40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11554f40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115305b0 jge 0x115305bc */
  if ((C.sf==C.of)) goto L_115305bc;
  /* 115305b2 mov dword ptr [0x11554f40], 0x14 */
  w32((uint32_t)(0x11554f40), (0x14u));
L_115305bc:;
  /* 115305bc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 115305c1 push 0x1154f4f4 */
  push32((uint32_t)(0x1154f4f4u));
  /* 115305c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115305c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 115305ca mov eax, dword ptr [0x11554f40] */
  EAX = (r32((uint32_t)(0x11554f40)));
  /* 115305cf push eax */
  push32((uint32_t)(EAX));
  /* 115305d0 call 0x11527ce0 */
  push32(0x115305d5u); f_11527ce0();
  /* 115305d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115305d8 mov dword ptr [0x11553bf0], eax */
  w32((uint32_t)(0x11553bf0), (EAX));
  /* 115305dd cmp dword ptr [0x11553bf0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115305e4 jne 0x11530625 */
  if (!C.zf) goto L_11530625;
  /* 115305e6 mov dword ptr [0x11554f40], 0x14 */
  w32((uint32_t)(0x11554f40), (0x14u));
  /* 115305f0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 115305f5 push 0x1154f4f4 */
  push32((uint32_t)(0x1154f4f4u));
  /* 115305fa push 2 */
  push32((uint32_t)(0x2u));
  /* 115305fc push 4 */
  push32((uint32_t)(0x4u));
  /* 115305fe mov ecx, dword ptr [0x11554f40] */
  ECX = (r32((uint32_t)(0x11554f40)));
  /* 11530604 push ecx */
  push32((uint32_t)(ECX));
  /* 11530605 call 0x11527ce0 */
  push32(0x1153060au); f_11527ce0();
  /* 1153060a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153060d mov dword ptr [0x11553bf0], eax */
  w32((uint32_t)(0x11553bf0), (EAX));
  /* 11530612 cmp dword ptr [0x11553bf0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530619 jne 0x11530625 */
  if (!C.zf) goto L_11530625;
  /* 1153061b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1153061d call 0x11526840 */
  push32(0x11530622u); f_11526840();
  /* 11530622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11530625:;
  /* 11530625 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1153062c jmp 0x11530637 */
  goto L_11530637;
L_1153062e:;
  /* 1153062e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530631 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530634 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11530637:;
  /* 11530637 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153063b jge 0x11530656 */
  if ((C.sf==C.of)) goto L_11530656;
  /* 1153063d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530640 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11530643 add eax, 0x11552120 */
  { uint32_t _a=(EAX),_b=(0x11552120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530648 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153064b mov edx, dword ptr [0x11553bf0] */
  EDX = (r32((uint32_t)(0x11553bf0)));
  /* 11530651 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11530654 jmp 0x1153062e */
  goto L_1153062e;
L_11530656:;
  /* 11530656 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1153065d jmp 0x11530668 */
  goto L_11530668;
L_1153065f:;
  /* 1153065f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530662 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530665 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11530668:;
  /* 11530668 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153066c jge 0x115306b8 */
  if ((C.sf==C.of)) goto L_115306b8;
  /* 1153066e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530671 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11530674 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530677 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1153067a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153067d mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 11530684 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530688 je 0x115306a6 */
  if (C.zf) goto L_115306a6;
  /* 1153068a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153068d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11530690 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530693 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11530696 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530699 mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 115306a0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115306a4 jne 0x115306b6 */
  if (!C.zf) goto L_115306b6;
L_115306a6:;
  /* 115306a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115306a9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115306ac mov dword ptr [ecx + 0x11552130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11552130), (0xffffffffu));
L_115306b6:;
  /* 115306b6 jmp 0x1153065f */
  goto L_1153065f;
L_115306b8:;
  /* 115306b8 mov esp, ebp */
  ESP = (EBP);
  /* 115306ba pop ebp */
  EBP = (pop32());
  /* 115306bb ret  */
  ESPCHK(0x11530590u, _esp0);
  ESP += 4; return;
}

/* FUN_100106c0 @ 0x115306c0 (26 bytes, 9 insns) */
void f_115306c0(void) {
  FTRACE(0x115306c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115306c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115306c1 mov ebp, esp */
  EBP = (ESP);
  /* 115306c3 call 0x115312c0 */
  push32(0x115306c8u); f_115312c0();
  /* 115306c8 movsx eax, byte ptr [0x11553898] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11553898))));
  /* 115306cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115306d1 je 0x115306d8 */
  if (C.zf) goto L_115306d8;
  /* 115306d3 call 0x11531080 */
  push32(0x115306d8u); f_11531080();
L_115306d8:;
  /* 115306d8 pop ebp */
  EBP = (pop32());
  /* 115306d9 ret  */
  ESPCHK(0x115306c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x115306e0 (61 bytes, 20 insns) */
void f_115306e0(void) {
  FTRACE(0x115306e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115306e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115306e1 mov ebp, esp */
  EBP = (ESP);
  /* 115306e3 cmp dword ptr [ebp + 8], 0x11552120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11552120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115306ea jb 0x1153070e */
  if (C.cf) goto L_1153070e;
  /* 115306ec cmp dword ptr [ebp + 8], 0x11552380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11552380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115306f3 ja 0x1153070e */
  if ((!C.cf&&!C.zf)) goto L_1153070e;
  /* 115306f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115306f8 sub eax, 0x11552120 */
  { uint32_t _a=(EAX),_b=(0x11552120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115306fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11530700 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530703 push eax */
  push32((uint32_t)(EAX));
  /* 11530704 call 0x1152b2d0 */
  push32(0x11530709u); f_1152b2d0();
  /* 11530709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153070c jmp 0x1153071b */
  goto L_1153071b;
L_1153070e:;
  /* 1153070e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530711 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530714 push ecx */
  push32((uint32_t)(ECX));
  /* 11530715 call dword ptr [0x11556368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556368))), 0x1153071bu);
L_1153071b:;
  /* 1153071b pop ebp */
  EBP = (pop32());
  /* 1153071c ret  */
  ESPCHK(0x115306e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010720 @ 0x11530720 (41 bytes, 16 insns) */
void f_11530720(void) {
  FTRACE(0x11530720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530720 push ebp */
  push32((uint32_t)(EBP));
  /* 11530721 mov ebp, esp */
  EBP = (ESP);
  /* 11530723 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530727 jge 0x1153073a */
  if ((C.sf==C.of)) goto L_1153073a;
  /* 11530729 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153072c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153072f push eax */
  push32((uint32_t)(EAX));
  /* 11530730 call 0x1152b2d0 */
  push32(0x11530735u); f_1152b2d0();
  /* 11530735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530738 jmp 0x11530747 */
  goto L_11530747;
L_1153073a:;
  /* 1153073a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153073d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530740 push ecx */
  push32((uint32_t)(ECX));
  /* 11530741 call dword ptr [0x11556368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556368))), 0x11530747u);
L_11530747:;
  /* 11530747 pop ebp */
  EBP = (pop32());
  /* 11530748 ret  */
  ESPCHK(0x11530720u, _esp0);
  ESP += 4; return;
}

/* FUN_10010750 @ 0x11530750 (61 bytes, 20 insns) */
void f_11530750(void) {
  FTRACE(0x11530750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530750 push ebp */
  push32((uint32_t)(EBP));
  /* 11530751 mov ebp, esp */
  EBP = (ESP);
  /* 11530753 cmp dword ptr [ebp + 8], 0x11552120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11552120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153075a jb 0x1153077e */
  if (C.cf) goto L_1153077e;
  /* 1153075c cmp dword ptr [ebp + 8], 0x11552380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11552380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530763 ja 0x1153077e */
  if ((!C.cf&&!C.zf)) goto L_1153077e;
  /* 11530765 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530768 sub eax, 0x11552120 */
  { uint32_t _a=(EAX),_b=(0x11552120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153076d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11530770 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530773 push eax */
  push32((uint32_t)(EAX));
  /* 11530774 call 0x1152b370 */
  push32(0x11530779u); f_1152b370();
  /* 11530779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153077c jmp 0x1153078b */
  goto L_1153078b;
L_1153077e:;
  /* 1153077e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530781 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530784 push ecx */
  push32((uint32_t)(ECX));
  /* 11530785 call dword ptr [0x11556364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556364))), 0x1153078bu);
L_1153078b:;
  /* 1153078b pop ebp */
  EBP = (pop32());
  /* 1153078c ret  */
  ESPCHK(0x11530750u, _esp0);
  ESP += 4; return;
}

/* FUN_10010790 @ 0x11530790 (41 bytes, 16 insns) */
void f_11530790(void) {
  FTRACE(0x11530790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530790 push ebp */
  push32((uint32_t)(EBP));
  /* 11530791 mov ebp, esp */
  EBP = (ESP);
  /* 11530793 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530797 jge 0x115307aa */
  if ((C.sf==C.of)) goto L_115307aa;
  /* 11530799 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153079c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153079f push eax */
  push32((uint32_t)(EAX));
  /* 115307a0 call 0x1152b370 */
  push32(0x115307a5u); f_1152b370();
  /* 115307a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115307a8 jmp 0x115307b7 */
  goto L_115307b7;
L_115307aa:;
  /* 115307aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115307ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115307b0 push ecx */
  push32((uint32_t)(ECX));
  /* 115307b1 call dword ptr [0x11556364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556364))), 0x115307b7u);
L_115307b7:;
  /* 115307b7 pop ebp */
  EBP = (pop32());
  /* 115307b8 ret  */
  ESPCHK(0x11530790u, _esp0);
  ESP += 4; return;
}

/* FUN_100107c0 @ 0x115307c0 (119 bytes, 34 insns) */
void f_115307c0(void) {
  FTRACE(0x115307c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115307c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115307c1 mov ebp, esp */
  EBP = (ESP);
  /* 115307c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115307c6 push 0x11553bec */
  push32((uint32_t)(0x11553becu));
  /* 115307cb call dword ptr [0x115562e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562e8))), 0x115307d1u);
  /* 115307d1 cmp dword ptr [0x11553bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115307d8 je 0x115307f8 */
  if (C.zf) goto L_115307f8;
  /* 115307da push 0x11553bec */
  push32((uint32_t)(0x11553becu));
  /* 115307df call dword ptr [0x115563c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c8))), 0x115307e5u);
  /* 115307e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115307e7 call 0x1152b2d0 */
  push32(0x115307ecu); f_1152b2d0();
  /* 115307ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115307ef mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115307f6 jmp 0x115307ff */
  goto L_115307ff;
L_115307f8:;
  /* 115307f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115307ff:;
  /* 115307ff mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11530803 push eax */
  push32((uint32_t)(EAX));
  /* 11530804 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530807 push ecx */
  push32((uint32_t)(ECX));
  /* 11530808 call 0x11530840 */
  push32(0x1153080du); f_11530840();
  /* 1153080d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530810 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11530813 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530817 je 0x11530825 */
  if (C.zf) goto L_11530825;
  /* 11530819 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1153081b call 0x1152b370 */
  push32(0x11530820u); f_1152b370();
  /* 11530820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530823 jmp 0x11530830 */
  goto L_11530830;
L_11530825:;
  /* 11530825 push 0x11553bec */
  push32((uint32_t)(0x11553becu));
  /* 1153082a call dword ptr [0x115563c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c8))), 0x11530830u);
L_11530830:;
  /* 11530830 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11530833 mov esp, ebp */
  ESP = (EBP);
  /* 11530835 pop ebp */
  EBP = (pop32());
  /* 11530836 ret  */
  ESPCHK(0x115307c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010840 @ 0x11530840 (160 bytes, 50 insns) */
void f_11530840(void) {
  FTRACE(0x11530840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530840 push ebp */
  push32((uint32_t)(EBP));
  /* 11530841 mov ebp, esp */
  EBP = (ESP);
  /* 11530843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11530846 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153084a jne 0x11530853 */
  if (!C.zf) goto L_11530853;
  /* 1153084c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153084e jmp 0x115308dc */
  goto L_115308dc;
L_11530853:;
  /* 11530853 cmp dword ptr [0x11553a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153085a jne 0x1153088a */
  if (!C.zf) goto L_1153088a;
  /* 1153085c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153085f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11530864 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530869 jle 0x1153087b */
  if ((C.zf||C.sf!=C.of)) goto L_1153087b;
  /* 1153086b call 0x1152f7a0 */
  push32(0x11530870u); f_1152f7a0();
  /* 11530870 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11530876 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11530879 jmp 0x115308dc */
  goto L_115308dc;
L_1153087b:;
  /* 1153087b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153087e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11530881 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11530883 mov eax, 1 */
  EAX = (0x1u);
  /* 11530888 jmp 0x115308dc */
  goto L_115308dc;
L_1153088a:;
  /* 1153088a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11530891 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11530894 push eax */
  push32((uint32_t)(EAX));
  /* 11530895 push 0 */
  push32((uint32_t)(0x0u));
  /* 11530897 mov ecx, dword ptr [0x11551ea4] */
  ECX = (r32((uint32_t)(0x11551ea4)));
  /* 1153089d push ecx */
  push32((uint32_t)(ECX));
  /* 1153089e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115308a1 push edx */
  push32((uint32_t)(EDX));
  /* 115308a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115308a4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 115308a7 push eax */
  push32((uint32_t)(EAX));
  /* 115308a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115308ad mov ecx, dword ptr [0x11553a70] */
  ECX = (r32((uint32_t)(0x11553a70)));
  /* 115308b3 push ecx */
  push32((uint32_t)(ECX));
  /* 115308b4 call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x115308bau);
  /* 115308ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115308bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115308c1 je 0x115308c9 */
  if (C.zf) goto L_115308c9;
  /* 115308c3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115308c7 je 0x115308d9 */
  if (C.zf) goto L_115308d9;
L_115308c9:;
  /* 115308c9 call 0x1152f7a0 */
  push32(0x115308ceu); f_1152f7a0();
  /* 115308ce mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 115308d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115308d7 jmp 0x115308dc */
  goto L_115308dc;
L_115308d9:;
  /* 115308d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115308dc:;
  /* 115308dc mov esp, ebp */
  ESP = (EBP);
  /* 115308de pop ebp */
  EBP = (pop32());
  /* 115308df ret  */
  ESPCHK(0x11530840u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x115308e0 (32 bytes, 18 insns) */
void f_115308e0(void) {
  FTRACE(0x115308e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115308e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115308e1 mov ebp, esp */
  EBP = (ESP);
  /* 115308e3 push ebx */
  push32((uint32_t)(EBX));
  /* 115308e4 push esi */
  push32((uint32_t)(ESI));
  /* 115308e5 push edi */
  push32((uint32_t)(EDI));
  /* 115308e6 push ebp */
  push32((uint32_t)(EBP));
  /* 115308e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115308e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115308eb push 0x115308f8 */
  push32((uint32_t)(0x115308f8u));
  /* 115308f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115308f3 call 0x1153802c */
  push32(0x115308f8u); f_1153802c();
  /* 115308f8 pop ebp */
  EBP = (pop32());
  /* 115308f9 pop edi */
  EDI = (pop32());
  /* 115308fa pop esi */
  ESI = (pop32());
  /* 115308fb pop ebx */
  EBX = (pop32());
  /* 115308fc mov esp, ebp */
  ESP = (EBP);
  /* 115308fe pop ebp */
  EBP = (pop32());
  /* 115308ff ret  */
  ESPCHK(0x115308e0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11530922 (104 bytes, 33 insns) */
void f_11530922(void) {
  FTRACE(0x11530922u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530922 push ebx */
  push32((uint32_t)(EBX));
  /* 11530923 push esi */
  push32((uint32_t)(ESI));
  /* 11530924 push edi */
  push32((uint32_t)(EDI));
  /* 11530925 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11530929 push eax */
  push32((uint32_t)(EAX));
  /* 1153092a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1153092c push 0x11530900 */
  push32((uint32_t)(0x11530900u));
  /* 11530931 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11530938 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1153093f:;
  /* 1153093f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11530943 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11530946 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11530949 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153094c je 0x1153097c */
  if (C.zf) goto L_1153097c;
  /* 1153094e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530952 je 0x1153097c */
  if (C.zf) goto L_1153097c;
  /* 11530954 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11530957 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1153095a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1153095e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11530961 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530966 jne 0x1153097a */
  if (!C.zf) goto L_1153097a;
  /* 11530968 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1153096d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11530971 call 0x115309b6 */
  push32(0x11530976u); f_115309b6();
  /* 11530976 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1153097au);
L_1153097a:;
  /* 1153097a jmp 0x1153093f */
  goto L_1153093f;
L_1153097c:;
  /* 1153097c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11530983 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530986 pop edi */
  EDI = (pop32());
  /* 11530987 pop esi */
  ESI = (pop32());
  /* 11530988 pop ebx */
  EBX = (pop32());
  /* 11530989 ret  */
  ESPCHK(0x11530922u, _esp0);
  ESP += 4; return;
}

/* FUN_100109b6 @ 0x115309b6 (24 bytes, 10 insns) */
void f_115309b6(void) {
  FTRACE(0x115309b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115309b6 push ebx */
  push32((uint32_t)(EBX));
  /* 115309b7 push ecx */
  push32((uint32_t)(ECX));
  /* 115309b8 mov ebx, 0x115523b8 */
  EBX = (0x115523b8u);
  /* 115309bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115309c0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 115309c3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 115309c6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 115309c9 pop ecx */
  ECX = (pop32());
  /* 115309ca pop ebx */
  EBX = (pop32());
  /* 115309cb ret 4 */
  ESPCHK(0x115309b6u, _esp0);
  ESP += 8; return;
}

/* FUN_10010a95 @ 0x11530a95 (27 bytes, 11 insns) */
void f_11530a95(void) {
  FTRACE(0x11530a95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530a95 push ebp */
  push32((uint32_t)(EBP));
  /* 11530a96 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11530a9a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11530a9c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11530a9f push eax */
  push32((uint32_t)(EAX));
  /* 11530aa0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11530aa3 push eax */
  push32((uint32_t)(EAX));
  /* 11530aa4 call 0x11530922 */
  push32(0x11530aa9u); f_11530922();
  /* 11530aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530aac pop ebp */
  EBP = (pop32());
  /* 11530aad ret 4 */
  ESPCHK(0x11530a95u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ab0 @ 0x11530ab0 (482 bytes, 138 insns) */
void f_11530ab0(void) {
  FTRACE(0x11530ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11530ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11530ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11530ab6 push esi */
  push32((uint32_t)(ESI));
  /* 11530ab7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11530abe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11530ac0 call 0x1152b2d0 */
  push32(0x11530ac5u); f_1152b2d0();
  /* 11530ac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530ac8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11530acf jmp 0x11530ada */
  goto L_11530ada;
L_11530ad1:;
  /* 11530ad1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11530ad4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530ad7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11530ada:;
  /* 11530ada cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530ade jge 0x11530c80 */
  if ((C.sf==C.of)) goto L_11530c80;
  /* 11530ae4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11530ae7 cmp dword ptr [ecx*4 + 0x11555240], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11555240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530aef je 0x11530be6 */
  if (C.zf) goto L_11530be6;
  /* 11530af5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11530af8 mov eax, dword ptr [edx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11555240)));
  /* 11530aff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11530b02 jmp 0x11530b0d */
  goto L_11530b0d;
L_11530b04:;
  /* 11530b04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530b07 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530b0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11530b0d:;
  /* 11530b0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11530b10 mov eax, dword ptr [edx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11555240)));
  /* 11530b17 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530b1c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530b1f jae 0x11530bd6 */
  if (!C.cf) goto L_11530bd6;
  /* 11530b25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530b28 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11530b2c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11530b2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11530b31 jne 0x11530bd1 */
  if (!C.zf) goto L_11530bd1;
  /* 11530b37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530b3a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530b3e jne 0x11530b79 */
  if (!C.zf) goto L_11530b79;
  /* 11530b40 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11530b42 call 0x1152b2d0 */
  push32(0x11530b47u); f_1152b2d0();
  /* 11530b47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530b4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530b4d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530b51 jne 0x11530b6f */
  if (!C.zf) goto L_11530b6f;
  /* 11530b53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530b56 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530b59 push edx */
  push32((uint32_t)(EDX));
  /* 11530b5a call dword ptr [0x1155636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155636c))), 0x11530b60u);
  /* 11530b60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530b63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11530b66 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530b69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530b6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11530b6f:;
  /* 11530b6f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11530b71 call 0x1152b370 */
  push32(0x11530b76u); f_1152b370();
  /* 11530b76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11530b79:;
  /* 11530b79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530b7c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530b7f push eax */
  push32((uint32_t)(EAX));
  /* 11530b80 call dword ptr [0x11556368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556368))), 0x11530b86u);
  /* 11530b86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530b89 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11530b8d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11530b90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11530b92 je 0x11530ba6 */
  if (C.zf) goto L_11530ba6;
  /* 11530b94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530b97 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530b9a push eax */
  push32((uint32_t)(EAX));
  /* 11530b9b call dword ptr [0x11556364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556364))), 0x11530ba1u);
  /* 11530ba1 jmp 0x11530b04 */
  goto L_11530b04;
L_11530ba6:;
  /* 11530ba6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530ba9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11530baf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11530bb2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11530bb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11530bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530bbb sub eax, dword ptr [edx*4 + 0x11555240] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11555240))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11530bc2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11530bc3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11530bc8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11530bca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530bcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11530bcf jmp 0x11530bd6 */
  goto L_11530bd6;
L_11530bd1:;
  /* 11530bd1 jmp 0x11530b04 */
  goto L_11530b04;
L_11530bd6:;
  /* 11530bd6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530bda je 0x11530be1 */
  if (C.zf) goto L_11530be1;
  /* 11530bdc jmp 0x11530c80 */
  goto L_11530c80;
L_11530be1:;
  /* 11530be1 jmp 0x11530c7b */
  goto L_11530c7b;
L_11530be6:;
  /* 11530be6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11530be8 push 0x1154f4fc */
  push32((uint32_t)(0x1154f4fcu));
  /* 11530bed push 2 */
  push32((uint32_t)(0x2u));
  /* 11530bef push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11530bf4 call 0x115278d0 */
  push32(0x11530bf9u); f_115278d0();
  /* 11530bf9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530bfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11530bff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530c03 je 0x11530c79 */
  if (C.zf) goto L_11530c79;
  /* 11530c05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11530c08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530c0b mov dword ptr [eax*4 + 0x11555240], ecx */
  w32((uint32_t)(EAX*4 + 0x11555240), (ECX));
  /* 11530c12 mov edx, dword ptr [0x1155537c] */
  EDX = (r32((uint32_t)(0x1155537c)));
  /* 11530c18 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530c1b mov dword ptr [0x1155537c], edx */
  w32((uint32_t)(0x1155537c), (EDX));
  /* 11530c21 jmp 0x11530c2c */
  goto L_11530c2c;
L_11530c23:;
  /* 11530c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530c26 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530c29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11530c2c:;
  /* 11530c2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11530c2f mov edx, dword ptr [ecx*4 + 0x11555240] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 11530c36 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530c3c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530c3f jae 0x11530c64 */
  if (!C.cf) goto L_11530c64;
  /* 11530c41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530c44 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11530c48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530c4b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11530c51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530c54 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11530c58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530c5b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11530c62 jmp 0x11530c23 */
  goto L_11530c23;
L_11530c64:;
  /* 11530c64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11530c67 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11530c6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11530c6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11530c70 push edx */
  push32((uint32_t)(EDX));
  /* 11530c71 call 0x11530fc0 */
  push32(0x11530c76u); f_11530fc0();
  /* 11530c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11530c79:;
  /* 11530c79 jmp 0x11530c80 */
  goto L_11530c80;
L_11530c7b:;
  /* 11530c7b jmp 0x11530ad1 */
  goto L_11530ad1;
L_11530c80:;
  /* 11530c80 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11530c82 call 0x1152b370 */
  push32(0x11530c87u); f_1152b370();
  /* 11530c87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530c8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11530c8d pop esi */
  ESI = (pop32());
  /* 11530c8e mov esp, ebp */
  ESP = (EBP);
  /* 11530c90 pop ebp */
  EBP = (pop32());
  /* 11530c91 ret  */
  ESPCHK(0x11530ab0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11530ca0 (183 bytes, 57 insns) */
void f_11530ca0(void) {
  FTRACE(0x11530ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11530ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11530ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 11530ca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530ca7 cmp eax, dword ptr [0x1155537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1155537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530cad jae 0x11530d3a */
  if (!C.cf) goto L_11530d3a;
  /* 11530cb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530cb6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11530cb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530cbc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11530cbf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530cc2 mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 11530cc9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530ccd jne 0x11530d3a */
  if (!C.zf) goto L_11530d3a;
  /* 11530ccf cmp dword ptr [0x11553858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530cd6 jne 0x11530d1a */
  if (!C.zf) goto L_11530d1a;
  /* 11530cd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530cdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11530cde cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530ce2 je 0x11530cf2 */
  if (C.zf) goto L_11530cf2;
  /* 11530ce4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530ce8 je 0x11530d00 */
  if (C.zf) goto L_11530d00;
  /* 11530cea cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530cee je 0x11530d0e */
  if (C.zf) goto L_11530d0e;
  /* 11530cf0 jmp 0x11530d1a */
  goto L_11530d1a;
L_11530cf2:;
  /* 11530cf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11530cf5 push edx */
  push32((uint32_t)(EDX));
  /* 11530cf6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11530cf8 call dword ptr [0x11556324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556324))), 0x11530cfeu);
  /* 11530cfe jmp 0x11530d1a */
  goto L_11530d1a;
L_11530d00:;
  /* 11530d00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11530d03 push eax */
  push32((uint32_t)(EAX));
  /* 11530d04 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11530d06 call dword ptr [0x11556324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556324))), 0x11530d0cu);
  /* 11530d0c jmp 0x11530d1a */
  goto L_11530d1a;
L_11530d0e:;
  /* 11530d0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11530d11 push ecx */
  push32((uint32_t)(ECX));
  /* 11530d12 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11530d14 call dword ptr [0x11556324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556324))), 0x11530d1au);
L_11530d1a:;
  /* 11530d1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530d1d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11530d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530d23 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11530d26 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530d29 mov ecx, dword ptr [edx*4 + 0x11555240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11555240)));
  /* 11530d30 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11530d33 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11530d36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11530d38 jmp 0x11530d53 */
  goto L_11530d53;
L_11530d3a:;
  /* 11530d3a call 0x1152f7a0 */
  push32(0x11530d3fu); f_1152f7a0();
  /* 11530d3f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11530d45 call 0x1152f7b0 */
  push32(0x11530d4au); f_1152f7b0();
  /* 11530d4a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11530d50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11530d53:;
  /* 11530d53 mov esp, ebp */
  ESP = (EBP);
  /* 11530d55 pop ebp */
  EBP = (pop32());
  /* 11530d56 ret  */
  ESPCHK(0x11530ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d60 @ 0x11530d60 (216 bytes, 63 insns) */
void f_11530d60(void) {
  FTRACE(0x11530d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11530d61 mov ebp, esp */
  EBP = (ESP);
  /* 11530d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11530d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530d67 cmp eax, dword ptr [0x1155537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1155537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530d6d jae 0x11530e1b */
  if (!C.cf) goto L_11530e1b;
  /* 11530d73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530d76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11530d79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530d7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11530d7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530d82 mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 11530d89 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11530d8e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11530d91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11530d93 je 0x11530e1b */
  if (C.zf) goto L_11530e1b;
  /* 11530d99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530d9c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11530d9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530da2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11530da5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530da8 mov ecx, dword ptr [edx*4 + 0x11555240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11555240)));
  /* 11530daf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530db3 je 0x11530e1b */
  if (C.zf) goto L_11530e1b;
  /* 11530db5 cmp dword ptr [0x11553858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530dbc jne 0x11530dfa */
  if (!C.zf) goto L_11530dfa;
  /* 11530dbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530dc1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11530dc4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530dc8 je 0x11530dd8 */
  if (C.zf) goto L_11530dd8;
  /* 11530dca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530dce je 0x11530de4 */
  if (C.zf) goto L_11530de4;
  /* 11530dd0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530dd4 je 0x11530df0 */
  if (C.zf) goto L_11530df0;
  /* 11530dd6 jmp 0x11530dfa */
  goto L_11530dfa;
L_11530dd8:;
  /* 11530dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11530dda push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11530ddc call dword ptr [0x11556324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556324))), 0x11530de2u);
  /* 11530de2 jmp 0x11530dfa */
  goto L_11530dfa;
L_11530de4:;
  /* 11530de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11530de6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11530de8 call dword ptr [0x11556324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556324))), 0x11530deeu);
  /* 11530dee jmp 0x11530dfa */
  goto L_11530dfa;
L_11530df0:;
  /* 11530df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11530df2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11530df4 call dword ptr [0x11556324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556324))), 0x11530dfau);
L_11530dfa:;
  /* 11530dfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530dfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11530e00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530e03 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11530e06 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530e09 mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 11530e10 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11530e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11530e19 jmp 0x11530e34 */
  goto L_11530e34;
L_11530e1b:;
  /* 11530e1b call 0x1152f7a0 */
  push32(0x11530e20u); f_1152f7a0();
  /* 11530e20 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11530e26 call 0x1152f7b0 */
  push32(0x11530e2bu); f_1152f7b0();
  /* 11530e2b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11530e31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11530e34:;
  /* 11530e34 mov esp, ebp */
  ESP = (EBP);
  /* 11530e36 pop ebp */
  EBP = (pop32());
  /* 11530e37 ret  */
  ESPCHK(0x11530d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e40 @ 0x11530e40 (102 bytes, 30 insns) */
void f_11530e40(void) {
  FTRACE(0x11530e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11530e41 mov ebp, esp */
  EBP = (ESP);
  /* 11530e43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530e46 cmp eax, dword ptr [0x1155537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1155537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530e4c jae 0x11530e8b */
  if (!C.cf) goto L_11530e8b;
  /* 11530e4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530e51 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11530e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530e57 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11530e5a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530e5d mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 11530e64 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11530e69 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11530e6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11530e6e je 0x11530e8b */
  if (C.zf) goto L_11530e8b;
  /* 11530e70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530e73 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11530e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530e79 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11530e7c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530e7f mov ecx, dword ptr [edx*4 + 0x11555240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11555240)));
  /* 11530e86 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11530e89 jmp 0x11530ea4 */
  goto L_11530ea4;
L_11530e8b:;
  /* 11530e8b call 0x1152f7a0 */
  push32(0x11530e90u); f_1152f7a0();
  /* 11530e90 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11530e96 call 0x1152f7b0 */
  push32(0x11530e9bu); f_1152f7b0();
  /* 11530e9b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11530ea1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11530ea4:;
  /* 11530ea4 pop ebp */
  EBP = (pop32());
  /* 11530ea5 ret  */
  ESPCHK(0x11530e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010eb0 @ 0x11530eb0 (260 bytes, 83 insns) */
void f_11530eb0(void) {
  FTRACE(0x11530eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11530eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11530eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11530eb6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11530eba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11530ebd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11530ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11530ec2 je 0x11530ecd */
  if (C.zf) goto L_11530ecd;
  /* 11530ec4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11530ec7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11530eca mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11530ecd:;
  /* 11530ecd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11530ed0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11530ed6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11530ed8 je 0x11530ee2 */
  if (C.zf) goto L_11530ee2;
  /* 11530eda mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11530edd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11530edf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11530ee2:;
  /* 11530ee2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11530ee5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11530eeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11530eed je 0x11530ef8 */
  if (C.zf) goto L_11530ef8;
  /* 11530eef mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11530ef2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11530ef5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11530ef8:;
  /* 11530ef8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530efb push eax */
  push32((uint32_t)(EAX));
  /* 11530efc call dword ptr [0x115563ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563ac))), 0x11530f02u);
  /* 11530f02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11530f05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530f09 jne 0x11530f22 */
  if (!C.zf) goto L_11530f22;
  /* 11530f0b call dword ptr [0x11556400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556400))), 0x11530f11u);
  /* 11530f11 push eax */
  push32((uint32_t)(EAX));
  /* 11530f12 call 0x1152f700 */
  push32(0x11530f17u); f_1152f700();
  /* 11530f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530f1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11530f1d jmp 0x11530fb0 */
  goto L_11530fb0;
L_11530f22:;
  /* 11530f22 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530f26 jne 0x11530f33 */
  if (!C.zf) goto L_11530f33;
  /* 11530f28 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11530f2b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11530f2e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11530f31 jmp 0x11530f42 */
  goto L_11530f42;
L_11530f33:;
  /* 11530f33 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530f37 jne 0x11530f42 */
  if (!C.zf) goto L_11530f42;
  /* 11530f39 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11530f3c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11530f3f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11530f42:;
  /* 11530f42 call 0x11530ab0 */
  push32(0x11530f47u); f_11530ab0();
  /* 11530f47 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11530f4a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530f4e jne 0x11530f6b */
  if (!C.zf) goto L_11530f6b;
  /* 11530f50 call 0x1152f7a0 */
  push32(0x11530f55u); f_1152f7a0();
  /* 11530f55 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11530f5b call 0x1152f7b0 */
  push32(0x11530f60u); f_1152f7b0();
  /* 11530f60 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11530f66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11530f69 jmp 0x11530fb0 */
  goto L_11530fb0;
L_11530f6b:;
  /* 11530f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530f6e push eax */
  push32((uint32_t)(EAX));
  /* 11530f6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11530f72 push ecx */
  push32((uint32_t)(ECX));
  /* 11530f73 call 0x11530ca0 */
  push32(0x11530f78u); f_11530ca0();
  /* 11530f78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530f7b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11530f7e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11530f81 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11530f84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11530f87 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11530f8a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11530f8d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11530f90 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530f93 mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 11530f9a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11530f9d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11530fa1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11530fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11530fa5 call 0x11531050 */
  push32(0x11530faau); f_11531050();
  /* 11530faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530fad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11530fb0:;
  /* 11530fb0 mov esp, ebp */
  ESP = (EBP);
  /* 11530fb2 pop ebp */
  EBP = (pop32());
  /* 11530fb3 ret  */
  ESPCHK(0x11530eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fc0 @ 0x11530fc0 (134 bytes, 44 insns) */
void f_11530fc0(void) {
  FTRACE(0x11530fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11530fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11530fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11530fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11530fc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530fc7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11530fca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11530fcd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11530fd0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11530fd3 mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 11530fda add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11530fdc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11530fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530fe2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530fe6 jne 0x11531021 */
  if (!C.zf) goto L_11531021;
  /* 11530fe8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11530fea call 0x1152b2d0 */
  push32(0x11530fefu); f_1152b2d0();
  /* 11530fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11530ff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530ff5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11530ff9 jne 0x11531017 */
  if (!C.zf) goto L_11531017;
  /* 11530ffb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11530ffe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531001 push edx */
  push32((uint32_t)(EDX));
  /* 11531002 call dword ptr [0x1155636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155636c))), 0x11531008u);
  /* 11531008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153100b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1153100e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531011 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531014 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11531017:;
  /* 11531017 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11531019 call 0x1152b370 */
  push32(0x1153101eu); f_1152b370();
  /* 1153101e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11531021:;
  /* 11531021 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531024 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11531027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153102a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1153102d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531030 mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 11531037 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1153103b push eax */
  push32((uint32_t)(EAX));
  /* 1153103c call dword ptr [0x11556368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556368))), 0x11531042u);
  /* 11531042 mov esp, ebp */
  ESP = (EBP);
  /* 11531044 pop ebp */
  EBP = (pop32());
  /* 11531045 ret  */
  ESPCHK(0x11530fc0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11531050 (38 bytes, 13 insns) */
void f_11531050(void) {
  FTRACE(0x11531050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531050 push ebp */
  push32((uint32_t)(EBP));
  /* 11531051 mov ebp, esp */
  EBP = (ESP);
  /* 11531053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531056 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11531059 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153105c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1153105f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531062 mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 11531069 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1153106d push eax */
  push32((uint32_t)(EAX));
  /* 1153106e call dword ptr [0x11556364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556364))), 0x11531074u);
  /* 11531074 pop ebp */
  EBP = (pop32());
  /* 11531075 ret  */
  ESPCHK(0x11531050u, _esp0);
  ESP += 4; return;
}

/* FUN_10011080 @ 0x11531080 (218 bytes, 63 insns) */
void f_11531080(void) {
  FTRACE(0x11531080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531080 push ebp */
  push32((uint32_t)(EBP));
  /* 11531081 mov ebp, esp */
  EBP = (ESP);
  /* 11531083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531086 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1153108d push 2 */
  push32((uint32_t)(0x2u));
  /* 1153108f call 0x1152b2d0 */
  push32(0x11531094u); f_1152b2d0();
  /* 11531094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531097 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1153109e jmp 0x115310a9 */
  goto L_115310a9;
L_115310a0:;
  /* 115310a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115310a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115310a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115310a9:;
  /* 115310a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115310ac cmp ecx, dword ptr [0x11554f40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11554f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115310b2 jge 0x11531149 */
  if ((C.sf==C.of)) goto L_11531149;
  /* 115310b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115310bb mov eax, dword ptr [0x11553bf0] */
  EAX = (r32((uint32_t)(0x11553bf0)));
  /* 115310c0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115310c4 je 0x11531144 */
  if (C.zf) goto L_11531144;
  /* 115310c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115310c9 mov edx, dword ptr [0x11553bf0] */
  EDX = (r32((uint32_t)(0x11553bf0)));
  /* 115310cf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 115310d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115310d5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 115310db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115310dd je 0x11531101 */
  if (C.zf) goto L_11531101;
  /* 115310df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115310e2 mov eax, dword ptr [0x11553bf0] */
  EAX = (r32((uint32_t)(0x11553bf0)));
  /* 115310e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 115310ea push ecx */
  push32((uint32_t)(ECX));
  /* 115310eb call 0x11531e70 */
  push32(0x115310f0u); f_11531e70();
  /* 115310f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115310f3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115310f6 je 0x11531101 */
  if (C.zf) goto L_11531101;
  /* 115310f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115310fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115310fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11531101:;
  /* 11531101 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531105 jl 0x11531144 */
  if ((C.sf!=C.of)) goto L_11531144;
  /* 11531107 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1153110a mov ecx, dword ptr [0x11553bf0] */
  ECX = (r32((uint32_t)(0x11553bf0)));
  /* 11531110 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11531113 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531116 push edx */
  push32((uint32_t)(EDX));
  /* 11531117 call dword ptr [0x115563a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a4))), 0x1153111du);
  /* 1153111d push 2 */
  push32((uint32_t)(0x2u));
  /* 1153111f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531122 mov ecx, dword ptr [0x11553bf0] */
  ECX = (r32((uint32_t)(0x11553bf0)));
  /* 11531128 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1153112b push edx */
  push32((uint32_t)(EDX));
  /* 1153112c call 0x11528360 */
  push32(0x11531131u); f_11528360();
  /* 11531131 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531134 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531137 mov ecx, dword ptr [0x11553bf0] */
  ECX = (r32((uint32_t)(0x11553bf0)));
  /* 1153113d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11531144:;
  /* 11531144 jmp 0x115310a0 */
  goto L_115310a0;
L_11531149:;
  /* 11531149 push 2 */
  push32((uint32_t)(0x2u));
  /* 1153114b call 0x1152b370 */
  push32(0x11531150u); f_1152b370();
  /* 11531150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531153 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531156 mov esp, ebp */
  ESP = (EBP);
  /* 11531158 pop ebp */
  EBP = (pop32());
  /* 11531159 ret  */
  ESPCHK(0x11531080u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x11531160 (68 bytes, 26 insns) */
void f_11531160(void) {
  FTRACE(0x11531160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531160 push ebp */
  push32((uint32_t)(EBP));
  /* 11531161 mov ebp, esp */
  EBP = (ESP);
  /* 11531163 push ecx */
  push32((uint32_t)(ECX));
  /* 11531164 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531168 jne 0x11531176 */
  if (!C.zf) goto L_11531176;
  /* 1153116a push 0 */
  push32((uint32_t)(0x0u));
  /* 1153116c call 0x115312d0 */
  push32(0x11531171u); f_115312d0();
  /* 11531171 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531174 jmp 0x115311a0 */
  goto L_115311a0;
L_11531176:;
  /* 11531176 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531179 push eax */
  push32((uint32_t)(EAX));
  /* 1153117a call 0x115306e0 */
  push32(0x1153117fu); f_115306e0();
  /* 1153117f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531182 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531185 push ecx */
  push32((uint32_t)(ECX));
  /* 11531186 call 0x115311b0 */
  push32(0x1153118bu); f_115311b0();
  /* 1153118b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153118e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11531191 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531194 push edx */
  push32((uint32_t)(EDX));
  /* 11531195 call 0x11530750 */
  push32(0x1153119au); f_11530750();
  /* 1153119a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153119d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115311a0:;
  /* 115311a0 mov esp, ebp */
  ESP = (EBP);
  /* 115311a2 pop ebp */
  EBP = (pop32());
  /* 115311a3 ret  */
  ESPCHK(0x11531160u, _esp0);
  ESP += 4; return;
}

/* FUN_100111b0 @ 0x115311b0 (65 bytes, 26 insns) */
void f_115311b0(void) {
  FTRACE(0x115311b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115311b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115311b1 mov ebp, esp */
  EBP = (ESP);
  /* 115311b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115311b6 push eax */
  push32((uint32_t)(EAX));
  /* 115311b7 call 0x11531200 */
  push32(0x115311bcu); f_11531200();
  /* 115311bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115311bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115311c1 je 0x115311c8 */
  if (C.zf) goto L_115311c8;
  /* 115311c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115311c6 jmp 0x115311ef */
  goto L_115311ef;
L_115311c8:;
  /* 115311c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115311cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115311ce and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 115311d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115311d6 je 0x115311ed */
  if (C.zf) goto L_115311ed;
  /* 115311d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115311db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115311de push ecx */
  push32((uint32_t)(ECX));
  /* 115311df call 0x11531fc0 */
  push32(0x115311e4u); f_11531fc0();
  /* 115311e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115311e7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115311e9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115311eb jmp 0x115311ef */
  goto L_115311ef;
L_115311ed:;
  /* 115311ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115311ef:;
  /* 115311ef pop ebp */
  EBP = (pop32());
  /* 115311f0 ret  */
  ESPCHK(0x115311b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x11531200 (183 bytes, 62 insns) */
void f_11531200(void) {
  FTRACE(0x11531200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531200 push ebp */
  push32((uint32_t)(EBP));
  /* 11531201 mov ebp, esp */
  EBP = (ESP);
  /* 11531203 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531206 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1153120d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531210 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11531213 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531216 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11531219 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1153121c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153121f jne 0x1153129b */
  if (!C.zf) goto L_1153129b;
  /* 11531221 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531224 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11531227 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1153122d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1153122f je 0x1153129b */
  if (C.zf) goto L_1153129b;
  /* 11531231 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531234 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531237 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11531239 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153123c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153123f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531243 jle 0x1153129b */
  if ((C.zf||C.sf!=C.of)) goto L_1153129b;
  /* 11531245 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531248 push edx */
  push32((uint32_t)(EDX));
  /* 11531249 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1153124c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1153124f push ecx */
  push32((uint32_t)(ECX));
  /* 11531250 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531253 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11531256 push eax */
  push32((uint32_t)(EAX));
  /* 11531257 call 0x11530170 */
  push32(0x1153125cu); f_11530170();
  /* 1153125c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153125f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531262 jne 0x11531285 */
  if (!C.zf) goto L_11531285;
  /* 11531264 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531267 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1153126a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11531270 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11531272 je 0x11531283 */
  if (C.zf) goto L_11531283;
  /* 11531274 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531277 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1153127a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1153127d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531280 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11531283:;
  /* 11531283 jmp 0x1153129b */
  goto L_1153129b;
L_11531285:;
  /* 11531285 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531288 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1153128b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1153128e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531291 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11531294 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1153129b:;
  /* 1153129b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1153129e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115312a1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115312a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115312a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115312a9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 115312b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115312b3 mov esp, ebp */
  ESP = (EBP);
  /* 115312b5 pop ebp */
  EBP = (pop32());
  /* 115312b6 ret  */
  ESPCHK(0x11531200u, _esp0);
  ESP += 4; return;
}

/* FUN_100112c0 @ 0x115312c0 (15 bytes, 7 insns) */
void f_115312c0(void) {
  FTRACE(0x115312c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115312c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115312c1 mov ebp, esp */
  EBP = (ESP);
  /* 115312c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115312c5 call 0x115312d0 */
  push32(0x115312cau); f_115312d0();
  /* 115312ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115312cd pop ebp */
  EBP = (pop32());
  /* 115312ce ret  */
  ESPCHK(0x115312c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112d0 @ 0x115312d0 (319 bytes, 94 insns) */
void f_115312d0(void) {
  FTRACE(0x115312d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115312d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115312d1 mov ebp, esp */
  EBP = (ESP);
  /* 115312d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115312d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115312dd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115312e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 115312e6 call 0x1152b2d0 */
  push32(0x115312ebu); f_1152b2d0();
  /* 115312eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115312ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115312f5 jmp 0x11531300 */
  goto L_11531300;
L_115312f7:;
  /* 115312f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115312fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115312fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11531300:;
  /* 11531300 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531303 cmp ecx, dword ptr [0x11554f40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11554f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531309 jge 0x115313f3 */
  if ((C.sf==C.of)) goto L_115313f3;
  /* 1153130f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531312 mov eax, dword ptr [0x11553bf0] */
  EAX = (r32((uint32_t)(0x11553bf0)));
  /* 11531317 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153131b je 0x115313ee */
  if (C.zf) goto L_115313ee;
  /* 11531321 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531324 mov edx, dword ptr [0x11553bf0] */
  EDX = (r32((uint32_t)(0x11553bf0)));
  /* 1153132a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1153132d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11531330 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11531336 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11531338 je 0x115313ee */
  if (C.zf) goto L_115313ee;
  /* 1153133e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531341 mov eax, dword ptr [0x11553bf0] */
  EAX = (r32((uint32_t)(0x11553bf0)));
  /* 11531346 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11531349 push ecx */
  push32((uint32_t)(ECX));
  /* 1153134a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153134d push edx */
  push32((uint32_t)(EDX));
  /* 1153134e call 0x11530720 */
  push32(0x11531353u); f_11530720();
  /* 11531353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531356 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531359 mov ecx, dword ptr [0x11553bf0] */
  ECX = (r32((uint32_t)(0x11553bf0)));
  /* 1153135f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11531362 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11531365 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1153136a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153136c je 0x115313d5 */
  if (C.zf) goto L_115313d5;
  /* 1153136e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531372 jne 0x11531399 */
  if (!C.zf) goto L_11531399;
  /* 11531374 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531377 mov edx, dword ptr [0x11553bf0] */
  EDX = (r32((uint32_t)(0x11553bf0)));
  /* 1153137d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11531380 push eax */
  push32((uint32_t)(EAX));
  /* 11531381 call 0x115311b0 */
  push32(0x11531386u); f_115311b0();
  /* 11531386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531389 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153138c je 0x11531397 */
  if (C.zf) goto L_11531397;
  /* 1153138e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531391 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531394 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11531397:;
  /* 11531397 jmp 0x115313d5 */
  goto L_115313d5;
L_11531399:;
  /* 11531399 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153139d jne 0x115313d5 */
  if (!C.zf) goto L_115313d5;
  /* 1153139f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115313a2 mov eax, dword ptr [0x11553bf0] */
  EAX = (r32((uint32_t)(0x11553bf0)));
  /* 115313a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 115313aa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115313ad and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 115313b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115313b2 je 0x115313d5 */
  if (C.zf) goto L_115313d5;
  /* 115313b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115313b7 mov ecx, dword ptr [0x11553bf0] */
  ECX = (r32((uint32_t)(0x11553bf0)));
  /* 115313bd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 115313c0 push edx */
  push32((uint32_t)(EDX));
  /* 115313c1 call 0x115311b0 */
  push32(0x115313c6u); f_115311b0();
  /* 115313c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115313c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115313cc jne 0x115313d5 */
  if (!C.zf) goto L_115313d5;
  /* 115313ce mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_115313d5:;
  /* 115313d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115313d8 mov ecx, dword ptr [0x11553bf0] */
  ECX = (r32((uint32_t)(0x11553bf0)));
  /* 115313de mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 115313e1 push edx */
  push32((uint32_t)(EDX));
  /* 115313e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115313e5 push eax */
  push32((uint32_t)(EAX));
  /* 115313e6 call 0x11530790 */
  push32(0x115313ebu); f_11530790();
  /* 115313eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115313ee:;
  /* 115313ee jmp 0x115312f7 */
  goto L_115312f7;
L_115313f3:;
  /* 115313f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115313f5 call 0x1152b370 */
  push32(0x115313fau); f_1152b370();
  /* 115313fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115313fd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531401 jne 0x11531408 */
  if (!C.zf) goto L_11531408;
  /* 11531403 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531406 jmp 0x1153140b */
  goto L_1153140b;
L_11531408:;
  /* 11531408 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1153140b:;
  /* 1153140b mov esp, ebp */
  ESP = (EBP);
  /* 1153140d pop ebp */
  EBP = (pop32());
  /* 1153140e ret  */
  ESPCHK(0x115312d0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11531410 (15 bytes, 7 insns) */
void f_11531410(void) {
  FTRACE(0x11531410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531410 push ebp */
  push32((uint32_t)(EBP));
  /* 11531411 mov ebp, esp */
  EBP = (ESP);
  /* 11531413 push 2 */
  push32((uint32_t)(0x2u));
  /* 11531415 call 0x11526840 */
  push32(0x1153141au); f_11526840();
  /* 1153141a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153141d pop ebp */
  EBP = (pop32());
  /* 1153141e ret  */
  ESPCHK(0x11531410u, _esp0);
  ESP += 4; return;
}

/* FUN_10011420 @ 0x11531420 (1007 bytes, 269 insns) */
void f_11531420(void) {
  FTRACE(0x11531420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531420 push ebp */
  push32((uint32_t)(EBP));
  /* 11531421 mov ebp, esp */
  EBP = (ESP);
  /* 11531423 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531429 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153142d jl 0x11531435 */
  if ((C.sf!=C.of)) goto L_11531435;
  /* 1153142f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531433 jle 0x1153143c */
  if ((C.zf||C.sf!=C.of)) goto L_1153143c;
L_11531435:;
  /* 11531435 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11531437 jmp 0x1153180b */
  goto L_1153180b;
L_1153143c:;
  /* 1153143c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1153143e call 0x1152b2d0 */
  push32(0x11531443u); f_1152b2d0();
  /* 11531443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531446 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1153144d mov eax, dword ptr [0x11553bdc] */
  EAX = (r32((uint32_t)(0x11553bdc)));
  /* 11531452 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531455 mov dword ptr [0x11553bdc], eax */
  w32((uint32_t)(0x11553bdc), (EAX));
L_1153145a:;
  /* 1153145a cmp dword ptr [0x11553bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531461 je 0x1153146d */
  if (C.zf) goto L_1153146d;
  /* 11531463 push 1 */
  push32((uint32_t)(0x1u));
  /* 11531465 call dword ptr [0x11556320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556320))), 0x1153146bu);
  /* 1153146b jmp 0x1153145a */
  goto L_1153145a;
L_1153146d:;
  /* 1153146d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531471 je 0x115314b1 */
  if (C.zf) goto L_115314b1;
  /* 11531473 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531477 je 0x11531491 */
  if (C.zf) goto L_11531491;
  /* 11531479 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153147c push ecx */
  push32((uint32_t)(ECX));
  /* 1153147d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531480 push edx */
  push32((uint32_t)(EDX));
  /* 11531481 call 0x11531810 */
  push32(0x11531486u); f_11531810();
  /* 11531486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531489 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1153148f jmp 0x115314a3 */
  goto L_115314a3;
L_11531491:;
  /* 11531491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531494 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531497 mov ecx, dword ptr [eax + 0x115524dc] */
  ECX = (r32((uint32_t)(EAX + 0x115524dc)));
  /* 1153149d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_115314a3:;
  /* 115314a3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 115314a9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115314ac jmp 0x115317eb */
  goto L_115317eb;
L_115314b1:;
  /* 115314b1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 115314b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115314bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115314c3 je 0x115317e3 */
  if (C.zf) goto L_115317e3;
  /* 115314c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115314cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115314cf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115314d2 jne 0x115316f4 */
  if (!C.zf) goto L_115316f4;
  /* 115314d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115314db movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 115314df cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115314e2 jne 0x115316f4 */
  if (!C.zf) goto L_115316f4;
  /* 115314e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115314eb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 115314ef cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115314f2 jne 0x115316f4 */
  if (!C.zf) goto L_115316f4;
  /* 115314f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115314fb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11531501:;
  /* 11531501 push 0x1154f54c */
  push32((uint32_t)(0x1154f54cu));
  /* 11531506 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1153150c push ecx */
  push32((uint32_t)(ECX));
  /* 1153150d call 0x11533670 */
  push32(0x11531512u); f_11533670();
  /* 11531512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531515 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1153151b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531522 je 0x1153154d */
  if (C.zf) goto L_1153154d;
  /* 11531524 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1153152a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531530 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11531536 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153153d je 0x1153154d */
  if (C.zf) goto L_1153154d;
  /* 1153153f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11531545 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11531548 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153154b jne 0x11531573 */
  if (!C.zf) goto L_11531573;
L_1153154d:;
  /* 1153154d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531551 je 0x1153156c */
  if (C.zf) goto L_1153156c;
  /* 11531553 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11531555 call 0x1152b370 */
  push32(0x1153155au); f_1152b370();
  /* 1153155a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153155d mov edx, dword ptr [0x11553bdc] */
  EDX = (r32((uint32_t)(0x11553bdc)));
  /* 11531563 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531566 mov dword ptr [0x11553bdc], edx */
  w32((uint32_t)(0x11553bdc), (EDX));
L_1153156c:;
  /* 1153156c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153156e jmp 0x1153180b */
  goto L_1153180b;
L_11531573:;
  /* 11531573 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1153157a jmp 0x11531585 */
  goto L_11531585;
L_1153157c:;
  /* 1153157c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1153157f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531582 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11531585:;
  /* 11531585 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531589 jg 0x115315d3 */
  if ((!C.zf&&C.sf==C.of)) goto L_115315d3;
  /* 1153158b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11531591 push ecx */
  push32((uint32_t)(ECX));
  /* 11531592 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11531598 push edx */
  push32((uint32_t)(EDX));
  /* 11531599 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1153159c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153159f mov ecx, dword ptr [eax + 0x115524d8] */
  ECX = (r32((uint32_t)(EAX + 0x115524d8)));
  /* 115315a5 push ecx */
  push32((uint32_t)(ECX));
  /* 115315a6 call 0x11533630 */
  push32(0x115315abu); f_11533630();
  /* 115315ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115315ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115315b0 jne 0x115315d1 */
  if (!C.zf) goto L_115315d1;
  /* 115315b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115315b5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115315b8 mov eax, dword ptr [edx + 0x115524d8] */
  EAX = (r32((uint32_t)(EDX + 0x115524d8)));
  /* 115315be push eax */
  push32((uint32_t)(EAX));
  /* 115315bf call 0x1152a700 */
  push32(0x115315c4u); f_1152a700();
  /* 115315c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115315c7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115315cd jne 0x115315d1 */
  if (!C.zf) goto L_115315d1;
  /* 115315cf jmp 0x115315d3 */
  goto L_115315d3;
L_115315d1:;
  /* 115315d1 jmp 0x1153157c */
  goto L_1153157c;
L_115315d3:;
  /* 115315d3 push 0x1154f548 */
  push32((uint32_t)(0x1154f548u));
  /* 115315d8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115315de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115315e1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 115315e7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115315ed push edx */
  push32((uint32_t)(EDX));
  /* 115315ee call 0x115335f0 */
  push32(0x115315f3u); f_115335f0();
  /* 115315f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115315f6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 115315fc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531603 jne 0x11531639 */
  if (!C.zf) goto L_11531639;
  /* 11531605 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1153160b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1153160e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531611 je 0x11531639 */
  if (C.zf) goto L_11531639;
  /* 11531613 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531617 je 0x11531632 */
  if (C.zf) goto L_11531632;
  /* 11531619 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1153161b call 0x1152b370 */
  push32(0x11531620u); f_1152b370();
  /* 11531620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531623 mov edx, dword ptr [0x11553bdc] */
  EDX = (r32((uint32_t)(0x11553bdc)));
  /* 11531629 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153162c mov dword ptr [0x11553bdc], edx */
  w32((uint32_t)(0x11553bdc), (EDX));
L_11531632:;
  /* 11531632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11531634 jmp 0x1153180b */
  goto L_1153180b;
L_11531639:;
  /* 11531639 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153163d jg 0x1153168a */
  if ((!C.zf&&C.sf==C.of)) goto L_1153168a;
  /* 1153163f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11531645 push eax */
  push32((uint32_t)(EAX));
  /* 11531646 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1153164c push ecx */
  push32((uint32_t)(ECX));
  /* 1153164d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11531653 push edx */
  push32((uint32_t)(EDX));
  /* 11531654 call 0x1152b0f0 */
  push32(0x11531659u); f_1152b0f0();
  /* 11531659 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153165c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11531662 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1153166a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11531670 push ecx */
  push32((uint32_t)(ECX));
  /* 11531671 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11531674 push edx */
  push32((uint32_t)(EDX));
  /* 11531675 call 0x11531810 */
  push32(0x1153167au); f_11531810();
  /* 1153167a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153167d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153167f je 0x1153168a */
  if (C.zf) goto L_1153168a;
  /* 11531681 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531684 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531687 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1153168a:;
  /* 1153168a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11531690 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531696 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1153169c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115316a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115316a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115316a7 je 0x115316b8 */
  if (C.zf) goto L_115316b8;
  /* 115316a9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115316af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115316b2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_115316b8:;
  /* 115316b8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115316be movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115316c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115316c3 jne 0x11531501 */
  if (!C.zf) goto L_11531501;
  /* 115316c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115316cd je 0x115316dc */
  if (C.zf) goto L_115316dc;
  /* 115316cf call 0x115319b0 */
  push32(0x115316d4u); f_115319b0();
  /* 115316d4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 115316da jmp 0x115316e6 */
  goto L_115316e6;
L_115316dc:;
  /* 115316dc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_115316e6:;
  /* 115316e6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 115316ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115316ef jmp 0x115317e1 */
  goto L_115317e1;
L_115316f4:;
  /* 115316f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115316f7 push edx */
  push32((uint32_t)(EDX));
  /* 115316f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115316fa push 0 */
  push32((uint32_t)(0x0u));
  /* 115316fc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11531702 push eax */
  push32((uint32_t)(EAX));
  /* 11531703 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531706 push ecx */
  push32((uint32_t)(ECX));
  /* 11531707 call 0x11531ab0 */
  push32(0x1153170cu); f_11531ab0();
  /* 1153170c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153170f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11531712 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531716 je 0x115317e1 */
  if (C.zf) goto L_115317e1;
  /* 1153171c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11531723 jmp 0x1153172e */
  goto L_1153172e;
L_11531725:;
  /* 11531725 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11531728 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153172b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1153172e:;
  /* 1153172e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531732 jg 0x11531790 */
  if ((!C.zf&&C.sf==C.of)) goto L_11531790;
  /* 11531734 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531738 je 0x1153178e */
  if (C.zf) goto L_1153178e;
  /* 1153173a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1153173d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531740 mov ecx, dword ptr [eax + 0x115524dc] */
  ECX = (r32((uint32_t)(EAX + 0x115524dc)));
  /* 11531746 push ecx */
  push32((uint32_t)(ECX));
  /* 11531747 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1153174d push edx */
  push32((uint32_t)(EDX));
  /* 1153174e call 0x11533560 */
  push32(0x11531753u); f_11533560();
  /* 11531753 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531756 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531758 je 0x11531785 */
  if (C.zf) goto L_11531785;
  /* 1153175a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11531760 push eax */
  push32((uint32_t)(EAX));
  /* 11531761 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11531764 push ecx */
  push32((uint32_t)(ECX));
  /* 11531765 call 0x11531810 */
  push32(0x1153176au); f_11531810();
  /* 1153176a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153176d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153176f je 0x1153177c */
  if (C.zf) goto L_1153177c;
  /* 11531771 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531774 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531777 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1153177a jmp 0x11531783 */
  goto L_11531783;
L_1153177c:;
  /* 1153177c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11531783:;
  /* 11531783 jmp 0x1153178e */
  goto L_1153178e;
L_11531785:;
  /* 11531785 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531788 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153178b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1153178e:;
  /* 1153178e jmp 0x11531725 */
  goto L_11531725;
L_11531790:;
  /* 11531790 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531794 je 0x115317bb */
  if (C.zf) goto L_115317bb;
  /* 11531796 call 0x115319b0 */
  push32(0x1153179bu); f_115319b0();
  /* 1153179b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1153179e push 2 */
  push32((uint32_t)(0x2u));
  /* 115317a0 mov ecx, dword ptr [0x115524dc] */
  ECX = (r32((uint32_t)(0x115524dc)));
  /* 115317a6 push ecx */
  push32((uint32_t)(ECX));
  /* 115317a7 call 0x11528360 */
  push32(0x115317acu); f_11528360();
  /* 115317ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115317af mov dword ptr [0x115524dc], 0 */
  w32((uint32_t)(0x115524dc), (0x0u));
  /* 115317b9 jmp 0x115317e1 */
  goto L_115317e1;
L_115317bb:;
  /* 115317bb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115317bf je 0x115317ce */
  if (C.zf) goto L_115317ce;
  /* 115317c1 call 0x115319b0 */
  push32(0x115317c6u); f_115319b0();
  /* 115317c6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 115317cc jmp 0x115317d8 */
  goto L_115317d8;
L_115317ce:;
  /* 115317ce mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_115317d8:;
  /* 115317d8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 115317de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_115317e1:;
  /* 115317e1 jmp 0x115317eb */
  goto L_115317eb;
L_115317e3:;
  /* 115317e3 call 0x115319b0 */
  push32(0x115317e8u); f_115319b0();
  /* 115317e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115317eb:;
  /* 115317eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115317ef je 0x11531808 */
  if (C.zf) goto L_11531808;
  /* 115317f1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115317f3 call 0x1152b370 */
  push32(0x115317f8u); f_1152b370();
  /* 115317f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115317fb mov eax, dword ptr [0x11553bdc] */
  EAX = (r32((uint32_t)(0x11553bdc)));
  /* 11531800 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531803 mov dword ptr [0x11553bdc], eax */
  w32((uint32_t)(0x11553bdc), (EAX));
L_11531808:;
  /* 11531808 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1153180b:;
  /* 1153180b mov esp, ebp */
  ESP = (EBP);
  /* 1153180d pop ebp */
  EBP = (pop32());
  /* 1153180e ret  */
  ESPCHK(0x11531420u, _esp0);
  ESP += 4; return;
}

/* FUN_10011810 @ 0x11531810 (403 bytes, 117 insns) */
void f_11531810(void) {
  FTRACE(0x11531810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531810 push ebp */
  push32((uint32_t)(EBP));
  /* 11531811 mov ebp, esp */
  EBP = (ESP);
  /* 11531813 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531819 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153181c push eax */
  push32((uint32_t)(EAX));
  /* 1153181d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11531823 push ecx */
  push32((uint32_t)(ECX));
  /* 11531824 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1153182a push edx */
  push32((uint32_t)(EDX));
  /* 1153182b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11531831 push eax */
  push32((uint32_t)(EAX));
  /* 11531832 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531835 push ecx */
  push32((uint32_t)(ECX));
  /* 11531836 call 0x11531ab0 */
  push32(0x1153183bu); f_11531ab0();
  /* 1153183b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153183e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531840 jne 0x11531849 */
  if (!C.zf) goto L_11531849;
  /* 11531842 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11531844 jmp 0x1153199f */
  goto L_1153199f;
L_11531849:;
  /* 11531849 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1153184e push 0x1154f550 */
  push32((uint32_t)(0x1154f550u));
  /* 11531853 push 2 */
  push32((uint32_t)(0x2u));
  /* 11531855 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1153185b push edx */
  push32((uint32_t)(EDX));
  /* 1153185c call 0x1152a700 */
  push32(0x11531861u); f_1152a700();
  /* 11531861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531864 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531867 push eax */
  push32((uint32_t)(EAX));
  /* 11531868 call 0x115278d0 */
  push32(0x1153186du); f_115278d0();
  /* 1153186d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531870 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11531873 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531877 jne 0x11531880 */
  if (!C.zf) goto L_11531880;
  /* 11531879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153187b jmp 0x1153199f */
  goto L_1153199f;
L_11531880:;
  /* 11531880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531883 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531886 mov ecx, dword ptr [eax + 0x115524dc] */
  ECX = (r32((uint32_t)(EAX + 0x115524dc)));
  /* 1153188c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153188f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531892 mov eax, dword ptr [edx*4 + 0x11553a58] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11553a58)));
  /* 11531899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1153189c push 6 */
  push32((uint32_t)(0x6u));
  /* 1153189e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115318a1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115318a4 add ecx, 0x11553aa8 */
  { uint32_t _a=(ECX),_b=(0x11553aa8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115318aa push ecx */
  push32((uint32_t)(ECX));
  /* 115318ab lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 115318ae push edx */
  push32((uint32_t)(EDX));
  /* 115318af call 0x1152e1b0 */
  push32(0x115318b4u); f_1152e1b0();
  /* 115318b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115318b7 mov eax, dword ptr [0x11553a70] */
  EAX = (r32((uint32_t)(0x11553a70)));
  /* 115318bc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115318bf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 115318c5 push ecx */
  push32((uint32_t)(ECX));
  /* 115318c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115318c9 push edx */
  push32((uint32_t)(EDX));
  /* 115318ca call 0x1152a880 */
  push32(0x115318cfu); f_1152a880();
  /* 115318cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115318d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115318d5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115318d8 mov dword ptr [ecx + 0x115524dc], eax */
  w32((uint32_t)(ECX + 0x115524dc), (EAX));
  /* 115318de mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 115318e4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115318ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115318ed mov dword ptr [eax*4 + 0x11553a58], edx */
  w32((uint32_t)(EAX*4 + 0x11553a58), (EDX));
  /* 115318f4 push 6 */
  push32((uint32_t)(0x6u));
  /* 115318f6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 115318fc push ecx */
  push32((uint32_t)(ECX));
  /* 115318fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531900 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531903 add edx, 0x11553aa8 */
  { uint32_t _a=(EDX),_b=(0x11553aa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531909 push edx */
  push32((uint32_t)(EDX));
  /* 1153190a call 0x1152e1b0 */
  push32(0x1153190fu); f_1152e1b0();
  /* 1153190f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531912 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531916 jne 0x11531923 */
  if (!C.zf) goto L_11531923;
  /* 11531918 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1153191e mov dword ptr [0x11553a70], eax */
  w32((uint32_t)(0x11553a70), (EAX));
L_11531923:;
  /* 11531923 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531927 jne 0x11531935 */
  if (!C.zf) goto L_11531935;
  /* 11531929 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1153192f mov dword ptr [0x11553a74], ecx */
  w32((uint32_t)(0x11553a74), (ECX));
L_11531935:;
  /* 11531935 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531938 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153193b call dword ptr [edx + 0x115524e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x115524e0))), 0x11531941u);
  /* 11531941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531943 je 0x1153197c */
  if (C.zf) goto L_1153197c;
  /* 11531945 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531948 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153194b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153194e mov dword ptr [eax + 0x115524dc], ecx */
  w32((uint32_t)(EAX + 0x115524dc), (ECX));
  /* 11531954 push 2 */
  push32((uint32_t)(0x2u));
  /* 11531956 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531959 push edx */
  push32((uint32_t)(EDX));
  /* 1153195a call 0x11528360 */
  push32(0x1153195fu); f_11528360();
  /* 1153195f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531962 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531965 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531968 mov dword ptr [eax*4 + 0x11553a58], ecx */
  w32((uint32_t)(EAX*4 + 0x11553a58), (ECX));
  /* 1153196f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11531972 mov dword ptr [0x11553a70], edx */
  w32((uint32_t)(0x11553a70), (EDX));
  /* 11531978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153197a jmp 0x1153199f */
  goto L_1153199f;
L_1153197c:;
  /* 1153197c cmp dword ptr [ebp - 0xc], 0x115523c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x115523c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531983 je 0x11531993 */
  if (C.zf) goto L_11531993;
  /* 11531985 push 2 */
  push32((uint32_t)(0x2u));
  /* 11531987 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153198a push eax */
  push32((uint32_t)(EAX));
  /* 1153198b call 0x11528360 */
  push32(0x11531990u); f_11528360();
  /* 11531990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11531993:;
  /* 11531993 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531996 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531999 mov eax, dword ptr [ecx + 0x115524dc] */
  EAX = (r32((uint32_t)(ECX + 0x115524dc)));
L_1153199f:;
  /* 1153199f mov esp, ebp */
  ESP = (EBP);
  /* 115319a1 pop ebp */
  EBP = (pop32());
  /* 115319a2 ret  */
  ESPCHK(0x11531810u, _esp0);
  ESP += 4; return;
}

/* FUN_100119b0 @ 0x115319b0 (256 bytes, 72 insns) */
void f_115319b0(void) {
  FTRACE(0x115319b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115319b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115319b1 mov ebp, esp */
  EBP = (ESP);
  /* 115319b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115319b6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 115319bd cmp dword ptr [0x115524dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115524dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115319c4 jne 0x115319e4 */
  if (!C.zf) goto L_115319e4;
  /* 115319c6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 115319cb push 0x1154f550 */
  push32((uint32_t)(0x1154f550u));
  /* 115319d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115319d2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 115319d7 call 0x115278d0 */
  push32(0x115319dcu); f_115278d0();
  /* 115319dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115319df mov dword ptr [0x115524dc], eax */
  w32((uint32_t)(0x115524dc), (EAX));
L_115319e4:;
  /* 115319e4 mov eax, dword ptr [0x115524dc] */
  EAX = (r32((uint32_t)(0x115524dc)));
  /* 115319e9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 115319ec mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115319f3 jmp 0x115319fe */
  goto L_115319fe;
L_115319f5:;
  /* 115319f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115319f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115319fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115319fe:;
  /* 115319fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531a01 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531a04 mov eax, dword ptr [edx + 0x115524dc] */
  EAX = (r32((uint32_t)(EDX + 0x115524dc)));
  /* 11531a0a push eax */
  push32((uint32_t)(EAX));
  /* 11531a0b push 0x1154f55c */
  push32((uint32_t)(0x1154f55cu));
  /* 11531a10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531a13 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531a16 mov edx, dword ptr [ecx + 0x115524d8] */
  EDX = (r32((uint32_t)(ECX + 0x115524d8)));
  /* 11531a1c push edx */
  push32((uint32_t)(EDX));
  /* 11531a1d push 3 */
  push32((uint32_t)(0x3u));
  /* 11531a1f mov eax, dword ptr [0x115524dc] */
  EAX = (r32((uint32_t)(0x115524dc)));
  /* 11531a24 push eax */
  push32((uint32_t)(EAX));
  /* 11531a25 call 0x11531c50 */
  push32(0x11531a2au); f_11531c50();
  /* 11531a2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531a2d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531a31 jge 0x11531a79 */
  if ((C.sf==C.of)) goto L_11531a79;
  /* 11531a33 push 0x1154f548 */
  push32((uint32_t)(0x1154f548u));
  /* 11531a38 mov ecx, dword ptr [0x115524dc] */
  ECX = (r32((uint32_t)(0x115524dc)));
  /* 11531a3e push ecx */
  push32((uint32_t)(ECX));
  /* 11531a3f call 0x1152a890 */
  push32(0x11531a44u); f_1152a890();
  /* 11531a44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531a47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531a4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531a4d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531a50 mov eax, dword ptr [edx + 0x115524dc] */
  EAX = (r32((uint32_t)(EDX + 0x115524dc)));
  /* 11531a56 push eax */
  push32((uint32_t)(EAX));
  /* 11531a57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531a5a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531a5d mov edx, dword ptr [ecx + 0x115524dc] */
  EDX = (r32((uint32_t)(ECX + 0x115524dc)));
  /* 11531a63 push edx */
  push32((uint32_t)(EDX));
  /* 11531a64 call 0x11533560 */
  push32(0x11531a69u); f_11533560();
  /* 11531a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531a6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531a6e je 0x11531a77 */
  if (C.zf) goto L_11531a77;
  /* 11531a70 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11531a77:;
  /* 11531a77 jmp 0x11531aa7 */
  goto L_11531aa7;
L_11531a79:;
  /* 11531a79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531a7d jne 0x11531a86 */
  if (!C.zf) goto L_11531a86;
  /* 11531a7f mov eax, dword ptr [0x115524dc] */
  EAX = (r32((uint32_t)(0x115524dc)));
  /* 11531a84 jmp 0x11531aac */
  goto L_11531aac;
L_11531a86:;
  /* 11531a86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11531a88 mov eax, dword ptr [0x115524dc] */
  EAX = (r32((uint32_t)(0x115524dc)));
  /* 11531a8d push eax */
  push32((uint32_t)(EAX));
  /* 11531a8e call 0x11528360 */
  push32(0x11531a93u); f_11528360();
  /* 11531a93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531a96 mov dword ptr [0x115524dc], 0 */
  w32((uint32_t)(0x115524dc), (0x0u));
  /* 11531aa0 mov eax, dword ptr [0x115524f4] */
  EAX = (r32((uint32_t)(0x115524f4)));
  /* 11531aa5 jmp 0x11531aac */
  goto L_11531aac;
L_11531aa7:;
  /* 11531aa7 jmp 0x115319f5 */
  goto L_115319f5;
L_11531aac:;
  /* 11531aac mov esp, ebp */
  ESP = (EBP);
  /* 11531aae pop ebp */
  EBP = (pop32());
  /* 11531aaf ret  */
  ESPCHK(0x115319b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ab0 @ 0x11531ab0 (388 bytes, 115 insns) */
void f_11531ab0(void) {
  FTRACE(0x11531ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11531ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11531ab3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531ab9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531abd jne 0x11531ac6 */
  if (!C.zf) goto L_11531ac6;
  /* 11531abf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11531ac1 jmp 0x11531c30 */
  goto L_11531c30;
L_11531ac6:;
  /* 11531ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531ac9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11531acc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531acf jne 0x11531b20 */
  if (!C.zf) goto L_11531b20;
  /* 11531ad1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531ad4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11531ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531ada jne 0x11531b20 */
  if (!C.zf) goto L_11531b20;
  /* 11531adc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531adf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11531ae2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531ae5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11531ae9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531aed je 0x11531b09 */
  if (C.zf) goto L_11531b09;
  /* 11531aef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11531af2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11531af7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11531afa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11531b00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11531b03 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11531b09:;
  /* 11531b09 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531b0d je 0x11531b18 */
  if (C.zf) goto L_11531b18;
  /* 11531b0f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11531b12 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11531b18:;
  /* 11531b18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531b1b jmp 0x11531c30 */
  goto L_11531c30;
L_11531b20:;
  /* 11531b20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531b23 push ecx */
  push32((uint32_t)(ECX));
  /* 11531b24 push 0x11552450 */
  push32((uint32_t)(0x11552450u));
  /* 11531b29 call 0x11533560 */
  push32(0x11531b2eu); f_11533560();
  /* 11531b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531b31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531b33 je 0x11531be8 */
  if (C.zf) goto L_11531be8;
  /* 11531b39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531b3c push edx */
  push32((uint32_t)(EDX));
  /* 11531b3d push 0x115523cc */
  push32((uint32_t)(0x115523ccu));
  /* 11531b42 call 0x11533560 */
  push32(0x11531b47u); f_11533560();
  /* 11531b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531b4c je 0x11531be8 */
  if (C.zf) goto L_11531be8;
  /* 11531b52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531b55 push eax */
  push32((uint32_t)(EAX));
  /* 11531b56 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11531b5c push ecx */
  push32((uint32_t)(ECX));
  /* 11531b5d call 0x11531ca0 */
  push32(0x11531b62u); f_11531ca0();
  /* 11531b62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531b65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531b67 je 0x11531b70 */
  if (C.zf) goto L_11531b70;
  /* 11531b69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11531b6b jmp 0x11531c30 */
  goto L_11531c30;
L_11531b70:;
  /* 11531b70 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11531b76 push edx */
  push32((uint32_t)(EDX));
  /* 11531b77 push 0x11553a80 */
  push32((uint32_t)(0x11553a80u));
  /* 11531b7c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11531b82 push eax */
  push32((uint32_t)(EAX));
  /* 11531b83 call 0x115336b0 */
  push32(0x11531b88u); f_115336b0();
  /* 11531b88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531b8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531b8d jne 0x11531b96 */
  if (!C.zf) goto L_11531b96;
  /* 11531b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11531b91 jmp 0x11531c30 */
  goto L_11531c30;
L_11531b96:;
  /* 11531b96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11531b98 mov cx, word ptr [0x11553a84] */
  CX = (r16((uint32_t)(0x11553a84)));
  /* 11531b9f mov dword ptr [0x11553a88], ecx */
  w32((uint32_t)(0x11553a88), (ECX));
  /* 11531ba5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11531bab push edx */
  push32((uint32_t)(EDX));
  /* 11531bac push 0x11552450 */
  push32((uint32_t)(0x11552450u));
  /* 11531bb1 call 0x11531e00 */
  push32(0x11531bb6u); f_11531e00();
  /* 11531bb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531bbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11531bbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11531bc1 je 0x11531bd6 */
  if (C.zf) goto L_11531bd6;
  /* 11531bc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531bc6 push edx */
  push32((uint32_t)(EDX));
  /* 11531bc7 push 0x115523cc */
  push32((uint32_t)(0x115523ccu));
  /* 11531bcc call 0x1152a880 */
  push32(0x11531bd1u); f_1152a880();
  /* 11531bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531bd4 jmp 0x11531be8 */
  goto L_11531be8;
L_11531bd6:;
  /* 11531bd6 push 0x11552450 */
  push32((uint32_t)(0x11552450u));
  /* 11531bdb push 0x115523cc */
  push32((uint32_t)(0x115523ccu));
  /* 11531be0 call 0x1152a880 */
  push32(0x11531be5u); f_1152a880();
  /* 11531be5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11531be8:;
  /* 11531be8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531bec je 0x11531c01 */
  if (C.zf) goto L_11531c01;
  /* 11531bee push 6 */
  push32((uint32_t)(0x6u));
  /* 11531bf0 push 0x11553a80 */
  push32((uint32_t)(0x11553a80u));
  /* 11531bf5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11531bf8 push eax */
  push32((uint32_t)(EAX));
  /* 11531bf9 call 0x1152e1b0 */
  push32(0x11531bfeu); f_1152e1b0();
  /* 11531bfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11531c01:;
  /* 11531c01 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531c05 je 0x11531c1a */
  if (C.zf) goto L_11531c1a;
  /* 11531c07 push 4 */
  push32((uint32_t)(0x4u));
  /* 11531c09 push 0x11553a88 */
  push32((uint32_t)(0x11553a88u));
  /* 11531c0e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11531c11 push ecx */
  push32((uint32_t)(ECX));
  /* 11531c12 call 0x1152e1b0 */
  push32(0x11531c17u); f_1152e1b0();
  /* 11531c17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11531c1a:;
  /* 11531c1a push 0x11552450 */
  push32((uint32_t)(0x11552450u));
  /* 11531c1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531c22 push edx */
  push32((uint32_t)(EDX));
  /* 11531c23 call 0x1152a880 */
  push32(0x11531c28u); f_1152a880();
  /* 11531c28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531c2b mov eax, 0x11552450 */
  EAX = (0x11552450u);
L_11531c30:;
  /* 11531c30 mov esp, ebp */
  ESP = (EBP);
  /* 11531c32 pop ebp */
  EBP = (pop32());
  /* 11531c33 ret  */
  ESPCHK(0x11531ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c40 @ 0x11531c40 (7 bytes, 5 insns) */
void f_11531c40(void) {
  FTRACE(0x11531c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11531c41 mov ebp, esp */
  EBP = (ESP);
  /* 11531c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11531c45 pop ebp */
  EBP = (pop32());
  /* 11531c46 ret  */
  ESPCHK(0x11531c40u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11531c50 (79 bytes, 28 insns) */
void f_11531c50(void) {
  FTRACE(0x11531c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11531c51 mov ebp, esp */
  EBP = (ESP);
  /* 11531c53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531c56 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11531c59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11531c5c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11531c63 jmp 0x11531c6e */
  goto L_11531c6e;
L_11531c65:;
  /* 11531c65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531c68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531c6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11531c6e:;
  /* 11531c6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531c71 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531c74 jge 0x11531c94 */
  if ((C.sf==C.of)) goto L_11531c94;
  /* 11531c76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531c79 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531c7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11531c7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531c82 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11531c85 push edx */
  push32((uint32_t)(EDX));
  /* 11531c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531c89 push eax */
  push32((uint32_t)(EAX));
  /* 11531c8a call 0x1152a890 */
  push32(0x11531c8fu); f_1152a890();
  /* 11531c8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531c92 jmp 0x11531c65 */
  goto L_11531c65;
L_11531c94:;
  /* 11531c94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11531c9b mov esp, ebp */
  ESP = (EBP);
  /* 11531c9d pop ebp */
  EBP = (pop32());
  /* 11531c9e ret  */
  ESPCHK(0x11531c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ca0 @ 0x11531ca0 (349 bytes, 122 insns) */
void f_11531ca0(void) {
  FTRACE(0x11531ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11531ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11531ca3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531ca6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11531cab push 0 */
  push32((uint32_t)(0x0u));
  /* 11531cad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531cb0 push eax */
  push32((uint32_t)(EAX));
  /* 11531cb1 call 0x1152b640 */
  push32(0x11531cb6u); f_1152b640();
  /* 11531cb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531cb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531cbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11531cbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11531cc1 jne 0x11531cca */
  if (!C.zf) goto L_11531cca;
  /* 11531cc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11531cc5 jmp 0x11531df9 */
  goto L_11531df9;
L_11531cca:;
  /* 11531cca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531ccd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11531cd0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531cd3 jne 0x11531d00 */
  if (!C.zf) goto L_11531d00;
  /* 11531cd5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531cd8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11531cdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531cde je 0x11531d00 */
  if (C.zf) goto L_11531d00;
  /* 11531ce0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531ce3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 11531ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531cea add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531cf0 push edx */
  push32((uint32_t)(EDX));
  /* 11531cf1 call 0x1152a880 */
  push32(0x11531cf6u); f_1152a880();
  /* 11531cf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531cf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11531cfb jmp 0x11531df9 */
  goto L_11531df9;
L_11531d00:;
  /* 11531d00 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11531d07 jmp 0x11531d12 */
  goto L_11531d12;
L_11531d09:;
  /* 11531d09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531d0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531d0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11531d12:;
  /* 11531d12 push 0x1154f560 */
  push32((uint32_t)(0x1154f560u));
  /* 11531d17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531d1a push ecx */
  push32((uint32_t)(ECX));
  /* 11531d1b call 0x115335f0 */
  push32(0x11531d20u); f_115335f0();
  /* 11531d20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531d23 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11531d26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531d2a jne 0x11531d34 */
  if (!C.zf) goto L_11531d34;
  /* 11531d2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11531d2f jmp 0x11531df9 */
  goto L_11531df9;
L_11531d34:;
  /* 11531d34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531d37 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531d3a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11531d3c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11531d3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531d43 jne 0x11531d6a */
  if (!C.zf) goto L_11531d6a;
  /* 11531d45 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531d49 jge 0x11531d6a */
  if ((C.sf==C.of)) goto L_11531d6a;
  /* 11531d4b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11531d4f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531d52 je 0x11531d6a */
  if (C.zf) goto L_11531d6a;
  /* 11531d54 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531d57 push edx */
  push32((uint32_t)(EDX));
  /* 11531d58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531d5b push eax */
  push32((uint32_t)(EAX));
  /* 11531d5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531d5f push ecx */
  push32((uint32_t)(ECX));
  /* 11531d60 call 0x1152b0f0 */
  push32(0x11531d65u); f_1152b0f0();
  /* 11531d65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531d68 jmp 0x11531dd0 */
  goto L_11531dd0;
L_11531d6a:;
  /* 11531d6a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531d6e jne 0x11531d98 */
  if (!C.zf) goto L_11531d98;
  /* 11531d70 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531d74 jge 0x11531d98 */
  if ((C.sf==C.of)) goto L_11531d98;
  /* 11531d76 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11531d7a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531d7d je 0x11531d98 */
  if (C.zf) goto L_11531d98;
  /* 11531d7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531d82 push eax */
  push32((uint32_t)(EAX));
  /* 11531d83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531d86 push ecx */
  push32((uint32_t)(ECX));
  /* 11531d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531d8a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531d8d push edx */
  push32((uint32_t)(EDX));
  /* 11531d8e call 0x1152b0f0 */
  push32(0x11531d93u); f_1152b0f0();
  /* 11531d93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531d96 jmp 0x11531dd0 */
  goto L_11531dd0;
L_11531d98:;
  /* 11531d98 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531d9c jne 0x11531dcb */
  if (!C.zf) goto L_11531dcb;
  /* 11531d9e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11531da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531da4 je 0x11531daf */
  if (C.zf) goto L_11531daf;
  /* 11531da6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11531daa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531dad jne 0x11531dcb */
  if (!C.zf) goto L_11531dcb;
L_11531daf:;
  /* 11531daf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531db2 push edx */
  push32((uint32_t)(EDX));
  /* 11531db3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531db6 push eax */
  push32((uint32_t)(EAX));
  /* 11531db7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531dba add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11531dc1 call 0x1152b0f0 */
  push32(0x11531dc6u); f_1152b0f0();
  /* 11531dc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531dc9 jmp 0x11531dd0 */
  goto L_11531dd0;
L_11531dcb:;
  /* 11531dcb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11531dce jmp 0x11531df9 */
  goto L_11531df9;
L_11531dd0:;
  /* 11531dd0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11531dd4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531dd7 jne 0x11531ddb */
  if (!C.zf) goto L_11531ddb;
  /* 11531dd9 jmp 0x11531df7 */
  goto L_11531df7;
L_11531ddb:;
  /* 11531ddb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11531ddf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531de1 jne 0x11531de5 */
  if (!C.zf) goto L_11531de5;
  /* 11531de3 jmp 0x11531df7 */
  goto L_11531df7;
L_11531de5:;
  /* 11531de5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11531de8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531deb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11531def mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11531df2 jmp 0x11531d09 */
  goto L_11531d09;
L_11531df7:;
  /* 11531df7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11531df9:;
  /* 11531df9 mov esp, ebp */
  ESP = (EBP);
  /* 11531dfb pop ebp */
  EBP = (pop32());
  /* 11531dfc ret  */
  ESPCHK(0x11531ca0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11531e00 (101 bytes, 36 insns) */
void f_11531e00(void) {
  FTRACE(0x11531e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11531e01 mov ebp, esp */
  EBP = (ESP);
  /* 11531e03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531e06 push eax */
  push32((uint32_t)(EAX));
  /* 11531e07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531e0a push ecx */
  push32((uint32_t)(ECX));
  /* 11531e0b call 0x1152a880 */
  push32(0x11531e10u); f_1152a880();
  /* 11531e10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531e13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531e16 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11531e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531e1c je 0x11531e38 */
  if (C.zf) goto L_11531e38;
  /* 11531e1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531e21 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531e24 push ecx */
  push32((uint32_t)(ECX));
  /* 11531e25 push 0x1154f568 */
  push32((uint32_t)(0x1154f568u));
  /* 11531e2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11531e2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531e2f push edx */
  push32((uint32_t)(EDX));
  /* 11531e30 call 0x11531c50 */
  push32(0x11531e35u); f_11531c50();
  /* 11531e35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11531e38:;
  /* 11531e38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531e3b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11531e42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11531e44 je 0x11531e63 */
  if (C.zf) goto L_11531e63;
  /* 11531e46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11531e49 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11531e4f push edx */
  push32((uint32_t)(EDX));
  /* 11531e50 push 0x1154f564 */
  push32((uint32_t)(0x1154f564u));
  /* 11531e55 push 2 */
  push32((uint32_t)(0x2u));
  /* 11531e57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531e5a push eax */
  push32((uint32_t)(EAX));
  /* 11531e5b call 0x11531c50 */
  push32(0x11531e60u); f_11531c50();
  /* 11531e60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11531e63:;
  /* 11531e63 pop ebp */
  EBP = (pop32());
  /* 11531e64 ret  */
  ESPCHK(0x11531e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e70 @ 0x11531e70 (130 bytes, 50 insns) */
void f_11531e70(void) {
  FTRACE(0x11531e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11531e71 mov ebp, esp */
  EBP = (ESP);
  /* 11531e73 push ecx */
  push32((uint32_t)(ECX));
  /* 11531e74 push ebx */
  push32((uint32_t)(EBX));
  /* 11531e75 push esi */
  push32((uint32_t)(ESI));
  /* 11531e76 push edi */
  push32((uint32_t)(EDI));
  /* 11531e77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11531e7e:;
  /* 11531e7e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531e82 jne 0x11531ea2 */
  if (!C.zf) goto L_11531ea2;
  /* 11531e84 push 0x1154f578 */
  push32((uint32_t)(0x1154f578u));
  /* 11531e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11531e8b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11531e8d push 0x1154f56c */
  push32((uint32_t)(0x1154f56cu));
  /* 11531e92 push 2 */
  push32((uint32_t)(0x2u));
  /* 11531e94 call 0x11526990 */
  push32(0x11531e99u); f_11526990();
  /* 11531e99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531e9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531e9f jne 0x11531ea2 */
  if (!C.zf) goto L_11531ea2;
  /* 11531ea1 int3  */
  x86_unimpl("int3 @ 0x11531ea1");
L_11531ea2:;
  /* 11531ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11531ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531ea6 jne 0x11531e7e */
  if (!C.zf) goto L_11531e7e;
  /* 11531ea8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531eab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11531eae and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11531eb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11531eb3 je 0x11531ec1 */
  if (C.zf) goto L_11531ec1;
  /* 11531eb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531eb8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11531ebf jmp 0x11531ee8 */
  goto L_11531ee8;
L_11531ec1:;
  /* 11531ec1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 11531ec5 call 0x115306e0 */
  push32(0x11531ecau); f_115306e0();
  /* 11531eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531ecd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531ed0 push edx */
  push32((uint32_t)(EDX));
  /* 11531ed1 call 0x11531f00 */
  push32(0x11531ed6u); f_11531f00();
  /* 11531ed6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531ed9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11531edc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531edf push eax */
  push32((uint32_t)(EAX));
  /* 11531ee0 call 0x11530750 */
  push32(0x11531ee5u); f_11530750();
  /* 11531ee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11531ee8:;
  /* 11531ee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531eeb pop edi */
  EDI = (pop32());
  /* 11531eec pop esi */
  ESI = (pop32());
  /* 11531eed pop ebx */
  EBX = (pop32());
  /* 11531eee mov esp, ebp */
  ESP = (EBP);
  /* 11531ef0 pop ebp */
  EBP = (pop32());
  /* 11531ef1 ret  */
  ESPCHK(0x11531e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f00 @ 0x11531f00 (190 bytes, 67 insns) */
void f_11531f00(void) {
  FTRACE(0x11531f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11531f01 mov ebp, esp */
  EBP = (ESP);
  /* 11531f03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11531f06 push ebx */
  push32((uint32_t)(EBX));
  /* 11531f07 push esi */
  push32((uint32_t)(ESI));
  /* 11531f08 push edi */
  push32((uint32_t)(EDI));
  /* 11531f09 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11531f10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531f13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11531f16:;
  /* 11531f16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531f1a jne 0x11531f3a */
  if (!C.zf) goto L_11531f3a;
  /* 11531f1c push 0x1154f418 */
  push32((uint32_t)(0x1154f418u));
  /* 11531f21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11531f23 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11531f25 push 0x1154f56c */
  push32((uint32_t)(0x1154f56cu));
  /* 11531f2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11531f2c call 0x11526990 */
  push32(0x11531f31u); f_11526990();
  /* 11531f31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531f34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531f37 jne 0x11531f3a */
  if (!C.zf) goto L_11531f3a;
  /* 11531f39 int3  */
  x86_unimpl("int3 @ 0x11531f39");
L_11531f3a:;
  /* 11531f3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11531f3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11531f3e jne 0x11531f16 */
  if (!C.zf) goto L_11531f16;
  /* 11531f40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531f43 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11531f46 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11531f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531f4d je 0x11531faa */
  if (C.zf) goto L_11531faa;
  /* 11531f4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531f52 push ecx */
  push32((uint32_t)(ECX));
  /* 11531f53 call 0x11531200 */
  push32(0x11531f58u); f_11531200();
  /* 11531f58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531f5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11531f5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531f61 push edx */
  push32((uint32_t)(EDX));
  /* 11531f62 call 0x11534580 */
  push32(0x11531f67u); f_11534580();
  /* 11531f67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531f6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531f6d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11531f70 push ecx */
  push32((uint32_t)(ECX));
  /* 11531f71 call 0x11534450 */
  push32(0x11531f76u); f_11534450();
  /* 11531f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11531f7b jge 0x11531f86 */
  if ((C.sf==C.of)) goto L_11531f86;
  /* 11531f7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11531f84 jmp 0x11531faa */
  goto L_11531faa;
L_11531f86:;
  /* 11531f86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531f89 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531f8d je 0x11531faa */
  if (C.zf) goto L_11531faa;
  /* 11531f8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11531f91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531f94 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11531f97 push ecx */
  push32((uint32_t)(ECX));
  /* 11531f98 call 0x11528360 */
  push32(0x11531f9du); f_11528360();
  /* 11531f9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11531fa0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531fa3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11531faa:;
  /* 11531faa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11531fad mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11531fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11531fb7 pop edi */
  EDI = (pop32());
  /* 11531fb8 pop esi */
  ESI = (pop32());
  /* 11531fb9 pop ebx */
  EBX = (pop32());
  /* 11531fba mov esp, ebp */
  ESP = (EBP);
  /* 11531fbc pop ebp */
  EBP = (pop32());
  /* 11531fbd ret  */
  ESPCHK(0x11531f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fc0 @ 0x11531fc0 (210 bytes, 63 insns) */
void f_11531fc0(void) {
  FTRACE(0x11531fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11531fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11531fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11531fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11531fc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531fc7 cmp eax, dword ptr [0x1155537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1155537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11531fcd jae 0x11531ff1 */
  if (!C.cf) goto L_11531ff1;
  /* 11531fcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531fd2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11531fd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11531fd8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11531fdb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11531fde mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 11531fe5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11531fea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11531fed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11531fef jne 0x11532004 */
  if (!C.zf) goto L_11532004;
L_11531ff1:;
  /* 11531ff1 call 0x1152f7a0 */
  push32(0x11531ff6u); f_1152f7a0();
  /* 11531ff6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11531ffc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11531fff jmp 0x1153208e */
  goto L_1153208e;
L_11532004:;
  /* 11532004 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532007 push edx */
  push32((uint32_t)(EDX));
  /* 11532008 call 0x11530fc0 */
  push32(0x1153200du); f_11530fc0();
  /* 1153200d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532013 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11532016 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532019 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1153201c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153201f mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 11532026 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1153202b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1153202e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11532030 je 0x1153206d */
  if (C.zf) goto L_1153206d;
  /* 11532032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532035 push ecx */
  push32((uint32_t)(ECX));
  /* 11532036 call 0x11530e40 */
  push32(0x1153203bu); f_11530e40();
  /* 1153203b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153203e push eax */
  push32((uint32_t)(EAX));
  /* 1153203f call dword ptr [0x1155631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155631c))), 0x11532045u);
  /* 11532045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11532047 jne 0x11532054 */
  if (!C.zf) goto L_11532054;
  /* 11532049 call dword ptr [0x11556400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556400))), 0x1153204fu);
  /* 1153204f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11532052 jmp 0x1153205b */
  goto L_1153205b;
L_11532054:;
  /* 11532054 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1153205b:;
  /* 1153205b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153205f jne 0x11532063 */
  if (!C.zf) goto L_11532063;
  /* 11532061 jmp 0x1153207f */
  goto L_1153207f;
L_11532063:;
  /* 11532063 call 0x1152f7b0 */
  push32(0x11532068u); f_1152f7b0();
  /* 11532068 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153206b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1153206d:;
  /* 1153206d call 0x1152f7a0 */
  push32(0x11532072u); f_1152f7a0();
  /* 11532072 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11532078 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1153207f:;
  /* 1153207f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532082 push eax */
  push32((uint32_t)(EAX));
  /* 11532083 call 0x11531050 */
  push32(0x11532088u); f_11531050();
  /* 11532088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153208b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1153208e:;
  /* 1153208e mov esp, ebp */
  ESP = (EBP);
  /* 11532090 pop ebp */
  EBP = (pop32());
  /* 11532091 ret  */
  ESPCHK(0x11531fc0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x115320a0 (219 bytes, 64 insns) */
void f_115320a0(void) {
  FTRACE(0x115320a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115320a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115320a1 mov ebp, esp */
  EBP = (ESP);
  /* 115320a3 push ecx */
  push32((uint32_t)(ECX));
  /* 115320a4 cmp dword ptr [0x11553a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115320ab je 0x11532141 */
  if (C.zf) goto L_11532141;
  /* 115320b1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 115320b3 push 0x1154f588 */
  push32((uint32_t)(0x1154f588u));
  /* 115320b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115320ba push 0xac */
  push32((uint32_t)(0xacu));
  /* 115320bf push 1 */
  push32((uint32_t)(0x1u));
  /* 115320c1 call 0x11527ce0 */
  push32(0x115320c6u); f_11527ce0();
  /* 115320c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115320c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115320cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115320d0 jne 0x115320dc */
  if (!C.zf) goto L_115320dc;
  /* 115320d2 mov eax, 1 */
  EAX = (0x1u);
  /* 115320d7 jmp 0x11532177 */
  goto L_11532177;
L_115320dc:;
  /* 115320dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115320df push eax */
  push32((uint32_t)(EAX));
  /* 115320e0 call 0x11532180 */
  push32(0x115320e5u); f_11532180();
  /* 115320e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115320e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115320ea je 0x1153210d */
  if (C.zf) goto L_1153210d;
  /* 115320ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115320ef push ecx */
  push32((uint32_t)(ECX));
  /* 115320f0 call 0x11532710 */
  push32(0x115320f5u); f_11532710();
  /* 115320f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115320f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115320fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115320fd push edx */
  push32((uint32_t)(EDX));
  /* 115320fe call 0x11528360 */
  push32(0x11532103u); f_11528360();
  /* 11532103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532106 mov eax, 1 */
  EAX = (0x1u);
  /* 1153210b jmp 0x11532177 */
  goto L_11532177;
L_1153210d:;
  /* 1153210d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532110 mov dword ptr [0x11552c98], eax */
  w32((uint32_t)(0x11552c98), (EAX));
  /* 11532115 mov ecx, dword ptr [0x11553a8c] */
  ECX = (r32((uint32_t)(0x11553a8c)));
  /* 1153211b push ecx */
  push32((uint32_t)(ECX));
  /* 1153211c call 0x11532710 */
  push32(0x11532121u); f_11532710();
  /* 11532121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532124 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532126 mov edx, dword ptr [0x11553a8c] */
  EDX = (r32((uint32_t)(0x11553a8c)));
  /* 1153212c push edx */
  push32((uint32_t)(EDX));
  /* 1153212d call 0x11528360 */
  push32(0x11532132u); f_11528360();
  /* 11532132 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532138 mov dword ptr [0x11553a8c], eax */
  w32((uint32_t)(0x11553a8c), (EAX));
  /* 1153213d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153213f jmp 0x11532177 */
  goto L_11532177;
L_11532141:;
  /* 11532141 mov dword ptr [0x11552c98], 0x11552ca0 */
  w32((uint32_t)(0x11552c98), (0x11552ca0u));
  /* 1153214b mov ecx, dword ptr [0x11553a8c] */
  ECX = (r32((uint32_t)(0x11553a8c)));
  /* 11532151 push ecx */
  push32((uint32_t)(ECX));
  /* 11532152 call 0x11532710 */
  push32(0x11532157u); f_11532710();
  /* 11532157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153215a push 2 */
  push32((uint32_t)(0x2u));
  /* 1153215c mov edx, dword ptr [0x11553a8c] */
  EDX = (r32((uint32_t)(0x11553a8c)));
  /* 11532162 push edx */
  push32((uint32_t)(EDX));
  /* 11532163 call 0x11528360 */
  push32(0x11532168u); f_11528360();
  /* 11532168 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153216b mov dword ptr [0x11553a8c], 0 */
  w32((uint32_t)(0x11553a8c), (0x0u));
  /* 11532175 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11532177:;
  /* 11532177 mov esp, ebp */
  ESP = (EBP);
  /* 11532179 pop ebp */
  EBP = (pop32());
  /* 1153217a ret  */
  ESPCHK(0x115320a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012180 @ 0x11532180 (1423 bytes, 533 insns) */
void f_11532180(void) {
  FTRACE(0x11532180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11532180 push ebp */
  push32((uint32_t)(EBP));
  /* 11532181 mov ebp, esp */
  EBP = (ESP);
  /* 11532183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11532186 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1153218d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153218f mov ax, word ptr [0x11553ac6] */
  AX = (r16((uint32_t)(0x11553ac6)));
  /* 11532195 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11532198 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1153219a mov cx, word ptr [0x11553ac8] */
  CX = (r16((uint32_t)(0x11553ac8)));
  /* 115321a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115321a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115321a8 jne 0x115321b2 */
  if (!C.zf) goto L_115321b2;
  /* 115321aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115321ad jmp 0x1153270b */
  goto L_1153270b;
L_115321b2:;
  /* 115321b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115321b5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115321b8 push edx */
  push32((uint32_t)(EDX));
  /* 115321b9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 115321bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115321be push eax */
  push32((uint32_t)(EAX));
  /* 115321bf push 1 */
  push32((uint32_t)(0x1u));
  /* 115321c1 call 0x11535a90 */
  push32(0x115321c6u); f_11535a90();
  /* 115321c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115321c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115321cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115321ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115321d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115321d4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115321d7 push edx */
  push32((uint32_t)(EDX));
  /* 115321d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 115321da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115321dd push eax */
  push32((uint32_t)(EAX));
  /* 115321de push 1 */
  push32((uint32_t)(0x1u));
  /* 115321e0 call 0x11535a90 */
  push32(0x115321e5u); f_11535a90();
  /* 115321e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115321e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115321eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115321ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115321f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115321f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115321f6 push edx */
  push32((uint32_t)(EDX));
  /* 115321f7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 115321f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115321fc push eax */
  push32((uint32_t)(EAX));
  /* 115321fd push 1 */
  push32((uint32_t)(0x1u));
  /* 115321ff call 0x11535a90 */
  push32(0x11532204u); f_11535a90();
  /* 11532204 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532207 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153220a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153220c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153220f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532212 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532215 push edx */
  push32((uint32_t)(EDX));
  /* 11532216 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11532218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153221b push eax */
  push32((uint32_t)(EAX));
  /* 1153221c push 1 */
  push32((uint32_t)(0x1u));
  /* 1153221e call 0x11535a90 */
  push32(0x11532223u); f_11535a90();
  /* 11532223 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532229 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153222b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153222e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532231 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532234 push edx */
  push32((uint32_t)(EDX));
  /* 11532235 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11532237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153223a push eax */
  push32((uint32_t)(EAX));
  /* 1153223b push 1 */
  push32((uint32_t)(0x1u));
  /* 1153223d call 0x11535a90 */
  push32(0x11532242u); f_11535a90();
  /* 11532242 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532245 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532248 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153224a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153224d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532250 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532253 push edx */
  push32((uint32_t)(EDX));
  /* 11532254 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11532256 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532259 push eax */
  push32((uint32_t)(EAX));
  /* 1153225a push 1 */
  push32((uint32_t)(0x1u));
  /* 1153225c call 0x11535a90 */
  push32(0x11532261u); f_11535a90();
  /* 11532261 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532264 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532267 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532269 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153226c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153226f push edx */
  push32((uint32_t)(EDX));
  /* 11532270 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11532272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532275 push eax */
  push32((uint32_t)(EAX));
  /* 11532276 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532278 call 0x11535a90 */
  push32(0x1153227du); f_11535a90();
  /* 1153227d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532280 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532283 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532285 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153228b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153228e push edx */
  push32((uint32_t)(EDX));
  /* 1153228f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11532291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532294 push eax */
  push32((uint32_t)(EAX));
  /* 11532295 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532297 call 0x11535a90 */
  push32(0x1153229cu); f_11535a90();
  /* 1153229c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153229f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115322a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115322a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115322a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115322aa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115322ad push edx */
  push32((uint32_t)(EDX));
  /* 115322ae push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 115322b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115322b3 push eax */
  push32((uint32_t)(EAX));
  /* 115322b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115322b6 call 0x11535a90 */
  push32(0x115322bbu); f_11535a90();
  /* 115322bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115322be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115322c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115322c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115322c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115322c9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115322cc push edx */
  push32((uint32_t)(EDX));
  /* 115322cd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 115322cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115322d2 push eax */
  push32((uint32_t)(EAX));
  /* 115322d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115322d5 call 0x11535a90 */
  push32(0x115322dau); f_11535a90();
  /* 115322da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115322dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115322e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115322e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115322e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115322e8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115322eb push edx */
  push32((uint32_t)(EDX));
  /* 115322ec push 0x2d */
  push32((uint32_t)(0x2du));
  /* 115322ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115322f1 push eax */
  push32((uint32_t)(EAX));
  /* 115322f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115322f4 call 0x11535a90 */
  push32(0x115322f9u); f_11535a90();
  /* 115322f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115322fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115322ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532301 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532307 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153230a push edx */
  push32((uint32_t)(EDX));
  /* 1153230b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1153230d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532310 push eax */
  push32((uint32_t)(EAX));
  /* 11532311 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532313 call 0x11535a90 */
  push32(0x11532318u); f_11535a90();
  /* 11532318 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153231b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153231e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532320 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532323 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532326 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532329 push edx */
  push32((uint32_t)(EDX));
  /* 1153232a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1153232c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153232f push eax */
  push32((uint32_t)(EAX));
  /* 11532330 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532332 call 0x11535a90 */
  push32(0x11532337u); f_11535a90();
  /* 11532337 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153233a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153233d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153233f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532345 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532348 push edx */
  push32((uint32_t)(EDX));
  /* 11532349 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1153234b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153234e push eax */
  push32((uint32_t)(EAX));
  /* 1153234f push 1 */
  push32((uint32_t)(0x1u));
  /* 11532351 call 0x11535a90 */
  push32(0x11532356u); f_11535a90();
  /* 11532356 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532359 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153235c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153235e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532364 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532367 push edx */
  push32((uint32_t)(EDX));
  /* 11532368 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1153236a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153236d push eax */
  push32((uint32_t)(EAX));
  /* 1153236e push 1 */
  push32((uint32_t)(0x1u));
  /* 11532370 call 0x11535a90 */
  push32(0x11532375u); f_11535a90();
  /* 11532375 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532378 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153237b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153237d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532380 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532383 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532386 push edx */
  push32((uint32_t)(EDX));
  /* 11532387 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11532389 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153238c push eax */
  push32((uint32_t)(EAX));
  /* 1153238d push 1 */
  push32((uint32_t)(0x1u));
  /* 1153238f call 0x11535a90 */
  push32(0x11532394u); f_11535a90();
  /* 11532394 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532397 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153239a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153239c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153239f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115323a2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115323a5 push edx */
  push32((uint32_t)(EDX));
  /* 115323a6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 115323a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115323ab push eax */
  push32((uint32_t)(EAX));
  /* 115323ac push 1 */
  push32((uint32_t)(0x1u));
  /* 115323ae call 0x11535a90 */
  push32(0x115323b3u); f_11535a90();
  /* 115323b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115323b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115323b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115323bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115323be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115323c1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115323c4 push edx */
  push32((uint32_t)(EDX));
  /* 115323c5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 115323c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115323ca push eax */
  push32((uint32_t)(EAX));
  /* 115323cb push 1 */
  push32((uint32_t)(0x1u));
  /* 115323cd call 0x11535a90 */
  push32(0x115323d2u); f_11535a90();
  /* 115323d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115323d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115323d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115323da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115323dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115323e0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115323e3 push edx */
  push32((uint32_t)(EDX));
  /* 115323e4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 115323e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115323e9 push eax */
  push32((uint32_t)(EAX));
  /* 115323ea push 1 */
  push32((uint32_t)(0x1u));
  /* 115323ec call 0x11535a90 */
  push32(0x115323f1u); f_11535a90();
  /* 115323f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115323f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115323f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115323f9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115323fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115323ff add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532402 push edx */
  push32((uint32_t)(EDX));
  /* 11532403 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11532405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532408 push eax */
  push32((uint32_t)(EAX));
  /* 11532409 push 1 */
  push32((uint32_t)(0x1u));
  /* 1153240b call 0x11535a90 */
  push32(0x11532410u); f_11535a90();
  /* 11532410 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532413 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532416 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532418 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153241b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153241e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532421 push edx */
  push32((uint32_t)(EDX));
  /* 11532422 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11532424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532427 push eax */
  push32((uint32_t)(EAX));
  /* 11532428 push 1 */
  push32((uint32_t)(0x1u));
  /* 1153242a call 0x11535a90 */
  push32(0x1153242fu); f_11535a90();
  /* 1153242f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532432 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532435 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532437 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153243a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153243d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532440 push edx */
  push32((uint32_t)(EDX));
  /* 11532441 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11532443 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532446 push eax */
  push32((uint32_t)(EAX));
  /* 11532447 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532449 call 0x11535a90 */
  push32(0x1153244eu); f_11535a90();
  /* 1153244e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532451 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532454 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532456 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532459 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153245c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153245f push edx */
  push32((uint32_t)(EDX));
  /* 11532460 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11532462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532465 push eax */
  push32((uint32_t)(EAX));
  /* 11532466 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532468 call 0x11535a90 */
  push32(0x1153246du); f_11535a90();
  /* 1153246d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532470 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532473 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532475 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532478 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153247b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153247e push edx */
  push32((uint32_t)(EDX));
  /* 1153247f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11532481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532484 push eax */
  push32((uint32_t)(EAX));
  /* 11532485 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532487 call 0x11535a90 */
  push32(0x1153248cu); f_11535a90();
  /* 1153248c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153248f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532492 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532494 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532497 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153249a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153249d push edx */
  push32((uint32_t)(EDX));
  /* 1153249e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 115324a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115324a3 push eax */
  push32((uint32_t)(EAX));
  /* 115324a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115324a6 call 0x11535a90 */
  push32(0x115324abu); f_11535a90();
  /* 115324ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115324ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115324b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115324b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115324b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115324b9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115324bc push edx */
  push32((uint32_t)(EDX));
  /* 115324bd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 115324bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115324c2 push eax */
  push32((uint32_t)(EAX));
  /* 115324c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115324c5 call 0x11535a90 */
  push32(0x115324cau); f_11535a90();
  /* 115324ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115324cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115324d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115324d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115324d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115324d8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115324db push edx */
  push32((uint32_t)(EDX));
  /* 115324dc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 115324de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115324e1 push eax */
  push32((uint32_t)(EAX));
  /* 115324e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115324e4 call 0x11535a90 */
  push32(0x115324e9u); f_11535a90();
  /* 115324e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115324ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115324ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115324f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115324f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115324f7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115324fa push edx */
  push32((uint32_t)(EDX));
  /* 115324fb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 115324fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532500 push eax */
  push32((uint32_t)(EAX));
  /* 11532501 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532503 call 0x11535a90 */
  push32(0x11532508u); f_11535a90();
  /* 11532508 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153250b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153250e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532510 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532513 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532516 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532519 push edx */
  push32((uint32_t)(EDX));
  /* 1153251a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1153251c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153251f push eax */
  push32((uint32_t)(EAX));
  /* 11532520 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532522 call 0x11535a90 */
  push32(0x11532527u); f_11535a90();
  /* 11532527 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153252a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153252d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153252f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532532 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532535 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532538 push edx */
  push32((uint32_t)(EDX));
  /* 11532539 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1153253b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153253e push eax */
  push32((uint32_t)(EAX));
  /* 1153253f push 1 */
  push32((uint32_t)(0x1u));
  /* 11532541 call 0x11535a90 */
  push32(0x11532546u); f_11535a90();
  /* 11532546 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532549 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153254c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153254e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532551 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532554 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532557 push edx */
  push32((uint32_t)(EDX));
  /* 11532558 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1153255a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153255d push eax */
  push32((uint32_t)(EAX));
  /* 1153255e push 1 */
  push32((uint32_t)(0x1u));
  /* 11532560 call 0x11535a90 */
  push32(0x11532565u); f_11535a90();
  /* 11532565 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532568 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153256b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153256d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532570 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532573 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532576 push edx */
  push32((uint32_t)(EDX));
  /* 11532577 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11532579 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153257c push eax */
  push32((uint32_t)(EAX));
  /* 1153257d push 1 */
  push32((uint32_t)(0x1u));
  /* 1153257f call 0x11535a90 */
  push32(0x11532584u); f_11535a90();
  /* 11532584 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532587 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153258a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153258c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153258f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532592 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532598 push edx */
  push32((uint32_t)(EDX));
  /* 11532599 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1153259b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153259e push eax */
  push32((uint32_t)(EAX));
  /* 1153259f push 1 */
  push32((uint32_t)(0x1u));
  /* 115325a1 call 0x11535a90 */
  push32(0x115325a6u); f_11535a90();
  /* 115325a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115325a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115325ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115325ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115325b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115325b4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115325ba push edx */
  push32((uint32_t)(EDX));
  /* 115325bb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115325bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115325c0 push eax */
  push32((uint32_t)(EAX));
  /* 115325c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115325c3 call 0x11535a90 */
  push32(0x115325c8u); f_11535a90();
  /* 115325c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115325cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115325ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115325d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115325d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115325d6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115325dc push edx */
  push32((uint32_t)(EDX));
  /* 115325dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115325df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115325e2 push eax */
  push32((uint32_t)(EAX));
  /* 115325e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115325e5 call 0x11535a90 */
  push32(0x115325eau); f_11535a90();
  /* 115325ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115325ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115325f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115325f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115325f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115325f8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115325fe push edx */
  push32((uint32_t)(EDX));
  /* 115325ff push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11532601 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532604 push eax */
  push32((uint32_t)(EAX));
  /* 11532605 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532607 call 0x11535a90 */
  push32(0x1153260cu); f_11535a90();
  /* 1153260c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153260f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532612 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532614 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153261a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532620 push edx */
  push32((uint32_t)(EDX));
  /* 11532621 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11532623 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532626 push eax */
  push32((uint32_t)(EAX));
  /* 11532627 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532629 call 0x11535a90 */
  push32(0x1153262eu); f_11535a90();
  /* 1153262e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532631 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532634 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532636 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532639 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153263c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532642 push edx */
  push32((uint32_t)(EDX));
  /* 11532643 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11532645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532648 push eax */
  push32((uint32_t)(EAX));
  /* 11532649 push 1 */
  push32((uint32_t)(0x1u));
  /* 1153264b call 0x11535a90 */
  push32(0x11532650u); f_11535a90();
  /* 11532650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532653 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532656 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532658 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153265b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153265e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532664 push edx */
  push32((uint32_t)(EDX));
  /* 11532665 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11532667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153266a push eax */
  push32((uint32_t)(EAX));
  /* 1153266b push 1 */
  push32((uint32_t)(0x1u));
  /* 1153266d call 0x11535a90 */
  push32(0x11532672u); f_11535a90();
  /* 11532672 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532675 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532678 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153267a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153267d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532680 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532686 push edx */
  push32((uint32_t)(EDX));
  /* 11532687 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11532689 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153268c push eax */
  push32((uint32_t)(EAX));
  /* 1153268d push 1 */
  push32((uint32_t)(0x1u));
  /* 1153268f call 0x11535a90 */
  push32(0x11532694u); f_11535a90();
  /* 11532694 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532697 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153269a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1153269c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1153269f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115326a2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115326a8 push edx */
  push32((uint32_t)(EDX));
  /* 115326a9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 115326ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115326ae push eax */
  push32((uint32_t)(EAX));
  /* 115326af push 1 */
  push32((uint32_t)(0x1u));
  /* 115326b1 call 0x11535a90 */
  push32(0x115326b6u); f_11535a90();
  /* 115326b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115326b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115326bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115326be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115326c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115326c4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115326ca push edx */
  push32((uint32_t)(EDX));
  /* 115326cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115326cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115326d0 push eax */
  push32((uint32_t)(EAX));
  /* 115326d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115326d3 call 0x11535a90 */
  push32(0x115326d8u); f_11535a90();
  /* 115326d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115326db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115326de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115326e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115326e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115326e6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115326ec push edx */
  push32((uint32_t)(EDX));
  /* 115326ed push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 115326f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115326f5 push eax */
  push32((uint32_t)(EAX));
  /* 115326f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115326f8 call 0x11535a90 */
  push32(0x115326fdu); f_11535a90();
  /* 115326fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532700 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11532703 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532705 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11532708 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1153270b:;
  /* 1153270b mov esp, ebp */
  ESP = (EBP);
  /* 1153270d pop ebp */
  EBP = (pop32());
  /* 1153270e ret  */
  ESPCHK(0x11532180u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11532710 (779 bytes, 265 insns) */
void f_11532710(void) {
  FTRACE(0x11532710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11532710 push ebp */
  push32((uint32_t)(EBP));
  /* 11532711 mov ebp, esp */
  EBP = (ESP);
  /* 11532713 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532717 jne 0x1153271e */
  if (!C.zf) goto L_1153271e;
  /* 11532719 jmp 0x11532a19 */
  goto L_11532a19;
L_1153271e:;
  /* 1153271e push 2 */
  push32((uint32_t)(0x2u));
  /* 11532720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532723 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11532726 push ecx */
  push32((uint32_t)(ECX));
  /* 11532727 call 0x11528360 */
  push32(0x1153272cu); f_11528360();
  /* 1153272c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153272f push 2 */
  push32((uint32_t)(0x2u));
  /* 11532731 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532734 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11532737 push eax */
  push32((uint32_t)(EAX));
  /* 11532738 call 0x11528360 */
  push32(0x1153273du); f_11528360();
  /* 1153273d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532740 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532742 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532745 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11532748 push edx */
  push32((uint32_t)(EDX));
  /* 11532749 call 0x11528360 */
  push32(0x1153274eu); f_11528360();
  /* 1153274e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532751 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532756 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11532759 push ecx */
  push32((uint32_t)(ECX));
  /* 1153275a call 0x11528360 */
  push32(0x1153275fu); f_11528360();
  /* 1153275f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532762 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532767 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1153276a push eax */
  push32((uint32_t)(EAX));
  /* 1153276b call 0x11528360 */
  push32(0x11532770u); f_11528360();
  /* 11532770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532773 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532775 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532778 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1153277b push edx */
  push32((uint32_t)(EDX));
  /* 1153277c call 0x11528360 */
  push32(0x11532781u); f_11528360();
  /* 11532781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532784 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532789 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1153278b push ecx */
  push32((uint32_t)(ECX));
  /* 1153278c call 0x11528360 */
  push32(0x11532791u); f_11528360();
  /* 11532791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532794 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532796 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532799 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1153279c push eax */
  push32((uint32_t)(EAX));
  /* 1153279d call 0x11528360 */
  push32(0x115327a2u); f_11528360();
  /* 115327a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115327a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115327a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115327aa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 115327ad push edx */
  push32((uint32_t)(EDX));
  /* 115327ae call 0x11528360 */
  push32(0x115327b3u); f_11528360();
  /* 115327b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115327b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115327b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115327bb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 115327be push ecx */
  push32((uint32_t)(ECX));
  /* 115327bf call 0x11528360 */
  push32(0x115327c4u); f_11528360();
  /* 115327c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115327c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 115327c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115327cc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 115327cf push eax */
  push32((uint32_t)(EAX));
  /* 115327d0 call 0x11528360 */
  push32(0x115327d5u); f_11528360();
  /* 115327d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115327d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115327da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115327dd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 115327e0 push edx */
  push32((uint32_t)(EDX));
  /* 115327e1 call 0x11528360 */
  push32(0x115327e6u); f_11528360();
  /* 115327e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115327e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115327eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115327ee mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 115327f1 push ecx */
  push32((uint32_t)(ECX));
  /* 115327f2 call 0x11528360 */
  push32(0x115327f7u); f_11528360();
  /* 115327f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115327fa push 2 */
  push32((uint32_t)(0x2u));
  /* 115327fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115327ff mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11532802 push eax */
  push32((uint32_t)(EAX));
  /* 11532803 call 0x11528360 */
  push32(0x11532808u); f_11528360();
  /* 11532808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153280b push 2 */
  push32((uint32_t)(0x2u));
  /* 1153280d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532810 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11532813 push edx */
  push32((uint32_t)(EDX));
  /* 11532814 call 0x11528360 */
  push32(0x11532819u); f_11528360();
  /* 11532819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153281c push 2 */
  push32((uint32_t)(0x2u));
  /* 1153281e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532821 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11532824 push ecx */
  push32((uint32_t)(ECX));
  /* 11532825 call 0x11528360 */
  push32(0x1153282au); f_11528360();
  /* 1153282a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153282d push 2 */
  push32((uint32_t)(0x2u));
  /* 1153282f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532832 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11532835 push eax */
  push32((uint32_t)(EAX));
  /* 11532836 call 0x11528360 */
  push32(0x1153283bu); f_11528360();
  /* 1153283b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153283e push 2 */
  push32((uint32_t)(0x2u));
  /* 11532840 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532843 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11532846 push edx */
  push32((uint32_t)(EDX));
  /* 11532847 call 0x11528360 */
  push32(0x1153284cu); f_11528360();
  /* 1153284c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153284f push 2 */
  push32((uint32_t)(0x2u));
  /* 11532851 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532854 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11532857 push ecx */
  push32((uint32_t)(ECX));
  /* 11532858 call 0x11528360 */
  push32(0x1153285du); f_11528360();
  /* 1153285d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532860 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532862 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532865 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11532868 push eax */
  push32((uint32_t)(EAX));
  /* 11532869 call 0x11528360 */
  push32(0x1153286eu); f_11528360();
  /* 1153286e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532871 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532873 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532876 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11532879 push edx */
  push32((uint32_t)(EDX));
  /* 1153287a call 0x11528360 */
  push32(0x1153287fu); f_11528360();
  /* 1153287f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532882 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532887 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1153288a push ecx */
  push32((uint32_t)(ECX));
  /* 1153288b call 0x11528360 */
  push32(0x11532890u); f_11528360();
  /* 11532890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532893 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532898 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1153289b push eax */
  push32((uint32_t)(EAX));
  /* 1153289c call 0x11528360 */
  push32(0x115328a1u); f_11528360();
  /* 115328a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115328a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 115328a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115328a9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 115328ac push edx */
  push32((uint32_t)(EDX));
  /* 115328ad call 0x11528360 */
  push32(0x115328b2u); f_11528360();
  /* 115328b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115328b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115328b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115328ba mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 115328bd push ecx */
  push32((uint32_t)(ECX));
  /* 115328be call 0x11528360 */
  push32(0x115328c3u); f_11528360();
  /* 115328c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115328c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115328c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115328cb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 115328ce push eax */
  push32((uint32_t)(EAX));
  /* 115328cf call 0x11528360 */
  push32(0x115328d4u); f_11528360();
  /* 115328d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115328d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 115328d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115328dc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 115328df push edx */
  push32((uint32_t)(EDX));
  /* 115328e0 call 0x11528360 */
  push32(0x115328e5u); f_11528360();
  /* 115328e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115328e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115328ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115328ed mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 115328f0 push ecx */
  push32((uint32_t)(ECX));
  /* 115328f1 call 0x11528360 */
  push32(0x115328f6u); f_11528360();
  /* 115328f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115328f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115328fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115328fe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11532901 push eax */
  push32((uint32_t)(EAX));
  /* 11532902 call 0x11528360 */
  push32(0x11532907u); f_11528360();
  /* 11532907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153290a push 2 */
  push32((uint32_t)(0x2u));
  /* 1153290c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153290f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11532912 push edx */
  push32((uint32_t)(EDX));
  /* 11532913 call 0x11528360 */
  push32(0x11532918u); f_11528360();
  /* 11532918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153291b push 2 */
  push32((uint32_t)(0x2u));
  /* 1153291d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532920 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11532923 push ecx */
  push32((uint32_t)(ECX));
  /* 11532924 call 0x11528360 */
  push32(0x11532929u); f_11528360();
  /* 11532929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153292c push 2 */
  push32((uint32_t)(0x2u));
  /* 1153292e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532931 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11532934 push eax */
  push32((uint32_t)(EAX));
  /* 11532935 call 0x11528360 */
  push32(0x1153293au); f_11528360();
  /* 1153293a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153293d push 2 */
  push32((uint32_t)(0x2u));
  /* 1153293f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532942 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11532948 push edx */
  push32((uint32_t)(EDX));
  /* 11532949 call 0x11528360 */
  push32(0x1153294eu); f_11528360();
  /* 1153294e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532951 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532956 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1153295c push ecx */
  push32((uint32_t)(ECX));
  /* 1153295d call 0x11528360 */
  push32(0x11532962u); f_11528360();
  /* 11532962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532965 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153296a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11532970 push eax */
  push32((uint32_t)(EAX));
  /* 11532971 call 0x11528360 */
  push32(0x11532976u); f_11528360();
  /* 11532976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532979 push 2 */
  push32((uint32_t)(0x2u));
  /* 1153297b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153297e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11532984 push edx */
  push32((uint32_t)(EDX));
  /* 11532985 call 0x11528360 */
  push32(0x1153298au); f_11528360();
  /* 1153298a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153298d push 2 */
  push32((uint32_t)(0x2u));
  /* 1153298f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532992 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11532998 push ecx */
  push32((uint32_t)(ECX));
  /* 11532999 call 0x11528360 */
  push32(0x1153299eu); f_11528360();
  /* 1153299e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115329a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115329a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115329a6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 115329ac push eax */
  push32((uint32_t)(EAX));
  /* 115329ad call 0x11528360 */
  push32(0x115329b2u); f_11528360();
  /* 115329b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115329b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115329b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115329ba mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 115329c0 push edx */
  push32((uint32_t)(EDX));
  /* 115329c1 call 0x11528360 */
  push32(0x115329c6u); f_11528360();
  /* 115329c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115329c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115329cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115329ce mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 115329d4 push ecx */
  push32((uint32_t)(ECX));
  /* 115329d5 call 0x11528360 */
  push32(0x115329dau); f_11528360();
  /* 115329da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115329dd push 2 */
  push32((uint32_t)(0x2u));
  /* 115329df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115329e2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 115329e8 push eax */
  push32((uint32_t)(EAX));
  /* 115329e9 call 0x11528360 */
  push32(0x115329eeu); f_11528360();
  /* 115329ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115329f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115329f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115329f6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 115329fc push edx */
  push32((uint32_t)(EDX));
  /* 115329fd call 0x11528360 */
  push32(0x11532a02u); f_11528360();
  /* 11532a02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532a05 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532a07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532a0a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11532a10 push ecx */
  push32((uint32_t)(ECX));
  /* 11532a11 call 0x11528360 */
  push32(0x11532a16u); f_11528360();
  /* 11532a16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11532a19:;
  /* 11532a19 pop ebp */
  EBP = (pop32());
  /* 11532a1a ret  */
  ESPCHK(0x11532710u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a20 @ 0x11532a20 (678 bytes, 180 insns) */
void f_11532a20(void) {
  FTRACE(0x11532a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11532a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11532a21 mov ebp, esp */
  EBP = (ESP);
  /* 11532a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11532a26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11532a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11532a2f mov ax, word ptr [0x11553ac2] */
  AX = (r16((uint32_t)(0x11553ac2)));
  /* 11532a35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11532a38 cmp dword ptr [0x11553a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532a3f je 0x11532b9a */
  if (C.zf) goto L_11532b9a;
  /* 11532a45 push 0x11553a90 */
  push32((uint32_t)(0x11553a90u));
  /* 11532a4a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11532a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532a4f push ecx */
  push32((uint32_t)(ECX));
  /* 11532a50 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532a52 call 0x11535a90 */
  push32(0x11532a57u); f_11535a90();
  /* 11532a57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532a5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532a5d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11532a5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11532a62 push 0x11553a94 */
  push32((uint32_t)(0x11553a94u));
  /* 11532a67 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11532a69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532a6c push eax */
  push32((uint32_t)(EAX));
  /* 11532a6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11532a6f call 0x11535a90 */
  push32(0x11532a74u); f_11535a90();
  /* 11532a74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532a77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532a7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532a7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532a7f push 0x11553a98 */
  push32((uint32_t)(0x11553a98u));
  /* 11532a84 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11532a86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532a89 push edx */
  push32((uint32_t)(EDX));
  /* 11532a8a push 1 */
  push32((uint32_t)(0x1u));
  /* 11532a8c call 0x11535a90 */
  push32(0x11532a91u); f_11535a90();
  /* 11532a91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532a94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532a97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532a99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532a9c mov edx, dword ptr [0x11553a98] */
  EDX = (r32((uint32_t)(0x11553a98)));
  /* 11532aa2 push edx */
  push32((uint32_t)(EDX));
  /* 11532aa3 call 0x11532cd0 */
  push32(0x11532aa8u); f_11532cd0();
  /* 11532aa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532aab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532aaf je 0x11532b09 */
  if (C.zf) goto L_11532b09;
  /* 11532ab1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532ab3 mov eax, dword ptr [0x11553a90] */
  EAX = (r32((uint32_t)(0x11553a90)));
  /* 11532ab8 push eax */
  push32((uint32_t)(EAX));
  /* 11532ab9 call 0x11528360 */
  push32(0x11532abeu); f_11528360();
  /* 11532abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532ac1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532ac3 mov ecx, dword ptr [0x11553a94] */
  ECX = (r32((uint32_t)(0x11553a94)));
  /* 11532ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11532aca call 0x11528360 */
  push32(0x11532acfu); f_11528360();
  /* 11532acf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532ad2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532ad4 mov edx, dword ptr [0x11553a98] */
  EDX = (r32((uint32_t)(0x11553a98)));
  /* 11532ada push edx */
  push32((uint32_t)(EDX));
  /* 11532adb call 0x11528360 */
  push32(0x11532ae0u); f_11528360();
  /* 11532ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532ae3 mov dword ptr [0x11553a90], 0 */
  w32((uint32_t)(0x11553a90), (0x0u));
  /* 11532aed mov dword ptr [0x11553a94], 0 */
  w32((uint32_t)(0x11553a94), (0x0u));
  /* 11532af7 mov dword ptr [0x11553a98], 0 */
  w32((uint32_t)(0x11553a98), (0x0u));
  /* 11532b01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11532b04 jmp 0x11532cc2 */
  goto L_11532cc2;
L_11532b09:;
  /* 11532b09 mov eax, dword ptr [0x11552d88] */
  EAX = (r32((uint32_t)(0x11552d88)));
  /* 11532b0e cmp dword ptr [eax], 0x11552d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11552d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532b14 je 0x11532b50 */
  if (C.zf) goto L_11532b50;
  /* 11532b16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532b18 mov ecx, dword ptr [0x11552d88] */
  ECX = (r32((uint32_t)(0x11552d88)));
  /* 11532b1e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11532b20 push edx */
  push32((uint32_t)(EDX));
  /* 11532b21 call 0x11528360 */
  push32(0x11532b26u); f_11528360();
  /* 11532b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532b29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532b2b mov eax, dword ptr [0x11552d88] */
  EAX = (r32((uint32_t)(0x11552d88)));
  /* 11532b30 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11532b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11532b34 call 0x11528360 */
  push32(0x11532b39u); f_11528360();
  /* 11532b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532b3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11532b3e mov edx, dword ptr [0x11552d88] */
  EDX = (r32((uint32_t)(0x11552d88)));
  /* 11532b44 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11532b47 push eax */
  push32((uint32_t)(EAX));
  /* 11532b48 call 0x11528360 */
  push32(0x11532b4du); f_11528360();
  /* 11532b4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11532b50:;
  /* 11532b50 mov ecx, dword ptr [0x11552d88] */
  ECX = (r32((uint32_t)(0x11552d88)));
  /* 11532b56 mov edx, dword ptr [0x11553a90] */
  EDX = (r32((uint32_t)(0x11553a90)));
  /* 11532b5c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11532b5e mov eax, dword ptr [0x11552d88] */
  EAX = (r32((uint32_t)(0x11552d88)));
  /* 11532b63 mov ecx, dword ptr [0x11553a94] */
  ECX = (r32((uint32_t)(0x11553a94)));
  /* 11532b69 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11532b6c mov edx, dword ptr [0x11552d88] */
  EDX = (r32((uint32_t)(0x11552d88)));
  /* 11532b72 mov eax, dword ptr [0x11553a98] */
  EAX = (r32((uint32_t)(0x11553a98)));
  /* 11532b77 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11532b7a mov ecx, dword ptr [0x11552d88] */
  ECX = (r32((uint32_t)(0x11552d88)));
  /* 11532b80 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11532b82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11532b84 mov byte ptr [0x11551ea8], al */
  w8((uint32_t)(0x11551ea8), (AL));
  /* 11532b89 mov dword ptr [0x11551eac], 1 */
  w32((uint32_t)(0x11551eac), (0x1u));
  /* 11532b93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11532b95 jmp 0x11532cc2 */
  goto L_11532cc2;
L_11532b9a:;
  /* 11532b9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11532b9c mov ecx, dword ptr [0x11553a90] */
  ECX = (r32((uint32_t)(0x11553a90)));
  /* 11532ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 11532ba3 call 0x11528360 */
  push32(0x11532ba8u); f_11528360();
  /* 11532ba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532bab push 2 */
  push32((uint32_t)(0x2u));
  /* 11532bad mov edx, dword ptr [0x11553a94] */
  EDX = (r32((uint32_t)(0x11553a94)));
  /* 11532bb3 push edx */
  push32((uint32_t)(EDX));
  /* 11532bb4 call 0x11528360 */
  push32(0x11532bb9u); f_11528360();
  /* 11532bb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532bbc push 2 */
  push32((uint32_t)(0x2u));
  /* 11532bbe mov eax, dword ptr [0x11553a98] */
  EAX = (r32((uint32_t)(0x11553a98)));
  /* 11532bc3 push eax */
  push32((uint32_t)(EAX));
  /* 11532bc4 call 0x11528360 */
  push32(0x11532bc9u); f_11528360();
  /* 11532bc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532bcc mov dword ptr [0x11553a90], 0 */
  w32((uint32_t)(0x11553a90), (0x0u));
  /* 11532bd6 mov dword ptr [0x11553a94], 0 */
  w32((uint32_t)(0x11553a94), (0x0u));
  /* 11532be0 mov dword ptr [0x11553a98], 0 */
  w32((uint32_t)(0x11553a98), (0x0u));
  /* 11532bea push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11532bef push 0x1154f594 */
  push32((uint32_t)(0x1154f594u));
  /* 11532bf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532bf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532bf8 call 0x115278d0 */
  push32(0x11532bfdu); f_115278d0();
  /* 11532bfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532c00 mov ecx, dword ptr [0x11552d88] */
  ECX = (r32((uint32_t)(0x11552d88)));
  /* 11532c06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11532c08 mov edx, dword ptr [0x11552d88] */
  EDX = (r32((uint32_t)(0x11552d88)));
  /* 11532c0e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532c11 jne 0x11532c1b */
  if (!C.zf) goto L_11532c1b;
  /* 11532c13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11532c16 jmp 0x11532cc2 */
  goto L_11532cc2;
L_11532c1b:;
  /* 11532c1b push 0x1154f564 */
  push32((uint32_t)(0x1154f564u));
  /* 11532c20 mov eax, dword ptr [0x11552d88] */
  EAX = (r32((uint32_t)(0x11552d88)));
  /* 11532c25 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11532c27 push ecx */
  push32((uint32_t)(ECX));
  /* 11532c28 call 0x1152a880 */
  push32(0x11532c2du); f_1152a880();
  /* 11532c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532c30 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11532c35 push 0x1154f594 */
  push32((uint32_t)(0x1154f594u));
  /* 11532c3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11532c3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11532c3e call 0x115278d0 */
  push32(0x11532c43u); f_115278d0();
  /* 11532c43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532c46 mov edx, dword ptr [0x11552d88] */
  EDX = (r32((uint32_t)(0x11552d88)));
  /* 11532c4c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11532c4f mov eax, dword ptr [0x11552d88] */
  EAX = (r32((uint32_t)(0x11552d88)));
  /* 11532c54 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532c58 jne 0x11532c5f */
  if (!C.zf) goto L_11532c5f;
  /* 11532c5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11532c5d jmp 0x11532cc2 */
  goto L_11532cc2;
L_11532c5f:;
  /* 11532c5f mov ecx, dword ptr [0x11552d88] */
  ECX = (r32((uint32_t)(0x11552d88)));
  /* 11532c65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11532c68 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11532c6b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11532c70 push 0x1154f594 */
  push32((uint32_t)(0x1154f594u));
  /* 11532c75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532c79 call 0x115278d0 */
  push32(0x11532c7eu); f_115278d0();
  /* 11532c7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532c81 mov ecx, dword ptr [0x11552d88] */
  ECX = (r32((uint32_t)(0x11552d88)));
  /* 11532c87 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11532c8a mov edx, dword ptr [0x11552d88] */
  EDX = (r32((uint32_t)(0x11552d88)));
  /* 11532c90 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532c94 jne 0x11532c9b */
  if (!C.zf) goto L_11532c9b;
  /* 11532c96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11532c99 jmp 0x11532cc2 */
  goto L_11532cc2;
L_11532c9b:;
  /* 11532c9b mov eax, dword ptr [0x11552d88] */
  EAX = (r32((uint32_t)(0x11552d88)));
  /* 11532ca0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11532ca3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11532ca6 mov edx, dword ptr [0x11552d88] */
  EDX = (r32((uint32_t)(0x11552d88)));
  /* 11532cac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11532cae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11532cb0 mov byte ptr [0x11551ea8], cl */
  w8((uint32_t)(0x11551ea8), (CL));
  /* 11532cb6 mov dword ptr [0x11551eac], 1 */
  w32((uint32_t)(0x11551eac), (0x1u));
  /* 11532cc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11532cc2:;
  /* 11532cc2 mov esp, ebp */
  ESP = (EBP);
  /* 11532cc4 pop ebp */
  EBP = (pop32());
  /* 11532cc5 ret  */
  ESPCHK(0x11532a20u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11532cd0 (125 bytes, 49 insns) */
void f_11532cd0(void) {
  FTRACE(0x11532cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11532cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11532cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11532cd3 push ecx */
  push32((uint32_t)(ECX));
L_11532cd4:;
  /* 11532cd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532cd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11532cda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11532cdc je 0x11532d49 */
  if (C.zf) goto L_11532d49;
  /* 11532cde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532ce1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11532ce4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532ce7 jl 0x11532d0d */
  if ((C.sf!=C.of)) goto L_11532d0d;
  /* 11532ce9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532cec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11532cef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532cf2 jg 0x11532d0d */
  if ((!C.zf&&C.sf==C.of)) goto L_11532d0d;
  /* 11532cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532cf7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11532cfa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11532cfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532d00 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11532d02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532d05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532d08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11532d0b jmp 0x11532d47 */
  goto L_11532d47;
L_11532d0d:;
  /* 11532d0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532d10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11532d13 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532d16 jne 0x11532d3e */
  if (!C.zf) goto L_11532d3e;
  /* 11532d18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532d1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11532d1e:;
  /* 11532d1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532d21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532d24 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11532d27 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11532d29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532d2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532d2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11532d32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532d35 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11532d38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11532d3a jne 0x11532d1e */
  if (!C.zf) goto L_11532d1e;
  /* 11532d3c jmp 0x11532d47 */
  goto L_11532d47;
L_11532d3e:;
  /* 11532d3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532d41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532d44 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11532d47:;
  /* 11532d47 jmp 0x11532cd4 */
  goto L_11532cd4;
L_11532d49:;
  /* 11532d49 mov esp, ebp */
  ESP = (EBP);
  /* 11532d4b pop ebp */
  EBP = (pop32());
  /* 11532d4c ret  */
  ESPCHK(0x11532cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d50 @ 0x11532d50 (304 bytes, 85 insns) */
void f_11532d50(void) {
  FTRACE(0x11532d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11532d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11532d51 mov ebp, esp */
  EBP = (ESP);
  /* 11532d53 push ecx */
  push32((uint32_t)(ECX));
  /* 11532d54 cmp dword ptr [0x11553a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532d5b je 0x11532e1c */
  if (C.zf) goto L_11532e1c;
  /* 11532d61 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11532d63 push 0x1154f5a0 */
  push32((uint32_t)(0x1154f5a0u));
  /* 11532d68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532d6a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11532d6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11532d6e call 0x11527ce0 */
  push32(0x11532d73u); f_11527ce0();
  /* 11532d73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532d76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11532d79 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532d7d jne 0x11532d89 */
  if (!C.zf) goto L_11532d89;
  /* 11532d7f mov eax, 1 */
  EAX = (0x1u);
  /* 11532d84 jmp 0x11532e7c */
  goto L_11532e7c;
L_11532d89:;
  /* 11532d89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532d8c push eax */
  push32((uint32_t)(EAX));
  /* 11532d8d call 0x11532e80 */
  push32(0x11532d92u); f_11532e80();
  /* 11532d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11532d97 je 0x11532dbd */
  if (C.zf) goto L_11532dbd;
  /* 11532d99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532d9c push ecx */
  push32((uint32_t)(ECX));
  /* 11532d9d call 0x11533110 */
  push32(0x11532da2u); f_11533110();
  /* 11532da2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532da5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11532da7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532daa push edx */
  push32((uint32_t)(EDX));
  /* 11532dab call 0x11528360 */
  push32(0x11532db0u); f_11528360();
  /* 11532db0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532db3 mov eax, 1 */
  EAX = (0x1u);
  /* 11532db8 jmp 0x11532e7c */
  goto L_11532e7c;
L_11532dbd:;
  /* 11532dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532dc0 mov ecx, dword ptr [0x11552d88] */
  ECX = (r32((uint32_t)(0x11552d88)));
  /* 11532dc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11532dc8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11532dca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532dcd mov ecx, dword ptr [0x11552d88] */
  ECX = (r32((uint32_t)(0x11552d88)));
  /* 11532dd3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11532dd6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11532dd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532ddc mov ecx, dword ptr [0x11552d88] */
  ECX = (r32((uint32_t)(0x11552d88)));
  /* 11532de2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11532de5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11532de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532deb mov dword ptr [0x11552d88], eax */
  w32((uint32_t)(0x11552d88), (EAX));
  /* 11532df0 mov ecx, dword ptr [0x11553a9c] */
  ECX = (r32((uint32_t)(0x11553a9c)));
  /* 11532df6 push ecx */
  push32((uint32_t)(ECX));
  /* 11532df7 call 0x11533110 */
  push32(0x11532dfcu); f_11533110();
  /* 11532dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532dff push 2 */
  push32((uint32_t)(0x2u));
  /* 11532e01 mov edx, dword ptr [0x11553a9c] */
  EDX = (r32((uint32_t)(0x11553a9c)));
  /* 11532e07 push edx */
  push32((uint32_t)(EDX));
  /* 11532e08 call 0x11528360 */
  push32(0x11532e0du); f_11528360();
  /* 11532e0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532e10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532e13 mov dword ptr [0x11553a9c], eax */
  w32((uint32_t)(0x11553a9c), (EAX));
  /* 11532e18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11532e1a jmp 0x11532e7c */
  goto L_11532e7c;
L_11532e1c:;
  /* 11532e1c mov ecx, dword ptr [0x11552d88] */
  ECX = (r32((uint32_t)(0x11552d88)));
  /* 11532e22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11532e24 mov dword ptr [0x11552d58], edx */
  w32((uint32_t)(0x11552d58), (EDX));
  /* 11532e2a mov eax, dword ptr [0x11552d88] */
  EAX = (r32((uint32_t)(0x11552d88)));
  /* 11532e2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11532e32 mov dword ptr [0x11552d5c], ecx */
  w32((uint32_t)(0x11552d5c), (ECX));
  /* 11532e38 mov edx, dword ptr [0x11552d88] */
  EDX = (r32((uint32_t)(0x11552d88)));
  /* 11532e3e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11532e41 mov dword ptr [0x11552d60], eax */
  w32((uint32_t)(0x11552d60), (EAX));
  /* 11532e46 mov dword ptr [0x11552d88], 0x11552d58 */
  w32((uint32_t)(0x11552d88), (0x11552d58u));
  /* 11532e50 mov ecx, dword ptr [0x11553a9c] */
  ECX = (r32((uint32_t)(0x11553a9c)));
  /* 11532e56 push ecx */
  push32((uint32_t)(ECX));
  /* 11532e57 call 0x11533110 */
  push32(0x11532e5cu); f_11533110();
  /* 11532e5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532e5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11532e61 mov edx, dword ptr [0x11553a9c] */
  EDX = (r32((uint32_t)(0x11553a9c)));
  /* 11532e67 push edx */
  push32((uint32_t)(EDX));
  /* 11532e68 call 0x11528360 */
  push32(0x11532e6du); f_11528360();
  /* 11532e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532e70 mov dword ptr [0x11553a9c], 0 */
  w32((uint32_t)(0x11553a9c), (0x0u));
  /* 11532e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11532e7c:;
  /* 11532e7c mov esp, ebp */
  ESP = (EBP);
  /* 11532e7e pop ebp */
  EBP = (pop32());
  /* 11532e7f ret  */
  ESPCHK(0x11532d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e80 @ 0x11532e80 (525 bytes, 200 insns) */
void f_11532e80(void) {
  FTRACE(0x11532e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11532e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11532e81 mov ebp, esp */
  EBP = (ESP);
  /* 11532e83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11532e86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11532e8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11532e8f mov ax, word ptr [0x11553abc] */
  AX = (r16((uint32_t)(0x11553abc)));
  /* 11532e95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11532e98 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11532e9c jne 0x11532ea6 */
  if (!C.zf) goto L_11532ea6;
  /* 11532e9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11532ea1 jmp 0x11533089 */
  goto L_11533089;
L_11532ea6:;
  /* 11532ea6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532ea9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532eac push ecx */
  push32((uint32_t)(ECX));
  /* 11532ead push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11532eaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532eb2 push edx */
  push32((uint32_t)(EDX));
  /* 11532eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532eb5 call 0x11535a90 */
  push32(0x11532ebau); f_11535a90();
  /* 11532eba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532ebd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532ec0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532ec2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532ec8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532ecb push edx */
  push32((uint32_t)(EDX));
  /* 11532ecc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11532ece mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532ed1 push eax */
  push32((uint32_t)(EAX));
  /* 11532ed2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532ed4 call 0x11535a90 */
  push32(0x11532ed9u); f_11535a90();
  /* 11532ed9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532edc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532edf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532ee1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532ee4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532ee7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532eea push edx */
  push32((uint32_t)(EDX));
  /* 11532eeb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11532eed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532ef0 push eax */
  push32((uint32_t)(EAX));
  /* 11532ef1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532ef3 call 0x11535a90 */
  push32(0x11532ef8u); f_11535a90();
  /* 11532ef8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532efb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532efe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532f00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532f03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532f06 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532f09 push edx */
  push32((uint32_t)(EDX));
  /* 11532f0a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11532f0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532f0f push eax */
  push32((uint32_t)(EAX));
  /* 11532f10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11532f12 call 0x11535a90 */
  push32(0x11532f17u); f_11535a90();
  /* 11532f17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532f1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532f1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532f1f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532f22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532f25 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532f28 push edx */
  push32((uint32_t)(EDX));
  /* 11532f29 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11532f2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532f2e push eax */
  push32((uint32_t)(EAX));
  /* 11532f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11532f31 call 0x11535a90 */
  push32(0x11532f36u); f_11535a90();
  /* 11532f36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532f39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532f3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532f3e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532f41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532f44 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11532f47 push eax */
  push32((uint32_t)(EAX));
  /* 11532f48 call 0x11533090 */
  push32(0x11532f4du); f_11533090();
  /* 11532f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532f50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532f53 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532f56 push ecx */
  push32((uint32_t)(ECX));
  /* 11532f57 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11532f59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532f5c push edx */
  push32((uint32_t)(EDX));
  /* 11532f5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11532f5f call 0x11535a90 */
  push32(0x11532f64u); f_11535a90();
  /* 11532f64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532f67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532f6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532f6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532f6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532f72 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532f75 push edx */
  push32((uint32_t)(EDX));
  /* 11532f76 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11532f78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532f7b push eax */
  push32((uint32_t)(EAX));
  /* 11532f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11532f7e call 0x11535a90 */
  push32(0x11532f83u); f_11535a90();
  /* 11532f83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532f86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532f89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532f8b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532f8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532f91 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532f94 push edx */
  push32((uint32_t)(EDX));
  /* 11532f95 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11532f97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532f9a push eax */
  push32((uint32_t)(EAX));
  /* 11532f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11532f9d call 0x11535a90 */
  push32(0x11532fa2u); f_11535a90();
  /* 11532fa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532fa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532fa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532faa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532fad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532fb0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532fb3 push edx */
  push32((uint32_t)(EDX));
  /* 11532fb4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11532fb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532fb9 push eax */
  push32((uint32_t)(EAX));
  /* 11532fba push 0 */
  push32((uint32_t)(0x0u));
  /* 11532fbc call 0x11535a90 */
  push32(0x11532fc1u); f_11535a90();
  /* 11532fc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532fc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532fc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532fc9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532fcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532fcf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532fd2 push edx */
  push32((uint32_t)(EDX));
  /* 11532fd3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11532fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532fd8 push eax */
  push32((uint32_t)(EAX));
  /* 11532fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11532fdb call 0x11535a90 */
  push32(0x11532fe0u); f_11535a90();
  /* 11532fe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11532fe3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11532fe6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11532fe8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11532feb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11532fee add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11532ff1 push edx */
  push32((uint32_t)(EDX));
  /* 11532ff2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11532ff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11532ff7 push eax */
  push32((uint32_t)(EAX));
  /* 11532ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11532ffa call 0x11535a90 */
  push32(0x11532fffu); f_11535a90();
  /* 11532fff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533002 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11533005 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11533007 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1153300a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153300d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533010 push edx */
  push32((uint32_t)(EDX));
  /* 11533011 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11533013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11533016 push eax */
  push32((uint32_t)(EAX));
  /* 11533017 push 0 */
  push32((uint32_t)(0x0u));
  /* 11533019 call 0x11535a90 */
  push32(0x1153301eu); f_11535a90();
  /* 1153301e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533021 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11533024 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11533026 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11533029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153302c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153302f push edx */
  push32((uint32_t)(EDX));
  /* 11533030 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11533032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11533035 push eax */
  push32((uint32_t)(EAX));
  /* 11533036 push 0 */
  push32((uint32_t)(0x0u));
  /* 11533038 call 0x11535a90 */
  push32(0x1153303du); f_11535a90();
  /* 1153303d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533040 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11533043 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11533045 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11533048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153304b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153304e push edx */
  push32((uint32_t)(EDX));
  /* 1153304f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11533051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11533054 push eax */
  push32((uint32_t)(EAX));
  /* 11533055 push 0 */
  push32((uint32_t)(0x0u));
  /* 11533057 call 0x11535a90 */
  push32(0x1153305cu); f_11535a90();
  /* 1153305c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153305f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11533062 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11533064 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11533067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153306a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153306d push edx */
  push32((uint32_t)(EDX));
  /* 1153306e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11533070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11533073 push eax */
  push32((uint32_t)(EAX));
  /* 11533074 push 0 */
  push32((uint32_t)(0x0u));
  /* 11533076 call 0x11535a90 */
  push32(0x1153307bu); f_11535a90();
  /* 1153307b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153307e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11533081 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11533083 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11533086 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11533089:;
  /* 11533089 mov esp, ebp */
  ESP = (EBP);
  /* 1153308b pop ebp */
  EBP = (pop32());
  /* 1153308c ret  */
  ESPCHK(0x11532e80u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11533090 (125 bytes, 49 insns) */
void f_11533090(void) {
  FTRACE(0x11533090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533090 push ebp */
  push32((uint32_t)(EBP));
  /* 11533091 mov ebp, esp */
  EBP = (ESP);
  /* 11533093 push ecx */
  push32((uint32_t)(ECX));
L_11533094:;
  /* 11533094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533097 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1153309a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1153309c je 0x11533109 */
  if (C.zf) goto L_11533109;
  /* 1153309e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115330a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115330a4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115330a7 jl 0x115330cd */
  if ((C.sf!=C.of)) goto L_115330cd;
  /* 115330a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115330ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115330af cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115330b2 jg 0x115330cd */
  if ((!C.zf&&C.sf==C.of)) goto L_115330cd;
  /* 115330b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115330b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115330ba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115330bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115330c0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 115330c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115330c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115330c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115330cb jmp 0x11533107 */
  goto L_11533107;
L_115330cd:;
  /* 115330cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115330d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115330d3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115330d6 jne 0x115330fe */
  if (!C.zf) goto L_115330fe;
  /* 115330d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115330db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115330de:;
  /* 115330de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115330e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115330e4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 115330e7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115330e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115330ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115330ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115330f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115330f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115330f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115330fa jne 0x115330de */
  if (!C.zf) goto L_115330de;
  /* 115330fc jmp 0x11533107 */
  goto L_11533107;
L_115330fe:;
  /* 115330fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533101 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533104 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11533107:;
  /* 11533107 jmp 0x11533094 */
  goto L_11533094;
L_11533109:;
  /* 11533109 mov esp, ebp */
  ESP = (EBP);
  /* 1153310b pop ebp */
  EBP = (pop32());
  /* 1153310c ret  */
  ESPCHK(0x11533090u, _esp0);
  ESP += 4; return;
}

/* FUN_10013110 @ 0x11533110 (147 bytes, 52 insns) */
void f_11533110(void) {
  FTRACE(0x11533110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533110 push ebp */
  push32((uint32_t)(EBP));
  /* 11533111 mov ebp, esp */
  EBP = (ESP);
  /* 11533113 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533117 jne 0x1153311e */
  if (!C.zf) goto L_1153311e;
  /* 11533119 jmp 0x115331a1 */
  goto L_115331a1;
L_1153311e:;
  /* 1153311e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533121 cmp dword ptr [eax + 0xc], 0x11553af8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11553af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533128 je 0x115331a1 */
  if (C.zf) goto L_115331a1;
  /* 1153312a push 2 */
  push32((uint32_t)(0x2u));
  /* 1153312c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153312f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11533132 push edx */
  push32((uint32_t)(EDX));
  /* 11533133 call 0x11528360 */
  push32(0x11533138u); f_11528360();
  /* 11533138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153313b push 2 */
  push32((uint32_t)(0x2u));
  /* 1153313d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533140 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11533143 push ecx */
  push32((uint32_t)(ECX));
  /* 11533144 call 0x11528360 */
  push32(0x11533149u); f_11528360();
  /* 11533149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153314c push 2 */
  push32((uint32_t)(0x2u));
  /* 1153314e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533151 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11533154 push eax */
  push32((uint32_t)(EAX));
  /* 11533155 call 0x11528360 */
  push32(0x1153315au); f_11528360();
  /* 1153315a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153315d push 2 */
  push32((uint32_t)(0x2u));
  /* 1153315f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533162 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11533165 push edx */
  push32((uint32_t)(EDX));
  /* 11533166 call 0x11528360 */
  push32(0x1153316bu); f_11528360();
  /* 1153316b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153316e push 2 */
  push32((uint32_t)(0x2u));
  /* 11533170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533173 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11533176 push ecx */
  push32((uint32_t)(ECX));
  /* 11533177 call 0x11528360 */
  push32(0x1153317cu); f_11528360();
  /* 1153317c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153317f push 2 */
  push32((uint32_t)(0x2u));
  /* 11533181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533184 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11533187 push eax */
  push32((uint32_t)(EAX));
  /* 11533188 call 0x11528360 */
  push32(0x1153318du); f_11528360();
  /* 1153318d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533190 push 2 */
  push32((uint32_t)(0x2u));
  /* 11533192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533195 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11533198 push edx */
  push32((uint32_t)(EDX));
  /* 11533199 call 0x11528360 */
  push32(0x1153319eu); f_11528360();
  /* 1153319e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115331a1:;
  /* 115331a1 pop ebp */
  EBP = (pop32());
  /* 115331a2 ret  */
  ESPCHK(0x11533110u, _esp0);
  ESP += 4; return;
}

/* FUN_100131b0 @ 0x115331b0 (928 bytes, 284 insns) */
void f_115331b0(void) {
  FTRACE(0x115331b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115331b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115331b1 mov ebp, esp */
  EBP = (ESP);
  /* 115331b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115331b6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 115331bd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 115331c4 cmp dword ptr [0x11553a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115331cb je 0x11533501 */
  if (C.zf) goto L_11533501;
  /* 115331d1 cmp dword ptr [0x11553a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115331d8 jne 0x11533200 */
  if (!C.zf) goto L_11533200;
  /* 115331da push 0x11553a70 */
  push32((uint32_t)(0x11553a70u));
  /* 115331df push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 115331e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115331e6 mov ax, word ptr [0x11553ab4] */
  AX = (r16((uint32_t)(0x11553ab4)));
  /* 115331ec push eax */
  push32((uint32_t)(EAX));
  /* 115331ed push 0 */
  push32((uint32_t)(0x0u));
  /* 115331ef call 0x11535a90 */
  push32(0x115331f4u); f_11535a90();
  /* 115331f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115331f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115331f9 je 0x11533200 */
  if (C.zf) goto L_11533200;
  /* 115331fb jmp 0x115334c2 */
  goto L_115334c2;
L_11533200:;
  /* 11533200 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11533202 push 0x1154f5ac */
  push32((uint32_t)(0x1154f5acu));
  /* 11533207 push 2 */
  push32((uint32_t)(0x2u));
  /* 11533209 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1153320e call 0x115278d0 */
  push32(0x11533213u); f_115278d0();
  /* 11533213 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533216 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11533219 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1153321b push 0x1154f5ac */
  push32((uint32_t)(0x1154f5acu));
  /* 11533220 push 2 */
  push32((uint32_t)(0x2u));
  /* 11533222 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11533227 call 0x115278d0 */
  push32(0x1153322cu); f_115278d0();
  /* 1153322c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153322f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11533232 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11533234 push 0x1154f5ac */
  push32((uint32_t)(0x1154f5acu));
  /* 11533239 push 2 */
  push32((uint32_t)(0x2u));
  /* 1153323b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11533240 call 0x115278d0 */
  push32(0x11533245u); f_115278d0();
  /* 11533245 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533248 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1153324b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1153324d push 0x1154f5ac */
  push32((uint32_t)(0x1154f5acu));
  /* 11533252 push 2 */
  push32((uint32_t)(0x2u));
  /* 11533254 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11533259 call 0x115278d0 */
  push32(0x1153325eu); f_115278d0();
  /* 1153325e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533261 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11533264 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533268 je 0x1153327c */
  if (C.zf) goto L_1153327c;
  /* 1153326a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153326e je 0x1153327c */
  if (C.zf) goto L_1153327c;
  /* 11533270 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533274 je 0x1153327c */
  if (C.zf) goto L_1153327c;
  /* 11533276 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153327a jne 0x11533281 */
  if (!C.zf) goto L_11533281;
L_1153327c:;
  /* 1153327c jmp 0x115334c2 */
  goto L_115334c2;
L_11533281:;
  /* 11533281 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11533284 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11533287 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1153328e jmp 0x11533299 */
  goto L_11533299;
L_11533290:;
  /* 11533290 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11533293 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533296 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11533299:;
  /* 11533299 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115332a0 jge 0x115332b5 */
  if ((C.sf==C.of)) goto L_115332b5;
  /* 115332a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115332a5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 115332a8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 115332aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115332ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115332b0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 115332b3 jmp 0x11533290 */
  goto L_11533290;
L_115332b5:;
  /* 115332b5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 115332b8 push eax */
  push32((uint32_t)(EAX));
  /* 115332b9 mov ecx, dword ptr [0x11553a70] */
  ECX = (r32((uint32_t)(0x11553a70)));
  /* 115332bf push ecx */
  push32((uint32_t)(ECX));
  /* 115332c0 call dword ptr [0x1155634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155634c))), 0x115332c6u);
  /* 115332c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115332c8 jne 0x115332cf */
  if (!C.zf) goto L_115332cf;
  /* 115332ca jmp 0x115334c2 */
  goto L_115334c2;
L_115332cf:;
  /* 115332cf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115332d3 jbe 0x115332da */
  if ((C.cf||C.zf)) goto L_115332da;
  /* 115332d5 jmp 0x115334c2 */
  goto L_115334c2;
L_115332da:;
  /* 115332da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115332dd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115332e3 mov dword ptr [0x11551ea4], edx */
  w32((uint32_t)(0x11551ea4), (EDX));
  /* 115332e9 cmp dword ptr [0x11551ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11551ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115332f0 jle 0x11533349 */
  if ((C.zf||C.sf!=C.of)) goto L_11533349;
  /* 115332f2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 115332f5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115332f8 jmp 0x11533303 */
  goto L_11533303;
L_115332fa:;
  /* 115332fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115332fd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533300 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11533303:;
  /* 11533303 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11533306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11533308 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1153330a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153330c je 0x11533349 */
  if (C.zf) goto L_11533349;
  /* 1153330e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11533311 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11533313 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11533316 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11533318 je 0x11533349 */
  if (C.zf) goto L_11533349;
  /* 1153331a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1153331d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1153331f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11533321 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11533324 jmp 0x1153332f */
  goto L_1153332f;
L_11533326:;
  /* 11533326 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11533329 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153332c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1153332f:;
  /* 1153332f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11533332 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11533334 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11533337 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153333a jg 0x11533347 */
  if ((!C.zf&&C.sf==C.of)) goto L_11533347;
  /* 1153333c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1153333f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533342 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11533345 jmp 0x11533326 */
  goto L_11533326;
L_11533347:;
  /* 11533347 jmp 0x115332fa */
  goto L_115332fa;
L_11533349:;
  /* 11533349 push 0 */
  push32((uint32_t)(0x0u));
  /* 1153334b push 0 */
  push32((uint32_t)(0x0u));
  /* 1153334d push 0 */
  push32((uint32_t)(0x0u));
  /* 1153334f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11533352 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533355 push eax */
  push32((uint32_t)(EAX));
  /* 11533356 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1153335b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1153335e push ecx */
  push32((uint32_t)(ECX));
  /* 1153335f push 1 */
  push32((uint32_t)(0x1u));
  /* 11533361 call 0x1152fb00 */
  push32(0x11533366u); f_1152fb00();
  /* 11533366 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533369 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153336b jne 0x11533372 */
  if (!C.zf) goto L_11533372;
  /* 1153336d jmp 0x115334c2 */
  goto L_115334c2;
L_11533372:;
  /* 11533372 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11533375 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1153337a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1153337d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11533380 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11533387 jmp 0x11533392 */
  goto L_11533392;
L_11533389:;
  /* 11533389 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1153338c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153338f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11533392:;
  /* 11533392 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533399 jge 0x115333b0 */
  if ((C.sf==C.of)) goto L_115333b0;
  /* 1153339b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1153339e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 115333a2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 115333a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115333a8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115333ab mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 115333ae jmp 0x11533389 */
  goto L_11533389;
L_115333b0:;
  /* 115333b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115333b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115333b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115333b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115333ba push edx */
  push32((uint32_t)(EDX));
  /* 115333bb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115333c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115333c3 push eax */
  push32((uint32_t)(EAX));
  /* 115333c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115333c6 call 0x11535d30 */
  push32(0x115333cbu); f_11535d30();
  /* 115333cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115333ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115333d0 jne 0x115333d7 */
  if (!C.zf) goto L_115333d7;
  /* 115333d2 jmp 0x115334c2 */
  goto L_115334c2;
L_115333d7:;
  /* 115333d7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115333da mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 115333df cmp dword ptr [0x11551ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11551ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115333e6 jle 0x11533443 */
  if ((C.zf||C.sf!=C.of)) goto L_11533443;
  /* 115333e8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 115333eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 115333ee jmp 0x115333f9 */
  goto L_115333f9;
L_115333f0:;
  /* 115333f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115333f3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115333f6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_115333f9:;
  /* 115333f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115333fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115333fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11533400 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11533402 je 0x11533443 */
  if (C.zf) goto L_11533443;
  /* 11533404 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11533407 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11533409 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1153340c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1153340e je 0x11533443 */
  if (C.zf) goto L_11533443;
  /* 11533410 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11533413 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11533415 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11533417 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1153341a jmp 0x11533425 */
  goto L_11533425;
L_1153341c:;
  /* 1153341c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1153341f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533422 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11533425:;
  /* 11533425 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11533428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153342a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1153342d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533430 jg 0x11533441 */
  if ((!C.zf&&C.sf==C.of)) goto L_11533441;
  /* 11533432 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11533435 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11533438 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1153343f jmp 0x1153341c */
  goto L_1153341c;
L_11533441:;
  /* 11533441 jmp 0x115333f0 */
  goto L_115333f0;
L_11533443:;
  /* 11533443 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11533446 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533449 mov dword ptr [0x11551c98], eax */
  w32((uint32_t)(0x11551c98), (EAX));
  /* 1153344e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11533451 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533454 mov dword ptr [0x11551c9c], ecx */
  w32((uint32_t)(0x11551c9c), (ECX));
  /* 1153345a cmp dword ptr [0x11553aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533461 je 0x11533474 */
  if (C.zf) goto L_11533474;
  /* 11533463 push 2 */
  push32((uint32_t)(0x2u));
  /* 11533465 mov edx, dword ptr [0x11553aa0] */
  EDX = (r32((uint32_t)(0x11553aa0)));
  /* 1153346b push edx */
  push32((uint32_t)(EDX));
  /* 1153346c call 0x11528360 */
  push32(0x11533471u); f_11528360();
  /* 11533471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11533474:;
  /* 11533474 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11533477 mov dword ptr [0x11553aa0], eax */
  w32((uint32_t)(0x11553aa0), (EAX));
  /* 1153347c cmp dword ptr [0x11553aa4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553aa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533483 je 0x11533496 */
  if (C.zf) goto L_11533496;
  /* 11533485 push 2 */
  push32((uint32_t)(0x2u));
  /* 11533487 mov ecx, dword ptr [0x11553aa4] */
  ECX = (r32((uint32_t)(0x11553aa4)));
  /* 1153348d push ecx */
  push32((uint32_t)(ECX));
  /* 1153348e call 0x11528360 */
  push32(0x11533493u); f_11528360();
  /* 11533493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11533496:;
  /* 11533496 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11533499 mov dword ptr [0x11553aa4], edx */
  w32((uint32_t)(0x11553aa4), (EDX));
  /* 1153349f push 2 */
  push32((uint32_t)(0x2u));
  /* 115334a1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115334a4 push eax */
  push32((uint32_t)(EAX));
  /* 115334a5 call 0x11528360 */
  push32(0x115334aau); f_11528360();
  /* 115334aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115334ad push 2 */
  push32((uint32_t)(0x2u));
  /* 115334af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115334b2 push ecx */
  push32((uint32_t)(ECX));
  /* 115334b3 call 0x11528360 */
  push32(0x115334b8u); f_11528360();
  /* 115334b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115334bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115334bd jmp 0x1153354c */
  goto L_1153354c;
L_115334c2:;
  /* 115334c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 115334c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115334c7 push edx */
  push32((uint32_t)(EDX));
  /* 115334c8 call 0x11528360 */
  push32(0x115334cdu); f_11528360();
  /* 115334cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115334d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115334d2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115334d5 push eax */
  push32((uint32_t)(EAX));
  /* 115334d6 call 0x11528360 */
  push32(0x115334dbu); f_11528360();
  /* 115334db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115334de push 2 */
  push32((uint32_t)(0x2u));
  /* 115334e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115334e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115334e4 call 0x11528360 */
  push32(0x115334e9u); f_11528360();
  /* 115334e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115334ec push 2 */
  push32((uint32_t)(0x2u));
  /* 115334ee mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115334f1 push edx */
  push32((uint32_t)(EDX));
  /* 115334f2 call 0x11528360 */
  push32(0x115334f7u); f_11528360();
  /* 115334f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115334fa mov eax, 1 */
  EAX = (0x1u);
  /* 115334ff jmp 0x1153354c */
  goto L_1153354c;
L_11533501:;
  /* 11533501 mov dword ptr [0x11551c98], 0x11551ca2 */
  w32((uint32_t)(0x11551c98), (0x11551ca2u));
  /* 1153350b mov dword ptr [0x11551c9c], 0x11551ca2 */
  w32((uint32_t)(0x11551c9c), (0x11551ca2u));
  /* 11533515 push 2 */
  push32((uint32_t)(0x2u));
  /* 11533517 mov eax, dword ptr [0x11553aa0] */
  EAX = (r32((uint32_t)(0x11553aa0)));
  /* 1153351c push eax */
  push32((uint32_t)(EAX));
  /* 1153351d call 0x11528360 */
  push32(0x11533522u); f_11528360();
  /* 11533522 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533525 push 2 */
  push32((uint32_t)(0x2u));
  /* 11533527 mov ecx, dword ptr [0x11553aa4] */
  ECX = (r32((uint32_t)(0x11553aa4)));
  /* 1153352d push ecx */
  push32((uint32_t)(ECX));
  /* 1153352e call 0x11528360 */
  push32(0x11533533u); f_11528360();
  /* 11533533 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533536 mov dword ptr [0x11553aa0], 0 */
  w32((uint32_t)(0x11553aa0), (0x0u));
  /* 11533540 mov dword ptr [0x11553aa4], 0 */
  w32((uint32_t)(0x11553aa4), (0x0u));
  /* 1153354a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1153354c:;
  /* 1153354c mov esp, ebp */
  ESP = (EBP);
  /* 1153354e pop ebp */
  EBP = (pop32());
  /* 1153354f ret  */
  ESPCHK(0x115331b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013550 @ 0x11533550 (7 bytes, 5 insns) */
void f_11533550(void) {
  FTRACE(0x11533550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533550 push ebp */
  push32((uint32_t)(EBP));
  /* 11533551 mov ebp, esp */
  EBP = (ESP);
  /* 11533553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11533555 pop ebp */
  EBP = (pop32());
  /* 11533556 ret  */
  ESPCHK(0x11533550u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11533560 (129 bytes, 56 insns) */
void f_11533560(void) {
  FTRACE(0x11533560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533560 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11533564 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11533568 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1153356e jne 0x115335ac */
  if (!C.zf) goto L_115335ac;
L_11533570:;
  /* 11533570 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11533572 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11533574 jne 0x115335a4 */
  if (!C.zf) goto L_115335a4;
  /* 11533576 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11533578 je 0x115335a0 */
  if (C.zf) goto L_115335a0;
  /* 1153357a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1153357d jne 0x115335a4 */
  if (!C.zf) goto L_115335a4;
  /* 1153357f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11533581 je 0x115335a0 */
  if (C.zf) goto L_115335a0;
  /* 11533583 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11533586 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11533589 jne 0x115335a4 */
  if (!C.zf) goto L_115335a4;
  /* 1153358b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1153358d je 0x115335a0 */
  if (C.zf) goto L_115335a0;
  /* 1153358f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11533592 jne 0x115335a4 */
  if (!C.zf) goto L_115335a4;
  /* 11533594 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533597 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153359a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1153359c jne 0x11533570 */
  if (!C.zf) goto L_11533570;
  /* 1153359e mov edi, edi */
  EDI = (EDI);
L_115335a0:;
  /* 115335a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115335a2 ret  */
  ESPCHK(0x11533560u, _esp0);
  ESP += 4; return;
  /* 115335a3 nop  */
  /* nop */
L_115335a4:;
  /* 115335a4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115335a6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115335a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115335a9 ret  */
  ESPCHK(0x11533560u, _esp0);
  ESP += 4; return;
  /* 115335aa mov edi, edi */
  EDI = (EDI);
L_115335ac:;
  /* 115335ac test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 115335b2 je 0x115335c8 */
  if (C.zf) goto L_115335c8;
  /* 115335b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115335b6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115335b7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115335b9 jne 0x115335a4 */
  if (!C.zf) goto L_115335a4;
  /* 115335bb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115335bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115335be je 0x115335a0 */
  if (C.zf) goto L_115335a0;
  /* 115335c0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 115335c6 je 0x11533570 */
  if (C.zf) goto L_11533570;
L_115335c8:;
  /* 115335c8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 115335cb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115335ce cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115335d0 jne 0x115335a4 */
  if (!C.zf) goto L_115335a4;
  /* 115335d2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115335d4 je 0x115335a0 */
  if (C.zf) goto L_115335a0;
  /* 115335d6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115335d9 jne 0x115335a4 */
  if (!C.zf) goto L_115335a4;
  /* 115335db or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 115335dd je 0x115335a0 */
  if (C.zf) goto L_115335a0;
  /* 115335df add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115335e2 jmp 0x11533570 */
  goto L_11533570;
}

/* FUN_100135f0 @ 0x115335f0 (62 bytes, 35 insns) */
void f_115335f0(void) {
  FTRACE(0x115335f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115335f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115335f1 mov ebp, esp */
  EBP = (ESP);
  /* 115335f3 push esi */
  push32((uint32_t)(ESI));
  /* 115335f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115335f6 push eax */
  push32((uint32_t)(EAX));
  /* 115335f7 push eax */
  push32((uint32_t)(EAX));
  /* 115335f8 push eax */
  push32((uint32_t)(EAX));
  /* 115335f9 push eax */
  push32((uint32_t)(EAX));
  /* 115335fa push eax */
  push32((uint32_t)(EAX));
  /* 115335fb push eax */
  push32((uint32_t)(EAX));
  /* 115335fc push eax */
  push32((uint32_t)(EAX));
  /* 115335fd push eax */
  push32((uint32_t)(EAX));
  /* 115335fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11533601 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11533604:;
  /* 11533604 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11533606 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11533608 je 0x11533611 */
  if (C.zf) goto L_11533611;
  /* 1153360a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1153360b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1153360b");
  /* 1153360f jmp 0x11533604 */
  goto L_11533604;
L_11533611:;
  /* 11533611 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11533614 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11533617 nop  */
  /* nop */
L_11533618:;
  /* 11533618 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11533619 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1153361b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1153361d je 0x11533626 */
  if (C.zf) goto L_11533626;
  /* 1153361f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11533620 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11533620");
  /* 11533624 jae 0x11533618 */
  if (!C.cf) goto L_11533618;
L_11533626:;
  /* 11533626 mov eax, ecx */
  EAX = (ECX);
  /* 11533628 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153362b pop esi */
  ESI = (pop32());
  /* 1153362c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1153362d ret  */
  ESPCHK(0x115335f0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11533630 (56 bytes, 31 insns) */
void f_11533630(void) {
  FTRACE(0x11533630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533630 push ebp */
  push32((uint32_t)(EBP));
  /* 11533631 mov ebp, esp */
  EBP = (ESP);
  /* 11533633 push edi */
  push32((uint32_t)(EDI));
  /* 11533634 push esi */
  push32((uint32_t)(ESI));
  /* 11533635 push ebx */
  push32((uint32_t)(EBX));
  /* 11533636 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11533639 jecxz 0x11533661 */
  x86_unimpl("jecxz @ 0x11533639");
  /* 1153363b mov ebx, ecx */
  EBX = (ECX);
  /* 1153363d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11533640 mov esi, edi */
  ESI = (EDI);
  /* 11533642 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11533644 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11533646 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11533648 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153364a mov edi, esi */
  EDI = (ESI);
  /* 1153364c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1153364f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11533651 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11533654 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11533656 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11533659 ja 0x1153365f */
  if ((!C.cf&&!C.zf)) goto L_1153365f;
  /* 1153365b je 0x11533661 */
  if (C.zf) goto L_11533661;
  /* 1153365d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1153365e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1153365f:;
  /* 1153365f not ecx */
  ECX = (~(ECX));
L_11533661:;
  /* 11533661 mov eax, ecx */
  EAX = (ECX);
  /* 11533663 pop ebx */
  EBX = (pop32());
  /* 11533664 pop esi */
  ESI = (pop32());
  /* 11533665 pop edi */
  EDI = (pop32());
  /* 11533666 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11533667 ret  */
  ESPCHK(0x11533630u, _esp0);
  ESP += 4; return;
}

/* FUN_10013670 @ 0x11533670 (58 bytes, 32 insns) */
void f_11533670(void) {
  FTRACE(0x11533670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533670 push ebp */
  push32((uint32_t)(EBP));
  /* 11533671 mov ebp, esp */
  EBP = (ESP);
  /* 11533673 push esi */
  push32((uint32_t)(ESI));
  /* 11533674 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11533676 push eax */
  push32((uint32_t)(EAX));
  /* 11533677 push eax */
  push32((uint32_t)(EAX));
  /* 11533678 push eax */
  push32((uint32_t)(EAX));
  /* 11533679 push eax */
  push32((uint32_t)(EAX));
  /* 1153367a push eax */
  push32((uint32_t)(EAX));
  /* 1153367b push eax */
  push32((uint32_t)(EAX));
  /* 1153367c push eax */
  push32((uint32_t)(EAX));
  /* 1153367d push eax */
  push32((uint32_t)(EAX));
  /* 1153367e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11533681 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11533684:;
  /* 11533684 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11533686 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11533688 je 0x11533691 */
  if (C.zf) goto L_11533691;
  /* 1153368a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1153368b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1153368b");
  /* 1153368f jmp 0x11533684 */
  goto L_11533684;
L_11533691:;
  /* 11533691 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11533694:;
  /* 11533694 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11533696 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11533698 je 0x115336a4 */
  if (C.zf) goto L_115336a4;
  /* 1153369a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1153369b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1153369b");
  /* 1153369f jae 0x11533694 */
  if (!C.cf) goto L_11533694;
  /* 115336a1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_115336a4:;
  /* 115336a4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115336a7 pop esi */
  ESI = (pop32());
  /* 115336a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115336a9 ret  */
  ESPCHK(0x11533670u, _esp0);
  ESP += 4; return;
}

/* FUN_100136b0 @ 0x115336b0 (512 bytes, 147 insns) */
void f_115336b0(void) {
  FTRACE(0x115336b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115336b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115336b1 mov ebp, esp */
  EBP = (ESP);
  /* 115336b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115336b6 cmp dword ptr [0x11553aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115336bd jne 0x115336e2 */
  if (!C.zf) goto L_115336e2;
  /* 115336bf call 0x11534180 */
  push32(0x115336c4u); f_11534180();
  /* 115336c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115336c6 je 0x115336d2 */
  if (C.zf) goto L_115336d2;
  /* 115336c8 mov eax, dword ptr [0x11556310] */
  EAX = (r32((uint32_t)(0x11556310)));
  /* 115336cd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115336d0 jmp 0x115336d9 */
  goto L_115336d9;
L_115336d2:;
  /* 115336d2 mov dword ptr [ebp - 8], 0x115341d0 */
  w32((uint32_t)(EBP + -0x8), (0x115341d0u));
L_115336d9:;
  /* 115336d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115336dc mov dword ptr [0x11553aec], ecx */
  w32((uint32_t)(0x11553aec), (ECX));
L_115336e2:;
  /* 115336e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115336e6 jne 0x115336f2 */
  if (!C.zf) goto L_115336f2;
  /* 115336e8 call 0x11533fd0 */
  push32(0x115336edu); f_11533fd0();
  /* 115336ed jmp 0x115337be */
  goto L_115337be;
L_115336f2:;
  /* 115336f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115336f5 mov dword ptr [0x11553adc], edx */
  w32((uint32_t)(0x11553adc), (EDX));
  /* 115336fb cmp dword ptr [0x11553adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533702 je 0x11533724 */
  if (C.zf) goto L_11533724;
  /* 11533704 mov eax, dword ptr [0x11553adc] */
  EAX = (r32((uint32_t)(0x11553adc)));
  /* 11533709 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1153370c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1153370e je 0x11533724 */
  if (C.zf) goto L_11533724;
  /* 11533710 push 0x11553adc */
  push32((uint32_t)(0x11553adcu));
  /* 11533715 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11533717 push 0x11552a90 */
  push32((uint32_t)(0x11552a90u));
  /* 1153371c call 0x115338b0 */
  push32(0x11533721u); f_115338b0();
  /* 11533721 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11533724:;
  /* 11533724 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533727 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153372a mov dword ptr [0x11553ae0], edx */
  w32((uint32_t)(0x11553ae0), (EDX));
  /* 11533730 cmp dword ptr [0x11553ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533737 je 0x11533759 */
  if (C.zf) goto L_11533759;
  /* 11533739 mov eax, dword ptr [0x11553ae0] */
  EAX = (r32((uint32_t)(0x11553ae0)));
  /* 1153373e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11533741 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11533743 je 0x11533759 */
  if (C.zf) goto L_11533759;
  /* 11533745 push 0x11553ae0 */
  push32((uint32_t)(0x11553ae0u));
  /* 1153374a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1153374c push 0x115529d8 */
  push32((uint32_t)(0x115529d8u));
  /* 11533751 call 0x115338b0 */
  push32(0x11533756u); f_115338b0();
  /* 11533756 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11533759:;
  /* 11533759 mov dword ptr [0x11553ae4], 0 */
  w32((uint32_t)(0x11553ae4), (0x0u));
  /* 11533763 cmp dword ptr [0x11553adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153376a je 0x1153379d */
  if (C.zf) goto L_1153379d;
  /* 1153376c mov edx, dword ptr [0x11553adc] */
  EDX = (r32((uint32_t)(0x11553adc)));
  /* 11533772 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11533775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533777 je 0x1153379d */
  if (C.zf) goto L_1153379d;
  /* 11533779 cmp dword ptr [0x11553ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533780 je 0x11533796 */
  if (C.zf) goto L_11533796;
  /* 11533782 mov ecx, dword ptr [0x11553ae0] */
  ECX = (r32((uint32_t)(0x11553ae0)));
  /* 11533788 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1153378b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1153378d je 0x11533796 */
  if (C.zf) goto L_11533796;
  /* 1153378f call 0x11533940 */
  push32(0x11533794u); f_11533940();
  /* 11533794 jmp 0x1153379b */
  goto L_1153379b;
L_11533796:;
  /* 11533796 call 0x11533d30 */
  push32(0x1153379bu); f_11533d30();
L_1153379b:;
  /* 1153379b jmp 0x115337be */
  goto L_115337be;
L_1153379d:;
  /* 1153379d cmp dword ptr [0x11553ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115337a4 je 0x115337b9 */
  if (C.zf) goto L_115337b9;
  /* 115337a6 mov eax, dword ptr [0x11553ae0] */
  EAX = (r32((uint32_t)(0x11553ae0)));
  /* 115337ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115337ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115337b0 je 0x115337b9 */
  if (C.zf) goto L_115337b9;
  /* 115337b2 call 0x11533ed0 */
  push32(0x115337b7u); f_11533ed0();
  /* 115337b7 jmp 0x115337be */
  goto L_115337be;
L_115337b9:;
  /* 115337b9 call 0x11533fd0 */
  push32(0x115337beu); f_11533fd0();
L_115337be:;
  /* 115337be cmp dword ptr [0x11553ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115337c5 jne 0x115337ce */
  if (!C.zf) goto L_115337ce;
  /* 115337c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115337c9 jmp 0x115338ac */
  goto L_115338ac;
L_115337ce:;
  /* 115337ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115337d1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115337d7 push edx */
  push32((uint32_t)(EDX));
  /* 115337d8 call 0x11534000 */
  push32(0x115337ddu); f_11534000();
  /* 115337dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115337e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115337e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115337e7 je 0x115337fc */
  if (C.zf) goto L_115337fc;
  /* 115337e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115337ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115337f1 push eax */
  push32((uint32_t)(EAX));
  /* 115337f2 call dword ptr [0x11556314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556314))), 0x115337f8u);
  /* 115337f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115337fa jne 0x11533803 */
  if (!C.zf) goto L_11533803;
L_115337fc:;
  /* 115337fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115337fe jmp 0x115338ac */
  goto L_115338ac;
L_11533803:;
  /* 11533803 push 1 */
  push32((uint32_t)(0x1u));
  /* 11533805 mov ecx, dword ptr [0x11553acc] */
  ECX = (r32((uint32_t)(0x11553acc)));
  /* 1153380b push ecx */
  push32((uint32_t)(ECX));
  /* 1153380c call dword ptr [0x11556318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556318))), 0x11533812u);
  /* 11533812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533814 jne 0x1153381d */
  if (!C.zf) goto L_1153381d;
  /* 11533816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11533818 jmp 0x115338ac */
  goto L_115338ac;
L_1153381d:;
  /* 1153381d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533821 je 0x11533848 */
  if (C.zf) goto L_11533848;
  /* 11533823 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11533826 mov ax, word ptr [0x11553acc] */
  AX = (r16((uint32_t)(0x11553acc)));
  /* 1153382c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1153382f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11533832 mov dx, word ptr [0x11553ae8] */
  DX = (r16((uint32_t)(0x11553ae8)));
  /* 11533839 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1153383d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11533840 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11533844 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11533848:;
  /* 11533848 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153384c je 0x115338a7 */
  if (C.zf) goto L_115338a7;
  /* 1153384e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11533850 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11533853 push edx */
  push32((uint32_t)(EDX));
  /* 11533854 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11533859 mov eax, dword ptr [0x11553acc] */
  EAX = (r32((uint32_t)(0x11553acc)));
  /* 1153385e push eax */
  push32((uint32_t)(EAX));
  /* 1153385f call dword ptr [0x11553aec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11553aec))), 0x11533865u);
  /* 11533865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533867 jne 0x1153386d */
  if (!C.zf) goto L_1153386d;
  /* 11533869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153386b jmp 0x115338ac */
  goto L_115338ac;
L_1153386d:;
  /* 1153386d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1153386f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11533872 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533875 push ecx */
  push32((uint32_t)(ECX));
  /* 11533876 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1153387b mov edx, dword ptr [0x11553ae8] */
  EDX = (r32((uint32_t)(0x11553ae8)));
  /* 11533881 push edx */
  push32((uint32_t)(EDX));
  /* 11533882 call dword ptr [0x11553aec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11553aec))), 0x11533888u);
  /* 11533888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153388a jne 0x11533890 */
  if (!C.zf) goto L_11533890;
  /* 1153388c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153388e jmp 0x115338ac */
  goto L_115338ac;
L_11533890:;
  /* 11533890 push 0xa */
  push32((uint32_t)(0xau));
  /* 11533892 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11533895 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153389a push eax */
  push32((uint32_t)(EAX));
  /* 1153389b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153389e push ecx */
  push32((uint32_t)(ECX));
  /* 1153389f call 0x1152a410 */
  push32(0x115338a4u); f_1152a410();
  /* 115338a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115338a7:;
  /* 115338a7 mov eax, 1 */
  EAX = (0x1u);
L_115338ac:;
  /* 115338ac mov esp, ebp */
  ESP = (EBP);
  /* 115338ae pop ebp */
  EBP = (pop32());
  /* 115338af ret  */
  ESPCHK(0x115336b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138b0 @ 0x115338b0 (130 bytes, 47 insns) */
void f_115338b0(void) {
  FTRACE(0x115338b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115338b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115338b1 mov ebp, esp */
  EBP = (ESP);
  /* 115338b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115338b6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 115338bd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_115338c4:;
  /* 115338c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115338c7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115338ca jg 0x1153392e */
  if ((!C.zf&&C.sf==C.of)) goto L_1153392e;
  /* 115338cc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115338d0 je 0x1153392e */
  if (C.zf) goto L_1153392e;
  /* 115338d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115338d5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115338d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115338d9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115338db sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115338dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115338e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115338e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115338e6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 115338e9 push eax */
  push32((uint32_t)(EAX));
  /* 115338ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115338ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115338ef push edx */
  push32((uint32_t)(EDX));
  /* 115338f0 call 0x11535fa0 */
  push32(0x115338f5u); f_11535fa0();
  /* 115338f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115338f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115338fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115338ff jne 0x11533912 */
  if (!C.zf) goto L_11533912;
  /* 11533901 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11533904 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533907 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1153390b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153390e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11533910 jmp 0x1153392c */
  goto L_1153392c;
L_11533912:;
  /* 11533912 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533916 jge 0x11533923 */
  if ((C.sf==C.of)) goto L_11533923;
  /* 11533918 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153391b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1153391e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11533921 jmp 0x1153392c */
  goto L_1153392c;
L_11533923:;
  /* 11533923 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11533926 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533929 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1153392c:;
  /* 1153392c jmp 0x115338c4 */
  goto L_115338c4;
L_1153392e:;
  /* 1153392e mov esp, ebp */
  ESP = (EBP);
  /* 11533930 pop ebp */
  EBP = (pop32());
  /* 11533931 ret  */
  ESPCHK(0x115338b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013940 @ 0x11533940 (186 bytes, 50 insns) */
void f_11533940(void) {
  FTRACE(0x11533940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533940 push ebp */
  push32((uint32_t)(EBP));
  /* 11533941 mov ebp, esp */
  EBP = (ESP);
  /* 11533943 push ecx */
  push32((uint32_t)(ECX));
  /* 11533944 mov eax, dword ptr [0x11553adc] */
  EAX = (r32((uint32_t)(0x11553adc)));
  /* 11533949 push eax */
  push32((uint32_t)(EAX));
  /* 1153394a call 0x1152a700 */
  push32(0x1153394fu); f_1152a700();
  /* 1153394f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533952 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11533954 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533957 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1153395a mov dword ptr [0x11553ad8], ecx */
  w32((uint32_t)(0x11553ad8), (ECX));
  /* 11533960 mov edx, dword ptr [0x11553ae0] */
  EDX = (r32((uint32_t)(0x11553ae0)));
  /* 11533966 push edx */
  push32((uint32_t)(EDX));
  /* 11533967 call 0x1152a700 */
  push32(0x1153396cu); f_1152a700();
  /* 1153396c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153396f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11533971 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533974 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11533977 mov dword ptr [0x11553ad0], ecx */
  w32((uint32_t)(0x11553ad0), (ECX));
  /* 1153397d mov dword ptr [0x11553acc], 0 */
  w32((uint32_t)(0x11553acc), (0x0u));
  /* 11533987 cmp dword ptr [0x11553ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153398e je 0x11533999 */
  if (C.zf) goto L_11533999;
  /* 11533990 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11533997 jmp 0x115339ab */
  goto L_115339ab;
L_11533999:;
  /* 11533999 mov edx, dword ptr [0x11553adc] */
  EDX = (r32((uint32_t)(0x11553adc)));
  /* 1153399f push edx */
  push32((uint32_t)(EDX));
  /* 115339a0 call 0x115343e0 */
  push32(0x115339a5u); f_115343e0();
  /* 115339a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115339a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115339ab:;
  /* 115339ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115339ae mov dword ptr [0x11553ad4], eax */
  w32((uint32_t)(0x11553ad4), (EAX));
  /* 115339b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115339b5 push 0x11533a00 */
  push32((uint32_t)(0x11533a00u));
  /* 115339ba call dword ptr [0x1155630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155630c))), 0x115339c0u);
  /* 115339c0 mov ecx, dword ptr [0x11553ae4] */
  ECX = (r32((uint32_t)(0x11553ae4)));
  /* 115339c6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 115339cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115339ce je 0x115339ec */
  if (C.zf) goto L_115339ec;
  /* 115339d0 mov edx, dword ptr [0x11553ae4] */
  EDX = (r32((uint32_t)(0x11553ae4)));
  /* 115339d6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 115339dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115339de je 0x115339ec */
  if (C.zf) goto L_115339ec;
  /* 115339e0 mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 115339e5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 115339e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115339ea jne 0x115339f6 */
  if (!C.zf) goto L_115339f6;
L_115339ec:;
  /* 115339ec mov dword ptr [0x11553ae4], 0 */
  w32((uint32_t)(0x11553ae4), (0x0u));
L_115339f6:;
  /* 115339f6 mov esp, ebp */
  ESP = (EBP);
  /* 115339f8 pop ebp */
  EBP = (pop32());
  /* 115339f9 ret  */
  ESPCHK(0x11533940u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a00 @ 0x11533a00 (804 bytes, 220 insns) */
void f_11533a00(void) {
  FTRACE(0x11533a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11533a01 mov ebp, esp */
  EBP = (ESP);
  /* 11533a03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533a09 push eax */
  push32((uint32_t)(EAX));
  /* 11533a0a call 0x11534360 */
  push32(0x11533a0fu); f_11534360();
  /* 11533a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533a12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11533a15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11533a17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11533a1a push ecx */
  push32((uint32_t)(ECX));
  /* 11533a1b mov edx, dword ptr [0x11553ad0] */
  EDX = (r32((uint32_t)(0x11553ad0)));
  /* 11533a21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11533a23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533a25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11533a2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533a31 push edx */
  push32((uint32_t)(EDX));
  /* 11533a32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533a35 push eax */
  push32((uint32_t)(EAX));
  /* 11533a36 call dword ptr [0x11553aec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11553aec))), 0x11533a3cu);
  /* 11533a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533a3e jne 0x11533a54 */
  if (!C.zf) goto L_11533a54;
  /* 11533a40 mov dword ptr [0x11553ae4], 0 */
  w32((uint32_t)(0x11553ae4), (0x0u));
  /* 11533a4a mov eax, 1 */
  EAX = (0x1u);
  /* 11533a4f jmp 0x11533d1e */
  goto L_11533d1e;
L_11533a54:;
  /* 11533a54 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11533a57 push ecx */
  push32((uint32_t)(ECX));
  /* 11533a58 mov edx, dword ptr [0x11553ae0] */
  EDX = (r32((uint32_t)(0x11553ae0)));
  /* 11533a5e push edx */
  push32((uint32_t)(EDX));
  /* 11533a5f call 0x11535fa0 */
  push32(0x11533a64u); f_11535fa0();
  /* 11533a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533a67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533a69 jne 0x11533b8f */
  if (!C.zf) goto L_11533b8f;
  /* 11533a6f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11533a71 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11533a74 push eax */
  push32((uint32_t)(EAX));
  /* 11533a75 mov ecx, dword ptr [0x11553ad8] */
  ECX = (r32((uint32_t)(0x11553ad8)));
  /* 11533a7b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11533a7d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533a7f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11533a85 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533a8b push ecx */
  push32((uint32_t)(ECX));
  /* 11533a8c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533a8f push edx */
  push32((uint32_t)(EDX));
  /* 11533a90 call dword ptr [0x11553aec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11553aec))), 0x11533a96u);
  /* 11533a96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533a98 jne 0x11533aae */
  if (!C.zf) goto L_11533aae;
  /* 11533a9a mov dword ptr [0x11553ae4], 0 */
  w32((uint32_t)(0x11553ae4), (0x0u));
  /* 11533aa4 mov eax, 1 */
  EAX = (0x1u);
  /* 11533aa9 jmp 0x11533d1e */
  goto L_11533d1e;
L_11533aae:;
  /* 11533aae lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11533ab1 push eax */
  push32((uint32_t)(EAX));
  /* 11533ab2 mov ecx, dword ptr [0x11553adc] */
  ECX = (r32((uint32_t)(0x11553adc)));
  /* 11533ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 11533ab9 call 0x11535fa0 */
  push32(0x11533abeu); f_11535fa0();
  /* 11533abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533ac3 jne 0x11533af0 */
  if (!C.zf) goto L_11533af0;
  /* 11533ac5 mov edx, dword ptr [0x11553ae4] */
  EDX = (r32((uint32_t)(0x11553ae4)));
  /* 11533acb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11533ad1 mov dword ptr [0x11553ae4], edx */
  w32((uint32_t)(0x11553ae4), (EDX));
  /* 11533ad7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533ada mov dword ptr [0x11553ae8], eax */
  w32((uint32_t)(0x11553ae8), (EAX));
  /* 11533adf mov ecx, dword ptr [0x11553ae8] */
  ECX = (r32((uint32_t)(0x11553ae8)));
  /* 11533ae5 mov dword ptr [0x11553acc], ecx */
  w32((uint32_t)(0x11553acc), (ECX));
  /* 11533aeb jmp 0x11533b8f */
  goto L_11533b8f;
L_11533af0:;
  /* 11533af0 mov edx, dword ptr [0x11553ae4] */
  EDX = (r32((uint32_t)(0x11553ae4)));
  /* 11533af6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11533af9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11533afb jne 0x11533b8f */
  if (!C.zf) goto L_11533b8f;
  /* 11533b01 cmp dword ptr [0x11553ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533b08 je 0x11533b5d */
  if (C.zf) goto L_11533b5d;
  /* 11533b0a mov eax, dword ptr [0x11553ad4] */
  EAX = (r32((uint32_t)(0x11553ad4)));
  /* 11533b0f push eax */
  push32((uint32_t)(EAX));
  /* 11533b10 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11533b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11533b14 mov edx, dword ptr [0x11553adc] */
  EDX = (r32((uint32_t)(0x11553adc)));
  /* 11533b1a push edx */
  push32((uint32_t)(EDX));
  /* 11533b1b call 0x11536070 */
  push32(0x11533b20u); f_11536070();
  /* 11533b20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533b25 jne 0x11533b5d */
  if (!C.zf) goto L_11533b5d;
  /* 11533b27 mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533b2c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11533b2e mov dword ptr [0x11553ae4], eax */
  w32((uint32_t)(0x11553ae4), (EAX));
  /* 11533b33 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533b36 mov dword ptr [0x11553ae8], ecx */
  w32((uint32_t)(0x11553ae8), (ECX));
  /* 11533b3c mov edx, dword ptr [0x11553adc] */
  EDX = (r32((uint32_t)(0x11553adc)));
  /* 11533b42 push edx */
  push32((uint32_t)(EDX));
  /* 11533b43 call 0x1152a700 */
  push32(0x11533b48u); f_1152a700();
  /* 11533b48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533b4b cmp eax, dword ptr [0x11553ad4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11553ad4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533b51 jne 0x11533b5b */
  if (!C.zf) goto L_11533b5b;
  /* 11533b53 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533b56 mov dword ptr [0x11553acc], eax */
  w32((uint32_t)(0x11553acc), (EAX));
L_11533b5b:;
  /* 11533b5b jmp 0x11533b8f */
  goto L_11533b8f;
L_11533b5d:;
  /* 11533b5d mov ecx, dword ptr [0x11553ae4] */
  ECX = (r32((uint32_t)(0x11553ae4)));
  /* 11533b63 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11533b66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11533b68 jne 0x11533b8f */
  if (!C.zf) goto L_11533b8f;
  /* 11533b6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533b6d push edx */
  push32((uint32_t)(EDX));
  /* 11533b6e call 0x115340a0 */
  push32(0x11533b73u); f_115340a0();
  /* 11533b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533b78 je 0x11533b8f */
  if (C.zf) goto L_11533b8f;
  /* 11533b7a mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533b7f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11533b81 mov dword ptr [0x11553ae4], eax */
  w32((uint32_t)(0x11553ae4), (EAX));
  /* 11533b86 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533b89 mov dword ptr [0x11553ae8], ecx */
  w32((uint32_t)(0x11553ae8), (ECX));
L_11533b8f:;
  /* 11533b8f mov edx, dword ptr [0x11553ae4] */
  EDX = (r32((uint32_t)(0x11553ae4)));
  /* 11533b95 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11533b9b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533ba1 je 0x11533d11 */
  if (C.zf) goto L_11533d11;
  /* 11533ba7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11533ba9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11533bac push eax */
  push32((uint32_t)(EAX));
  /* 11533bad mov ecx, dword ptr [0x11553ad8] */
  ECX = (r32((uint32_t)(0x11553ad8)));
  /* 11533bb3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11533bb5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533bb7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11533bbd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11533bc4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533bc7 push edx */
  push32((uint32_t)(EDX));
  /* 11533bc8 call dword ptr [0x11553aec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11553aec))), 0x11533bceu);
  /* 11533bce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533bd0 jne 0x11533be6 */
  if (!C.zf) goto L_11533be6;
  /* 11533bd2 mov dword ptr [0x11553ae4], 0 */
  w32((uint32_t)(0x11553ae4), (0x0u));
  /* 11533bdc mov eax, 1 */
  EAX = (0x1u);
  /* 11533be1 jmp 0x11533d1e */
  goto L_11533d1e;
L_11533be6:;
  /* 11533be6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11533be9 push eax */
  push32((uint32_t)(EAX));
  /* 11533bea mov ecx, dword ptr [0x11553adc] */
  ECX = (r32((uint32_t)(0x11553adc)));
  /* 11533bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11533bf1 call 0x11535fa0 */
  push32(0x11533bf6u); f_11535fa0();
  /* 11533bf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533bfb jne 0x11533cb0 */
  if (!C.zf) goto L_11533cb0;
  /* 11533c01 mov edx, dword ptr [0x11553ae4] */
  EDX = (r32((uint32_t)(0x11553ae4)));
  /* 11533c07 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11533c0a mov dword ptr [0x11553ae4], edx */
  w32((uint32_t)(0x11553ae4), (EDX));
  /* 11533c10 cmp dword ptr [0x11553ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533c17 je 0x11533c3a */
  if (C.zf) goto L_11533c3a;
  /* 11533c19 mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533c1e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11533c21 mov dword ptr [0x11553ae4], eax */
  w32((uint32_t)(0x11553ae4), (EAX));
  /* 11533c26 cmp dword ptr [0x11553acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533c2d jne 0x11533c38 */
  if (!C.zf) goto L_11533c38;
  /* 11533c2f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533c32 mov dword ptr [0x11553acc], ecx */
  w32((uint32_t)(0x11553acc), (ECX));
L_11533c38:;
  /* 11533c38 jmp 0x11533cae */
  goto L_11533cae;
L_11533c3a:;
  /* 11533c3a cmp dword ptr [0x11553ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533c41 je 0x11533c8f */
  if (C.zf) goto L_11533c8f;
  /* 11533c43 mov edx, dword ptr [0x11553adc] */
  EDX = (r32((uint32_t)(0x11553adc)));
  /* 11533c49 push edx */
  push32((uint32_t)(EDX));
  /* 11533c4a call 0x1152a700 */
  push32(0x11533c4fu); f_1152a700();
  /* 11533c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533c52 cmp eax, dword ptr [0x11553ad4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11553ad4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533c58 jne 0x11533c8f */
  if (!C.zf) goto L_11533c8f;
  /* 11533c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11533c5c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533c5f push eax */
  push32((uint32_t)(EAX));
  /* 11533c60 call 0x115340f0 */
  push32(0x11533c65u); f_115340f0();
  /* 11533c65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533c68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533c6a je 0x11533c8d */
  if (C.zf) goto L_11533c8d;
  /* 11533c6c mov ecx, dword ptr [0x11553ae4] */
  ECX = (r32((uint32_t)(0x11553ae4)));
  /* 11533c72 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11533c75 mov dword ptr [0x11553ae4], ecx */
  w32((uint32_t)(0x11553ae4), (ECX));
  /* 11533c7b cmp dword ptr [0x11553acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533c82 jne 0x11533c8d */
  if (!C.zf) goto L_11533c8d;
  /* 11533c84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533c87 mov dword ptr [0x11553acc], edx */
  w32((uint32_t)(0x11553acc), (EDX));
L_11533c8d:;
  /* 11533c8d jmp 0x11533cae */
  goto L_11533cae;
L_11533c8f:;
  /* 11533c8f mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533c94 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11533c97 mov dword ptr [0x11553ae4], eax */
  w32((uint32_t)(0x11553ae4), (EAX));
  /* 11533c9c cmp dword ptr [0x11553acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533ca3 jne 0x11533cae */
  if (!C.zf) goto L_11533cae;
  /* 11533ca5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533ca8 mov dword ptr [0x11553acc], ecx */
  w32((uint32_t)(0x11553acc), (ECX));
L_11533cae:;
  /* 11533cae jmp 0x11533d11 */
  goto L_11533d11;
L_11533cb0:;
  /* 11533cb0 cmp dword ptr [0x11553ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533cb7 jne 0x11533d11 */
  if (!C.zf) goto L_11533d11;
  /* 11533cb9 cmp dword ptr [0x11553ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533cc0 je 0x11533d11 */
  if (C.zf) goto L_11533d11;
  /* 11533cc2 mov edx, dword ptr [0x11553ad4] */
  EDX = (r32((uint32_t)(0x11553ad4)));
  /* 11533cc8 push edx */
  push32((uint32_t)(EDX));
  /* 11533cc9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11533ccc push eax */
  push32((uint32_t)(EAX));
  /* 11533ccd mov ecx, dword ptr [0x11553adc] */
  ECX = (r32((uint32_t)(0x11553adc)));
  /* 11533cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11533cd4 call 0x11536070 */
  push32(0x11533cd9u); f_11536070();
  /* 11533cd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533cdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533cde jne 0x11533d11 */
  if (!C.zf) goto L_11533d11;
  /* 11533ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11533ce2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533ce5 push edx */
  push32((uint32_t)(EDX));
  /* 11533ce6 call 0x115340f0 */
  push32(0x11533cebu); f_115340f0();
  /* 11533ceb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533cee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533cf0 je 0x11533d11 */
  if (C.zf) goto L_11533d11;
  /* 11533cf2 mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533cf7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11533cfa mov dword ptr [0x11553ae4], eax */
  w32((uint32_t)(0x11553ae4), (EAX));
  /* 11533cff cmp dword ptr [0x11553acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533d06 jne 0x11533d11 */
  if (!C.zf) goto L_11533d11;
  /* 11533d08 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533d0b mov dword ptr [0x11553acc], ecx */
  w32((uint32_t)(0x11553acc), (ECX));
L_11533d11:;
  /* 11533d11 mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533d16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11533d19 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11533d1b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533d1d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11533d1e:;
  /* 11533d1e mov esp, ebp */
  ESP = (EBP);
  /* 11533d20 pop ebp */
  EBP = (pop32());
  /* 11533d21 ret 4 */
  ESPCHK(0x11533a00u, _esp0);
  ESP += 8; return;
}

/* FUN_10013d30 @ 0x11533d30 (116 bytes, 33 insns) */
void f_11533d30(void) {
  FTRACE(0x11533d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11533d31 mov ebp, esp */
  EBP = (ESP);
  /* 11533d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11533d34 mov eax, dword ptr [0x11553adc] */
  EAX = (r32((uint32_t)(0x11553adc)));
  /* 11533d39 push eax */
  push32((uint32_t)(EAX));
  /* 11533d3a call 0x1152a700 */
  push32(0x11533d3fu); f_1152a700();
  /* 11533d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533d42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11533d44 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533d47 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11533d4a mov dword ptr [0x11553ad8], ecx */
  w32((uint32_t)(0x11553ad8), (ECX));
  /* 11533d50 cmp dword ptr [0x11553ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533d57 je 0x11533d62 */
  if (C.zf) goto L_11533d62;
  /* 11533d59 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11533d60 jmp 0x11533d74 */
  goto L_11533d74;
L_11533d62:;
  /* 11533d62 mov edx, dword ptr [0x11553adc] */
  EDX = (r32((uint32_t)(0x11553adc)));
  /* 11533d68 push edx */
  push32((uint32_t)(EDX));
  /* 11533d69 call 0x115343e0 */
  push32(0x11533d6eu); f_115343e0();
  /* 11533d6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533d71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11533d74:;
  /* 11533d74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11533d77 mov dword ptr [0x11553ad4], eax */
  w32((uint32_t)(0x11553ad4), (EAX));
  /* 11533d7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11533d7e push 0x11533db0 */
  push32((uint32_t)(0x11533db0u));
  /* 11533d83 call dword ptr [0x1155630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155630c))), 0x11533d89u);
  /* 11533d89 mov ecx, dword ptr [0x11553ae4] */
  ECX = (r32((uint32_t)(0x11553ae4)));
  /* 11533d8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11533d92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11533d94 jne 0x11533da0 */
  if (!C.zf) goto L_11533da0;
  /* 11533d96 mov dword ptr [0x11553ae4], 0 */
  w32((uint32_t)(0x11553ae4), (0x0u));
L_11533da0:;
  /* 11533da0 mov esp, ebp */
  ESP = (EBP);
  /* 11533da2 pop ebp */
  EBP = (pop32());
  /* 11533da3 ret  */
  ESPCHK(0x11533d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013db0 @ 0x11533db0 (287 bytes, 86 insns) */
void f_11533db0(void) {
  FTRACE(0x11533db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11533db1 mov ebp, esp */
  EBP = (ESP);
  /* 11533db3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533db9 push eax */
  push32((uint32_t)(EAX));
  /* 11533dba call 0x11534360 */
  push32(0x11533dbfu); f_11534360();
  /* 11533dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533dc2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11533dc5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11533dc7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11533dca push ecx */
  push32((uint32_t)(ECX));
  /* 11533dcb mov edx, dword ptr [0x11553ad8] */
  EDX = (r32((uint32_t)(0x11553ad8)));
  /* 11533dd1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11533dd3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533dd5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11533ddb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533de1 push edx */
  push32((uint32_t)(EDX));
  /* 11533de2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533de5 push eax */
  push32((uint32_t)(EAX));
  /* 11533de6 call dword ptr [0x11553aec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11553aec))), 0x11533decu);
  /* 11533dec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533dee jne 0x11533e04 */
  if (!C.zf) goto L_11533e04;
  /* 11533df0 mov dword ptr [0x11553ae4], 0 */
  w32((uint32_t)(0x11553ae4), (0x0u));
  /* 11533dfa mov eax, 1 */
  EAX = (0x1u);
  /* 11533dff jmp 0x11533ec9 */
  goto L_11533ec9;
L_11533e04:;
  /* 11533e04 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11533e07 push ecx */
  push32((uint32_t)(ECX));
  /* 11533e08 mov edx, dword ptr [0x11553adc] */
  EDX = (r32((uint32_t)(0x11553adc)));
  /* 11533e0e push edx */
  push32((uint32_t)(EDX));
  /* 11533e0f call 0x11535fa0 */
  push32(0x11533e14u); f_11535fa0();
  /* 11533e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533e19 jne 0x11533e59 */
  if (!C.zf) goto L_11533e59;
  /* 11533e1b cmp dword ptr [0x11553ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533e22 jne 0x11533e36 */
  if (!C.zf) goto L_11533e36;
  /* 11533e24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11533e26 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533e29 push eax */
  push32((uint32_t)(EAX));
  /* 11533e2a call 0x115340f0 */
  push32(0x11533e2fu); f_115340f0();
  /* 11533e2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533e32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533e34 je 0x11533e57 */
  if (C.zf) goto L_11533e57;
L_11533e36:;
  /* 11533e36 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533e39 mov dword ptr [0x11553ae8], ecx */
  w32((uint32_t)(0x11553ae8), (ECX));
  /* 11533e3f mov edx, dword ptr [0x11553ae8] */
  EDX = (r32((uint32_t)(0x11553ae8)));
  /* 11533e45 mov dword ptr [0x11553acc], edx */
  w32((uint32_t)(0x11553acc), (EDX));
  /* 11533e4b mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533e50 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11533e52 mov dword ptr [0x11553ae4], eax */
  w32((uint32_t)(0x11553ae4), (EAX));
L_11533e57:;
  /* 11533e57 jmp 0x11533ebc */
  goto L_11533ebc;
L_11533e59:;
  /* 11533e59 cmp dword ptr [0x11553ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533e60 jne 0x11533ebc */
  if (!C.zf) goto L_11533ebc;
  /* 11533e62 cmp dword ptr [0x11553ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533e69 je 0x11533ebc */
  if (C.zf) goto L_11533ebc;
  /* 11533e6b mov ecx, dword ptr [0x11553ad4] */
  ECX = (r32((uint32_t)(0x11553ad4)));
  /* 11533e71 push ecx */
  push32((uint32_t)(ECX));
  /* 11533e72 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11533e75 push edx */
  push32((uint32_t)(EDX));
  /* 11533e76 mov eax, dword ptr [0x11553adc] */
  EAX = (r32((uint32_t)(0x11553adc)));
  /* 11533e7b push eax */
  push32((uint32_t)(EAX));
  /* 11533e7c call 0x11536070 */
  push32(0x11533e81u); f_11536070();
  /* 11533e81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533e84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533e86 jne 0x11533ebc */
  if (!C.zf) goto L_11533ebc;
  /* 11533e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11533e8a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533e8d push ecx */
  push32((uint32_t)(ECX));
  /* 11533e8e call 0x115340f0 */
  push32(0x11533e93u); f_115340f0();
  /* 11533e93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533e98 je 0x11533ebc */
  if (C.zf) goto L_11533ebc;
  /* 11533e9a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533e9d mov dword ptr [0x11553ae8], edx */
  w32((uint32_t)(0x11553ae8), (EDX));
  /* 11533ea3 mov eax, dword ptr [0x11553ae8] */
  EAX = (r32((uint32_t)(0x11553ae8)));
  /* 11533ea8 mov dword ptr [0x11553acc], eax */
  w32((uint32_t)(0x11553acc), (EAX));
  /* 11533ead mov ecx, dword ptr [0x11553ae4] */
  ECX = (r32((uint32_t)(0x11553ae4)));
  /* 11533eb3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11533eb6 mov dword ptr [0x11553ae4], ecx */
  w32((uint32_t)(0x11553ae4), (ECX));
L_11533ebc:;
  /* 11533ebc mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533ec1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11533ec4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11533ec6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533ec8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11533ec9:;
  /* 11533ec9 mov esp, ebp */
  ESP = (EBP);
  /* 11533ecb pop ebp */
  EBP = (pop32());
  /* 11533ecc ret 4 */
  ESPCHK(0x11533db0u, _esp0);
  ESP += 8; return;
}

/* FUN_10013ed0 @ 0x11533ed0 (69 bytes, 20 insns) */
void f_11533ed0(void) {
  FTRACE(0x11533ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11533ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11533ed3 mov eax, dword ptr [0x11553ae0] */
  EAX = (r32((uint32_t)(0x11553ae0)));
  /* 11533ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11533ed9 call 0x1152a700 */
  push32(0x11533edeu); f_1152a700();
  /* 11533ede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533ee1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11533ee3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11533ee6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11533ee9 mov dword ptr [0x11553ad0], ecx */
  w32((uint32_t)(0x11553ad0), (ECX));
  /* 11533eef push 1 */
  push32((uint32_t)(0x1u));
  /* 11533ef1 push 0x11533f20 */
  push32((uint32_t)(0x11533f20u));
  /* 11533ef6 call dword ptr [0x1155630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155630c))), 0x11533efcu);
  /* 11533efc mov edx, dword ptr [0x11553ae4] */
  EDX = (r32((uint32_t)(0x11553ae4)));
  /* 11533f02 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11533f05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11533f07 jne 0x11533f13 */
  if (!C.zf) goto L_11533f13;
  /* 11533f09 mov dword ptr [0x11553ae4], 0 */
  w32((uint32_t)(0x11553ae4), (0x0u));
L_11533f13:;
  /* 11533f13 pop ebp */
  EBP = (pop32());
  /* 11533f14 ret  */
  ESPCHK(0x11533ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f20 @ 0x11533f20 (172 bytes, 54 insns) */
void f_11533f20(void) {
  FTRACE(0x11533f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11533f21 mov ebp, esp */
  EBP = (ESP);
  /* 11533f23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11533f29 push eax */
  push32((uint32_t)(EAX));
  /* 11533f2a call 0x11534360 */
  push32(0x11533f2fu); f_11534360();
  /* 11533f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533f32 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11533f35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11533f37 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11533f3a push ecx */
  push32((uint32_t)(ECX));
  /* 11533f3b mov edx, dword ptr [0x11553ad0] */
  EDX = (r32((uint32_t)(0x11553ad0)));
  /* 11533f41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11533f43 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533f45 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11533f4b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11533f51 push edx */
  push32((uint32_t)(EDX));
  /* 11533f52 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533f55 push eax */
  push32((uint32_t)(EAX));
  /* 11533f56 call dword ptr [0x11553aec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11553aec))), 0x11533f5cu);
  /* 11533f5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533f5e jne 0x11533f71 */
  if (!C.zf) goto L_11533f71;
  /* 11533f60 mov dword ptr [0x11553ae4], 0 */
  w32((uint32_t)(0x11553ae4), (0x0u));
  /* 11533f6a mov eax, 1 */
  EAX = (0x1u);
  /* 11533f6f jmp 0x11533fc6 */
  goto L_11533fc6;
L_11533f71:;
  /* 11533f71 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11533f74 push ecx */
  push32((uint32_t)(ECX));
  /* 11533f75 mov edx, dword ptr [0x11553ae0] */
  EDX = (r32((uint32_t)(0x11553ae0)));
  /* 11533f7b push edx */
  push32((uint32_t)(EDX));
  /* 11533f7c call 0x11535fa0 */
  push32(0x11533f81u); f_11535fa0();
  /* 11533f81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533f84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533f86 jne 0x11533fb9 */
  if (!C.zf) goto L_11533fb9;
  /* 11533f88 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533f8b push eax */
  push32((uint32_t)(EAX));
  /* 11533f8c call 0x115340a0 */
  push32(0x11533f91u); f_115340a0();
  /* 11533f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11533f94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11533f96 je 0x11533fb9 */
  if (C.zf) goto L_11533fb9;
  /* 11533f98 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11533f9b mov dword ptr [0x11553ae8], ecx */
  w32((uint32_t)(0x11553ae8), (ECX));
  /* 11533fa1 mov edx, dword ptr [0x11553ae8] */
  EDX = (r32((uint32_t)(0x11553ae8)));
  /* 11533fa7 mov dword ptr [0x11553acc], edx */
  w32((uint32_t)(0x11553acc), (EDX));
  /* 11533fad mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533fb2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11533fb4 mov dword ptr [0x11553ae4], eax */
  w32((uint32_t)(0x11553ae4), (EAX));
L_11533fb9:;
  /* 11533fb9 mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533fbe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11533fc1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11533fc3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11533fc5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11533fc6:;
  /* 11533fc6 mov esp, ebp */
  ESP = (EBP);
  /* 11533fc8 pop ebp */
  EBP = (pop32());
  /* 11533fc9 ret 4 */
  ESPCHK(0x11533f20u, _esp0);
  ESP += 8; return;
}

/* FUN_10013fd0 @ 0x11533fd0 (43 bytes, 11 insns) */
void f_11533fd0(void) {
  FTRACE(0x11533fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11533fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11533fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11533fd3 mov eax, dword ptr [0x11553ae4] */
  EAX = (r32((uint32_t)(0x11553ae4)));
  /* 11533fd8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11533fdd mov dword ptr [0x11553ae4], eax */
  w32((uint32_t)(0x11553ae4), (EAX));
  /* 11533fe2 call dword ptr [0x11556308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556308))), 0x11533fe8u);
  /* 11533fe8 mov dword ptr [0x11553ae8], eax */
  w32((uint32_t)(0x11553ae8), (EAX));
  /* 11533fed mov ecx, dword ptr [0x11553ae8] */
  ECX = (r32((uint32_t)(0x11553ae8)));
  /* 11533ff3 mov dword ptr [0x11553acc], ecx */
  w32((uint32_t)(0x11553acc), (ECX));
  /* 11533ff9 pop ebp */
  EBP = (pop32());
  /* 11533ffa ret  */
  ESPCHK(0x11533fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014000 @ 0x11534000 (155 bytes, 57 insns) */
void f_11534000(void) {
  FTRACE(0x11534000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534000 push ebp */
  push32((uint32_t)(EBP));
  /* 11534001 mov ebp, esp */
  EBP = (ESP);
  /* 11534003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534006 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153400a je 0x1153402b */
  if (C.zf) goto L_1153402b;
  /* 1153400c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153400f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11534012 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11534014 je 0x1153402b */
  if (C.zf) goto L_1153402b;
  /* 11534016 push 0x1154fc3c */
  push32((uint32_t)(0x1154fc3cu));
  /* 1153401b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153401e push edx */
  push32((uint32_t)(EDX));
  /* 1153401f call 0x11533560 */
  push32(0x11534024u); f_11533560();
  /* 11534024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534027 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11534029 jne 0x11534053 */
  if (!C.zf) goto L_11534053;
L_1153402b:;
  /* 1153402b push 8 */
  push32((uint32_t)(0x8u));
  /* 1153402d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11534030 push eax */
  push32((uint32_t)(EAX));
  /* 11534031 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11534036 mov ecx, dword ptr [0x11553ae8] */
  ECX = (r32((uint32_t)(0x11553ae8)));
  /* 1153403c push ecx */
  push32((uint32_t)(ECX));
  /* 1153403d call dword ptr [0x11553aec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11553aec))), 0x11534043u);
  /* 11534043 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11534045 jne 0x1153404b */
  if (!C.zf) goto L_1153404b;
  /* 11534047 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11534049 jmp 0x11534097 */
  goto L_11534097;
L_1153404b:;
  /* 1153404b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1153404e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11534051 jmp 0x1153408b */
  goto L_1153408b;
L_11534053:;
  /* 11534053 push 0x1154fc38 */
  push32((uint32_t)(0x1154fc38u));
  /* 11534058 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153405b push eax */
  push32((uint32_t)(EAX));
  /* 1153405c call 0x11533560 */
  push32(0x11534061u); f_11533560();
  /* 11534061 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534064 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11534066 jne 0x1153408b */
  if (!C.zf) goto L_1153408b;
  /* 11534068 push 8 */
  push32((uint32_t)(0x8u));
  /* 1153406a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1153406d push ecx */
  push32((uint32_t)(ECX));
  /* 1153406e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11534070 mov edx, dword ptr [0x11553ae8] */
  EDX = (r32((uint32_t)(0x11553ae8)));
  /* 11534076 push edx */
  push32((uint32_t)(EDX));
  /* 11534077 call dword ptr [0x11553aec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11553aec))), 0x1153407du);
  /* 1153407d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1153407f jne 0x11534085 */
  if (!C.zf) goto L_11534085;
  /* 11534081 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11534083 jmp 0x11534097 */
  goto L_11534097;
L_11534085:;
  /* 11534085 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11534088 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1153408b:;
  /* 1153408b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153408e push ecx */
  push32((uint32_t)(ECX));
  /* 1153408f call 0x11536180 */
  push32(0x11534094u); f_11536180();
  /* 11534094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11534097:;
  /* 11534097 mov esp, ebp */
  ESP = (EBP);
  /* 11534099 pop ebp */
  EBP = (pop32());
  /* 1153409a ret  */
  ESPCHK(0x11534000u, _esp0);
  ESP += 4; return;
}

/* FUN_100140a0 @ 0x115340a0 (79 bytes, 26 insns) */
void f_115340a0(void) {
  FTRACE(0x115340a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115340a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115340a1 mov ebp, esp */
  EBP = (ESP);
  /* 115340a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115340a6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 115340aa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 115340ae mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115340b5 jmp 0x115340c0 */
  goto L_115340c0;
L_115340b7:;
  /* 115340b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115340ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115340bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115340c0:;
  /* 115340c0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115340c4 jae 0x115340e6 */
  if (!C.cf) goto L_115340e6;
  /* 115340c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115340c9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115340cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115340d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115340d4 mov cx, word ptr [eax*2 + 0x115529c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x115529c4)));
  /* 115340dc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115340de jne 0x115340e4 */
  if (!C.zf) goto L_115340e4;
  /* 115340e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115340e2 jmp 0x115340eb */
  goto L_115340eb;
L_115340e4:;
  /* 115340e4 jmp 0x115340b7 */
  goto L_115340b7;
L_115340e6:;
  /* 115340e6 mov eax, 1 */
  EAX = (0x1u);
L_115340eb:;
  /* 115340eb mov esp, ebp */
  ESP = (EBP);
  /* 115340ed pop ebp */
  EBP = (pop32());
  /* 115340ee ret  */
  ESPCHK(0x115340a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100140f0 @ 0x115340f0 (135 bytes, 48 insns) */
void f_115340f0(void) {
  FTRACE(0x115340f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115340f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115340f1 mov ebp, esp */
  EBP = (ESP);
  /* 115340f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115340f6 push esi */
  push32((uint32_t)(ESI));
  /* 115340f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115340fa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115340ff and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11534104 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11534109 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1153410c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11534111 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11534114 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11534116 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11534119 push ecx */
  push32((uint32_t)(ECX));
  /* 1153411a push 1 */
  push32((uint32_t)(0x1u));
  /* 1153411c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153411f push edx */
  push32((uint32_t)(EDX));
  /* 11534120 call dword ptr [0x11553aec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11553aec))), 0x11534126u);
  /* 11534126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11534128 jne 0x1153412e */
  if (!C.zf) goto L_1153412e;
  /* 1153412a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153412c jmp 0x11534172 */
  goto L_11534172;
L_1153412e:;
  /* 1153412e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11534131 push eax */
  push32((uint32_t)(EAX));
  /* 11534132 call 0x11534360 */
  push32(0x11534137u); f_11534360();
  /* 11534137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153413a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153413d je 0x1153416d */
  if (C.zf) goto L_1153416d;
  /* 1153413f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534143 je 0x1153416d */
  if (C.zf) goto L_1153416d;
  /* 11534145 mov ecx, dword ptr [0x11553adc] */
  ECX = (r32((uint32_t)(0x11553adc)));
  /* 1153414b push ecx */
  push32((uint32_t)(ECX));
  /* 1153414c call 0x115343e0 */
  push32(0x11534151u); f_115343e0();
  /* 11534151 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534154 mov esi, eax */
  ESI = (EAX);
  /* 11534156 mov edx, dword ptr [0x11553adc] */
  EDX = (r32((uint32_t)(0x11553adc)));
  /* 1153415c push edx */
  push32((uint32_t)(EDX));
  /* 1153415d call 0x1152a700 */
  push32(0x11534162u); f_1152a700();
  /* 11534162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534165 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534167 jne 0x1153416d */
  if (!C.zf) goto L_1153416d;
  /* 11534169 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1153416b jmp 0x11534172 */
  goto L_11534172;
L_1153416d:;
  /* 1153416d mov eax, 1 */
  EAX = (0x1u);
L_11534172:;
  /* 11534172 pop esi */
  ESI = (pop32());
  /* 11534173 mov esp, ebp */
  ESP = (EBP);
  /* 11534175 pop ebp */
  EBP = (pop32());
  /* 11534176 ret  */
  ESPCHK(0x115340f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014180 @ 0x11534180 (77 bytes, 18 insns) */
void f_11534180(void) {
  FTRACE(0x11534180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534180 push ebp */
  push32((uint32_t)(EBP));
  /* 11534181 mov ebp, esp */
  EBP = (ESP);
  /* 11534183 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534189 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11534193 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11534199 push eax */
  push32((uint32_t)(EAX));
  /* 1153419a call dword ptr [0x11556304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556304))), 0x115341a0u);
  /* 115341a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115341a2 je 0x115341b9 */
  if (C.zf) goto L_115341b9;
  /* 115341a4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115341ab jne 0x115341b9 */
  if (!C.zf) goto L_115341b9;
  /* 115341ad mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 115341b7 jmp 0x115341c3 */
  goto L_115341c3;
L_115341b9:;
  /* 115341b9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_115341c3:;
  /* 115341c3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 115341c9 mov esp, ebp */
  ESP = (EBP);
  /* 115341cb pop ebp */
  EBP = (pop32());
  /* 115341cc ret  */
  ESPCHK(0x11534180u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x115341d0 (388 bytes, 118 insns) */
void f_115341d0(void) {
  FTRACE(0x115341d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115341d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115341d1 mov ebp, esp */
  EBP = (ESP);
  /* 115341d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115341d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115341dd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 115341e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115341eb:;
  /* 115341eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115341ee cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115341f1 jg 0x11534338 */
  if ((!C.zf&&C.sf==C.of)) goto L_11534338;
  /* 115341f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115341fa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115341fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115341fe sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534200 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11534202 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11534205 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534208 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153420b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153420e cmp edx, dword ptr [ecx + 0x11552520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11552520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534214 jne 0x1153430e */
  if (!C.zf) goto L_1153430e;
  /* 1153421a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1153421d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11534220 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534224 ja 0x11534247 */
  if ((!C.cf&&!C.zf)) goto L_11534247;
  /* 11534226 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153422a je 0x115342b9 */
  if (C.zf) goto L_115342b9;
  /* 11534230 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534234 je 0x11534264 */
  if (C.zf) goto L_11534264;
  /* 11534236 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153423a je 0x11534286 */
  if (C.zf) goto L_11534286;
  /* 1153423c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534240 je 0x115342a8 */
  if (C.zf) goto L_115342a8;
  /* 11534242 jmp 0x115342d8 */
  goto L_115342d8;
L_11534247:;
  /* 11534247 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153424e je 0x11534275 */
  if (C.zf) goto L_11534275;
  /* 11534250 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534257 je 0x11534297 */
  if (C.zf) goto L_11534297;
  /* 11534259 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534260 je 0x115342ca */
  if (C.zf) goto L_115342ca;
  /* 11534262 jmp 0x115342d8 */
  goto L_115342d8;
L_11534264:;
  /* 11534264 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534267 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153426a add ecx, 0x11552524 */
  { uint32_t _a=(ECX),_b=(0x11552524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534270 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11534273 jmp 0x115342d8 */
  goto L_115342d8;
L_11534275:;
  /* 11534275 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534278 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153427b mov eax, dword ptr [edx + 0x1155252c] */
  EAX = (r32((uint32_t)(EDX + 0x1155252c)));
  /* 11534281 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11534284 jmp 0x115342d8 */
  goto L_115342d8;
L_11534286:;
  /* 11534286 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534289 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153428c add ecx, 0x11552530 */
  { uint32_t _a=(ECX),_b=(0x11552530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534292 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11534295 jmp 0x115342d8 */
  goto L_115342d8;
L_11534297:;
  /* 11534297 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153429a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153429d mov eax, dword ptr [edx + 0x11552534] */
  EAX = (r32((uint32_t)(EDX + 0x11552534)));
  /* 115342a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115342a6 jmp 0x115342d8 */
  goto L_115342d8;
L_115342a8:;
  /* 115342a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115342ab imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115342ae add ecx, 0x11552538 */
  { uint32_t _a=(ECX),_b=(0x11552538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115342b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115342b7 jmp 0x115342d8 */
  goto L_115342d8;
L_115342b9:;
  /* 115342b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115342bc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115342bf add edx, 0x1155253c */
  { uint32_t _a=(EDX),_b=(0x1155253cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115342c5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115342c8 jmp 0x115342d8 */
  goto L_115342d8;
L_115342ca:;
  /* 115342ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115342cd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115342d0 add eax, 0x11552544 */
  { uint32_t _a=(EAX),_b=(0x11552544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115342d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115342d8:;
  /* 115342d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115342dc je 0x115342e4 */
  if (C.zf) goto L_115342e4;
  /* 115342de cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115342e2 jge 0x115342e6 */
  if ((C.sf==C.of)) goto L_115342e6;
L_115342e4:;
  /* 115342e4 jmp 0x11534338 */
  goto L_11534338;
L_115342e6:;
  /* 115342e6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115342e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115342ec push ecx */
  push32((uint32_t)(ECX));
  /* 115342ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115342f0 push edx */
  push32((uint32_t)(EDX));
  /* 115342f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115342f4 push eax */
  push32((uint32_t)(EAX));
  /* 115342f5 call 0x1152b0f0 */
  push32(0x115342fau); f_1152b0f0();
  /* 115342fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115342fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534300 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534303 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11534307 mov eax, 1 */
  EAX = (0x1u);
  /* 1153430c jmp 0x1153434e */
  goto L_1153434e;
L_1153430e:;
  /* 1153430e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534311 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11534314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534317 cmp eax, dword ptr [edx + 0x11552520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11552520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153431d jae 0x1153432a */
  if (!C.cf) goto L_1153432a;
  /* 1153431f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534322 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534325 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11534328 jmp 0x11534333 */
  goto L_11534333;
L_1153432a:;
  /* 1153432a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153432d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534330 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11534333:;
  /* 11534333 jmp 0x115341eb */
  goto L_115341eb;
L_11534338:;
  /* 11534338 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1153433b push eax */
  push32((uint32_t)(EAX));
  /* 1153433c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1153433f push ecx */
  push32((uint32_t)(ECX));
  /* 11534340 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534343 push edx */
  push32((uint32_t)(EDX));
  /* 11534344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534347 push eax */
  push32((uint32_t)(EAX));
  /* 11534348 call dword ptr [0x11556310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556310))), 0x1153434eu);
L_1153434e:;
  /* 1153434e mov esp, ebp */
  ESP = (EBP);
  /* 11534350 pop ebp */
  EBP = (pop32());
  /* 11534351 ret 0x10 */
  ESPCHK(0x115341d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014360 @ 0x11534360 (118 bytes, 42 insns) */
void f_11534360(void) {
  FTRACE(0x11534360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534360 push ebp */
  push32((uint32_t)(EBP));
  /* 11534361 mov ebp, esp */
  EBP = (ESP);
  /* 11534363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534366 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1153436d:;
  /* 1153436d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534370 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11534372 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11534375 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11534379 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153437c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153437f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11534382 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11534384 je 0x115343cf */
  if (C.zf) goto L_115343cf;
  /* 11534386 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1153438a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153438d jl 0x115343a2 */
  if ((C.sf!=C.of)) goto L_115343a2;
  /* 1153438f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11534393 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534396 jg 0x115343a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_115343a2;
  /* 11534398 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1153439b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1153439d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 115343a0 jmp 0x115343bc */
  goto L_115343bc;
L_115343a2:;
  /* 115343a2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115343a6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115343a9 jl 0x115343bc */
  if ((C.sf!=C.of)) goto L_115343bc;
  /* 115343ab movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115343af cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115343b2 jg 0x115343bc */
  if ((!C.zf&&C.sf==C.of)) goto L_115343bc;
  /* 115343b4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 115343b7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115343b9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_115343bc:;
  /* 115343bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115343bf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115343c2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115343c6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 115343ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115343cd jmp 0x1153436d */
  goto L_1153436d;
L_115343cf:;
  /* 115343cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115343d2 mov esp, ebp */
  ESP = (EBP);
  /* 115343d4 pop ebp */
  EBP = (pop32());
  /* 115343d5 ret  */
  ESPCHK(0x11534360u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x115343e0 (101 bytes, 36 insns) */
void f_115343e0(void) {
  FTRACE(0x115343e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115343e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115343e1 mov ebp, esp */
  EBP = (ESP);
  /* 115343e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115343e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115343ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115343f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115343f2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 115343f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115343f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115343fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_115343fe:;
  /* 115343fe movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11534402 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534405 jl 0x11534410 */
  if ((C.sf!=C.of)) goto L_11534410;
  /* 11534407 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1153440b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153440e jle 0x11534422 */
  if ((C.zf||C.sf!=C.of)) goto L_11534422;
L_11534410:;
  /* 11534410 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11534414 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534417 jl 0x1153443e */
  if ((C.sf!=C.of)) goto L_1153443e;
  /* 11534419 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1153441d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534420 jg 0x1153443e */
  if ((!C.zf&&C.sf==C.of)) goto L_1153443e;
L_11534422:;
  /* 11534422 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11534425 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534428 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1153442b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153442e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11534430 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11534433 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534436 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534439 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1153443c jmp 0x115343fe */
  goto L_115343fe;
L_1153443e:;
  /* 1153443e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11534441 mov esp, ebp */
  ESP = (EBP);
  /* 11534443 pop ebp */
  EBP = (pop32());
  /* 11534444 ret  */
  ESPCHK(0x115343e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014450 @ 0x11534450 (122 bytes, 39 insns) */
void f_11534450(void) {
  FTRACE(0x11534450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534450 push ebp */
  push32((uint32_t)(EBP));
  /* 11534451 mov ebp, esp */
  EBP = (ESP);
  /* 11534453 push ecx */
  push32((uint32_t)(ECX));
  /* 11534454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534457 cmp eax, dword ptr [0x1155537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1155537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153445d jae 0x11534481 */
  if (!C.cf) goto L_11534481;
  /* 1153445f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534462 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11534465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534468 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1153446b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1153446e mov eax, dword ptr [ecx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 11534475 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1153447a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1153447d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1153447f jne 0x1153449c */
  if (!C.zf) goto L_1153449c;
L_11534481:;
  /* 11534481 call 0x1152f7a0 */
  push32(0x11534486u); f_1152f7a0();
  /* 11534486 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1153448c call 0x1152f7b0 */
  push32(0x11534491u); f_1152f7b0();
  /* 11534491 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11534497 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1153449a jmp 0x115344c6 */
  goto L_115344c6;
L_1153449c:;
  /* 1153449c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153449f push edx */
  push32((uint32_t)(EDX));
  /* 115344a0 call 0x11530fc0 */
  push32(0x115344a5u); f_11530fc0();
  /* 115344a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115344a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115344ab push eax */
  push32((uint32_t)(EAX));
  /* 115344ac call 0x115344d0 */
  push32(0x115344b1u); f_115344d0();
  /* 115344b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115344b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115344b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115344ba push ecx */
  push32((uint32_t)(ECX));
  /* 115344bb call 0x11531050 */
  push32(0x115344c0u); f_11531050();
  /* 115344c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115344c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115344c6:;
  /* 115344c6 mov esp, ebp */
  ESP = (EBP);
  /* 115344c8 pop ebp */
  EBP = (pop32());
  /* 115344c9 ret  */
  ESPCHK(0x11534450u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x115344d0 (170 bytes, 59 insns) */
void f_115344d0(void) {
  FTRACE(0x115344d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115344d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115344d1 mov ebp, esp */
  EBP = (ESP);
  /* 115344d3 push ecx */
  push32((uint32_t)(ECX));
  /* 115344d4 push esi */
  push32((uint32_t)(ESI));
  /* 115344d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115344d8 push eax */
  push32((uint32_t)(EAX));
  /* 115344d9 call 0x11530e40 */
  push32(0x115344deu); f_11530e40();
  /* 115344de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115344e1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115344e4 je 0x11534523 */
  if (C.zf) goto L_11534523;
  /* 115344e6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115344ea je 0x115344f2 */
  if (C.zf) goto L_115344f2;
  /* 115344ec cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115344f0 jne 0x1153450c */
  if (!C.zf) goto L_1153450c;
L_115344f2:;
  /* 115344f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115344f4 call 0x11530e40 */
  push32(0x115344f9u); f_11530e40();
  /* 115344f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115344fc mov esi, eax */
  ESI = (EAX);
  /* 115344fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11534500 call 0x11530e40 */
  push32(0x11534505u); f_11530e40();
  /* 11534505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534508 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153450a je 0x11534523 */
  if (C.zf) goto L_11534523;
L_1153450c:;
  /* 1153450c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153450f push ecx */
  push32((uint32_t)(ECX));
  /* 11534510 call 0x11530e40 */
  push32(0x11534515u); f_11530e40();
  /* 11534515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534518 push eax */
  push32((uint32_t)(EAX));
  /* 11534519 call dword ptr [0x11556300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556300))), 0x1153451fu);
  /* 1153451f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11534521 je 0x1153452c */
  if (C.zf) goto L_1153452c;
L_11534523:;
  /* 11534523 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1153452a jmp 0x11534535 */
  goto L_11534535;
L_1153452c:;
  /* 1153452c call dword ptr [0x11556400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556400))), 0x11534532u);
  /* 11534532 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11534535:;
  /* 11534535 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534538 push edx */
  push32((uint32_t)(EDX));
  /* 11534539 call 0x11530d60 */
  push32(0x1153453eu); f_11530d60();
  /* 1153453e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534541 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534544 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11534547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1153454a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1153454d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11534550 mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 11534557 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1153455c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534560 je 0x11534573 */
  if (C.zf) goto L_11534573;
  /* 11534562 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11534565 push eax */
  push32((uint32_t)(EAX));
  /* 11534566 call 0x1152f700 */
  push32(0x1153456bu); f_1152f700();
  /* 1153456b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153456e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11534571 jmp 0x11534575 */
  goto L_11534575;
L_11534573:;
  /* 11534573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11534575:;
  /* 11534575 pop esi */
  ESI = (pop32());
  /* 11534576 mov esp, ebp */
  ESP = (EBP);
  /* 11534578 pop ebp */
  EBP = (pop32());
  /* 11534579 ret  */
  ESPCHK(0x115344d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014580 @ 0x11534580 (146 bytes, 52 insns) */
void f_11534580(void) {
  FTRACE(0x11534580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534580 push ebp */
  push32((uint32_t)(EBP));
  /* 11534581 mov ebp, esp */
  EBP = (ESP);
  /* 11534583 push ebx */
  push32((uint32_t)(EBX));
  /* 11534584 push esi */
  push32((uint32_t)(ESI));
  /* 11534585 push edi */
  push32((uint32_t)(EDI));
L_11534586:;
  /* 11534586 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153458a jne 0x115345aa */
  if (!C.zf) goto L_115345aa;
  /* 1153458c push 0x1154f578 */
  push32((uint32_t)(0x1154f578u));
  /* 11534591 push 0 */
  push32((uint32_t)(0x0u));
  /* 11534593 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11534595 push 0x1154fc40 */
  push32((uint32_t)(0x1154fc40u));
  /* 1153459a push 2 */
  push32((uint32_t)(0x2u));
  /* 1153459c call 0x11526990 */
  push32(0x115345a1u); f_11526990();
  /* 115345a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115345a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115345a7 jne 0x115345aa */
  if (!C.zf) goto L_115345aa;
  /* 115345a9 int3  */
  x86_unimpl("int3 @ 0x115345a9");
L_115345aa:;
  /* 115345aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115345ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115345ae jne 0x11534586 */
  if (!C.zf) goto L_11534586;
  /* 115345b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115345b3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115345b6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 115345bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115345be je 0x1153460d */
  if (C.zf) goto L_1153460d;
  /* 115345c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115345c3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115345c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 115345c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115345cb je 0x1153460d */
  if (C.zf) goto L_1153460d;
  /* 115345cd push 2 */
  push32((uint32_t)(0x2u));
  /* 115345cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115345d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115345d5 push eax */
  push32((uint32_t)(EAX));
  /* 115345d6 call 0x11528360 */
  push32(0x115345dbu); f_11528360();
  /* 115345db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115345de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115345e1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115345e4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 115345ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115345ed mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 115345f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115345f3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 115345f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115345fc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11534603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534606 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1153460d:;
  /* 1153460d pop edi */
  EDI = (pop32());
  /* 1153460e pop esi */
  ESI = (pop32());
  /* 1153460f pop ebx */
  EBX = (pop32());
  /* 11534610 pop ebp */
  EBP = (pop32());
  /* 11534611 ret  */
  ESPCHK(0x11534580u, _esp0);
  ESP += 4; return;
}

/* FUN_10014620 @ 0x11534620 (289 bytes, 97 insns) */
void f_11534620(void) {
  FTRACE(0x11534620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534620 push ebp */
  push32((uint32_t)(EBP));
  /* 11534621 mov ebp, esp */
  EBP = (ESP);
  /* 11534623 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534626 push esi */
  push32((uint32_t)(ESI));
  /* 11534627 mov eax, dword ptr [0x11552c98] */
  EAX = (r32((uint32_t)(0x11552c98)));
  /* 1153462c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1153462f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11534636 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1153463d jmp 0x11534648 */
  goto L_11534648;
L_1153463f:;
  /* 1153463f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534642 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534645 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11534648:;
  /* 11534648 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153464c jae 0x11534681 */
  if (!C.cf) goto L_11534681;
  /* 1153464e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534651 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534654 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11534657 push ecx */
  push32((uint32_t)(ECX));
  /* 11534658 call 0x1152a700 */
  push32(0x1153465du); f_1152a700();
  /* 1153465d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534660 mov esi, eax */
  ESI = (EAX);
  /* 11534662 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534665 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534668 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1153466c push ecx */
  push32((uint32_t)(ECX));
  /* 1153466d call 0x1152a700 */
  push32(0x11534672u); f_1152a700();
  /* 11534672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534675 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534678 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1153467c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1153467f jmp 0x1153463f */
  goto L_1153463f;
L_11534681:;
  /* 11534681 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11534684 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534687 push eax */
  push32((uint32_t)(EAX));
  /* 11534688 call 0x115278b0 */
  push32(0x1153468du); f_115278b0();
  /* 1153468d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534690 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11534693 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534697 je 0x11534739 */
  if (C.zf) goto L_11534739;
  /* 1153469d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115346a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115346a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115346aa jmp 0x115346b5 */
  goto L_115346b5;
L_115346ac:;
  /* 115346ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115346af add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115346b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115346b5:;
  /* 115346b5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115346b9 jae 0x1153472a */
  if (!C.cf) goto L_1153472a;
  /* 115346bb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115346be mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 115346c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115346c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115346c7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115346ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115346cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115346d0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 115346d3 push ecx */
  push32((uint32_t)(ECX));
  /* 115346d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115346d7 push edx */
  push32((uint32_t)(EDX));
  /* 115346d8 call 0x1152a880 */
  push32(0x115346ddu); f_1152a880();
  /* 115346dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115346e0 push eax */
  push32((uint32_t)(EAX));
  /* 115346e1 call 0x1152a700 */
  push32(0x115346e6u); f_1152a700();
  /* 115346e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115346e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115346ec add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115346ee mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115346f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115346f4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 115346f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115346fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115346fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11534700 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534703 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534706 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1153470a push eax */
  push32((uint32_t)(EAX));
  /* 1153470b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1153470e push ecx */
  push32((uint32_t)(ECX));
  /* 1153470f call 0x1152a880 */
  push32(0x11534714u); f_1152a880();
  /* 11534714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534717 push eax */
  push32((uint32_t)(EAX));
  /* 11534718 call 0x1152a700 */
  push32(0x1153471du); f_1152a700();
  /* 1153471d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534720 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534723 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534725 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11534728 jmp 0x115346ac */
  goto L_115346ac;
L_1153472a:;
  /* 1153472a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1153472d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11534730 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534733 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534736 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11534739:;
  /* 11534739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153473c pop esi */
  ESI = (pop32());
  /* 1153473d mov esp, ebp */
  ESP = (EBP);
  /* 1153473f pop ebp */
  EBP = (pop32());
  /* 11534740 ret  */
  ESPCHK(0x11534620u, _esp0);
  ESP += 4; return;
}

/* FUN_10014750 @ 0x11534750 (291 bytes, 97 insns) */
void f_11534750(void) {
  FTRACE(0x11534750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534750 push ebp */
  push32((uint32_t)(EBP));
  /* 11534751 mov ebp, esp */
  EBP = (ESP);
  /* 11534753 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534756 push esi */
  push32((uint32_t)(ESI));
  /* 11534757 mov eax, dword ptr [0x11552c98] */
  EAX = (r32((uint32_t)(0x11552c98)));
  /* 1153475c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1153475f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11534766 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1153476d jmp 0x11534778 */
  goto L_11534778;
L_1153476f:;
  /* 1153476f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534772 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534775 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11534778:;
  /* 11534778 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1153477c jae 0x115347b2 */
  if (!C.cf) goto L_115347b2;
  /* 1153477e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534781 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534784 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11534788 push ecx */
  push32((uint32_t)(ECX));
  /* 11534789 call 0x1152a700 */
  push32(0x1153478eu); f_1152a700();
  /* 1153478e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534791 mov esi, eax */
  ESI = (EAX);
  /* 11534793 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534796 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534799 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1153479d push ecx */
  push32((uint32_t)(ECX));
  /* 1153479e call 0x1152a700 */
  push32(0x115347a3u); f_1152a700();
  /* 115347a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115347a6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115347a9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 115347ad mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115347b0 jmp 0x1153476f */
  goto L_1153476f;
L_115347b2:;
  /* 115347b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115347b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115347b8 push eax */
  push32((uint32_t)(EAX));
  /* 115347b9 call 0x115278b0 */
  push32(0x115347beu); f_115278b0();
  /* 115347be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115347c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115347c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115347c8 je 0x1153486b */
  if (C.zf) goto L_1153486b;
  /* 115347ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115347d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115347d4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115347db jmp 0x115347e6 */
  goto L_115347e6;
L_115347dd:;
  /* 115347dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115347e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115347e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115347e6:;
  /* 115347e6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115347ea jae 0x1153485c */
  if (!C.cf) goto L_1153485c;
  /* 115347ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115347ef mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 115347f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115347f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115347f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115347fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115347fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534801 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11534805 push ecx */
  push32((uint32_t)(ECX));
  /* 11534806 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534809 push edx */
  push32((uint32_t)(EDX));
  /* 1153480a call 0x1152a880 */
  push32(0x1153480fu); f_1152a880();
  /* 1153480f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534812 push eax */
  push32((uint32_t)(EAX));
  /* 11534813 call 0x1152a700 */
  push32(0x11534818u); f_1152a700();
  /* 11534818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153481b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1153481e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534820 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11534823 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534826 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11534829 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1153482c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1153482f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11534832 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534835 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534838 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1153483c push eax */
  push32((uint32_t)(EAX));
  /* 1153483d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534840 push ecx */
  push32((uint32_t)(ECX));
  /* 11534841 call 0x1152a880 */
  push32(0x11534846u); f_1152a880();
  /* 11534846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534849 push eax */
  push32((uint32_t)(EAX));
  /* 1153484a call 0x1152a700 */
  push32(0x1153484fu); f_1152a700();
  /* 1153484f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534852 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534855 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534857 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1153485a jmp 0x115347dd */
  goto L_115347dd;
L_1153485c:;
  /* 1153485c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1153485f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11534862 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534865 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534868 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1153486b:;
  /* 1153486b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1153486e pop esi */
  ESI = (pop32());
  /* 1153486f mov esp, ebp */
  ESP = (EBP);
  /* 11534871 pop ebp */
  EBP = (pop32());
  /* 11534872 ret  */
  ESPCHK(0x11534750u, _esp0);
  ESP += 4; return;
}

/* FUN_10014880 @ 0x11534880 (878 bytes, 273 insns) */
void f_11534880(void) {
  FTRACE(0x11534880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534880 push ebp */
  push32((uint32_t)(EBP));
  /* 11534881 mov ebp, esp */
  EBP = (ESP);
  /* 11534883 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11534886 push esi */
  push32((uint32_t)(ESI));
  /* 11534887 mov eax, dword ptr [0x11552c98] */
  EAX = (r32((uint32_t)(0x11552c98)));
  /* 1153488c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1153488f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11534896 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1153489d jmp 0x115348a8 */
  goto L_115348a8;
L_1153489f:;
  /* 1153489f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115348a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115348a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_115348a8:;
  /* 115348a8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115348ac jae 0x115348e1 */
  if (!C.cf) goto L_115348e1;
  /* 115348ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115348b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115348b4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 115348b7 push ecx */
  push32((uint32_t)(ECX));
  /* 115348b8 call 0x1152a700 */
  push32(0x115348bdu); f_1152a700();
  /* 115348bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115348c0 mov esi, eax */
  ESI = (EAX);
  /* 115348c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115348c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115348c8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 115348cc push ecx */
  push32((uint32_t)(ECX));
  /* 115348cd call 0x1152a700 */
  push32(0x115348d2u); f_1152a700();
  /* 115348d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115348d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115348d8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 115348dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115348df jmp 0x1153489f */
  goto L_1153489f;
L_115348e1:;
  /* 115348e1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115348e8 jmp 0x115348f3 */
  goto L_115348f3;
L_115348ea:;
  /* 115348ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115348ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115348f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_115348f3:;
  /* 115348f3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115348f7 jae 0x1153492d */
  if (!C.cf) goto L_1153492d;
  /* 115348f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115348fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115348ff mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11534903 push eax */
  push32((uint32_t)(EAX));
  /* 11534904 call 0x1152a700 */
  push32(0x11534909u); f_1152a700();
  /* 11534909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153490c mov esi, eax */
  ESI = (EAX);
  /* 1153490e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534911 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534914 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11534918 push eax */
  push32((uint32_t)(EAX));
  /* 11534919 call 0x1152a700 */
  push32(0x1153491eu); f_1152a700();
  /* 1153491e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534921 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534924 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11534928 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1153492b jmp 0x115348ea */
  goto L_115348ea;
L_1153492d:;
  /* 1153492d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534930 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11534936 push eax */
  push32((uint32_t)(EAX));
  /* 11534937 call 0x1152a700 */
  push32(0x1153493cu); f_1152a700();
  /* 1153493c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153493f mov esi, eax */
  ESI = (EAX);
  /* 11534941 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534944 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1153494a push edx */
  push32((uint32_t)(EDX));
  /* 1153494b call 0x1152a700 */
  push32(0x11534950u); f_1152a700();
  /* 11534950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534953 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534956 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1153495a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1153495d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534960 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11534966 push edx */
  push32((uint32_t)(EDX));
  /* 11534967 call 0x1152a700 */
  push32(0x1153496cu); f_1152a700();
  /* 1153496c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153496f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11534972 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11534976 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11534979 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1153497c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11534982 push ecx */
  push32((uint32_t)(ECX));
  /* 11534983 call 0x1152a700 */
  push32(0x11534988u); f_1152a700();
  /* 11534988 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1153498b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1153498e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11534992 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11534995 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534998 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1153499e push edx */
  push32((uint32_t)(EDX));
  /* 1153499f call 0x1152a700 */
  push32(0x115349a4u); f_1152a700();
  /* 115349a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115349a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115349aa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115349ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115349b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115349b4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115349b9 push eax */
  push32((uint32_t)(EAX));
  /* 115349ba call 0x115278b0 */
  push32(0x115349bfu); f_115278b0();
  /* 115349bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115349c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115349c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115349c9 je 0x11534be6 */
  if (C.zf) goto L_11534be6;
  /* 115349cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115349d2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 115349d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115349d8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115349de mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115349e1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 115349e6 mov eax, dword ptr [0x11552c98] */
  EAX = (r32((uint32_t)(0x11552c98)));
  /* 115349eb push eax */
  push32((uint32_t)(EAX));
  /* 115349ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115349ef push ecx */
  push32((uint32_t)(ECX));
  /* 115349f0 call 0x1152e1b0 */
  push32(0x115349f5u); f_1152e1b0();
  /* 115349f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115349f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115349ff jmp 0x11534a0a */
  goto L_11534a0a;
L_11534a01:;
  /* 11534a01 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534a04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534a07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11534a0a:;
  /* 11534a0a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534a0e jae 0x11534a7e */
  if (!C.cf) goto L_11534a7e;
  /* 11534a10 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534a13 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11534a16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534a19 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11534a1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534a1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534a22 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11534a25 push edx */
  push32((uint32_t)(EDX));
  /* 11534a26 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534a29 push eax */
  push32((uint32_t)(EAX));
  /* 11534a2a call 0x1152a880 */
  push32(0x11534a2fu); f_1152a880();
  /* 11534a2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534a32 push eax */
  push32((uint32_t)(EAX));
  /* 11534a33 call 0x1152a700 */
  push32(0x11534a38u); f_1152a700();
  /* 11534a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534a3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534a3e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11534a42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11534a45 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534a48 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11534a4b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534a4e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11534a52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534a55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534a58 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11534a5c push edx */
  push32((uint32_t)(EDX));
  /* 11534a5d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534a60 push eax */
  push32((uint32_t)(EAX));
  /* 11534a61 call 0x1152a880 */
  push32(0x11534a66u); f_1152a880();
  /* 11534a66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534a69 push eax */
  push32((uint32_t)(EAX));
  /* 11534a6a call 0x1152a700 */
  push32(0x11534a6fu); f_1152a700();
  /* 11534a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534a72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534a75 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11534a79 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11534a7c jmp 0x11534a01 */
  goto L_11534a01;
L_11534a7e:;
  /* 11534a7e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11534a85 jmp 0x11534a90 */
  goto L_11534a90;
L_11534a87:;
  /* 11534a87 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534a8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11534a8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11534a90:;
  /* 11534a90 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11534a94 jae 0x11534b06 */
  if (!C.cf) goto L_11534b06;
  /* 11534a96 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534a99 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11534a9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534a9f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11534aa3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534aa6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534aa9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11534aad push eax */
  push32((uint32_t)(EAX));
  /* 11534aae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 11534ab2 call 0x1152a880 */
  push32(0x11534ab7u); f_1152a880();
  /* 11534ab7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534aba push eax */
  push32((uint32_t)(EAX));
  /* 11534abb call 0x1152a700 */
  push32(0x11534ac0u); f_1152a700();
  /* 11534ac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534ac3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534ac6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11534aca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11534acd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534ad0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11534ad3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534ad6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11534ada mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11534add mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534ae0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11534ae4 push eax */
  push32((uint32_t)(EAX));
  /* 11534ae5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534ae8 push ecx */
  push32((uint32_t)(ECX));
  /* 11534ae9 call 0x1152a880 */
  push32(0x11534aeeu); f_1152a880();
  /* 11534aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534af1 push eax */
  push32((uint32_t)(EAX));
  /* 11534af2 call 0x1152a700 */
  push32(0x11534af7u); f_1152a700();
  /* 11534af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534afa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534afd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11534b01 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11534b04 jmp 0x11534a87 */
  goto L_11534a87;
L_11534b06:;
  /* 11534b06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11534b09 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534b0c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11534b12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534b15 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11534b1b push ecx */
  push32((uint32_t)(ECX));
  /* 11534b1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534b1f push edx */
  push32((uint32_t)(EDX));
  /* 11534b20 call 0x1152a880 */
  push32(0x11534b25u); f_1152a880();
  /* 11534b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534b28 push eax */
  push32((uint32_t)(EAX));
  /* 11534b29 call 0x1152a700 */
  push32(0x11534b2eu); f_1152a700();
  /* 11534b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534b31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534b34 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11534b38 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11534b3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11534b3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534b41 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11534b47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534b4a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11534b50 push eax */
  push32((uint32_t)(EAX));
  /* 11534b51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534b54 push ecx */
  push32((uint32_t)(ECX));
  /* 11534b55 call 0x1152a880 */
  push32(0x11534b5au); f_1152a880();
  /* 11534b5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534b5d push eax */
  push32((uint32_t)(EAX));
  /* 11534b5e call 0x1152a700 */
  push32(0x11534b63u); f_1152a700();
  /* 11534b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534b66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534b69 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11534b6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11534b70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11534b73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534b76 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11534b7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534b7f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11534b85 push ecx */
  push32((uint32_t)(ECX));
  /* 11534b86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534b89 push edx */
  push32((uint32_t)(EDX));
  /* 11534b8a call 0x1152a880 */
  push32(0x11534b8fu); f_1152a880();
  /* 11534b8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534b92 push eax */
  push32((uint32_t)(EAX));
  /* 11534b93 call 0x1152a700 */
  push32(0x11534b98u); f_1152a700();
  /* 11534b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534b9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534b9e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11534ba2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11534ba5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11534ba8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534bab mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11534bb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11534bb4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11534bba push eax */
  push32((uint32_t)(EAX));
  /* 11534bbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534bbe push ecx */
  push32((uint32_t)(ECX));
  /* 11534bbf call 0x1152a880 */
  push32(0x11534bc4u); f_1152a880();
  /* 11534bc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534bc7 push eax */
  push32((uint32_t)(EAX));
  /* 11534bc8 call 0x1152a700 */
  push32(0x11534bcdu); f_1152a700();
  /* 11534bcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534bd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534bd3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11534bd7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11534bda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11534bdd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11534be0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11534be6:;
  /* 11534be6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11534be9 pop esi */
  ESI = (pop32());
  /* 11534bea mov esp, ebp */
  ESP = (EBP);
  /* 11534bec pop ebp */
  EBP = (pop32());
  /* 11534bed ret  */
  ESPCHK(0x11534880u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bf0 @ 0x11534bf0 (31 bytes, 15 insns) */
void f_11534bf0(void) {
  FTRACE(0x11534bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11534bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11534bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11534bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11534bf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11534bf8 push eax */
  push32((uint32_t)(EAX));
  /* 11534bf9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11534bfc push ecx */
  push32((uint32_t)(ECX));
  /* 11534bfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11534c00 push edx */
  push32((uint32_t)(EDX));
  /* 11534c01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11534c04 push eax */
  push32((uint32_t)(EAX));
  /* 11534c05 call 0x11534c10 */
  push32(0x11534c0au); f_11534c10();
  /* 11534c0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11534c0d pop ebp */
  EBP = (pop32());
  /* 11534c0e ret  */
  ESPCHK(0x11534bf0u, _esp0);
  ESP += 4; return;
}

