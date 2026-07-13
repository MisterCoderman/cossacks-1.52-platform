#include "recomp.h"

/* FUN_100085a0 @ 0x123585a0 (116 bytes, 34 insns) */
void f_123585a0(void) {
  FTRACE(0x123585a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123585a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123585a1 mov ebp, esp */
  EBP = (ESP);
  /* 123585a3 push ecx */
  push32((uint32_t)(ECX));
  /* 123585a4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 123585ab push 9 */
  push32((uint32_t)(0x9u));
  /* 123585ad call 0x12357dc0 */
  push32(0x123585b2u); f_12357dc0();
  /* 123585b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123585b5 call 0x12359cb0 */
  push32(0x123585bau); f_12359cb0();
  /* 123585ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123585bc jge 0x123585c5 */
  if ((C.sf==C.of)) goto L_123585c5;
  /* 123585be mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_123585c5:;
  /* 123585c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 123585c7 call 0x12357e60 */
  push32(0x123585ccu); f_12357e60();
  /* 123585cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123585cf push 0 */
  push32((uint32_t)(0x0u));
  /* 123585d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123585d3 mov eax, dword ptr [0x12381f0c] */
  EAX = (r32((uint32_t)(0x12381f0c)));
  /* 123585d8 push eax */
  push32((uint32_t)(EAX));
  /* 123585d9 call dword ptr [0x1238331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238331c))), 0x123585dfu);
  /* 123585df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123585e1 jne 0x1235860d */
  if (!C.zf) goto L_1235860d;
  /* 123585e3 call dword ptr [0x123832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832fc))), 0x123585e9u);
  /* 123585e9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123585ec jne 0x12358606 */
  if (!C.zf) goto L_12358606;
  /* 123585ee call 0x1235c2a0 */
  push32(0x123585f3u); f_1235c2a0();
  /* 123585f3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 123585f9 call 0x1235c290 */
  push32(0x123585feu); f_1235c290();
  /* 123585fe mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12358604 jmp 0x1235860d */
  goto L_1235860d;
L_12358606:;
  /* 12358606 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1235860d:;
  /* 1235860d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358610 mov esp, ebp */
  ESP = (EBP);
  /* 12358612 pop ebp */
  EBP = (pop32());
  /* 12358613 ret  */
  ESPCHK(0x123585a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008620 @ 0x12358620 (10 bytes, 5 insns) */
void f_12358620(void) {
  FTRACE(0x12358620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358620 push ebp */
  push32((uint32_t)(EBP));
  /* 12358621 mov ebp, esp */
  EBP = (ESP);
  /* 12358623 call 0x123585a0 */
  push32(0x12358628u); f_123585a0();
  /* 12358628 pop ebp */
  EBP = (pop32());
  /* 12358629 ret  */
  ESPCHK(0x12358620u, _esp0);
  ESP += 4; return;
}

/* FUN_10008630 @ 0x12358630 (10 bytes, 5 insns) */
void f_12358630(void) {
  FTRACE(0x12358630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358630 push ebp */
  push32((uint32_t)(EBP));
  /* 12358631 mov ebp, esp */
  EBP = (ESP);
  /* 12358633 mov eax, dword ptr [0x1237ec94] */
  EAX = (r32((uint32_t)(0x1237ec94)));
  /* 12358638 pop ebp */
  EBP = (pop32());
  /* 12358639 ret  */
  ESPCHK(0x12358630u, _esp0);
  ESP += 4; return;
}

/* FUN_10008640 @ 0x12358640 (31 bytes, 11 insns) */
void f_12358640(void) {
  FTRACE(0x12358640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358640 push ebp */
  push32((uint32_t)(EBP));
  /* 12358641 mov ebp, esp */
  EBP = (ESP);
  /* 12358643 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235864a jbe 0x12358650 */
  if ((C.cf||C.zf)) goto L_12358650;
  /* 1235864c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235864e jmp 0x1235865d */
  goto L_1235865d;
L_12358650:;
  /* 12358650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358653 mov dword ptr [0x1237ec94], eax */
  w32((uint32_t)(0x1237ec94), (EAX));
  /* 12358658 mov eax, 1 */
  EAX = (0x1u);
L_1235865d:;
  /* 1235865d pop ebp */
  EBP = (pop32());
  /* 1235865e ret  */
  ESPCHK(0x12358640u, _esp0);
  ESP += 4; return;
}

/* FUN_10008660 @ 0x12358660 (89 bytes, 20 insns) */
void f_12358660(void) {
  FTRACE(0x12358660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358660 push ebp */
  push32((uint32_t)(EBP));
  /* 12358661 mov ebp, esp */
  EBP = (ESP);
  /* 12358663 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12358668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235866a mov eax, dword ptr [0x12381f0c] */
  EAX = (r32((uint32_t)(0x12381f0c)));
  /* 1235866f push eax */
  push32((uint32_t)(EAX));
  /* 12358670 call dword ptr [0x12383344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383344))), 0x12358676u);
  /* 12358676 mov dword ptr [0x12381f08], eax */
  w32((uint32_t)(0x12381f08), (EAX));
  /* 1235867b cmp dword ptr [0x12381f08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12381f08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358682 jne 0x12358688 */
  if (!C.zf) goto L_12358688;
  /* 12358684 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12358686 jmp 0x123586b7 */
  goto L_123586b7;
L_12358688:;
  /* 12358688 mov ecx, dword ptr [0x12381f08] */
  ECX = (r32((uint32_t)(0x12381f08)));
  /* 1235868e mov dword ptr [0x12381efc], ecx */
  w32((uint32_t)(0x12381efc), (ECX));
  /* 12358694 mov dword ptr [0x12381f00], 0 */
  w32((uint32_t)(0x12381f00), (0x0u));
  /* 1235869e mov dword ptr [0x12381f04], 0 */
  w32((uint32_t)(0x12381f04), (0x0u));
  /* 123586a8 mov dword ptr [0x12381ee8], 0x10 */
  w32((uint32_t)(0x12381ee8), (0x10u));
  /* 123586b2 mov eax, 1 */
  EAX = (0x1u);
L_123586b7:;
  /* 123586b7 pop ebp */
  EBP = (pop32());
  /* 123586b8 ret  */
  ESPCHK(0x12358660u, _esp0);
  ESP += 4; return;
}

/* FUN_100086c0 @ 0x123586c0 (85 bytes, 29 insns) */
void f_123586c0(void) {
  FTRACE(0x123586c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123586c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123586c1 mov ebp, esp */
  EBP = (ESP);
  /* 123586c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123586c6 mov eax, dword ptr [0x12381f04] */
  EAX = (r32((uint32_t)(0x12381f04)));
  /* 123586cb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123586ce mov ecx, dword ptr [0x12381f08] */
  ECX = (r32((uint32_t)(0x12381f08)));
  /* 123586d4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123586d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123586d9 mov edx, dword ptr [0x12381f08] */
  EDX = (r32((uint32_t)(0x12381f08)));
  /* 123586df mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123586e2:;
  /* 123586e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123586e5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123586e8 jae 0x1235870f */
  if (!C.cf) goto L_1235870f;
  /* 123586ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123586ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123586f0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123586f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123586f6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123586fd jae 0x12358704 */
  if (!C.cf) goto L_12358704;
  /* 123586ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358702 jmp 0x12358711 */
  goto L_12358711;
L_12358704:;
  /* 12358704 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358707 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235870a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235870d jmp 0x123586e2 */
  goto L_123586e2;
L_1235870f:;
  /* 1235870f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12358711:;
  /* 12358711 mov esp, ebp */
  ESP = (EBP);
  /* 12358713 pop ebp */
  EBP = (pop32());
  /* 12358714 ret  */
  ESPCHK(0x123586c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008720 @ 0x12358720 (95 bytes, 33 insns) */
void f_12358720(void) {
  FTRACE(0x12358720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358720 push ebp */
  push32((uint32_t)(EBP));
  /* 12358721 mov ebp, esp */
  EBP = (ESP);
  /* 12358723 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358729 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235872c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235872f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12358732 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358735 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12358738 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235873b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12358740 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358743 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12358745 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358748 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1235874b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1235874d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235874f jne 0x12358771 */
  if (!C.zf) goto L_12358771;
  /* 12358751 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358754 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12358757 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12358759 jne 0x12358771 */
  if (!C.zf) goto L_12358771;
  /* 1235875b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235875e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12358764 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12358766 je 0x12358771 */
  if (C.zf) goto L_12358771;
  /* 12358768 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1235876f jmp 0x12358778 */
  goto L_12358778;
L_12358771:;
  /* 12358771 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12358778:;
  /* 12358778 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235877b mov esp, ebp */
  ESP = (EBP);
  /* 1235877d pop ebp */
  EBP = (pop32());
  /* 1235877e ret  */
  ESPCHK(0x12358720u, _esp0);
  ESP += 4; return;
}

/* FUN_10008780 @ 0x12358780 (1485 bytes, 453 insns) */
void f_12358780(void) {
  FTRACE(0x12358780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358780 push ebp */
  push32((uint32_t)(EBP));
  /* 12358781 mov ebp, esp */
  EBP = (ESP);
  /* 12358783 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358789 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1235878c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1235878f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358792 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12358795 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358798 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1235879b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235879e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 123587a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123587a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123587a7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123587ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123587b0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 123587b7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123587ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123587bd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123587c0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123587c3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123587c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123587c8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123587cb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 123587ce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123587d1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123587d4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 123587d7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123587da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123587dc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123587df mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123587e2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 123587e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123587e8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123587eb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123587ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123587f0 jne 0x12358918 */
  if (!C.zf) goto L_12358918;
  /* 123587f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123587f9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 123587fc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123587ff mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12358802 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358806 jbe 0x1235880f */
  if ((C.cf||C.zf)) goto L_1235880f;
  /* 12358808 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1235880f:;
  /* 1235880f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358812 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358815 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12358818 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235881b jne 0x123588f1 */
  if (!C.zf) goto L_123588f1;
  /* 12358821 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358825 jae 0x12358886 */
  if (!C.cf) goto L_12358886;
  /* 12358827 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1235882c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235882f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12358831 not eax */
  EAX = (~(EAX));
  /* 12358833 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358836 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358839 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1235883d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235883f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358842 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358845 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12358849 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1235884c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235884f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12358852 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12358855 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358858 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235885b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1235885e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358861 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358864 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12358868 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235886a jne 0x12358884 */
  if (!C.zf) goto L_12358884;
  /* 1235886c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12358871 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12358874 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12358876 not eax */
  EAX = (~(EAX));
  /* 12358878 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235887b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1235887d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1235887f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358882 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12358884:;
  /* 12358884 jmp 0x123588f1 */
  goto L_123588f1;
L_12358886:;
  /* 12358886 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12358889 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235888c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12358891 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12358893 not edx */
  EDX = (~(EDX));
  /* 12358895 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358898 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1235889b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 123588a2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123588a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123588a7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123588aa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 123588b1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123588b4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123588b7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123588ba sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123588bd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123588c0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123588c3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 123588c6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123588c9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123588cc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123588d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123588d2 jne 0x123588f1 */
  if (!C.zf) goto L_123588f1;
  /* 123588d4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123588d7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123588da mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123588df shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123588e1 not edx */
  EDX = (~(EDX));
  /* 123588e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123588e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123588e9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123588eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123588ee mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_123588f1:;
  /* 123588f1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123588f4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123588f7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123588fa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123588fd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12358900 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358903 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12358906 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358909 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1235890c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1235890f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358912 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358915 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12358918:;
  /* 12358918 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235891b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1235891e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358921 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12358924 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358928 jbe 0x12358931 */
  if ((C.cf||C.zf)) goto L_12358931;
  /* 1235892a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12358931:;
  /* 12358931 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12358934 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12358937 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12358939 jne 0x12358a95 */
  if (!C.zf) goto L_12358a95;
  /* 1235893f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358942 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358945 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12358948 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235894b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1235894e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358951 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12358954 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358958 jbe 0x12358961 */
  if ((C.cf||C.zf)) goto L_12358961;
  /* 1235895a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12358961:;
  /* 12358961 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358964 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358967 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1235896a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235896d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12358970 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358973 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12358976 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235897a jbe 0x12358983 */
  if ((C.cf||C.zf)) goto L_12358983;
  /* 1235897c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12358983:;
  /* 12358983 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12358986 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358989 je 0x12358a8f */
  if (C.zf) goto L_12358a8f;
  /* 1235898f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12358992 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12358995 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12358998 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235899b jne 0x12358a71 */
  if (!C.zf) goto L_12358a71;
  /* 123589a1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123589a5 jae 0x12358a06 */
  if (!C.cf) goto L_12358a06;
  /* 123589a7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123589ac mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123589af shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123589b1 not edx */
  EDX = (~(EDX));
  /* 123589b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123589b6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123589b9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 123589bd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123589bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123589c2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123589c5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 123589c9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123589cc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123589cf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123589d2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123589d5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123589d8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123589db mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 123589de mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123589e1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123589e4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123589e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123589ea jne 0x12358a04 */
  if (!C.zf) goto L_12358a04;
  /* 123589ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123589f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123589f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123589f6 not edx */
  EDX = (~(EDX));
  /* 123589f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123589fb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123589fd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123589ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358a02 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12358a04:;
  /* 12358a04 jmp 0x12358a71 */
  goto L_12358a71;
L_12358a06:;
  /* 12358a06 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12358a09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358a0c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12358a11 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12358a13 not eax */
  EAX = (~(EAX));
  /* 12358a15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358a18 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358a1b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12358a22 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12358a24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358a27 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358a2a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12358a31 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358a34 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358a37 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12358a3a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12358a3d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358a40 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358a43 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12358a46 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358a49 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358a4c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12358a50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12358a52 jne 0x12358a71 */
  if (!C.zf) goto L_12358a71;
  /* 12358a54 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12358a57 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358a5a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12358a5f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12358a61 not eax */
  EAX = (~(EAX));
  /* 12358a63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358a66 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12358a69 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12358a6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358a6e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12358a71:;
  /* 12358a71 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12358a74 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12358a77 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12358a7a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12358a7d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12358a80 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12358a83 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12358a86 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12358a89 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12358a8c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12358a8f:;
  /* 12358a8f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12358a92 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12358a95:;
  /* 12358a95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12358a98 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12358a9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12358a9d jne 0x12358aab */
  if (!C.zf) goto L_12358aab;
  /* 12358a9f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12358aa2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358aa5 je 0x12358bbb */
  if (C.zf) goto L_12358bbb;
L_12358aab:;
  /* 12358aab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12358aae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358ab1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12358ab4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12358ab7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358aba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12358abd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12358ac0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12358ac3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358ac6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12358ac9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12358acc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12358acf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358ad2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12358ad5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358ad8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12358adb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358ade mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12358ae1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358ae4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358ae7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12358aea cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358aed jne 0x12358bbb */
  if (!C.zf) goto L_12358bbb;
  /* 12358af3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358af7 jae 0x12358b54 */
  if (!C.cf) goto L_12358b54;
  /* 12358af9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358afc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358aff movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12358b03 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358b06 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358b09 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12358b0c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12358b0f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358b12 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358b15 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12358b18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12358b1a jne 0x12358b32 */
  if (!C.zf) goto L_12358b32;
  /* 12358b1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12358b21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12358b24 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12358b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358b29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12358b2b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12358b2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358b30 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12358b32:;
  /* 12358b32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12358b37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12358b3a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12358b3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358b3f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358b42 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12358b46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12358b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358b4b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358b4e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12358b52 jmp 0x12358bbb */
  goto L_12358bbb;
L_12358b54:;
  /* 12358b54 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358b57 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358b5a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12358b5e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358b61 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358b64 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12358b67 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12358b6a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358b6d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358b70 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12358b73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12358b75 jne 0x12358b92 */
  if (!C.zf) goto L_12358b92;
  /* 12358b77 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12358b7a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358b7d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12358b82 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12358b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358b87 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12358b8a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12358b8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358b8f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12358b92:;
  /* 12358b92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12358b95 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358b98 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12358b9d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12358b9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358ba2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358ba5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12358bac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12358bae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358bb1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12358bb4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12358bbb:;
  /* 12358bbb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358bbe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358bc1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12358bc3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358bc6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358bc9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358bcc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12358bcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358bd2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12358bd4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358bd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358bda mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12358bdc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358bdf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358be2 jne 0x12358d49 */
  if (!C.zf) goto L_12358d49;
  /* 12358be8 cmp dword ptr [0x12381f00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12381f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358bef je 0x12358d38 */
  if (C.zf) goto L_12358d38;
  /* 12358bf5 mov eax, dword ptr [0x12381ef8] */
  EAX = (r32((uint32_t)(0x12381ef8)));
  /* 12358bfa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12358bfd mov ecx, dword ptr [0x12381f00] */
  ECX = (r32((uint32_t)(0x12381f00)));
  /* 12358c03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12358c06 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358c08 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12358c0b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12358c10 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12358c15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358c18 push eax */
  push32((uint32_t)(EAX));
  /* 12358c19 call dword ptr [0x12383340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383340))), 0x12358c1fu);
  /* 12358c1f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12358c24 mov ecx, dword ptr [0x12381ef8] */
  ECX = (r32((uint32_t)(0x12381ef8)));
  /* 12358c2a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12358c2c mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12358c31 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12358c34 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12358c36 mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12358c3c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12358c3f mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12358c44 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12358c47 mov edx, dword ptr [0x12381ef8] */
  EDX = (r32((uint32_t)(0x12381ef8)));
  /* 12358c4d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12358c58 mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12358c5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12358c60 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12358c63 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12358c66 mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12358c6b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12358c6e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12358c71 mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12358c77 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12358c7a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12358c7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12358c80 jne 0x12358c96 */
  if (!C.zf) goto L_12358c96;
  /* 12358c82 mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12358c88 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12358c8b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12358c8d mov ecx, dword ptr [0x12381f00] */
  ECX = (r32((uint32_t)(0x12381f00)));
  /* 12358c93 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12358c96:;
  /* 12358c96 mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12358c9c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358ca0 jne 0x12358d38 */
  if (!C.zf) goto L_12358d38;
  /* 12358ca6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12358cab push 0 */
  push32((uint32_t)(0x0u));
  /* 12358cad mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12358cb2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12358cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12358cb6 call dword ptr [0x12383340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383340))), 0x12358cbcu);
  /* 12358cbc mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12358cc2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12358cc5 push eax */
  push32((uint32_t)(EAX));
  /* 12358cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12358cc8 mov ecx, dword ptr [0x12381f0c] */
  ECX = (r32((uint32_t)(0x12381f0c)));
  /* 12358cce push ecx */
  push32((uint32_t)(ECX));
  /* 12358ccf call dword ptr [0x1238333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238333c))), 0x12358cd5u);
  /* 12358cd5 mov edx, dword ptr [0x12381f04] */
  EDX = (r32((uint32_t)(0x12381f04)));
  /* 12358cdb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12358cde mov eax, dword ptr [0x12381f08] */
  EAX = (r32((uint32_t)(0x12381f08)));
  /* 12358ce3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358ce5 mov ecx, dword ptr [0x12381f00] */
  ECX = (r32((uint32_t)(0x12381f00)));
  /* 12358ceb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358cee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358cf0 push eax */
  push32((uint32_t)(EAX));
  /* 12358cf1 mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12358cf7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358cfa push edx */
  push32((uint32_t)(EDX));
  /* 12358cfb mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12358d00 push eax */
  push32((uint32_t)(EAX));
  /* 12358d01 call 0x1235c2b0 */
  push32(0x12358d06u); f_1235c2b0();
  /* 12358d06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358d09 mov ecx, dword ptr [0x12381f04] */
  ECX = (r32((uint32_t)(0x12381f04)));
  /* 12358d0f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358d12 mov dword ptr [0x12381f04], ecx */
  w32((uint32_t)(0x12381f04), (ECX));
  /* 12358d18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358d1b cmp edx, dword ptr [0x12381f00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12381f00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358d21 jbe 0x12358d2c */
  if ((C.cf||C.zf)) goto L_12358d2c;
  /* 12358d23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358d26 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358d29 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12358d2c:;
  /* 12358d2c mov ecx, dword ptr [0x12381f08] */
  ECX = (r32((uint32_t)(0x12381f08)));
  /* 12358d32 mov dword ptr [0x12381efc], ecx */
  w32((uint32_t)(0x12381efc), (ECX));
L_12358d38:;
  /* 12358d38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358d3b mov dword ptr [0x12381f00], edx */
  w32((uint32_t)(0x12381f00), (EDX));
  /* 12358d41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358d44 mov dword ptr [0x12381ef8], eax */
  w32((uint32_t)(0x12381ef8), (EAX));
L_12358d49:;
  /* 12358d49 mov esp, ebp */
  ESP = (EBP);
  /* 12358d4b pop ebp */
  EBP = (pop32());
  /* 12358d4c ret  */
  ESPCHK(0x12358780u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d50 @ 0x12358d50 (1334 bytes, 427 insns) */
void f_12358d50(void) {
  FTRACE(0x12358d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12358d51 mov ebp, esp */
  EBP = (ESP);
  /* 12358d53 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358d56 push esi */
  push32((uint32_t)(ESI));
  /* 12358d57 mov eax, dword ptr [0x12381f04] */
  EAX = (r32((uint32_t)(0x12381f04)));
  /* 12358d5c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12358d5f mov ecx, dword ptr [0x12381f08] */
  ECX = (r32((uint32_t)(0x12381f08)));
  /* 12358d65 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358d67 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12358d6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358d6d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358d70 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12358d73 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12358d76 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12358d79 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12358d7c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358d7f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12358d82 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358d86 jge 0x12358d9c */
  if ((C.sf==C.of)) goto L_12358d9c;
  /* 12358d88 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12358d8b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12358d8e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12358d90 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12358d93 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12358d9a jmp 0x12358db1 */
  goto L_12358db1;
L_12358d9c:;
  /* 12358d9c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12358da3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12358da6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358da9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12358dac shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12358dae mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12358db1:;
  /* 12358db1 mov ecx, dword ptr [0x12381efc] */
  ECX = (r32((uint32_t)(0x12381efc)));
  /* 12358db7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12358dba:;
  /* 12358dba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358dbd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358dc0 jae 0x12358de6 */
  if (!C.cf) goto L_12358de6;
  /* 12358dc2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358dc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12358dc8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12358dca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358dcd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12358dd0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12358dd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12358dd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12358dd7 je 0x12358ddb */
  if (C.zf) goto L_12358ddb;
  /* 12358dd9 jmp 0x12358de6 */
  goto L_12358de6;
L_12358ddb:;
  /* 12358ddb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358dde add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358de1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12358de4 jmp 0x12358dba */
  goto L_12358dba;
L_12358de6:;
  /* 12358de6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358de9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358dec jne 0x12358ecd */
  if (!C.zf) goto L_12358ecd;
  /* 12358df2 mov eax, dword ptr [0x12381f08] */
  EAX = (r32((uint32_t)(0x12381f08)));
  /* 12358df7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12358dfa:;
  /* 12358dfa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358dfd cmp ecx, dword ptr [0x12381efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12381efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358e03 jae 0x12358e29 */
  if (!C.cf) goto L_12358e29;
  /* 12358e05 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12358e0b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12358e0d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e10 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12358e13 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12358e16 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12358e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12358e1a je 0x12358e1e */
  if (C.zf) goto L_12358e1e;
  /* 12358e1c jmp 0x12358e29 */
  goto L_12358e29;
L_12358e1e:;
  /* 12358e1e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e21 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358e24 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12358e27 jmp 0x12358dfa */
  goto L_12358dfa;
L_12358e29:;
  /* 12358e29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e2c cmp ecx, dword ptr [0x12381efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12381efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358e32 jne 0x12358ecd */
  if (!C.zf) goto L_12358ecd;
L_12358e38:;
  /* 12358e38 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e3b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358e3e jae 0x12358e56 */
  if (!C.cf) goto L_12358e56;
  /* 12358e40 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e43 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358e47 je 0x12358e4b */
  if (C.zf) goto L_12358e4b;
  /* 12358e49 jmp 0x12358e56 */
  goto L_12358e56;
L_12358e4b:;
  /* 12358e4b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e4e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358e51 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12358e54 jmp 0x12358e38 */
  goto L_12358e38;
L_12358e56:;
  /* 12358e56 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e59 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358e5c jne 0x12358ea7 */
  if (!C.zf) goto L_12358ea7;
  /* 12358e5e mov eax, dword ptr [0x12381f08] */
  EAX = (r32((uint32_t)(0x12381f08)));
  /* 12358e63 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12358e66:;
  /* 12358e66 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e69 cmp ecx, dword ptr [0x12381efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12381efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358e6f jae 0x12358e87 */
  if (!C.cf) goto L_12358e87;
  /* 12358e71 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e74 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358e78 je 0x12358e7c */
  if (C.zf) goto L_12358e7c;
  /* 12358e7a jmp 0x12358e87 */
  goto L_12358e87;
L_12358e7c:;
  /* 12358e7c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e7f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358e82 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12358e85 jmp 0x12358e66 */
  goto L_12358e66;
L_12358e87:;
  /* 12358e87 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358e8a cmp ecx, dword ptr [0x12381efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12381efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358e90 jne 0x12358ea7 */
  if (!C.zf) goto L_12358ea7;
  /* 12358e92 call 0x12359290 */
  push32(0x12358e97u); f_12359290();
  /* 12358e97 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12358e9a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358e9e jne 0x12358ea7 */
  if (!C.zf) goto L_12358ea7;
  /* 12358ea0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12358ea2 jmp 0x12359281 */
  goto L_12359281;
L_12358ea7:;
  /* 12358ea7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358eaa push edx */
  push32((uint32_t)(EDX));
  /* 12358eab call 0x123593a0 */
  push32(0x12358eb0u); f_123593a0();
  /* 12358eb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358eb3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358eb6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12358eb9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12358ebb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358ebe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12358ec1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358ec4 jne 0x12358ecd */
  if (!C.zf) goto L_12358ecd;
  /* 12358ec6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12358ec8 jmp 0x12359281 */
  goto L_12359281;
L_12358ecd:;
  /* 12358ecd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358ed0 mov dword ptr [0x12381efc], edx */
  w32((uint32_t)(0x12381efc), (EDX));
  /* 12358ed6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358ed9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12358edc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12358edf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358ee2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12358ee4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12358ee7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358eeb je 0x12358f10 */
  if (C.zf) goto L_12358f10;
  /* 12358eed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358ef0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358ef3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12358ef6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12358efa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358efd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358f00 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12358f03 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12358f0a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12358f0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12358f0e jne 0x12358f45 */
  if (!C.zf) goto L_12358f45;
L_12358f10:;
  /* 12358f10 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12358f17:;
  /* 12358f17 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358f1a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358f1d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12358f20 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12358f24 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358f27 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358f2a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12358f2d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12358f34 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12358f36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12358f38 jne 0x12358f45 */
  if (!C.zf) goto L_12358f45;
  /* 12358f3a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358f3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358f40 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12358f43 jmp 0x12358f17 */
  goto L_12358f17;
L_12358f45:;
  /* 12358f45 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358f48 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12358f4e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358f51 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12358f58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12358f5b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12358f62 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358f65 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358f68 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12358f6b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12358f6f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12358f72 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358f76 jne 0x12358f92 */
  if (!C.zf) goto L_12358f92;
  /* 12358f78 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12358f7f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12358f82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12358f85 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12358f88 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12358f8f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12358f92:;
  /* 12358f92 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358f96 jl 0x12358fab */
  if ((C.sf!=C.of)) goto L_12358fab;
  /* 12358f98 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12358f9b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12358f9d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12358fa0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12358fa3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358fa6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12358fa9 jmp 0x12358f92 */
  goto L_12358f92;
L_12358fab:;
  /* 12358fab mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12358fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358fb1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12358fb5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12358fb8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12358fbb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12358fbd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358fc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12358fc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358fc6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12358fc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358fcc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12358fcf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358fd3 jle 0x12358fdc */
  if ((C.zf||C.sf!=C.of)) goto L_12358fdc;
  /* 12358fd5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12358fdc:;
  /* 12358fdc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12358fdf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358fe2 je 0x12359200 */
  if (C.zf) goto L_12359200;
  /* 12358fe8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12358feb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12358fee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12358ff1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358ff4 jne 0x123590ca */
  if (!C.zf) goto L_123590ca;
  /* 12358ffa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358ffe jge 0x1235905f */
  if ((C.sf==C.of)) goto L_1235905f;
  /* 12359000 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12359005 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12359008 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1235900a not eax */
  EAX = (~(EAX));
  /* 1235900c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235900f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359012 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12359016 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12359018 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235901b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1235901e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12359022 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359025 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359028 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1235902b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1235902e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359031 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359034 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12359037 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1235903a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235903d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12359041 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12359043 jne 0x1235905d */
  if (!C.zf) goto L_1235905d;
  /* 12359045 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1235904a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235904d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1235904f not eax */
  EAX = (~(EAX));
  /* 12359051 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359054 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12359056 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12359058 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235905b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1235905d:;
  /* 1235905d jmp 0x123590ca */
  goto L_123590ca;
L_1235905f:;
  /* 1235905f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12359062 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359065 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1235906a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1235906c not edx */
  EDX = (~(EDX));
  /* 1235906e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359071 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359074 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1235907b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1235907d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359080 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359083 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1235908a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1235908d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359090 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12359093 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12359096 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359099 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235909c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1235909f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123590a2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123590a5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123590a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123590ab jne 0x123590ca */
  if (!C.zf) goto L_123590ca;
  /* 123590ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123590b0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123590b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123590b8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123590ba not edx */
  EDX = (~(EDX));
  /* 123590bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123590bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123590c2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123590c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123590c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_123590ca:;
  /* 123590ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123590cd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123590d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123590d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123590d6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 123590d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123590dc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123590df mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123590e2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123590e5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123590e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123590ec je 0x12359200 */
  if (C.zf) goto L_12359200;
  /* 123590f2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123590f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123590f8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 123590fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123590fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359101 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12359104 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12359107 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1235910a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235910d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12359110 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12359113 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12359116 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359119 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1235911c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235911f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12359122 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359125 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12359128 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235912b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235912e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12359131 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359134 jne 0x12359200 */
  if (!C.zf) goto L_12359200;
  /* 1235913a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235913e jge 0x1235919a */
  if ((C.sf==C.of)) goto L_1235919a;
  /* 12359140 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359143 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359146 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1235914a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1235914d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359150 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12359153 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12359155 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359158 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235915b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1235915e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12359160 jne 0x12359178 */
  if (!C.zf) goto L_12359178;
  /* 12359162 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12359167 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235916a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1235916c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235916f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12359171 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12359173 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359176 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12359178:;
  /* 12359178 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1235917d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12359182 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359185 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359188 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1235918c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1235918e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359191 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359194 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12359198 jmp 0x12359200 */
  goto L_12359200;
L_1235919a:;
  /* 1235919a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1235919d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123591a0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123591a4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123591a7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123591aa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 123591ad add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123591af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123591b2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123591b5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 123591b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123591ba jne 0x123591d7 */
  if (!C.zf) goto L_123591d7;
  /* 123591bc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123591bf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123591c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123591c7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123591c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123591cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123591cf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123591d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123591d4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_123591d7:;
  /* 123591d7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123591da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123591dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123591e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123591e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123591e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123591ea mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 123591f1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123591f3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123591f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123591f9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12359200:;
  /* 12359200 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359204 je 0x1235921a */
  if (C.zf) goto L_1235921a;
  /* 12359206 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359209 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235920c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1235920e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359211 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359214 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12359217 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1235921a:;
  /* 1235921a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235921d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359220 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12359223 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359226 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359229 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235922c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1235922e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359231 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359234 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359237 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235923a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1235923d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359240 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12359242 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359245 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12359247 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235924a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235924d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1235924f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12359251 jne 0x12359273 */
  if (!C.zf) goto L_12359273;
  /* 12359253 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359256 cmp eax, dword ptr [0x12381f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12381f00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235925c jne 0x12359273 */
  if (!C.zf) goto L_12359273;
  /* 1235925e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359261 cmp ecx, dword ptr [0x12381ef8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12381ef8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359267 jne 0x12359273 */
  if (!C.zf) goto L_12359273;
  /* 12359269 mov dword ptr [0x12381f00], 0 */
  w32((uint32_t)(0x12381f00), (0x0u));
L_12359273:;
  /* 12359273 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12359276 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359279 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1235927b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235927e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12359281:;
  /* 12359281 pop esi */
  ESI = (pop32());
  /* 12359282 mov esp, ebp */
  ESP = (EBP);
  /* 12359284 pop ebp */
  EBP = (pop32());
  /* 12359285 ret  */
  ESPCHK(0x12358d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009290 @ 0x12359290 (271 bytes, 78 insns) */
void f_12359290(void) {
  FTRACE(0x12359290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12359290 push ebp */
  push32((uint32_t)(EBP));
  /* 12359291 mov ebp, esp */
  EBP = (ESP);
  /* 12359293 push ecx */
  push32((uint32_t)(ECX));
  /* 12359294 mov eax, dword ptr [0x12381f04] */
  EAX = (r32((uint32_t)(0x12381f04)));
  /* 12359299 cmp eax, dword ptr [0x12381ee8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12381ee8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235929f jne 0x123592eb */
  if (!C.zf) goto L_123592eb;
  /* 123592a1 mov ecx, dword ptr [0x12381ee8] */
  ECX = (r32((uint32_t)(0x12381ee8)));
  /* 123592a7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123592aa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123592ad push ecx */
  push32((uint32_t)(ECX));
  /* 123592ae mov edx, dword ptr [0x12381f08] */
  EDX = (r32((uint32_t)(0x12381f08)));
  /* 123592b4 push edx */
  push32((uint32_t)(EDX));
  /* 123592b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123592b7 mov eax, dword ptr [0x12381f0c] */
  EAX = (r32((uint32_t)(0x12381f0c)));
  /* 123592bc push eax */
  push32((uint32_t)(EAX));
  /* 123592bd call dword ptr [0x1238335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238335c))), 0x123592c3u);
  /* 123592c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123592c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123592ca jne 0x123592d3 */
  if (!C.zf) goto L_123592d3;
  /* 123592cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123592ce jmp 0x1235939b */
  goto L_1235939b;
L_123592d3:;
  /* 123592d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123592d6 mov dword ptr [0x12381f08], ecx */
  w32((uint32_t)(0x12381f08), (ECX));
  /* 123592dc mov edx, dword ptr [0x12381ee8] */
  EDX = (r32((uint32_t)(0x12381ee8)));
  /* 123592e2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123592e5 mov dword ptr [0x12381ee8], edx */
  w32((uint32_t)(0x12381ee8), (EDX));
L_123592eb:;
  /* 123592eb mov eax, dword ptr [0x12381f04] */
  EAX = (r32((uint32_t)(0x12381f04)));
  /* 123592f0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123592f3 mov ecx, dword ptr [0x12381f08] */
  ECX = (r32((uint32_t)(0x12381f08)));
  /* 123592f9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123592fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123592fe push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12359303 push 8 */
  push32((uint32_t)(0x8u));
  /* 12359305 mov edx, dword ptr [0x12381f0c] */
  EDX = (r32((uint32_t)(0x12381f0c)));
  /* 1235930b push edx */
  push32((uint32_t)(EDX));
  /* 1235930c call dword ptr [0x12383344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383344))), 0x12359312u);
  /* 12359312 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359315 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12359318 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235931b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235931f jne 0x12359325 */
  if (!C.zf) goto L_12359325;
  /* 12359321 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12359323 jmp 0x1235939b */
  goto L_1235939b;
L_12359325:;
  /* 12359325 push 4 */
  push32((uint32_t)(0x4u));
  /* 12359327 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1235932c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12359331 push 0 */
  push32((uint32_t)(0x0u));
  /* 12359333 call dword ptr [0x12383360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383360))), 0x12359339u);
  /* 12359339 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235933c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1235933f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359342 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359346 jne 0x12359362 */
  if (!C.zf) goto L_12359362;
  /* 12359348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235934b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1235934e push ecx */
  push32((uint32_t)(ECX));
  /* 1235934f push 0 */
  push32((uint32_t)(0x0u));
  /* 12359351 mov edx, dword ptr [0x12381f0c] */
  EDX = (r32((uint32_t)(0x12381f0c)));
  /* 12359357 push edx */
  push32((uint32_t)(EDX));
  /* 12359358 call dword ptr [0x1238333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238333c))), 0x1235935eu);
  /* 1235935e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12359360 jmp 0x1235939b */
  goto L_1235939b;
L_12359362:;
  /* 12359362 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359365 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235936b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235936e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12359375 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359378 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1235937f mov eax, dword ptr [0x12381f04] */
  EAX = (r32((uint32_t)(0x12381f04)));
  /* 12359384 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359387 mov dword ptr [0x12381f04], eax */
  w32((uint32_t)(0x12381f04), (EAX));
  /* 1235938c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235938f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12359392 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12359398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1235939b:;
  /* 1235939b mov esp, ebp */
  ESP = (EBP);
  /* 1235939d pop ebp */
  EBP = (pop32());
  /* 1235939e ret  */
  ESPCHK(0x12359290u, _esp0);
  ESP += 4; return;
}

/* FUN_100093a0 @ 0x123593a0 (494 bytes, 149 insns) */
void f_123593a0(void) {
  FTRACE(0x123593a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123593a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123593a1 mov ebp, esp */
  EBP = (ESP);
  /* 123593a3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123593a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123593a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123593ac mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 123593af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123593b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123593b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123593b8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_123593bf:;
  /* 123593bf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123593c3 jl 0x123593d8 */
  if ((C.sf!=C.of)) goto L_123593d8;
  /* 123593c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123593c8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 123593ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123593cd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123593d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123593d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 123593d6 jmp 0x123593bf */
  goto L_123593bf;
L_123593d8:;
  /* 123593d8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123593db imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123593e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123593e4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 123593eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123593ee mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123593f5 jmp 0x12359400 */
  goto L_12359400;
L_123593f7:;
  /* 123593f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123593fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123593fd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12359400:;
  /* 12359400 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359404 jge 0x12359426 */
  if ((C.sf==C.of)) goto L_12359426;
  /* 12359406 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12359409 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235940c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1235940f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12359412 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359415 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359418 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1235941b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235941e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359421 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12359424 jmp 0x123593f7 */
  goto L_123593f7;
L_12359426:;
  /* 12359426 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359429 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1235942c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235942f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12359432 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359434 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12359437 push 4 */
  push32((uint32_t)(0x4u));
  /* 12359439 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1235943e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12359443 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359446 push edx */
  push32((uint32_t)(EDX));
  /* 12359447 call dword ptr [0x12383360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383360))), 0x1235944du);
  /* 1235944d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235944f jne 0x12359459 */
  if (!C.zf) goto L_12359459;
  /* 12359451 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12359454 jmp 0x1235958a */
  goto L_1235958a;
L_12359459:;
  /* 12359459 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235945c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359461 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12359464 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359467 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235946a jmp 0x12359478 */
  goto L_12359478;
L_1235946c:;
  /* 1235946c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235946f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359475 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12359478:;
  /* 12359478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235947b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235947e ja 0x123594dd */
  if ((!C.cf&&!C.zf)) goto L_123594dd;
  /* 12359480 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359483 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1235948a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235948d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12359497 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235949a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235949d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123594a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123594a3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 123594a9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123594ac add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123594b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123594b5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123594b8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123594bb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123594c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123594c4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123594c7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123594ca add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123594cf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123594d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123594d5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 123594db jmp 0x1235946c */
  goto L_1235946c;
L_123594dd:;
  /* 123594dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123594e0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123594e6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123594e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123594ec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123594ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123594f2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 123594f5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123594f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123594fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123594fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359501 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359504 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12359507 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235950a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235950d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359510 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12359513 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359516 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12359519 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1235951c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235951f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359522 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12359525 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359528 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235952b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12359533 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359536 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359539 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12359544 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359547 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1235954b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235954e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12359551 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12359554 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359557 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1235955a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235955c jne 0x1235956d */
  if (!C.zf) goto L_1235956d;
  /* 1235955e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12359561 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12359564 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12359567 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235956a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1235956d:;
  /* 1235956d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12359572 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359575 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12359577 not edx */
  EDX = (~(EDX));
  /* 12359579 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235957c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1235957f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12359581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12359584 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12359587 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1235958a:;
  /* 1235958a mov esp, ebp */
  ESP = (EBP);
  /* 1235958c pop ebp */
  EBP = (pop32());
  /* 1235958d ret  */
  ESPCHK(0x123593a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009590 @ 0x12359590 (1515 bytes, 489 insns) */
void f_12359590(void) {
  FTRACE(0x12359590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12359590 push ebp */
  push32((uint32_t)(EBP));
  /* 12359591 mov ebp, esp */
  EBP = (ESP);
  /* 12359593 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359596 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12359599 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235959c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1235959e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123595a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123595a4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 123595a7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 123595aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123595ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123595b0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123595b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123595b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123595b9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 123595bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123595bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123595c2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123595c8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123595cb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 123595d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123595d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123595d8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123595db mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123595de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123595e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123595e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123595e6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 123595e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123595ec add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123595ef mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 123595f2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123595f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123595f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123595fa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123595fd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359600 jle 0x123598b6 */
  if ((C.zf||C.sf!=C.of)) goto L_123598b6;
  /* 12359606 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359609 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1235960c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235960e jne 0x1235961b */
  if (!C.zf) goto L_1235961b;
  /* 12359610 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359613 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359616 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359619 jle 0x12359622 */
  if ((C.zf||C.sf!=C.of)) goto L_12359622;
L_1235961b:;
  /* 1235961b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235961d jmp 0x12359b77 */
  goto L_12359b77;
L_12359622:;
  /* 12359622 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359625 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12359628 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235962b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1235962e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359632 jbe 0x1235963b */
  if ((C.cf||C.zf)) goto L_1235963b;
  /* 12359634 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1235963b:;
  /* 1235963b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235963e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359641 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12359644 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359647 jne 0x1235971d */
  if (!C.zf) goto L_1235971d;
  /* 1235964d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359651 jae 0x123596b2 */
  if (!C.cf) goto L_123596b2;
  /* 12359653 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12359658 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235965b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1235965d not edx */
  EDX = (~(EDX));
  /* 1235965f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359662 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359665 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12359669 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1235966b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235966e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359671 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12359675 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359678 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235967b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1235967e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12359681 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359684 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359687 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1235968a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235968d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359690 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12359694 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12359696 jne 0x123596b0 */
  if (!C.zf) goto L_123596b0;
  /* 12359698 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1235969d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123596a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123596a2 not edx */
  EDX = (~(EDX));
  /* 123596a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123596a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123596a9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123596ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123596ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123596b0:;
  /* 123596b0 jmp 0x1235971d */
  goto L_1235971d;
L_123596b2:;
  /* 123596b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123596b5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123596b8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123596bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123596bf not eax */
  EAX = (~(EAX));
  /* 123596c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123596c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123596c7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 123596ce and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123596d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123596d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123596d6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 123596dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123596e0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123596e3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 123596e6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123596e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123596ec add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123596ef mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 123596f2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123596f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123596f8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123596fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123596fe jne 0x1235971d */
  if (!C.zf) goto L_1235971d;
  /* 12359700 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12359703 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359706 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1235970b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1235970d not eax */
  EAX = (~(EAX));
  /* 1235970f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12359712 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12359715 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12359717 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235971a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1235971d:;
  /* 1235971d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359720 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12359723 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359726 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12359729 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1235972c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235972f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12359732 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359735 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12359738 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1235973b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235973e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359741 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359744 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12359747 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235974b jle 0x12359897 */
  if ((C.zf||C.sf!=C.of)) goto L_12359897;
  /* 12359751 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359754 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359757 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1235975a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235975d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12359760 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359763 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12359766 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235976a jbe 0x12359773 */
  if ((C.cf||C.zf)) goto L_12359773;
  /* 1235976c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12359773:;
  /* 12359773 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12359776 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12359779 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1235977c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1235977f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359782 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359785 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12359788 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1235978b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235978e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359791 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12359794 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359797 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235979a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1235979d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123597a0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123597a3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123597a6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123597a9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123597ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123597af mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 123597b2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123597b5 jne 0x12359883 */
  if (!C.zf) goto L_12359883;
  /* 123597bb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123597bf jae 0x1235981c */
  if (!C.cf) goto L_1235981c;
  /* 123597c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123597c4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123597c7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123597cb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123597ce add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123597d1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123597d4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 123597d7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123597da add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123597dd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 123597e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123597e2 jne 0x123597fa */
  if (!C.zf) goto L_123597fa;
  /* 123597e4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123597e9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123597ec shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123597ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123597f1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123597f3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123597f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123597f8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123597fa:;
  /* 123597fa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123597ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12359802 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12359804 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359807 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235980a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1235980e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12359810 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359813 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359816 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1235981a jmp 0x12359883 */
  goto L_12359883;
L_1235981c:;
  /* 1235981c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235981f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359822 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12359826 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359829 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235982c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1235982f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12359832 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359835 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359838 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1235983b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235983d jne 0x1235985a */
  if (!C.zf) goto L_1235985a;
  /* 1235983f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12359842 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359845 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1235984a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1235984c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235984f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12359852 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12359854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12359857 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1235985a:;
  /* 1235985a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235985d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359860 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12359865 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12359867 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235986a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235986d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12359874 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12359876 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359879 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235987c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12359883:;
  /* 12359883 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359886 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359889 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1235988b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235988e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359891 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359894 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12359897:;
  /* 12359897 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235989a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235989d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123598a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123598a2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123598a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123598a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123598ab add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123598ae mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 123598b1 jmp 0x12359b72 */
  goto L_12359b72;
L_123598b6:;
  /* 123598b6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123598b9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123598bc jge 0x12359b72 */
  if ((C.sf==C.of)) goto L_12359b72;
  /* 123598c2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123598c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123598c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123598cb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123598cd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123598d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123598d3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123598d6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123598d9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 123598dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123598df add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123598e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123598e5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123598e8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123598eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123598ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123598f1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 123598f4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123598f7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123598fa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123598fe jbe 0x12359907 */
  if ((C.cf||C.zf)) goto L_12359907;
  /* 12359900 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12359907:;
  /* 12359907 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235990a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1235990d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235990f jne 0x12359a50 */
  if (!C.zf) goto L_12359a50;
  /* 12359915 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12359918 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1235991b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235991e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12359921 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359925 jbe 0x1235992e */
  if ((C.cf||C.zf)) goto L_1235992e;
  /* 12359927 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1235992e:;
  /* 1235992e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359931 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359934 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12359937 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235993a jne 0x12359a10 */
  if (!C.zf) goto L_12359a10;
  /* 12359940 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359944 jae 0x123599a5 */
  if (!C.cf) goto L_123599a5;
  /* 12359946 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1235994b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235994e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12359950 not edx */
  EDX = (~(EDX));
  /* 12359952 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359955 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359958 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1235995c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1235995e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359961 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359964 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12359968 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235996b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235996e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12359971 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12359974 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359977 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235997a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1235997d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359980 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359983 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12359987 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12359989 jne 0x123599a3 */
  if (!C.zf) goto L_123599a3;
  /* 1235998b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12359990 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12359993 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12359995 not edx */
  EDX = (~(EDX));
  /* 12359997 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235999a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235999c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1235999e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123599a1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123599a3:;
  /* 123599a3 jmp 0x12359a10 */
  goto L_12359a10;
L_123599a5:;
  /* 123599a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123599a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123599ab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123599b0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123599b2 not eax */
  EAX = (~(EAX));
  /* 123599b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123599b7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123599ba mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 123599c1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123599c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123599c6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123599c9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 123599d0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123599d3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123599d6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 123599d9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123599dc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123599df add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123599e2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 123599e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123599e8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123599eb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123599ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123599f1 jne 0x12359a10 */
  if (!C.zf) goto L_12359a10;
  /* 123599f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123599f6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123599f9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123599fe shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12359a00 not eax */
  EAX = (~(EAX));
  /* 12359a02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12359a05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12359a08 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12359a0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12359a0d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12359a10:;
  /* 12359a10 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359a13 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12359a16 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359a19 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12359a1c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12359a1f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359a22 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12359a25 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12359a28 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12359a2b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12359a2e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359a31 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359a34 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12359a37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359a3a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12359a3d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359a40 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12359a43 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359a47 jbe 0x12359a50 */
  if ((C.cf||C.zf)) goto L_12359a50;
  /* 12359a49 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12359a50:;
  /* 12359a50 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12359a53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12359a56 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12359a59 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12359a5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359a5f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359a62 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12359a65 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12359a68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359a6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359a6e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12359a71 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359a74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359a77 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12359a7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359a7d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12359a80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359a83 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12359a86 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359a89 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359a8c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12359a8f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359a92 jne 0x12359b5e */
  if (!C.zf) goto L_12359b5e;
  /* 12359a98 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359a9c jae 0x12359af8 */
  if (!C.cf) goto L_12359af8;
  /* 12359a9e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359aa1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359aa4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12359aa8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359aab add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359aae mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12359ab1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12359ab3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359ab6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359ab9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12359abc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12359abe jne 0x12359ad6 */
  if (!C.zf) goto L_12359ad6;
  /* 12359ac0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12359ac5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12359ac8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12359aca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12359acd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12359acf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12359ad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12359ad4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12359ad6:;
  /* 12359ad6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12359adb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12359ade shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12359ae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359ae3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359ae6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12359aea or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12359aec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359aef mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359af2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12359af6 jmp 0x12359b5e */
  goto L_12359b5e;
L_12359af8:;
  /* 12359af8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359afb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359afe movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12359b02 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359b05 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359b08 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12359b0b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12359b0d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359b10 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359b13 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12359b16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12359b18 jne 0x12359b35 */
  if (!C.zf) goto L_12359b35;
  /* 12359b1a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12359b1d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359b20 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12359b25 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12359b27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12359b2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12359b2d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12359b2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12359b32 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12359b35:;
  /* 12359b35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12359b38 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359b3b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12359b40 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12359b42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359b45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359b48 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12359b4f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12359b51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359b54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12359b57 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12359b5e:;
  /* 12359b5e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359b61 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359b64 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12359b66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359b69 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359b6c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12359b6f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12359b72:;
  /* 12359b72 mov eax, 1 */
  EAX = (0x1u);
L_12359b77:;
  /* 12359b77 mov esp, ebp */
  ESP = (EBP);
  /* 12359b79 pop ebp */
  EBP = (pop32());
  /* 12359b7a ret  */
  ESPCHK(0x12359590u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b80 @ 0x12359b80 (304 bytes, 79 insns) */
void f_12359b80(void) {
  FTRACE(0x12359b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12359b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12359b81 mov ebp, esp */
  EBP = (ESP);
  /* 12359b83 push ecx */
  push32((uint32_t)(ECX));
  /* 12359b84 cmp dword ptr [0x12381f00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12381f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359b8b je 0x12359cac */
  if (C.zf) goto L_12359cac;
  /* 12359b91 mov eax, dword ptr [0x12381ef8] */
  EAX = (r32((uint32_t)(0x12381ef8)));
  /* 12359b96 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12359b99 mov ecx, dword ptr [0x12381f00] */
  ECX = (r32((uint32_t)(0x12381f00)));
  /* 12359b9f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12359ba2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359ba4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12359ba7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12359bac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12359bb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12359bb4 push eax */
  push32((uint32_t)(EAX));
  /* 12359bb5 call dword ptr [0x12383340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383340))), 0x12359bbbu);
  /* 12359bbb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12359bc0 mov ecx, dword ptr [0x12381ef8] */
  ECX = (r32((uint32_t)(0x12381ef8)));
  /* 12359bc6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12359bc8 mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12359bcd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12359bd0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12359bd2 mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12359bd8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12359bdb mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12359be0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12359be3 mov edx, dword ptr [0x12381ef8] */
  EDX = (r32((uint32_t)(0x12381ef8)));
  /* 12359be9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12359bf4 mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12359bf9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12359bfc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12359bff sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12359c02 mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12359c07 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12359c0a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12359c0d mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12359c13 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12359c16 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12359c1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12359c1c jne 0x12359c32 */
  if (!C.zf) goto L_12359c32;
  /* 12359c1e mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12359c24 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12359c27 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12359c29 mov ecx, dword ptr [0x12381f00] */
  ECX = (r32((uint32_t)(0x12381f00)));
  /* 12359c2f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12359c32:;
  /* 12359c32 mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12359c38 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359c3c jne 0x12359ca2 */
  if (!C.zf) goto L_12359ca2;
  /* 12359c3e cmp dword ptr [0x12381f04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12381f04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359c45 jle 0x12359ca2 */
  if ((C.zf||C.sf!=C.of)) goto L_12359ca2;
  /* 12359c47 mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12359c4c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12359c4f push ecx */
  push32((uint32_t)(ECX));
  /* 12359c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12359c52 mov edx, dword ptr [0x12381f0c] */
  EDX = (r32((uint32_t)(0x12381f0c)));
  /* 12359c58 push edx */
  push32((uint32_t)(EDX));
  /* 12359c59 call dword ptr [0x1238333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238333c))), 0x12359c5fu);
  /* 12359c5f mov eax, dword ptr [0x12381f04] */
  EAX = (r32((uint32_t)(0x12381f04)));
  /* 12359c64 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12359c67 mov ecx, dword ptr [0x12381f08] */
  ECX = (r32((uint32_t)(0x12381f08)));
  /* 12359c6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359c6f mov edx, dword ptr [0x12381f00] */
  EDX = (r32((uint32_t)(0x12381f00)));
  /* 12359c75 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359c78 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359c7a push ecx */
  push32((uint32_t)(ECX));
  /* 12359c7b mov eax, dword ptr [0x12381f00] */
  EAX = (r32((uint32_t)(0x12381f00)));
  /* 12359c80 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359c83 push eax */
  push32((uint32_t)(EAX));
  /* 12359c84 mov ecx, dword ptr [0x12381f00] */
  ECX = (r32((uint32_t)(0x12381f00)));
  /* 12359c8a push ecx */
  push32((uint32_t)(ECX));
  /* 12359c8b call 0x1235c2b0 */
  push32(0x12359c90u); f_1235c2b0();
  /* 12359c90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12359c93 mov edx, dword ptr [0x12381f04] */
  EDX = (r32((uint32_t)(0x12381f04)));
  /* 12359c99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359c9c mov dword ptr [0x12381f04], edx */
  w32((uint32_t)(0x12381f04), (EDX));
L_12359ca2:;
  /* 12359ca2 mov dword ptr [0x12381f00], 0 */
  w32((uint32_t)(0x12381f00), (0x0u));
L_12359cac:;
  /* 12359cac mov esp, ebp */
  ESP = (EBP);
  /* 12359cae pop ebp */
  EBP = (pop32());
  /* 12359caf ret  */
  ESPCHK(0x12359b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cb0 @ 0x12359cb0 (1565 bytes, 343 insns) */
void f_12359cb0(void) {
  FTRACE(0x12359cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12359cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12359cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12359cb3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359cb9 mov eax, dword ptr [0x12381f04] */
  EAX = (r32((uint32_t)(0x12381f04)));
  /* 12359cbe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12359cc1 push eax */
  push32((uint32_t)(EAX));
  /* 12359cc2 mov ecx, dword ptr [0x12381f08] */
  ECX = (r32((uint32_t)(0x12381f08)));
  /* 12359cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12359cc9 call dword ptr [0x12383314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383314))), 0x12359ccfu);
  /* 12359ccf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12359cd1 je 0x12359cdb */
  if (C.zf) goto L_12359cdb;
  /* 12359cd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12359cd6 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_12359cdb:;
  /* 12359cdb mov edx, dword ptr [0x12381f08] */
  EDX = (r32((uint32_t)(0x12381f08)));
  /* 12359ce1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12359ce7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12359cf1 jmp 0x12359d02 */
  goto L_12359d02;
L_12359cf3:;
  /* 12359cf3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12359cf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359cfc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12359d02:;
  /* 12359d02 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12359d08 cmp ecx, dword ptr [0x12381f04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12381f04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359d0e jge 0x1235a2c7 */
  if ((C.sf==C.of)) goto L_1235a2c7;
  /* 12359d14 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12359d1a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12359d1d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12359d23 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12359d28 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12359d2e push ecx */
  push32((uint32_t)(ECX));
  /* 12359d2f call dword ptr [0x12383314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383314))), 0x12359d35u);
  /* 12359d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12359d37 je 0x12359d43 */
  if (C.zf) goto L_12359d43;
  /* 12359d39 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12359d3e jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_12359d43:;
  /* 12359d43 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12359d49 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12359d4c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12359d52 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12359d58 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359d5e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12359d61 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12359d67 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12359d6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12359d6d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12359d77 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12359d81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12359d88 jmp 0x12359d93 */
  goto L_12359d93;
L_12359d8a:;
  /* 12359d8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12359d8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359d90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12359d93:;
  /* 12359d93 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359d97 jge 0x1235a28b */
  if ((C.sf==C.of)) goto L_1235a28b;
  /* 12359d9d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12359da7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12359db1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12359dbb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12359dc5 jmp 0x12359dd6 */
  goto L_12359dd6;
L_12359dc7:;
  /* 12359dc7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12359dcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359dd0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12359dd6:;
  /* 12359dd6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359ddd jge 0x12359df2 */
  if ((C.sf==C.of)) goto L_12359df2;
  /* 12359ddf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12359de5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12359df0 jmp 0x12359dc7 */
  goto L_12359dc7;
L_12359df2:;
  /* 12359df2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359df6 jl 0x1235a22d */
  if ((C.sf!=C.of)) goto L_1235a22d;
  /* 12359dfc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12359e01 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12359e07 push ecx */
  push32((uint32_t)(ECX));
  /* 12359e08 call dword ptr [0x12383314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383314))), 0x12359e0eu);
  /* 12359e0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12359e10 je 0x12359e1c */
  if (C.zf) goto L_12359e1c;
  /* 12359e12 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12359e17 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_12359e1c:;
  /* 12359e1c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12359e22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12359e25 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12359e2f jmp 0x12359e40 */
  goto L_12359e40;
L_12359e31:;
  /* 12359e31 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12359e37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359e3a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12359e40:;
  /* 12359e40 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359e47 jge 0x12359fc4 */
  if ((C.sf==C.of)) goto L_12359fc4;
  /* 12359e4d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12359e50 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359e53 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12359e59 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12359e5f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359e65 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12359e6b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12359e71 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359e75 jne 0x12359e82 */
  if (!C.zf) goto L_12359e82;
  /* 12359e77 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12359e7d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359e80 je 0x12359e8c */
  if (C.zf) goto L_12359e8c;
L_12359e82:;
  /* 12359e82 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12359e87 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_12359e8c:;
  /* 12359e8c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12359e92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12359e94 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12359e9a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12359ea0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12359ea6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12359eac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12359eaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12359eb1 je 0x12359ee9 */
  if (C.zf) goto L_12359ee9;
  /* 12359eb3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12359eb9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359ebc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12359ec2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359ecc jle 0x12359ed8 */
  if ((C.zf||C.sf!=C.of)) goto L_12359ed8;
  /* 12359ece mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12359ed3 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_12359ed8:;
  /* 12359ed8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12359ede add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359ee1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12359ee7 jmp 0x12359f2b */
  goto L_12359f2b;
L_12359ee9:;
  /* 12359ee9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12359eef sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12359ef2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12359ef5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12359efb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359f02 jle 0x12359f0e */
  if ((C.zf||C.sf!=C.of)) goto L_12359f0e;
  /* 12359f04 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12359f0e:;
  /* 12359f0e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12359f14 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12359f1b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359f1e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12359f24 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12359f2b:;
  /* 12359f2b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359f32 jl 0x12359f4d */
  if ((C.sf!=C.of)) goto L_12359f4d;
  /* 12359f34 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12359f3a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12359f3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12359f3f jne 0x12359f4d */
  if (!C.zf) goto L_12359f4d;
  /* 12359f41 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359f4b jle 0x12359f57 */
  if ((C.zf||C.sf!=C.of)) goto L_12359f57;
L_12359f4d:;
  /* 12359f4d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12359f52 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_12359f57:;
  /* 12359f57 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12359f5d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359f63 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12359f66 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359f6c je 0x12359f78 */
  if (C.zf) goto L_12359f78;
  /* 12359f6e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12359f73 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_12359f78:;
  /* 12359f78 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12359f7e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359f84 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12359f8a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12359f90 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359f96 jb 0x12359e8c */
  if (C.cf) goto L_12359e8c;
  /* 12359f9c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12359fa2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359fa8 je 0x12359fb4 */
  if (C.zf) goto L_12359fb4;
  /* 12359faa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12359faf jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_12359fb4:;
  /* 12359fb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12359fb7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359fbc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12359fbf jmp 0x12359e31 */
  goto L_12359e31;
L_12359fc4:;
  /* 12359fc4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359fc7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12359fc9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359fcf je 0x12359fdb */
  if (C.zf) goto L_12359fdb;
  /* 12359fd1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12359fd6 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_12359fdb:;
  /* 12359fdb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12359fde mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12359fe4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12359feb jmp 0x12359ff6 */
  goto L_12359ff6;
L_12359fed:;
  /* 12359fed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12359ff0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12359ff3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12359ff6:;
  /* 12359ff6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12359ffa jge 0x1235a22d */
  if ((C.sf==C.of)) goto L_1235a22d;
  /* 1235a000 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1235a00a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1235a010 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1235a016:;
  /* 1235a016 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1235a01c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1235a01f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1235a025 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1235a02b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a031 je 0x1235a15a */
  if (C.zf) goto L_1235a15a;
  /* 1235a037 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235a03a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1235a040 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a047 je 0x1235a15a */
  if (C.zf) goto L_1235a15a;
  /* 1235a04d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1235a053 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a059 jb 0x1235a06e */
  if (C.cf) goto L_1235a06e;
  /* 1235a05b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1235a061 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a066 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a06c jb 0x1235a078 */
  if (C.cf) goto L_1235a078;
L_1235a06e:;
  /* 1235a06e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1235a073 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_1235a078:;
  /* 1235a078 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1235a07e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1235a084 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1235a08a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1235a090 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a093 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1235a096 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235a099 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a09e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1235a0a4:;
  /* 1235a0a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235a0a7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a0ad je 0x1235a0ce */
  if (C.zf) goto L_1235a0ce;
  /* 1235a0af mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235a0b2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a0b8 jne 0x1235a0bc */
  if (!C.zf) goto L_1235a0bc;
  /* 1235a0ba jmp 0x1235a0ce */
  goto L_1235a0ce;
L_1235a0bc:;
  /* 1235a0bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235a0bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235a0c1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1235a0c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235a0c7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a0c9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1235a0cc jmp 0x1235a0a4 */
  goto L_1235a0a4;
L_1235a0ce:;
  /* 1235a0ce mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235a0d1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a0d7 jne 0x1235a0e3 */
  if (!C.zf) goto L_1235a0e3;
  /* 1235a0d9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1235a0de jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_1235a0e3:;
  /* 1235a0e3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1235a0e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1235a0eb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1235a0ee sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235a0f1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1235a0f7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a0fe jle 0x1235a10a */
  if ((C.zf||C.sf!=C.of)) goto L_1235a10a;
  /* 1235a100 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1235a10a:;
  /* 1235a10a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1235a110 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a113 je 0x1235a11f */
  if (C.zf) goto L_1235a11f;
  /* 1235a115 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1235a11a jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_1235a11f:;
  /* 1235a11f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1235a125 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1235a128 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a12e je 0x1235a13a */
  if (C.zf) goto L_1235a13a;
  /* 1235a130 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1235a135 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_1235a13a:;
  /* 1235a13a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1235a140 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1235a146 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1235a14c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a14f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1235a155 jmp 0x1235a016 */
  goto L_1235a016;
L_1235a15a:;
  /* 1235a15a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a161 je 0x1235a1d1 */
  if (C.zf) goto L_1235a1d1;
  /* 1235a163 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a167 jge 0x1235a19b */
  if ((C.sf==C.of)) goto L_1235a19b;
  /* 1235a169 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1235a16e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235a171 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1235a173 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1235a179 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a17b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1235a181 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1235a186 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235a189 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1235a18b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1235a191 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a193 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1235a199 jmp 0x1235a1d1 */
  goto L_1235a1d1;
L_1235a19b:;
  /* 1235a19b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235a19e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235a1a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1235a1a6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1235a1a8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1235a1ae or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a1b0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1235a1b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235a1b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235a1bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1235a1c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1235a1c3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1235a1c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a1cb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1235a1d1:;
  /* 1235a1d1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1235a1d7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1235a1da cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a1e0 jne 0x1235a1f4 */
  if (!C.zf) goto L_1235a1f4;
  /* 1235a1e2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235a1e5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1235a1eb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a1f2 je 0x1235a1fe */
  if (C.zf) goto L_1235a1fe;
L_1235a1f4:;
  /* 1235a1f4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1235a1f9 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_1235a1fe:;
  /* 1235a1fe mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1235a204 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1235a207 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a20d je 0x1235a219 */
  if (C.zf) goto L_1235a219;
  /* 1235a20f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1235a214 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_1235a219:;
  /* 1235a219 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1235a21f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a222 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1235a228 jmp 0x12359fed */
  goto L_12359fed;
L_1235a22d:;
  /* 1235a22d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235a230 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1235a236 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1235a23c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a240 jne 0x1235a25a */
  if (!C.zf) goto L_1235a25a;
  /* 1235a242 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235a245 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1235a24b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1235a251 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a258 je 0x1235a261 */
  if (C.zf) goto L_1235a261;
L_1235a25a:;
  /* 1235a25a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1235a25f jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_1235a261:;
  /* 1235a261 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1235a267 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a26d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1235a273 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235a276 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a27b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1235a27e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a281 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1235a283 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235a286 jmp 0x12359d8a */
  goto L_12359d8a;
L_1235a28b:;
  /* 1235a28b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1235a291 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1235a297 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a299 jne 0x1235a2ac */
  if (!C.zf) goto L_1235a2ac;
  /* 1235a29b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1235a2a1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1235a2a7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a2aa je 0x1235a2b3 */
  if (C.zf) goto L_1235a2b3;
L_1235a2ac:;
  /* 1235a2ac mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1235a2b1 jmp 0x1235a2c9 */
  goto L_1235a2c9;
L_1235a2b3:;
  /* 1235a2b3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1235a2b9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a2bc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1235a2c2 jmp 0x12359cf3 */
  goto L_12359cf3;
L_1235a2c7:;
  /* 1235a2c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235a2c9:;
  /* 1235a2c9 mov esp, ebp */
  ESP = (EBP);
  /* 1235a2cb pop ebp */
  EBP = (pop32());
  /* 1235a2cc ret  */
  ESPCHK(0x12359cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2d0 @ 0x1235a2d0 (250 bytes, 92 insns) */
void f_1235a2d0(void) {
  FTRACE(0x1235a2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235a2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235a2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1235a2d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235a2d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1235a2d7 push esi */
  push32((uint32_t)(ESI));
  /* 1235a2d8 push edi */
  push32((uint32_t)(EDI));
  /* 1235a2d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1235a2dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1235a2df lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1235a2e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1235a2e5:;
  /* 1235a2e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a2e9 jne 0x1235a309 */
  if (!C.zf) goto L_1235a309;
  /* 1235a2eb push 0x1237bf7c */
  push32((uint32_t)(0x1237bf7cu));
  /* 1235a2f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235a2f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1235a2f4 push 0x1237bf70 */
  push32((uint32_t)(0x1237bf70u));
  /* 1235a2f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235a2fb call 0x12353480 */
  push32(0x1235a300u); f_12353480();
  /* 1235a300 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a303 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a306 jne 0x1235a309 */
  if (!C.zf) goto L_1235a309;
  /* 1235a308 int3  */
  x86_unimpl("int3 @ 0x1235a308");
L_1235a309:;
  /* 1235a309 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235a30b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235a30d jne 0x1235a2e5 */
  if (!C.zf) goto L_1235a2e5;
L_1235a30f:;
  /* 1235a30f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a313 jne 0x1235a333 */
  if (!C.zf) goto L_1235a333;
  /* 1235a315 push 0x1237bf60 */
  push32((uint32_t)(0x1237bf60u));
  /* 1235a31a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235a31c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1235a31e push 0x1237bf70 */
  push32((uint32_t)(0x1237bf70u));
  /* 1235a323 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235a325 call 0x12353480 */
  push32(0x1235a32au); f_12353480();
  /* 1235a32a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a32d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a330 jne 0x1235a333 */
  if (!C.zf) goto L_1235a333;
  /* 1235a332 int3  */
  x86_unimpl("int3 @ 0x1235a332");
L_1235a333:;
  /* 1235a333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235a337 jne 0x1235a30f */
  if (!C.zf) goto L_1235a30f;
  /* 1235a339 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a33c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1235a343 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a349 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1235a34c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a34f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a352 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1235a354 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a357 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1235a35e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235a361 push ecx */
  push32((uint32_t)(ECX));
  /* 1235a362 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235a365 push edx */
  push32((uint32_t)(EDX));
  /* 1235a366 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a369 push eax */
  push32((uint32_t)(EAX));
  /* 1235a36a call 0x1235b350 */
  push32(0x1235a36fu); f_1235b350();
  /* 1235a36f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a372 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1235a375 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a378 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1235a37b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235a37e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a381 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1235a384 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a387 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a38b jl 0x1235a3af */
  if ((C.sf!=C.of)) goto L_1235a3af;
  /* 1235a38d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a390 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1235a392 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1235a395 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235a397 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235a39d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1235a3a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a3a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1235a3a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a3a8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a3ab mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1235a3ad jmp 0x1235a3c0 */
  goto L_1235a3c0;
L_1235a3af:;
  /* 1235a3af mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a3b2 push edx */
  push32((uint32_t)(EDX));
  /* 1235a3b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235a3b5 call 0x1235b0d0 */
  push32(0x1235a3bau); f_1235b0d0();
  /* 1235a3ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a3bd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1235a3c0:;
  /* 1235a3c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235a3c3 pop edi */
  EDI = (pop32());
  /* 1235a3c4 pop esi */
  ESI = (pop32());
  /* 1235a3c5 pop ebx */
  EBX = (pop32());
  /* 1235a3c6 mov esp, ebp */
  ESP = (EBP);
  /* 1235a3c8 pop ebp */
  EBP = (pop32());
  /* 1235a3c9 ret  */
  ESPCHK(0x1235a2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3d0 @ 0x1235a3d0 (183 bytes, 58 insns) */
void f_1235a3d0(void) {
  FTRACE(0x1235a3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235a3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235a3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1235a3d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235a3d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a3d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a3dc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a3e1 ja 0x1235a3fa */
  if ((!C.cf&&!C.zf)) goto L_1235a3fa;
  /* 1235a3e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a3e6 mov edx, dword ptr [0x1237ec98] */
  EDX = (r32((uint32_t)(0x1237ec98)));
  /* 1235a3ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a3ee mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1235a3f2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1235a3f5 jmp 0x1235a483 */
  goto L_1235a483;
L_1235a3fa:;
  /* 1235a3fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a3fd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1235a400 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235a406 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235a40c mov edx, dword ptr [0x1237ec98] */
  EDX = (r32((uint32_t)(0x1237ec98)));
  /* 1235a412 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a414 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1235a418 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1235a41d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235a41f je 0x1235a443 */
  if (C.zf) goto L_1235a443;
  /* 1235a421 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a424 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1235a427 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235a42d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1235a430 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1235a433 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1235a436 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1235a43a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1235a441 jmp 0x1235a454 */
  goto L_1235a454;
L_1235a443:;
  /* 1235a443 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1235a446 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1235a449 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1235a44d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1235a454:;
  /* 1235a454 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235a456 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235a458 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235a45a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1235a45d push ecx */
  push32((uint32_t)(ECX));
  /* 1235a45e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235a461 push edx */
  push32((uint32_t)(EDX));
  /* 1235a462 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1235a465 push eax */
  push32((uint32_t)(EAX));
  /* 1235a466 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235a468 call 0x1235c5f0 */
  push32(0x1235a46du); f_1235c5f0();
  /* 1235a46d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a470 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235a472 jne 0x1235a478 */
  if (!C.zf) goto L_1235a478;
  /* 1235a474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a476 jmp 0x1235a483 */
  goto L_1235a483;
L_1235a478:;
  /* 1235a478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a47b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235a480 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1235a483:;
  /* 1235a483 mov esp, ebp */
  ESP = (EBP);
  /* 1235a485 pop ebp */
  EBP = (pop32());
  /* 1235a486 ret  */
  ESPCHK(0x1235a3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a490 @ 0x1235a490 (836 bytes, 238 insns) */
void f_1235a490(void) {
  FTRACE(0x1235a490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235a490 push ebp */
  push32((uint32_t)(EBP));
  /* 1235a491 mov ebp, esp */
  EBP = (ESP);
  /* 1235a493 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235a496 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1235a498 call 0x12357dc0 */
  push32(0x1235a49du); f_12357dc0();
  /* 1235a49d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a4a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a4a3 push eax */
  push32((uint32_t)(EAX));
  /* 1235a4a4 call 0x1235a7e0 */
  push32(0x1235a4a9u); f_1235a7e0();
  /* 1235a4a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a4ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1235a4af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a4b2 cmp ecx, dword ptr [0x12381c44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12381c44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a4b8 jne 0x1235a4cb */
  if (!C.zf) goto L_1235a4cb;
  /* 1235a4ba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1235a4bc call 0x12357e60 */
  push32(0x1235a4c1u); f_12357e60();
  /* 1235a4c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a4c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a4c6 jmp 0x1235a7d0 */
  goto L_1235a7d0;
L_1235a4cb:;
  /* 1235a4cb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a4cf jne 0x1235a4ec */
  if (!C.zf) goto L_1235a4ec;
  /* 1235a4d1 call 0x1235a8c0 */
  push32(0x1235a4d6u); f_1235a8c0();
  /* 1235a4d6 call 0x1235a940 */
  push32(0x1235a4dbu); f_1235a940();
  /* 1235a4db push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1235a4dd call 0x12357e60 */
  push32(0x1235a4e2u); f_12357e60();
  /* 1235a4e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a4e7 jmp 0x1235a7d0 */
  goto L_1235a7d0;
L_1235a4ec:;
  /* 1235a4ec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235a4f3 jmp 0x1235a4fe */
  goto L_1235a4fe;
L_1235a4f5:;
  /* 1235a4f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a4f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a4fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1235a4fe:;
  /* 1235a4fe cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a502 jae 0x1235a64f */
  if (!C.cf) goto L_1235a64f;
  /* 1235a508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a50b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235a50e mov ecx, dword ptr [eax + 0x1237eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1237eeb8)));
  /* 1235a514 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a517 jne 0x1235a64a */
  if (!C.zf) goto L_1235a64a;
  /* 1235a51d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1235a524 jmp 0x1235a52f */
  goto L_1235a52f;
L_1235a526:;
  /* 1235a526 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a529 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a52c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1235a52f:;
  /* 1235a52f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a536 jae 0x1235a544 */
  if (!C.cf) goto L_1235a544;
  /* 1235a538 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a53b mov byte ptr [eax + 0x12381de0], 0 */
  w8((uint32_t)(EAX + 0x12381de0), (0x0u));
  /* 1235a542 jmp 0x1235a526 */
  goto L_1235a526;
L_1235a544:;
  /* 1235a544 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1235a54b jmp 0x1235a556 */
  goto L_1235a556;
L_1235a54d:;
  /* 1235a54d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235a550 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a553 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1235a556:;
  /* 1235a556 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a55a jae 0x1235a5d7 */
  if (!C.cf) goto L_1235a5d7;
  /* 1235a55c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a55f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235a562 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235a565 lea ecx, [edx + eax*8 + 0x1237eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1237eec8));
  /* 1235a56c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235a56f jmp 0x1235a57a */
  goto L_1235a57a;
L_1235a571:;
  /* 1235a571 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235a574 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a577 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1235a57a:;
  /* 1235a57a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235a57d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235a57f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1235a581 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235a583 je 0x1235a5d2 */
  if (C.zf) goto L_1235a5d2;
  /* 1235a585 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235a588 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a58a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1235a58d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235a58f je 0x1235a5d2 */
  if (C.zf) goto L_1235a5d2;
  /* 1235a591 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235a594 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235a596 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1235a598 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1235a59b jmp 0x1235a5a6 */
  goto L_1235a5a6;
L_1235a59d:;
  /* 1235a59d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a5a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a5a3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1235a5a6:;
  /* 1235a5a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235a5a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235a5ab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1235a5ae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a5b1 ja 0x1235a5d0 */
  if ((!C.cf&&!C.zf)) goto L_1235a5d0;
  /* 1235a5b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a5b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235a5b9 mov dl, byte ptr [eax + 0x12381de1] */
  DL = (r8((uint32_t)(EAX + 0x12381de1)));
  /* 1235a5bf or dl, byte ptr [ecx + 0x1237eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1237eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1235a5c5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a5c8 mov byte ptr [eax + 0x12381de1], dl */
  w8((uint32_t)(EAX + 0x12381de1), (DL));
  /* 1235a5ce jmp 0x1235a59d */
  goto L_1235a59d;
L_1235a5d0:;
  /* 1235a5d0 jmp 0x1235a571 */
  goto L_1235a571;
L_1235a5d2:;
  /* 1235a5d2 jmp 0x1235a54d */
  goto L_1235a54d;
L_1235a5d7:;
  /* 1235a5d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a5da mov dword ptr [0x12381c44], ecx */
  w32((uint32_t)(0x12381c44), (ECX));
  /* 1235a5e0 mov dword ptr [0x12381ccc], 1 */
  w32((uint32_t)(0x12381ccc), (0x1u));
  /* 1235a5ea mov edx, dword ptr [0x12381c44] */
  EDX = (r32((uint32_t)(0x12381c44)));
  /* 1235a5f0 push edx */
  push32((uint32_t)(EDX));
  /* 1235a5f1 call 0x1235a840 */
  push32(0x1235a5f6u); f_1235a840();
  /* 1235a5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a5f9 mov dword ptr [0x12381ee4], eax */
  w32((uint32_t)(0x12381ee4), (EAX));
  /* 1235a5fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1235a605 jmp 0x1235a610 */
  goto L_1235a610;
L_1235a607:;
  /* 1235a607 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235a60a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a60d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1235a610:;
  /* 1235a610 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a614 jae 0x1235a634 */
  if (!C.cf) goto L_1235a634;
  /* 1235a616 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a619 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235a61c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235a61f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235a622 mov cx, word ptr [ecx + eax*2 + 0x1237eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1237eebc)));
  /* 1235a62a mov word ptr [edx*2 + 0x12381cc0], cx */
  w16((uint32_t)(EDX*2 + 0x12381cc0), (CX));
  /* 1235a632 jmp 0x1235a607 */
  goto L_1235a607;
L_1235a634:;
  /* 1235a634 call 0x1235a940 */
  push32(0x1235a639u); f_1235a940();
  /* 1235a639 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1235a63b call 0x12357e60 */
  push32(0x1235a640u); f_12357e60();
  /* 1235a640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a645 jmp 0x1235a7d0 */
  goto L_1235a7d0;
L_1235a64a:;
  /* 1235a64a jmp 0x1235a4f5 */
  goto L_1235a4f5;
L_1235a64f:;
  /* 1235a64f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1235a652 push edx */
  push32((uint32_t)(EDX));
  /* 1235a653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a656 push eax */
  push32((uint32_t)(EAX));
  /* 1235a657 call dword ptr [0x12383364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383364))), 0x1235a65du);
  /* 1235a65d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a660 jne 0x1235a7a2 */
  if (!C.zf) goto L_1235a7a2;
  /* 1235a666 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1235a66d jmp 0x1235a678 */
  goto L_1235a678;
L_1235a66f:;
  /* 1235a66f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a672 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a675 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1235a678:;
  /* 1235a678 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a67f jae 0x1235a68d */
  if (!C.cf) goto L_1235a68d;
  /* 1235a681 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a684 mov byte ptr [edx + 0x12381de0], 0 */
  w8((uint32_t)(EDX + 0x12381de0), (0x0u));
  /* 1235a68b jmp 0x1235a66f */
  goto L_1235a66f;
L_1235a68d:;
  /* 1235a68d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a690 mov dword ptr [0x12381c44], eax */
  w32((uint32_t)(0x12381c44), (EAX));
  /* 1235a695 mov dword ptr [0x12381ee4], 0 */
  w32((uint32_t)(0x12381ee4), (0x0u));
  /* 1235a69f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a6a3 jbe 0x1235a75e */
  if ((C.cf||C.zf)) goto L_1235a75e;
  /* 1235a6a9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1235a6ac mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1235a6af jmp 0x1235a6ba */
  goto L_1235a6ba;
L_1235a6b1:;
  /* 1235a6b1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235a6b4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a6b7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1235a6ba:;
  /* 1235a6ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235a6bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235a6bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1235a6c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235a6c3 je 0x1235a70c */
  if (C.zf) goto L_1235a70c;
  /* 1235a6c5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235a6c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a6ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1235a6cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235a6cf je 0x1235a70c */
  if (C.zf) goto L_1235a70c;
  /* 1235a6d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235a6d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235a6d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1235a6d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1235a6db jmp 0x1235a6e6 */
  goto L_1235a6e6;
L_1235a6dd:;
  /* 1235a6dd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a6e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a6e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1235a6e6:;
  /* 1235a6e6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235a6e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235a6eb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1235a6ee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a6f1 ja 0x1235a70a */
  if ((!C.cf&&!C.zf)) goto L_1235a70a;
  /* 1235a6f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a6f6 mov cl, byte ptr [eax + 0x12381de1] */
  CL = (r8((uint32_t)(EAX + 0x12381de1)));
  /* 1235a6fc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1235a6ff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a702 mov byte ptr [edx + 0x12381de1], cl */
  w8((uint32_t)(EDX + 0x12381de1), (CL));
  /* 1235a708 jmp 0x1235a6dd */
  goto L_1235a6dd;
L_1235a70a:;
  /* 1235a70a jmp 0x1235a6b1 */
  goto L_1235a6b1;
L_1235a70c:;
  /* 1235a70c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1235a713 jmp 0x1235a71e */
  goto L_1235a71e;
L_1235a715:;
  /* 1235a715 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a718 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a71b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1235a71e:;
  /* 1235a71e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a725 jae 0x1235a73e */
  if (!C.cf) goto L_1235a73e;
  /* 1235a727 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a72a mov dl, byte ptr [ecx + 0x12381de1] */
  DL = (r8((uint32_t)(ECX + 0x12381de1)));
  /* 1235a730 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1235a733 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235a736 mov byte ptr [eax + 0x12381de1], dl */
  w8((uint32_t)(EAX + 0x12381de1), (DL));
  /* 1235a73c jmp 0x1235a715 */
  goto L_1235a715;
L_1235a73e:;
  /* 1235a73e mov ecx, dword ptr [0x12381c44] */
  ECX = (r32((uint32_t)(0x12381c44)));
  /* 1235a744 push ecx */
  push32((uint32_t)(ECX));
  /* 1235a745 call 0x1235a840 */
  push32(0x1235a74au); f_1235a840();
  /* 1235a74a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a74d mov dword ptr [0x12381ee4], eax */
  w32((uint32_t)(0x12381ee4), (EAX));
  /* 1235a752 mov dword ptr [0x12381ccc], 1 */
  w32((uint32_t)(0x12381ccc), (0x1u));
  /* 1235a75c jmp 0x1235a768 */
  goto L_1235a768;
L_1235a75e:;
  /* 1235a75e mov dword ptr [0x12381ccc], 0 */
  w32((uint32_t)(0x12381ccc), (0x0u));
L_1235a768:;
  /* 1235a768 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1235a76f jmp 0x1235a77a */
  goto L_1235a77a;
L_1235a771:;
  /* 1235a771 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235a774 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a777 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1235a77a:;
  /* 1235a77a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a77e jae 0x1235a78f */
  if (!C.cf) goto L_1235a78f;
  /* 1235a780 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235a783 mov word ptr [eax*2 + 0x12381cc0], 0 */
  w16((uint32_t)(EAX*2 + 0x12381cc0), (0x0u));
  /* 1235a78d jmp 0x1235a771 */
  goto L_1235a771;
L_1235a78f:;
  /* 1235a78f call 0x1235a940 */
  push32(0x1235a794u); f_1235a940();
  /* 1235a794 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1235a796 call 0x12357e60 */
  push32(0x1235a79bu); f_12357e60();
  /* 1235a79b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a79e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a7a0 jmp 0x1235a7d0 */
  goto L_1235a7d0;
L_1235a7a2:;
  /* 1235a7a2 cmp dword ptr [0x12380748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a7a9 je 0x1235a7c3 */
  if (C.zf) goto L_1235a7c3;
  /* 1235a7ab call 0x1235a8c0 */
  push32(0x1235a7b0u); f_1235a8c0();
  /* 1235a7b0 call 0x1235a940 */
  push32(0x1235a7b5u); f_1235a940();
  /* 1235a7b5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1235a7b7 call 0x12357e60 */
  push32(0x1235a7bcu); f_12357e60();
  /* 1235a7bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a7bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235a7c1 jmp 0x1235a7d0 */
  goto L_1235a7d0;
L_1235a7c3:;
  /* 1235a7c3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1235a7c5 call 0x12357e60 */
  push32(0x1235a7cau); f_12357e60();
  /* 1235a7ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a7cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1235a7d0:;
  /* 1235a7d0 mov esp, ebp */
  ESP = (EBP);
  /* 1235a7d2 pop ebp */
  EBP = (pop32());
  /* 1235a7d3 ret  */
  ESPCHK(0x1235a490u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1235a7e0 (89 bytes, 21 insns) */
void f_1235a7e0(void) {
  FTRACE(0x1235a7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235a7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235a7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1235a7e3 mov dword ptr [0x12380748], 0 */
  w32((uint32_t)(0x12380748), (0x0u));
  /* 1235a7ed cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a7f1 jne 0x1235a805 */
  if (!C.zf) goto L_1235a805;
  /* 1235a7f3 mov dword ptr [0x12380748], 1 */
  w32((uint32_t)(0x12380748), (0x1u));
  /* 1235a7fd call dword ptr [0x1238336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238336c))), 0x1235a803u);
  /* 1235a803 jmp 0x1235a837 */
  goto L_1235a837;
L_1235a805:;
  /* 1235a805 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a809 jne 0x1235a81d */
  if (!C.zf) goto L_1235a81d;
  /* 1235a80b mov dword ptr [0x12380748], 1 */
  w32((uint32_t)(0x12380748), (0x1u));
  /* 1235a815 call dword ptr [0x12383368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383368))), 0x1235a81bu);
  /* 1235a81b jmp 0x1235a837 */
  goto L_1235a837;
L_1235a81d:;
  /* 1235a81d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a821 jne 0x1235a834 */
  if (!C.zf) goto L_1235a834;
  /* 1235a823 mov dword ptr [0x12380748], 1 */
  w32((uint32_t)(0x12380748), (0x1u));
  /* 1235a82d mov eax, dword ptr [0x12380768] */
  EAX = (r32((uint32_t)(0x12380768)));
  /* 1235a832 jmp 0x1235a837 */
  goto L_1235a837;
L_1235a834:;
  /* 1235a834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1235a837:;
  /* 1235a837 pop ebp */
  EBP = (pop32());
  /* 1235a838 ret  */
  ESPCHK(0x1235a7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a840 @ 0x1235a840 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1235a840(void) {
  FTRACE(0x1235a840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235a840 push ebp */
  push32((uint32_t)(EBP));
  /* 1235a841 mov ebp, esp */
  EBP = (ESP);
  /* 1235a843 push ecx */
  push32((uint32_t)(ECX));
  /* 1235a844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235a847 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235a84a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a84d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235a853 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235a856 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a85a ja 0x1235a88a */
  if ((!C.cf&&!C.zf)) goto L_1235a88a;
  /* 1235a85c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a85f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235a861 mov dl, byte ptr [eax + 0x1235a8a4] */
  DL = (r8((uint32_t)(EAX + 0x1235a8a4)));
  /* 1235a867 jmp dword ptr [edx*4 + 0x1235a890] */
  switch (EDX) {
    case 0: goto L_1235a86e;
    case 1: goto L_1235a875;
    case 2: goto L_1235a87c;
    case 3: goto L_1235a883;
    case 4: goto L_1235a88a;
    default: x86_unimpl("switch@0x1235a867 out of table"); return;
  }
L_1235a86e:;
  /* 1235a86e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1235a873 jmp 0x1235a88c */
  goto L_1235a88c;
L_1235a875:;
  /* 1235a875 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1235a87a jmp 0x1235a88c */
  goto L_1235a88c;
L_1235a87c:;
  /* 1235a87c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1235a881 jmp 0x1235a88c */
  goto L_1235a88c;
L_1235a883:;
  /* 1235a883 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1235a888 jmp 0x1235a88c */
  goto L_1235a88c;
L_1235a88a:;
  /* 1235a88a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235a88c:;
  /* 1235a88c mov esp, ebp */
  ESP = (EBP);
  /* 1235a88e pop ebp */
  EBP = (pop32());
  /* 1235a88f ret  */
  ESPCHK(0x1235a840u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1235a8c0 (116 bytes, 29 insns) */
void f_1235a8c0(void) {
  FTRACE(0x1235a8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235a8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235a8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1235a8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1235a8c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235a8cb jmp 0x1235a8d6 */
  goto L_1235a8d6;
L_1235a8cd:;
  /* 1235a8cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a8d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a8d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235a8d6:;
  /* 1235a8d6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a8dd jge 0x1235a8eb */
  if ((C.sf==C.of)) goto L_1235a8eb;
  /* 1235a8df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a8e2 mov byte ptr [ecx + 0x12381de0], 0 */
  w8((uint32_t)(ECX + 0x12381de0), (0x0u));
  /* 1235a8e9 jmp 0x1235a8cd */
  goto L_1235a8cd;
L_1235a8eb:;
  /* 1235a8eb mov dword ptr [0x12381c44], 0 */
  w32((uint32_t)(0x12381c44), (0x0u));
  /* 1235a8f5 mov dword ptr [0x12381ccc], 0 */
  w32((uint32_t)(0x12381ccc), (0x0u));
  /* 1235a8ff mov dword ptr [0x12381ee4], 0 */
  w32((uint32_t)(0x12381ee4), (0x0u));
  /* 1235a909 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235a910 jmp 0x1235a91b */
  goto L_1235a91b;
L_1235a912:;
  /* 1235a912 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a915 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a918 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1235a91b:;
  /* 1235a91b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a91f jge 0x1235a930 */
  if ((C.sf==C.of)) goto L_1235a930;
  /* 1235a921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a924 mov word ptr [eax*2 + 0x12381cc0], 0 */
  w16((uint32_t)(EAX*2 + 0x12381cc0), (0x0u));
  /* 1235a92e jmp 0x1235a912 */
  goto L_1235a912;
L_1235a930:;
  /* 1235a930 mov esp, ebp */
  ESP = (EBP);
  /* 1235a932 pop ebp */
  EBP = (pop32());
  /* 1235a933 ret  */
  ESPCHK(0x1235a8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a940 @ 0x1235a940 (770 bytes, 175 insns) */
void f_1235a940(void) {
  FTRACE(0x1235a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235a940 push ebp */
  push32((uint32_t)(EBP));
  /* 1235a941 mov ebp, esp */
  EBP = (ESP);
  /* 1235a943 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235a949 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1235a94f push eax */
  push32((uint32_t)(EAX));
  /* 1235a950 mov ecx, dword ptr [0x12381c44] */
  ECX = (r32((uint32_t)(0x12381c44)));
  /* 1235a956 push ecx */
  push32((uint32_t)(ECX));
  /* 1235a957 call dword ptr [0x12383364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383364))), 0x1235a95du);
  /* 1235a95d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a960 jne 0x1235ab79 */
  if (!C.zf) goto L_1235ab79;
  /* 1235a966 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1235a970 jmp 0x1235a981 */
  goto L_1235a981;
L_1235a972:;
  /* 1235a972 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235a978 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a97b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1235a981:;
  /* 1235a981 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a98b jae 0x1235a9a2 */
  if (!C.cf) goto L_1235a9a2;
  /* 1235a98d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235a993 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1235a999 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1235a9a0 jmp 0x1235a972 */
  goto L_1235a972;
L_1235a9a2:;
  /* 1235a9a2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1235a9a9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1235a9af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235a9b2 jmp 0x1235a9bd */
  goto L_1235a9bd;
L_1235a9b4:;
  /* 1235a9b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a9b7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a9ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235a9bd:;
  /* 1235a9bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a9c0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235a9c2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1235a9c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235a9c6 je 0x1235aa08 */
  if (C.zf) goto L_1235aa08;
  /* 1235a9c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a9cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235a9cd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1235a9cf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1235a9d5 jmp 0x1235a9e6 */
  goto L_1235a9e6;
L_1235a9d7:;
  /* 1235a9d7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235a9dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235a9e0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1235a9e6:;
  /* 1235a9e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235a9e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235a9eb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1235a9ee cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235a9f4 ja 0x1235aa06 */
  if ((!C.cf&&!C.zf)) goto L_1235aa06;
  /* 1235a9f6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235a9fc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1235aa04 jmp 0x1235a9d7 */
  goto L_1235a9d7;
L_1235aa06:;
  /* 1235aa06 jmp 0x1235a9b4 */
  goto L_1235a9b4;
L_1235aa08:;
  /* 1235aa08 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235aa0a mov eax, dword ptr [0x12381ee4] */
  EAX = (r32((uint32_t)(0x12381ee4)));
  /* 1235aa0f push eax */
  push32((uint32_t)(EAX));
  /* 1235aa10 mov ecx, dword ptr [0x12381c44] */
  ECX = (r32((uint32_t)(0x12381c44)));
  /* 1235aa16 push ecx */
  push32((uint32_t)(ECX));
  /* 1235aa17 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1235aa1d push edx */
  push32((uint32_t)(EDX));
  /* 1235aa1e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1235aa23 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1235aa29 push eax */
  push32((uint32_t)(EAX));
  /* 1235aa2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1235aa2c call 0x1235c5f0 */
  push32(0x1235aa31u); f_1235c5f0();
  /* 1235aa31 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235aa34 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235aa36 mov ecx, dword ptr [0x12381c44] */
  ECX = (r32((uint32_t)(0x12381c44)));
  /* 1235aa3c push ecx */
  push32((uint32_t)(ECX));
  /* 1235aa3d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1235aa42 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1235aa48 push edx */
  push32((uint32_t)(EDX));
  /* 1235aa49 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1235aa4e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1235aa54 push eax */
  push32((uint32_t)(EAX));
  /* 1235aa55 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1235aa5a mov ecx, dword ptr [0x12381ee4] */
  ECX = (r32((uint32_t)(0x12381ee4)));
  /* 1235aa60 push ecx */
  push32((uint32_t)(ECX));
  /* 1235aa61 call 0x1235c7b0 */
  push32(0x1235aa66u); f_1235c7b0();
  /* 1235aa66 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235aa69 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235aa6b mov edx, dword ptr [0x12381c44] */
  EDX = (r32((uint32_t)(0x12381c44)));
  /* 1235aa71 push edx */
  push32((uint32_t)(EDX));
  /* 1235aa72 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1235aa77 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1235aa7d push eax */
  push32((uint32_t)(EAX));
  /* 1235aa7e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1235aa83 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1235aa89 push ecx */
  push32((uint32_t)(ECX));
  /* 1235aa8a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1235aa8f mov edx, dword ptr [0x12381ee4] */
  EDX = (r32((uint32_t)(0x12381ee4)));
  /* 1235aa95 push edx */
  push32((uint32_t)(EDX));
  /* 1235aa96 call 0x1235c7b0 */
  push32(0x1235aa9bu); f_1235c7b0();
  /* 1235aa9b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235aa9e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1235aaa8 jmp 0x1235aab9 */
  goto L_1235aab9;
L_1235aaaa:;
  /* 1235aaaa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235aab0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235aab3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1235aab9:;
  /* 1235aab9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235aac3 jae 0x1235ab74 */
  if (!C.cf) goto L_1235ab74;
  /* 1235aac9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235aacf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235aad1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1235aad9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1235aadc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235aade je 0x1235ab16 */
  if (C.zf) goto L_1235ab16;
  /* 1235aae0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235aae6 mov cl, byte ptr [eax + 0x12381de1] */
  CL = (r8((uint32_t)(EAX + 0x12381de1)));
  /* 1235aaec or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1235aaef mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235aaf5 mov byte ptr [edx + 0x12381de1], cl */
  w8((uint32_t)(EDX + 0x12381de1), (CL));
  /* 1235aafb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ab01 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ab07 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1235ab0e mov byte ptr [eax + 0x12381ce0], dl */
  w8((uint32_t)(EAX + 0x12381ce0), (DL));
  /* 1235ab14 jmp 0x1235ab6f */
  goto L_1235ab6f;
L_1235ab16:;
  /* 1235ab16 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ab1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ab1e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1235ab26 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1235ab29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235ab2b je 0x1235ab62 */
  if (C.zf) goto L_1235ab62;
  /* 1235ab2d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ab33 mov al, byte ptr [edx + 0x12381de1] */
  AL = (r8((uint32_t)(EDX + 0x12381de1)));
  /* 1235ab39 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1235ab3b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ab41 mov byte ptr [ecx + 0x12381de1], al */
  w8((uint32_t)(ECX + 0x12381de1), (AL));
  /* 1235ab47 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ab4d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ab53 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1235ab5a mov byte ptr [edx + 0x12381ce0], cl */
  w8((uint32_t)(EDX + 0x12381ce0), (CL));
  /* 1235ab60 jmp 0x1235ab6f */
  goto L_1235ab6f;
L_1235ab62:;
  /* 1235ab62 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ab68 mov byte ptr [edx + 0x12381ce0], 0 */
  w8((uint32_t)(EDX + 0x12381ce0), (0x0u));
L_1235ab6f:;
  /* 1235ab6f jmp 0x1235aaaa */
  goto L_1235aaaa;
L_1235ab74:;
  /* 1235ab74 jmp 0x1235ac3e */
  goto L_1235ac3e;
L_1235ab79:;
  /* 1235ab79 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1235ab83 jmp 0x1235ab94 */
  goto L_1235ab94;
L_1235ab85:;
  /* 1235ab85 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ab8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ab8e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1235ab94:;
  /* 1235ab94 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ab9e jae 0x1235ac3e */
  if (!C.cf) goto L_1235ac3e;
  /* 1235aba4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235abab jb 0x1235abe8 */
  if (C.cf) goto L_1235abe8;
  /* 1235abad cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235abb4 ja 0x1235abe8 */
  if ((!C.cf&&!C.zf)) goto L_1235abe8;
  /* 1235abb6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235abbc mov dl, byte ptr [ecx + 0x12381de1] */
  DL = (r8((uint32_t)(ECX + 0x12381de1)));
  /* 1235abc2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1235abc5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235abcb mov byte ptr [eax + 0x12381de1], dl */
  w8((uint32_t)(EAX + 0x12381de1), (DL));
  /* 1235abd1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235abd7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235abda mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235abe0 mov byte ptr [edx + 0x12381ce0], cl */
  w8((uint32_t)(EDX + 0x12381ce0), (CL));
  /* 1235abe6 jmp 0x1235ac39 */
  goto L_1235ac39;
L_1235abe8:;
  /* 1235abe8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235abef jb 0x1235ac2c */
  if (C.cf) goto L_1235ac2c;
  /* 1235abf1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235abf8 ja 0x1235ac2c */
  if ((!C.cf&&!C.zf)) goto L_1235ac2c;
  /* 1235abfa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ac00 mov cl, byte ptr [eax + 0x12381de1] */
  CL = (r8((uint32_t)(EAX + 0x12381de1)));
  /* 1235ac06 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1235ac09 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ac0f mov byte ptr [edx + 0x12381de1], cl */
  w8((uint32_t)(EDX + 0x12381de1), (CL));
  /* 1235ac15 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ac1b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235ac1e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ac24 mov byte ptr [ecx + 0x12381ce0], al */
  w8((uint32_t)(ECX + 0x12381ce0), (AL));
  /* 1235ac2a jmp 0x1235ac39 */
  goto L_1235ac39;
L_1235ac2c:;
  /* 1235ac2c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1235ac32 mov byte ptr [edx + 0x12381ce0], 0 */
  w8((uint32_t)(EDX + 0x12381ce0), (0x0u));
L_1235ac39:;
  /* 1235ac39 jmp 0x1235ab85 */
  goto L_1235ab85;
L_1235ac3e:;
  /* 1235ac3e mov esp, ebp */
  ESP = (EBP);
  /* 1235ac40 pop ebp */
  EBP = (pop32());
  /* 1235ac41 ret  */
  ESPCHK(0x1235a940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac50 @ 0x1235ac50 (23 bytes, 9 insns) */
void f_1235ac50(void) {
  FTRACE(0x1235ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 1235ac51 mov ebp, esp */
  EBP = (ESP);
  /* 1235ac53 cmp dword ptr [0x12381ccc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12381ccc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ac5a je 0x1235ac63 */
  if (C.zf) goto L_1235ac63;
  /* 1235ac5c mov eax, dword ptr [0x12381c44] */
  EAX = (r32((uint32_t)(0x12381c44)));
  /* 1235ac61 jmp 0x1235ac65 */
  goto L_1235ac65;
L_1235ac63:;
  /* 1235ac63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235ac65:;
  /* 1235ac65 pop ebp */
  EBP = (pop32());
  /* 1235ac66 ret  */
  ESPCHK(0x1235ac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac70 @ 0x1235ac70 (34 bytes, 10 insns) */
void f_1235ac70(void) {
  FTRACE(0x1235ac70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235ac70 push ebp */
  push32((uint32_t)(EBP));
  /* 1235ac71 mov ebp, esp */
  EBP = (ESP);
  /* 1235ac73 cmp dword ptr [0x12382090], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12382090))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ac7a jne 0x1235ac90 */
  if (!C.zf) goto L_1235ac90;
  /* 1235ac7c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1235ac7e call 0x1235a490 */
  push32(0x1235ac83u); f_1235a490();
  /* 1235ac83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ac86 mov dword ptr [0x12382090], 1 */
  w32((uint32_t)(0x12382090), (0x1u));
L_1235ac90:;
  /* 1235ac90 pop ebp */
  EBP = (pop32());
  /* 1235ac91 ret  */
  ESPCHK(0x1235ac70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aca0 @ 0x1235aca0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_1235aca0(void) {
  FTRACE(0x1235aca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235aca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235aca1 mov ebp, esp */
  EBP = (ESP);
  /* 1235aca3 push edi */
  push32((uint32_t)(EDI));
  /* 1235aca4 push esi */
  push32((uint32_t)(ESI));
  /* 1235aca5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1235aca8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235acab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1235acae mov eax, ecx */
  EAX = (ECX);
  /* 1235acb0 mov edx, ecx */
  EDX = (ECX);
  /* 1235acb2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235acb4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235acb6 jbe 0x1235acc0 */
  if ((C.cf||C.zf)) goto L_1235acc0;
  /* 1235acb8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235acba jb 0x1235ae38 */
  if (C.cf) goto L_1235ae38;
L_1235acc0:;
  /* 1235acc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1235acc6 jne 0x1235acdc */
  if (!C.zf) goto L_1235acdc;
  /* 1235acc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235accb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1235acce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235acd1 jb 0x1235acfc */
  if (C.cf) goto L_1235acfc;
  /* 1235acd3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235acd5 jmp dword ptr [edx*4 + 0x1235ade8] */
  switch (EDX) {
    case 0: goto L_1235adf8;
    case 1: goto L_1235ae00;
    case 2: goto L_1235ae0c;
    case 3: goto L_1235ae20;
    default: x86_unimpl("switch@0x1235acd5 out of table"); return;
  }
L_1235acdc:;
  /* 1235acdc mov eax, edi */
  EAX = (EDI);
  /* 1235acde mov edx, 3 */
  EDX = (0x3u);
  /* 1235ace3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235ace6 jb 0x1235acf4 */
  if (C.cf) goto L_1235acf4;
  /* 1235ace8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1235aceb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235aced jmp dword ptr [eax*4 + 0x1235ad00] */
  switch (EAX) {
    case 1: goto L_1235ad10;
    case 2: goto L_1235ad3c;
    case 3: goto L_1235ad60;
    default: x86_unimpl("switch@0x1235aced out of table"); return;
  }
L_1235acf4:;
  /* 1235acf4 jmp dword ptr [ecx*4 + 0x1235adf8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1235adf8)))); return;
  /* 1235acfb nop  */
  /* nop */
L_1235acfc:;
  /* 1235acfc jmp dword ptr [ecx*4 + 0x1235ad7c] */
  switch (ECX) {
    case 0: goto L_1235addf;
    case 1: goto L_1235adcc;
    case 2: goto L_1235adc4;
    case 3: goto L_1235adbc;
    case 4: goto L_1235adb4;
    case 5: goto L_1235adac;
    case 6: goto L_1235ada4;
    case 7: goto L_1235ad9c;
    default: x86_unimpl("switch@0x1235acfc out of table"); return;
  }
  /* 1235ad03 nop  */
  /* nop */
L_1235ad10:;
  /* 1235ad10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235ad12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235ad14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235ad16 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235ad19 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235ad1c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235ad1f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235ad22 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235ad25 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ad28 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ad2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ad2e jb 0x1235acfc */
  if (C.cf) goto L_1235acfc;
  /* 1235ad30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235ad32 jmp dword ptr [edx*4 + 0x1235ade8] */
  switch (EDX) {
    case 0: goto L_1235adf8;
    case 1: goto L_1235ae00;
    case 2: goto L_1235ae0c;
    case 3: goto L_1235ae20;
    default: x86_unimpl("switch@0x1235ad32 out of table"); return;
  }
  /* 1235ad39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235ad3c:;
  /* 1235ad3c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235ad3e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235ad40 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235ad42 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235ad45 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235ad48 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235ad4b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ad4e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ad51 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ad54 jb 0x1235acfc */
  if (C.cf) goto L_1235acfc;
  /* 1235ad56 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235ad58 jmp dword ptr [edx*4 + 0x1235ade8] */
  switch (EDX) {
    case 0: goto L_1235adf8;
    case 1: goto L_1235ae00;
    case 2: goto L_1235ae0c;
    case 3: goto L_1235ae20;
    default: x86_unimpl("switch@0x1235ad58 out of table"); return;
  }
  /* 1235ad5f nop  */
  /* nop */
L_1235ad60:;
  /* 1235ad60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235ad62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235ad64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235ad66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1235ad67 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235ad6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1235ad6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ad6e jb 0x1235acfc */
  if (C.cf) goto L_1235acfc;
  /* 1235ad70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235ad72 jmp dword ptr [edx*4 + 0x1235ade8] */
  switch (EDX) {
    case 0: goto L_1235adf8;
    case 1: goto L_1235ae00;
    case 2: goto L_1235ae0c;
    case 3: goto L_1235ae20;
    default: x86_unimpl("switch@0x1235ad72 out of table"); return;
  }
  /* 1235ad79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235ad9c:;
  /* 1235ad9c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1235ada0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1235ada4:;
  /* 1235ada4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1235ada8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1235adac:;
  /* 1235adac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1235adb0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1235adb4:;
  /* 1235adb4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1235adb8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1235adbc:;
  /* 1235adbc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1235adc0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1235adc4:;
  /* 1235adc4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1235adc8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1235adcc:;
  /* 1235adcc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1235add0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1235add4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1235addb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235addd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1235addf:;
  /* 1235addf jmp dword ptr [edx*4 + 0x1235ade8] */
  switch (EDX) {
    case 0: goto L_1235adf8;
    case 1: goto L_1235ae00;
    case 2: goto L_1235ae0c;
    case 3: goto L_1235ae20;
    default: x86_unimpl("switch@0x1235addf out of table"); return;
  }
  /* 1235ade6 mov edi, edi */
  EDI = (EDI);
L_1235adf8:;
  /* 1235adf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235adfb pop esi */
  ESI = (pop32());
  /* 1235adfc pop edi */
  EDI = (pop32());
  /* 1235adfd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235adfe ret  */
  ESPCHK(0x1235aca0u, _esp0);
  ESP += 4; return;
  /* 1235adff nop  */
  /* nop */
L_1235ae00:;
  /* 1235ae00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235ae02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235ae04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ae07 pop esi */
  ESI = (pop32());
  /* 1235ae08 pop edi */
  EDI = (pop32());
  /* 1235ae09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235ae0a ret  */
  ESPCHK(0x1235aca0u, _esp0);
  ESP += 4; return;
  /* 1235ae0b nop  */
  /* nop */
L_1235ae0c:;
  /* 1235ae0c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235ae0e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235ae10 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235ae13 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235ae16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ae19 pop esi */
  ESI = (pop32());
  /* 1235ae1a pop edi */
  EDI = (pop32());
  /* 1235ae1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235ae1c ret  */
  ESPCHK(0x1235aca0u, _esp0);
  ESP += 4; return;
  /* 1235ae1d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235ae20:;
  /* 1235ae20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235ae22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235ae24 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235ae27 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235ae2a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235ae2d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235ae30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ae33 pop esi */
  ESI = (pop32());
  /* 1235ae34 pop edi */
  EDI = (pop32());
  /* 1235ae35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235ae36 ret  */
  ESPCHK(0x1235aca0u, _esp0);
  ESP += 4; return;
  /* 1235ae37 nop  */
  /* nop */
L_1235ae38:;
  /* 1235ae38 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1235ae3c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1235ae40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1235ae46 jne 0x1235ae6c */
  if (!C.zf) goto L_1235ae6c;
  /* 1235ae48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235ae4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1235ae4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ae51 jb 0x1235ae60 */
  if (C.cf) goto L_1235ae60;
  /* 1235ae53 std  */
  C.df=1;
  /* 1235ae54 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235ae56 cld  */
  C.df=0;
  /* 1235ae57 jmp dword ptr [edx*4 + 0x1235af80] */
  switch (EDX) {
    case 0: goto L_1235af90;
    case 1: goto L_1235af98;
    case 2: goto L_1235afa8;
    case 3: goto L_1235afbc;
    default: x86_unimpl("switch@0x1235ae57 out of table"); return;
  }
  /* 1235ae5e mov edi, edi */
  EDI = (EDI);
L_1235ae60:;
  /* 1235ae60 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235ae62 jmp dword ptr [ecx*4 + 0x1235af30] */
  switch (ECX) {
    case 0: goto L_1235af77;
    default: x86_unimpl("switch@0x1235ae62 out of table"); return;
  }
  /* 1235ae69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235ae6c:;
  /* 1235ae6c mov eax, edi */
  EAX = (EDI);
  /* 1235ae6e mov edx, 3 */
  EDX = (0x3u);
  /* 1235ae73 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ae76 jb 0x1235ae84 */
  if (C.cf) goto L_1235ae84;
  /* 1235ae78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1235ae7b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235ae7d jmp dword ptr [eax*4 + 0x1235ae88] */
  switch (EAX) {
    case 1: goto L_1235ae98;
    case 2: goto L_1235aeb8;
    case 3: goto L_1235aee0;
    default: x86_unimpl("switch@0x1235ae7d out of table"); return;
  }
L_1235ae84:;
  /* 1235ae84 jmp dword ptr [ecx*4 + 0x1235af80] */
  switch (ECX) {
    case 0: goto L_1235af90;
    case 1: goto L_1235af98;
    case 2: goto L_1235afa8;
    case 3: goto L_1235afbc;
    default: x86_unimpl("switch@0x1235ae84 out of table"); return;
  }
  /* 1235ae8b nop  */
  /* nop */
L_1235ae98:;
  /* 1235ae98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235ae9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235ae9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235aea0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1235aea1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235aea4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1235aea5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235aea8 jb 0x1235ae60 */
  if (C.cf) goto L_1235ae60;
  /* 1235aeaa std  */
  C.df=1;
  /* 1235aeab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235aead cld  */
  C.df=0;
  /* 1235aeae jmp dword ptr [edx*4 + 0x1235af80] */
  switch (EDX) {
    case 0: goto L_1235af90;
    case 1: goto L_1235af98;
    case 2: goto L_1235afa8;
    case 3: goto L_1235afbc;
    default: x86_unimpl("switch@0x1235aeae out of table"); return;
  }
  /* 1235aeb5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235aeb8:;
  /* 1235aeb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235aebb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235aebd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235aec0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235aec3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235aec6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235aec9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235aecc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235aecf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235aed2 jb 0x1235ae60 */
  if (C.cf) goto L_1235ae60;
  /* 1235aed4 std  */
  C.df=1;
  /* 1235aed5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235aed7 cld  */
  C.df=0;
  /* 1235aed8 jmp dword ptr [edx*4 + 0x1235af80] */
  switch (EDX) {
    case 0: goto L_1235af90;
    case 1: goto L_1235af98;
    case 2: goto L_1235afa8;
    case 3: goto L_1235afbc;
    default: x86_unimpl("switch@0x1235aed8 out of table"); return;
  }
  /* 1235aedf nop  */
  /* nop */
L_1235aee0:;
  /* 1235aee0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235aee3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235aee5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235aee8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235aeeb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235aeee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235aef1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235aef4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235aef7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235aefa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235aefd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235af00 jb 0x1235ae60 */
  if (C.cf) goto L_1235ae60;
  /* 1235af06 std  */
  C.df=1;
  /* 1235af07 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235af09 cld  */
  C.df=0;
  /* 1235af0a jmp dword ptr [edx*4 + 0x1235af80] */
  switch (EDX) {
    case 0: goto L_1235af90;
    case 1: goto L_1235af98;
    case 2: goto L_1235afa8;
    case 3: goto L_1235afbc;
    default: x86_unimpl("switch@0x1235af0a out of table"); return;
  }
  /* 1235af11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1235af14 xor al, 0xaf */
  { uint32_t _r=(AL)^(0xafu); AL = (_r); fl_logic(_r,8); }
  /* 1235af16 xor eax, 0x35af3c12 */
  { uint32_t _r=(EAX)^(0x35af3c12u); EAX = (_r); fl_logic(_r,32); }
  /* 1235af1b adc al, byte ptr [edi + ebp*4 + 0x35] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + EBP*4 + 0x35))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1235af1f adc cl, byte ptr [edi + ebp*4 + 0x35] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EDI + EBP*4 + 0x35))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1235af23 adc dl, byte ptr [edi + ebp*4 + 0x35] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDI + EBP*4 + 0x35))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1235af27 adc bl, byte ptr [edi + ebp*4 + 0x35] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EDI + EBP*4 + 0x35))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1235af2b adc ah, byte ptr [edi + ebp*4 + 0x35] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EDI + EBP*4 + 0x35))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1235af34 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1235af38 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1235af3c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1235af40 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1235af44 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1235af48 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1235af4c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1235af50 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1235af54 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1235af58 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1235af5c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1235af60 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1235af64 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1235af68 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1235af6c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1235af73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235af75 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1235af77:;
  /* 1235af77 jmp dword ptr [edx*4 + 0x1235af80] */
  switch (EDX) {
    case 0: goto L_1235af90;
    case 1: goto L_1235af98;
    case 2: goto L_1235afa8;
    case 3: goto L_1235afbc;
    default: x86_unimpl("switch@0x1235af77 out of table"); return;
  }
  /* 1235af7e mov edi, edi */
  EDI = (EDI);
L_1235af90:;
  /* 1235af90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235af93 pop esi */
  ESI = (pop32());
  /* 1235af94 pop edi */
  EDI = (pop32());
  /* 1235af95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235af96 ret  */
  ESPCHK(0x1235aca0u, _esp0);
  ESP += 4; return;
  /* 1235af97 nop  */
  /* nop */
L_1235af98:;
  /* 1235af98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235af9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235af9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235afa1 pop esi */
  ESI = (pop32());
  /* 1235afa2 pop edi */
  EDI = (pop32());
  /* 1235afa3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235afa4 ret  */
  ESPCHK(0x1235aca0u, _esp0);
  ESP += 4; return;
  /* 1235afa5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235afa8:;
  /* 1235afa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235afab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235afae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235afb1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235afb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235afb7 pop esi */
  ESI = (pop32());
  /* 1235afb8 pop edi */
  EDI = (pop32());
  /* 1235afb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235afba ret  */
  ESPCHK(0x1235aca0u, _esp0);
  ESP += 4; return;
  /* 1235afbb nop  */
  /* nop */
L_1235afbc:;
  /* 1235afbc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235afbf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235afc2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235afc5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235afc8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235afcb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235afce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235afd1 pop esi */
  ESI = (pop32());
  /* 1235afd2 pop edi */
  EDI = (pop32());
  /* 1235afd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235afd4 ret  */
  ESPCHK(0x1235aca0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1235afe0 (104 bytes, 43 insns) */
void f_1235afe0(void) {
  FTRACE(0x1235afe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235afe0 push ebx */
  push32((uint32_t)(EBX));
  /* 1235afe1 push esi */
  push32((uint32_t)(ESI));
  /* 1235afe2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1235afe6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235afe8 jne 0x1235b002 */
  if (!C.zf) goto L_1235b002;
  /* 1235afea mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1235afee mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1235aff2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235aff4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1235aff6 mov ebx, eax */
  EBX = (EAX);
  /* 1235aff8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1235affc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1235affe mov edx, ebx */
  EDX = (EBX);
  /* 1235b000 jmp 0x1235b043 */
  goto L_1235b043;
L_1235b002:;
  /* 1235b002 mov ecx, eax */
  ECX = (EAX);
  /* 1235b004 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1235b008 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1235b00c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1235b010:;
  /* 1235b010 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1235b012 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1235b014 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1235b016 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1235b018 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235b01a jne 0x1235b010 */
  if (!C.zf) goto L_1235b010;
  /* 1235b01c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1235b01e mov esi, eax */
  ESI = (EAX);
  /* 1235b020 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1235b024 mov ecx, eax */
  ECX = (EAX);
  /* 1235b026 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1235b02a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1235b02c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b02e jb 0x1235b03e */
  if (C.cf) goto L_1235b03e;
  /* 1235b030 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b034 ja 0x1235b03e */
  if ((!C.cf&&!C.zf)) goto L_1235b03e;
  /* 1235b036 jb 0x1235b03f */
  if (C.cf) goto L_1235b03f;
  /* 1235b038 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b03c jbe 0x1235b03f */
  if ((C.cf||C.zf)) goto L_1235b03f;
L_1235b03e:;
  /* 1235b03e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1235b03f:;
  /* 1235b03f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235b041 mov eax, esi */
  EAX = (ESI);
L_1235b043:;
  /* 1235b043 pop esi */
  ESI = (pop32());
  /* 1235b044 pop ebx */
  EBX = (pop32());
  /* 1235b045 ret 0x10 */
  ESPCHK(0x1235afe0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1235b050 (117 bytes, 44 insns) */
void f_1235b050(void) {
  FTRACE(0x1235b050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235b050 push ebx */
  push32((uint32_t)(EBX));
  /* 1235b051 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1235b055 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235b057 jne 0x1235b071 */
  if (!C.zf) goto L_1235b071;
  /* 1235b059 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1235b05d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1235b061 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235b063 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1235b065 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1235b069 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1235b06b mov eax, edx */
  EAX = (EDX);
  /* 1235b06d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235b06f jmp 0x1235b0c1 */
  goto L_1235b0c1;
L_1235b071:;
  /* 1235b071 mov ecx, eax */
  ECX = (EAX);
  /* 1235b073 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1235b077 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1235b07b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1235b07f:;
  /* 1235b07f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1235b081 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1235b083 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1235b085 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1235b087 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235b089 jne 0x1235b07f */
  if (!C.zf) goto L_1235b07f;
  /* 1235b08b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1235b08d mov ecx, eax */
  ECX = (EAX);
  /* 1235b08f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1235b093 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1235b094 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1235b098 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b09a jb 0x1235b0aa */
  if (C.cf) goto L_1235b0aa;
  /* 1235b09c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b0a0 ja 0x1235b0aa */
  if ((!C.cf&&!C.zf)) goto L_1235b0aa;
  /* 1235b0a2 jb 0x1235b0b2 */
  if (C.cf) goto L_1235b0b2;
  /* 1235b0a4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b0a8 jbe 0x1235b0b2 */
  if ((C.cf||C.zf)) goto L_1235b0b2;
L_1235b0aa:;
  /* 1235b0aa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b0ae sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1235b0b2:;
  /* 1235b0b2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b0b6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b0ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235b0bc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235b0be sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1235b0c1:;
  /* 1235b0c1 pop ebx */
  EBX = (pop32());
  /* 1235b0c2 ret 0x10 */
  ESPCHK(0x1235b050u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b0d0 @ 0x1235b0d0 (628 bytes, 214 insns) */
void f_1235b0d0(void) {
  FTRACE(0x1235b0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235b0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235b0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1235b0d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b0d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1235b0d7 push esi */
  push32((uint32_t)(ESI));
  /* 1235b0d8 push edi */
  push32((uint32_t)(EDI));
L_1235b0d9:;
  /* 1235b0d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b0dd jne 0x1235b0fd */
  if (!C.zf) goto L_1235b0fd;
  /* 1235b0df push 0x1237c028 */
  push32((uint32_t)(0x1237c028u));
  /* 1235b0e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235b0e6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1235b0e8 push 0x1237c01c */
  push32((uint32_t)(0x1237c01cu));
  /* 1235b0ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1235b0ef call 0x12353480 */
  push32(0x1235b0f4u); f_12353480();
  /* 1235b0f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b0f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b0fa jne 0x1235b0fd */
  if (!C.zf) goto L_1235b0fd;
  /* 1235b0fc int3  */
  x86_unimpl("int3 @ 0x1235b0fc");
L_1235b0fd:;
  /* 1235b0fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235b0ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b101 jne 0x1235b0d9 */
  if (!C.zf) goto L_1235b0d9;
  /* 1235b103 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235b106 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235b109 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b10c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1235b10f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1235b112 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b115 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235b118 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1235b11e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235b120 je 0x1235b12f */
  if (C.zf) goto L_1235b12f;
  /* 1235b122 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b125 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1235b128 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1235b12b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235b12d je 0x1235b145 */
  if (C.zf) goto L_1235b145;
L_1235b12f:;
  /* 1235b12f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b132 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1235b135 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1235b137 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b13a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1235b13d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235b140 jmp 0x1235b33d */
  goto L_1235b33d;
L_1235b145:;
  /* 1235b145 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b148 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1235b14b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1235b14e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b150 je 0x1235b19c */
  if (C.zf) goto L_1235b19c;
  /* 1235b152 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b155 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1235b15c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b15f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1235b162 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1235b165 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b167 je 0x1235b185 */
  if (C.zf) goto L_1235b185;
  /* 1235b169 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b16c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b16f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1235b172 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1235b174 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b177 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235b17a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1235b17d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b180 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1235b183 jmp 0x1235b19c */
  goto L_1235b19c;
L_1235b185:;
  /* 1235b185 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b188 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235b18b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1235b18e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b191 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1235b194 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235b197 jmp 0x1235b33d */
  goto L_1235b33d;
L_1235b19c:;
  /* 1235b19c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b19f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235b1a2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1235b1a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b1a8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1235b1ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b1ae mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235b1b1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1235b1b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b1b7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1235b1ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b1bd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1235b1c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235b1cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b1ce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1235b1d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b1d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1235b1d7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1235b1dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235b1df jne 0x1235b20f */
  if (!C.zf) goto L_1235b20f;
  /* 1235b1e1 cmp dword ptr [ebp - 8], 0x1237f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1237f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b1e8 je 0x1235b1f3 */
  if (C.zf) goto L_1235b1f3;
  /* 1235b1ea cmp dword ptr [ebp - 8], 0x1237f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1237f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b1f1 jne 0x1235b203 */
  if (!C.zf) goto L_1235b203;
L_1235b1f3:;
  /* 1235b1f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235b1f6 push edx */
  push32((uint32_t)(EDX));
  /* 1235b1f7 call 0x1235d040 */
  push32(0x1235b1fcu); f_1235d040();
  /* 1235b1fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b1ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b201 jne 0x1235b20f */
  if (!C.zf) goto L_1235b20f;
L_1235b203:;
  /* 1235b203 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b206 push eax */
  push32((uint32_t)(EAX));
  /* 1235b207 call 0x1235cf70 */
  push32(0x1235b20cu); f_1235cf70();
  /* 1235b20c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235b20f:;
  /* 1235b20f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b212 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235b215 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1235b21b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235b21d je 0x1235b2fb */
  if (C.zf) goto L_1235b2fb;
L_1235b223:;
  /* 1235b223 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b226 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b229 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1235b22b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b22e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235b230 jge 0x1235b253 */
  if ((C.sf==C.of)) goto L_1235b253;
  /* 1235b232 push 0x1237bfdc */
  push32((uint32_t)(0x1237bfdcu));
  /* 1235b237 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235b239 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1235b23e push 0x1237c01c */
  push32((uint32_t)(0x1237c01cu));
  /* 1235b243 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235b245 call 0x12353480 */
  push32(0x1235b24au); f_12353480();
  /* 1235b24a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b24d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b250 jne 0x1235b253 */
  if (!C.zf) goto L_1235b253;
  /* 1235b252 int3  */
  x86_unimpl("int3 @ 0x1235b252");
L_1235b253:;
  /* 1235b253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235b255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b257 jne 0x1235b223 */
  if (!C.zf) goto L_1235b223;
  /* 1235b259 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b25c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b25f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1235b261 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b264 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235b267 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b26a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1235b26d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b270 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b273 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1235b275 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b278 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1235b27b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b27e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b281 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1235b284 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b288 jle 0x1235b2a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1235b2a6;
  /* 1235b28a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b28d push ecx */
  push32((uint32_t)(ECX));
  /* 1235b28e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b291 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1235b294 push eax */
  push32((uint32_t)(EAX));
  /* 1235b295 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235b298 push ecx */
  push32((uint32_t)(ECX));
  /* 1235b299 call 0x1235cc60 */
  push32(0x1235b29eu); f_1235cc60();
  /* 1235b29e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b2a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1235b2a4 jmp 0x1235b2ee */
  goto L_1235b2ee;
L_1235b2a6:;
  /* 1235b2a6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b2aa je 0x1235b2c9 */
  if (C.zf) goto L_1235b2c9;
  /* 1235b2ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235b2af sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1235b2b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235b2b5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1235b2b8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235b2bb mov ecx, dword ptr [edx*4 + 0x12381f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12381f40)));
  /* 1235b2c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b2c4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1235b2c7 jmp 0x1235b2d0 */
  goto L_1235b2d0;
L_1235b2c9:;
  /* 1235b2c9 mov dword ptr [ebp - 0x14], 0x1237ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1237ea60u));
L_1235b2d0:;
  /* 1235b2d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235b2d3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1235b2d7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1235b2da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b2dc je 0x1235b2ee */
  if (C.zf) goto L_1235b2ee;
  /* 1235b2de push 2 */
  push32((uint32_t)(0x2u));
  /* 1235b2e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235b2e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235b2e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1235b2e6 call 0x1235cb10 */
  push32(0x1235b2ebu); f_1235cb10();
  /* 1235b2eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235b2ee:;
  /* 1235b2ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b2f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1235b2f4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1235b2f7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1235b2f9 jmp 0x1235b319 */
  goto L_1235b319;
L_1235b2fb:;
  /* 1235b2fb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1235b302 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b305 push edx */
  push32((uint32_t)(EDX));
  /* 1235b306 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1235b309 push eax */
  push32((uint32_t)(EAX));
  /* 1235b30a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235b30d push ecx */
  push32((uint32_t)(ECX));
  /* 1235b30e call 0x1235cc60 */
  push32(0x1235b313u); f_1235cc60();
  /* 1235b313 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b316 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1235b319:;
  /* 1235b319 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235b31c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b31f je 0x1235b335 */
  if (C.zf) goto L_1235b335;
  /* 1235b321 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b324 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1235b327 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1235b32a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b32d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1235b330 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235b333 jmp 0x1235b33d */
  goto L_1235b33d;
L_1235b335:;
  /* 1235b335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235b338 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1235b33d:;
  /* 1235b33d pop edi */
  EDI = (pop32());
  /* 1235b33e pop esi */
  ESI = (pop32());
  /* 1235b33f pop ebx */
  EBX = (pop32());
  /* 1235b340 mov esp, ebp */
  ESP = (EBP);
  /* 1235b342 pop ebp */
  EBP = (pop32());
  /* 1235b343 ret  */
  ESPCHK(0x1235b0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b350 @ 0x1235b350 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1235b350(void) {
  FTRACE(0x1235b350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235b350 push ebp */
  push32((uint32_t)(EBP));
  /* 1235b351 mov ebp, esp */
  EBP = (ESP);
  /* 1235b353 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b359 push ebx */
  push32((uint32_t)(EBX));
  /* 1235b35a push esi */
  push32((uint32_t)(ESI));
  /* 1235b35b push edi */
  push32((uint32_t)(EDI));
  /* 1235b35c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1235b363 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1235b36d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1235b374:;
  /* 1235b374 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235b377 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1235b379 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1235b37c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b380 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235b383 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b386 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1235b389 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235b38b je 0x1235bf67 */
  if (C.zf) goto L_1235bf67;
  /* 1235b391 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b398 jl 0x1235bf67 */
  if ((C.sf!=C.of)) goto L_1235bf67;
  /* 1235b39e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b3a2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b3a5 jl 0x1235b3c6 */
  if ((C.sf!=C.of)) goto L_1235b3c6;
  /* 1235b3a7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b3ab cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b3ae jg 0x1235b3c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1235b3c6;
  /* 1235b3b0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b3b4 movsx ecx, byte ptr [eax + 0x1237c014] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1237c014))));
  /* 1235b3bb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1235b3be mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1235b3c4 jmp 0x1235b3d0 */
  goto L_1235b3d0;
L_1235b3c6:;
  /* 1235b3c6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1235b3d0:;
  /* 1235b3d0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1235b3d6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1235b3d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235b3dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235b3df movsx edx, byte ptr [ecx + eax*8 + 0x1237c034] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1237c034))));
  /* 1235b3e7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1235b3ea mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1235b3ed mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235b3f0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1235b3f6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b3fd ja 0x1235bf62 */
  if ((!C.cf&&!C.zf)) goto L_1235bf62;
  /* 1235b403 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1235b409 jmp dword ptr [ecx*4 + 0x1235bf74] */
  switch (ECX) {
    case 0: goto L_1235b410;
    case 1: goto L_1235b4aa;
    case 2: goto L_1235b4ec;
    case 3: goto L_1235b55b;
    case 4: goto L_1235b5b3;
    case 5: goto L_1235b5c2;
    case 6: goto L_1235b60e;
    case 7: goto L_1235b6a1;
    case 8: goto L_1235b538;
    case 9: goto L_1235b543;
    case 10: goto L_1235b52e;
    case 11: goto L_1235b523;
    case 12: goto L_1235b54e;
    case 13: goto L_1235b556;
    default: x86_unimpl("switch@0x1235b409 out of table"); return;
  }
L_1235b410:;
  /* 1235b410 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1235b417 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235b41a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1235b420 mov eax, dword ptr [0x1237ec98] */
  EAX = (r32((uint32_t)(0x1237ec98)));
  /* 1235b425 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235b427 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1235b42b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1235b431 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235b433 je 0x1235b48d */
  if (C.zf) goto L_1235b48d;
  /* 1235b435 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1235b43b push edx */
  push32((uint32_t)(EDX));
  /* 1235b43c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235b43f push eax */
  push32((uint32_t)(EAX));
  /* 1235b440 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b444 push ecx */
  push32((uint32_t)(ECX));
  /* 1235b445 call 0x1235c080 */
  push32(0x1235b44au); f_1235c080();
  /* 1235b44a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b44d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235b450 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1235b452 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1235b455 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235b458 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b45b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1235b45e:;
  /* 1235b45e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b462 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235b464 jne 0x1235b487 */
  if (!C.zf) goto L_1235b487;
  /* 1235b466 push 0x1237c0b4 */
  push32((uint32_t)(0x1237c0b4u));
  /* 1235b46b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235b46d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1235b472 push 0x1237c0a8 */
  push32((uint32_t)(0x1237c0a8u));
  /* 1235b477 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235b479 call 0x12353480 */
  push32(0x1235b47eu); f_12353480();
  /* 1235b47e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b481 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b484 jne 0x1235b487 */
  if (!C.zf) goto L_1235b487;
  /* 1235b486 int3  */
  x86_unimpl("int3 @ 0x1235b486");
L_1235b487:;
  /* 1235b487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235b489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b48b jne 0x1235b45e */
  if (!C.zf) goto L_1235b45e;
L_1235b48d:;
  /* 1235b48d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1235b493 push ecx */
  push32((uint32_t)(ECX));
  /* 1235b494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235b497 push edx */
  push32((uint32_t)(EDX));
  /* 1235b498 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b49c push eax */
  push32((uint32_t)(EAX));
  /* 1235b49d call 0x1235c080 */
  push32(0x1235b4a2u); f_1235c080();
  /* 1235b4a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b4a5 jmp 0x1235bf62 */
  goto L_1235bf62;
L_1235b4aa:;
  /* 1235b4aa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1235b4b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b4b4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1235b4ba mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1235b4c0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1235b4c6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1235b4cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1235b4cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235b4d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1235b4e0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1235b4e7 jmp 0x1235bf62 */
  goto L_1235bf62;
L_1235b4ec:;
  /* 1235b4ec movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b4f0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1235b4f6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1235b4fc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b4ff mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1235b505 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b50c ja 0x1235b556 */
  if ((!C.cf&&!C.zf)) goto L_1235b556;
  /* 1235b50e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1235b514 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235b516 mov al, byte ptr [ecx + 0x1235bfac] */
  AL = (r8((uint32_t)(ECX + 0x1235bfac)));
  /* 1235b51c jmp dword ptr [eax*4 + 0x1235bf94] */
  switch (EAX) {
    case 0: goto L_1235b538;
    case 1: goto L_1235b543;
    case 2: goto L_1235b52e;
    case 3: goto L_1235b523;
    case 4: goto L_1235b54e;
    case 5: goto L_1235b556;
    default: x86_unimpl("switch@0x1235b51c out of table"); return;
  }
L_1235b523:;
  /* 1235b523 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b526 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1235b529 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235b52c jmp 0x1235b556 */
  goto L_1235b556;
L_1235b52e:;
  /* 1235b52e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b531 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1235b533 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235b536 jmp 0x1235b556 */
  goto L_1235b556;
L_1235b538:;
  /* 1235b538 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b53b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1235b53e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235b541 jmp 0x1235b556 */
  goto L_1235b556;
L_1235b543:;
  /* 1235b543 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b546 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1235b549 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235b54c jmp 0x1235b556 */
  goto L_1235b556;
L_1235b54e:;
  /* 1235b54e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b551 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1235b553 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235b556:;
  /* 1235b556 jmp 0x1235bf62 */
  goto L_1235bf62;
L_1235b55b:;
  /* 1235b55b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b55f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b562 jne 0x1235b597 */
  if (!C.zf) goto L_1235b597;
  /* 1235b564 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1235b567 push edx */
  push32((uint32_t)(EDX));
  /* 1235b568 call 0x1235c190 */
  push32(0x1235b56du); f_1235c190();
  /* 1235b56d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b570 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1235b576 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b57d jge 0x1235b595 */
  if ((C.sf==C.of)) goto L_1235b595;
  /* 1235b57f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b582 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1235b584 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235b587 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1235b58d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235b58f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1235b595:;
  /* 1235b595 jmp 0x1235b5ae */
  goto L_1235b5ae;
L_1235b597:;
  /* 1235b597 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1235b59d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235b5a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b5a4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1235b5a8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1235b5ae:;
  /* 1235b5ae jmp 0x1235bf62 */
  goto L_1235bf62;
L_1235b5b3:;
  /* 1235b5b3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1235b5bd jmp 0x1235bf62 */
  goto L_1235bf62;
L_1235b5c2:;
  /* 1235b5c2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b5c6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b5c9 jne 0x1235b5f2 */
  if (!C.zf) goto L_1235b5f2;
  /* 1235b5cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1235b5ce push eax */
  push32((uint32_t)(EAX));
  /* 1235b5cf call 0x1235c190 */
  push32(0x1235b5d4u); f_1235c190();
  /* 1235b5d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b5d7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1235b5dd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b5e4 jge 0x1235b5f0 */
  if ((C.sf==C.of)) goto L_1235b5f0;
  /* 1235b5e6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1235b5f0:;
  /* 1235b5f0 jmp 0x1235b609 */
  goto L_1235b609;
L_1235b5f2:;
  /* 1235b5f2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1235b5f8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235b5fb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b5ff lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1235b603 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1235b609:;
  /* 1235b609 jmp 0x1235bf62 */
  goto L_1235bf62;
L_1235b60e:;
  /* 1235b60e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b612 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1235b618 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1235b61e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b621 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1235b627 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b62e ja 0x1235b69c */
  if ((!C.cf&&!C.zf)) goto L_1235b69c;
  /* 1235b630 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1235b636 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235b638 mov al, byte ptr [ecx + 0x1235bfd1] */
  AL = (r8((uint32_t)(ECX + 0x1235bfd1)));
  /* 1235b63e jmp dword ptr [eax*4 + 0x1235bfbd] */
  switch (EAX) {
    case 0: goto L_1235b650;
    case 1: goto L_1235b689;
    case 2: goto L_1235b645;
    case 3: goto L_1235b693;
    case 4: goto L_1235b69c;
    default: x86_unimpl("switch@0x1235b63e out of table"); return;
  }
L_1235b645:;
  /* 1235b645 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b648 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1235b64b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235b64e jmp 0x1235b69c */
  goto L_1235b69c;
L_1235b650:;
  /* 1235b650 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235b653 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235b656 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b659 jne 0x1235b67b */
  if (!C.zf) goto L_1235b67b;
  /* 1235b65b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235b65e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1235b662 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b665 jne 0x1235b67b */
  if (!C.zf) goto L_1235b67b;
  /* 1235b667 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235b66a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b66d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1235b670 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b673 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1235b676 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235b679 jmp 0x1235b687 */
  goto L_1235b687;
L_1235b67b:;
  /* 1235b67b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1235b682 jmp 0x1235b410 */
  goto L_1235b410;
L_1235b687:;
  /* 1235b687 jmp 0x1235b69c */
  goto L_1235b69c;
L_1235b689:;
  /* 1235b689 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b68c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1235b68e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235b691 jmp 0x1235b69c */
  goto L_1235b69c;
L_1235b693:;
  /* 1235b693 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b696 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1235b699 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1235b69c:;
  /* 1235b69c jmp 0x1235bf62 */
  goto L_1235bf62;
L_1235b6a1:;
  /* 1235b6a1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b6a5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1235b6ab mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1235b6b1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b6b4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1235b6ba cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b6c1 ja 0x1235bd87 */
  if ((!C.cf&&!C.zf)) goto L_1235bd87;
  /* 1235b6c7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1235b6cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235b6cf mov cl, byte ptr [edx + 0x1235c03c] */
  CL = (r8((uint32_t)(EDX + 0x1235c03c)));
  /* 1235b6d5 jmp dword ptr [ecx*4 + 0x1235c000] */
  switch (ECX) {
    case 0: goto L_1235b6dc;
    case 1: goto L_1235b970;
    case 2: goto L_1235b800;
    case 3: goto L_1235baa9;
    case 4: goto L_1235b76b;
    case 5: goto L_1235b6f1;
    case 6: goto L_1235ba7b;
    case 7: goto L_1235b980;
    case 8: goto L_1235b925;
    case 9: goto L_1235baf5;
    case 10: goto L_1235ba9f;
    case 11: goto L_1235b816;
    case 12: goto L_1235ba93;
    case 13: goto L_1235bab5;
    case 14: goto L_1235bd87;
    default: x86_unimpl("switch@0x1235b6d5 out of table"); return;
  }
L_1235b6dc:;
  /* 1235b6dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b6df and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1235b6e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b6e6 jne 0x1235b6f1 */
  if (!C.zf) goto L_1235b6f1;
  /* 1235b6e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b6eb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1235b6ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1235b6f1:;
  /* 1235b6f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b6f4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1235b6fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235b6fc je 0x1235b737 */
  if (C.zf) goto L_1235b737;
  /* 1235b6fe lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1235b701 push eax */
  push32((uint32_t)(EAX));
  /* 1235b702 call 0x1235c1d0 */
  push32(0x1235b707u); f_1235c1d0();
  /* 1235b707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b70a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1235b70e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1235b712 push ecx */
  push32((uint32_t)(ECX));
  /* 1235b713 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1235b719 push edx */
  push32((uint32_t)(EDX));
  /* 1235b71a call 0x1235d2b0 */
  push32(0x1235b71fu); f_1235d2b0();
  /* 1235b71f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b722 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1235b725 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b729 jge 0x1235b735 */
  if ((C.sf==C.of)) goto L_1235b735;
  /* 1235b72b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1235b735:;
  /* 1235b735 jmp 0x1235b75d */
  goto L_1235b75d;
L_1235b737:;
  /* 1235b737 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1235b73a push eax */
  push32((uint32_t)(EAX));
  /* 1235b73b call 0x1235c190 */
  push32(0x1235b740u); f_1235c190();
  /* 1235b740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b743 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1235b74a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1235b750 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1235b756 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1235b75d:;
  /* 1235b75d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1235b763 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1235b766 jmp 0x1235bd87 */
  goto L_1235bd87;
L_1235b76b:;
  /* 1235b76b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1235b76e push eax */
  push32((uint32_t)(EAX));
  /* 1235b76f call 0x1235c190 */
  push32(0x1235b774u); f_1235c190();
  /* 1235b774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b777 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1235b77d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b784 je 0x1235b792 */
  if (C.zf) goto L_1235b792;
  /* 1235b786 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1235b78c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b790 jne 0x1235b7ac */
  if (!C.zf) goto L_1235b7ac;
L_1235b792:;
  /* 1235b792 mov edx, dword ptr [0x1237efb0] */
  EDX = (r32((uint32_t)(0x1237efb0)));
  /* 1235b798 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1235b79b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235b79e push eax */
  push32((uint32_t)(EAX));
  /* 1235b79f call 0x123571f0 */
  push32(0x1235b7a4u); f_123571f0();
  /* 1235b7a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b7a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1235b7aa jmp 0x1235b7fb */
  goto L_1235b7fb;
L_1235b7ac:;
  /* 1235b7ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b7af and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1235b7b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235b7b7 je 0x1235b7dc */
  if (C.zf) goto L_1235b7dc;
  /* 1235b7b9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1235b7bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1235b7c2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1235b7c5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1235b7cb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1235b7ce shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1235b7d0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1235b7d3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1235b7da jmp 0x1235b7fb */
  goto L_1235b7fb;
L_1235b7dc:;
  /* 1235b7dc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1235b7e3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1235b7e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1235b7ec mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1235b7ef mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1235b7f5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1235b7f8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1235b7fb:;
  /* 1235b7fb jmp 0x1235bd87 */
  goto L_1235bd87;
L_1235b800:;
  /* 1235b800 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b803 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1235b809 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235b80b jne 0x1235b816 */
  if (!C.zf) goto L_1235b816;
  /* 1235b80d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b810 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1235b813 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1235b816:;
  /* 1235b816 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b81d jne 0x1235b82b */
  if (!C.zf) goto L_1235b82b;
  /* 1235b81f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1235b829 jmp 0x1235b837 */
  goto L_1235b837;
L_1235b82b:;
  /* 1235b82b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1235b831 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1235b837:;
  /* 1235b837 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1235b83d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1235b843 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1235b846 push edx */
  push32((uint32_t)(EDX));
  /* 1235b847 call 0x1235c190 */
  push32(0x1235b84cu); f_1235c190();
  /* 1235b84c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b84f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1235b852 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b855 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1235b85a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b85c je 0x1235b8c6 */
  if (C.zf) goto L_1235b8c6;
  /* 1235b85e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b862 jne 0x1235b86d */
  if (!C.zf) goto L_1235b86d;
  /* 1235b864 mov ecx, dword ptr [0x1237efb4] */
  ECX = (r32((uint32_t)(0x1237efb4)));
  /* 1235b86a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1235b86d:;
  /* 1235b86d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1235b874 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235b877 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1235b87d:;
  /* 1235b87d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1235b883 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1235b889 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b88c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1235b892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b894 je 0x1235b8b6 */
  if (C.zf) goto L_1235b8b6;
  /* 1235b896 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1235b89c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235b89e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1235b8a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b8a3 je 0x1235b8b6 */
  if (C.zf) goto L_1235b8b6;
  /* 1235b8a5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1235b8ab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b8ae mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1235b8b4 jmp 0x1235b87d */
  goto L_1235b87d;
L_1235b8b6:;
  /* 1235b8b6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1235b8bc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b8bf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1235b8c1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1235b8c4 jmp 0x1235b920 */
  goto L_1235b920;
L_1235b8c6:;
  /* 1235b8c6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b8ca jne 0x1235b8d4 */
  if (!C.zf) goto L_1235b8d4;
  /* 1235b8cc mov eax, dword ptr [0x1237efb0] */
  EAX = (r32((uint32_t)(0x1237efb0)));
  /* 1235b8d1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1235b8d4:;
  /* 1235b8d4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235b8d7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1235b8dd:;
  /* 1235b8dd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1235b8e3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1235b8e9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b8ec mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1235b8f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235b8f4 je 0x1235b914 */
  if (C.zf) goto L_1235b914;
  /* 1235b8f6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1235b8fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235b8ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235b901 je 0x1235b914 */
  if (C.zf) goto L_1235b914;
  /* 1235b903 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1235b909 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b90c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1235b912 jmp 0x1235b8dd */
  goto L_1235b8dd;
L_1235b914:;
  /* 1235b914 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1235b91a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b91d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1235b920:;
  /* 1235b920 jmp 0x1235bd87 */
  goto L_1235bd87;
L_1235b925:;
  /* 1235b925 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1235b928 push edx */
  push32((uint32_t)(EDX));
  /* 1235b929 call 0x1235c190 */
  push32(0x1235b92eu); f_1235c190();
  /* 1235b92e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b931 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1235b937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b93a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1235b93d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235b93f je 0x1235b953 */
  if (C.zf) goto L_1235b953;
  /* 1235b941 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1235b947 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1235b94e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1235b951 jmp 0x1235b961 */
  goto L_1235b961;
L_1235b953:;
  /* 1235b953 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1235b959 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1235b95f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1235b961:;
  /* 1235b961 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1235b96b jmp 0x1235bd87 */
  goto L_1235bd87;
L_1235b970:;
  /* 1235b970 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1235b977 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1235b97a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1235b97d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1235b980:;
  /* 1235b980 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235b983 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1235b985 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235b988 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1235b98e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1235b991 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b998 jge 0x1235b9a6 */
  if ((C.sf==C.of)) goto L_1235b9a6;
  /* 1235b99a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1235b9a4 jmp 0x1235b9c2 */
  goto L_1235b9c2;
L_1235b9a6:;
  /* 1235b9a6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b9ad jne 0x1235b9c2 */
  if (!C.zf) goto L_1235b9c2;
  /* 1235b9af movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b9b3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235b9b6 jne 0x1235b9c2 */
  if (!C.zf) goto L_1235b9c2;
  /* 1235b9b8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1235b9c2:;
  /* 1235b9c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235b9c5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235b9c8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1235b9cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235b9ce sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235b9d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1235b9d3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1235b9d6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1235b9dc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1235b9e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235b9e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1235b9e6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1235b9ec push edx */
  push32((uint32_t)(EDX));
  /* 1235b9ed movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235b9f1 push eax */
  push32((uint32_t)(EAX));
  /* 1235b9f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235b9f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1235b9f6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1235b9fc push edx */
  push32((uint32_t)(EDX));
  /* 1235b9fd call dword ptr [0x1237f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1237f3a0))), 0x1235ba03u);
  /* 1235ba03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ba06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ba09 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1235ba0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235ba10 je 0x1235ba28 */
  if (C.zf) goto L_1235ba28;
  /* 1235ba12 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ba19 jne 0x1235ba28 */
  if (!C.zf) goto L_1235ba28;
  /* 1235ba1b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235ba1e push ecx */
  push32((uint32_t)(ECX));
  /* 1235ba1f call dword ptr [0x1237f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1237f3ac))), 0x1235ba25u);
  /* 1235ba25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235ba28:;
  /* 1235ba28 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1235ba2c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ba2f jne 0x1235ba4a */
  if (!C.zf) goto L_1235ba4a;
  /* 1235ba31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ba34 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1235ba39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235ba3b jne 0x1235ba4a */
  if (!C.zf) goto L_1235ba4a;
  /* 1235ba3d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235ba40 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ba41 call dword ptr [0x1237f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1237f3a4))), 0x1235ba47u);
  /* 1235ba47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235ba4a:;
  /* 1235ba4a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235ba4d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1235ba50 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ba53 jne 0x1235ba67 */
  if (!C.zf) goto L_1235ba67;
  /* 1235ba55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ba58 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1235ba5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235ba5e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235ba61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ba64 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1235ba67:;
  /* 1235ba67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235ba6a push eax */
  push32((uint32_t)(EAX));
  /* 1235ba6b call 0x123571f0 */
  push32(0x1235ba70u); f_123571f0();
  /* 1235ba70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ba73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1235ba76 jmp 0x1235bd87 */
  goto L_1235bd87;
L_1235ba7b:;
  /* 1235ba7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ba7e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1235ba81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235ba84 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1235ba8e jmp 0x1235bb15 */
  goto L_1235bb15;
L_1235ba93:;
  /* 1235ba93 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1235ba9d jmp 0x1235bb15 */
  goto L_1235bb15;
L_1235ba9f:;
  /* 1235ba9f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1235baa9:;
  /* 1235baa9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1235bab3 jmp 0x1235babf */
  goto L_1235babf;
L_1235bab5:;
  /* 1235bab5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1235babf:;
  /* 1235babf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1235bac9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bacc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1235bad2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235bad4 je 0x1235baf3 */
  if (C.zf) goto L_1235baf3;
  /* 1235bad6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1235badd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1235bae3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bae6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1235baec mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1235baf3:;
  /* 1235baf3 jmp 0x1235bb15 */
  goto L_1235bb15;
L_1235baf5:;
  /* 1235baf5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1235baff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bb02 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1235bb08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235bb0a je 0x1235bb15 */
  if (C.zf) goto L_1235bb15;
  /* 1235bb0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bb0f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1235bb12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1235bb15:;
  /* 1235bb15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bb18 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1235bb1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235bb1f je 0x1235bb3e */
  if (C.zf) goto L_1235bb3e;
  /* 1235bb21 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1235bb24 push ecx */
  push32((uint32_t)(ECX));
  /* 1235bb25 call 0x1235c1b0 */
  push32(0x1235bb2au); f_1235c1b0();
  /* 1235bb2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bb2d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1235bb33 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1235bb39 jmp 0x1235bbcf */
  goto L_1235bbcf;
L_1235bb3e:;
  /* 1235bb3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bb41 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1235bb44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235bb46 je 0x1235bb90 */
  if (C.zf) goto L_1235bb90;
  /* 1235bb48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bb4b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1235bb4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235bb50 je 0x1235bb70 */
  if (C.zf) goto L_1235bb70;
  /* 1235bb52 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1235bb55 push ecx */
  push32((uint32_t)(ECX));
  /* 1235bb56 call 0x1235c190 */
  push32(0x1235bb5bu); f_1235c190();
  /* 1235bb5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bb5e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1235bb61 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1235bb62 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1235bb68 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1235bb6e jmp 0x1235bb8e */
  goto L_1235bb8e;
L_1235bb70:;
  /* 1235bb70 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1235bb73 push edx */
  push32((uint32_t)(EDX));
  /* 1235bb74 call 0x1235c190 */
  push32(0x1235bb79u); f_1235c190();
  /* 1235bb79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bb7c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235bb81 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1235bb82 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1235bb88 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1235bb8e:;
  /* 1235bb8e jmp 0x1235bbcf */
  goto L_1235bbcf;
L_1235bb90:;
  /* 1235bb90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bb93 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1235bb96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235bb98 je 0x1235bbb5 */
  if (C.zf) goto L_1235bbb5;
  /* 1235bb9a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1235bb9d push ecx */
  push32((uint32_t)(ECX));
  /* 1235bb9e call 0x1235c190 */
  push32(0x1235bba3u); f_1235c190();
  /* 1235bba3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bba6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1235bba7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1235bbad mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1235bbb3 jmp 0x1235bbcf */
  goto L_1235bbcf;
L_1235bbb5:;
  /* 1235bbb5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1235bbb8 push edx */
  push32((uint32_t)(EDX));
  /* 1235bbb9 call 0x1235c190 */
  push32(0x1235bbbeu); f_1235c190();
  /* 1235bbbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bbc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235bbc3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1235bbc9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1235bbcf:;
  /* 1235bbcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bbd2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1235bbd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235bbd7 je 0x1235bc17 */
  if (C.zf) goto L_1235bc17;
  /* 1235bbd9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235bbe0 jg 0x1235bc17 */
  if ((!C.zf&&C.sf==C.of)) goto L_1235bc17;
  /* 1235bbe2 jl 0x1235bbed */
  if ((C.sf!=C.of)) goto L_1235bbed;
  /* 1235bbe4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235bbeb jae 0x1235bc17 */
  if (!C.cf) goto L_1235bc17;
L_1235bbed:;
  /* 1235bbed mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1235bbf3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235bbf5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1235bbfb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bbfe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235bc00 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1235bc06 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1235bc0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bc0f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1235bc12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235bc15 jmp 0x1235bc2f */
  goto L_1235bc2f;
L_1235bc17:;
  /* 1235bc17 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1235bc1d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1235bc23 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1235bc29 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1235bc2f:;
  /* 1235bc2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bc32 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1235bc38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235bc3a jne 0x1235bc57 */
  if (!C.zf) goto L_1235bc57;
  /* 1235bc3c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1235bc42 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1235bc48 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1235bc4b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1235bc51 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1235bc57:;
  /* 1235bc57 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235bc5e jge 0x1235bc6c */
  if ((C.sf==C.of)) goto L_1235bc6c;
  /* 1235bc60 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1235bc6a jmp 0x1235bc75 */
  goto L_1235bc75;
L_1235bc6c:;
  /* 1235bc6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bc6f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1235bc72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1235bc75:;
  /* 1235bc75 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1235bc7b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1235bc81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235bc83 jne 0x1235bc8c */
  if (!C.zf) goto L_1235bc8c;
  /* 1235bc85 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1235bc8c:;
  /* 1235bc8c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1235bc8f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1235bc92:;
  /* 1235bc92 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1235bc98 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1235bc9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235bca1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1235bca7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235bca9 jg 0x1235bcbf */
  if ((!C.zf&&C.sf==C.of)) goto L_1235bcbf;
  /* 1235bcab mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1235bcb1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1235bcb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235bcb9 je 0x1235bd40 */
  if (C.zf) goto L_1235bd40;
L_1235bcbf:;
  /* 1235bcbf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1235bcc5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1235bcc6 push edx */
  push32((uint32_t)(EDX));
  /* 1235bcc7 push eax */
  push32((uint32_t)(EAX));
  /* 1235bcc8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1235bcce push edx */
  push32((uint32_t)(EDX));
  /* 1235bccf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1235bcd5 push eax */
  push32((uint32_t)(EAX));
  /* 1235bcd6 call 0x1235b050 */
  push32(0x1235bcdbu); f_1235b050();
  /* 1235bcdb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bcde mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1235bce4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1235bcea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1235bceb push edx */
  push32((uint32_t)(EDX));
  /* 1235bcec push eax */
  push32((uint32_t)(EAX));
  /* 1235bced mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1235bcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1235bcf4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1235bcfa push edx */
  push32((uint32_t)(EDX));
  /* 1235bcfb call 0x1235afe0 */
  push32(0x1235bd00u); f_1235afe0();
  /* 1235bd00 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1235bd06 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1235bd0c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235bd13 jle 0x1235bd27 */
  if ((C.zf||C.sf!=C.of)) goto L_1235bd27;
  /* 1235bd15 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1235bd1b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bd21 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1235bd27:;
  /* 1235bd27 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235bd2a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1235bd30 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1235bd32 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235bd35 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235bd38 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1235bd3b jmp 0x1235bc92 */
  goto L_1235bc92;
L_1235bd40:;
  /* 1235bd40 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1235bd43 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235bd46 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1235bd49 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235bd4c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bd4f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1235bd52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bd55 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1235bd5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235bd5c je 0x1235bd87 */
  if (C.zf) goto L_1235bd87;
  /* 1235bd5e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235bd61 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235bd64 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235bd67 jne 0x1235bd6f */
  if (!C.zf) goto L_1235bd6f;
  /* 1235bd69 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235bd6d jne 0x1235bd87 */
  if (!C.zf) goto L_1235bd87;
L_1235bd6f:;
  /* 1235bd6f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235bd72 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235bd75 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1235bd78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235bd7b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1235bd7e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235bd81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bd84 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1235bd87:;
  /* 1235bd87 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235bd8e jne 0x1235bf62 */
  if (!C.zf) goto L_1235bf62;
  /* 1235bd94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bd97 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1235bd9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235bd9c je 0x1235bded */
  if (C.zf) goto L_1235bded;
  /* 1235bd9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bda1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1235bda7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235bda9 je 0x1235bdbb */
  if (C.zf) goto L_1235bdbb;
  /* 1235bdab mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1235bdb2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1235bdb9 jmp 0x1235bded */
  goto L_1235bded;
L_1235bdbb:;
  /* 1235bdbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bdbe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1235bdc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235bdc3 je 0x1235bdd5 */
  if (C.zf) goto L_1235bdd5;
  /* 1235bdc5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1235bdcc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1235bdd3 jmp 0x1235bded */
  goto L_1235bded;
L_1235bdd5:;
  /* 1235bdd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bdd8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1235bddb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235bddd je 0x1235bded */
  if (C.zf) goto L_1235bded;
  /* 1235bddf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1235bde6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1235bded:;
  /* 1235bded mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1235bdf3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235bdf6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235bdf9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1235bdff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235be02 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1235be05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235be07 jne 0x1235be25 */
  if (!C.zf) goto L_1235be25;
  /* 1235be09 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1235be0f push eax */
  push32((uint32_t)(EAX));
  /* 1235be10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235be13 push ecx */
  push32((uint32_t)(ECX));
  /* 1235be14 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1235be1a push edx */
  push32((uint32_t)(EDX));
  /* 1235be1b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1235be1d call 0x1235c100 */
  push32(0x1235be22u); f_1235c100();
  /* 1235be22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235be25:;
  /* 1235be25 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1235be2b push eax */
  push32((uint32_t)(EAX));
  /* 1235be2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235be2f push ecx */
  push32((uint32_t)(ECX));
  /* 1235be30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235be33 push edx */
  push32((uint32_t)(EDX));
  /* 1235be34 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1235be3a push eax */
  push32((uint32_t)(EAX));
  /* 1235be3b call 0x1235c140 */
  push32(0x1235be40u); f_1235c140();
  /* 1235be40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235be43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235be46 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1235be49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235be4b je 0x1235be73 */
  if (C.zf) goto L_1235be73;
  /* 1235be4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235be50 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1235be53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235be55 jne 0x1235be73 */
  if (!C.zf) goto L_1235be73;
  /* 1235be57 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1235be5d push eax */
  push32((uint32_t)(EAX));
  /* 1235be5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235be61 push ecx */
  push32((uint32_t)(ECX));
  /* 1235be62 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1235be68 push edx */
  push32((uint32_t)(EDX));
  /* 1235be69 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1235be6b call 0x1235c100 */
  push32(0x1235be70u); f_1235c100();
  /* 1235be70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235be73:;
  /* 1235be73 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235be77 je 0x1235bf21 */
  if (C.zf) goto L_1235bf21;
  /* 1235be7d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235be81 jle 0x1235bf21 */
  if ((C.zf||C.sf!=C.of)) goto L_1235bf21;
  /* 1235be87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235be8a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1235be90 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235be93 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1235be99:;
  /* 1235be99 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1235be9f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1235bea5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235bea8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1235beae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235beb0 je 0x1235bf1f */
  if (C.zf) goto L_1235bf1f;
  /* 1235beb2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1235beb8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1235bebb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1235bec2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1235bec9 push eax */
  push32((uint32_t)(EAX));
  /* 1235beca lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1235bed0 push ecx */
  push32((uint32_t)(ECX));
  /* 1235bed1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1235bed7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235beda mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1235bee0 call 0x1235d2b0 */
  push32(0x1235bee5u); f_1235d2b0();
  /* 1235bee5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bee8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1235beee cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235bef5 jg 0x1235bef9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1235bef9;
  /* 1235bef7 jmp 0x1235bf1f */
  goto L_1235bf1f;
L_1235bef9:;
  /* 1235bef9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1235beff push eax */
  push32((uint32_t)(EAX));
  /* 1235bf00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235bf03 push ecx */
  push32((uint32_t)(ECX));
  /* 1235bf04 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1235bf0a push edx */
  push32((uint32_t)(EDX));
  /* 1235bf0b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1235bf11 push eax */
  push32((uint32_t)(EAX));
  /* 1235bf12 call 0x1235c140 */
  push32(0x1235bf17u); f_1235c140();
  /* 1235bf17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235bf1a jmp 0x1235be99 */
  goto L_1235be99;
L_1235bf1f:;
  /* 1235bf1f jmp 0x1235bf3c */
  goto L_1235bf3c;
L_1235bf21:;
  /* 1235bf21 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1235bf27 push ecx */
  push32((uint32_t)(ECX));
  /* 1235bf28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235bf2b push edx */
  push32((uint32_t)(EDX));
  /* 1235bf2c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235bf2f push eax */
  push32((uint32_t)(EAX));
  /* 1235bf30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235bf33 push ecx */
  push32((uint32_t)(ECX));
  /* 1235bf34 call 0x1235c140 */
  push32(0x1235bf39u); f_1235c140();
  /* 1235bf39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235bf3c:;
  /* 1235bf3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235bf3f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1235bf42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235bf44 je 0x1235bf62 */
  if (C.zf) goto L_1235bf62;
  /* 1235bf46 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1235bf4c push eax */
  push32((uint32_t)(EAX));
  /* 1235bf4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235bf50 push ecx */
  push32((uint32_t)(ECX));
  /* 1235bf51 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1235bf57 push edx */
  push32((uint32_t)(EDX));
  /* 1235bf58 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1235bf5a call 0x1235c100 */
  push32(0x1235bf5fu); f_1235c100();
  /* 1235bf5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235bf62:;
  /* 1235bf62 jmp 0x1235b374 */
  goto L_1235b374;
L_1235bf67:;
  /* 1235bf67 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1235bf6d pop edi */
  EDI = (pop32());
  /* 1235bf6e pop esi */
  ESI = (pop32());
  /* 1235bf6f pop ebx */
  EBX = (pop32());
  /* 1235bf70 mov esp, ebp */
  ESP = (EBP);
  /* 1235bf72 pop ebp */
  EBP = (pop32());
  /* 1235bf73 ret  */
  ESPCHK(0x1235b350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c080 @ 0x1235c080 (119 bytes, 44 insns) */
void f_1235c080(void) {
  FTRACE(0x1235c080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c080 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c081 mov ebp, esp */
  EBP = (ESP);
  /* 1235c083 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c084 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c087 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1235c08a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c08d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c090 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1235c093 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c096 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c09a jl 0x1235c0c2 */
  if ((C.sf!=C.of)) goto L_1235c0c2;
  /* 1235c09c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c09f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1235c0a1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1235c0a4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1235c0a6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1235c0aa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235c0b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235c0b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c0b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1235c0b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c0bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c0be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1235c0c0 jmp 0x1235c0d5 */
  goto L_1235c0d5;
L_1235c0c2:;
  /* 1235c0c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c0c5 push edx */
  push32((uint32_t)(EDX));
  /* 1235c0c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c0c9 push eax */
  push32((uint32_t)(EAX));
  /* 1235c0ca call 0x1235b0d0 */
  push32(0x1235c0cfu); f_1235b0d0();
  /* 1235c0cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c0d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235c0d5:;
  /* 1235c0d5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c0d9 jne 0x1235c0e6 */
  if (!C.zf) goto L_1235c0e6;
  /* 1235c0db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c0de mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1235c0e4 jmp 0x1235c0f3 */
  goto L_1235c0f3;
L_1235c0e6:;
  /* 1235c0e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c0e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1235c0eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c0ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c0f1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1235c0f3:;
  /* 1235c0f3 mov esp, ebp */
  ESP = (EBP);
  /* 1235c0f5 pop ebp */
  EBP = (pop32());
  /* 1235c0f6 ret  */
  ESPCHK(0x1235c080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c100 @ 0x1235c100 (53 bytes, 23 insns) */
void f_1235c100(void) {
  FTRACE(0x1235c100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c100 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c101 mov ebp, esp */
  EBP = (ESP);
L_1235c103:;
  /* 1235c103 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c106 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c109 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c10c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1235c10f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235c111 jle 0x1235c133 */
  if ((C.zf||C.sf!=C.of)) goto L_1235c133;
  /* 1235c113 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235c116 push edx */
  push32((uint32_t)(EDX));
  /* 1235c117 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c11a push eax */
  push32((uint32_t)(EAX));
  /* 1235c11b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c11e push ecx */
  push32((uint32_t)(ECX));
  /* 1235c11f call 0x1235c080 */
  push32(0x1235c124u); f_1235c080();
  /* 1235c124 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c127 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235c12a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c12d jne 0x1235c131 */
  if (!C.zf) goto L_1235c131;
  /* 1235c12f jmp 0x1235c133 */
  goto L_1235c133;
L_1235c131:;
  /* 1235c131 jmp 0x1235c103 */
  goto L_1235c103;
L_1235c133:;
  /* 1235c133 pop ebp */
  EBP = (pop32());
  /* 1235c134 ret  */
  ESPCHK(0x1235c100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c140 @ 0x1235c140 (74 bytes, 31 insns) */
void f_1235c140(void) {
  FTRACE(0x1235c140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c140 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c141 mov ebp, esp */
  EBP = (ESP);
  /* 1235c143 push ecx */
  push32((uint32_t)(ECX));
L_1235c144:;
  /* 1235c144 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c147 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c14a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c14d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1235c150 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235c152 jle 0x1235c186 */
  if ((C.zf||C.sf!=C.of)) goto L_1235c186;
  /* 1235c154 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235c157 push edx */
  push32((uint32_t)(EDX));
  /* 1235c158 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c15b push eax */
  push32((uint32_t)(EAX));
  /* 1235c15c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c15f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235c162 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235c165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235c168 push eax */
  push32((uint32_t)(EAX));
  /* 1235c169 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c16c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c16f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1235c172 call 0x1235c080 */
  push32(0x1235c177u); f_1235c080();
  /* 1235c177 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c17a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235c17d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c180 jne 0x1235c184 */
  if (!C.zf) goto L_1235c184;
  /* 1235c182 jmp 0x1235c186 */
  goto L_1235c186;
L_1235c184:;
  /* 1235c184 jmp 0x1235c144 */
  goto L_1235c144;
L_1235c186:;
  /* 1235c186 mov esp, ebp */
  ESP = (EBP);
  /* 1235c188 pop ebp */
  EBP = (pop32());
  /* 1235c189 ret  */
  ESPCHK(0x1235c140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c190 @ 0x1235c190 (26 bytes, 12 insns) */
void f_1235c190(void) {
  FTRACE(0x1235c190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c190 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c191 mov ebp, esp */
  EBP = (ESP);
  /* 1235c193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c196 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235c198 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c19b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c19e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1235c1a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c1a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235c1a5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1235c1a8 pop ebp */
  EBP = (pop32());
  /* 1235c1a9 ret  */
  ESPCHK(0x1235c190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b0 @ 0x1235c1b0 (31 bytes, 14 insns) */
void f_1235c1b0(void) {
  FTRACE(0x1235c1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1235c1b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c1b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235c1b8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c1bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c1be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1235c1c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c1c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235c1c5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c1c8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1235c1ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1235c1cd pop ebp */
  EBP = (pop32());
  /* 1235c1ce ret  */
  ESPCHK(0x1235c1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d0 @ 0x1235c1d0 (27 bytes, 12 insns) */
void f_1235c1d0(void) {
  FTRACE(0x1235c1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1235c1d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c1d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235c1d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c1db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c1de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1235c1e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c1e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235c1e5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1235c1e9 pop ebp */
  EBP = (pop32());
  /* 1235c1ea ret  */
  ESPCHK(0x1235c1d0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1235c1f0 (145 bytes, 42 insns) */
void f_1235c1f0(void) {
  FTRACE(0x1235c1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1235c1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c1f4 call 0x1235c2a0 */
  push32(0x1235c1f9u); f_1235c2a0();
  /* 1235c1f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c1fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1235c1fe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235c205 jmp 0x1235c210 */
  goto L_1235c210;
L_1235c207:;
  /* 1235c207 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235c20a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c20d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1235c210:;
  /* 1235c210 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c214 jae 0x1235c23a */
  if (!C.cf) goto L_1235c23a;
  /* 1235c216 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235c219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c21c cmp ecx, dword ptr [eax*8 + 0x1237efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1237efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c223 jne 0x1235c238 */
  if (!C.zf) goto L_1235c238;
  /* 1235c225 call 0x1235c290 */
  push32(0x1235c22au); f_1235c290();
  /* 1235c22a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235c22d mov ecx, dword ptr [edx*8 + 0x1237efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1237efbc)));
  /* 1235c234 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1235c236 jmp 0x1235c27d */
  goto L_1235c27d;
L_1235c238:;
  /* 1235c238 jmp 0x1235c207 */
  goto L_1235c207;
L_1235c23a:;
  /* 1235c23a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c23e jb 0x1235c253 */
  if (C.cf) goto L_1235c253;
  /* 1235c240 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c244 ja 0x1235c253 */
  if ((!C.cf&&!C.zf)) goto L_1235c253;
  /* 1235c246 call 0x1235c290 */
  push32(0x1235c24bu); f_1235c290();
  /* 1235c24b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1235c251 jmp 0x1235c27d */
  goto L_1235c27d;
L_1235c253:;
  /* 1235c253 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c25a jb 0x1235c272 */
  if (C.cf) goto L_1235c272;
  /* 1235c25c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c263 ja 0x1235c272 */
  if ((!C.cf&&!C.zf)) goto L_1235c272;
  /* 1235c265 call 0x1235c290 */
  push32(0x1235c26au); f_1235c290();
  /* 1235c26a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1235c270 jmp 0x1235c27d */
  goto L_1235c27d;
L_1235c272:;
  /* 1235c272 call 0x1235c290 */
  push32(0x1235c277u); f_1235c290();
  /* 1235c277 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1235c27d:;
  /* 1235c27d mov esp, ebp */
  ESP = (EBP);
  /* 1235c27f pop ebp */
  EBP = (pop32());
  /* 1235c280 ret  */
  ESPCHK(0x1235c1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c290 @ 0x1235c290 (13 bytes, 6 insns) */
void f_1235c290(void) {
  FTRACE(0x1235c290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c290 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c291 mov ebp, esp */
  EBP = (ESP);
  /* 1235c293 call 0x12353e00 */
  push32(0x1235c298u); f_12353e00();
  /* 1235c298 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c29b pop ebp */
  EBP = (pop32());
  /* 1235c29c ret  */
  ESPCHK(0x1235c290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2a0 @ 0x1235c2a0 (13 bytes, 6 insns) */
void f_1235c2a0(void) {
  FTRACE(0x1235c2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1235c2a3 call 0x12353e00 */
  push32(0x1235c2a8u); f_12353e00();
  /* 1235c2a8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c2ab pop ebp */
  EBP = (pop32());
  /* 1235c2ac ret  */
  ESPCHK(0x1235c2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2b0 @ 0x1235c2b0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_1235c2b0(void) {
  FTRACE(0x1235c2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1235c2b3 push edi */
  push32((uint32_t)(EDI));
  /* 1235c2b4 push esi */
  push32((uint32_t)(ESI));
  /* 1235c2b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c2b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c2bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c2be mov eax, ecx */
  EAX = (ECX);
  /* 1235c2c0 mov edx, ecx */
  EDX = (ECX);
  /* 1235c2c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c2c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c2c6 jbe 0x1235c2d0 */
  if ((C.cf||C.zf)) goto L_1235c2d0;
  /* 1235c2c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c2ca jb 0x1235c448 */
  if (C.cf) goto L_1235c448;
L_1235c2d0:;
  /* 1235c2d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1235c2d6 jne 0x1235c2ec */
  if (!C.zf) goto L_1235c2ec;
  /* 1235c2d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235c2db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1235c2de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c2e1 jb 0x1235c30c */
  if (C.cf) goto L_1235c30c;
  /* 1235c2e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235c2e5 jmp dword ptr [edx*4 + 0x1235c3f8] */
  switch (EDX) {
    case 0: goto L_1235c408;
    case 1: goto L_1235c410;
    case 2: goto L_1235c41c;
    case 3: goto L_1235c430;
    default: x86_unimpl("switch@0x1235c2e5 out of table"); return;
  }
L_1235c2ec:;
  /* 1235c2ec mov eax, edi */
  EAX = (EDI);
  /* 1235c2ee mov edx, 3 */
  EDX = (0x3u);
  /* 1235c2f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c2f6 jb 0x1235c304 */
  if (C.cf) goto L_1235c304;
  /* 1235c2f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1235c2fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c2fd jmp dword ptr [eax*4 + 0x1235c310] */
  switch (EAX) {
    case 1: goto L_1235c320;
    case 2: goto L_1235c34c;
    case 3: goto L_1235c370;
    default: x86_unimpl("switch@0x1235c2fd out of table"); return;
  }
L_1235c304:;
  /* 1235c304 jmp dword ptr [ecx*4 + 0x1235c408] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1235c408)))); return;
  /* 1235c30b nop  */
  /* nop */
L_1235c30c:;
  /* 1235c30c jmp dword ptr [ecx*4 + 0x1235c38c] */
  switch (ECX) {
    case 0: goto L_1235c3ef;
    case 1: goto L_1235c3dc;
    case 2: goto L_1235c3d4;
    case 3: goto L_1235c3cc;
    case 4: goto L_1235c3c4;
    case 5: goto L_1235c3bc;
    case 6: goto L_1235c3b4;
    case 7: goto L_1235c3ac;
    default: x86_unimpl("switch@0x1235c30c out of table"); return;
  }
  /* 1235c313 nop  */
  /* nop */
L_1235c320:;
  /* 1235c320 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235c322 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235c324 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235c326 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235c329 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235c32c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235c32f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235c332 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235c335 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c338 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c33b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c33e jb 0x1235c30c */
  if (C.cf) goto L_1235c30c;
  /* 1235c340 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235c342 jmp dword ptr [edx*4 + 0x1235c3f8] */
  switch (EDX) {
    case 0: goto L_1235c408;
    case 1: goto L_1235c410;
    case 2: goto L_1235c41c;
    case 3: goto L_1235c430;
    default: x86_unimpl("switch@0x1235c342 out of table"); return;
  }
  /* 1235c349 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235c34c:;
  /* 1235c34c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235c34e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235c350 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235c352 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235c355 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235c358 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235c35b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c35e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c361 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c364 jb 0x1235c30c */
  if (C.cf) goto L_1235c30c;
  /* 1235c366 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235c368 jmp dword ptr [edx*4 + 0x1235c3f8] */
  switch (EDX) {
    case 0: goto L_1235c408;
    case 1: goto L_1235c410;
    case 2: goto L_1235c41c;
    case 3: goto L_1235c430;
    default: x86_unimpl("switch@0x1235c368 out of table"); return;
  }
  /* 1235c36f nop  */
  /* nop */
L_1235c370:;
  /* 1235c370 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235c372 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235c374 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235c376 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1235c377 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235c37a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1235c37b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c37e jb 0x1235c30c */
  if (C.cf) goto L_1235c30c;
  /* 1235c380 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235c382 jmp dword ptr [edx*4 + 0x1235c3f8] */
  switch (EDX) {
    case 0: goto L_1235c408;
    case 1: goto L_1235c410;
    case 2: goto L_1235c41c;
    case 3: goto L_1235c430;
    default: x86_unimpl("switch@0x1235c382 out of table"); return;
  }
  /* 1235c389 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235c3ac:;
  /* 1235c3ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1235c3b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1235c3b4:;
  /* 1235c3b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1235c3b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1235c3bc:;
  /* 1235c3bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1235c3c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1235c3c4:;
  /* 1235c3c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1235c3c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1235c3cc:;
  /* 1235c3cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1235c3d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1235c3d4:;
  /* 1235c3d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1235c3d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1235c3dc:;
  /* 1235c3dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1235c3e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1235c3e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1235c3eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c3ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1235c3ef:;
  /* 1235c3ef jmp dword ptr [edx*4 + 0x1235c3f8] */
  switch (EDX) {
    case 0: goto L_1235c408;
    case 1: goto L_1235c410;
    case 2: goto L_1235c41c;
    case 3: goto L_1235c430;
    default: x86_unimpl("switch@0x1235c3ef out of table"); return;
  }
  /* 1235c3f6 mov edi, edi */
  EDI = (EDI);
L_1235c408:;
  /* 1235c408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c40b pop esi */
  ESI = (pop32());
  /* 1235c40c pop edi */
  EDI = (pop32());
  /* 1235c40d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235c40e ret  */
  ESPCHK(0x1235c2b0u, _esp0);
  ESP += 4; return;
  /* 1235c40f nop  */
  /* nop */
L_1235c410:;
  /* 1235c410 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235c412 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235c414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c417 pop esi */
  ESI = (pop32());
  /* 1235c418 pop edi */
  EDI = (pop32());
  /* 1235c419 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235c41a ret  */
  ESPCHK(0x1235c2b0u, _esp0);
  ESP += 4; return;
  /* 1235c41b nop  */
  /* nop */
L_1235c41c:;
  /* 1235c41c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235c41e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235c420 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235c423 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235c426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c429 pop esi */
  ESI = (pop32());
  /* 1235c42a pop edi */
  EDI = (pop32());
  /* 1235c42b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235c42c ret  */
  ESPCHK(0x1235c2b0u, _esp0);
  ESP += 4; return;
  /* 1235c42d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235c430:;
  /* 1235c430 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1235c432 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1235c434 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235c437 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235c43a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235c43d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235c440 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c443 pop esi */
  ESI = (pop32());
  /* 1235c444 pop edi */
  EDI = (pop32());
  /* 1235c445 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235c446 ret  */
  ESPCHK(0x1235c2b0u, _esp0);
  ESP += 4; return;
  /* 1235c447 nop  */
  /* nop */
L_1235c448:;
  /* 1235c448 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1235c44c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1235c450 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1235c456 jne 0x1235c47c */
  if (!C.zf) goto L_1235c47c;
  /* 1235c458 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235c45b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1235c45e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c461 jb 0x1235c470 */
  if (C.cf) goto L_1235c470;
  /* 1235c463 std  */
  C.df=1;
  /* 1235c464 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235c466 cld  */
  C.df=0;
  /* 1235c467 jmp dword ptr [edx*4 + 0x1235c590] */
  switch (EDX) {
    case 0: goto L_1235c5a0;
    case 1: goto L_1235c5a8;
    case 2: goto L_1235c5b8;
    case 3: goto L_1235c5cc;
    default: x86_unimpl("switch@0x1235c467 out of table"); return;
  }
  /* 1235c46e mov edi, edi */
  EDI = (EDI);
L_1235c470:;
  /* 1235c470 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235c472 jmp dword ptr [ecx*4 + 0x1235c540] */
  switch (ECX) {
    case 0: goto L_1235c587;
    default: x86_unimpl("switch@0x1235c472 out of table"); return;
  }
  /* 1235c479 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235c47c:;
  /* 1235c47c mov eax, edi */
  EAX = (EDI);
  /* 1235c47e mov edx, 3 */
  EDX = (0x3u);
  /* 1235c483 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c486 jb 0x1235c494 */
  if (C.cf) goto L_1235c494;
  /* 1235c488 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1235c48b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c48d jmp dword ptr [eax*4 + 0x1235c498] */
  switch (EAX) {
    case 1: goto L_1235c4a8;
    case 2: goto L_1235c4c8;
    case 3: goto L_1235c4f0;
    default: x86_unimpl("switch@0x1235c48d out of table"); return;
  }
L_1235c494:;
  /* 1235c494 jmp dword ptr [ecx*4 + 0x1235c590] */
  switch (ECX) {
    case 0: goto L_1235c5a0;
    case 1: goto L_1235c5a8;
    case 2: goto L_1235c5b8;
    case 3: goto L_1235c5cc;
    default: x86_unimpl("switch@0x1235c494 out of table"); return;
  }
  /* 1235c49b nop  */
  /* nop */
L_1235c4a8:;
  /* 1235c4a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235c4ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235c4ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235c4b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1235c4b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235c4b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1235c4b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c4b8 jb 0x1235c470 */
  if (C.cf) goto L_1235c470;
  /* 1235c4ba std  */
  C.df=1;
  /* 1235c4bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235c4bd cld  */
  C.df=0;
  /* 1235c4be jmp dword ptr [edx*4 + 0x1235c590] */
  switch (EDX) {
    case 0: goto L_1235c5a0;
    case 1: goto L_1235c5a8;
    case 2: goto L_1235c5b8;
    case 3: goto L_1235c5cc;
    default: x86_unimpl("switch@0x1235c4be out of table"); return;
  }
  /* 1235c4c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235c4c8:;
  /* 1235c4c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235c4cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235c4cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235c4d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235c4d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235c4d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235c4d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c4dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c4df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c4e2 jb 0x1235c470 */
  if (C.cf) goto L_1235c470;
  /* 1235c4e4 std  */
  C.df=1;
  /* 1235c4e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235c4e7 cld  */
  C.df=0;
  /* 1235c4e8 jmp dword ptr [edx*4 + 0x1235c590] */
  switch (EDX) {
    case 0: goto L_1235c5a0;
    case 1: goto L_1235c5a8;
    case 2: goto L_1235c5b8;
    case 3: goto L_1235c5cc;
    default: x86_unimpl("switch@0x1235c4e8 out of table"); return;
  }
  /* 1235c4ef nop  */
  /* nop */
L_1235c4f0:;
  /* 1235c4f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235c4f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1235c4f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235c4f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235c4fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235c4fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235c501 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235c504 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235c507 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c50a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c50d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c510 jb 0x1235c470 */
  if (C.cf) goto L_1235c470;
  /* 1235c516 std  */
  C.df=1;
  /* 1235c517 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1235c519 cld  */
  C.df=0;
  /* 1235c51a jmp dword ptr [edx*4 + 0x1235c590] */
  switch (EDX) {
    case 0: goto L_1235c5a0;
    case 1: goto L_1235c5a8;
    case 2: goto L_1235c5b8;
    case 3: goto L_1235c5cc;
    default: x86_unimpl("switch@0x1235c51a out of table"); return;
  }
  /* 1235c521 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1235c524 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1235c525 lds esi, ptr [0x35c54c12] */
  x86_unimpl("lds @ 0x1235c525");
  /* 1235c52b adc dl, byte ptr [ebp + eax*8 + 0x35] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBP + EAX*8 + 0x35))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1235c52f adc bl, byte ptr [ebp + eax*8 + 0x35] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBP + EAX*8 + 0x35))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1235c533 adc ah, byte ptr [ebp + eax*8 + 0x35] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EBP + EAX*8 + 0x35))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1235c537 adc ch, byte ptr [ebp + eax*8 + 0x35] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBP + EAX*8 + 0x35))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1235c53b adc dh, byte ptr [ebp + eax*8 + 0x35] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EBP + EAX*8 + 0x35))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1235c544 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1235c548 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1235c54c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1235c550 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1235c554 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1235c558 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1235c55c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1235c560 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1235c564 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1235c568 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1235c56c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1235c570 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1235c574 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1235c578 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1235c57c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1235c583 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c585 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1235c587:;
  /* 1235c587 jmp dword ptr [edx*4 + 0x1235c590] */
  switch (EDX) {
    case 0: goto L_1235c5a0;
    case 1: goto L_1235c5a8;
    case 2: goto L_1235c5b8;
    case 3: goto L_1235c5cc;
    default: x86_unimpl("switch@0x1235c587 out of table"); return;
  }
  /* 1235c58e mov edi, edi */
  EDI = (EDI);
L_1235c5a0:;
  /* 1235c5a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c5a3 pop esi */
  ESI = (pop32());
  /* 1235c5a4 pop edi */
  EDI = (pop32());
  /* 1235c5a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235c5a6 ret  */
  ESPCHK(0x1235c2b0u, _esp0);
  ESP += 4; return;
  /* 1235c5a7 nop  */
  /* nop */
L_1235c5a8:;
  /* 1235c5a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235c5ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235c5ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c5b1 pop esi */
  ESI = (pop32());
  /* 1235c5b2 pop edi */
  EDI = (pop32());
  /* 1235c5b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235c5b4 ret  */
  ESPCHK(0x1235c2b0u, _esp0);
  ESP += 4; return;
  /* 1235c5b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1235c5b8:;
  /* 1235c5b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235c5bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235c5be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235c5c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235c5c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c5c7 pop esi */
  ESI = (pop32());
  /* 1235c5c8 pop edi */
  EDI = (pop32());
  /* 1235c5c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235c5ca ret  */
  ESPCHK(0x1235c2b0u, _esp0);
  ESP += 4; return;
  /* 1235c5cb nop  */
  /* nop */
L_1235c5cc:;
  /* 1235c5cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1235c5cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1235c5d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1235c5d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1235c5d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1235c5db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1235c5de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c5e1 pop esi */
  ESI = (pop32());
  /* 1235c5e2 pop edi */
  EDI = (pop32());
  /* 1235c5e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1235c5e4 ret  */
  ESPCHK(0x1235c2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5f0 @ 0x1235c5f0 (421 bytes, 148 insns) */
void f_1235c5f0(void) {
  FTRACE(0x1235c5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1235c5f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1235c5f5 push 0x1237c0d0 */
  push32((uint32_t)(0x1237c0d0u));
  /* 1235c5fa push 0x1235d4c8 */
  push32((uint32_t)(0x1235d4c8u));
  /* 1235c5ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1235c605 push eax */
  push32((uint32_t)(EAX));
  /* 1235c606 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1235c60d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c610 push ebx */
  push32((uint32_t)(EBX));
  /* 1235c611 push esi */
  push32((uint32_t)(ESI));
  /* 1235c612 push edi */
  push32((uint32_t)(EDI));
  /* 1235c613 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1235c616 cmp dword ptr [0x1238074c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1238074c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c61d jne 0x1235c66e */
  if (!C.zf) goto L_1235c66e;
  /* 1235c61f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1235c622 push eax */
  push32((uint32_t)(EAX));
  /* 1235c623 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235c625 push 0x1237c0c8 */
  push32((uint32_t)(0x1237c0c8u));
  /* 1235c62a push 1 */
  push32((uint32_t)(0x1u));
  /* 1235c62c call dword ptr [0x123832a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832a8))), 0x1235c632u);
  /* 1235c632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235c634 je 0x1235c642 */
  if (C.zf) goto L_1235c642;
  /* 1235c636 mov dword ptr [0x1238074c], 1 */
  w32((uint32_t)(0x1238074c), (0x1u));
  /* 1235c640 jmp 0x1235c66e */
  goto L_1235c66e;
L_1235c642:;
  /* 1235c642 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1235c645 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c646 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235c648 push 0x1237c0c4 */
  push32((uint32_t)(0x1237c0c4u));
  /* 1235c64d push 1 */
  push32((uint32_t)(0x1u));
  /* 1235c64f push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c651 call dword ptr [0x1238330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238330c))), 0x1235c657u);
  /* 1235c657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235c659 je 0x1235c667 */
  if (C.zf) goto L_1235c667;
  /* 1235c65b mov dword ptr [0x1238074c], 2 */
  w32((uint32_t)(0x1238074c), (0x2u));
  /* 1235c665 jmp 0x1235c66e */
  goto L_1235c66e;
L_1235c667:;
  /* 1235c667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c669 jmp 0x1235c798 */
  goto L_1235c798;
L_1235c66e:;
  /* 1235c66e cmp dword ptr [0x1238074c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1238074c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c675 jne 0x1235c6a5 */
  if (!C.zf) goto L_1235c6a5;
  /* 1235c677 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c67b jne 0x1235c686 */
  if (!C.zf) goto L_1235c686;
  /* 1235c67d mov edx, dword ptr [0x12380758] */
  EDX = (r32((uint32_t)(0x12380758)));
  /* 1235c683 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1235c686:;
  /* 1235c686 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235c689 push eax */
  push32((uint32_t)(EAX));
  /* 1235c68a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c68d push ecx */
  push32((uint32_t)(ECX));
  /* 1235c68e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c691 push edx */
  push32((uint32_t)(EDX));
  /* 1235c692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c695 push eax */
  push32((uint32_t)(EAX));
  /* 1235c696 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1235c699 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c69a call dword ptr [0x1238330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238330c))), 0x1235c6a0u);
  /* 1235c6a0 jmp 0x1235c798 */
  goto L_1235c798;
L_1235c6a5:;
  /* 1235c6a5 cmp dword ptr [0x1238074c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1238074c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c6ac jne 0x1235c796 */
  if (!C.zf) goto L_1235c796;
  /* 1235c6b2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c6b6 jne 0x1235c6c1 */
  if (!C.zf) goto L_1235c6c1;
  /* 1235c6b8 mov edx, dword ptr [0x12380768] */
  EDX = (r32((uint32_t)(0x12380768)));
  /* 1235c6be mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1235c6c1:;
  /* 1235c6c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c6c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c6c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c6c8 push eax */
  push32((uint32_t)(EAX));
  /* 1235c6c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c6cc push ecx */
  push32((uint32_t)(ECX));
  /* 1235c6cd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1235c6d0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235c6d2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c6d4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1235c6d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c6da push edx */
  push32((uint32_t)(EDX));
  /* 1235c6db mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235c6de push eax */
  push32((uint32_t)(EAX));
  /* 1235c6df call dword ptr [0x12383370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383370))), 0x1235c6e5u);
  /* 1235c6e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1235c6e8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c6ec jne 0x1235c6f5 */
  if (!C.zf) goto L_1235c6f5;
  /* 1235c6ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c6f0 jmp 0x1235c798 */
  goto L_1235c798;
L_1235c6f5:;
  /* 1235c6f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235c6fc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235c6ff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1235c701 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c704 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1235c706 call 0x12357560 */
  push32(0x1235c70bu); f_12357560();
  /* 1235c70b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1235c70e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1235c711 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235c714 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1235c717 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235c71a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1235c71c push edx */
  push32((uint32_t)(EDX));
  /* 1235c71d push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c71f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235c722 push eax */
  push32((uint32_t)(EAX));
  /* 1235c723 call 0x12358130 */
  push32(0x1235c728u); f_12358130();
  /* 1235c728 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c72b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1235c732 jmp 0x1235c74b */
  goto L_1235c74b;
  /* 1235c734 mov eax, 1 */
  EAX = (0x1u);
  /* 1235c739 ret  */
  ESPCHK(0x1235c5f0u, _esp0);
  ESP += 4; return;
  /* 1235c73a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1235c73d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1235c744 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1235c74b:;
  /* 1235c74b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c74f jne 0x1235c755 */
  if (!C.zf) goto L_1235c755;
  /* 1235c751 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c753 jmp 0x1235c798 */
  goto L_1235c798;
L_1235c755:;
  /* 1235c755 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235c758 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c759 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235c75c push edx */
  push32((uint32_t)(EDX));
  /* 1235c75d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c760 push eax */
  push32((uint32_t)(EAX));
  /* 1235c761 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c764 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c765 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235c767 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235c76a push edx */
  push32((uint32_t)(EDX));
  /* 1235c76b call dword ptr [0x12383370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383370))), 0x1235c771u);
  /* 1235c771 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1235c774 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c778 jne 0x1235c77e */
  if (!C.zf) goto L_1235c77e;
  /* 1235c77a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c77c jmp 0x1235c798 */
  goto L_1235c798;
L_1235c77e:;
  /* 1235c77e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235c781 push eax */
  push32((uint32_t)(EAX));
  /* 1235c782 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235c785 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c786 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235c789 push edx */
  push32((uint32_t)(EDX));
  /* 1235c78a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c78d push eax */
  push32((uint32_t)(EAX));
  /* 1235c78e call dword ptr [0x123832a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832a8))), 0x1235c794u);
  /* 1235c794 jmp 0x1235c798 */
  goto L_1235c798;
L_1235c796:;
  /* 1235c796 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235c798:;
  /* 1235c798 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1235c79b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235c79e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1235c7a5 pop edi */
  EDI = (pop32());
  /* 1235c7a6 pop esi */
  ESI = (pop32());
  /* 1235c7a7 pop ebx */
  EBX = (pop32());
  /* 1235c7a8 mov esp, ebp */
  ESP = (EBP);
  /* 1235c7aa pop ebp */
  EBP = (pop32());
  /* 1235c7ab ret  */
  ESPCHK(0x1235c5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b0 @ 0x1235c7b0 (727 bytes, 263 insns) */
void f_1235c7b0(void) {
  FTRACE(0x1235c7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235c7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235c7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1235c7b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1235c7b5 push 0x1237c0e0 */
  push32((uint32_t)(0x1237c0e0u));
  /* 1235c7ba push 0x1235d4c8 */
  push32((uint32_t)(0x1235d4c8u));
  /* 1235c7bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1235c7c5 push eax */
  push32((uint32_t)(EAX));
  /* 1235c7c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1235c7cd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c7d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1235c7d1 push esi */
  push32((uint32_t)(ESI));
  /* 1235c7d2 push edi */
  push32((uint32_t)(EDI));
  /* 1235c7d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1235c7d6 cmp dword ptr [0x12380770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c7dd jne 0x1235c836 */
  if (!C.zf) goto L_1235c836;
  /* 1235c7df push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c7e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c7e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235c7e5 push 0x1237c0c8 */
  push32((uint32_t)(0x1237c0c8u));
  /* 1235c7ea push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1235c7ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c7f1 call dword ptr [0x123832a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832a0))), 0x1235c7f7u);
  /* 1235c7f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235c7f9 je 0x1235c807 */
  if (C.zf) goto L_1235c807;
  /* 1235c7fb mov dword ptr [0x12380770], 1 */
  w32((uint32_t)(0x12380770), (0x1u));
  /* 1235c805 jmp 0x1235c836 */
  goto L_1235c836;
L_1235c807:;
  /* 1235c807 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c80b push 1 */
  push32((uint32_t)(0x1u));
  /* 1235c80d push 0x1237c0c4 */
  push32((uint32_t)(0x1237c0c4u));
  /* 1235c812 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1235c817 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c819 call dword ptr [0x123832a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832a4))), 0x1235c81fu);
  /* 1235c81f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235c821 je 0x1235c82f */
  if (C.zf) goto L_1235c82f;
  /* 1235c823 mov dword ptr [0x12380770], 2 */
  w32((uint32_t)(0x12380770), (0x2u));
  /* 1235c82d jmp 0x1235c836 */
  goto L_1235c836;
L_1235c82f:;
  /* 1235c82f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c831 jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235c836:;
  /* 1235c836 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c83a jle 0x1235c84f */
  if ((C.zf||C.sf!=C.of)) goto L_1235c84f;
  /* 1235c83c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235c83f push eax */
  push32((uint32_t)(EAX));
  /* 1235c840 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c843 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c844 call 0x1235cac0 */
  push32(0x1235c849u); f_1235cac0();
  /* 1235c849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c84c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1235c84f:;
  /* 1235c84f cmp dword ptr [0x12380770], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12380770))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c856 jne 0x1235c87b */
  if (!C.zf) goto L_1235c87b;
  /* 1235c858 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1235c85b push edx */
  push32((uint32_t)(EDX));
  /* 1235c85c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235c85f push eax */
  push32((uint32_t)(EAX));
  /* 1235c860 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235c863 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c864 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c867 push edx */
  push32((uint32_t)(EDX));
  /* 1235c868 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c86b push eax */
  push32((uint32_t)(EAX));
  /* 1235c86c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c86f push ecx */
  push32((uint32_t)(ECX));
  /* 1235c870 call dword ptr [0x123832a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832a4))), 0x1235c876u);
  /* 1235c876 jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235c87b:;
  /* 1235c87b cmp dword ptr [0x12380770], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12380770))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c882 jne 0x1235ca9f */
  if (!C.zf) goto L_1235ca9f;
  /* 1235c888 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c88c jne 0x1235c897 */
  if (!C.zf) goto L_1235c897;
  /* 1235c88e mov edx, dword ptr [0x12380768] */
  EDX = (r32((uint32_t)(0x12380768)));
  /* 1235c894 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1235c897:;
  /* 1235c897 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c899 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c89b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235c89e push eax */
  push32((uint32_t)(EAX));
  /* 1235c89f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c8a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c8a3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1235c8a6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235c8a8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235c8aa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1235c8ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c8b0 push edx */
  push32((uint32_t)(EDX));
  /* 1235c8b1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1235c8b4 push eax */
  push32((uint32_t)(EAX));
  /* 1235c8b5 call dword ptr [0x12383370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383370))), 0x1235c8bbu);
  /* 1235c8bb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1235c8be cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c8c2 jne 0x1235c8cb */
  if (!C.zf) goto L_1235c8cb;
  /* 1235c8c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c8c6 jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235c8cb:;
  /* 1235c8cb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235c8d2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235c8d5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1235c8d7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c8da and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1235c8dc call 0x12357560 */
  push32(0x1235c8e1u); f_12357560();
  /* 1235c8e1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1235c8e4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1235c8e7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235c8ea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1235c8ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1235c8f4 jmp 0x1235c90d */
  goto L_1235c90d;
  /* 1235c8f6 mov eax, 1 */
  EAX = (0x1u);
  /* 1235c8fb ret  */
  ESPCHK(0x1235c7b0u, _esp0);
  ESP += 4; return;
  /* 1235c8fc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1235c8ff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1235c906 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1235c90d:;
  /* 1235c90d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c911 jne 0x1235c91a */
  if (!C.zf) goto L_1235c91a;
  /* 1235c913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c915 jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235c91a:;
  /* 1235c91a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235c91d push edx */
  push32((uint32_t)(EDX));
  /* 1235c91e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235c921 push eax */
  push32((uint32_t)(EAX));
  /* 1235c922 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235c925 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c926 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235c929 push edx */
  push32((uint32_t)(EDX));
  /* 1235c92a push 1 */
  push32((uint32_t)(0x1u));
  /* 1235c92c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1235c92f push eax */
  push32((uint32_t)(EAX));
  /* 1235c930 call dword ptr [0x12383370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383370))), 0x1235c936u);
  /* 1235c936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235c938 jne 0x1235c941 */
  if (!C.zf) goto L_1235c941;
  /* 1235c93a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c93c jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235c941:;
  /* 1235c941 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c943 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235c945 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235c948 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c949 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235c94c push edx */
  push32((uint32_t)(EDX));
  /* 1235c94d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c950 push eax */
  push32((uint32_t)(EAX));
  /* 1235c951 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c954 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c955 call dword ptr [0x123832a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832a0))), 0x1235c95bu);
  /* 1235c95b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1235c95e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c962 jne 0x1235c96b */
  if (!C.zf) goto L_1235c96b;
  /* 1235c964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c966 jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235c96b:;
  /* 1235c96b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c96e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1235c974 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235c976 je 0x1235c9bb */
  if (C.zf) goto L_1235c9bb;
  /* 1235c978 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c97c je 0x1235c9b6 */
  if (C.zf) goto L_1235c9b6;
  /* 1235c97e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235c981 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235c984 jle 0x1235c98d */
  if ((C.zf||C.sf!=C.of)) goto L_1235c98d;
  /* 1235c986 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c988 jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235c98d:;
  /* 1235c98d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1235c990 push ecx */
  push32((uint32_t)(ECX));
  /* 1235c991 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235c994 push edx */
  push32((uint32_t)(EDX));
  /* 1235c995 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235c998 push eax */
  push32((uint32_t)(EAX));
  /* 1235c999 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235c99c push ecx */
  push32((uint32_t)(ECX));
  /* 1235c99d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235c9a0 push edx */
  push32((uint32_t)(EDX));
  /* 1235c9a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235c9a4 push eax */
  push32((uint32_t)(EAX));
  /* 1235c9a5 call dword ptr [0x123832a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832a0))), 0x1235c9abu);
  /* 1235c9ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235c9ad jne 0x1235c9b6 */
  if (!C.zf) goto L_1235c9b6;
  /* 1235c9af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235c9b1 jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235c9b6:;
  /* 1235c9b6 jmp 0x1235ca9a */
  goto L_1235ca9a;
L_1235c9bb:;
  /* 1235c9bb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235c9be mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1235c9c1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1235c9c8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235c9cb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1235c9cd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235c9d0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1235c9d2 call 0x12357560 */
  push32(0x1235c9d7u); f_12357560();
  /* 1235c9d7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1235c9da mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1235c9dd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1235c9e0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1235c9e3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1235c9ea jmp 0x1235ca03 */
  goto L_1235ca03;
  /* 1235c9ec mov eax, 1 */
  EAX = (0x1u);
  /* 1235c9f1 ret  */
  ESPCHK(0x1235c7b0u, _esp0);
  ESP += 4; return;
  /* 1235c9f2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1235c9f5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1235c9fc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1235ca03:;
  /* 1235ca03 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ca07 jne 0x1235ca10 */
  if (!C.zf) goto L_1235ca10;
  /* 1235ca09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235ca0b jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235ca10:;
  /* 1235ca10 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235ca13 push eax */
  push32((uint32_t)(EAX));
  /* 1235ca14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235ca17 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ca18 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235ca1b push edx */
  push32((uint32_t)(EDX));
  /* 1235ca1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235ca1f push eax */
  push32((uint32_t)(EAX));
  /* 1235ca20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235ca23 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ca24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ca27 push edx */
  push32((uint32_t)(EDX));
  /* 1235ca28 call dword ptr [0x123832a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832a0))), 0x1235ca2eu);
  /* 1235ca2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235ca30 jne 0x1235ca36 */
  if (!C.zf) goto L_1235ca36;
  /* 1235ca32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235ca34 jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235ca36:;
  /* 1235ca36 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ca3a jne 0x1235ca6a */
  if (!C.zf) goto L_1235ca6a;
  /* 1235ca3c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235ca3e push 0 */
  push32((uint32_t)(0x0u));
  /* 1235ca40 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235ca42 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235ca44 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235ca47 push eax */
  push32((uint32_t)(EAX));
  /* 1235ca48 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235ca4b push ecx */
  push32((uint32_t)(ECX));
  /* 1235ca4c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1235ca51 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1235ca54 push edx */
  push32((uint32_t)(EDX));
  /* 1235ca55 call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x1235ca5bu);
  /* 1235ca5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1235ca5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ca62 jne 0x1235ca68 */
  if (!C.zf) goto L_1235ca68;
  /* 1235ca64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235ca66 jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235ca68:;
  /* 1235ca68 jmp 0x1235ca9a */
  goto L_1235ca9a;
L_1235ca6a:;
  /* 1235ca6a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235ca6c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235ca6e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1235ca71 push eax */
  push32((uint32_t)(EAX));
  /* 1235ca72 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235ca75 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ca76 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235ca79 push edx */
  push32((uint32_t)(EDX));
  /* 1235ca7a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235ca7d push eax */
  push32((uint32_t)(EAX));
  /* 1235ca7e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1235ca83 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1235ca86 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ca87 call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x1235ca8du);
  /* 1235ca8d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1235ca90 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ca94 jne 0x1235ca9a */
  if (!C.zf) goto L_1235ca9a;
  /* 1235ca96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235ca98 jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235ca9a:;
  /* 1235ca9a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235ca9d jmp 0x1235caa1 */
  goto L_1235caa1;
L_1235ca9f:;
  /* 1235ca9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235caa1:;
  /* 1235caa1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1235caa4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235caa7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1235caae pop edi */
  EDI = (pop32());
  /* 1235caaf pop esi */
  ESI = (pop32());
  /* 1235cab0 pop ebx */
  EBX = (pop32());
  /* 1235cab1 mov esp, ebp */
  ESP = (EBP);
  /* 1235cab3 pop ebp */
  EBP = (pop32());
  /* 1235cab4 ret  */
  ESPCHK(0x1235c7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cac0 @ 0x1235cac0 (80 bytes, 32 insns) */
void f_1235cac0(void) {
  FTRACE(0x1235cac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235cac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235cac1 mov ebp, esp */
  EBP = (ESP);
  /* 1235cac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235cac6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235cac9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235cacc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cacf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1235cad2:;
  /* 1235cad2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235cad5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235cad8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235cadb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235cade test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235cae0 je 0x1235caf7 */
  if (C.zf) goto L_1235caf7;
  /* 1235cae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cae5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235cae8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235caea je 0x1235caf7 */
  if (C.zf) goto L_1235caf7;
  /* 1235caec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235caef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235caf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235caf5 jmp 0x1235cad2 */
  goto L_1235cad2;
L_1235caf7:;
  /* 1235caf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cafa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235cafd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235caff jne 0x1235cb09 */
  if (!C.zf) goto L_1235cb09;
  /* 1235cb01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cb04 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235cb07 jmp 0x1235cb0c */
  goto L_1235cb0c;
L_1235cb09:;
  /* 1235cb09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1235cb0c:;
  /* 1235cb0c mov esp, ebp */
  ESP = (EBP);
  /* 1235cb0e pop ebp */
  EBP = (pop32());
  /* 1235cb0f ret  */
  ESPCHK(0x1235cac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb10 @ 0x1235cb10 (130 bytes, 43 insns) */
void f_1235cb10(void) {
  FTRACE(0x1235cb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235cb10 push ebp */
  push32((uint32_t)(EBP));
  /* 1235cb11 mov ebp, esp */
  EBP = (ESP);
  /* 1235cb13 push ecx */
  push32((uint32_t)(ECX));
  /* 1235cb14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cb17 cmp eax, dword ptr [0x1238207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1238207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cb1d jae 0x1235cb41 */
  if (!C.cf) goto L_1235cb41;
  /* 1235cb1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cb22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235cb25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cb28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235cb2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235cb2e mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235cb35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1235cb3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1235cb3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235cb3f jne 0x1235cb5c */
  if (!C.zf) goto L_1235cb5c;
L_1235cb41:;
  /* 1235cb41 call 0x1235c290 */
  push32(0x1235cb46u); f_1235c290();
  /* 1235cb46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1235cb4c call 0x1235c2a0 */
  push32(0x1235cb51u); f_1235c2a0();
  /* 1235cb51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235cb57 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235cb5a jmp 0x1235cb8e */
  goto L_1235cb8e;
L_1235cb5c:;
  /* 1235cb5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cb5f push edx */
  push32((uint32_t)(EDX));
  /* 1235cb60 call 0x1235dab0 */
  push32(0x1235cb65u); f_1235dab0();
  /* 1235cb65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cb68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235cb6b push eax */
  push32((uint32_t)(EAX));
  /* 1235cb6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235cb6f push ecx */
  push32((uint32_t)(ECX));
  /* 1235cb70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cb73 push edx */
  push32((uint32_t)(EDX));
  /* 1235cb74 call 0x1235cba0 */
  push32(0x1235cb79u); f_1235cba0();
  /* 1235cb79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cb7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235cb7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cb82 push eax */
  push32((uint32_t)(EAX));
  /* 1235cb83 call 0x1235db40 */
  push32(0x1235cb88u); f_1235db40();
  /* 1235cb88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cb8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1235cb8e:;
  /* 1235cb8e mov esp, ebp */
  ESP = (EBP);
  /* 1235cb90 pop ebp */
  EBP = (pop32());
  /* 1235cb91 ret  */
  ESPCHK(0x1235cb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cba0 @ 0x1235cba0 (178 bytes, 56 insns) */
void f_1235cba0(void) {
  FTRACE(0x1235cba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235cba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235cba1 mov ebp, esp */
  EBP = (ESP);
  /* 1235cba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235cba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cba9 push eax */
  push32((uint32_t)(EAX));
  /* 1235cbaa call 0x1235d930 */
  push32(0x1235cbafu); f_1235d930();
  /* 1235cbaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cbb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1235cbb5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cbb9 jne 0x1235cbce */
  if (!C.zf) goto L_1235cbce;
  /* 1235cbbb call 0x1235c290 */
  push32(0x1235cbc0u); f_1235c290();
  /* 1235cbc0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1235cbc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235cbc9 jmp 0x1235cc4e */
  goto L_1235cc4e;
L_1235cbce:;
  /* 1235cbce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235cbd1 push ecx */
  push32((uint32_t)(ECX));
  /* 1235cbd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235cbd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235cbd7 push edx */
  push32((uint32_t)(EDX));
  /* 1235cbd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235cbdb push eax */
  push32((uint32_t)(EAX));
  /* 1235cbdc call dword ptr [0x1238329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238329c))), 0x1235cbe2u);
  /* 1235cbe2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235cbe5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cbe9 jne 0x1235cbf6 */
  if (!C.zf) goto L_1235cbf6;
  /* 1235cbeb call dword ptr [0x123832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832fc))), 0x1235cbf1u);
  /* 1235cbf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235cbf4 jmp 0x1235cbfd */
  goto L_1235cbfd;
L_1235cbf6:;
  /* 1235cbf6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1235cbfd:;
  /* 1235cbfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cc01 je 0x1235cc14 */
  if (C.zf) goto L_1235cc14;
  /* 1235cc03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cc06 push ecx */
  push32((uint32_t)(ECX));
  /* 1235cc07 call 0x1235c1f0 */
  push32(0x1235cc0cu); f_1235c1f0();
  /* 1235cc0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cc0f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235cc12 jmp 0x1235cc4e */
  goto L_1235cc4e;
L_1235cc14:;
  /* 1235cc14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cc17 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1235cc1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cc1d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1235cc20 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235cc23 mov ecx, dword ptr [edx*4 + 0x12381f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12381f40)));
  /* 1235cc2a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1235cc2e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1235cc31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cc34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235cc37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cc3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1235cc3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235cc40 mov eax, dword ptr [eax*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235cc47 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1235cc4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1235cc4e:;
  /* 1235cc4e mov esp, ebp */
  ESP = (EBP);
  /* 1235cc50 pop ebp */
  EBP = (pop32());
  /* 1235cc51 ret  */
  ESPCHK(0x1235cba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc60 @ 0x1235cc60 (130 bytes, 43 insns) */
void f_1235cc60(void) {
  FTRACE(0x1235cc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235cc60 push ebp */
  push32((uint32_t)(EBP));
  /* 1235cc61 mov ebp, esp */
  EBP = (ESP);
  /* 1235cc63 push ecx */
  push32((uint32_t)(ECX));
  /* 1235cc64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cc67 cmp eax, dword ptr [0x1238207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1238207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cc6d jae 0x1235cc91 */
  if (!C.cf) goto L_1235cc91;
  /* 1235cc6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cc72 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235cc75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cc78 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235cc7b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235cc7e mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235cc85 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1235cc8a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1235cc8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235cc8f jne 0x1235ccac */
  if (!C.zf) goto L_1235ccac;
L_1235cc91:;
  /* 1235cc91 call 0x1235c290 */
  push32(0x1235cc96u); f_1235c290();
  /* 1235cc96 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1235cc9c call 0x1235c2a0 */
  push32(0x1235cca1u); f_1235c2a0();
  /* 1235cca1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235cca7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235ccaa jmp 0x1235ccde */
  goto L_1235ccde;
L_1235ccac:;
  /* 1235ccac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ccaf push edx */
  push32((uint32_t)(EDX));
  /* 1235ccb0 call 0x1235dab0 */
  push32(0x1235ccb5u); f_1235dab0();
  /* 1235ccb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ccb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235ccbb push eax */
  push32((uint32_t)(EAX));
  /* 1235ccbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235ccbf push ecx */
  push32((uint32_t)(ECX));
  /* 1235ccc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ccc3 push edx */
  push32((uint32_t)(EDX));
  /* 1235ccc4 call 0x1235ccf0 */
  push32(0x1235ccc9u); f_1235ccf0();
  /* 1235ccc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cccc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235cccf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ccd2 push eax */
  push32((uint32_t)(EAX));
  /* 1235ccd3 call 0x1235db40 */
  push32(0x1235ccd8u); f_1235db40();
  /* 1235ccd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ccdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1235ccde:;
  /* 1235ccde mov esp, ebp */
  ESP = (EBP);
  /* 1235cce0 pop ebp */
  EBP = (pop32());
  /* 1235cce1 ret  */
  ESPCHK(0x1235cc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf0 @ 0x1235ccf0 (627 bytes, 182 insns) */
void f_1235ccf0(void) {
  FTRACE(0x1235ccf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235ccf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235ccf1 mov ebp, esp */
  EBP = (ESP);
  /* 1235ccf3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235ccf9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1235cd00 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235cd03 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1235cd09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cd0d jne 0x1235cd16 */
  if (!C.zf) goto L_1235cd16;
  /* 1235cd0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235cd11 jmp 0x1235cf5f */
  goto L_1235cf5f;
L_1235cd16:;
  /* 1235cd16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cd19 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235cd1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cd1f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235cd22 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235cd25 mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235cd2c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1235cd31 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1235cd34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235cd36 je 0x1235cd48 */
  if (C.zf) goto L_1235cd48;
  /* 1235cd38 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235cd3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235cd3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cd3f push edx */
  push32((uint32_t)(EDX));
  /* 1235cd40 call 0x1235cba0 */
  push32(0x1235cd45u); f_1235cba0();
  /* 1235cd45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235cd48:;
  /* 1235cd48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cd4b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235cd4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cd51 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1235cd54 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235cd57 mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235cd5e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1235cd63 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1235cd68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235cd6a je 0x1235ce7c */
  if (C.zf) goto L_1235ce7c;
  /* 1235cd70 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235cd73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235cd76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1235cd7d:;
  /* 1235cd7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cd80 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235cd83 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cd86 jae 0x1235ce7a */
  if (!C.cf) goto L_1235ce7a;
  /* 1235cd8c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1235cd92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1235cd95:;
  /* 1235cd95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235cd98 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1235cd9e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235cda0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cda6 jge 0x1235ce07 */
  if ((C.sf==C.of)) goto L_1235ce07;
  /* 1235cda8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cdab sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235cdae cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cdb1 jae 0x1235ce07 */
  if (!C.cf) goto L_1235ce07;
  /* 1235cdb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cdb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1235cdb8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1235cdbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cdc1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cdc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235cdc7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1235cdce cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cdd1 jne 0x1235cdf1 */
  if (!C.zf) goto L_1235cdf1;
  /* 1235cdd3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1235cdd9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cddc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1235cde2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235cde5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1235cde8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235cdeb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cdee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1235cdf1:;
  /* 1235cdf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235cdf4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1235cdfa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1235cdfc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235cdff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ce02 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235ce05 jmp 0x1235cd95 */
  goto L_1235cd95;
L_1235ce07:;
  /* 1235ce07 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235ce09 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1235ce0f push edx */
  push32((uint32_t)(EDX));
  /* 1235ce10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235ce13 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1235ce19 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235ce1b push eax */
  push32((uint32_t)(EAX));
  /* 1235ce1c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1235ce22 push edx */
  push32((uint32_t)(EDX));
  /* 1235ce23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ce26 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235ce29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ce2c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1235ce2f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235ce32 mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235ce39 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1235ce3c push eax */
  push32((uint32_t)(EAX));
  /* 1235ce3d call dword ptr [0x123832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832bc))), 0x1235ce43u);
  /* 1235ce43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235ce45 je 0x1235ce6a */
  if (C.zf) goto L_1235ce6a;
  /* 1235ce47 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235ce4a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ce50 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1235ce53 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235ce56 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1235ce5c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235ce5e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ce64 jge 0x1235ce68 */
  if ((C.sf==C.of)) goto L_1235ce68;
  /* 1235ce66 jmp 0x1235ce7a */
  goto L_1235ce7a;
L_1235ce68:;
  /* 1235ce68 jmp 0x1235ce75 */
  goto L_1235ce75;
L_1235ce6a:;
  /* 1235ce6a call dword ptr [0x123832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832fc))), 0x1235ce70u);
  /* 1235ce70 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1235ce73 jmp 0x1235ce7a */
  goto L_1235ce7a;
L_1235ce75:;
  /* 1235ce75 jmp 0x1235cd7d */
  goto L_1235cd7d;
L_1235ce7a:;
  /* 1235ce7a jmp 0x1235cecc */
  goto L_1235cecc;
L_1235ce7c:;
  /* 1235ce7c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235ce7e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1235ce84 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ce85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235ce88 push edx */
  push32((uint32_t)(EDX));
  /* 1235ce89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235ce8c push eax */
  push32((uint32_t)(EAX));
  /* 1235ce8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ce90 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235ce93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ce96 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235ce99 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235ce9c mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235cea3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1235cea6 push ecx */
  push32((uint32_t)(ECX));
  /* 1235cea7 call dword ptr [0x123832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832bc))), 0x1235ceadu);
  /* 1235cead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235ceaf je 0x1235cec3 */
  if (C.zf) goto L_1235cec3;
  /* 1235ceb1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1235ceb8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1235cebe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1235cec1 jmp 0x1235cecc */
  goto L_1235cecc;
L_1235cec3:;
  /* 1235cec3 call dword ptr [0x123832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832fc))), 0x1235cec9u);
  /* 1235cec9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1235cecc:;
  /* 1235cecc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ced0 jne 0x1235cf56 */
  if (!C.zf) goto L_1235cf56;
  /* 1235ced6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ceda je 0x1235cf0a */
  if (C.zf) goto L_1235cf0a;
  /* 1235cedc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cee0 jne 0x1235cef9 */
  if (!C.zf) goto L_1235cef9;
  /* 1235cee2 call 0x1235c290 */
  push32(0x1235cee7u); f_1235c290();
  /* 1235cee7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1235ceed call 0x1235c2a0 */
  push32(0x1235cef2u); f_1235c2a0();
  /* 1235cef2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235cef5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1235cef7 jmp 0x1235cf05 */
  goto L_1235cf05;
L_1235cef9:;
  /* 1235cef9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235cefc push edx */
  push32((uint32_t)(EDX));
  /* 1235cefd call 0x1235c1f0 */
  push32(0x1235cf02u); f_1235c1f0();
  /* 1235cf02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235cf05:;
  /* 1235cf05 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235cf08 jmp 0x1235cf5f */
  goto L_1235cf5f;
L_1235cf0a:;
  /* 1235cf0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cf0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235cf10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cf13 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1235cf16 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235cf19 mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235cf20 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1235cf25 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1235cf28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235cf2a je 0x1235cf3b */
  if (C.zf) goto L_1235cf3b;
  /* 1235cf2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235cf2f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235cf32 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cf35 jne 0x1235cf3b */
  if (!C.zf) goto L_1235cf3b;
  /* 1235cf37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235cf39 jmp 0x1235cf5f */
  goto L_1235cf5f;
L_1235cf3b:;
  /* 1235cf3b call 0x1235c290 */
  push32(0x1235cf40u); f_1235c290();
  /* 1235cf40 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1235cf46 call 0x1235c2a0 */
  push32(0x1235cf4bu); f_1235c2a0();
  /* 1235cf4b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235cf51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235cf54 jmp 0x1235cf5f */
  goto L_1235cf5f;
L_1235cf56:;
  /* 1235cf56 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235cf59 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1235cf5f:;
  /* 1235cf5f mov esp, ebp */
  ESP = (EBP);
  /* 1235cf61 pop ebp */
  EBP = (pop32());
  /* 1235cf62 ret  */
  ESPCHK(0x1235ccf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf70 @ 0x1235cf70 (199 bytes, 68 insns) */
void f_1235cf70(void) {
  FTRACE(0x1235cf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235cf70 push ebp */
  push32((uint32_t)(EBP));
  /* 1235cf71 mov ebp, esp */
  EBP = (ESP);
  /* 1235cf73 push ecx */
  push32((uint32_t)(ECX));
  /* 1235cf74 push ebx */
  push32((uint32_t)(EBX));
  /* 1235cf75 push esi */
  push32((uint32_t)(ESI));
  /* 1235cf76 push edi */
  push32((uint32_t)(EDI));
L_1235cf77:;
  /* 1235cf77 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cf7b jne 0x1235cf9b */
  if (!C.zf) goto L_1235cf9b;
  /* 1235cf7d push 0x1237c028 */
  push32((uint32_t)(0x1237c028u));
  /* 1235cf82 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235cf84 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1235cf86 push 0x1237c0f8 */
  push32((uint32_t)(0x1237c0f8u));
  /* 1235cf8b push 2 */
  push32((uint32_t)(0x2u));
  /* 1235cf8d call 0x12353480 */
  push32(0x1235cf92u); f_12353480();
  /* 1235cf92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cf95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cf98 jne 0x1235cf9b */
  if (!C.zf) goto L_1235cf9b;
  /* 1235cf9a int3  */
  x86_unimpl("int3 @ 0x1235cf9a");
L_1235cf9b:;
  /* 1235cf9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235cf9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235cf9f jne 0x1235cf77 */
  if (!C.zf) goto L_1235cf77;
  /* 1235cfa1 mov ecx, dword ptr [0x12380774] */
  ECX = (r32((uint32_t)(0x12380774)));
  /* 1235cfa7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cfaa mov dword ptr [0x12380774], ecx */
  w32((uint32_t)(0x12380774), (ECX));
  /* 1235cfb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235cfb3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235cfb6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1235cfb8 push 0x1237c0f8 */
  push32((uint32_t)(0x1237c0f8u));
  /* 1235cfbd push 2 */
  push32((uint32_t)(0x2u));
  /* 1235cfbf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1235cfc4 call 0x123543c0 */
  push32(0x1235cfc9u); f_123543c0();
  /* 1235cfc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235cfcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cfcf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1235cfd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cfd5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235cfd9 je 0x1235cff6 */
  if (C.zf) goto L_1235cff6;
  /* 1235cfdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cfde mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1235cfe1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1235cfe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cfe7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1235cfea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cfed mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1235cff4 jmp 0x1235d01b */
  goto L_1235d01b;
L_1235cff6:;
  /* 1235cff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235cff9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235cffc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1235cfff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d002 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1235d005 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d008 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d00b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d00e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1235d011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d014 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1235d01b:;
  /* 1235d01b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d01e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d021 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1235d024 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1235d026 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d029 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1235d030 pop edi */
  EDI = (pop32());
  /* 1235d031 pop esi */
  ESI = (pop32());
  /* 1235d032 pop ebx */
  EBX = (pop32());
  /* 1235d033 mov esp, ebp */
  ESP = (EBP);
  /* 1235d035 pop ebp */
  EBP = (pop32());
  /* 1235d036 ret  */
  ESPCHK(0x1235cf70u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1235d040 (50 bytes, 17 insns) */
void f_1235d040(void) {
  FTRACE(0x1235d040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d040 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d041 mov ebp, esp */
  EBP = (ESP);
  /* 1235d043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d046 cmp eax, dword ptr [0x1238207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1238207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d04c jb 0x1235d052 */
  if (C.cf) goto L_1235d052;
  /* 1235d04e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235d050 jmp 0x1235d070 */
  goto L_1235d070;
L_1235d052:;
  /* 1235d052 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d055 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235d058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d05b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235d05e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235d061 mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235d068 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1235d06d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1235d070:;
  /* 1235d070 pop ebp */
  EBP = (pop32());
  /* 1235d071 ret  */
  ESPCHK(0x1235d040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d080 @ 0x1235d080 (300 bytes, 80 insns) */
void f_1235d080(void) {
  FTRACE(0x1235d080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d080 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d081 mov ebp, esp */
  EBP = (ESP);
  /* 1235d083 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d084 cmp dword ptr [0x12381c40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12381c40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d08b jne 0x1235d099 */
  if (!C.zf) goto L_1235d099;
  /* 1235d08d mov dword ptr [0x12381c40], 0x200 */
  w32((uint32_t)(0x12381c40), (0x200u));
  /* 1235d097 jmp 0x1235d0ac */
  goto L_1235d0ac;
L_1235d099:;
  /* 1235d099 cmp dword ptr [0x12381c40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12381c40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d0a0 jge 0x1235d0ac */
  if ((C.sf==C.of)) goto L_1235d0ac;
  /* 1235d0a2 mov dword ptr [0x12381c40], 0x14 */
  w32((uint32_t)(0x12381c40), (0x14u));
L_1235d0ac:;
  /* 1235d0ac push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1235d0b1 push 0x1237c104 */
  push32((uint32_t)(0x1237c104u));
  /* 1235d0b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235d0b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1235d0ba mov eax, dword ptr [0x12381c40] */
  EAX = (r32((uint32_t)(0x12381c40)));
  /* 1235d0bf push eax */
  push32((uint32_t)(EAX));
  /* 1235d0c0 call 0x123547d0 */
  push32(0x1235d0c5u); f_123547d0();
  /* 1235d0c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d0c8 mov dword ptr [0x123808e8], eax */
  w32((uint32_t)(0x123808e8), (EAX));
  /* 1235d0cd cmp dword ptr [0x123808e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d0d4 jne 0x1235d115 */
  if (!C.zf) goto L_1235d115;
  /* 1235d0d6 mov dword ptr [0x12381c40], 0x14 */
  w32((uint32_t)(0x12381c40), (0x14u));
  /* 1235d0e0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1235d0e5 push 0x1237c104 */
  push32((uint32_t)(0x1237c104u));
  /* 1235d0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1235d0ec push 4 */
  push32((uint32_t)(0x4u));
  /* 1235d0ee mov ecx, dword ptr [0x12381c40] */
  ECX = (r32((uint32_t)(0x12381c40)));
  /* 1235d0f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d0f5 call 0x123547d0 */
  push32(0x1235d0fau); f_123547d0();
  /* 1235d0fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d0fd mov dword ptr [0x123808e8], eax */
  w32((uint32_t)(0x123808e8), (EAX));
  /* 1235d102 cmp dword ptr [0x123808e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d109 jne 0x1235d115 */
  if (!C.zf) goto L_1235d115;
  /* 1235d10b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1235d10d call 0x12353330 */
  push32(0x1235d112u); f_12353330();
  /* 1235d112 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235d115:;
  /* 1235d115 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235d11c jmp 0x1235d127 */
  goto L_1235d127;
L_1235d11e:;
  /* 1235d11e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d121 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d124 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1235d127:;
  /* 1235d127 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d12b jge 0x1235d146 */
  if ((C.sf==C.of)) goto L_1235d146;
  /* 1235d12d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d130 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235d133 add eax, 0x1237f120 */
  { uint32_t _a=(EAX),_b=(0x1237f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d138 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d13b mov edx, dword ptr [0x123808e8] */
  EDX = (r32((uint32_t)(0x123808e8)));
  /* 1235d141 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1235d144 jmp 0x1235d11e */
  goto L_1235d11e;
L_1235d146:;
  /* 1235d146 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235d14d jmp 0x1235d158 */
  goto L_1235d158;
L_1235d14f:;
  /* 1235d14f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d152 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d155 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235d158:;
  /* 1235d158 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d15c jge 0x1235d1a8 */
  if ((C.sf==C.of)) goto L_1235d1a8;
  /* 1235d15e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d161 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235d164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d167 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235d16a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235d16d mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235d174 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d178 je 0x1235d196 */
  if (C.zf) goto L_1235d196;
  /* 1235d17a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d17d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235d180 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d183 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235d186 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235d189 mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235d190 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d194 jne 0x1235d1a6 */
  if (!C.zf) goto L_1235d1a6;
L_1235d196:;
  /* 1235d196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d199 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235d19c mov dword ptr [ecx + 0x1237f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1237f130), (0xffffffffu));
L_1235d1a6:;
  /* 1235d1a6 jmp 0x1235d14f */
  goto L_1235d14f;
L_1235d1a8:;
  /* 1235d1a8 mov esp, ebp */
  ESP = (EBP);
  /* 1235d1aa pop ebp */
  EBP = (pop32());
  /* 1235d1ab ret  */
  ESPCHK(0x1235d080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1b0 @ 0x1235d1b0 (26 bytes, 9 insns) */
void f_1235d1b0(void) {
  FTRACE(0x1235d1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1235d1b3 call 0x1235ddb0 */
  push32(0x1235d1b8u); f_1235ddb0();
  /* 1235d1b8 movsx eax, byte ptr [0x12380590] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12380590))));
  /* 1235d1bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235d1c1 je 0x1235d1c8 */
  if (C.zf) goto L_1235d1c8;
  /* 1235d1c3 call 0x1235db70 */
  push32(0x1235d1c8u); f_1235db70();
L_1235d1c8:;
  /* 1235d1c8 pop ebp */
  EBP = (pop32());
  /* 1235d1c9 ret  */
  ESPCHK(0x1235d1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1d0 @ 0x1235d1d0 (61 bytes, 20 insns) */
void f_1235d1d0(void) {
  FTRACE(0x1235d1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1235d1d3 cmp dword ptr [ebp + 8], 0x1237f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1237f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d1da jb 0x1235d1fe */
  if (C.cf) goto L_1235d1fe;
  /* 1235d1dc cmp dword ptr [ebp + 8], 0x1237f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1237f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d1e3 ja 0x1235d1fe */
  if ((!C.cf&&!C.zf)) goto L_1235d1fe;
  /* 1235d1e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d1e8 sub eax, 0x1237f120 */
  { uint32_t _a=(EAX),_b=(0x1237f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235d1ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235d1f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d1f3 push eax */
  push32((uint32_t)(EAX));
  /* 1235d1f4 call 0x12357dc0 */
  push32(0x1235d1f9u); f_12357dc0();
  /* 1235d1f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d1fc jmp 0x1235d20b */
  goto L_1235d20b;
L_1235d1fe:;
  /* 1235d1fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d201 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d204 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d205 call dword ptr [0x1238334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238334c))), 0x1235d20bu);
L_1235d20b:;
  /* 1235d20b pop ebp */
  EBP = (pop32());
  /* 1235d20c ret  */
  ESPCHK(0x1235d1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d210 @ 0x1235d210 (41 bytes, 16 insns) */
void f_1235d210(void) {
  FTRACE(0x1235d210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d210 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d211 mov ebp, esp */
  EBP = (ESP);
  /* 1235d213 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d217 jge 0x1235d22a */
  if ((C.sf==C.of)) goto L_1235d22a;
  /* 1235d219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d21c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d21f push eax */
  push32((uint32_t)(EAX));
  /* 1235d220 call 0x12357dc0 */
  push32(0x1235d225u); f_12357dc0();
  /* 1235d225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d228 jmp 0x1235d237 */
  goto L_1235d237;
L_1235d22a:;
  /* 1235d22a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235d22d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d230 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d231 call dword ptr [0x1238334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238334c))), 0x1235d237u);
L_1235d237:;
  /* 1235d237 pop ebp */
  EBP = (pop32());
  /* 1235d238 ret  */
  ESPCHK(0x1235d210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x1235d240 (61 bytes, 20 insns) */
void f_1235d240(void) {
  FTRACE(0x1235d240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d240 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d241 mov ebp, esp */
  EBP = (ESP);
  /* 1235d243 cmp dword ptr [ebp + 8], 0x1237f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1237f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d24a jb 0x1235d26e */
  if (C.cf) goto L_1235d26e;
  /* 1235d24c cmp dword ptr [ebp + 8], 0x1237f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1237f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d253 ja 0x1235d26e */
  if ((!C.cf&&!C.zf)) goto L_1235d26e;
  /* 1235d255 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d258 sub eax, 0x1237f120 */
  { uint32_t _a=(EAX),_b=(0x1237f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235d25d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235d260 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d263 push eax */
  push32((uint32_t)(EAX));
  /* 1235d264 call 0x12357e60 */
  push32(0x1235d269u); f_12357e60();
  /* 1235d269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d26c jmp 0x1235d27b */
  goto L_1235d27b;
L_1235d26e:;
  /* 1235d26e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d271 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d274 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d275 call dword ptr [0x12383350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383350))), 0x1235d27bu);
L_1235d27b:;
  /* 1235d27b pop ebp */
  EBP = (pop32());
  /* 1235d27c ret  */
  ESPCHK(0x1235d240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d280 @ 0x1235d280 (41 bytes, 16 insns) */
void f_1235d280(void) {
  FTRACE(0x1235d280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d280 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d281 mov ebp, esp */
  EBP = (ESP);
  /* 1235d283 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d287 jge 0x1235d29a */
  if ((C.sf==C.of)) goto L_1235d29a;
  /* 1235d289 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d28c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d28f push eax */
  push32((uint32_t)(EAX));
  /* 1235d290 call 0x12357e60 */
  push32(0x1235d295u); f_12357e60();
  /* 1235d295 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d298 jmp 0x1235d2a7 */
  goto L_1235d2a7;
L_1235d29a:;
  /* 1235d29a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235d29d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d2a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d2a1 call dword ptr [0x12383350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383350))), 0x1235d2a7u);
L_1235d2a7:;
  /* 1235d2a7 pop ebp */
  EBP = (pop32());
  /* 1235d2a8 ret  */
  ESPCHK(0x1235d280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2b0 @ 0x1235d2b0 (119 bytes, 34 insns) */
void f_1235d2b0(void) {
  FTRACE(0x1235d2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1235d2b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235d2b6 push 0x123808e4 */
  push32((uint32_t)(0x123808e4u));
  /* 1235d2bb call dword ptr [0x123832d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832d0))), 0x1235d2c1u);
  /* 1235d2c1 cmp dword ptr [0x123808d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d2c8 je 0x1235d2e8 */
  if (C.zf) goto L_1235d2e8;
  /* 1235d2ca push 0x123808e4 */
  push32((uint32_t)(0x123808e4u));
  /* 1235d2cf call dword ptr [0x123832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c0))), 0x1235d2d5u);
  /* 1235d2d5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1235d2d7 call 0x12357dc0 */
  push32(0x1235d2dcu); f_12357dc0();
  /* 1235d2dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d2df mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1235d2e6 jmp 0x1235d2ef */
  goto L_1235d2ef;
L_1235d2e8:;
  /* 1235d2e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1235d2ef:;
  /* 1235d2ef mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1235d2f3 push eax */
  push32((uint32_t)(EAX));
  /* 1235d2f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d2f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d2f8 call 0x1235d330 */
  push32(0x1235d2fdu); f_1235d330();
  /* 1235d2fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d300 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235d303 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d307 je 0x1235d315 */
  if (C.zf) goto L_1235d315;
  /* 1235d309 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1235d30b call 0x12357e60 */
  push32(0x1235d310u); f_12357e60();
  /* 1235d310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d313 jmp 0x1235d320 */
  goto L_1235d320;
L_1235d315:;
  /* 1235d315 push 0x123808e4 */
  push32((uint32_t)(0x123808e4u));
  /* 1235d31a call dword ptr [0x123832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c0))), 0x1235d320u);
L_1235d320:;
  /* 1235d320 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235d323 mov esp, ebp */
  ESP = (EBP);
  /* 1235d325 pop ebp */
  EBP = (pop32());
  /* 1235d326 ret  */
  ESPCHK(0x1235d2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x1235d330 (160 bytes, 50 insns) */
void f_1235d330(void) {
  FTRACE(0x1235d330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d330 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d331 mov ebp, esp */
  EBP = (ESP);
  /* 1235d333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235d336 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d33a jne 0x1235d343 */
  if (!C.zf) goto L_1235d343;
  /* 1235d33c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235d33e jmp 0x1235d3cc */
  goto L_1235d3cc;
L_1235d343:;
  /* 1235d343 cmp dword ptr [0x12380758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d34a jne 0x1235d37a */
  if (!C.zf) goto L_1235d37a;
  /* 1235d34c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235d34f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235d354 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d359 jle 0x1235d36b */
  if ((C.zf||C.sf!=C.of)) goto L_1235d36b;
  /* 1235d35b call 0x1235c290 */
  push32(0x1235d360u); f_1235c290();
  /* 1235d360 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1235d366 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235d369 jmp 0x1235d3cc */
  goto L_1235d3cc;
L_1235d36b:;
  /* 1235d36b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d36e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1235d371 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1235d373 mov eax, 1 */
  EAX = (0x1u);
  /* 1235d378 jmp 0x1235d3cc */
  goto L_1235d3cc;
L_1235d37a:;
  /* 1235d37a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1235d381 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1235d384 push eax */
  push32((uint32_t)(EAX));
  /* 1235d385 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235d387 mov ecx, dword ptr [0x1237eea4] */
  ECX = (r32((uint32_t)(0x1237eea4)));
  /* 1235d38d push ecx */
  push32((uint32_t)(ECX));
  /* 1235d38e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d391 push edx */
  push32((uint32_t)(EDX));
  /* 1235d392 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235d394 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1235d397 push eax */
  push32((uint32_t)(EAX));
  /* 1235d398 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1235d39d mov ecx, dword ptr [0x12380768] */
  ECX = (r32((uint32_t)(0x12380768)));
  /* 1235d3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d3a4 call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x1235d3aau);
  /* 1235d3aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235d3ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d3b1 je 0x1235d3b9 */
  if (C.zf) goto L_1235d3b9;
  /* 1235d3b3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d3b7 je 0x1235d3c9 */
  if (C.zf) goto L_1235d3c9;
L_1235d3b9:;
  /* 1235d3b9 call 0x1235c290 */
  push32(0x1235d3beu); f_1235c290();
  /* 1235d3be mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1235d3c4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235d3c7 jmp 0x1235d3cc */
  goto L_1235d3cc;
L_1235d3c9:;
  /* 1235d3c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1235d3cc:;
  /* 1235d3cc mov esp, ebp */
  ESP = (EBP);
  /* 1235d3ce pop ebp */
  EBP = (pop32());
  /* 1235d3cf ret  */
  ESPCHK(0x1235d330u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1235d3d0 (32 bytes, 18 insns) */
void f_1235d3d0(void) {
  FTRACE(0x1235d3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1235d3d3 push ebx */
  push32((uint32_t)(EBX));
  /* 1235d3d4 push esi */
  push32((uint32_t)(ESI));
  /* 1235d3d5 push edi */
  push32((uint32_t)(EDI));
  /* 1235d3d6 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d3d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235d3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235d3db push 0x1235d3e8 */
  push32((uint32_t)(0x1235d3e8u));
  /* 1235d3e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1235d3e3 call 0x12364b1c */
  push32(0x1235d3e8u); f_12364b1c();
  /* 1235d3e8 pop ebp */
  EBP = (pop32());
  /* 1235d3e9 pop edi */
  EDI = (pop32());
  /* 1235d3ea pop esi */
  ESI = (pop32());
  /* 1235d3eb pop ebx */
  EBX = (pop32());
  /* 1235d3ec mov esp, ebp */
  ESP = (EBP);
  /* 1235d3ee pop ebp */
  EBP = (pop32());
  /* 1235d3ef ret  */
  ESPCHK(0x1235d3d0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1235d412 (104 bytes, 33 insns) */
void f_1235d412(void) {
  FTRACE(0x1235d412u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d412 push ebx */
  push32((uint32_t)(EBX));
  /* 1235d413 push esi */
  push32((uint32_t)(ESI));
  /* 1235d414 push edi */
  push32((uint32_t)(EDI));
  /* 1235d415 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1235d419 push eax */
  push32((uint32_t)(EAX));
  /* 1235d41a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1235d41c push 0x1235d3f0 */
  push32((uint32_t)(0x1235d3f0u));
  /* 1235d421 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1235d428 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1235d42f:;
  /* 1235d42f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1235d433 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1235d436 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1235d439 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d43c je 0x1235d46c */
  if (C.zf) goto L_1235d46c;
  /* 1235d43e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d442 je 0x1235d46c */
  if (C.zf) goto L_1235d46c;
  /* 1235d444 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1235d447 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1235d44a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1235d44e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1235d451 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d456 jne 0x1235d46a */
  if (!C.zf) goto L_1235d46a;
  /* 1235d458 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1235d45d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1235d461 call 0x1235d4a6 */
  push32(0x1235d466u); f_1235d4a6();
  /* 1235d466 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1235d46au);
L_1235d46a:;
  /* 1235d46a jmp 0x1235d42f */
  goto L_1235d42f;
L_1235d46c:;
  /* 1235d46c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1235d473 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d476 pop edi */
  EDI = (pop32());
  /* 1235d477 pop esi */
  ESI = (pop32());
  /* 1235d478 pop ebx */
  EBX = (pop32());
  /* 1235d479 ret  */
  ESPCHK(0x1235d412u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4a6 @ 0x1235d4a6 (24 bytes, 10 insns) */
void f_1235d4a6(void) {
  FTRACE(0x1235d4a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d4a6 push ebx */
  push32((uint32_t)(EBX));
  /* 1235d4a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d4a8 mov ebx, 0x1237f3b8 */
  EBX = (0x1237f3b8u);
  /* 1235d4ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d4b0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1235d4b3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1235d4b6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1235d4b9 pop ecx */
  ECX = (pop32());
  /* 1235d4ba pop ebx */
  EBX = (pop32());
  /* 1235d4bb ret 4 */
  ESPCHK(0x1235d4a6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d585 @ 0x1235d585 (27 bytes, 11 insns) */
void f_1235d585(void) {
  FTRACE(0x1235d585u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d585 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d586 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1235d58a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1235d58c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1235d58f push eax */
  push32((uint32_t)(EAX));
  /* 1235d590 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1235d593 push eax */
  push32((uint32_t)(EAX));
  /* 1235d594 call 0x1235d412 */
  push32(0x1235d599u); f_1235d412();
  /* 1235d599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d59c pop ebp */
  EBP = (pop32());
  /* 1235d59d ret 4 */
  ESPCHK(0x1235d585u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d5a0 @ 0x1235d5a0 (482 bytes, 138 insns) */
void f_1235d5a0(void) {
  FTRACE(0x1235d5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1235d5a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235d5a6 push esi */
  push32((uint32_t)(ESI));
  /* 1235d5a7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1235d5ae push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1235d5b0 call 0x12357dc0 */
  push32(0x1235d5b5u); f_12357dc0();
  /* 1235d5b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d5b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1235d5bf jmp 0x1235d5ca */
  goto L_1235d5ca;
L_1235d5c1:;
  /* 1235d5c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235d5c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d5c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1235d5ca:;
  /* 1235d5ca cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d5ce jge 0x1235d770 */
  if ((C.sf==C.of)) goto L_1235d770;
  /* 1235d5d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235d5d7 cmp dword ptr [ecx*4 + 0x12381f40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12381f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d5df je 0x1235d6d6 */
  if (C.zf) goto L_1235d6d6;
  /* 1235d5e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235d5e8 mov eax, dword ptr [edx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12381f40)));
  /* 1235d5ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235d5f2 jmp 0x1235d5fd */
  goto L_1235d5fd;
L_1235d5f4:;
  /* 1235d5f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d5f7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d5fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1235d5fd:;
  /* 1235d5fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235d600 mov eax, dword ptr [edx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12381f40)));
  /* 1235d607 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d60c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d60f jae 0x1235d6c6 */
  if (!C.cf) goto L_1235d6c6;
  /* 1235d615 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d618 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1235d61c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1235d61f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235d621 jne 0x1235d6c1 */
  if (!C.zf) goto L_1235d6c1;
  /* 1235d627 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d62a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d62e jne 0x1235d669 */
  if (!C.zf) goto L_1235d669;
  /* 1235d630 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1235d632 call 0x12357dc0 */
  push32(0x1235d637u); f_12357dc0();
  /* 1235d637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d63a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d63d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d641 jne 0x1235d65f */
  if (!C.zf) goto L_1235d65f;
  /* 1235d643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d646 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d649 push edx */
  push32((uint32_t)(EDX));
  /* 1235d64a call dword ptr [0x12383348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383348))), 0x1235d650u);
  /* 1235d650 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d653 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1235d656 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d65c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1235d65f:;
  /* 1235d65f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1235d661 call 0x12357e60 */
  push32(0x1235d666u); f_12357e60();
  /* 1235d666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235d669:;
  /* 1235d669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d66c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d66f push eax */
  push32((uint32_t)(EAX));
  /* 1235d670 call dword ptr [0x1238334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238334c))), 0x1235d676u);
  /* 1235d676 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d679 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1235d67d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1235d680 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235d682 je 0x1235d696 */
  if (C.zf) goto L_1235d696;
  /* 1235d684 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d687 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d68a push eax */
  push32((uint32_t)(EAX));
  /* 1235d68b call dword ptr [0x12383350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383350))), 0x1235d691u);
  /* 1235d691 jmp 0x1235d5f4 */
  goto L_1235d5f4;
L_1235d696:;
  /* 1235d696 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d699 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1235d69f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235d6a2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235d6a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235d6a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d6ab sub eax, dword ptr [edx*4 + 0x12381f40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12381f40))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235d6b2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1235d6b3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1235d6b8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1235d6ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d6bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235d6bf jmp 0x1235d6c6 */
  goto L_1235d6c6;
L_1235d6c1:;
  /* 1235d6c1 jmp 0x1235d5f4 */
  goto L_1235d5f4;
L_1235d6c6:;
  /* 1235d6c6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d6ca je 0x1235d6d1 */
  if (C.zf) goto L_1235d6d1;
  /* 1235d6cc jmp 0x1235d770 */
  goto L_1235d770;
L_1235d6d1:;
  /* 1235d6d1 jmp 0x1235d76b */
  goto L_1235d76b;
L_1235d6d6:;
  /* 1235d6d6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1235d6d8 push 0x1237c10c */
  push32((uint32_t)(0x1237c10cu));
  /* 1235d6dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1235d6df push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1235d6e4 call 0x123543c0 */
  push32(0x1235d6e9u); f_123543c0();
  /* 1235d6e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d6ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235d6ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d6f3 je 0x1235d769 */
  if (C.zf) goto L_1235d769;
  /* 1235d6f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235d6f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d6fb mov dword ptr [eax*4 + 0x12381f40], ecx */
  w32((uint32_t)(EAX*4 + 0x12381f40), (ECX));
  /* 1235d702 mov edx, dword ptr [0x1238207c] */
  EDX = (r32((uint32_t)(0x1238207c)));
  /* 1235d708 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d70b mov dword ptr [0x1238207c], edx */
  w32((uint32_t)(0x1238207c), (EDX));
  /* 1235d711 jmp 0x1235d71c */
  goto L_1235d71c;
L_1235d713:;
  /* 1235d713 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d716 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235d71c:;
  /* 1235d71c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235d71f mov edx, dword ptr [ecx*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235d726 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d72c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d72f jae 0x1235d754 */
  if (!C.cf) goto L_1235d754;
  /* 1235d731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d734 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1235d738 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d73b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1235d741 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d744 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1235d748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235d74b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1235d752 jmp 0x1235d713 */
  goto L_1235d713;
L_1235d754:;
  /* 1235d754 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235d757 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235d75a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235d75d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235d760 push edx */
  push32((uint32_t)(EDX));
  /* 1235d761 call 0x1235dab0 */
  push32(0x1235d766u); f_1235dab0();
  /* 1235d766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235d769:;
  /* 1235d769 jmp 0x1235d770 */
  goto L_1235d770;
L_1235d76b:;
  /* 1235d76b jmp 0x1235d5c1 */
  goto L_1235d5c1;
L_1235d770:;
  /* 1235d770 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1235d772 call 0x12357e60 */
  push32(0x1235d777u); f_12357e60();
  /* 1235d777 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235d77a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235d77d pop esi */
  ESI = (pop32());
  /* 1235d77e mov esp, ebp */
  ESP = (EBP);
  /* 1235d780 pop ebp */
  EBP = (pop32());
  /* 1235d781 ret  */
  ESPCHK(0x1235d5a0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1235d790 (183 bytes, 57 insns) */
void f_1235d790(void) {
  FTRACE(0x1235d790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d790 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d791 mov ebp, esp */
  EBP = (ESP);
  /* 1235d793 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d797 cmp eax, dword ptr [0x1238207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1238207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d79d jae 0x1235d82a */
  if (!C.cf) goto L_1235d82a;
  /* 1235d7a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d7a6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235d7a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d7ac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235d7af imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235d7b2 mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235d7b9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d7bd jne 0x1235d82a */
  if (!C.zf) goto L_1235d82a;
  /* 1235d7bf cmp dword ptr [0x12380550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12380550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d7c6 jne 0x1235d80a */
  if (!C.zf) goto L_1235d80a;
  /* 1235d7c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d7cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235d7ce cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d7d2 je 0x1235d7e2 */
  if (C.zf) goto L_1235d7e2;
  /* 1235d7d4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d7d8 je 0x1235d7f0 */
  if (C.zf) goto L_1235d7f0;
  /* 1235d7da cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d7de je 0x1235d7fe */
  if (C.zf) goto L_1235d7fe;
  /* 1235d7e0 jmp 0x1235d80a */
  goto L_1235d80a;
L_1235d7e2:;
  /* 1235d7e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235d7e5 push edx */
  push32((uint32_t)(EDX));
  /* 1235d7e6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1235d7e8 call dword ptr [0x12383294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383294))), 0x1235d7eeu);
  /* 1235d7ee jmp 0x1235d80a */
  goto L_1235d80a;
L_1235d7f0:;
  /* 1235d7f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235d7f3 push eax */
  push32((uint32_t)(EAX));
  /* 1235d7f4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1235d7f6 call dword ptr [0x12383294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383294))), 0x1235d7fcu);
  /* 1235d7fc jmp 0x1235d80a */
  goto L_1235d80a;
L_1235d7fe:;
  /* 1235d7fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235d801 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d802 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1235d804 call dword ptr [0x12383294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383294))), 0x1235d80au);
L_1235d80a:;
  /* 1235d80a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d80d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1235d810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d813 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1235d816 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235d819 mov ecx, dword ptr [edx*4 + 0x12381f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12381f40)));
  /* 1235d820 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235d823 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1235d826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235d828 jmp 0x1235d843 */
  goto L_1235d843;
L_1235d82a:;
  /* 1235d82a call 0x1235c290 */
  push32(0x1235d82fu); f_1235c290();
  /* 1235d82f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1235d835 call 0x1235c2a0 */
  push32(0x1235d83au); f_1235c2a0();
  /* 1235d83a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235d840 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1235d843:;
  /* 1235d843 mov esp, ebp */
  ESP = (EBP);
  /* 1235d845 pop ebp */
  EBP = (pop32());
  /* 1235d846 ret  */
  ESPCHK(0x1235d790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d850 @ 0x1235d850 (216 bytes, 63 insns) */
void f_1235d850(void) {
  FTRACE(0x1235d850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d850 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d851 mov ebp, esp */
  EBP = (ESP);
  /* 1235d853 push ecx */
  push32((uint32_t)(ECX));
  /* 1235d854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d857 cmp eax, dword ptr [0x1238207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1238207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d85d jae 0x1235d90b */
  if (!C.cf) goto L_1235d90b;
  /* 1235d863 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d866 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235d869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d86c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235d86f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235d872 mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235d879 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1235d87e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1235d881 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235d883 je 0x1235d90b */
  if (C.zf) goto L_1235d90b;
  /* 1235d889 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d88c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1235d88f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d892 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1235d895 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235d898 mov ecx, dword ptr [edx*4 + 0x12381f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12381f40)));
  /* 1235d89f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d8a3 je 0x1235d90b */
  if (C.zf) goto L_1235d90b;
  /* 1235d8a5 cmp dword ptr [0x12380550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12380550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d8ac jne 0x1235d8ea */
  if (!C.zf) goto L_1235d8ea;
  /* 1235d8ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d8b1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235d8b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d8b8 je 0x1235d8c8 */
  if (C.zf) goto L_1235d8c8;
  /* 1235d8ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d8be je 0x1235d8d4 */
  if (C.zf) goto L_1235d8d4;
  /* 1235d8c0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d8c4 je 0x1235d8e0 */
  if (C.zf) goto L_1235d8e0;
  /* 1235d8c6 jmp 0x1235d8ea */
  goto L_1235d8ea;
L_1235d8c8:;
  /* 1235d8c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235d8ca push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1235d8cc call dword ptr [0x12383294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383294))), 0x1235d8d2u);
  /* 1235d8d2 jmp 0x1235d8ea */
  goto L_1235d8ea;
L_1235d8d4:;
  /* 1235d8d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235d8d6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1235d8d8 call dword ptr [0x12383294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383294))), 0x1235d8deu);
  /* 1235d8de jmp 0x1235d8ea */
  goto L_1235d8ea;
L_1235d8e0:;
  /* 1235d8e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235d8e2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1235d8e4 call dword ptr [0x12383294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383294))), 0x1235d8eau);
L_1235d8ea:;
  /* 1235d8ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d8ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235d8f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d8f3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1235d8f6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235d8f9 mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235d900 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1235d907 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235d909 jmp 0x1235d924 */
  goto L_1235d924;
L_1235d90b:;
  /* 1235d90b call 0x1235c290 */
  push32(0x1235d910u); f_1235c290();
  /* 1235d910 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1235d916 call 0x1235c2a0 */
  push32(0x1235d91bu); f_1235c2a0();
  /* 1235d91b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235d921 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1235d924:;
  /* 1235d924 mov esp, ebp */
  ESP = (EBP);
  /* 1235d926 pop ebp */
  EBP = (pop32());
  /* 1235d927 ret  */
  ESPCHK(0x1235d850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d930 @ 0x1235d930 (102 bytes, 30 insns) */
void f_1235d930(void) {
  FTRACE(0x1235d930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d930 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d931 mov ebp, esp */
  EBP = (ESP);
  /* 1235d933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d936 cmp eax, dword ptr [0x1238207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1238207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d93c jae 0x1235d97b */
  if (!C.cf) goto L_1235d97b;
  /* 1235d93e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d941 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235d944 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d947 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235d94a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235d94d mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235d954 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1235d959 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1235d95c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235d95e je 0x1235d97b */
  if (C.zf) goto L_1235d97b;
  /* 1235d960 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d963 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1235d966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d969 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1235d96c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235d96f mov ecx, dword ptr [edx*4 + 0x12381f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12381f40)));
  /* 1235d976 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1235d979 jmp 0x1235d994 */
  goto L_1235d994;
L_1235d97b:;
  /* 1235d97b call 0x1235c290 */
  push32(0x1235d980u); f_1235c290();
  /* 1235d980 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1235d986 call 0x1235c2a0 */
  push32(0x1235d98bu); f_1235c2a0();
  /* 1235d98b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235d991 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1235d994:;
  /* 1235d994 pop ebp */
  EBP = (pop32());
  /* 1235d995 ret  */
  ESPCHK(0x1235d930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9a0 @ 0x1235d9a0 (260 bytes, 83 insns) */
void f_1235d9a0(void) {
  FTRACE(0x1235d9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235d9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235d9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1235d9a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235d9a6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1235d9aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235d9ad and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1235d9b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235d9b2 je 0x1235d9bd */
  if (C.zf) goto L_1235d9bd;
  /* 1235d9b4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1235d9b7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1235d9ba mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1235d9bd:;
  /* 1235d9bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235d9c0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1235d9c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235d9c8 je 0x1235d9d2 */
  if (C.zf) goto L_1235d9d2;
  /* 1235d9ca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1235d9cd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1235d9cf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1235d9d2:;
  /* 1235d9d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235d9d5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1235d9db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235d9dd je 0x1235d9e8 */
  if (C.zf) goto L_1235d9e8;
  /* 1235d9df mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1235d9e2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1235d9e5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1235d9e8:;
  /* 1235d9e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235d9eb push eax */
  push32((uint32_t)(EAX));
  /* 1235d9ec call dword ptr [0x12383308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383308))), 0x1235d9f2u);
  /* 1235d9f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235d9f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235d9f9 jne 0x1235da12 */
  if (!C.zf) goto L_1235da12;
  /* 1235d9fb call dword ptr [0x123832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832fc))), 0x1235da01u);
  /* 1235da01 push eax */
  push32((uint32_t)(EAX));
  /* 1235da02 call 0x1235c1f0 */
  push32(0x1235da07u); f_1235c1f0();
  /* 1235da07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235da0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235da0d jmp 0x1235daa0 */
  goto L_1235daa0;
L_1235da12:;
  /* 1235da12 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235da16 jne 0x1235da23 */
  if (!C.zf) goto L_1235da23;
  /* 1235da18 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1235da1b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1235da1e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1235da21 jmp 0x1235da32 */
  goto L_1235da32;
L_1235da23:;
  /* 1235da23 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235da27 jne 0x1235da32 */
  if (!C.zf) goto L_1235da32;
  /* 1235da29 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1235da2c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1235da2f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1235da32:;
  /* 1235da32 call 0x1235d5a0 */
  push32(0x1235da37u); f_1235d5a0();
  /* 1235da37 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235da3a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235da3e jne 0x1235da5b */
  if (!C.zf) goto L_1235da5b;
  /* 1235da40 call 0x1235c290 */
  push32(0x1235da45u); f_1235c290();
  /* 1235da45 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1235da4b call 0x1235c2a0 */
  push32(0x1235da50u); f_1235c2a0();
  /* 1235da50 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235da56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235da59 jmp 0x1235daa0 */
  goto L_1235daa0;
L_1235da5b:;
  /* 1235da5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235da5e push eax */
  push32((uint32_t)(EAX));
  /* 1235da5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235da62 push ecx */
  push32((uint32_t)(ECX));
  /* 1235da63 call 0x1235d790 */
  push32(0x1235da68u); f_1235d790();
  /* 1235da68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235da6b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1235da6e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1235da71 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1235da74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235da77 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235da7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235da7d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1235da80 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235da83 mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235da8a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1235da8d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1235da91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235da94 push ecx */
  push32((uint32_t)(ECX));
  /* 1235da95 call 0x1235db40 */
  push32(0x1235da9au); f_1235db40();
  /* 1235da9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235da9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1235daa0:;
  /* 1235daa0 mov esp, ebp */
  ESP = (EBP);
  /* 1235daa2 pop ebp */
  EBP = (pop32());
  /* 1235daa3 ret  */
  ESPCHK(0x1235d9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dab0 @ 0x1235dab0 (134 bytes, 44 insns) */
void f_1235dab0(void) {
  FTRACE(0x1235dab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235dab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235dab1 mov ebp, esp */
  EBP = (ESP);
  /* 1235dab3 push ecx */
  push32((uint32_t)(ECX));
  /* 1235dab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235dab7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235daba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235dabd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1235dac0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235dac3 mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235daca add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dacc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235dacf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235dad2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dad6 jne 0x1235db11 */
  if (!C.zf) goto L_1235db11;
  /* 1235dad8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1235dada call 0x12357dc0 */
  push32(0x1235dadfu); f_12357dc0();
  /* 1235dadf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235dae5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dae9 jne 0x1235db07 */
  if (!C.zf) goto L_1235db07;
  /* 1235daeb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235daee add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235daf1 push edx */
  push32((uint32_t)(EDX));
  /* 1235daf2 call dword ptr [0x12383348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383348))), 0x1235daf8u);
  /* 1235daf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235dafb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1235dafe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235db01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235db04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1235db07:;
  /* 1235db07 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1235db09 call 0x12357e60 */
  push32(0x1235db0eu); f_12357e60();
  /* 1235db0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235db11:;
  /* 1235db11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235db14 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235db17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235db1a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1235db1d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235db20 mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235db27 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1235db2b push eax */
  push32((uint32_t)(EAX));
  /* 1235db2c call dword ptr [0x1238334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238334c))), 0x1235db32u);
  /* 1235db32 mov esp, ebp */
  ESP = (EBP);
  /* 1235db34 pop ebp */
  EBP = (pop32());
  /* 1235db35 ret  */
  ESPCHK(0x1235dab0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1235db40 (38 bytes, 13 insns) */
void f_1235db40(void) {
  FTRACE(0x1235db40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235db40 push ebp */
  push32((uint32_t)(EBP));
  /* 1235db41 mov ebp, esp */
  EBP = (ESP);
  /* 1235db43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235db46 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235db49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235db4c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1235db4f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235db52 mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235db59 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1235db5d push eax */
  push32((uint32_t)(EAX));
  /* 1235db5e call dword ptr [0x12383350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383350))), 0x1235db64u);
  /* 1235db64 pop ebp */
  EBP = (pop32());
  /* 1235db65 ret  */
  ESPCHK(0x1235db40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db70 @ 0x1235db70 (218 bytes, 63 insns) */
void f_1235db70(void) {
  FTRACE(0x1235db70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235db70 push ebp */
  push32((uint32_t)(EBP));
  /* 1235db71 mov ebp, esp */
  EBP = (ESP);
  /* 1235db73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235db76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235db7d push 2 */
  push32((uint32_t)(0x2u));
  /* 1235db7f call 0x12357dc0 */
  push32(0x1235db84u); f_12357dc0();
  /* 1235db84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235db87 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1235db8e jmp 0x1235db99 */
  goto L_1235db99;
L_1235db90:;
  /* 1235db90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235db93 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235db96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1235db99:;
  /* 1235db99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235db9c cmp ecx, dword ptr [0x12381c40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12381c40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dba2 jge 0x1235dc39 */
  if ((C.sf==C.of)) goto L_1235dc39;
  /* 1235dba8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dbab mov eax, dword ptr [0x123808e8] */
  EAX = (r32((uint32_t)(0x123808e8)));
  /* 1235dbb0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dbb4 je 0x1235dc34 */
  if (C.zf) goto L_1235dc34;
  /* 1235dbb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dbb9 mov edx, dword ptr [0x123808e8] */
  EDX = (r32((uint32_t)(0x123808e8)));
  /* 1235dbbf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1235dbc2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1235dbc5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1235dbcb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235dbcd je 0x1235dbf1 */
  if (C.zf) goto L_1235dbf1;
  /* 1235dbcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dbd2 mov eax, dword ptr [0x123808e8] */
  EAX = (r32((uint32_t)(0x123808e8)));
  /* 1235dbd7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1235dbda push ecx */
  push32((uint32_t)(ECX));
  /* 1235dbdb call 0x1235e960 */
  push32(0x1235dbe0u); f_1235e960();
  /* 1235dbe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dbe3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dbe6 je 0x1235dbf1 */
  if (C.zf) goto L_1235dbf1;
  /* 1235dbe8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235dbeb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dbee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1235dbf1:;
  /* 1235dbf1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dbf5 jl 0x1235dc34 */
  if ((C.sf!=C.of)) goto L_1235dc34;
  /* 1235dbf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dbfa mov ecx, dword ptr [0x123808e8] */
  ECX = (r32((uint32_t)(0x123808e8)));
  /* 1235dc00 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1235dc03 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dc06 push edx */
  push32((uint32_t)(EDX));
  /* 1235dc07 call dword ptr [0x12383254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383254))), 0x1235dc0du);
  /* 1235dc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1235dc0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dc12 mov ecx, dword ptr [0x123808e8] */
  ECX = (r32((uint32_t)(0x123808e8)));
  /* 1235dc18 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1235dc1b push edx */
  push32((uint32_t)(EDX));
  /* 1235dc1c call 0x12354e50 */
  push32(0x1235dc21u); f_12354e50();
  /* 1235dc21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dc24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dc27 mov ecx, dword ptr [0x123808e8] */
  ECX = (r32((uint32_t)(0x123808e8)));
  /* 1235dc2d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1235dc34:;
  /* 1235dc34 jmp 0x1235db90 */
  goto L_1235db90;
L_1235dc39:;
  /* 1235dc39 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235dc3b call 0x12357e60 */
  push32(0x1235dc40u); f_12357e60();
  /* 1235dc40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dc43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235dc46 mov esp, ebp */
  ESP = (EBP);
  /* 1235dc48 pop ebp */
  EBP = (pop32());
  /* 1235dc49 ret  */
  ESPCHK(0x1235db70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc50 @ 0x1235dc50 (68 bytes, 26 insns) */
void f_1235dc50(void) {
  FTRACE(0x1235dc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235dc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1235dc51 mov ebp, esp */
  EBP = (ESP);
  /* 1235dc53 push ecx */
  push32((uint32_t)(ECX));
  /* 1235dc54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dc58 jne 0x1235dc66 */
  if (!C.zf) goto L_1235dc66;
  /* 1235dc5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235dc5c call 0x1235ddc0 */
  push32(0x1235dc61u); f_1235ddc0();
  /* 1235dc61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dc64 jmp 0x1235dc90 */
  goto L_1235dc90;
L_1235dc66:;
  /* 1235dc66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235dc69 push eax */
  push32((uint32_t)(EAX));
  /* 1235dc6a call 0x1235d1d0 */
  push32(0x1235dc6fu); f_1235d1d0();
  /* 1235dc6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dc72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235dc75 push ecx */
  push32((uint32_t)(ECX));
  /* 1235dc76 call 0x1235dca0 */
  push32(0x1235dc7bu); f_1235dca0();
  /* 1235dc7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dc7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235dc81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235dc84 push edx */
  push32((uint32_t)(EDX));
  /* 1235dc85 call 0x1235d240 */
  push32(0x1235dc8au); f_1235d240();
  /* 1235dc8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dc8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1235dc90:;
  /* 1235dc90 mov esp, ebp */
  ESP = (EBP);
  /* 1235dc92 pop ebp */
  EBP = (pop32());
  /* 1235dc93 ret  */
  ESPCHK(0x1235dc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dca0 @ 0x1235dca0 (65 bytes, 26 insns) */
void f_1235dca0(void) {
  FTRACE(0x1235dca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235dca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235dca1 mov ebp, esp */
  EBP = (ESP);
  /* 1235dca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235dca6 push eax */
  push32((uint32_t)(EAX));
  /* 1235dca7 call 0x1235dcf0 */
  push32(0x1235dcacu); f_1235dcf0();
  /* 1235dcac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dcaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235dcb1 je 0x1235dcb8 */
  if (C.zf) goto L_1235dcb8;
  /* 1235dcb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235dcb6 jmp 0x1235dcdf */
  goto L_1235dcdf;
L_1235dcb8:;
  /* 1235dcb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235dcbb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235dcbe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1235dcc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235dcc6 je 0x1235dcdd */
  if (C.zf) goto L_1235dcdd;
  /* 1235dcc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235dccb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1235dcce push ecx */
  push32((uint32_t)(ECX));
  /* 1235dccf call 0x1235eab0 */
  push32(0x1235dcd4u); f_1235eab0();
  /* 1235dcd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dcd7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235dcd9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235dcdb jmp 0x1235dcdf */
  goto L_1235dcdf;
L_1235dcdd:;
  /* 1235dcdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235dcdf:;
  /* 1235dcdf pop ebp */
  EBP = (pop32());
  /* 1235dce0 ret  */
  ESPCHK(0x1235dca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcf0 @ 0x1235dcf0 (183 bytes, 62 insns) */
void f_1235dcf0(void) {
  FTRACE(0x1235dcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235dcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235dcf1 mov ebp, esp */
  EBP = (ESP);
  /* 1235dcf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235dcf6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235dcfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235dd00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235dd03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd06 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235dd09 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1235dd0c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dd0f jne 0x1235dd8b */
  if (!C.zf) goto L_1235dd8b;
  /* 1235dd11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd14 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1235dd17 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1235dd1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235dd1f je 0x1235dd8b */
  if (C.zf) goto L_1235dd8b;
  /* 1235dd21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd27 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1235dd29 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235dd2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235dd2f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dd33 jle 0x1235dd8b */
  if ((C.zf||C.sf!=C.of)) goto L_1235dd8b;
  /* 1235dd35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235dd38 push edx */
  push32((uint32_t)(EDX));
  /* 1235dd39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd3c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1235dd3f push ecx */
  push32((uint32_t)(ECX));
  /* 1235dd40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd43 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1235dd46 push eax */
  push32((uint32_t)(EAX));
  /* 1235dd47 call 0x1235cc60 */
  push32(0x1235dd4cu); f_1235cc60();
  /* 1235dd4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dd4f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dd52 jne 0x1235dd75 */
  if (!C.zf) goto L_1235dd75;
  /* 1235dd54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235dd5a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1235dd60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235dd62 je 0x1235dd73 */
  if (C.zf) goto L_1235dd73;
  /* 1235dd64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd67 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1235dd6a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1235dd6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd70 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1235dd73:;
  /* 1235dd73 jmp 0x1235dd8b */
  goto L_1235dd8b;
L_1235dd75:;
  /* 1235dd75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd78 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1235dd7b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1235dd7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd81 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1235dd84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1235dd8b:;
  /* 1235dd8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd91 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1235dd94 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1235dd96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235dd99 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1235dda0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235dda3 mov esp, ebp */
  ESP = (EBP);
  /* 1235dda5 pop ebp */
  EBP = (pop32());
  /* 1235dda6 ret  */
  ESPCHK(0x1235dcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddb0 @ 0x1235ddb0 (15 bytes, 7 insns) */
void f_1235ddb0(void) {
  FTRACE(0x1235ddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235ddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235ddb1 mov ebp, esp */
  EBP = (ESP);
  /* 1235ddb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ddb5 call 0x1235ddc0 */
  push32(0x1235ddbau); f_1235ddc0();
  /* 1235ddba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ddbd pop ebp */
  EBP = (pop32());
  /* 1235ddbe ret  */
  ESPCHK(0x1235ddb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddc0 @ 0x1235ddc0 (319 bytes, 94 insns) */
void f_1235ddc0(void) {
  FTRACE(0x1235ddc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235ddc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235ddc1 mov ebp, esp */
  EBP = (ESP);
  /* 1235ddc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235ddc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235ddcd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1235ddd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ddd6 call 0x12357dc0 */
  push32(0x1235dddbu); f_12357dc0();
  /* 1235dddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ddde mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1235dde5 jmp 0x1235ddf0 */
  goto L_1235ddf0;
L_1235dde7:;
  /* 1235dde7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ddea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235dded mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1235ddf0:;
  /* 1235ddf0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ddf3 cmp ecx, dword ptr [0x12381c40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12381c40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ddf9 jge 0x1235dee3 */
  if ((C.sf==C.of)) goto L_1235dee3;
  /* 1235ddff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235de02 mov eax, dword ptr [0x123808e8] */
  EAX = (r32((uint32_t)(0x123808e8)));
  /* 1235de07 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235de0b je 0x1235dede */
  if (C.zf) goto L_1235dede;
  /* 1235de11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235de14 mov edx, dword ptr [0x123808e8] */
  EDX = (r32((uint32_t)(0x123808e8)));
  /* 1235de1a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1235de1d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1235de20 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1235de26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235de28 je 0x1235dede */
  if (C.zf) goto L_1235dede;
  /* 1235de2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235de31 mov eax, dword ptr [0x123808e8] */
  EAX = (r32((uint32_t)(0x123808e8)));
  /* 1235de36 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1235de39 push ecx */
  push32((uint32_t)(ECX));
  /* 1235de3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235de3d push edx */
  push32((uint32_t)(EDX));
  /* 1235de3e call 0x1235d210 */
  push32(0x1235de43u); f_1235d210();
  /* 1235de43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235de46 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235de49 mov ecx, dword ptr [0x123808e8] */
  ECX = (r32((uint32_t)(0x123808e8)));
  /* 1235de4f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1235de52 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1235de55 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1235de5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235de5c je 0x1235dec5 */
  if (C.zf) goto L_1235dec5;
  /* 1235de5e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235de62 jne 0x1235de89 */
  if (!C.zf) goto L_1235de89;
  /* 1235de64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235de67 mov edx, dword ptr [0x123808e8] */
  EDX = (r32((uint32_t)(0x123808e8)));
  /* 1235de6d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1235de70 push eax */
  push32((uint32_t)(EAX));
  /* 1235de71 call 0x1235dca0 */
  push32(0x1235de76u); f_1235dca0();
  /* 1235de76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235de79 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235de7c je 0x1235de87 */
  if (C.zf) goto L_1235de87;
  /* 1235de7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235de81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235de84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1235de87:;
  /* 1235de87 jmp 0x1235dec5 */
  goto L_1235dec5;
L_1235de89:;
  /* 1235de89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235de8d jne 0x1235dec5 */
  if (!C.zf) goto L_1235dec5;
  /* 1235de8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235de92 mov eax, dword ptr [0x123808e8] */
  EAX = (r32((uint32_t)(0x123808e8)));
  /* 1235de97 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1235de9a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235de9d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1235dea0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235dea2 je 0x1235dec5 */
  if (C.zf) goto L_1235dec5;
  /* 1235dea4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235dea7 mov ecx, dword ptr [0x123808e8] */
  ECX = (r32((uint32_t)(0x123808e8)));
  /* 1235dead mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1235deb0 push edx */
  push32((uint32_t)(EDX));
  /* 1235deb1 call 0x1235dca0 */
  push32(0x1235deb6u); f_1235dca0();
  /* 1235deb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235deb9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235debc jne 0x1235dec5 */
  if (!C.zf) goto L_1235dec5;
  /* 1235debe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1235dec5:;
  /* 1235dec5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235dec8 mov ecx, dword ptr [0x123808e8] */
  ECX = (r32((uint32_t)(0x123808e8)));
  /* 1235dece mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1235ded1 push edx */
  push32((uint32_t)(EDX));
  /* 1235ded2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ded5 push eax */
  push32((uint32_t)(EAX));
  /* 1235ded6 call 0x1235d280 */
  push32(0x1235dedbu); f_1235d280();
  /* 1235dedb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235dede:;
  /* 1235dede jmp 0x1235dde7 */
  goto L_1235dde7;
L_1235dee3:;
  /* 1235dee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235dee5 call 0x12357e60 */
  push32(0x1235deeau); f_12357e60();
  /* 1235deea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235deed cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235def1 jne 0x1235def8 */
  if (!C.zf) goto L_1235def8;
  /* 1235def3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235def6 jmp 0x1235defb */
  goto L_1235defb;
L_1235def8:;
  /* 1235def8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1235defb:;
  /* 1235defb mov esp, ebp */
  ESP = (EBP);
  /* 1235defd pop ebp */
  EBP = (pop32());
  /* 1235defe ret  */
  ESPCHK(0x1235ddc0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1235df00 (15 bytes, 7 insns) */
void f_1235df00(void) {
  FTRACE(0x1235df00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235df00 push ebp */
  push32((uint32_t)(EBP));
  /* 1235df01 mov ebp, esp */
  EBP = (ESP);
  /* 1235df03 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235df05 call 0x12353330 */
  push32(0x1235df0au); f_12353330();
  /* 1235df0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235df0d pop ebp */
  EBP = (pop32());
  /* 1235df0e ret  */
  ESPCHK(0x1235df00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df10 @ 0x1235df10 (1007 bytes, 269 insns) */
void f_1235df10(void) {
  FTRACE(0x1235df10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235df10 push ebp */
  push32((uint32_t)(EBP));
  /* 1235df11 mov ebp, esp */
  EBP = (ESP);
  /* 1235df13 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235df19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235df1d jl 0x1235df25 */
  if ((C.sf!=C.of)) goto L_1235df25;
  /* 1235df1f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235df23 jle 0x1235df2c */
  if ((C.zf||C.sf!=C.of)) goto L_1235df2c;
L_1235df25:;
  /* 1235df25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235df27 jmp 0x1235e2fb */
  goto L_1235e2fb;
L_1235df2c:;
  /* 1235df2c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1235df2e call 0x12357dc0 */
  push32(0x1235df33u); f_12357dc0();
  /* 1235df33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235df36 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1235df3d mov eax, dword ptr [0x123808d4] */
  EAX = (r32((uint32_t)(0x123808d4)));
  /* 1235df42 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235df45 mov dword ptr [0x123808d4], eax */
  w32((uint32_t)(0x123808d4), (EAX));
L_1235df4a:;
  /* 1235df4a cmp dword ptr [0x123808e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235df51 je 0x1235df5d */
  if (C.zf) goto L_1235df5d;
  /* 1235df53 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235df55 call dword ptr [0x12383290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383290))), 0x1235df5bu);
  /* 1235df5b jmp 0x1235df4a */
  goto L_1235df4a;
L_1235df5d:;
  /* 1235df5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235df61 je 0x1235dfa1 */
  if (C.zf) goto L_1235dfa1;
  /* 1235df63 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235df67 je 0x1235df81 */
  if (C.zf) goto L_1235df81;
  /* 1235df69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235df6c push ecx */
  push32((uint32_t)(ECX));
  /* 1235df6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235df70 push edx */
  push32((uint32_t)(EDX));
  /* 1235df71 call 0x1235e300 */
  push32(0x1235df76u); f_1235e300();
  /* 1235df76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235df79 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1235df7f jmp 0x1235df93 */
  goto L_1235df93;
L_1235df81:;
  /* 1235df81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235df84 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235df87 mov ecx, dword ptr [eax + 0x1237f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1237f4dc)));
  /* 1235df8d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1235df93:;
  /* 1235df93 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1235df99 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1235df9c jmp 0x1235e2db */
  goto L_1235e2db;
L_1235dfa1:;
  /* 1235dfa1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1235dfa8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1235dfaf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dfb3 je 0x1235e2d3 */
  if (C.zf) goto L_1235e2d3;
  /* 1235dfb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235dfbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235dfbf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dfc2 jne 0x1235e1e4 */
  if (!C.zf) goto L_1235e1e4;
  /* 1235dfc8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235dfcb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1235dfcf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dfd2 jne 0x1235e1e4 */
  if (!C.zf) goto L_1235e1e4;
  /* 1235dfd8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235dfdb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1235dfdf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235dfe2 jne 0x1235e1e4 */
  if (!C.zf) goto L_1235e1e4;
  /* 1235dfe8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235dfeb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1235dff1:;
  /* 1235dff1 push 0x1237c15c */
  push32((uint32_t)(0x1237c15cu));
  /* 1235dff6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1235dffc push ecx */
  push32((uint32_t)(ECX));
  /* 1235dffd call 0x12360160 */
  push32(0x1235e002u); f_12360160();
  /* 1235e002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e005 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1235e00b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e012 je 0x1235e03d */
  if (C.zf) goto L_1235e03d;
  /* 1235e014 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1235e01a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235e020 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1235e026 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e02d je 0x1235e03d */
  if (C.zf) goto L_1235e03d;
  /* 1235e02f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1235e035 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235e038 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e03b jne 0x1235e063 */
  if (!C.zf) goto L_1235e063;
L_1235e03d:;
  /* 1235e03d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e041 je 0x1235e05c */
  if (C.zf) goto L_1235e05c;
  /* 1235e043 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1235e045 call 0x12357e60 */
  push32(0x1235e04au); f_12357e60();
  /* 1235e04a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e04d mov edx, dword ptr [0x123808d4] */
  EDX = (r32((uint32_t)(0x123808d4)));
  /* 1235e053 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235e056 mov dword ptr [0x123808d4], edx */
  w32((uint32_t)(0x123808d4), (EDX));
L_1235e05c:;
  /* 1235e05c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e05e jmp 0x1235e2fb */
  goto L_1235e2fb;
L_1235e063:;
  /* 1235e063 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1235e06a jmp 0x1235e075 */
  goto L_1235e075;
L_1235e06c:;
  /* 1235e06c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235e06f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e072 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1235e075:;
  /* 1235e075 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e079 jg 0x1235e0c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1235e0c3;
  /* 1235e07b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1235e081 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e082 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1235e088 push edx */
  push32((uint32_t)(EDX));
  /* 1235e089 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235e08c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e08f mov ecx, dword ptr [eax + 0x1237f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1237f4d8)));
  /* 1235e095 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e096 call 0x12360120 */
  push32(0x1235e09bu); f_12360120();
  /* 1235e09b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e09e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e0a0 jne 0x1235e0c1 */
  if (!C.zf) goto L_1235e0c1;
  /* 1235e0a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235e0a5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e0a8 mov eax, dword ptr [edx + 0x1237f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1237f4d8)));
  /* 1235e0ae push eax */
  push32((uint32_t)(EAX));
  /* 1235e0af call 0x123571f0 */
  push32(0x1235e0b4u); f_123571f0();
  /* 1235e0b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e0b7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e0bd jne 0x1235e0c1 */
  if (!C.zf) goto L_1235e0c1;
  /* 1235e0bf jmp 0x1235e0c3 */
  goto L_1235e0c3;
L_1235e0c1:;
  /* 1235e0c1 jmp 0x1235e06c */
  goto L_1235e06c;
L_1235e0c3:;
  /* 1235e0c3 push 0x1237c158 */
  push32((uint32_t)(0x1237c158u));
  /* 1235e0c8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1235e0ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e0d1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1235e0d7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1235e0dd push edx */
  push32((uint32_t)(EDX));
  /* 1235e0de call 0x123600e0 */
  push32(0x1235e0e3u); f_123600e0();
  /* 1235e0e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e0e6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1235e0ec cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e0f3 jne 0x1235e129 */
  if (!C.zf) goto L_1235e129;
  /* 1235e0f5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1235e0fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235e0fe cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e101 je 0x1235e129 */
  if (C.zf) goto L_1235e129;
  /* 1235e103 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e107 je 0x1235e122 */
  if (C.zf) goto L_1235e122;
  /* 1235e109 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1235e10b call 0x12357e60 */
  push32(0x1235e110u); f_12357e60();
  /* 1235e110 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e113 mov edx, dword ptr [0x123808d4] */
  EDX = (r32((uint32_t)(0x123808d4)));
  /* 1235e119 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235e11c mov dword ptr [0x123808d4], edx */
  w32((uint32_t)(0x123808d4), (EDX));
L_1235e122:;
  /* 1235e122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e124 jmp 0x1235e2fb */
  goto L_1235e2fb;
L_1235e129:;
  /* 1235e129 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e12d jg 0x1235e17a */
  if ((!C.zf&&C.sf==C.of)) goto L_1235e17a;
  /* 1235e12f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1235e135 push eax */
  push32((uint32_t)(EAX));
  /* 1235e136 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1235e13c push ecx */
  push32((uint32_t)(ECX));
  /* 1235e13d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1235e143 push edx */
  push32((uint32_t)(EDX));
  /* 1235e144 call 0x12357be0 */
  push32(0x1235e149u); f_12357be0();
  /* 1235e149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e14c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1235e152 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1235e15a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1235e160 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e161 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235e164 push edx */
  push32((uint32_t)(EDX));
  /* 1235e165 call 0x1235e300 */
  push32(0x1235e16au); f_1235e300();
  /* 1235e16a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e16d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e16f je 0x1235e17a */
  if (C.zf) goto L_1235e17a;
  /* 1235e171 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235e174 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e177 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1235e17a:;
  /* 1235e17a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1235e180 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e186 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1235e18c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1235e192 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1235e195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e197 je 0x1235e1a8 */
  if (C.zf) goto L_1235e1a8;
  /* 1235e199 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1235e19f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e1a2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1235e1a8:;
  /* 1235e1a8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1235e1ae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1235e1b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e1b3 jne 0x1235dff1 */
  if (!C.zf) goto L_1235dff1;
  /* 1235e1b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e1bd je 0x1235e1cc */
  if (C.zf) goto L_1235e1cc;
  /* 1235e1bf call 0x1235e4a0 */
  push32(0x1235e1c4u); f_1235e4a0();
  /* 1235e1c4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1235e1ca jmp 0x1235e1d6 */
  goto L_1235e1d6;
L_1235e1cc:;
  /* 1235e1cc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1235e1d6:;
  /* 1235e1d6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1235e1dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235e1df jmp 0x1235e2d1 */
  goto L_1235e2d1;
L_1235e1e4:;
  /* 1235e1e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e1e7 push edx */
  push32((uint32_t)(EDX));
  /* 1235e1e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235e1ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1235e1ec lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1235e1f2 push eax */
  push32((uint32_t)(EAX));
  /* 1235e1f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e1f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e1f7 call 0x1235e5a0 */
  push32(0x1235e1fcu); f_1235e5a0();
  /* 1235e1fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e1ff mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235e202 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e206 je 0x1235e2d1 */
  if (C.zf) goto L_1235e2d1;
  /* 1235e20c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1235e213 jmp 0x1235e21e */
  goto L_1235e21e;
L_1235e215:;
  /* 1235e215 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235e218 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e21b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1235e21e:;
  /* 1235e21e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e222 jg 0x1235e280 */
  if ((!C.zf&&C.sf==C.of)) goto L_1235e280;
  /* 1235e224 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e228 je 0x1235e27e */
  if (C.zf) goto L_1235e27e;
  /* 1235e22a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235e22d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e230 mov ecx, dword ptr [eax + 0x1237f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1237f4dc)));
  /* 1235e236 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e237 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1235e23d push edx */
  push32((uint32_t)(EDX));
  /* 1235e23e call 0x12360050 */
  push32(0x1235e243u); f_12360050();
  /* 1235e243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e248 je 0x1235e275 */
  if (C.zf) goto L_1235e275;
  /* 1235e24a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1235e250 push eax */
  push32((uint32_t)(EAX));
  /* 1235e251 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235e254 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e255 call 0x1235e300 */
  push32(0x1235e25au); f_1235e300();
  /* 1235e25a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e25d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e25f je 0x1235e26c */
  if (C.zf) goto L_1235e26c;
  /* 1235e261 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235e264 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e267 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1235e26a jmp 0x1235e273 */
  goto L_1235e273;
L_1235e26c:;
  /* 1235e26c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1235e273:;
  /* 1235e273 jmp 0x1235e27e */
  goto L_1235e27e;
L_1235e275:;
  /* 1235e275 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235e278 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e27b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1235e27e:;
  /* 1235e27e jmp 0x1235e215 */
  goto L_1235e215;
L_1235e280:;
  /* 1235e280 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e284 je 0x1235e2ab */
  if (C.zf) goto L_1235e2ab;
  /* 1235e286 call 0x1235e4a0 */
  push32(0x1235e28bu); f_1235e4a0();
  /* 1235e28b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235e28e push 2 */
  push32((uint32_t)(0x2u));
  /* 1235e290 mov ecx, dword ptr [0x1237f4dc] */
  ECX = (r32((uint32_t)(0x1237f4dc)));
  /* 1235e296 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e297 call 0x12354e50 */
  push32(0x1235e29cu); f_12354e50();
  /* 1235e29c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e29f mov dword ptr [0x1237f4dc], 0 */
  w32((uint32_t)(0x1237f4dc), (0x0u));
  /* 1235e2a9 jmp 0x1235e2d1 */
  goto L_1235e2d1;
L_1235e2ab:;
  /* 1235e2ab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e2af je 0x1235e2be */
  if (C.zf) goto L_1235e2be;
  /* 1235e2b1 call 0x1235e4a0 */
  push32(0x1235e2b6u); f_1235e4a0();
  /* 1235e2b6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1235e2bc jmp 0x1235e2c8 */
  goto L_1235e2c8;
L_1235e2be:;
  /* 1235e2be mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1235e2c8:;
  /* 1235e2c8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1235e2ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1235e2d1:;
  /* 1235e2d1 jmp 0x1235e2db */
  goto L_1235e2db;
L_1235e2d3:;
  /* 1235e2d3 call 0x1235e4a0 */
  push32(0x1235e2d8u); f_1235e4a0();
  /* 1235e2d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1235e2db:;
  /* 1235e2db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e2df je 0x1235e2f8 */
  if (C.zf) goto L_1235e2f8;
  /* 1235e2e1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1235e2e3 call 0x12357e60 */
  push32(0x1235e2e8u); f_12357e60();
  /* 1235e2e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e2eb mov eax, dword ptr [0x123808d4] */
  EAX = (r32((uint32_t)(0x123808d4)));
  /* 1235e2f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235e2f3 mov dword ptr [0x123808d4], eax */
  w32((uint32_t)(0x123808d4), (EAX));
L_1235e2f8:;
  /* 1235e2f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1235e2fb:;
  /* 1235e2fb mov esp, ebp */
  ESP = (EBP);
  /* 1235e2fd pop ebp */
  EBP = (pop32());
  /* 1235e2fe ret  */
  ESPCHK(0x1235df10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e300 @ 0x1235e300 (403 bytes, 117 insns) */
void f_1235e300(void) {
  FTRACE(0x1235e300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235e300 push ebp */
  push32((uint32_t)(EBP));
  /* 1235e301 mov ebp, esp */
  EBP = (ESP);
  /* 1235e303 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235e309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e30c push eax */
  push32((uint32_t)(EAX));
  /* 1235e30d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1235e313 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e314 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1235e31a push edx */
  push32((uint32_t)(EDX));
  /* 1235e31b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1235e321 push eax */
  push32((uint32_t)(EAX));
  /* 1235e322 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e325 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e326 call 0x1235e5a0 */
  push32(0x1235e32bu); f_1235e5a0();
  /* 1235e32b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e32e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e330 jne 0x1235e339 */
  if (!C.zf) goto L_1235e339;
  /* 1235e332 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e334 jmp 0x1235e48f */
  goto L_1235e48f;
L_1235e339:;
  /* 1235e339 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1235e33e push 0x1237c160 */
  push32((uint32_t)(0x1237c160u));
  /* 1235e343 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235e345 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1235e34b push edx */
  push32((uint32_t)(EDX));
  /* 1235e34c call 0x123571f0 */
  push32(0x1235e351u); f_123571f0();
  /* 1235e351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e354 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e357 push eax */
  push32((uint32_t)(EAX));
  /* 1235e358 call 0x123543c0 */
  push32(0x1235e35du); f_123543c0();
  /* 1235e35d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e360 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235e363 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e367 jne 0x1235e370 */
  if (!C.zf) goto L_1235e370;
  /* 1235e369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e36b jmp 0x1235e48f */
  goto L_1235e48f;
L_1235e370:;
  /* 1235e370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e373 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e376 mov ecx, dword ptr [eax + 0x1237f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1237f4dc)));
  /* 1235e37c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235e37f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e382 mov eax, dword ptr [edx*4 + 0x12380750] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12380750)));
  /* 1235e389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235e38c push 6 */
  push32((uint32_t)(0x6u));
  /* 1235e38e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e391 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e394 add ecx, 0x123807a0 */
  { uint32_t _a=(ECX),_b=(0x123807a0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e39a push ecx */
  push32((uint32_t)(ECX));
  /* 1235e39b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1235e39e push edx */
  push32((uint32_t)(EDX));
  /* 1235e39f call 0x1235aca0 */
  push32(0x1235e3a4u); f_1235aca0();
  /* 1235e3a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e3a7 mov eax, dword ptr [0x12380768] */
  EAX = (r32((uint32_t)(0x12380768)));
  /* 1235e3ac mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1235e3af lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1235e3b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e3b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235e3b9 push edx */
  push32((uint32_t)(EDX));
  /* 1235e3ba call 0x12357370 */
  push32(0x1235e3bfu); f_12357370();
  /* 1235e3bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e3c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e3c5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e3c8 mov dword ptr [ecx + 0x1237f4dc], eax */
  w32((uint32_t)(ECX + 0x1237f4dc), (EAX));
  /* 1235e3ce mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1235e3d4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1235e3da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e3dd mov dword ptr [eax*4 + 0x12380750], edx */
  w32((uint32_t)(EAX*4 + 0x12380750), (EDX));
  /* 1235e3e4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1235e3e6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1235e3ec push ecx */
  push32((uint32_t)(ECX));
  /* 1235e3ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e3f0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e3f3 add edx, 0x123807a0 */
  { uint32_t _a=(EDX),_b=(0x123807a0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e3f9 push edx */
  push32((uint32_t)(EDX));
  /* 1235e3fa call 0x1235aca0 */
  push32(0x1235e3ffu); f_1235aca0();
  /* 1235e3ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e402 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e406 jne 0x1235e413 */
  if (!C.zf) goto L_1235e413;
  /* 1235e408 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1235e40e mov dword ptr [0x12380768], eax */
  w32((uint32_t)(0x12380768), (EAX));
L_1235e413:;
  /* 1235e413 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e417 jne 0x1235e425 */
  if (!C.zf) goto L_1235e425;
  /* 1235e419 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1235e41f mov dword ptr [0x1238076c], ecx */
  w32((uint32_t)(0x1238076c), (ECX));
L_1235e425:;
  /* 1235e425 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e428 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e42b call dword ptr [edx + 0x1237f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1237f4e0))), 0x1235e431u);
  /* 1235e431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e433 je 0x1235e46c */
  if (C.zf) goto L_1235e46c;
  /* 1235e435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e438 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e43b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235e43e mov dword ptr [eax + 0x1237f4dc], ecx */
  w32((uint32_t)(EAX + 0x1237f4dc), (ECX));
  /* 1235e444 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235e446 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235e449 push edx */
  push32((uint32_t)(EDX));
  /* 1235e44a call 0x12354e50 */
  push32(0x1235e44fu); f_12354e50();
  /* 1235e44f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e452 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e455 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235e458 mov dword ptr [eax*4 + 0x12380750], ecx */
  w32((uint32_t)(EAX*4 + 0x12380750), (ECX));
  /* 1235e45f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235e462 mov dword ptr [0x12380768], edx */
  w32((uint32_t)(0x12380768), (EDX));
  /* 1235e468 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e46a jmp 0x1235e48f */
  goto L_1235e48f;
L_1235e46c:;
  /* 1235e46c cmp dword ptr [ebp - 0xc], 0x1237f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1237f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e473 je 0x1235e483 */
  if (C.zf) goto L_1235e483;
  /* 1235e475 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235e477 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235e47a push eax */
  push32((uint32_t)(EAX));
  /* 1235e47b call 0x12354e50 */
  push32(0x1235e480u); f_12354e50();
  /* 1235e480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235e483:;
  /* 1235e483 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e486 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e489 mov eax, dword ptr [ecx + 0x1237f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1237f4dc)));
L_1235e48f:;
  /* 1235e48f mov esp, ebp */
  ESP = (EBP);
  /* 1235e491 pop ebp */
  EBP = (pop32());
  /* 1235e492 ret  */
  ESPCHK(0x1235e300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4a0 @ 0x1235e4a0 (256 bytes, 72 insns) */
void f_1235e4a0(void) {
  FTRACE(0x1235e4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235e4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235e4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1235e4a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235e4a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1235e4ad cmp dword ptr [0x1237f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1237f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e4b4 jne 0x1235e4d4 */
  if (!C.zf) goto L_1235e4d4;
  /* 1235e4b6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1235e4bb push 0x1237c160 */
  push32((uint32_t)(0x1237c160u));
  /* 1235e4c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235e4c2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1235e4c7 call 0x123543c0 */
  push32(0x1235e4ccu); f_123543c0();
  /* 1235e4cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e4cf mov dword ptr [0x1237f4dc], eax */
  w32((uint32_t)(0x1237f4dc), (EAX));
L_1235e4d4:;
  /* 1235e4d4 mov eax, dword ptr [0x1237f4dc] */
  EAX = (r32((uint32_t)(0x1237f4dc)));
  /* 1235e4d9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1235e4dc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1235e4e3 jmp 0x1235e4ee */
  goto L_1235e4ee;
L_1235e4e5:;
  /* 1235e4e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235e4e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e4eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1235e4ee:;
  /* 1235e4ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235e4f1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e4f4 mov eax, dword ptr [edx + 0x1237f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1237f4dc)));
  /* 1235e4fa push eax */
  push32((uint32_t)(EAX));
  /* 1235e4fb push 0x1237c16c */
  push32((uint32_t)(0x1237c16cu));
  /* 1235e500 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235e503 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e506 mov edx, dword ptr [ecx + 0x1237f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1237f4d8)));
  /* 1235e50c push edx */
  push32((uint32_t)(EDX));
  /* 1235e50d push 3 */
  push32((uint32_t)(0x3u));
  /* 1235e50f mov eax, dword ptr [0x1237f4dc] */
  EAX = (r32((uint32_t)(0x1237f4dc)));
  /* 1235e514 push eax */
  push32((uint32_t)(EAX));
  /* 1235e515 call 0x1235e740 */
  push32(0x1235e51au); f_1235e740();
  /* 1235e51a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e51d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e521 jge 0x1235e569 */
  if ((C.sf==C.of)) goto L_1235e569;
  /* 1235e523 push 0x1237c158 */
  push32((uint32_t)(0x1237c158u));
  /* 1235e528 mov ecx, dword ptr [0x1237f4dc] */
  ECX = (r32((uint32_t)(0x1237f4dc)));
  /* 1235e52e push ecx */
  push32((uint32_t)(ECX));
  /* 1235e52f call 0x12357380 */
  push32(0x1235e534u); f_12357380();
  /* 1235e534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e537 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235e53a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e53d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e540 mov eax, dword ptr [edx + 0x1237f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1237f4dc)));
  /* 1235e546 push eax */
  push32((uint32_t)(EAX));
  /* 1235e547 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235e54a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235e54d mov edx, dword ptr [ecx + 0x1237f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1237f4dc)));
  /* 1235e553 push edx */
  push32((uint32_t)(EDX));
  /* 1235e554 call 0x12360050 */
  push32(0x1235e559u); f_12360050();
  /* 1235e559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e55c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e55e je 0x1235e567 */
  if (C.zf) goto L_1235e567;
  /* 1235e560 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1235e567:;
  /* 1235e567 jmp 0x1235e597 */
  goto L_1235e597;
L_1235e569:;
  /* 1235e569 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e56d jne 0x1235e576 */
  if (!C.zf) goto L_1235e576;
  /* 1235e56f mov eax, dword ptr [0x1237f4dc] */
  EAX = (r32((uint32_t)(0x1237f4dc)));
  /* 1235e574 jmp 0x1235e59c */
  goto L_1235e59c;
L_1235e576:;
  /* 1235e576 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235e578 mov eax, dword ptr [0x1237f4dc] */
  EAX = (r32((uint32_t)(0x1237f4dc)));
  /* 1235e57d push eax */
  push32((uint32_t)(EAX));
  /* 1235e57e call 0x12354e50 */
  push32(0x1235e583u); f_12354e50();
  /* 1235e583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e586 mov dword ptr [0x1237f4dc], 0 */
  w32((uint32_t)(0x1237f4dc), (0x0u));
  /* 1235e590 mov eax, dword ptr [0x1237f4f4] */
  EAX = (r32((uint32_t)(0x1237f4f4)));
  /* 1235e595 jmp 0x1235e59c */
  goto L_1235e59c;
L_1235e597:;
  /* 1235e597 jmp 0x1235e4e5 */
  goto L_1235e4e5;
L_1235e59c:;
  /* 1235e59c mov esp, ebp */
  ESP = (EBP);
  /* 1235e59e pop ebp */
  EBP = (pop32());
  /* 1235e59f ret  */
  ESPCHK(0x1235e4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5a0 @ 0x1235e5a0 (388 bytes, 115 insns) */
void f_1235e5a0(void) {
  FTRACE(0x1235e5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235e5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235e5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1235e5a3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235e5a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e5ad jne 0x1235e5b6 */
  if (!C.zf) goto L_1235e5b6;
  /* 1235e5af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e5b1 jmp 0x1235e720 */
  goto L_1235e720;
L_1235e5b6:;
  /* 1235e5b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e5b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235e5bc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e5bf jne 0x1235e610 */
  if (!C.zf) goto L_1235e610;
  /* 1235e5c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e5c4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1235e5c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e5ca jne 0x1235e610 */
  if (!C.zf) goto L_1235e610;
  /* 1235e5cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e5cf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1235e5d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e5d5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1235e5d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e5dd je 0x1235e5f9 */
  if (C.zf) goto L_1235e5f9;
  /* 1235e5df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235e5e2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1235e5e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235e5ea mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1235e5f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235e5f3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1235e5f9:;
  /* 1235e5f9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e5fd je 0x1235e608 */
  if (C.zf) goto L_1235e608;
  /* 1235e5ff mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235e602 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1235e608:;
  /* 1235e608 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e60b jmp 0x1235e720 */
  goto L_1235e720;
L_1235e610:;
  /* 1235e610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e613 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e614 push 0x1237f450 */
  push32((uint32_t)(0x1237f450u));
  /* 1235e619 call 0x12360050 */
  push32(0x1235e61eu); f_12360050();
  /* 1235e61e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e623 je 0x1235e6d8 */
  if (C.zf) goto L_1235e6d8;
  /* 1235e629 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e62c push edx */
  push32((uint32_t)(EDX));
  /* 1235e62d push 0x1237f3cc */
  push32((uint32_t)(0x1237f3ccu));
  /* 1235e632 call 0x12360050 */
  push32(0x1235e637u); f_12360050();
  /* 1235e637 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e63a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e63c je 0x1235e6d8 */
  if (C.zf) goto L_1235e6d8;
  /* 1235e642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e645 push eax */
  push32((uint32_t)(EAX));
  /* 1235e646 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1235e64c push ecx */
  push32((uint32_t)(ECX));
  /* 1235e64d call 0x1235e790 */
  push32(0x1235e652u); f_1235e790();
  /* 1235e652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e657 je 0x1235e660 */
  if (C.zf) goto L_1235e660;
  /* 1235e659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e65b jmp 0x1235e720 */
  goto L_1235e720;
L_1235e660:;
  /* 1235e660 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1235e666 push edx */
  push32((uint32_t)(EDX));
  /* 1235e667 push 0x12380778 */
  push32((uint32_t)(0x12380778u));
  /* 1235e66c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1235e672 push eax */
  push32((uint32_t)(EAX));
  /* 1235e673 call 0x123601a0 */
  push32(0x1235e678u); f_123601a0();
  /* 1235e678 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e67b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e67d jne 0x1235e686 */
  if (!C.zf) goto L_1235e686;
  /* 1235e67f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e681 jmp 0x1235e720 */
  goto L_1235e720;
L_1235e686:;
  /* 1235e686 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235e688 mov cx, word ptr [0x1238077c] */
  CX = (r16((uint32_t)(0x1238077c)));
  /* 1235e68f mov dword ptr [0x12380780], ecx */
  w32((uint32_t)(0x12380780), (ECX));
  /* 1235e695 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1235e69b push edx */
  push32((uint32_t)(EDX));
  /* 1235e69c push 0x1237f450 */
  push32((uint32_t)(0x1237f450u));
  /* 1235e6a1 call 0x1235e8f0 */
  push32(0x1235e6a6u); f_1235e8f0();
  /* 1235e6a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e6a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e6ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235e6af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235e6b1 je 0x1235e6c6 */
  if (C.zf) goto L_1235e6c6;
  /* 1235e6b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e6b6 push edx */
  push32((uint32_t)(EDX));
  /* 1235e6b7 push 0x1237f3cc */
  push32((uint32_t)(0x1237f3ccu));
  /* 1235e6bc call 0x12357370 */
  push32(0x1235e6c1u); f_12357370();
  /* 1235e6c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e6c4 jmp 0x1235e6d8 */
  goto L_1235e6d8;
L_1235e6c6:;
  /* 1235e6c6 push 0x1237f450 */
  push32((uint32_t)(0x1237f450u));
  /* 1235e6cb push 0x1237f3cc */
  push32((uint32_t)(0x1237f3ccu));
  /* 1235e6d0 call 0x12357370 */
  push32(0x1235e6d5u); f_12357370();
  /* 1235e6d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235e6d8:;
  /* 1235e6d8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e6dc je 0x1235e6f1 */
  if (C.zf) goto L_1235e6f1;
  /* 1235e6de push 6 */
  push32((uint32_t)(0x6u));
  /* 1235e6e0 push 0x12380778 */
  push32((uint32_t)(0x12380778u));
  /* 1235e6e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235e6e8 push eax */
  push32((uint32_t)(EAX));
  /* 1235e6e9 call 0x1235aca0 */
  push32(0x1235e6eeu); f_1235aca0();
  /* 1235e6ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235e6f1:;
  /* 1235e6f1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e6f5 je 0x1235e70a */
  if (C.zf) goto L_1235e70a;
  /* 1235e6f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1235e6f9 push 0x12380780 */
  push32((uint32_t)(0x12380780u));
  /* 1235e6fe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235e701 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e702 call 0x1235aca0 */
  push32(0x1235e707u); f_1235aca0();
  /* 1235e707 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235e70a:;
  /* 1235e70a push 0x1237f450 */
  push32((uint32_t)(0x1237f450u));
  /* 1235e70f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e712 push edx */
  push32((uint32_t)(EDX));
  /* 1235e713 call 0x12357370 */
  push32(0x1235e718u); f_12357370();
  /* 1235e718 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e71b mov eax, 0x1237f450 */
  EAX = (0x1237f450u);
L_1235e720:;
  /* 1235e720 mov esp, ebp */
  ESP = (EBP);
  /* 1235e722 pop ebp */
  EBP = (pop32());
  /* 1235e723 ret  */
  ESPCHK(0x1235e5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e730 @ 0x1235e730 (7 bytes, 5 insns) */
void f_1235e730(void) {
  FTRACE(0x1235e730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235e730 push ebp */
  push32((uint32_t)(EBP));
  /* 1235e731 mov ebp, esp */
  EBP = (ESP);
  /* 1235e733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e735 pop ebp */
  EBP = (pop32());
  /* 1235e736 ret  */
  ESPCHK(0x1235e730u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1235e740 (79 bytes, 28 insns) */
void f_1235e740(void) {
  FTRACE(0x1235e740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235e740 push ebp */
  push32((uint32_t)(EBP));
  /* 1235e741 mov ebp, esp */
  EBP = (ESP);
  /* 1235e743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235e746 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1235e749 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235e74c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1235e753 jmp 0x1235e75e */
  goto L_1235e75e;
L_1235e755:;
  /* 1235e755 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235e758 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e75b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1235e75e:;
  /* 1235e75e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235e761 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e764 jge 0x1235e784 */
  if ((C.sf==C.of)) goto L_1235e784;
  /* 1235e766 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235e769 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e76c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235e76f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235e772 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1235e775 push edx */
  push32((uint32_t)(EDX));
  /* 1235e776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e779 push eax */
  push32((uint32_t)(EAX));
  /* 1235e77a call 0x12357380 */
  push32(0x1235e77fu); f_12357380();
  /* 1235e77f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e782 jmp 0x1235e755 */
  goto L_1235e755;
L_1235e784:;
  /* 1235e784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235e78b mov esp, ebp */
  ESP = (EBP);
  /* 1235e78d pop ebp */
  EBP = (pop32());
  /* 1235e78e ret  */
  ESPCHK(0x1235e740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e790 @ 0x1235e790 (349 bytes, 122 insns) */
void f_1235e790(void) {
  FTRACE(0x1235e790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235e790 push ebp */
  push32((uint32_t)(EBP));
  /* 1235e791 mov ebp, esp */
  EBP = (ESP);
  /* 1235e793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235e796 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1235e79b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235e79d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e7a0 push eax */
  push32((uint32_t)(EAX));
  /* 1235e7a1 call 0x12358130 */
  push32(0x1235e7a6u); f_12358130();
  /* 1235e7a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e7a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e7ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235e7af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235e7b1 jne 0x1235e7ba */
  if (!C.zf) goto L_1235e7ba;
  /* 1235e7b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e7b5 jmp 0x1235e8e9 */
  goto L_1235e8e9;
L_1235e7ba:;
  /* 1235e7ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e7bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235e7c0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e7c3 jne 0x1235e7f0 */
  if (!C.zf) goto L_1235e7f0;
  /* 1235e7c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e7c8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1235e7cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e7ce je 0x1235e7f0 */
  if (C.zf) goto L_1235e7f0;
  /* 1235e7d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e7d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e7d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e7d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e7da add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e7e0 push edx */
  push32((uint32_t)(EDX));
  /* 1235e7e1 call 0x12357370 */
  push32(0x1235e7e6u); f_12357370();
  /* 1235e7e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e7e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e7eb jmp 0x1235e8e9 */
  goto L_1235e8e9;
L_1235e7f0:;
  /* 1235e7f0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1235e7f7 jmp 0x1235e802 */
  goto L_1235e802;
L_1235e7f9:;
  /* 1235e7f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235e7fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e7ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235e802:;
  /* 1235e802 push 0x1237c170 */
  push32((uint32_t)(0x1237c170u));
  /* 1235e807 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e80a push ecx */
  push32((uint32_t)(ECX));
  /* 1235e80b call 0x123600e0 */
  push32(0x1235e810u); f_123600e0();
  /* 1235e810 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e813 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1235e816 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e81a jne 0x1235e824 */
  if (!C.zf) goto L_1235e824;
  /* 1235e81c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235e81f jmp 0x1235e8e9 */
  goto L_1235e8e9;
L_1235e824:;
  /* 1235e824 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e827 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e82a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1235e82c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1235e82f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e833 jne 0x1235e85a */
  if (!C.zf) goto L_1235e85a;
  /* 1235e835 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e839 jge 0x1235e85a */
  if ((C.sf==C.of)) goto L_1235e85a;
  /* 1235e83b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1235e83f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e842 je 0x1235e85a */
  if (C.zf) goto L_1235e85a;
  /* 1235e844 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235e847 push edx */
  push32((uint32_t)(EDX));
  /* 1235e848 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e84b push eax */
  push32((uint32_t)(EAX));
  /* 1235e84c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e84f push ecx */
  push32((uint32_t)(ECX));
  /* 1235e850 call 0x12357be0 */
  push32(0x1235e855u); f_12357be0();
  /* 1235e855 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e858 jmp 0x1235e8c0 */
  goto L_1235e8c0;
L_1235e85a:;
  /* 1235e85a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e85e jne 0x1235e888 */
  if (!C.zf) goto L_1235e888;
  /* 1235e860 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e864 jge 0x1235e888 */
  if ((C.sf==C.of)) goto L_1235e888;
  /* 1235e866 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1235e86a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e86d je 0x1235e888 */
  if (C.zf) goto L_1235e888;
  /* 1235e86f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235e872 push eax */
  push32((uint32_t)(EAX));
  /* 1235e873 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e876 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e877 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e87a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e87d push edx */
  push32((uint32_t)(EDX));
  /* 1235e87e call 0x12357be0 */
  push32(0x1235e883u); f_12357be0();
  /* 1235e883 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e886 jmp 0x1235e8c0 */
  goto L_1235e8c0;
L_1235e888:;
  /* 1235e888 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e88c jne 0x1235e8bb */
  if (!C.zf) goto L_1235e8bb;
  /* 1235e88e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1235e892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e894 je 0x1235e89f */
  if (C.zf) goto L_1235e89f;
  /* 1235e896 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1235e89a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e89d jne 0x1235e8bb */
  if (!C.zf) goto L_1235e8bb;
L_1235e89f:;
  /* 1235e89f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235e8a2 push edx */
  push32((uint32_t)(EDX));
  /* 1235e8a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e8a6 push eax */
  push32((uint32_t)(EAX));
  /* 1235e8a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e8aa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e8b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e8b1 call 0x12357be0 */
  push32(0x1235e8b6u); f_12357be0();
  /* 1235e8b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e8b9 jmp 0x1235e8c0 */
  goto L_1235e8c0;
L_1235e8bb:;
  /* 1235e8bb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235e8be jmp 0x1235e8e9 */
  goto L_1235e8e9;
L_1235e8c0:;
  /* 1235e8c0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1235e8c4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e8c7 jne 0x1235e8cb */
  if (!C.zf) goto L_1235e8cb;
  /* 1235e8c9 jmp 0x1235e8e7 */
  goto L_1235e8e7;
L_1235e8cb:;
  /* 1235e8cb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1235e8cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e8d1 jne 0x1235e8d5 */
  if (!C.zf) goto L_1235e8d5;
  /* 1235e8d3 jmp 0x1235e8e7 */
  goto L_1235e8e7;
L_1235e8d5:;
  /* 1235e8d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235e8d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e8db lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1235e8df mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1235e8e2 jmp 0x1235e7f9 */
  goto L_1235e7f9;
L_1235e8e7:;
  /* 1235e8e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235e8e9:;
  /* 1235e8e9 mov esp, ebp */
  ESP = (EBP);
  /* 1235e8eb pop ebp */
  EBP = (pop32());
  /* 1235e8ec ret  */
  ESPCHK(0x1235e790u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1235e8f0 (101 bytes, 36 insns) */
void f_1235e8f0(void) {
  FTRACE(0x1235e8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235e8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235e8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1235e8f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e8f6 push eax */
  push32((uint32_t)(EAX));
  /* 1235e8f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e8fa push ecx */
  push32((uint32_t)(ECX));
  /* 1235e8fb call 0x12357370 */
  push32(0x1235e900u); f_12357370();
  /* 1235e900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e903 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e906 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1235e90a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e90c je 0x1235e928 */
  if (C.zf) goto L_1235e928;
  /* 1235e90e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e911 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e914 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e915 push 0x1237c178 */
  push32((uint32_t)(0x1237c178u));
  /* 1235e91a push 2 */
  push32((uint32_t)(0x2u));
  /* 1235e91c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e91f push edx */
  push32((uint32_t)(EDX));
  /* 1235e920 call 0x1235e740 */
  push32(0x1235e925u); f_1235e740();
  /* 1235e925 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235e928:;
  /* 1235e928 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e92b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1235e932 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235e934 je 0x1235e953 */
  if (C.zf) goto L_1235e953;
  /* 1235e936 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235e939 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e93f push edx */
  push32((uint32_t)(EDX));
  /* 1235e940 push 0x1237c174 */
  push32((uint32_t)(0x1237c174u));
  /* 1235e945 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235e947 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e94a push eax */
  push32((uint32_t)(EAX));
  /* 1235e94b call 0x1235e740 */
  push32(0x1235e950u); f_1235e740();
  /* 1235e950 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235e953:;
  /* 1235e953 pop ebp */
  EBP = (pop32());
  /* 1235e954 ret  */
  ESPCHK(0x1235e8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e960 @ 0x1235e960 (130 bytes, 50 insns) */
void f_1235e960(void) {
  FTRACE(0x1235e960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235e960 push ebp */
  push32((uint32_t)(EBP));
  /* 1235e961 mov ebp, esp */
  EBP = (ESP);
  /* 1235e963 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e964 push ebx */
  push32((uint32_t)(EBX));
  /* 1235e965 push esi */
  push32((uint32_t)(ESI));
  /* 1235e966 push edi */
  push32((uint32_t)(EDI));
  /* 1235e967 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1235e96e:;
  /* 1235e96e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e972 jne 0x1235e992 */
  if (!C.zf) goto L_1235e992;
  /* 1235e974 push 0x1237c188 */
  push32((uint32_t)(0x1237c188u));
  /* 1235e979 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235e97b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1235e97d push 0x1237c17c */
  push32((uint32_t)(0x1237c17cu));
  /* 1235e982 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235e984 call 0x12353480 */
  push32(0x1235e989u); f_12353480();
  /* 1235e989 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e98c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235e98f jne 0x1235e992 */
  if (!C.zf) goto L_1235e992;
  /* 1235e991 int3  */
  x86_unimpl("int3 @ 0x1235e991");
L_1235e992:;
  /* 1235e992 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235e994 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235e996 jne 0x1235e96e */
  if (!C.zf) goto L_1235e96e;
  /* 1235e998 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e99b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235e99e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1235e9a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235e9a3 je 0x1235e9b1 */
  if (C.zf) goto L_1235e9b1;
  /* 1235e9a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e9a8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1235e9af jmp 0x1235e9d8 */
  goto L_1235e9d8;
L_1235e9b1:;
  /* 1235e9b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e9b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1235e9b5 call 0x1235d1d0 */
  push32(0x1235e9bau); f_1235d1d0();
  /* 1235e9ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e9bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e9c0 push edx */
  push32((uint32_t)(EDX));
  /* 1235e9c1 call 0x1235e9f0 */
  push32(0x1235e9c6u); f_1235e9f0();
  /* 1235e9c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235e9c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235e9cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235e9cf push eax */
  push32((uint32_t)(EAX));
  /* 1235e9d0 call 0x1235d240 */
  push32(0x1235e9d5u); f_1235d240();
  /* 1235e9d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235e9d8:;
  /* 1235e9d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235e9db pop edi */
  EDI = (pop32());
  /* 1235e9dc pop esi */
  ESI = (pop32());
  /* 1235e9dd pop ebx */
  EBX = (pop32());
  /* 1235e9de mov esp, ebp */
  ESP = (EBP);
  /* 1235e9e0 pop ebp */
  EBP = (pop32());
  /* 1235e9e1 ret  */
  ESPCHK(0x1235e960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9f0 @ 0x1235e9f0 (190 bytes, 67 insns) */
void f_1235e9f0(void) {
  FTRACE(0x1235e9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235e9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235e9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1235e9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235e9f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1235e9f7 push esi */
  push32((uint32_t)(ESI));
  /* 1235e9f8 push edi */
  push32((uint32_t)(EDI));
  /* 1235e9f9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1235ea00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ea03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1235ea06:;
  /* 1235ea06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ea0a jne 0x1235ea2a */
  if (!C.zf) goto L_1235ea2a;
  /* 1235ea0c push 0x1237c028 */
  push32((uint32_t)(0x1237c028u));
  /* 1235ea11 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235ea13 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1235ea15 push 0x1237c17c */
  push32((uint32_t)(0x1237c17cu));
  /* 1235ea1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ea1c call 0x12353480 */
  push32(0x1235ea21u); f_12353480();
  /* 1235ea21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ea24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ea27 jne 0x1235ea2a */
  if (!C.zf) goto L_1235ea2a;
  /* 1235ea29 int3  */
  x86_unimpl("int3 @ 0x1235ea29");
L_1235ea2a:;
  /* 1235ea2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ea2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235ea2e jne 0x1235ea06 */
  if (!C.zf) goto L_1235ea06;
  /* 1235ea30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235ea33 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1235ea36 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1235ea3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235ea3d je 0x1235ea9a */
  if (C.zf) goto L_1235ea9a;
  /* 1235ea3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235ea42 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ea43 call 0x1235dcf0 */
  push32(0x1235ea48u); f_1235dcf0();
  /* 1235ea48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ea4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235ea4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235ea51 push edx */
  push32((uint32_t)(EDX));
  /* 1235ea52 call 0x12361070 */
  push32(0x1235ea57u); f_12361070();
  /* 1235ea57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ea5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235ea5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1235ea60 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ea61 call 0x12360f40 */
  push32(0x1235ea66u); f_12360f40();
  /* 1235ea66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ea69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235ea6b jge 0x1235ea76 */
  if ((C.sf==C.of)) goto L_1235ea76;
  /* 1235ea6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1235ea74 jmp 0x1235ea9a */
  goto L_1235ea9a;
L_1235ea76:;
  /* 1235ea76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235ea79 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ea7d je 0x1235ea9a */
  if (C.zf) goto L_1235ea9a;
  /* 1235ea7f push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ea81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235ea84 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1235ea87 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ea88 call 0x12354e50 */
  push32(0x1235ea8du); f_12354e50();
  /* 1235ea8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ea90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235ea93 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1235ea9a:;
  /* 1235ea9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235ea9d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1235eaa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235eaa7 pop edi */
  EDI = (pop32());
  /* 1235eaa8 pop esi */
  ESI = (pop32());
  /* 1235eaa9 pop ebx */
  EBX = (pop32());
  /* 1235eaaa mov esp, ebp */
  ESP = (EBP);
  /* 1235eaac pop ebp */
  EBP = (pop32());
  /* 1235eaad ret  */
  ESPCHK(0x1235e9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eab0 @ 0x1235eab0 (210 bytes, 63 insns) */
void f_1235eab0(void) {
  FTRACE(0x1235eab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235eab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235eab1 mov ebp, esp */
  EBP = (ESP);
  /* 1235eab3 push ecx */
  push32((uint32_t)(ECX));
  /* 1235eab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eab7 cmp eax, dword ptr [0x1238207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1238207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235eabd jae 0x1235eae1 */
  if (!C.cf) goto L_1235eae1;
  /* 1235eabf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eac2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1235eac5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eac8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1235eacb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235eace mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235ead5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1235eada and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1235eadd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235eadf jne 0x1235eaf4 */
  if (!C.zf) goto L_1235eaf4;
L_1235eae1:;
  /* 1235eae1 call 0x1235c290 */
  push32(0x1235eae6u); f_1235c290();
  /* 1235eae6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1235eaec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235eaef jmp 0x1235eb7e */
  goto L_1235eb7e;
L_1235eaf4:;
  /* 1235eaf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eaf7 push edx */
  push32((uint32_t)(EDX));
  /* 1235eaf8 call 0x1235dab0 */
  push32(0x1235eafdu); f_1235dab0();
  /* 1235eafd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eb00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eb03 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1235eb06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eb09 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1235eb0c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235eb0f mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235eb16 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1235eb1b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1235eb1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235eb20 je 0x1235eb5d */
  if (C.zf) goto L_1235eb5d;
  /* 1235eb22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eb25 push ecx */
  push32((uint32_t)(ECX));
  /* 1235eb26 call 0x1235d930 */
  push32(0x1235eb2bu); f_1235d930();
  /* 1235eb2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eb2e push eax */
  push32((uint32_t)(EAX));
  /* 1235eb2f call dword ptr [0x1238328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238328c))), 0x1235eb35u);
  /* 1235eb35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235eb37 jne 0x1235eb44 */
  if (!C.zf) goto L_1235eb44;
  /* 1235eb39 call dword ptr [0x123832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832fc))), 0x1235eb3fu);
  /* 1235eb3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235eb42 jmp 0x1235eb4b */
  goto L_1235eb4b;
L_1235eb44:;
  /* 1235eb44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1235eb4b:;
  /* 1235eb4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235eb4f jne 0x1235eb53 */
  if (!C.zf) goto L_1235eb53;
  /* 1235eb51 jmp 0x1235eb6f */
  goto L_1235eb6f;
L_1235eb53:;
  /* 1235eb53 call 0x1235c2a0 */
  push32(0x1235eb58u); f_1235c2a0();
  /* 1235eb58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235eb5b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1235eb5d:;
  /* 1235eb5d call 0x1235c290 */
  push32(0x1235eb62u); f_1235c290();
  /* 1235eb62 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1235eb68 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1235eb6f:;
  /* 1235eb6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eb72 push eax */
  push32((uint32_t)(EAX));
  /* 1235eb73 call 0x1235db40 */
  push32(0x1235eb78u); f_1235db40();
  /* 1235eb78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eb7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1235eb7e:;
  /* 1235eb7e mov esp, ebp */
  ESP = (EBP);
  /* 1235eb80 pop ebp */
  EBP = (pop32());
  /* 1235eb81 ret  */
  ESPCHK(0x1235eab0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1235eb90 (219 bytes, 64 insns) */
void f_1235eb90(void) {
  FTRACE(0x1235eb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235eb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1235eb91 mov ebp, esp */
  EBP = (ESP);
  /* 1235eb93 push ecx */
  push32((uint32_t)(ECX));
  /* 1235eb94 cmp dword ptr [0x12380764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235eb9b je 0x1235ec31 */
  if (C.zf) goto L_1235ec31;
  /* 1235eba1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1235eba3 push 0x1237c198 */
  push32((uint32_t)(0x1237c198u));
  /* 1235eba8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ebaa push 0xac */
  push32((uint32_t)(0xacu));
  /* 1235ebaf push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ebb1 call 0x123547d0 */
  push32(0x1235ebb6u); f_123547d0();
  /* 1235ebb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ebb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235ebbc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ebc0 jne 0x1235ebcc */
  if (!C.zf) goto L_1235ebcc;
  /* 1235ebc2 mov eax, 1 */
  EAX = (0x1u);
  /* 1235ebc7 jmp 0x1235ec67 */
  goto L_1235ec67;
L_1235ebcc:;
  /* 1235ebcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ebcf push eax */
  push32((uint32_t)(EAX));
  /* 1235ebd0 call 0x1235ec70 */
  push32(0x1235ebd5u); f_1235ec70();
  /* 1235ebd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ebd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235ebda je 0x1235ebfd */
  if (C.zf) goto L_1235ebfd;
  /* 1235ebdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ebdf push ecx */
  push32((uint32_t)(ECX));
  /* 1235ebe0 call 0x1235f200 */
  push32(0x1235ebe5u); f_1235f200();
  /* 1235ebe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ebe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ebea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ebed push edx */
  push32((uint32_t)(EDX));
  /* 1235ebee call 0x12354e50 */
  push32(0x1235ebf3u); f_12354e50();
  /* 1235ebf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ebf6 mov eax, 1 */
  EAX = (0x1u);
  /* 1235ebfb jmp 0x1235ec67 */
  goto L_1235ec67;
L_1235ebfd:;
  /* 1235ebfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ec00 mov dword ptr [0x1237fc98], eax */
  w32((uint32_t)(0x1237fc98), (EAX));
  /* 1235ec05 mov ecx, dword ptr [0x12380784] */
  ECX = (r32((uint32_t)(0x12380784)));
  /* 1235ec0b push ecx */
  push32((uint32_t)(ECX));
  /* 1235ec0c call 0x1235f200 */
  push32(0x1235ec11u); f_1235f200();
  /* 1235ec11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ec14 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ec16 mov edx, dword ptr [0x12380784] */
  EDX = (r32((uint32_t)(0x12380784)));
  /* 1235ec1c push edx */
  push32((uint32_t)(EDX));
  /* 1235ec1d call 0x12354e50 */
  push32(0x1235ec22u); f_12354e50();
  /* 1235ec22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ec25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ec28 mov dword ptr [0x12380784], eax */
  w32((uint32_t)(0x12380784), (EAX));
  /* 1235ec2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235ec2f jmp 0x1235ec67 */
  goto L_1235ec67;
L_1235ec31:;
  /* 1235ec31 mov dword ptr [0x1237fc98], 0x1237fca0 */
  w32((uint32_t)(0x1237fc98), (0x1237fca0u));
  /* 1235ec3b mov ecx, dword ptr [0x12380784] */
  ECX = (r32((uint32_t)(0x12380784)));
  /* 1235ec41 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ec42 call 0x1235f200 */
  push32(0x1235ec47u); f_1235f200();
  /* 1235ec47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ec4a push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ec4c mov edx, dword ptr [0x12380784] */
  EDX = (r32((uint32_t)(0x12380784)));
  /* 1235ec52 push edx */
  push32((uint32_t)(EDX));
  /* 1235ec53 call 0x12354e50 */
  push32(0x1235ec58u); f_12354e50();
  /* 1235ec58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ec5b mov dword ptr [0x12380784], 0 */
  w32((uint32_t)(0x12380784), (0x0u));
  /* 1235ec65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235ec67:;
  /* 1235ec67 mov esp, ebp */
  ESP = (EBP);
  /* 1235ec69 pop ebp */
  EBP = (pop32());
  /* 1235ec6a ret  */
  ESPCHK(0x1235eb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec70 @ 0x1235ec70 (1423 bytes, 533 insns) */
void f_1235ec70(void) {
  FTRACE(0x1235ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 1235ec71 mov ebp, esp */
  EBP = (ESP);
  /* 1235ec73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235ec76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1235ec7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235ec7f mov ax, word ptr [0x123807be] */
  AX = (r16((uint32_t)(0x123807be)));
  /* 1235ec85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235ec88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ec8a mov cx, word ptr [0x123807c0] */
  CX = (r16((uint32_t)(0x123807c0)));
  /* 1235ec91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235ec94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ec98 jne 0x1235eca2 */
  if (!C.zf) goto L_1235eca2;
  /* 1235ec9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235ec9d jmp 0x1235f1fb */
  goto L_1235f1fb;
L_1235eca2:;
  /* 1235eca2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eca5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eca8 push edx */
  push32((uint32_t)(EDX));
  /* 1235eca9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1235ecab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ecae push eax */
  push32((uint32_t)(EAX));
  /* 1235ecaf push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ecb1 call 0x12362580 */
  push32(0x1235ecb6u); f_12362580();
  /* 1235ecb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ecb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ecbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ecbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ecc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ecc4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ecc7 push edx */
  push32((uint32_t)(EDX));
  /* 1235ecc8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1235ecca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235eccd push eax */
  push32((uint32_t)(EAX));
  /* 1235ecce push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ecd0 call 0x12362580 */
  push32(0x1235ecd5u); f_12362580();
  /* 1235ecd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ecd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ecdb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ecdd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ece0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ece3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ece6 push edx */
  push32((uint32_t)(EDX));
  /* 1235ece7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1235ece9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ecec push eax */
  push32((uint32_t)(EAX));
  /* 1235eced push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ecef call 0x12362580 */
  push32(0x1235ecf4u); f_12362580();
  /* 1235ecf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ecf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ecfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ecfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ecff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ed02 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ed05 push edx */
  push32((uint32_t)(EDX));
  /* 1235ed06 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1235ed08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ed0b push eax */
  push32((uint32_t)(EAX));
  /* 1235ed0c push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ed0e call 0x12362580 */
  push32(0x1235ed13u); f_12362580();
  /* 1235ed13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ed16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ed19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ed1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ed1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ed21 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ed24 push edx */
  push32((uint32_t)(EDX));
  /* 1235ed25 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1235ed27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ed2a push eax */
  push32((uint32_t)(EAX));
  /* 1235ed2b push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ed2d call 0x12362580 */
  push32(0x1235ed32u); f_12362580();
  /* 1235ed32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ed35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ed38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ed3a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ed3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ed40 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ed43 push edx */
  push32((uint32_t)(EDX));
  /* 1235ed44 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1235ed46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ed49 push eax */
  push32((uint32_t)(EAX));
  /* 1235ed4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ed4c call 0x12362580 */
  push32(0x1235ed51u); f_12362580();
  /* 1235ed51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ed54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ed57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ed59 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ed5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ed5f push edx */
  push32((uint32_t)(EDX));
  /* 1235ed60 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1235ed62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ed65 push eax */
  push32((uint32_t)(EAX));
  /* 1235ed66 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ed68 call 0x12362580 */
  push32(0x1235ed6du); f_12362580();
  /* 1235ed6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ed70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ed73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ed75 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ed78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ed7b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ed7e push edx */
  push32((uint32_t)(EDX));
  /* 1235ed7f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1235ed81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ed84 push eax */
  push32((uint32_t)(EAX));
  /* 1235ed85 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ed87 call 0x12362580 */
  push32(0x1235ed8cu); f_12362580();
  /* 1235ed8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ed8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ed92 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ed94 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ed97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ed9a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ed9d push edx */
  push32((uint32_t)(EDX));
  /* 1235ed9e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1235eda0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235eda3 push eax */
  push32((uint32_t)(EAX));
  /* 1235eda4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235eda6 call 0x12362580 */
  push32(0x1235edabu); f_12362580();
  /* 1235edab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235edae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235edb1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235edb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235edb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235edb9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235edbc push edx */
  push32((uint32_t)(EDX));
  /* 1235edbd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1235edbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235edc2 push eax */
  push32((uint32_t)(EAX));
  /* 1235edc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235edc5 call 0x12362580 */
  push32(0x1235edcau); f_12362580();
  /* 1235edca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235edcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235edd0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235edd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235edd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235edd8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eddb push edx */
  push32((uint32_t)(EDX));
  /* 1235eddc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1235edde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ede1 push eax */
  push32((uint32_t)(EAX));
  /* 1235ede2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ede4 call 0x12362580 */
  push32(0x1235ede9u); f_12362580();
  /* 1235ede9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235edec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235edef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235edf1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235edf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235edf7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235edfa push edx */
  push32((uint32_t)(EDX));
  /* 1235edfb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1235edfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ee00 push eax */
  push32((uint32_t)(EAX));
  /* 1235ee01 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ee03 call 0x12362580 */
  push32(0x1235ee08u); f_12362580();
  /* 1235ee08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ee0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ee0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ee10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ee13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ee16 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ee19 push edx */
  push32((uint32_t)(EDX));
  /* 1235ee1a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1235ee1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ee1f push eax */
  push32((uint32_t)(EAX));
  /* 1235ee20 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ee22 call 0x12362580 */
  push32(0x1235ee27u); f_12362580();
  /* 1235ee27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ee2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ee2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ee2f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ee32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ee35 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ee38 push edx */
  push32((uint32_t)(EDX));
  /* 1235ee39 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1235ee3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ee3e push eax */
  push32((uint32_t)(EAX));
  /* 1235ee3f push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ee41 call 0x12362580 */
  push32(0x1235ee46u); f_12362580();
  /* 1235ee46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ee49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ee4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ee4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ee51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ee54 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ee57 push edx */
  push32((uint32_t)(EDX));
  /* 1235ee58 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1235ee5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ee5d push eax */
  push32((uint32_t)(EAX));
  /* 1235ee5e push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ee60 call 0x12362580 */
  push32(0x1235ee65u); f_12362580();
  /* 1235ee65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ee68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ee6b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ee6d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ee70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ee73 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ee76 push edx */
  push32((uint32_t)(EDX));
  /* 1235ee77 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1235ee79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ee7c push eax */
  push32((uint32_t)(EAX));
  /* 1235ee7d push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ee7f call 0x12362580 */
  push32(0x1235ee84u); f_12362580();
  /* 1235ee84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ee87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ee8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ee8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ee8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ee92 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ee95 push edx */
  push32((uint32_t)(EDX));
  /* 1235ee96 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1235ee98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ee9b push eax */
  push32((uint32_t)(EAX));
  /* 1235ee9c push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ee9e call 0x12362580 */
  push32(0x1235eea3u); f_12362580();
  /* 1235eea3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eea6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235eea9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235eeab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235eeae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eeb1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eeb4 push edx */
  push32((uint32_t)(EDX));
  /* 1235eeb5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1235eeb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235eeba push eax */
  push32((uint32_t)(EAX));
  /* 1235eebb push 1 */
  push32((uint32_t)(0x1u));
  /* 1235eebd call 0x12362580 */
  push32(0x1235eec2u); f_12362580();
  /* 1235eec2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eec5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235eec8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235eeca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235eecd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eed0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eed3 push edx */
  push32((uint32_t)(EDX));
  /* 1235eed4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1235eed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235eed9 push eax */
  push32((uint32_t)(EAX));
  /* 1235eeda push 1 */
  push32((uint32_t)(0x1u));
  /* 1235eedc call 0x12362580 */
  push32(0x1235eee1u); f_12362580();
  /* 1235eee1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eee4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235eee7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235eee9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235eeec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235eeef add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235eef2 push edx */
  push32((uint32_t)(EDX));
  /* 1235eef3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1235eef5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235eef8 push eax */
  push32((uint32_t)(EAX));
  /* 1235eef9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235eefb call 0x12362580 */
  push32(0x1235ef00u); f_12362580();
  /* 1235ef00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ef06 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ef08 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ef0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ef0e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef11 push edx */
  push32((uint32_t)(EDX));
  /* 1235ef12 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1235ef14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ef17 push eax */
  push32((uint32_t)(EAX));
  /* 1235ef18 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ef1a call 0x12362580 */
  push32(0x1235ef1fu); f_12362580();
  /* 1235ef1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef22 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ef25 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ef27 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ef2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ef2d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef30 push edx */
  push32((uint32_t)(EDX));
  /* 1235ef31 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1235ef33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ef36 push eax */
  push32((uint32_t)(EAX));
  /* 1235ef37 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ef39 call 0x12362580 */
  push32(0x1235ef3eu); f_12362580();
  /* 1235ef3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ef44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ef46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ef49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ef4c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef4f push edx */
  push32((uint32_t)(EDX));
  /* 1235ef50 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1235ef52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ef55 push eax */
  push32((uint32_t)(EAX));
  /* 1235ef56 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ef58 call 0x12362580 */
  push32(0x1235ef5du); f_12362580();
  /* 1235ef5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ef63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ef65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ef68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ef6b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef6e push edx */
  push32((uint32_t)(EDX));
  /* 1235ef6f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1235ef71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ef74 push eax */
  push32((uint32_t)(EAX));
  /* 1235ef75 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ef77 call 0x12362580 */
  push32(0x1235ef7cu); f_12362580();
  /* 1235ef7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235ef82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235ef84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235ef87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235ef8a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef8d push edx */
  push32((uint32_t)(EDX));
  /* 1235ef8e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1235ef90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235ef93 push eax */
  push32((uint32_t)(EAX));
  /* 1235ef94 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235ef96 call 0x12362580 */
  push32(0x1235ef9bu); f_12362580();
  /* 1235ef9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ef9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235efa1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235efa3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235efa6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235efa9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235efac push edx */
  push32((uint32_t)(EDX));
  /* 1235efad push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1235efaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235efb2 push eax */
  push32((uint32_t)(EAX));
  /* 1235efb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235efb5 call 0x12362580 */
  push32(0x1235efbau); f_12362580();
  /* 1235efba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235efbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235efc0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235efc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235efc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235efc8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235efcb push edx */
  push32((uint32_t)(EDX));
  /* 1235efcc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1235efce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235efd1 push eax */
  push32((uint32_t)(EAX));
  /* 1235efd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235efd4 call 0x12362580 */
  push32(0x1235efd9u); f_12362580();
  /* 1235efd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235efdc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235efdf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235efe1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235efe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235efe7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235efea push edx */
  push32((uint32_t)(EDX));
  /* 1235efeb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1235efed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235eff0 push eax */
  push32((uint32_t)(EAX));
  /* 1235eff1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235eff3 call 0x12362580 */
  push32(0x1235eff8u); f_12362580();
  /* 1235eff8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235effb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235effe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f000 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f003 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f006 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f009 push edx */
  push32((uint32_t)(EDX));
  /* 1235f00a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1235f00c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f00f push eax */
  push32((uint32_t)(EAX));
  /* 1235f010 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f012 call 0x12362580 */
  push32(0x1235f017u); f_12362580();
  /* 1235f017 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f01a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f01d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f01f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f022 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f025 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f028 push edx */
  push32((uint32_t)(EDX));
  /* 1235f029 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1235f02b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f02e push eax */
  push32((uint32_t)(EAX));
  /* 1235f02f push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f031 call 0x12362580 */
  push32(0x1235f036u); f_12362580();
  /* 1235f036 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f039 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f03c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f03e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f041 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f044 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f047 push edx */
  push32((uint32_t)(EDX));
  /* 1235f048 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1235f04a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f04d push eax */
  push32((uint32_t)(EAX));
  /* 1235f04e push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f050 call 0x12362580 */
  push32(0x1235f055u); f_12362580();
  /* 1235f055 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f058 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f05b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f05d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f060 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f063 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f066 push edx */
  push32((uint32_t)(EDX));
  /* 1235f067 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1235f069 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f06c push eax */
  push32((uint32_t)(EAX));
  /* 1235f06d push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f06f call 0x12362580 */
  push32(0x1235f074u); f_12362580();
  /* 1235f074 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f077 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f07a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f07c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f07f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f082 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f088 push edx */
  push32((uint32_t)(EDX));
  /* 1235f089 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1235f08b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f08e push eax */
  push32((uint32_t)(EAX));
  /* 1235f08f push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f091 call 0x12362580 */
  push32(0x1235f096u); f_12362580();
  /* 1235f096 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f099 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f09c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f09e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f0a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f0a4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f0aa push edx */
  push32((uint32_t)(EDX));
  /* 1235f0ab push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1235f0ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f0b0 push eax */
  push32((uint32_t)(EAX));
  /* 1235f0b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f0b3 call 0x12362580 */
  push32(0x1235f0b8u); f_12362580();
  /* 1235f0b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f0bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f0be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f0c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f0c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f0c6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f0cc push edx */
  push32((uint32_t)(EDX));
  /* 1235f0cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1235f0cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f0d2 push eax */
  push32((uint32_t)(EAX));
  /* 1235f0d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f0d5 call 0x12362580 */
  push32(0x1235f0dau); f_12362580();
  /* 1235f0da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f0dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f0e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f0e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f0e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f0e8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f0ee push edx */
  push32((uint32_t)(EDX));
  /* 1235f0ef push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1235f0f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f0f4 push eax */
  push32((uint32_t)(EAX));
  /* 1235f0f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f0f7 call 0x12362580 */
  push32(0x1235f0fcu); f_12362580();
  /* 1235f0fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f0ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f102 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f104 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f107 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f10a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f110 push edx */
  push32((uint32_t)(EDX));
  /* 1235f111 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1235f113 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f116 push eax */
  push32((uint32_t)(EAX));
  /* 1235f117 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f119 call 0x12362580 */
  push32(0x1235f11eu); f_12362580();
  /* 1235f11e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f121 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f124 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f126 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f129 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f12c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f132 push edx */
  push32((uint32_t)(EDX));
  /* 1235f133 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1235f135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f138 push eax */
  push32((uint32_t)(EAX));
  /* 1235f139 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f13b call 0x12362580 */
  push32(0x1235f140u); f_12362580();
  /* 1235f140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f143 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f146 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f148 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f14b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f14e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f154 push edx */
  push32((uint32_t)(EDX));
  /* 1235f155 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1235f157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f15a push eax */
  push32((uint32_t)(EAX));
  /* 1235f15b push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f15d call 0x12362580 */
  push32(0x1235f162u); f_12362580();
  /* 1235f162 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f168 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f16a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f16d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f170 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f176 push edx */
  push32((uint32_t)(EDX));
  /* 1235f177 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1235f179 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f17c push eax */
  push32((uint32_t)(EAX));
  /* 1235f17d push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f17f call 0x12362580 */
  push32(0x1235f184u); f_12362580();
  /* 1235f184 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f187 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f18a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f18c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f18f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f192 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f198 push edx */
  push32((uint32_t)(EDX));
  /* 1235f199 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1235f19b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235f19e push eax */
  push32((uint32_t)(EAX));
  /* 1235f19f push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f1a1 call 0x12362580 */
  push32(0x1235f1a6u); f_12362580();
  /* 1235f1a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f1a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f1ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f1ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f1b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f1b4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f1ba push edx */
  push32((uint32_t)(EDX));
  /* 1235f1bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1235f1bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235f1c0 push eax */
  push32((uint32_t)(EAX));
  /* 1235f1c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f1c3 call 0x12362580 */
  push32(0x1235f1c8u); f_12362580();
  /* 1235f1c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f1cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f1ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f1d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f1d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f1d6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f1dc push edx */
  push32((uint32_t)(EDX));
  /* 1235f1dd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1235f1e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235f1e5 push eax */
  push32((uint32_t)(EAX));
  /* 1235f1e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f1e8 call 0x12362580 */
  push32(0x1235f1edu); f_12362580();
  /* 1235f1ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f1f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235f1f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f1f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235f1f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1235f1fb:;
  /* 1235f1fb mov esp, ebp */
  ESP = (EBP);
  /* 1235f1fd pop ebp */
  EBP = (pop32());
  /* 1235f1fe ret  */
  ESPCHK(0x1235ec70u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1235f200 (779 bytes, 265 insns) */
void f_1235f200(void) {
  FTRACE(0x1235f200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235f200 push ebp */
  push32((uint32_t)(EBP));
  /* 1235f201 mov ebp, esp */
  EBP = (ESP);
  /* 1235f203 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f207 jne 0x1235f20e */
  if (!C.zf) goto L_1235f20e;
  /* 1235f209 jmp 0x1235f509 */
  goto L_1235f509;
L_1235f20e:;
  /* 1235f20e push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f213 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1235f216 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f217 call 0x12354e50 */
  push32(0x1235f21cu); f_12354e50();
  /* 1235f21c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f21f push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f221 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f224 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1235f227 push eax */
  push32((uint32_t)(EAX));
  /* 1235f228 call 0x12354e50 */
  push32(0x1235f22du); f_12354e50();
  /* 1235f22d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f230 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f232 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f235 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235f238 push edx */
  push32((uint32_t)(EDX));
  /* 1235f239 call 0x12354e50 */
  push32(0x1235f23eu); f_12354e50();
  /* 1235f23e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f241 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f246 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1235f249 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f24a call 0x12354e50 */
  push32(0x1235f24fu); f_12354e50();
  /* 1235f24f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f252 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f254 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f257 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1235f25a push eax */
  push32((uint32_t)(EAX));
  /* 1235f25b call 0x12354e50 */
  push32(0x1235f260u); f_12354e50();
  /* 1235f260 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f263 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f265 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f268 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1235f26b push edx */
  push32((uint32_t)(EDX));
  /* 1235f26c call 0x12354e50 */
  push32(0x1235f271u); f_12354e50();
  /* 1235f271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f274 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f279 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235f27b push ecx */
  push32((uint32_t)(ECX));
  /* 1235f27c call 0x12354e50 */
  push32(0x1235f281u); f_12354e50();
  /* 1235f281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f284 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f286 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f289 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1235f28c push eax */
  push32((uint32_t)(EAX));
  /* 1235f28d call 0x12354e50 */
  push32(0x1235f292u); f_12354e50();
  /* 1235f292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f295 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f297 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f29a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1235f29d push edx */
  push32((uint32_t)(EDX));
  /* 1235f29e call 0x12354e50 */
  push32(0x1235f2a3u); f_12354e50();
  /* 1235f2a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f2a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f2a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f2ab mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1235f2ae push ecx */
  push32((uint32_t)(ECX));
  /* 1235f2af call 0x12354e50 */
  push32(0x1235f2b4u); f_12354e50();
  /* 1235f2b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f2b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f2b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f2bc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1235f2bf push eax */
  push32((uint32_t)(EAX));
  /* 1235f2c0 call 0x12354e50 */
  push32(0x1235f2c5u); f_12354e50();
  /* 1235f2c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f2c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f2ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f2cd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1235f2d0 push edx */
  push32((uint32_t)(EDX));
  /* 1235f2d1 call 0x12354e50 */
  push32(0x1235f2d6u); f_12354e50();
  /* 1235f2d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f2d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f2db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f2de mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1235f2e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f2e2 call 0x12354e50 */
  push32(0x1235f2e7u); f_12354e50();
  /* 1235f2e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f2ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f2ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f2ef mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1235f2f2 push eax */
  push32((uint32_t)(EAX));
  /* 1235f2f3 call 0x12354e50 */
  push32(0x1235f2f8u); f_12354e50();
  /* 1235f2f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f2fb push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f2fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f300 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1235f303 push edx */
  push32((uint32_t)(EDX));
  /* 1235f304 call 0x12354e50 */
  push32(0x1235f309u); f_12354e50();
  /* 1235f309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f30c push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f30e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f311 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1235f314 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f315 call 0x12354e50 */
  push32(0x1235f31au); f_12354e50();
  /* 1235f31a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f31d push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f31f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f322 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1235f325 push eax */
  push32((uint32_t)(EAX));
  /* 1235f326 call 0x12354e50 */
  push32(0x1235f32bu); f_12354e50();
  /* 1235f32b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f32e push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f333 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1235f336 push edx */
  push32((uint32_t)(EDX));
  /* 1235f337 call 0x12354e50 */
  push32(0x1235f33cu); f_12354e50();
  /* 1235f33c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f33f push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f344 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1235f347 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f348 call 0x12354e50 */
  push32(0x1235f34du); f_12354e50();
  /* 1235f34d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f350 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f352 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f355 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1235f358 push eax */
  push32((uint32_t)(EAX));
  /* 1235f359 call 0x12354e50 */
  push32(0x1235f35eu); f_12354e50();
  /* 1235f35e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f361 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f363 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f366 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1235f369 push edx */
  push32((uint32_t)(EDX));
  /* 1235f36a call 0x12354e50 */
  push32(0x1235f36fu); f_12354e50();
  /* 1235f36f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f372 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f377 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1235f37a push ecx */
  push32((uint32_t)(ECX));
  /* 1235f37b call 0x12354e50 */
  push32(0x1235f380u); f_12354e50();
  /* 1235f380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f383 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f385 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f388 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1235f38b push eax */
  push32((uint32_t)(EAX));
  /* 1235f38c call 0x12354e50 */
  push32(0x1235f391u); f_12354e50();
  /* 1235f391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f394 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f396 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f399 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1235f39c push edx */
  push32((uint32_t)(EDX));
  /* 1235f39d call 0x12354e50 */
  push32(0x1235f3a2u); f_12354e50();
  /* 1235f3a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f3a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f3a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f3aa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1235f3ad push ecx */
  push32((uint32_t)(ECX));
  /* 1235f3ae call 0x12354e50 */
  push32(0x1235f3b3u); f_12354e50();
  /* 1235f3b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f3b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f3b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f3bb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1235f3be push eax */
  push32((uint32_t)(EAX));
  /* 1235f3bf call 0x12354e50 */
  push32(0x1235f3c4u); f_12354e50();
  /* 1235f3c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f3c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f3c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f3cc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1235f3cf push edx */
  push32((uint32_t)(EDX));
  /* 1235f3d0 call 0x12354e50 */
  push32(0x1235f3d5u); f_12354e50();
  /* 1235f3d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f3d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f3da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f3dd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1235f3e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f3e1 call 0x12354e50 */
  push32(0x1235f3e6u); f_12354e50();
  /* 1235f3e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f3e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f3eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f3ee mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1235f3f1 push eax */
  push32((uint32_t)(EAX));
  /* 1235f3f2 call 0x12354e50 */
  push32(0x1235f3f7u); f_12354e50();
  /* 1235f3f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f3fa push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f3fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f3ff mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1235f402 push edx */
  push32((uint32_t)(EDX));
  /* 1235f403 call 0x12354e50 */
  push32(0x1235f408u); f_12354e50();
  /* 1235f408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f40b push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f40d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f410 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1235f413 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f414 call 0x12354e50 */
  push32(0x1235f419u); f_12354e50();
  /* 1235f419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f41c push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f41e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f421 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1235f424 push eax */
  push32((uint32_t)(EAX));
  /* 1235f425 call 0x12354e50 */
  push32(0x1235f42au); f_12354e50();
  /* 1235f42a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f42d push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f42f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f432 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1235f438 push edx */
  push32((uint32_t)(EDX));
  /* 1235f439 call 0x12354e50 */
  push32(0x1235f43eu); f_12354e50();
  /* 1235f43e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f441 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f446 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1235f44c push ecx */
  push32((uint32_t)(ECX));
  /* 1235f44d call 0x12354e50 */
  push32(0x1235f452u); f_12354e50();
  /* 1235f452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f455 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f457 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f45a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1235f460 push eax */
  push32((uint32_t)(EAX));
  /* 1235f461 call 0x12354e50 */
  push32(0x1235f466u); f_12354e50();
  /* 1235f466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f469 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f46b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f46e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1235f474 push edx */
  push32((uint32_t)(EDX));
  /* 1235f475 call 0x12354e50 */
  push32(0x1235f47au); f_12354e50();
  /* 1235f47a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f47d push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f47f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f482 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1235f488 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f489 call 0x12354e50 */
  push32(0x1235f48eu); f_12354e50();
  /* 1235f48e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f491 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f493 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f496 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1235f49c push eax */
  push32((uint32_t)(EAX));
  /* 1235f49d call 0x12354e50 */
  push32(0x1235f4a2u); f_12354e50();
  /* 1235f4a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f4a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f4a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f4aa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1235f4b0 push edx */
  push32((uint32_t)(EDX));
  /* 1235f4b1 call 0x12354e50 */
  push32(0x1235f4b6u); f_12354e50();
  /* 1235f4b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f4b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f4bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f4be mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1235f4c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f4c5 call 0x12354e50 */
  push32(0x1235f4cau); f_12354e50();
  /* 1235f4ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f4cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f4cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f4d2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1235f4d8 push eax */
  push32((uint32_t)(EAX));
  /* 1235f4d9 call 0x12354e50 */
  push32(0x1235f4deu); f_12354e50();
  /* 1235f4de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f4e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f4e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f4e6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1235f4ec push edx */
  push32((uint32_t)(EDX));
  /* 1235f4ed call 0x12354e50 */
  push32(0x1235f4f2u); f_12354e50();
  /* 1235f4f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f4f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f4f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f4fa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1235f500 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f501 call 0x12354e50 */
  push32(0x1235f506u); f_12354e50();
  /* 1235f506 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235f509:;
  /* 1235f509 pop ebp */
  EBP = (pop32());
  /* 1235f50a ret  */
  ESPCHK(0x1235f200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f510 @ 0x1235f510 (678 bytes, 180 insns) */
void f_1235f510(void) {
  FTRACE(0x1235f510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235f510 push ebp */
  push32((uint32_t)(EBP));
  /* 1235f511 mov ebp, esp */
  EBP = (ESP);
  /* 1235f513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235f516 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1235f51d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235f51f mov ax, word ptr [0x123807ba] */
  AX = (r16((uint32_t)(0x123807ba)));
  /* 1235f525 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235f528 cmp dword ptr [0x12380760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f52f je 0x1235f68a */
  if (C.zf) goto L_1235f68a;
  /* 1235f535 push 0x12380788 */
  push32((uint32_t)(0x12380788u));
  /* 1235f53a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1235f53c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f53f push ecx */
  push32((uint32_t)(ECX));
  /* 1235f540 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f542 call 0x12362580 */
  push32(0x1235f547u); f_12362580();
  /* 1235f547 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f54a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235f54d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1235f54f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1235f552 push 0x1238078c */
  push32((uint32_t)(0x1238078cu));
  /* 1235f557 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1235f559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f55c push eax */
  push32((uint32_t)(EAX));
  /* 1235f55d push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f55f call 0x12362580 */
  push32(0x1235f564u); f_12362580();
  /* 1235f564 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f567 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235f56a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f56c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235f56f push 0x12380790 */
  push32((uint32_t)(0x12380790u));
  /* 1235f574 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1235f576 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f579 push edx */
  push32((uint32_t)(EDX));
  /* 1235f57a push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f57c call 0x12362580 */
  push32(0x1235f581u); f_12362580();
  /* 1235f581 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f584 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235f587 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f589 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235f58c mov edx, dword ptr [0x12380790] */
  EDX = (r32((uint32_t)(0x12380790)));
  /* 1235f592 push edx */
  push32((uint32_t)(EDX));
  /* 1235f593 call 0x1235f7c0 */
  push32(0x1235f598u); f_1235f7c0();
  /* 1235f598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f59b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f59f je 0x1235f5f9 */
  if (C.zf) goto L_1235f5f9;
  /* 1235f5a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f5a3 mov eax, dword ptr [0x12380788] */
  EAX = (r32((uint32_t)(0x12380788)));
  /* 1235f5a8 push eax */
  push32((uint32_t)(EAX));
  /* 1235f5a9 call 0x12354e50 */
  push32(0x1235f5aeu); f_12354e50();
  /* 1235f5ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f5b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f5b3 mov ecx, dword ptr [0x1238078c] */
  ECX = (r32((uint32_t)(0x1238078c)));
  /* 1235f5b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f5ba call 0x12354e50 */
  push32(0x1235f5bfu); f_12354e50();
  /* 1235f5bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f5c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f5c4 mov edx, dword ptr [0x12380790] */
  EDX = (r32((uint32_t)(0x12380790)));
  /* 1235f5ca push edx */
  push32((uint32_t)(EDX));
  /* 1235f5cb call 0x12354e50 */
  push32(0x1235f5d0u); f_12354e50();
  /* 1235f5d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f5d3 mov dword ptr [0x12380788], 0 */
  w32((uint32_t)(0x12380788), (0x0u));
  /* 1235f5dd mov dword ptr [0x1238078c], 0 */
  w32((uint32_t)(0x1238078c), (0x0u));
  /* 1235f5e7 mov dword ptr [0x12380790], 0 */
  w32((uint32_t)(0x12380790), (0x0u));
  /* 1235f5f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235f5f4 jmp 0x1235f7b2 */
  goto L_1235f7b2;
L_1235f5f9:;
  /* 1235f5f9 mov eax, dword ptr [0x1237fd88] */
  EAX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f5fe cmp dword ptr [eax], 0x1237fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1237fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f604 je 0x1235f640 */
  if (C.zf) goto L_1235f640;
  /* 1235f606 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f608 mov ecx, dword ptr [0x1237fd88] */
  ECX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f60e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1235f610 push edx */
  push32((uint32_t)(EDX));
  /* 1235f611 call 0x12354e50 */
  push32(0x1235f616u); f_12354e50();
  /* 1235f616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f619 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f61b mov eax, dword ptr [0x1237fd88] */
  EAX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f620 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1235f623 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f624 call 0x12354e50 */
  push32(0x1235f629u); f_12354e50();
  /* 1235f629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f62c push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f62e mov edx, dword ptr [0x1237fd88] */
  EDX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f634 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1235f637 push eax */
  push32((uint32_t)(EAX));
  /* 1235f638 call 0x12354e50 */
  push32(0x1235f63du); f_12354e50();
  /* 1235f63d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235f640:;
  /* 1235f640 mov ecx, dword ptr [0x1237fd88] */
  ECX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f646 mov edx, dword ptr [0x12380788] */
  EDX = (r32((uint32_t)(0x12380788)));
  /* 1235f64c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1235f64e mov eax, dword ptr [0x1237fd88] */
  EAX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f653 mov ecx, dword ptr [0x1238078c] */
  ECX = (r32((uint32_t)(0x1238078c)));
  /* 1235f659 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1235f65c mov edx, dword ptr [0x1237fd88] */
  EDX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f662 mov eax, dword ptr [0x12380790] */
  EAX = (r32((uint32_t)(0x12380790)));
  /* 1235f667 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1235f66a mov ecx, dword ptr [0x1237fd88] */
  ECX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f670 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1235f672 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1235f674 mov byte ptr [0x1237eea8], al */
  w8((uint32_t)(0x1237eea8), (AL));
  /* 1235f679 mov dword ptr [0x1237eeac], 1 */
  w32((uint32_t)(0x1237eeac), (0x1u));
  /* 1235f683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235f685 jmp 0x1235f7b2 */
  goto L_1235f7b2;
L_1235f68a:;
  /* 1235f68a push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f68c mov ecx, dword ptr [0x12380788] */
  ECX = (r32((uint32_t)(0x12380788)));
  /* 1235f692 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f693 call 0x12354e50 */
  push32(0x1235f698u); f_12354e50();
  /* 1235f698 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f69b push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f69d mov edx, dword ptr [0x1238078c] */
  EDX = (r32((uint32_t)(0x1238078c)));
  /* 1235f6a3 push edx */
  push32((uint32_t)(EDX));
  /* 1235f6a4 call 0x12354e50 */
  push32(0x1235f6a9u); f_12354e50();
  /* 1235f6a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f6ac push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f6ae mov eax, dword ptr [0x12380790] */
  EAX = (r32((uint32_t)(0x12380790)));
  /* 1235f6b3 push eax */
  push32((uint32_t)(EAX));
  /* 1235f6b4 call 0x12354e50 */
  push32(0x1235f6b9u); f_12354e50();
  /* 1235f6b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f6bc mov dword ptr [0x12380788], 0 */
  w32((uint32_t)(0x12380788), (0x0u));
  /* 1235f6c6 mov dword ptr [0x1238078c], 0 */
  w32((uint32_t)(0x1238078c), (0x0u));
  /* 1235f6d0 mov dword ptr [0x12380790], 0 */
  w32((uint32_t)(0x12380790), (0x0u));
  /* 1235f6da push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1235f6df push 0x1237c1a4 */
  push32((uint32_t)(0x1237c1a4u));
  /* 1235f6e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f6e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f6e8 call 0x123543c0 */
  push32(0x1235f6edu); f_123543c0();
  /* 1235f6ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f6f0 mov ecx, dword ptr [0x1237fd88] */
  ECX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f6f6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1235f6f8 mov edx, dword ptr [0x1237fd88] */
  EDX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f6fe cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f701 jne 0x1235f70b */
  if (!C.zf) goto L_1235f70b;
  /* 1235f703 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235f706 jmp 0x1235f7b2 */
  goto L_1235f7b2;
L_1235f70b:;
  /* 1235f70b push 0x1237c174 */
  push32((uint32_t)(0x1237c174u));
  /* 1235f710 mov eax, dword ptr [0x1237fd88] */
  EAX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f715 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235f717 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f718 call 0x12357370 */
  push32(0x1235f71du); f_12357370();
  /* 1235f71d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f720 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1235f725 push 0x1237c1a4 */
  push32((uint32_t)(0x1237c1a4u));
  /* 1235f72a push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f72c push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f72e call 0x123543c0 */
  push32(0x1235f733u); f_123543c0();
  /* 1235f733 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f736 mov edx, dword ptr [0x1237fd88] */
  EDX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f73c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1235f73f mov eax, dword ptr [0x1237fd88] */
  EAX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f744 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f748 jne 0x1235f74f */
  if (!C.zf) goto L_1235f74f;
  /* 1235f74a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235f74d jmp 0x1235f7b2 */
  goto L_1235f7b2;
L_1235f74f:;
  /* 1235f74f mov ecx, dword ptr [0x1237fd88] */
  ECX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f755 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1235f758 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1235f75b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1235f760 push 0x1237c1a4 */
  push32((uint32_t)(0x1237c1a4u));
  /* 1235f765 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f767 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f769 call 0x123543c0 */
  push32(0x1235f76eu); f_123543c0();
  /* 1235f76e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f771 mov ecx, dword ptr [0x1237fd88] */
  ECX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f777 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1235f77a mov edx, dword ptr [0x1237fd88] */
  EDX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f780 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f784 jne 0x1235f78b */
  if (!C.zf) goto L_1235f78b;
  /* 1235f786 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235f789 jmp 0x1235f7b2 */
  goto L_1235f7b2;
L_1235f78b:;
  /* 1235f78b mov eax, dword ptr [0x1237fd88] */
  EAX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f790 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1235f793 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1235f796 mov edx, dword ptr [0x1237fd88] */
  EDX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f79c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1235f79e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1235f7a0 mov byte ptr [0x1237eea8], cl */
  w8((uint32_t)(0x1237eea8), (CL));
  /* 1235f7a6 mov dword ptr [0x1237eeac], 1 */
  w32((uint32_t)(0x1237eeac), (0x1u));
  /* 1235f7b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235f7b2:;
  /* 1235f7b2 mov esp, ebp */
  ESP = (EBP);
  /* 1235f7b4 pop ebp */
  EBP = (pop32());
  /* 1235f7b5 ret  */
  ESPCHK(0x1235f510u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1235f7c0 (125 bytes, 49 insns) */
void f_1235f7c0(void) {
  FTRACE(0x1235f7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235f7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235f7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1235f7c3 push ecx */
  push32((uint32_t)(ECX));
L_1235f7c4:;
  /* 1235f7c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f7c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235f7ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235f7cc je 0x1235f839 */
  if (C.zf) goto L_1235f839;
  /* 1235f7ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f7d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1235f7d4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f7d7 jl 0x1235f7fd */
  if ((C.sf!=C.of)) goto L_1235f7fd;
  /* 1235f7d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f7dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235f7df cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f7e2 jg 0x1235f7fd */
  if ((!C.zf&&C.sf==C.of)) goto L_1235f7fd;
  /* 1235f7e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f7e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235f7ea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235f7ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f7f0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1235f7f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f7f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f7f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1235f7fb jmp 0x1235f837 */
  goto L_1235f837;
L_1235f7fd:;
  /* 1235f7fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f800 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235f803 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f806 jne 0x1235f82e */
  if (!C.zf) goto L_1235f82e;
  /* 1235f808 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f80b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235f80e:;
  /* 1235f80e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f811 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f814 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1235f817 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1235f819 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f81c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f81f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235f822 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f825 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1235f828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235f82a jne 0x1235f80e */
  if (!C.zf) goto L_1235f80e;
  /* 1235f82c jmp 0x1235f837 */
  goto L_1235f837;
L_1235f82e:;
  /* 1235f82e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f831 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f834 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1235f837:;
  /* 1235f837 jmp 0x1235f7c4 */
  goto L_1235f7c4;
L_1235f839:;
  /* 1235f839 mov esp, ebp */
  ESP = (EBP);
  /* 1235f83b pop ebp */
  EBP = (pop32());
  /* 1235f83c ret  */
  ESPCHK(0x1235f7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f840 @ 0x1235f840 (304 bytes, 85 insns) */
void f_1235f840(void) {
  FTRACE(0x1235f840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235f840 push ebp */
  push32((uint32_t)(EBP));
  /* 1235f841 mov ebp, esp */
  EBP = (ESP);
  /* 1235f843 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f844 cmp dword ptr [0x1238075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1238075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f84b je 0x1235f90c */
  if (C.zf) goto L_1235f90c;
  /* 1235f851 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1235f853 push 0x1237c1b0 */
  push32((uint32_t)(0x1237c1b0u));
  /* 1235f858 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f85a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1235f85c push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f85e call 0x123547d0 */
  push32(0x1235f863u); f_123547d0();
  /* 1235f863 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f866 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235f869 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f86d jne 0x1235f879 */
  if (!C.zf) goto L_1235f879;
  /* 1235f86f mov eax, 1 */
  EAX = (0x1u);
  /* 1235f874 jmp 0x1235f96c */
  goto L_1235f96c;
L_1235f879:;
  /* 1235f879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f87c push eax */
  push32((uint32_t)(EAX));
  /* 1235f87d call 0x1235f970 */
  push32(0x1235f882u); f_1235f970();
  /* 1235f882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235f887 je 0x1235f8ad */
  if (C.zf) goto L_1235f8ad;
  /* 1235f889 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f88c push ecx */
  push32((uint32_t)(ECX));
  /* 1235f88d call 0x1235fc00 */
  push32(0x1235f892u); f_1235fc00();
  /* 1235f892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f895 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f897 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f89a push edx */
  push32((uint32_t)(EDX));
  /* 1235f89b call 0x12354e50 */
  push32(0x1235f8a0u); f_12354e50();
  /* 1235f8a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f8a3 mov eax, 1 */
  EAX = (0x1u);
  /* 1235f8a8 jmp 0x1235f96c */
  goto L_1235f96c;
L_1235f8ad:;
  /* 1235f8ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f8b0 mov ecx, dword ptr [0x1237fd88] */
  ECX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f8b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1235f8b8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1235f8ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f8bd mov ecx, dword ptr [0x1237fd88] */
  ECX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f8c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1235f8c6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1235f8c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f8cc mov ecx, dword ptr [0x1237fd88] */
  ECX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f8d2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1235f8d5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1235f8d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f8db mov dword ptr [0x1237fd88], eax */
  w32((uint32_t)(0x1237fd88), (EAX));
  /* 1235f8e0 mov ecx, dword ptr [0x12380794] */
  ECX = (r32((uint32_t)(0x12380794)));
  /* 1235f8e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f8e7 call 0x1235fc00 */
  push32(0x1235f8ecu); f_1235fc00();
  /* 1235f8ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f8ef push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f8f1 mov edx, dword ptr [0x12380794] */
  EDX = (r32((uint32_t)(0x12380794)));
  /* 1235f8f7 push edx */
  push32((uint32_t)(EDX));
  /* 1235f8f8 call 0x12354e50 */
  push32(0x1235f8fdu); f_12354e50();
  /* 1235f8fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f903 mov dword ptr [0x12380794], eax */
  w32((uint32_t)(0x12380794), (EAX));
  /* 1235f908 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235f90a jmp 0x1235f96c */
  goto L_1235f96c;
L_1235f90c:;
  /* 1235f90c mov ecx, dword ptr [0x1237fd88] */
  ECX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f912 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1235f914 mov dword ptr [0x1237fd58], edx */
  w32((uint32_t)(0x1237fd58), (EDX));
  /* 1235f91a mov eax, dword ptr [0x1237fd88] */
  EAX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f91f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1235f922 mov dword ptr [0x1237fd5c], ecx */
  w32((uint32_t)(0x1237fd5c), (ECX));
  /* 1235f928 mov edx, dword ptr [0x1237fd88] */
  EDX = (r32((uint32_t)(0x1237fd88)));
  /* 1235f92e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1235f931 mov dword ptr [0x1237fd60], eax */
  w32((uint32_t)(0x1237fd60), (EAX));
  /* 1235f936 mov dword ptr [0x1237fd88], 0x1237fd58 */
  w32((uint32_t)(0x1237fd88), (0x1237fd58u));
  /* 1235f940 mov ecx, dword ptr [0x12380794] */
  ECX = (r32((uint32_t)(0x12380794)));
  /* 1235f946 push ecx */
  push32((uint32_t)(ECX));
  /* 1235f947 call 0x1235fc00 */
  push32(0x1235f94cu); f_1235fc00();
  /* 1235f94c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f94f push 2 */
  push32((uint32_t)(0x2u));
  /* 1235f951 mov edx, dword ptr [0x12380794] */
  EDX = (r32((uint32_t)(0x12380794)));
  /* 1235f957 push edx */
  push32((uint32_t)(EDX));
  /* 1235f958 call 0x12354e50 */
  push32(0x1235f95du); f_12354e50();
  /* 1235f95d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f960 mov dword ptr [0x12380794], 0 */
  w32((uint32_t)(0x12380794), (0x0u));
  /* 1235f96a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235f96c:;
  /* 1235f96c mov esp, ebp */
  ESP = (EBP);
  /* 1235f96e pop ebp */
  EBP = (pop32());
  /* 1235f96f ret  */
  ESPCHK(0x1235f840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f970 @ 0x1235f970 (525 bytes, 200 insns) */
void f_1235f970(void) {
  FTRACE(0x1235f970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235f970 push ebp */
  push32((uint32_t)(EBP));
  /* 1235f971 mov ebp, esp */
  EBP = (ESP);
  /* 1235f973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235f976 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1235f97d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235f97f mov ax, word ptr [0x123807b4] */
  AX = (r16((uint32_t)(0x123807b4)));
  /* 1235f985 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235f988 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235f98c jne 0x1235f996 */
  if (!C.zf) goto L_1235f996;
  /* 1235f98e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235f991 jmp 0x1235fb79 */
  goto L_1235fb79;
L_1235f996:;
  /* 1235f996 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f999 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f99c push ecx */
  push32((uint32_t)(ECX));
  /* 1235f99d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1235f99f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f9a2 push edx */
  push32((uint32_t)(EDX));
  /* 1235f9a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f9a5 call 0x12362580 */
  push32(0x1235f9aau); f_12362580();
  /* 1235f9aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f9ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235f9b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f9b2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235f9b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f9b8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f9bb push edx */
  push32((uint32_t)(EDX));
  /* 1235f9bc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1235f9be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f9c1 push eax */
  push32((uint32_t)(EAX));
  /* 1235f9c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f9c4 call 0x12362580 */
  push32(0x1235f9c9u); f_12362580();
  /* 1235f9c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f9cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235f9cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f9d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235f9d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f9d7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f9da push edx */
  push32((uint32_t)(EDX));
  /* 1235f9db push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1235f9dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f9e0 push eax */
  push32((uint32_t)(EAX));
  /* 1235f9e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235f9e3 call 0x12362580 */
  push32(0x1235f9e8u); f_12362580();
  /* 1235f9e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f9eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235f9ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235f9f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235f9f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235f9f6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235f9f9 push edx */
  push32((uint32_t)(EDX));
  /* 1235f9fa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1235f9fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235f9ff push eax */
  push32((uint32_t)(EAX));
  /* 1235fa00 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235fa02 call 0x12362580 */
  push32(0x1235fa07u); f_12362580();
  /* 1235fa07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fa0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fa0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fa0f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fa12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fa15 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fa18 push edx */
  push32((uint32_t)(EDX));
  /* 1235fa19 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1235fa1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fa1e push eax */
  push32((uint32_t)(EAX));
  /* 1235fa1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1235fa21 call 0x12362580 */
  push32(0x1235fa26u); f_12362580();
  /* 1235fa26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fa29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fa2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fa2e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fa31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fa34 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1235fa37 push eax */
  push32((uint32_t)(EAX));
  /* 1235fa38 call 0x1235fb80 */
  push32(0x1235fa3du); f_1235fb80();
  /* 1235fa3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fa40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fa43 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fa46 push ecx */
  push32((uint32_t)(ECX));
  /* 1235fa47 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1235fa49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fa4c push edx */
  push32((uint32_t)(EDX));
  /* 1235fa4d push 1 */
  push32((uint32_t)(0x1u));
  /* 1235fa4f call 0x12362580 */
  push32(0x1235fa54u); f_12362580();
  /* 1235fa54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fa57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fa5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fa5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fa5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fa62 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fa65 push edx */
  push32((uint32_t)(EDX));
  /* 1235fa66 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1235fa68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fa6b push eax */
  push32((uint32_t)(EAX));
  /* 1235fa6c push 1 */
  push32((uint32_t)(0x1u));
  /* 1235fa6e call 0x12362580 */
  push32(0x1235fa73u); f_12362580();
  /* 1235fa73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fa76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fa79 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fa7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fa7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fa81 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fa84 push edx */
  push32((uint32_t)(EDX));
  /* 1235fa85 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1235fa87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fa8a push eax */
  push32((uint32_t)(EAX));
  /* 1235fa8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fa8d call 0x12362580 */
  push32(0x1235fa92u); f_12362580();
  /* 1235fa92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fa95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fa98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fa9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fa9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235faa0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235faa3 push edx */
  push32((uint32_t)(EDX));
  /* 1235faa4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1235faa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235faa9 push eax */
  push32((uint32_t)(EAX));
  /* 1235faaa push 0 */
  push32((uint32_t)(0x0u));
  /* 1235faac call 0x12362580 */
  push32(0x1235fab1u); f_12362580();
  /* 1235fab1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fab4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fab7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fab9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fabc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fabf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fac2 push edx */
  push32((uint32_t)(EDX));
  /* 1235fac3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1235fac5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fac8 push eax */
  push32((uint32_t)(EAX));
  /* 1235fac9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235facb call 0x12362580 */
  push32(0x1235fad0u); f_12362580();
  /* 1235fad0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fad3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fad6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fad8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fadb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fade add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fae1 push edx */
  push32((uint32_t)(EDX));
  /* 1235fae2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1235fae4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fae7 push eax */
  push32((uint32_t)(EAX));
  /* 1235fae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235faea call 0x12362580 */
  push32(0x1235faefu); f_12362580();
  /* 1235faef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235faf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235faf5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235faf7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fafa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fafd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fb00 push edx */
  push32((uint32_t)(EDX));
  /* 1235fb01 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1235fb03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fb06 push eax */
  push32((uint32_t)(EAX));
  /* 1235fb07 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fb09 call 0x12362580 */
  push32(0x1235fb0eu); f_12362580();
  /* 1235fb0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fb11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fb14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fb16 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fb19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fb1c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fb1f push edx */
  push32((uint32_t)(EDX));
  /* 1235fb20 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1235fb22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fb25 push eax */
  push32((uint32_t)(EAX));
  /* 1235fb26 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fb28 call 0x12362580 */
  push32(0x1235fb2du); f_12362580();
  /* 1235fb2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fb30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fb33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fb35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fb38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fb3b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fb3e push edx */
  push32((uint32_t)(EDX));
  /* 1235fb3f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1235fb41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fb44 push eax */
  push32((uint32_t)(EAX));
  /* 1235fb45 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fb47 call 0x12362580 */
  push32(0x1235fb4cu); f_12362580();
  /* 1235fb4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fb4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fb52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fb54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fb57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fb5a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fb5d push edx */
  push32((uint32_t)(EDX));
  /* 1235fb5e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1235fb60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fb63 push eax */
  push32((uint32_t)(EAX));
  /* 1235fb64 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fb66 call 0x12362580 */
  push32(0x1235fb6bu); f_12362580();
  /* 1235fb6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fb6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235fb71 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fb73 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1235fb76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1235fb79:;
  /* 1235fb79 mov esp, ebp */
  ESP = (EBP);
  /* 1235fb7b pop ebp */
  EBP = (pop32());
  /* 1235fb7c ret  */
  ESPCHK(0x1235f970u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1235fb80 (125 bytes, 49 insns) */
void f_1235fb80(void) {
  FTRACE(0x1235fb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235fb80 push ebp */
  push32((uint32_t)(EBP));
  /* 1235fb81 mov ebp, esp */
  EBP = (ESP);
  /* 1235fb83 push ecx */
  push32((uint32_t)(ECX));
L_1235fb84:;
  /* 1235fb84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fb87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235fb8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235fb8c je 0x1235fbf9 */
  if (C.zf) goto L_1235fbf9;
  /* 1235fb8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fb91 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1235fb94 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fb97 jl 0x1235fbbd */
  if ((C.sf!=C.of)) goto L_1235fbbd;
  /* 1235fb99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fb9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235fb9f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fba2 jg 0x1235fbbd */
  if ((!C.zf&&C.sf==C.of)) goto L_1235fbbd;
  /* 1235fba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fba7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235fbaa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235fbad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fbb0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1235fbb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fbb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fbb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1235fbbb jmp 0x1235fbf7 */
  goto L_1235fbf7;
L_1235fbbd:;
  /* 1235fbbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fbc0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235fbc3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fbc6 jne 0x1235fbee */
  if (!C.zf) goto L_1235fbee;
  /* 1235fbc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fbcb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235fbce:;
  /* 1235fbce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fbd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fbd4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1235fbd7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1235fbd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fbdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fbdf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1235fbe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235fbe5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1235fbe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235fbea jne 0x1235fbce */
  if (!C.zf) goto L_1235fbce;
  /* 1235fbec jmp 0x1235fbf7 */
  goto L_1235fbf7;
L_1235fbee:;
  /* 1235fbee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fbf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fbf4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1235fbf7:;
  /* 1235fbf7 jmp 0x1235fb84 */
  goto L_1235fb84;
L_1235fbf9:;
  /* 1235fbf9 mov esp, ebp */
  ESP = (EBP);
  /* 1235fbfb pop ebp */
  EBP = (pop32());
  /* 1235fbfc ret  */
  ESPCHK(0x1235fb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc00 @ 0x1235fc00 (147 bytes, 52 insns) */
void f_1235fc00(void) {
  FTRACE(0x1235fc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235fc00 push ebp */
  push32((uint32_t)(EBP));
  /* 1235fc01 mov ebp, esp */
  EBP = (ESP);
  /* 1235fc03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fc07 jne 0x1235fc0e */
  if (!C.zf) goto L_1235fc0e;
  /* 1235fc09 jmp 0x1235fc91 */
  goto L_1235fc91;
L_1235fc0e:;
  /* 1235fc0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fc11 cmp dword ptr [eax + 0xc], 0x123807f0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x123807f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fc18 je 0x1235fc91 */
  if (C.zf) goto L_1235fc91;
  /* 1235fc1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fc1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fc1f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235fc22 push edx */
  push32((uint32_t)(EDX));
  /* 1235fc23 call 0x12354e50 */
  push32(0x1235fc28u); f_12354e50();
  /* 1235fc28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fc2b push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fc2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fc30 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1235fc33 push ecx */
  push32((uint32_t)(ECX));
  /* 1235fc34 call 0x12354e50 */
  push32(0x1235fc39u); f_12354e50();
  /* 1235fc39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fc3c push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fc3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fc41 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1235fc44 push eax */
  push32((uint32_t)(EAX));
  /* 1235fc45 call 0x12354e50 */
  push32(0x1235fc4au); f_12354e50();
  /* 1235fc4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fc4d push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fc4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fc52 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1235fc55 push edx */
  push32((uint32_t)(EDX));
  /* 1235fc56 call 0x12354e50 */
  push32(0x1235fc5bu); f_12354e50();
  /* 1235fc5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fc5e push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fc60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fc63 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1235fc66 push ecx */
  push32((uint32_t)(ECX));
  /* 1235fc67 call 0x12354e50 */
  push32(0x1235fc6cu); f_12354e50();
  /* 1235fc6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fc6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fc71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fc74 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1235fc77 push eax */
  push32((uint32_t)(EAX));
  /* 1235fc78 call 0x12354e50 */
  push32(0x1235fc7du); f_12354e50();
  /* 1235fc7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fc80 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fc82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235fc85 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1235fc88 push edx */
  push32((uint32_t)(EDX));
  /* 1235fc89 call 0x12354e50 */
  push32(0x1235fc8eu); f_12354e50();
  /* 1235fc8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235fc91:;
  /* 1235fc91 pop ebp */
  EBP = (pop32());
  /* 1235fc92 ret  */
  ESPCHK(0x1235fc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fca0 @ 0x1235fca0 (928 bytes, 284 insns) */
void f_1235fca0(void) {
  FTRACE(0x1235fca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235fca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1235fca1 mov ebp, esp */
  EBP = (ESP);
  /* 1235fca3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235fca6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1235fcad mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1235fcb4 cmp dword ptr [0x12380758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fcbb je 0x1235fff1 */
  if (C.zf) goto L_1235fff1;
  /* 1235fcc1 cmp dword ptr [0x12380768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fcc8 jne 0x1235fcf0 */
  if (!C.zf) goto L_1235fcf0;
  /* 1235fcca push 0x12380768 */
  push32((uint32_t)(0x12380768u));
  /* 1235fccf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1235fcd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235fcd6 mov ax, word ptr [0x123807ac] */
  AX = (r16((uint32_t)(0x123807ac)));
  /* 1235fcdc push eax */
  push32((uint32_t)(EAX));
  /* 1235fcdd push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fcdf call 0x12362580 */
  push32(0x1235fce4u); f_12362580();
  /* 1235fce4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235fce9 je 0x1235fcf0 */
  if (C.zf) goto L_1235fcf0;
  /* 1235fceb jmp 0x1235ffb2 */
  goto L_1235ffb2;
L_1235fcf0:;
  /* 1235fcf0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1235fcf2 push 0x1237c1bc */
  push32((uint32_t)(0x1237c1bcu));
  /* 1235fcf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fcf9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1235fcfe call 0x123543c0 */
  push32(0x1235fd03u); f_123543c0();
  /* 1235fd03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fd06 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1235fd09 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1235fd0b push 0x1237c1bc */
  push32((uint32_t)(0x1237c1bcu));
  /* 1235fd10 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fd12 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1235fd17 call 0x123543c0 */
  push32(0x1235fd1cu); f_123543c0();
  /* 1235fd1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fd1f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1235fd22 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1235fd24 push 0x1237c1bc */
  push32((uint32_t)(0x1237c1bcu));
  /* 1235fd29 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fd2b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1235fd30 call 0x123543c0 */
  push32(0x1235fd35u); f_123543c0();
  /* 1235fd35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fd38 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1235fd3b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1235fd3d push 0x1237c1bc */
  push32((uint32_t)(0x1237c1bcu));
  /* 1235fd42 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235fd44 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1235fd49 call 0x123543c0 */
  push32(0x1235fd4eu); f_123543c0();
  /* 1235fd4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fd51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1235fd54 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fd58 je 0x1235fd6c */
  if (C.zf) goto L_1235fd6c;
  /* 1235fd5a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fd5e je 0x1235fd6c */
  if (C.zf) goto L_1235fd6c;
  /* 1235fd60 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fd64 je 0x1235fd6c */
  if (C.zf) goto L_1235fd6c;
  /* 1235fd66 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fd6a jne 0x1235fd71 */
  if (!C.zf) goto L_1235fd71;
L_1235fd6c:;
  /* 1235fd6c jmp 0x1235ffb2 */
  goto L_1235ffb2;
L_1235fd71:;
  /* 1235fd71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235fd74 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1235fd77 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1235fd7e jmp 0x1235fd89 */
  goto L_1235fd89;
L_1235fd80:;
  /* 1235fd80 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235fd83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fd86 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1235fd89:;
  /* 1235fd89 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fd90 jge 0x1235fda5 */
  if ((C.sf==C.of)) goto L_1235fda5;
  /* 1235fd92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235fd95 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1235fd98 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1235fd9a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235fd9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fda0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1235fda3 jmp 0x1235fd80 */
  goto L_1235fd80;
L_1235fda5:;
  /* 1235fda5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1235fda8 push eax */
  push32((uint32_t)(EAX));
  /* 1235fda9 mov ecx, dword ptr [0x12380768] */
  ECX = (r32((uint32_t)(0x12380768)));
  /* 1235fdaf push ecx */
  push32((uint32_t)(ECX));
  /* 1235fdb0 call dword ptr [0x12383364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383364))), 0x1235fdb6u);
  /* 1235fdb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235fdb8 jne 0x1235fdbf */
  if (!C.zf) goto L_1235fdbf;
  /* 1235fdba jmp 0x1235ffb2 */
  goto L_1235ffb2;
L_1235fdbf:;
  /* 1235fdbf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fdc3 jbe 0x1235fdca */
  if ((C.cf||C.zf)) goto L_1235fdca;
  /* 1235fdc5 jmp 0x1235ffb2 */
  goto L_1235ffb2;
L_1235fdca:;
  /* 1235fdca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235fdcd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1235fdd3 mov dword ptr [0x1237eea4], edx */
  w32((uint32_t)(0x1237eea4), (EDX));
  /* 1235fdd9 cmp dword ptr [0x1237eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1237eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fde0 jle 0x1235fe39 */
  if ((C.zf||C.sf!=C.of)) goto L_1235fe39;
  /* 1235fde2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1235fde5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1235fde8 jmp 0x1235fdf3 */
  goto L_1235fdf3;
L_1235fdea:;
  /* 1235fdea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235fded add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fdf0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1235fdf3:;
  /* 1235fdf3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235fdf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235fdf8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1235fdfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235fdfc je 0x1235fe39 */
  if (C.zf) goto L_1235fe39;
  /* 1235fdfe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235fe01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235fe03 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1235fe06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235fe08 je 0x1235fe39 */
  if (C.zf) goto L_1235fe39;
  /* 1235fe0a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235fe0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fe0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1235fe11 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1235fe14 jmp 0x1235fe1f */
  goto L_1235fe1f;
L_1235fe16:;
  /* 1235fe16 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235fe19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fe1c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1235fe1f:;
  /* 1235fe1f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235fe22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fe24 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1235fe27 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fe2a jg 0x1235fe37 */
  if ((!C.zf&&C.sf==C.of)) goto L_1235fe37;
  /* 1235fe2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235fe2f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fe32 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1235fe35 jmp 0x1235fe16 */
  goto L_1235fe16;
L_1235fe37:;
  /* 1235fe37 jmp 0x1235fdea */
  goto L_1235fdea;
L_1235fe39:;
  /* 1235fe39 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fe3b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fe3d push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fe3f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235fe42 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fe45 push eax */
  push32((uint32_t)(EAX));
  /* 1235fe46 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1235fe4b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235fe4e push ecx */
  push32((uint32_t)(ECX));
  /* 1235fe4f push 1 */
  push32((uint32_t)(0x1u));
  /* 1235fe51 call 0x1235c5f0 */
  push32(0x1235fe56u); f_1235c5f0();
  /* 1235fe56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fe59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235fe5b jne 0x1235fe62 */
  if (!C.zf) goto L_1235fe62;
  /* 1235fe5d jmp 0x1235ffb2 */
  goto L_1235ffb2;
L_1235fe62:;
  /* 1235fe62 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235fe65 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1235fe6a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235fe6d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1235fe70 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1235fe77 jmp 0x1235fe82 */
  goto L_1235fe82;
L_1235fe79:;
  /* 1235fe79 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235fe7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fe7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1235fe82:;
  /* 1235fe82 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fe89 jge 0x1235fea0 */
  if ((C.sf==C.of)) goto L_1235fea0;
  /* 1235fe8b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235fe8e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1235fe92 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1235fe95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235fe98 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fe9b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1235fe9e jmp 0x1235fe79 */
  goto L_1235fe79;
L_1235fea0:;
  /* 1235fea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235fea4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235fea7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235feaa push edx */
  push32((uint32_t)(EDX));
  /* 1235feab push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1235feb0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235feb3 push eax */
  push32((uint32_t)(EAX));
  /* 1235feb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235feb6 call 0x12362820 */
  push32(0x1235febbu); f_12362820();
  /* 1235febb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235febe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235fec0 jne 0x1235fec7 */
  if (!C.zf) goto L_1235fec7;
  /* 1235fec2 jmp 0x1235ffb2 */
  goto L_1235ffb2;
L_1235fec7:;
  /* 1235fec7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235feca mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1235fecf cmp dword ptr [0x1237eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1237eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235fed6 jle 0x1235ff33 */
  if ((C.zf||C.sf!=C.of)) goto L_1235ff33;
  /* 1235fed8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1235fedb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1235fede jmp 0x1235fee9 */
  goto L_1235fee9;
L_1235fee0:;
  /* 1235fee0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235fee3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235fee6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1235fee9:;
  /* 1235fee9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235feec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235feee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1235fef0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235fef2 je 0x1235ff33 */
  if (C.zf) goto L_1235ff33;
  /* 1235fef4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235fef7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235fef9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1235fefc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235fefe je 0x1235ff33 */
  if (C.zf) goto L_1235ff33;
  /* 1235ff00 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235ff03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235ff05 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1235ff07 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1235ff0a jmp 0x1235ff15 */
  goto L_1235ff15;
L_1235ff0c:;
  /* 1235ff0c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235ff0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ff12 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1235ff15:;
  /* 1235ff15 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1235ff18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235ff1a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1235ff1d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ff20 jg 0x1235ff31 */
  if ((!C.zf&&C.sf==C.of)) goto L_1235ff31;
  /* 1235ff22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1235ff25 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235ff28 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1235ff2f jmp 0x1235ff0c */
  goto L_1235ff0c;
L_1235ff31:;
  /* 1235ff31 jmp 0x1235fee0 */
  goto L_1235fee0;
L_1235ff33:;
  /* 1235ff33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235ff36 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ff39 mov dword ptr [0x1237ec98], eax */
  w32((uint32_t)(0x1237ec98), (EAX));
  /* 1235ff3e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235ff41 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ff44 mov dword ptr [0x1237ec9c], ecx */
  w32((uint32_t)(0x1237ec9c), (ECX));
  /* 1235ff4a cmp dword ptr [0x12380798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ff51 je 0x1235ff64 */
  if (C.zf) goto L_1235ff64;
  /* 1235ff53 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ff55 mov edx, dword ptr [0x12380798] */
  EDX = (r32((uint32_t)(0x12380798)));
  /* 1235ff5b push edx */
  push32((uint32_t)(EDX));
  /* 1235ff5c call 0x12354e50 */
  push32(0x1235ff61u); f_12354e50();
  /* 1235ff61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235ff64:;
  /* 1235ff64 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235ff67 mov dword ptr [0x12380798], eax */
  w32((uint32_t)(0x12380798), (EAX));
  /* 1235ff6c cmp dword ptr [0x1238079c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1238079c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235ff73 je 0x1235ff86 */
  if (C.zf) goto L_1235ff86;
  /* 1235ff75 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ff77 mov ecx, dword ptr [0x1238079c] */
  ECX = (r32((uint32_t)(0x1238079c)));
  /* 1235ff7d push ecx */
  push32((uint32_t)(ECX));
  /* 1235ff7e call 0x12354e50 */
  push32(0x1235ff83u); f_12354e50();
  /* 1235ff83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235ff86:;
  /* 1235ff86 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235ff89 mov dword ptr [0x1238079c], edx */
  w32((uint32_t)(0x1238079c), (EDX));
  /* 1235ff8f push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ff91 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235ff94 push eax */
  push32((uint32_t)(EAX));
  /* 1235ff95 call 0x12354e50 */
  push32(0x1235ff9au); f_12354e50();
  /* 1235ff9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ff9d push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ff9f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235ffa2 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ffa3 call 0x12354e50 */
  push32(0x1235ffa8u); f_12354e50();
  /* 1235ffa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ffab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235ffad jmp 0x1236003c */
  goto L_1236003c;
L_1235ffb2:;
  /* 1235ffb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ffb4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1235ffb7 push edx */
  push32((uint32_t)(EDX));
  /* 1235ffb8 call 0x12354e50 */
  push32(0x1235ffbdu); f_12354e50();
  /* 1235ffbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ffc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ffc2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1235ffc5 push eax */
  push32((uint32_t)(EAX));
  /* 1235ffc6 call 0x12354e50 */
  push32(0x1235ffcbu); f_12354e50();
  /* 1235ffcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ffce push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ffd0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1235ffd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1235ffd4 call 0x12354e50 */
  push32(0x1235ffd9u); f_12354e50();
  /* 1235ffd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ffdc push 2 */
  push32((uint32_t)(0x2u));
  /* 1235ffde mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235ffe1 push edx */
  push32((uint32_t)(EDX));
  /* 1235ffe2 call 0x12354e50 */
  push32(0x1235ffe7u); f_12354e50();
  /* 1235ffe7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235ffea mov eax, 1 */
  EAX = (0x1u);
  /* 1235ffef jmp 0x1236003c */
  goto L_1236003c;
L_1235fff1:;
  /* 1235fff1 mov dword ptr [0x1237ec98], 0x1237eca2 */
  w32((uint32_t)(0x1237ec98), (0x1237eca2u));
  /* 1235fffb mov dword ptr [0x1237ec9c], 0x1237eca2 */
  w32((uint32_t)(0x1237ec9c), (0x1237eca2u));
  /* 12360005 push 2 */
  push32((uint32_t)(0x2u));
  /* 12360007 mov eax, dword ptr [0x12380798] */
  EAX = (r32((uint32_t)(0x12380798)));
  /* 1236000c push eax */
  push32((uint32_t)(EAX));
  /* 1236000d call 0x12354e50 */
  push32(0x12360012u); f_12354e50();
  /* 12360012 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360015 push 2 */
  push32((uint32_t)(0x2u));
  /* 12360017 mov ecx, dword ptr [0x1238079c] */
  ECX = (r32((uint32_t)(0x1238079c)));
  /* 1236001d push ecx */
  push32((uint32_t)(ECX));
  /* 1236001e call 0x12354e50 */
  push32(0x12360023u); f_12354e50();
  /* 12360023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360026 mov dword ptr [0x12380798], 0 */
  w32((uint32_t)(0x12380798), (0x0u));
  /* 12360030 mov dword ptr [0x1238079c], 0 */
  w32((uint32_t)(0x1238079c), (0x0u));
  /* 1236003a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1236003c:;
  /* 1236003c mov esp, ebp */
  ESP = (EBP);
  /* 1236003e pop ebp */
  EBP = (pop32());
  /* 1236003f ret  */
  ESPCHK(0x1235fca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010040 @ 0x12360040 (7 bytes, 5 insns) */
void f_12360040(void) {
  FTRACE(0x12360040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360040 push ebp */
  push32((uint32_t)(EBP));
  /* 12360041 mov ebp, esp */
  EBP = (ESP);
  /* 12360043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12360045 pop ebp */
  EBP = (pop32());
  /* 12360046 ret  */
  ESPCHK(0x12360040u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12360050 (129 bytes, 56 insns) */
void f_12360050(void) {
  FTRACE(0x12360050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360050 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12360054 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12360058 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1236005e jne 0x1236009c */
  if (!C.zf) goto L_1236009c;
L_12360060:;
  /* 12360060 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12360062 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12360064 jne 0x12360094 */
  if (!C.zf) goto L_12360094;
  /* 12360066 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12360068 je 0x12360090 */
  if (C.zf) goto L_12360090;
  /* 1236006a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1236006d jne 0x12360094 */
  if (!C.zf) goto L_12360094;
  /* 1236006f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12360071 je 0x12360090 */
  if (C.zf) goto L_12360090;
  /* 12360073 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12360076 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12360079 jne 0x12360094 */
  if (!C.zf) goto L_12360094;
  /* 1236007b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1236007d je 0x12360090 */
  if (C.zf) goto L_12360090;
  /* 1236007f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12360082 jne 0x12360094 */
  if (!C.zf) goto L_12360094;
  /* 12360084 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360087 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236008a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1236008c jne 0x12360060 */
  if (!C.zf) goto L_12360060;
  /* 1236008e mov edi, edi */
  EDI = (EDI);
L_12360090:;
  /* 12360090 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12360092 ret  */
  ESPCHK(0x12360050u, _esp0);
  ESP += 4; return;
  /* 12360093 nop  */
  /* nop */
L_12360094:;
  /* 12360094 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360096 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12360098 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12360099 ret  */
  ESPCHK(0x12360050u, _esp0);
  ESP += 4; return;
  /* 1236009a mov edi, edi */
  EDI = (EDI);
L_1236009c:;
  /* 1236009c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 123600a2 je 0x123600b8 */
  if (C.zf) goto L_123600b8;
  /* 123600a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123600a6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 123600a7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123600a9 jne 0x12360094 */
  if (!C.zf) goto L_12360094;
  /* 123600ab inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123600ac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123600ae je 0x12360090 */
  if (C.zf) goto L_12360090;
  /* 123600b0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 123600b6 je 0x12360060 */
  if (C.zf) goto L_12360060;
L_123600b8:;
  /* 123600b8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 123600bb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123600be cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123600c0 jne 0x12360094 */
  if (!C.zf) goto L_12360094;
  /* 123600c2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123600c4 je 0x12360090 */
  if (C.zf) goto L_12360090;
  /* 123600c6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123600c9 jne 0x12360094 */
  if (!C.zf) goto L_12360094;
  /* 123600cb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 123600cd je 0x12360090 */
  if (C.zf) goto L_12360090;
  /* 123600cf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123600d2 jmp 0x12360060 */
  goto L_12360060;
}

/* FUN_100100e0 @ 0x123600e0 (62 bytes, 35 insns) */
void f_123600e0(void) {
  FTRACE(0x123600e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123600e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123600e1 mov ebp, esp */
  EBP = (ESP);
  /* 123600e3 push esi */
  push32((uint32_t)(ESI));
  /* 123600e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123600e6 push eax */
  push32((uint32_t)(EAX));
  /* 123600e7 push eax */
  push32((uint32_t)(EAX));
  /* 123600e8 push eax */
  push32((uint32_t)(EAX));
  /* 123600e9 push eax */
  push32((uint32_t)(EAX));
  /* 123600ea push eax */
  push32((uint32_t)(EAX));
  /* 123600eb push eax */
  push32((uint32_t)(EAX));
  /* 123600ec push eax */
  push32((uint32_t)(EAX));
  /* 123600ed push eax */
  push32((uint32_t)(EAX));
  /* 123600ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123600f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123600f4:;
  /* 123600f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123600f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123600f8 je 0x12360101 */
  if (C.zf) goto L_12360101;
  /* 123600fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 123600fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x123600fb");
  /* 123600ff jmp 0x123600f4 */
  goto L_123600f4;
L_12360101:;
  /* 12360101 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12360104 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12360107 nop  */
  /* nop */
L_12360108:;
  /* 12360108 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12360109 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1236010b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1236010d je 0x12360116 */
  if (C.zf) goto L_12360116;
  /* 1236010f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12360110 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12360110");
  /* 12360114 jae 0x12360108 */
  if (!C.cf) goto L_12360108;
L_12360116:;
  /* 12360116 mov eax, ecx */
  EAX = (ECX);
  /* 12360118 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236011b pop esi */
  ESI = (pop32());
  /* 1236011c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1236011d ret  */
  ESPCHK(0x123600e0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12360120 (56 bytes, 31 insns) */
void f_12360120(void) {
  FTRACE(0x12360120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360120 push ebp */
  push32((uint32_t)(EBP));
  /* 12360121 mov ebp, esp */
  EBP = (ESP);
  /* 12360123 push edi */
  push32((uint32_t)(EDI));
  /* 12360124 push esi */
  push32((uint32_t)(ESI));
  /* 12360125 push ebx */
  push32((uint32_t)(EBX));
  /* 12360126 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12360129 jecxz 0x12360151 */
  x86_unimpl("jecxz @ 0x12360129");
  /* 1236012b mov ebx, ecx */
  EBX = (ECX);
  /* 1236012d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12360130 mov esi, edi */
  ESI = (EDI);
  /* 12360132 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12360134 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12360136 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12360138 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236013a mov edi, esi */
  EDI = (ESI);
  /* 1236013c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1236013f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12360141 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12360144 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12360146 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12360149 ja 0x1236014f */
  if ((!C.cf&&!C.zf)) goto L_1236014f;
  /* 1236014b je 0x12360151 */
  if (C.zf) goto L_12360151;
  /* 1236014d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1236014e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1236014f:;
  /* 1236014f not ecx */
  ECX = (~(ECX));
L_12360151:;
  /* 12360151 mov eax, ecx */
  EAX = (ECX);
  /* 12360153 pop ebx */
  EBX = (pop32());
  /* 12360154 pop esi */
  ESI = (pop32());
  /* 12360155 pop edi */
  EDI = (pop32());
  /* 12360156 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12360157 ret  */
  ESPCHK(0x12360120u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x12360160 (58 bytes, 32 insns) */
void f_12360160(void) {
  FTRACE(0x12360160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360160 push ebp */
  push32((uint32_t)(EBP));
  /* 12360161 mov ebp, esp */
  EBP = (ESP);
  /* 12360163 push esi */
  push32((uint32_t)(ESI));
  /* 12360164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12360166 push eax */
  push32((uint32_t)(EAX));
  /* 12360167 push eax */
  push32((uint32_t)(EAX));
  /* 12360168 push eax */
  push32((uint32_t)(EAX));
  /* 12360169 push eax */
  push32((uint32_t)(EAX));
  /* 1236016a push eax */
  push32((uint32_t)(EAX));
  /* 1236016b push eax */
  push32((uint32_t)(EAX));
  /* 1236016c push eax */
  push32((uint32_t)(EAX));
  /* 1236016d push eax */
  push32((uint32_t)(EAX));
  /* 1236016e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12360171 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12360174:;
  /* 12360174 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12360176 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12360178 je 0x12360181 */
  if (C.zf) goto L_12360181;
  /* 1236017a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1236017b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1236017b");
  /* 1236017f jmp 0x12360174 */
  goto L_12360174;
L_12360181:;
  /* 12360181 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12360184:;
  /* 12360184 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12360186 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12360188 je 0x12360194 */
  if (C.zf) goto L_12360194;
  /* 1236018a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1236018b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1236018b");
  /* 1236018f jae 0x12360184 */
  if (!C.cf) goto L_12360184;
  /* 12360191 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12360194:;
  /* 12360194 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360197 pop esi */
  ESI = (pop32());
  /* 12360198 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12360199 ret  */
  ESPCHK(0x12360160u, _esp0);
  ESP += 4; return;
}

/* FUN_100101a0 @ 0x123601a0 (512 bytes, 147 insns) */
void f_123601a0(void) {
  FTRACE(0x123601a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123601a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123601a1 mov ebp, esp */
  EBP = (ESP);
  /* 123601a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123601a6 cmp dword ptr [0x123807e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123601ad jne 0x123601d2 */
  if (!C.zf) goto L_123601d2;
  /* 123601af call 0x12360c70 */
  push32(0x123601b4u); f_12360c70();
  /* 123601b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123601b6 je 0x123601c2 */
  if (C.zf) goto L_123601c2;
  /* 123601b8 mov eax, dword ptr [0x12383280] */
  EAX = (r32((uint32_t)(0x12383280)));
  /* 123601bd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123601c0 jmp 0x123601c9 */
  goto L_123601c9;
L_123601c2:;
  /* 123601c2 mov dword ptr [ebp - 8], 0x12360cc0 */
  w32((uint32_t)(EBP + -0x8), (0x12360cc0u));
L_123601c9:;
  /* 123601c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123601cc mov dword ptr [0x123807e4], ecx */
  w32((uint32_t)(0x123807e4), (ECX));
L_123601d2:;
  /* 123601d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123601d6 jne 0x123601e2 */
  if (!C.zf) goto L_123601e2;
  /* 123601d8 call 0x12360ac0 */
  push32(0x123601ddu); f_12360ac0();
  /* 123601dd jmp 0x123602ae */
  goto L_123602ae;
L_123601e2:;
  /* 123601e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123601e5 mov dword ptr [0x123807d4], edx */
  w32((uint32_t)(0x123807d4), (EDX));
  /* 123601eb cmp dword ptr [0x123807d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123601f2 je 0x12360214 */
  if (C.zf) goto L_12360214;
  /* 123601f4 mov eax, dword ptr [0x123807d4] */
  EAX = (r32((uint32_t)(0x123807d4)));
  /* 123601f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123601fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123601fe je 0x12360214 */
  if (C.zf) goto L_12360214;
  /* 12360200 push 0x123807d4 */
  push32((uint32_t)(0x123807d4u));
  /* 12360205 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12360207 push 0x1237fa90 */
  push32((uint32_t)(0x1237fa90u));
  /* 1236020c call 0x123603a0 */
  push32(0x12360211u); f_123603a0();
  /* 12360211 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12360214:;
  /* 12360214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360217 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236021a mov dword ptr [0x123807d8], edx */
  w32((uint32_t)(0x123807d8), (EDX));
  /* 12360220 cmp dword ptr [0x123807d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360227 je 0x12360249 */
  if (C.zf) goto L_12360249;
  /* 12360229 mov eax, dword ptr [0x123807d8] */
  EAX = (r32((uint32_t)(0x123807d8)));
  /* 1236022e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12360231 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12360233 je 0x12360249 */
  if (C.zf) goto L_12360249;
  /* 12360235 push 0x123807d8 */
  push32((uint32_t)(0x123807d8u));
  /* 1236023a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1236023c push 0x1237f9d8 */
  push32((uint32_t)(0x1237f9d8u));
  /* 12360241 call 0x123603a0 */
  push32(0x12360246u); f_123603a0();
  /* 12360246 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12360249:;
  /* 12360249 mov dword ptr [0x123807dc], 0 */
  w32((uint32_t)(0x123807dc), (0x0u));
  /* 12360253 cmp dword ptr [0x123807d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236025a je 0x1236028d */
  if (C.zf) goto L_1236028d;
  /* 1236025c mov edx, dword ptr [0x123807d4] */
  EDX = (r32((uint32_t)(0x123807d4)));
  /* 12360262 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12360265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360267 je 0x1236028d */
  if (C.zf) goto L_1236028d;
  /* 12360269 cmp dword ptr [0x123807d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360270 je 0x12360286 */
  if (C.zf) goto L_12360286;
  /* 12360272 mov ecx, dword ptr [0x123807d8] */
  ECX = (r32((uint32_t)(0x123807d8)));
  /* 12360278 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1236027b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1236027d je 0x12360286 */
  if (C.zf) goto L_12360286;
  /* 1236027f call 0x12360430 */
  push32(0x12360284u); f_12360430();
  /* 12360284 jmp 0x1236028b */
  goto L_1236028b;
L_12360286:;
  /* 12360286 call 0x12360820 */
  push32(0x1236028bu); f_12360820();
L_1236028b:;
  /* 1236028b jmp 0x123602ae */
  goto L_123602ae;
L_1236028d:;
  /* 1236028d cmp dword ptr [0x123807d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360294 je 0x123602a9 */
  if (C.zf) goto L_123602a9;
  /* 12360296 mov eax, dword ptr [0x123807d8] */
  EAX = (r32((uint32_t)(0x123807d8)));
  /* 1236029b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1236029e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123602a0 je 0x123602a9 */
  if (C.zf) goto L_123602a9;
  /* 123602a2 call 0x123609c0 */
  push32(0x123602a7u); f_123609c0();
  /* 123602a7 jmp 0x123602ae */
  goto L_123602ae;
L_123602a9:;
  /* 123602a9 call 0x12360ac0 */
  push32(0x123602aeu); f_12360ac0();
L_123602ae:;
  /* 123602ae cmp dword ptr [0x123807dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123602b5 jne 0x123602be */
  if (!C.zf) goto L_123602be;
  /* 123602b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123602b9 jmp 0x1236039c */
  goto L_1236039c;
L_123602be:;
  /* 123602be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123602c1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123602c7 push edx */
  push32((uint32_t)(EDX));
  /* 123602c8 call 0x12360af0 */
  push32(0x123602cdu); f_12360af0();
  /* 123602cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123602d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123602d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123602d7 je 0x123602ec */
  if (C.zf) goto L_123602ec;
  /* 123602d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123602dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123602e1 push eax */
  push32((uint32_t)(EAX));
  /* 123602e2 call dword ptr [0x12383284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383284))), 0x123602e8u);
  /* 123602e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123602ea jne 0x123602f3 */
  if (!C.zf) goto L_123602f3;
L_123602ec:;
  /* 123602ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123602ee jmp 0x1236039c */
  goto L_1236039c;
L_123602f3:;
  /* 123602f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123602f5 mov ecx, dword ptr [0x123807c4] */
  ECX = (r32((uint32_t)(0x123807c4)));
  /* 123602fb push ecx */
  push32((uint32_t)(ECX));
  /* 123602fc call dword ptr [0x12383288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383288))), 0x12360302u);
  /* 12360302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360304 jne 0x1236030d */
  if (!C.zf) goto L_1236030d;
  /* 12360306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12360308 jmp 0x1236039c */
  goto L_1236039c;
L_1236030d:;
  /* 1236030d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360311 je 0x12360338 */
  if (C.zf) goto L_12360338;
  /* 12360313 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12360316 mov ax, word ptr [0x123807c4] */
  AX = (r16((uint32_t)(0x123807c4)));
  /* 1236031c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1236031f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12360322 mov dx, word ptr [0x123807e0] */
  DX = (r16((uint32_t)(0x123807e0)));
  /* 12360329 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1236032d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12360330 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12360334 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12360338:;
  /* 12360338 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236033c je 0x12360397 */
  if (C.zf) goto L_12360397;
  /* 1236033e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12360340 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12360343 push edx */
  push32((uint32_t)(EDX));
  /* 12360344 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12360349 mov eax, dword ptr [0x123807c4] */
  EAX = (r32((uint32_t)(0x123807c4)));
  /* 1236034e push eax */
  push32((uint32_t)(EAX));
  /* 1236034f call dword ptr [0x123807e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123807e4))), 0x12360355u);
  /* 12360355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360357 jne 0x1236035d */
  if (!C.zf) goto L_1236035d;
  /* 12360359 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236035b jmp 0x1236039c */
  goto L_1236039c;
L_1236035d:;
  /* 1236035d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1236035f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12360362 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360365 push ecx */
  push32((uint32_t)(ECX));
  /* 12360366 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1236036b mov edx, dword ptr [0x123807e0] */
  EDX = (r32((uint32_t)(0x123807e0)));
  /* 12360371 push edx */
  push32((uint32_t)(EDX));
  /* 12360372 call dword ptr [0x123807e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123807e4))), 0x12360378u);
  /* 12360378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1236037a jne 0x12360380 */
  if (!C.zf) goto L_12360380;
  /* 1236037c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236037e jmp 0x1236039c */
  goto L_1236039c;
L_12360380:;
  /* 12360380 push 0xa */
  push32((uint32_t)(0xau));
  /* 12360382 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12360385 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236038a push eax */
  push32((uint32_t)(EAX));
  /* 1236038b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236038e push ecx */
  push32((uint32_t)(ECX));
  /* 1236038f call 0x12356f00 */
  push32(0x12360394u); f_12356f00();
  /* 12360394 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12360397:;
  /* 12360397 mov eax, 1 */
  EAX = (0x1u);
L_1236039c:;
  /* 1236039c mov esp, ebp */
  ESP = (EBP);
  /* 1236039e pop ebp */
  EBP = (pop32());
  /* 1236039f ret  */
  ESPCHK(0x123601a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103a0 @ 0x123603a0 (130 bytes, 47 insns) */
void f_123603a0(void) {
  FTRACE(0x123603a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123603a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123603a1 mov ebp, esp */
  EBP = (ESP);
  /* 123603a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123603a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123603ad mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_123603b4:;
  /* 123603b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123603b7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123603ba jg 0x1236041e */
  if ((!C.zf&&C.sf==C.of)) goto L_1236041e;
  /* 123603bc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123603c0 je 0x1236041e */
  if (C.zf) goto L_1236041e;
  /* 123603c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123603c5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123603c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123603c9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123603cb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123603cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123603d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123603d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123603d6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 123603d9 push eax */
  push32((uint32_t)(EAX));
  /* 123603da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123603dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123603df push edx */
  push32((uint32_t)(EDX));
  /* 123603e0 call 0x12362a90 */
  push32(0x123603e5u); f_12362a90();
  /* 123603e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123603e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123603eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123603ef jne 0x12360402 */
  if (!C.zf) goto L_12360402;
  /* 123603f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123603f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123603f7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 123603fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123603fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12360400 jmp 0x1236041c */
  goto L_1236041c;
L_12360402:;
  /* 12360402 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360406 jge 0x12360413 */
  if ((C.sf==C.of)) goto L_12360413;
  /* 12360408 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236040b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236040e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12360411 jmp 0x1236041c */
  goto L_1236041c;
L_12360413:;
  /* 12360413 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12360416 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360419 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1236041c:;
  /* 1236041c jmp 0x123603b4 */
  goto L_123603b4;
L_1236041e:;
  /* 1236041e mov esp, ebp */
  ESP = (EBP);
  /* 12360420 pop ebp */
  EBP = (pop32());
  /* 12360421 ret  */
  ESPCHK(0x123603a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010430 @ 0x12360430 (186 bytes, 50 insns) */
void f_12360430(void) {
  FTRACE(0x12360430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360430 push ebp */
  push32((uint32_t)(EBP));
  /* 12360431 mov ebp, esp */
  EBP = (ESP);
  /* 12360433 push ecx */
  push32((uint32_t)(ECX));
  /* 12360434 mov eax, dword ptr [0x123807d4] */
  EAX = (r32((uint32_t)(0x123807d4)));
  /* 12360439 push eax */
  push32((uint32_t)(EAX));
  /* 1236043a call 0x123571f0 */
  push32(0x1236043fu); f_123571f0();
  /* 1236043f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360442 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12360444 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360447 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1236044a mov dword ptr [0x123807d0], ecx */
  w32((uint32_t)(0x123807d0), (ECX));
  /* 12360450 mov edx, dword ptr [0x123807d8] */
  EDX = (r32((uint32_t)(0x123807d8)));
  /* 12360456 push edx */
  push32((uint32_t)(EDX));
  /* 12360457 call 0x123571f0 */
  push32(0x1236045cu); f_123571f0();
  /* 1236045c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236045f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12360461 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360464 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12360467 mov dword ptr [0x123807c8], ecx */
  w32((uint32_t)(0x123807c8), (ECX));
  /* 1236046d mov dword ptr [0x123807c4], 0 */
  w32((uint32_t)(0x123807c4), (0x0u));
  /* 12360477 cmp dword ptr [0x123807d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236047e je 0x12360489 */
  if (C.zf) goto L_12360489;
  /* 12360480 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12360487 jmp 0x1236049b */
  goto L_1236049b;
L_12360489:;
  /* 12360489 mov edx, dword ptr [0x123807d4] */
  EDX = (r32((uint32_t)(0x123807d4)));
  /* 1236048f push edx */
  push32((uint32_t)(EDX));
  /* 12360490 call 0x12360ed0 */
  push32(0x12360495u); f_12360ed0();
  /* 12360495 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360498 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1236049b:;
  /* 1236049b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236049e mov dword ptr [0x123807cc], eax */
  w32((uint32_t)(0x123807cc), (EAX));
  /* 123604a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123604a5 push 0x123604f0 */
  push32((uint32_t)(0x123604f0u));
  /* 123604aa call dword ptr [0x1238327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238327c))), 0x123604b0u);
  /* 123604b0 mov ecx, dword ptr [0x123807dc] */
  ECX = (r32((uint32_t)(0x123807dc)));
  /* 123604b6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 123604bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123604be je 0x123604dc */
  if (C.zf) goto L_123604dc;
  /* 123604c0 mov edx, dword ptr [0x123807dc] */
  EDX = (r32((uint32_t)(0x123807dc)));
  /* 123604c6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 123604cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123604ce je 0x123604dc */
  if (C.zf) goto L_123604dc;
  /* 123604d0 mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 123604d5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 123604d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123604da jne 0x123604e6 */
  if (!C.zf) goto L_123604e6;
L_123604dc:;
  /* 123604dc mov dword ptr [0x123807dc], 0 */
  w32((uint32_t)(0x123807dc), (0x0u));
L_123604e6:;
  /* 123604e6 mov esp, ebp */
  ESP = (EBP);
  /* 123604e8 pop ebp */
  EBP = (pop32());
  /* 123604e9 ret  */
  ESPCHK(0x12360430u, _esp0);
  ESP += 4; return;
}

/* FUN_100104f0 @ 0x123604f0 (804 bytes, 220 insns) */
void f_123604f0(void) {
  FTRACE(0x123604f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123604f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123604f1 mov ebp, esp */
  EBP = (ESP);
  /* 123604f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123604f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123604f9 push eax */
  push32((uint32_t)(EAX));
  /* 123604fa call 0x12360e50 */
  push32(0x123604ffu); f_12360e50();
  /* 123604ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360502 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12360505 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12360507 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1236050a push ecx */
  push32((uint32_t)(ECX));
  /* 1236050b mov edx, dword ptr [0x123807c8] */
  EDX = (r32((uint32_t)(0x123807c8)));
  /* 12360511 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12360513 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360515 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1236051b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360521 push edx */
  push32((uint32_t)(EDX));
  /* 12360522 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360525 push eax */
  push32((uint32_t)(EAX));
  /* 12360526 call dword ptr [0x123807e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123807e4))), 0x1236052cu);
  /* 1236052c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1236052e jne 0x12360544 */
  if (!C.zf) goto L_12360544;
  /* 12360530 mov dword ptr [0x123807dc], 0 */
  w32((uint32_t)(0x123807dc), (0x0u));
  /* 1236053a mov eax, 1 */
  EAX = (0x1u);
  /* 1236053f jmp 0x1236080e */
  goto L_1236080e;
L_12360544:;
  /* 12360544 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12360547 push ecx */
  push32((uint32_t)(ECX));
  /* 12360548 mov edx, dword ptr [0x123807d8] */
  EDX = (r32((uint32_t)(0x123807d8)));
  /* 1236054e push edx */
  push32((uint32_t)(EDX));
  /* 1236054f call 0x12362a90 */
  push32(0x12360554u); f_12362a90();
  /* 12360554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360557 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360559 jne 0x1236067f */
  if (!C.zf) goto L_1236067f;
  /* 1236055f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12360561 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12360564 push eax */
  push32((uint32_t)(EAX));
  /* 12360565 mov ecx, dword ptr [0x123807d0] */
  ECX = (r32((uint32_t)(0x123807d0)));
  /* 1236056b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1236056d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236056f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12360575 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236057b push ecx */
  push32((uint32_t)(ECX));
  /* 1236057c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1236057f push edx */
  push32((uint32_t)(EDX));
  /* 12360580 call dword ptr [0x123807e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123807e4))), 0x12360586u);
  /* 12360586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360588 jne 0x1236059e */
  if (!C.zf) goto L_1236059e;
  /* 1236058a mov dword ptr [0x123807dc], 0 */
  w32((uint32_t)(0x123807dc), (0x0u));
  /* 12360594 mov eax, 1 */
  EAX = (0x1u);
  /* 12360599 jmp 0x1236080e */
  goto L_1236080e;
L_1236059e:;
  /* 1236059e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123605a1 push eax */
  push32((uint32_t)(EAX));
  /* 123605a2 mov ecx, dword ptr [0x123807d4] */
  ECX = (r32((uint32_t)(0x123807d4)));
  /* 123605a8 push ecx */
  push32((uint32_t)(ECX));
  /* 123605a9 call 0x12362a90 */
  push32(0x123605aeu); f_12362a90();
  /* 123605ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123605b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123605b3 jne 0x123605e0 */
  if (!C.zf) goto L_123605e0;
  /* 123605b5 mov edx, dword ptr [0x123807dc] */
  EDX = (r32((uint32_t)(0x123807dc)));
  /* 123605bb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 123605c1 mov dword ptr [0x123807dc], edx */
  w32((uint32_t)(0x123807dc), (EDX));
  /* 123605c7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123605ca mov dword ptr [0x123807e0], eax */
  w32((uint32_t)(0x123807e0), (EAX));
  /* 123605cf mov ecx, dword ptr [0x123807e0] */
  ECX = (r32((uint32_t)(0x123807e0)));
  /* 123605d5 mov dword ptr [0x123807c4], ecx */
  w32((uint32_t)(0x123807c4), (ECX));
  /* 123605db jmp 0x1236067f */
  goto L_1236067f;
L_123605e0:;
  /* 123605e0 mov edx, dword ptr [0x123807dc] */
  EDX = (r32((uint32_t)(0x123807dc)));
  /* 123605e6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 123605e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123605eb jne 0x1236067f */
  if (!C.zf) goto L_1236067f;
  /* 123605f1 cmp dword ptr [0x123807cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123605f8 je 0x1236064d */
  if (C.zf) goto L_1236064d;
  /* 123605fa mov eax, dword ptr [0x123807cc] */
  EAX = (r32((uint32_t)(0x123807cc)));
  /* 123605ff push eax */
  push32((uint32_t)(EAX));
  /* 12360600 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12360603 push ecx */
  push32((uint32_t)(ECX));
  /* 12360604 mov edx, dword ptr [0x123807d4] */
  EDX = (r32((uint32_t)(0x123807d4)));
  /* 1236060a push edx */
  push32((uint32_t)(EDX));
  /* 1236060b call 0x12362b60 */
  push32(0x12360610u); f_12362b60();
  /* 12360610 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360615 jne 0x1236064d */
  if (!C.zf) goto L_1236064d;
  /* 12360617 mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 1236061c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1236061e mov dword ptr [0x123807dc], eax */
  w32((uint32_t)(0x123807dc), (EAX));
  /* 12360623 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360626 mov dword ptr [0x123807e0], ecx */
  w32((uint32_t)(0x123807e0), (ECX));
  /* 1236062c mov edx, dword ptr [0x123807d4] */
  EDX = (r32((uint32_t)(0x123807d4)));
  /* 12360632 push edx */
  push32((uint32_t)(EDX));
  /* 12360633 call 0x123571f0 */
  push32(0x12360638u); f_123571f0();
  /* 12360638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236063b cmp eax, dword ptr [0x123807cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123807cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360641 jne 0x1236064b */
  if (!C.zf) goto L_1236064b;
  /* 12360643 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360646 mov dword ptr [0x123807c4], eax */
  w32((uint32_t)(0x123807c4), (EAX));
L_1236064b:;
  /* 1236064b jmp 0x1236067f */
  goto L_1236067f;
L_1236064d:;
  /* 1236064d mov ecx, dword ptr [0x123807dc] */
  ECX = (r32((uint32_t)(0x123807dc)));
  /* 12360653 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12360656 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12360658 jne 0x1236067f */
  if (!C.zf) goto L_1236067f;
  /* 1236065a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1236065d push edx */
  push32((uint32_t)(EDX));
  /* 1236065e call 0x12360b90 */
  push32(0x12360663u); f_12360b90();
  /* 12360663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360668 je 0x1236067f */
  if (C.zf) goto L_1236067f;
  /* 1236066a mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 1236066f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12360671 mov dword ptr [0x123807dc], eax */
  w32((uint32_t)(0x123807dc), (EAX));
  /* 12360676 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360679 mov dword ptr [0x123807e0], ecx */
  w32((uint32_t)(0x123807e0), (ECX));
L_1236067f:;
  /* 1236067f mov edx, dword ptr [0x123807dc] */
  EDX = (r32((uint32_t)(0x123807dc)));
  /* 12360685 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1236068b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360691 je 0x12360801 */
  if (C.zf) goto L_12360801;
  /* 12360697 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12360699 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1236069c push eax */
  push32((uint32_t)(EAX));
  /* 1236069d mov ecx, dword ptr [0x123807d0] */
  ECX = (r32((uint32_t)(0x123807d0)));
  /* 123606a3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123606a5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123606a7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 123606ad add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123606b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123606b4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123606b7 push edx */
  push32((uint32_t)(EDX));
  /* 123606b8 call dword ptr [0x123807e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123807e4))), 0x123606beu);
  /* 123606be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123606c0 jne 0x123606d6 */
  if (!C.zf) goto L_123606d6;
  /* 123606c2 mov dword ptr [0x123807dc], 0 */
  w32((uint32_t)(0x123807dc), (0x0u));
  /* 123606cc mov eax, 1 */
  EAX = (0x1u);
  /* 123606d1 jmp 0x1236080e */
  goto L_1236080e;
L_123606d6:;
  /* 123606d6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123606d9 push eax */
  push32((uint32_t)(EAX));
  /* 123606da mov ecx, dword ptr [0x123807d4] */
  ECX = (r32((uint32_t)(0x123807d4)));
  /* 123606e0 push ecx */
  push32((uint32_t)(ECX));
  /* 123606e1 call 0x12362a90 */
  push32(0x123606e6u); f_12362a90();
  /* 123606e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123606e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123606eb jne 0x123607a0 */
  if (!C.zf) goto L_123607a0;
  /* 123606f1 mov edx, dword ptr [0x123807dc] */
  EDX = (r32((uint32_t)(0x123807dc)));
  /* 123606f7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 123606fa mov dword ptr [0x123807dc], edx */
  w32((uint32_t)(0x123807dc), (EDX));
  /* 12360700 cmp dword ptr [0x123807d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360707 je 0x1236072a */
  if (C.zf) goto L_1236072a;
  /* 12360709 mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 1236070e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12360711 mov dword ptr [0x123807dc], eax */
  w32((uint32_t)(0x123807dc), (EAX));
  /* 12360716 cmp dword ptr [0x123807c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236071d jne 0x12360728 */
  if (!C.zf) goto L_12360728;
  /* 1236071f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360722 mov dword ptr [0x123807c4], ecx */
  w32((uint32_t)(0x123807c4), (ECX));
L_12360728:;
  /* 12360728 jmp 0x1236079e */
  goto L_1236079e;
L_1236072a:;
  /* 1236072a cmp dword ptr [0x123807cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360731 je 0x1236077f */
  if (C.zf) goto L_1236077f;
  /* 12360733 mov edx, dword ptr [0x123807d4] */
  EDX = (r32((uint32_t)(0x123807d4)));
  /* 12360739 push edx */
  push32((uint32_t)(EDX));
  /* 1236073a call 0x123571f0 */
  push32(0x1236073fu); f_123571f0();
  /* 1236073f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360742 cmp eax, dword ptr [0x123807cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123807cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360748 jne 0x1236077f */
  if (!C.zf) goto L_1236077f;
  /* 1236074a push 1 */
  push32((uint32_t)(0x1u));
  /* 1236074c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1236074f push eax */
  push32((uint32_t)(EAX));
  /* 12360750 call 0x12360be0 */
  push32(0x12360755u); f_12360be0();
  /* 12360755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1236075a je 0x1236077d */
  if (C.zf) goto L_1236077d;
  /* 1236075c mov ecx, dword ptr [0x123807dc] */
  ECX = (r32((uint32_t)(0x123807dc)));
  /* 12360762 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12360765 mov dword ptr [0x123807dc], ecx */
  w32((uint32_t)(0x123807dc), (ECX));
  /* 1236076b cmp dword ptr [0x123807c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360772 jne 0x1236077d */
  if (!C.zf) goto L_1236077d;
  /* 12360774 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360777 mov dword ptr [0x123807c4], edx */
  w32((uint32_t)(0x123807c4), (EDX));
L_1236077d:;
  /* 1236077d jmp 0x1236079e */
  goto L_1236079e;
L_1236077f:;
  /* 1236077f mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 12360784 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12360787 mov dword ptr [0x123807dc], eax */
  w32((uint32_t)(0x123807dc), (EAX));
  /* 1236078c cmp dword ptr [0x123807c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360793 jne 0x1236079e */
  if (!C.zf) goto L_1236079e;
  /* 12360795 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360798 mov dword ptr [0x123807c4], ecx */
  w32((uint32_t)(0x123807c4), (ECX));
L_1236079e:;
  /* 1236079e jmp 0x12360801 */
  goto L_12360801;
L_123607a0:;
  /* 123607a0 cmp dword ptr [0x123807d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123607a7 jne 0x12360801 */
  if (!C.zf) goto L_12360801;
  /* 123607a9 cmp dword ptr [0x123807cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123607b0 je 0x12360801 */
  if (C.zf) goto L_12360801;
  /* 123607b2 mov edx, dword ptr [0x123807cc] */
  EDX = (r32((uint32_t)(0x123807cc)));
  /* 123607b8 push edx */
  push32((uint32_t)(EDX));
  /* 123607b9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123607bc push eax */
  push32((uint32_t)(EAX));
  /* 123607bd mov ecx, dword ptr [0x123807d4] */
  ECX = (r32((uint32_t)(0x123807d4)));
  /* 123607c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123607c4 call 0x12362b60 */
  push32(0x123607c9u); f_12362b60();
  /* 123607c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123607cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123607ce jne 0x12360801 */
  if (!C.zf) goto L_12360801;
  /* 123607d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123607d2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123607d5 push edx */
  push32((uint32_t)(EDX));
  /* 123607d6 call 0x12360be0 */
  push32(0x123607dbu); f_12360be0();
  /* 123607db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123607de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123607e0 je 0x12360801 */
  if (C.zf) goto L_12360801;
  /* 123607e2 mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 123607e7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 123607ea mov dword ptr [0x123807dc], eax */
  w32((uint32_t)(0x123807dc), (EAX));
  /* 123607ef cmp dword ptr [0x123807c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123607f6 jne 0x12360801 */
  if (!C.zf) goto L_12360801;
  /* 123607f8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123607fb mov dword ptr [0x123807c4], ecx */
  w32((uint32_t)(0x123807c4), (ECX));
L_12360801:;
  /* 12360801 mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 12360806 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12360809 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1236080b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236080d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1236080e:;
  /* 1236080e mov esp, ebp */
  ESP = (EBP);
  /* 12360810 pop ebp */
  EBP = (pop32());
  /* 12360811 ret 4 */
  ESPCHK(0x123604f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010820 @ 0x12360820 (116 bytes, 33 insns) */
void f_12360820(void) {
  FTRACE(0x12360820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360820 push ebp */
  push32((uint32_t)(EBP));
  /* 12360821 mov ebp, esp */
  EBP = (ESP);
  /* 12360823 push ecx */
  push32((uint32_t)(ECX));
  /* 12360824 mov eax, dword ptr [0x123807d4] */
  EAX = (r32((uint32_t)(0x123807d4)));
  /* 12360829 push eax */
  push32((uint32_t)(EAX));
  /* 1236082a call 0x123571f0 */
  push32(0x1236082fu); f_123571f0();
  /* 1236082f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360832 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12360834 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360837 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1236083a mov dword ptr [0x123807d0], ecx */
  w32((uint32_t)(0x123807d0), (ECX));
  /* 12360840 cmp dword ptr [0x123807d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360847 je 0x12360852 */
  if (C.zf) goto L_12360852;
  /* 12360849 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12360850 jmp 0x12360864 */
  goto L_12360864;
L_12360852:;
  /* 12360852 mov edx, dword ptr [0x123807d4] */
  EDX = (r32((uint32_t)(0x123807d4)));
  /* 12360858 push edx */
  push32((uint32_t)(EDX));
  /* 12360859 call 0x12360ed0 */
  push32(0x1236085eu); f_12360ed0();
  /* 1236085e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360861 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12360864:;
  /* 12360864 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12360867 mov dword ptr [0x123807cc], eax */
  w32((uint32_t)(0x123807cc), (EAX));
  /* 1236086c push 1 */
  push32((uint32_t)(0x1u));
  /* 1236086e push 0x123608a0 */
  push32((uint32_t)(0x123608a0u));
  /* 12360873 call dword ptr [0x1238327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238327c))), 0x12360879u);
  /* 12360879 mov ecx, dword ptr [0x123807dc] */
  ECX = (r32((uint32_t)(0x123807dc)));
  /* 1236087f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12360882 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12360884 jne 0x12360890 */
  if (!C.zf) goto L_12360890;
  /* 12360886 mov dword ptr [0x123807dc], 0 */
  w32((uint32_t)(0x123807dc), (0x0u));
L_12360890:;
  /* 12360890 mov esp, ebp */
  ESP = (EBP);
  /* 12360892 pop ebp */
  EBP = (pop32());
  /* 12360893 ret  */
  ESPCHK(0x12360820u, _esp0);
  ESP += 4; return;
}

/* FUN_100108a0 @ 0x123608a0 (287 bytes, 86 insns) */
void f_123608a0(void) {
  FTRACE(0x123608a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123608a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123608a1 mov ebp, esp */
  EBP = (ESP);
  /* 123608a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123608a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123608a9 push eax */
  push32((uint32_t)(EAX));
  /* 123608aa call 0x12360e50 */
  push32(0x123608afu); f_12360e50();
  /* 123608af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123608b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 123608b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123608b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123608ba push ecx */
  push32((uint32_t)(ECX));
  /* 123608bb mov edx, dword ptr [0x123807d0] */
  EDX = (r32((uint32_t)(0x123807d0)));
  /* 123608c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123608c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123608c5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 123608cb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123608d1 push edx */
  push32((uint32_t)(EDX));
  /* 123608d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123608d5 push eax */
  push32((uint32_t)(EAX));
  /* 123608d6 call dword ptr [0x123807e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123807e4))), 0x123608dcu);
  /* 123608dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123608de jne 0x123608f4 */
  if (!C.zf) goto L_123608f4;
  /* 123608e0 mov dword ptr [0x123807dc], 0 */
  w32((uint32_t)(0x123807dc), (0x0u));
  /* 123608ea mov eax, 1 */
  EAX = (0x1u);
  /* 123608ef jmp 0x123609b9 */
  goto L_123609b9;
L_123608f4:;
  /* 123608f4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123608f7 push ecx */
  push32((uint32_t)(ECX));
  /* 123608f8 mov edx, dword ptr [0x123807d4] */
  EDX = (r32((uint32_t)(0x123807d4)));
  /* 123608fe push edx */
  push32((uint32_t)(EDX));
  /* 123608ff call 0x12362a90 */
  push32(0x12360904u); f_12362a90();
  /* 12360904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360909 jne 0x12360949 */
  if (!C.zf) goto L_12360949;
  /* 1236090b cmp dword ptr [0x123807d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360912 jne 0x12360926 */
  if (!C.zf) goto L_12360926;
  /* 12360914 push 1 */
  push32((uint32_t)(0x1u));
  /* 12360916 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360919 push eax */
  push32((uint32_t)(EAX));
  /* 1236091a call 0x12360be0 */
  push32(0x1236091fu); f_12360be0();
  /* 1236091f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360924 je 0x12360947 */
  if (C.zf) goto L_12360947;
L_12360926:;
  /* 12360926 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360929 mov dword ptr [0x123807e0], ecx */
  w32((uint32_t)(0x123807e0), (ECX));
  /* 1236092f mov edx, dword ptr [0x123807e0] */
  EDX = (r32((uint32_t)(0x123807e0)));
  /* 12360935 mov dword ptr [0x123807c4], edx */
  w32((uint32_t)(0x123807c4), (EDX));
  /* 1236093b mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 12360940 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12360942 mov dword ptr [0x123807dc], eax */
  w32((uint32_t)(0x123807dc), (EAX));
L_12360947:;
  /* 12360947 jmp 0x123609ac */
  goto L_123609ac;
L_12360949:;
  /* 12360949 cmp dword ptr [0x123807d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360950 jne 0x123609ac */
  if (!C.zf) goto L_123609ac;
  /* 12360952 cmp dword ptr [0x123807cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360959 je 0x123609ac */
  if (C.zf) goto L_123609ac;
  /* 1236095b mov ecx, dword ptr [0x123807cc] */
  ECX = (r32((uint32_t)(0x123807cc)));
  /* 12360961 push ecx */
  push32((uint32_t)(ECX));
  /* 12360962 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12360965 push edx */
  push32((uint32_t)(EDX));
  /* 12360966 mov eax, dword ptr [0x123807d4] */
  EAX = (r32((uint32_t)(0x123807d4)));
  /* 1236096b push eax */
  push32((uint32_t)(EAX));
  /* 1236096c call 0x12362b60 */
  push32(0x12360971u); f_12362b60();
  /* 12360971 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360974 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360976 jne 0x123609ac */
  if (!C.zf) goto L_123609ac;
  /* 12360978 push 0 */
  push32((uint32_t)(0x0u));
  /* 1236097a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1236097d push ecx */
  push32((uint32_t)(ECX));
  /* 1236097e call 0x12360be0 */
  push32(0x12360983u); f_12360be0();
  /* 12360983 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360988 je 0x123609ac */
  if (C.zf) goto L_123609ac;
  /* 1236098a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1236098d mov dword ptr [0x123807e0], edx */
  w32((uint32_t)(0x123807e0), (EDX));
  /* 12360993 mov eax, dword ptr [0x123807e0] */
  EAX = (r32((uint32_t)(0x123807e0)));
  /* 12360998 mov dword ptr [0x123807c4], eax */
  w32((uint32_t)(0x123807c4), (EAX));
  /* 1236099d mov ecx, dword ptr [0x123807dc] */
  ECX = (r32((uint32_t)(0x123807dc)));
  /* 123609a3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123609a6 mov dword ptr [0x123807dc], ecx */
  w32((uint32_t)(0x123807dc), (ECX));
L_123609ac:;
  /* 123609ac mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 123609b1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123609b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123609b6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123609b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_123609b9:;
  /* 123609b9 mov esp, ebp */
  ESP = (EBP);
  /* 123609bb pop ebp */
  EBP = (pop32());
  /* 123609bc ret 4 */
  ESPCHK(0x123608a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100109c0 @ 0x123609c0 (69 bytes, 20 insns) */
void f_123609c0(void) {
  FTRACE(0x123609c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123609c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123609c1 mov ebp, esp */
  EBP = (ESP);
  /* 123609c3 mov eax, dword ptr [0x123807d8] */
  EAX = (r32((uint32_t)(0x123807d8)));
  /* 123609c8 push eax */
  push32((uint32_t)(EAX));
  /* 123609c9 call 0x123571f0 */
  push32(0x123609ceu); f_123571f0();
  /* 123609ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123609d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123609d3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123609d6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 123609d9 mov dword ptr [0x123807c8], ecx */
  w32((uint32_t)(0x123807c8), (ECX));
  /* 123609df push 1 */
  push32((uint32_t)(0x1u));
  /* 123609e1 push 0x12360a10 */
  push32((uint32_t)(0x12360a10u));
  /* 123609e6 call dword ptr [0x1238327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238327c))), 0x123609ecu);
  /* 123609ec mov edx, dword ptr [0x123807dc] */
  EDX = (r32((uint32_t)(0x123807dc)));
  /* 123609f2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123609f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123609f7 jne 0x12360a03 */
  if (!C.zf) goto L_12360a03;
  /* 123609f9 mov dword ptr [0x123807dc], 0 */
  w32((uint32_t)(0x123807dc), (0x0u));
L_12360a03:;
  /* 12360a03 pop ebp */
  EBP = (pop32());
  /* 12360a04 ret  */
  ESPCHK(0x123609c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a10 @ 0x12360a10 (172 bytes, 54 insns) */
void f_12360a10(void) {
  FTRACE(0x12360a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12360a11 mov ebp, esp */
  EBP = (ESP);
  /* 12360a13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360a19 push eax */
  push32((uint32_t)(EAX));
  /* 12360a1a call 0x12360e50 */
  push32(0x12360a1fu); f_12360e50();
  /* 12360a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360a22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12360a25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12360a27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12360a2a push ecx */
  push32((uint32_t)(ECX));
  /* 12360a2b mov edx, dword ptr [0x123807c8] */
  EDX = (r32((uint32_t)(0x123807c8)));
  /* 12360a31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12360a33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360a35 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12360a3b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360a41 push edx */
  push32((uint32_t)(EDX));
  /* 12360a42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360a45 push eax */
  push32((uint32_t)(EAX));
  /* 12360a46 call dword ptr [0x123807e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123807e4))), 0x12360a4cu);
  /* 12360a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360a4e jne 0x12360a61 */
  if (!C.zf) goto L_12360a61;
  /* 12360a50 mov dword ptr [0x123807dc], 0 */
  w32((uint32_t)(0x123807dc), (0x0u));
  /* 12360a5a mov eax, 1 */
  EAX = (0x1u);
  /* 12360a5f jmp 0x12360ab6 */
  goto L_12360ab6;
L_12360a61:;
  /* 12360a61 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12360a64 push ecx */
  push32((uint32_t)(ECX));
  /* 12360a65 mov edx, dword ptr [0x123807d8] */
  EDX = (r32((uint32_t)(0x123807d8)));
  /* 12360a6b push edx */
  push32((uint32_t)(EDX));
  /* 12360a6c call 0x12362a90 */
  push32(0x12360a71u); f_12362a90();
  /* 12360a71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360a76 jne 0x12360aa9 */
  if (!C.zf) goto L_12360aa9;
  /* 12360a78 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360a7b push eax */
  push32((uint32_t)(EAX));
  /* 12360a7c call 0x12360b90 */
  push32(0x12360a81u); f_12360b90();
  /* 12360a81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360a84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360a86 je 0x12360aa9 */
  if (C.zf) goto L_12360aa9;
  /* 12360a88 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12360a8b mov dword ptr [0x123807e0], ecx */
  w32((uint32_t)(0x123807e0), (ECX));
  /* 12360a91 mov edx, dword ptr [0x123807e0] */
  EDX = (r32((uint32_t)(0x123807e0)));
  /* 12360a97 mov dword ptr [0x123807c4], edx */
  w32((uint32_t)(0x123807c4), (EDX));
  /* 12360a9d mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 12360aa2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12360aa4 mov dword ptr [0x123807dc], eax */
  w32((uint32_t)(0x123807dc), (EAX));
L_12360aa9:;
  /* 12360aa9 mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 12360aae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12360ab1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12360ab3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360ab5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12360ab6:;
  /* 12360ab6 mov esp, ebp */
  ESP = (EBP);
  /* 12360ab8 pop ebp */
  EBP = (pop32());
  /* 12360ab9 ret 4 */
  ESPCHK(0x12360a10u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ac0 @ 0x12360ac0 (43 bytes, 11 insns) */
void f_12360ac0(void) {
  FTRACE(0x12360ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12360ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12360ac3 mov eax, dword ptr [0x123807dc] */
  EAX = (r32((uint32_t)(0x123807dc)));
  /* 12360ac8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12360acd mov dword ptr [0x123807dc], eax */
  w32((uint32_t)(0x123807dc), (EAX));
  /* 12360ad2 call dword ptr [0x12383278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383278))), 0x12360ad8u);
  /* 12360ad8 mov dword ptr [0x123807e0], eax */
  w32((uint32_t)(0x123807e0), (EAX));
  /* 12360add mov ecx, dword ptr [0x123807e0] */
  ECX = (r32((uint32_t)(0x123807e0)));
  /* 12360ae3 mov dword ptr [0x123807c4], ecx */
  w32((uint32_t)(0x123807c4), (ECX));
  /* 12360ae9 pop ebp */
  EBP = (pop32());
  /* 12360aea ret  */
  ESPCHK(0x12360ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010af0 @ 0x12360af0 (155 bytes, 57 insns) */
void f_12360af0(void) {
  FTRACE(0x12360af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12360af1 mov ebp, esp */
  EBP = (ESP);
  /* 12360af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360af6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360afa je 0x12360b1b */
  if (C.zf) goto L_12360b1b;
  /* 12360afc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360aff movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12360b02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12360b04 je 0x12360b1b */
  if (C.zf) goto L_12360b1b;
  /* 12360b06 push 0x1237c84c */
  push32((uint32_t)(0x1237c84cu));
  /* 12360b0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360b0e push edx */
  push32((uint32_t)(EDX));
  /* 12360b0f call 0x12360050 */
  push32(0x12360b14u); f_12360050();
  /* 12360b14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360b17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360b19 jne 0x12360b43 */
  if (!C.zf) goto L_12360b43;
L_12360b1b:;
  /* 12360b1b push 8 */
  push32((uint32_t)(0x8u));
  /* 12360b1d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12360b20 push eax */
  push32((uint32_t)(EAX));
  /* 12360b21 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12360b26 mov ecx, dword ptr [0x123807e0] */
  ECX = (r32((uint32_t)(0x123807e0)));
  /* 12360b2c push ecx */
  push32((uint32_t)(ECX));
  /* 12360b2d call dword ptr [0x123807e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123807e4))), 0x12360b33u);
  /* 12360b33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360b35 jne 0x12360b3b */
  if (!C.zf) goto L_12360b3b;
  /* 12360b37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12360b39 jmp 0x12360b87 */
  goto L_12360b87;
L_12360b3b:;
  /* 12360b3b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12360b3e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12360b41 jmp 0x12360b7b */
  goto L_12360b7b;
L_12360b43:;
  /* 12360b43 push 0x1237c848 */
  push32((uint32_t)(0x1237c848u));
  /* 12360b48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360b4b push eax */
  push32((uint32_t)(EAX));
  /* 12360b4c call 0x12360050 */
  push32(0x12360b51u); f_12360050();
  /* 12360b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360b56 jne 0x12360b7b */
  if (!C.zf) goto L_12360b7b;
  /* 12360b58 push 8 */
  push32((uint32_t)(0x8u));
  /* 12360b5a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12360b5d push ecx */
  push32((uint32_t)(ECX));
  /* 12360b5e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12360b60 mov edx, dword ptr [0x123807e0] */
  EDX = (r32((uint32_t)(0x123807e0)));
  /* 12360b66 push edx */
  push32((uint32_t)(EDX));
  /* 12360b67 call dword ptr [0x123807e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123807e4))), 0x12360b6du);
  /* 12360b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360b6f jne 0x12360b75 */
  if (!C.zf) goto L_12360b75;
  /* 12360b71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12360b73 jmp 0x12360b87 */
  goto L_12360b87;
L_12360b75:;
  /* 12360b75 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12360b78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12360b7b:;
  /* 12360b7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360b7e push ecx */
  push32((uint32_t)(ECX));
  /* 12360b7f call 0x12362c70 */
  push32(0x12360b84u); f_12362c70();
  /* 12360b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12360b87:;
  /* 12360b87 mov esp, ebp */
  ESP = (EBP);
  /* 12360b89 pop ebp */
  EBP = (pop32());
  /* 12360b8a ret  */
  ESPCHK(0x12360af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b90 @ 0x12360b90 (79 bytes, 26 insns) */
void f_12360b90(void) {
  FTRACE(0x12360b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12360b91 mov ebp, esp */
  EBP = (ESP);
  /* 12360b93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360b96 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12360b9a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12360b9e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12360ba5 jmp 0x12360bb0 */
  goto L_12360bb0;
L_12360ba7:;
  /* 12360ba7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12360baa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360bad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12360bb0:;
  /* 12360bb0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360bb4 jae 0x12360bd6 */
  if (!C.cf) goto L_12360bd6;
  /* 12360bb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12360bb9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12360bbf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12360bc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12360bc4 mov cx, word ptr [eax*2 + 0x1237f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1237f9c4)));
  /* 12360bcc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360bce jne 0x12360bd4 */
  if (!C.zf) goto L_12360bd4;
  /* 12360bd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12360bd2 jmp 0x12360bdb */
  goto L_12360bdb;
L_12360bd4:;
  /* 12360bd4 jmp 0x12360ba7 */
  goto L_12360ba7;
L_12360bd6:;
  /* 12360bd6 mov eax, 1 */
  EAX = (0x1u);
L_12360bdb:;
  /* 12360bdb mov esp, ebp */
  ESP = (EBP);
  /* 12360bdd pop ebp */
  EBP = (pop32());
  /* 12360bde ret  */
  ESPCHK(0x12360b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010be0 @ 0x12360be0 (135 bytes, 48 insns) */
void f_12360be0(void) {
  FTRACE(0x12360be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12360be1 mov ebp, esp */
  EBP = (ESP);
  /* 12360be3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360be6 push esi */
  push32((uint32_t)(ESI));
  /* 12360be7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360bea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12360bef and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12360bf4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12360bf9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12360bfc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12360c01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12360c04 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12360c06 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12360c09 push ecx */
  push32((uint32_t)(ECX));
  /* 12360c0a push 1 */
  push32((uint32_t)(0x1u));
  /* 12360c0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12360c0f push edx */
  push32((uint32_t)(EDX));
  /* 12360c10 call dword ptr [0x123807e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123807e4))), 0x12360c16u);
  /* 12360c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360c18 jne 0x12360c1e */
  if (!C.zf) goto L_12360c1e;
  /* 12360c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12360c1c jmp 0x12360c62 */
  goto L_12360c62;
L_12360c1e:;
  /* 12360c1e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12360c21 push eax */
  push32((uint32_t)(EAX));
  /* 12360c22 call 0x12360e50 */
  push32(0x12360c27u); f_12360e50();
  /* 12360c27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360c2a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360c2d je 0x12360c5d */
  if (C.zf) goto L_12360c5d;
  /* 12360c2f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360c33 je 0x12360c5d */
  if (C.zf) goto L_12360c5d;
  /* 12360c35 mov ecx, dword ptr [0x123807d4] */
  ECX = (r32((uint32_t)(0x123807d4)));
  /* 12360c3b push ecx */
  push32((uint32_t)(ECX));
  /* 12360c3c call 0x12360ed0 */
  push32(0x12360c41u); f_12360ed0();
  /* 12360c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360c44 mov esi, eax */
  ESI = (EAX);
  /* 12360c46 mov edx, dword ptr [0x123807d4] */
  EDX = (r32((uint32_t)(0x123807d4)));
  /* 12360c4c push edx */
  push32((uint32_t)(EDX));
  /* 12360c4d call 0x123571f0 */
  push32(0x12360c52u); f_123571f0();
  /* 12360c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360c55 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360c57 jne 0x12360c5d */
  if (!C.zf) goto L_12360c5d;
  /* 12360c59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12360c5b jmp 0x12360c62 */
  goto L_12360c62;
L_12360c5d:;
  /* 12360c5d mov eax, 1 */
  EAX = (0x1u);
L_12360c62:;
  /* 12360c62 pop esi */
  ESI = (pop32());
  /* 12360c63 mov esp, ebp */
  ESP = (EBP);
  /* 12360c65 pop ebp */
  EBP = (pop32());
  /* 12360c66 ret  */
  ESPCHK(0x12360be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c70 @ 0x12360c70 (77 bytes, 18 insns) */
void f_12360c70(void) {
  FTRACE(0x12360c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12360c71 mov ebp, esp */
  EBP = (ESP);
  /* 12360c73 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360c79 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12360c83 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12360c89 push eax */
  push32((uint32_t)(EAX));
  /* 12360c8a call dword ptr [0x12383274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383274))), 0x12360c90u);
  /* 12360c90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12360c92 je 0x12360ca9 */
  if (C.zf) goto L_12360ca9;
  /* 12360c94 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360c9b jne 0x12360ca9 */
  if (!C.zf) goto L_12360ca9;
  /* 12360c9d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12360ca7 jmp 0x12360cb3 */
  goto L_12360cb3;
L_12360ca9:;
  /* 12360ca9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12360cb3:;
  /* 12360cb3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12360cb9 mov esp, ebp */
  ESP = (EBP);
  /* 12360cbb pop ebp */
  EBP = (pop32());
  /* 12360cbc ret  */
  ESPCHK(0x12360c70u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12360cc0 (388 bytes, 118 insns) */
void f_12360cc0(void) {
  FTRACE(0x12360cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12360cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12360cc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360cc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12360ccd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12360cd4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12360cdb:;
  /* 12360cdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12360cde cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360ce1 jg 0x12360e28 */
  if ((!C.zf&&C.sf==C.of)) goto L_12360e28;
  /* 12360ce7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12360cea add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360ced cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12360cee sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360cf0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12360cf2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12360cf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360cf8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12360cfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360cfe cmp edx, dword ptr [ecx + 0x1237f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1237f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360d04 jne 0x12360dfe */
  if (!C.zf) goto L_12360dfe;
  /* 12360d0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12360d0d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12360d10 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360d14 ja 0x12360d37 */
  if ((!C.cf&&!C.zf)) goto L_12360d37;
  /* 12360d16 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360d1a je 0x12360da9 */
  if (C.zf) goto L_12360da9;
  /* 12360d20 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360d24 je 0x12360d54 */
  if (C.zf) goto L_12360d54;
  /* 12360d26 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360d2a je 0x12360d76 */
  if (C.zf) goto L_12360d76;
  /* 12360d2c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360d30 je 0x12360d98 */
  if (C.zf) goto L_12360d98;
  /* 12360d32 jmp 0x12360dc8 */
  goto L_12360dc8;
L_12360d37:;
  /* 12360d37 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360d3e je 0x12360d65 */
  if (C.zf) goto L_12360d65;
  /* 12360d40 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360d47 je 0x12360d87 */
  if (C.zf) goto L_12360d87;
  /* 12360d49 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360d50 je 0x12360dba */
  if (C.zf) goto L_12360dba;
  /* 12360d52 jmp 0x12360dc8 */
  goto L_12360dc8;
L_12360d54:;
  /* 12360d54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360d57 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12360d5a add ecx, 0x1237f524 */
  { uint32_t _a=(ECX),_b=(0x1237f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360d60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12360d63 jmp 0x12360dc8 */
  goto L_12360dc8;
L_12360d65:;
  /* 12360d65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360d68 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12360d6b mov eax, dword ptr [edx + 0x1237f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1237f52c)));
  /* 12360d71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12360d74 jmp 0x12360dc8 */
  goto L_12360dc8;
L_12360d76:;
  /* 12360d76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360d79 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12360d7c add ecx, 0x1237f530 */
  { uint32_t _a=(ECX),_b=(0x1237f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360d82 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12360d85 jmp 0x12360dc8 */
  goto L_12360dc8;
L_12360d87:;
  /* 12360d87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360d8a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12360d8d mov eax, dword ptr [edx + 0x1237f534] */
  EAX = (r32((uint32_t)(EDX + 0x1237f534)));
  /* 12360d93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12360d96 jmp 0x12360dc8 */
  goto L_12360dc8;
L_12360d98:;
  /* 12360d98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360d9b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12360d9e add ecx, 0x1237f538 */
  { uint32_t _a=(ECX),_b=(0x1237f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360da4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12360da7 jmp 0x12360dc8 */
  goto L_12360dc8;
L_12360da9:;
  /* 12360da9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360dac imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12360daf add edx, 0x1237f53c */
  { uint32_t _a=(EDX),_b=(0x1237f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360db5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12360db8 jmp 0x12360dc8 */
  goto L_12360dc8;
L_12360dba:;
  /* 12360dba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360dbd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12360dc0 add eax, 0x1237f544 */
  { uint32_t _a=(EAX),_b=(0x1237f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360dc5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12360dc8:;
  /* 12360dc8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360dcc je 0x12360dd4 */
  if (C.zf) goto L_12360dd4;
  /* 12360dce cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360dd2 jge 0x12360dd6 */
  if ((C.sf==C.of)) goto L_12360dd6;
L_12360dd4:;
  /* 12360dd4 jmp 0x12360e28 */
  goto L_12360e28;
L_12360dd6:;
  /* 12360dd6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12360dd9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360ddc push ecx */
  push32((uint32_t)(ECX));
  /* 12360ddd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12360de0 push edx */
  push32((uint32_t)(EDX));
  /* 12360de1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12360de4 push eax */
  push32((uint32_t)(EAX));
  /* 12360de5 call 0x12357be0 */
  push32(0x12360deau); f_12357be0();
  /* 12360dea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360ded mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12360df0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360df3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12360df7 mov eax, 1 */
  EAX = (0x1u);
  /* 12360dfc jmp 0x12360e3e */
  goto L_12360e3e;
L_12360dfe:;
  /* 12360dfe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360e01 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12360e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360e07 cmp eax, dword ptr [edx + 0x1237f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1237f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360e0d jae 0x12360e1a */
  if (!C.cf) goto L_12360e1a;
  /* 12360e0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360e12 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360e15 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12360e18 jmp 0x12360e23 */
  goto L_12360e23;
L_12360e1a:;
  /* 12360e1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12360e1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360e20 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12360e23:;
  /* 12360e23 jmp 0x12360cdb */
  goto L_12360cdb;
L_12360e28:;
  /* 12360e28 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12360e2b push eax */
  push32((uint32_t)(EAX));
  /* 12360e2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12360e2f push ecx */
  push32((uint32_t)(ECX));
  /* 12360e30 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12360e33 push edx */
  push32((uint32_t)(EDX));
  /* 12360e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360e37 push eax */
  push32((uint32_t)(EAX));
  /* 12360e38 call dword ptr [0x12383280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383280))), 0x12360e3eu);
L_12360e3e:;
  /* 12360e3e mov esp, ebp */
  ESP = (EBP);
  /* 12360e40 pop ebp */
  EBP = (pop32());
  /* 12360e41 ret 0x10 */
  ESPCHK(0x12360cc0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010e50 @ 0x12360e50 (118 bytes, 42 insns) */
void f_12360e50(void) {
  FTRACE(0x12360e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12360e51 mov ebp, esp */
  EBP = (ESP);
  /* 12360e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360e56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12360e5d:;
  /* 12360e5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360e60 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12360e62 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12360e65 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12360e69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360e6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360e6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12360e72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12360e74 je 0x12360ebf */
  if (C.zf) goto L_12360ebf;
  /* 12360e76 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12360e7a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360e7d jl 0x12360e92 */
  if ((C.sf!=C.of)) goto L_12360e92;
  /* 12360e7f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12360e83 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360e86 jg 0x12360e92 */
  if ((!C.zf&&C.sf==C.of)) goto L_12360e92;
  /* 12360e88 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12360e8b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12360e8d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12360e90 jmp 0x12360eac */
  goto L_12360eac;
L_12360e92:;
  /* 12360e92 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12360e96 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360e99 jl 0x12360eac */
  if ((C.sf!=C.of)) goto L_12360eac;
  /* 12360e9b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12360e9f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360ea2 jg 0x12360eac */
  if ((!C.zf&&C.sf==C.of)) goto L_12360eac;
  /* 12360ea4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12360ea7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12360ea9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12360eac:;
  /* 12360eac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12360eaf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12360eb2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12360eb6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12360eba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12360ebd jmp 0x12360e5d */
  goto L_12360e5d;
L_12360ebf:;
  /* 12360ebf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12360ec2 mov esp, ebp */
  ESP = (EBP);
  /* 12360ec4 pop ebp */
  EBP = (pop32());
  /* 12360ec5 ret  */
  ESPCHK(0x12360e50u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12360ed0 (101 bytes, 36 insns) */
void f_12360ed0(void) {
  FTRACE(0x12360ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12360ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12360ed3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12360ed6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12360edd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360ee0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12360ee2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12360ee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360ee8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360eeb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12360eee:;
  /* 12360eee movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12360ef2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360ef5 jl 0x12360f00 */
  if ((C.sf!=C.of)) goto L_12360f00;
  /* 12360ef7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12360efb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360efe jle 0x12360f12 */
  if ((C.zf||C.sf!=C.of)) goto L_12360f12;
L_12360f00:;
  /* 12360f00 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12360f04 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360f07 jl 0x12360f2e */
  if ((C.sf!=C.of)) goto L_12360f2e;
  /* 12360f09 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12360f0d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360f10 jg 0x12360f2e */
  if ((!C.zf&&C.sf==C.of)) goto L_12360f2e;
L_12360f12:;
  /* 12360f12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12360f15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360f18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12360f1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360f1e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12360f20 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12360f23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360f26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12360f29 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12360f2c jmp 0x12360eee */
  goto L_12360eee;
L_12360f2e:;
  /* 12360f2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12360f31 mov esp, ebp */
  ESP = (EBP);
  /* 12360f33 pop ebp */
  EBP = (pop32());
  /* 12360f34 ret  */
  ESPCHK(0x12360ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f40 @ 0x12360f40 (122 bytes, 39 insns) */
void f_12360f40(void) {
  FTRACE(0x12360f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12360f41 mov ebp, esp */
  EBP = (ESP);
  /* 12360f43 push ecx */
  push32((uint32_t)(ECX));
  /* 12360f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360f47 cmp eax, dword ptr [0x1238207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1238207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360f4d jae 0x12360f71 */
  if (!C.cf) goto L_12360f71;
  /* 12360f4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360f52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12360f55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360f58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12360f5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12360f5e mov eax, dword ptr [ecx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 12360f65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12360f6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12360f6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12360f6f jne 0x12360f8c */
  if (!C.zf) goto L_12360f8c;
L_12360f71:;
  /* 12360f71 call 0x1235c290 */
  push32(0x12360f76u); f_1235c290();
  /* 12360f76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12360f7c call 0x1235c2a0 */
  push32(0x12360f81u); f_1235c2a0();
  /* 12360f81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12360f87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12360f8a jmp 0x12360fb6 */
  goto L_12360fb6;
L_12360f8c:;
  /* 12360f8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360f8f push edx */
  push32((uint32_t)(EDX));
  /* 12360f90 call 0x1235dab0 */
  push32(0x12360f95u); f_1235dab0();
  /* 12360f95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360f98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360f9b push eax */
  push32((uint32_t)(EAX));
  /* 12360f9c call 0x12360fc0 */
  push32(0x12360fa1u); f_12360fc0();
  /* 12360fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360fa4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12360fa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360faa push ecx */
  push32((uint32_t)(ECX));
  /* 12360fab call 0x1235db40 */
  push32(0x12360fb0u); f_1235db40();
  /* 12360fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360fb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12360fb6:;
  /* 12360fb6 mov esp, ebp */
  ESP = (EBP);
  /* 12360fb8 pop ebp */
  EBP = (pop32());
  /* 12360fb9 ret  */
  ESPCHK(0x12360f40u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12360fc0 (170 bytes, 59 insns) */
void f_12360fc0(void) {
  FTRACE(0x12360fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12360fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12360fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12360fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12360fc4 push esi */
  push32((uint32_t)(ESI));
  /* 12360fc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360fc8 push eax */
  push32((uint32_t)(EAX));
  /* 12360fc9 call 0x1235d930 */
  push32(0x12360fceu); f_1235d930();
  /* 12360fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360fd1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360fd4 je 0x12361013 */
  if (C.zf) goto L_12361013;
  /* 12360fd6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360fda je 0x12360fe2 */
  if (C.zf) goto L_12360fe2;
  /* 12360fdc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360fe0 jne 0x12360ffc */
  if (!C.zf) goto L_12360ffc;
L_12360fe2:;
  /* 12360fe2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12360fe4 call 0x1235d930 */
  push32(0x12360fe9u); f_1235d930();
  /* 12360fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360fec mov esi, eax */
  ESI = (EAX);
  /* 12360fee push 2 */
  push32((uint32_t)(0x2u));
  /* 12360ff0 call 0x1235d930 */
  push32(0x12360ff5u); f_1235d930();
  /* 12360ff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12360ff8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12360ffa je 0x12361013 */
  if (C.zf) goto L_12361013;
L_12360ffc:;
  /* 12360ffc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12360fff push ecx */
  push32((uint32_t)(ECX));
  /* 12361000 call 0x1235d930 */
  push32(0x12361005u); f_1235d930();
  /* 12361005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361008 push eax */
  push32((uint32_t)(EAX));
  /* 12361009 call dword ptr [0x12383270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383270))), 0x1236100fu);
  /* 1236100f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12361011 je 0x1236101c */
  if (C.zf) goto L_1236101c;
L_12361013:;
  /* 12361013 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1236101a jmp 0x12361025 */
  goto L_12361025;
L_1236101c:;
  /* 1236101c call dword ptr [0x123832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832fc))), 0x12361022u);
  /* 12361022 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12361025:;
  /* 12361025 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361028 push edx */
  push32((uint32_t)(EDX));
  /* 12361029 call 0x1235d850 */
  push32(0x1236102eu); f_1235d850();
  /* 1236102e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361031 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361034 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12361037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236103a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1236103d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12361040 mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 12361047 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1236104c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361050 je 0x12361063 */
  if (C.zf) goto L_12361063;
  /* 12361052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12361055 push eax */
  push32((uint32_t)(EAX));
  /* 12361056 call 0x1235c1f0 */
  push32(0x1236105bu); f_1235c1f0();
  /* 1236105b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236105e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12361061 jmp 0x12361065 */
  goto L_12361065;
L_12361063:;
  /* 12361063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12361065:;
  /* 12361065 pop esi */
  ESI = (pop32());
  /* 12361066 mov esp, ebp */
  ESP = (EBP);
  /* 12361068 pop ebp */
  EBP = (pop32());
  /* 12361069 ret  */
  ESPCHK(0x12360fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011070 @ 0x12361070 (146 bytes, 52 insns) */
void f_12361070(void) {
  FTRACE(0x12361070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12361070 push ebp */
  push32((uint32_t)(EBP));
  /* 12361071 mov ebp, esp */
  EBP = (ESP);
  /* 12361073 push ebx */
  push32((uint32_t)(EBX));
  /* 12361074 push esi */
  push32((uint32_t)(ESI));
  /* 12361075 push edi */
  push32((uint32_t)(EDI));
L_12361076:;
  /* 12361076 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236107a jne 0x1236109a */
  if (!C.zf) goto L_1236109a;
  /* 1236107c push 0x1237c188 */
  push32((uint32_t)(0x1237c188u));
  /* 12361081 push 0 */
  push32((uint32_t)(0x0u));
  /* 12361083 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12361085 push 0x1237c850 */
  push32((uint32_t)(0x1237c850u));
  /* 1236108a push 2 */
  push32((uint32_t)(0x2u));
  /* 1236108c call 0x12353480 */
  push32(0x12361091u); f_12353480();
  /* 12361091 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361094 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361097 jne 0x1236109a */
  if (!C.zf) goto L_1236109a;
  /* 12361099 int3  */
  x86_unimpl("int3 @ 0x12361099");
L_1236109a:;
  /* 1236109a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236109c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1236109e jne 0x12361076 */
  if (!C.zf) goto L_12361076;
  /* 123610a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123610a3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123610a6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 123610ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123610ae je 0x123610fd */
  if (C.zf) goto L_123610fd;
  /* 123610b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123610b3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123610b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 123610b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123610bb je 0x123610fd */
  if (C.zf) goto L_123610fd;
  /* 123610bd push 2 */
  push32((uint32_t)(0x2u));
  /* 123610bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123610c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123610c5 push eax */
  push32((uint32_t)(EAX));
  /* 123610c6 call 0x12354e50 */
  push32(0x123610cbu); f_12354e50();
  /* 123610cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123610ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123610d1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123610d4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 123610da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123610dd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 123610e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123610e3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 123610e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123610ec mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 123610f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123610f6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_123610fd:;
  /* 123610fd pop edi */
  EDI = (pop32());
  /* 123610fe pop esi */
  ESI = (pop32());
  /* 123610ff pop ebx */
  EBX = (pop32());
  /* 12361100 pop ebp */
  EBP = (pop32());
  /* 12361101 ret  */
  ESPCHK(0x12361070u, _esp0);
  ESP += 4; return;
}

/* FUN_10011110 @ 0x12361110 (289 bytes, 97 insns) */
void f_12361110(void) {
  FTRACE(0x12361110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12361110 push ebp */
  push32((uint32_t)(EBP));
  /* 12361111 mov ebp, esp */
  EBP = (ESP);
  /* 12361113 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361116 push esi */
  push32((uint32_t)(ESI));
  /* 12361117 mov eax, dword ptr [0x1237fc98] */
  EAX = (r32((uint32_t)(0x1237fc98)));
  /* 1236111c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1236111f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12361126 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1236112d jmp 0x12361138 */
  goto L_12361138;
L_1236112f:;
  /* 1236112f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361132 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361135 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12361138:;
  /* 12361138 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236113c jae 0x12361171 */
  if (!C.cf) goto L_12361171;
  /* 1236113e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361141 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361144 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12361147 push ecx */
  push32((uint32_t)(ECX));
  /* 12361148 call 0x123571f0 */
  push32(0x1236114du); f_123571f0();
  /* 1236114d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361150 mov esi, eax */
  ESI = (EAX);
  /* 12361152 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361155 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361158 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1236115c push ecx */
  push32((uint32_t)(ECX));
  /* 1236115d call 0x123571f0 */
  push32(0x12361162u); f_123571f0();
  /* 12361162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361165 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361168 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1236116c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1236116f jmp 0x1236112f */
  goto L_1236112f;
L_12361171:;
  /* 12361171 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12361174 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361177 push eax */
  push32((uint32_t)(EAX));
  /* 12361178 call 0x123543a0 */
  push32(0x1236117du); f_123543a0();
  /* 1236117d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361180 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12361183 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361187 je 0x12361229 */
  if (C.zf) goto L_12361229;
  /* 1236118d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12361190 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12361193 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1236119a jmp 0x123611a5 */
  goto L_123611a5;
L_1236119c:;
  /* 1236119c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1236119f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123611a2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123611a5:;
  /* 123611a5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123611a9 jae 0x1236121a */
  if (!C.cf) goto L_1236121a;
  /* 123611ab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123611ae mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 123611b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123611b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123611b7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123611ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123611bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123611c0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123611c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123611c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123611c7 push edx */
  push32((uint32_t)(EDX));
  /* 123611c8 call 0x12357370 */
  push32(0x123611cdu); f_12357370();
  /* 123611cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123611d0 push eax */
  push32((uint32_t)(EAX));
  /* 123611d1 call 0x123571f0 */
  push32(0x123611d6u); f_123571f0();
  /* 123611d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123611d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123611dc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123611de mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123611e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123611e4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 123611e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123611ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123611ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123611f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123611f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123611f6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 123611fa push eax */
  push32((uint32_t)(EAX));
  /* 123611fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123611fe push ecx */
  push32((uint32_t)(ECX));
  /* 123611ff call 0x12357370 */
  push32(0x12361204u); f_12357370();
  /* 12361204 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361207 push eax */
  push32((uint32_t)(EAX));
  /* 12361208 call 0x123571f0 */
  push32(0x1236120du); f_123571f0();
  /* 1236120d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361210 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361213 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361215 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12361218 jmp 0x1236119c */
  goto L_1236119c;
L_1236121a:;
  /* 1236121a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1236121d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12361220 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361223 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361226 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12361229:;
  /* 12361229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236122c pop esi */
  ESI = (pop32());
  /* 1236122d mov esp, ebp */
  ESP = (EBP);
  /* 1236122f pop ebp */
  EBP = (pop32());
  /* 12361230 ret  */
  ESPCHK(0x12361110u, _esp0);
  ESP += 4; return;
}

/* FUN_10011240 @ 0x12361240 (291 bytes, 97 insns) */
void f_12361240(void) {
  FTRACE(0x12361240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12361240 push ebp */
  push32((uint32_t)(EBP));
  /* 12361241 mov ebp, esp */
  EBP = (ESP);
  /* 12361243 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361246 push esi */
  push32((uint32_t)(ESI));
  /* 12361247 mov eax, dword ptr [0x1237fc98] */
  EAX = (r32((uint32_t)(0x1237fc98)));
  /* 1236124c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1236124f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12361256 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1236125d jmp 0x12361268 */
  goto L_12361268;
L_1236125f:;
  /* 1236125f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361262 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361265 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12361268:;
  /* 12361268 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236126c jae 0x123612a2 */
  if (!C.cf) goto L_123612a2;
  /* 1236126e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361271 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361274 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12361278 push ecx */
  push32((uint32_t)(ECX));
  /* 12361279 call 0x123571f0 */
  push32(0x1236127eu); f_123571f0();
  /* 1236127e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361281 mov esi, eax */
  ESI = (EAX);
  /* 12361283 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361286 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361289 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1236128d push ecx */
  push32((uint32_t)(ECX));
  /* 1236128e call 0x123571f0 */
  push32(0x12361293u); f_123571f0();
  /* 12361293 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361296 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361299 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1236129d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123612a0 jmp 0x1236125f */
  goto L_1236125f;
L_123612a2:;
  /* 123612a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123612a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123612a8 push eax */
  push32((uint32_t)(EAX));
  /* 123612a9 call 0x123543a0 */
  push32(0x123612aeu); f_123543a0();
  /* 123612ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123612b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123612b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123612b8 je 0x1236135b */
  if (C.zf) goto L_1236135b;
  /* 123612be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123612c1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123612c4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123612cb jmp 0x123612d6 */
  goto L_123612d6;
L_123612cd:;
  /* 123612cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123612d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123612d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123612d6:;
  /* 123612d6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123612da jae 0x1236134c */
  if (!C.cf) goto L_1236134c;
  /* 123612dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123612df mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 123612e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123612e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123612e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123612eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123612ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123612f1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 123612f5 push ecx */
  push32((uint32_t)(ECX));
  /* 123612f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123612f9 push edx */
  push32((uint32_t)(EDX));
  /* 123612fa call 0x12357370 */
  push32(0x123612ffu); f_12357370();
  /* 123612ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361302 push eax */
  push32((uint32_t)(EAX));
  /* 12361303 call 0x123571f0 */
  push32(0x12361308u); f_123571f0();
  /* 12361308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236130b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1236130e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361310 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12361313 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361316 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12361319 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1236131c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236131f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12361322 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361325 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361328 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1236132c push eax */
  push32((uint32_t)(EAX));
  /* 1236132d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361330 push ecx */
  push32((uint32_t)(ECX));
  /* 12361331 call 0x12357370 */
  push32(0x12361336u); f_12357370();
  /* 12361336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361339 push eax */
  push32((uint32_t)(EAX));
  /* 1236133a call 0x123571f0 */
  push32(0x1236133fu); f_123571f0();
  /* 1236133f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361342 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361345 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361347 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1236134a jmp 0x123612cd */
  goto L_123612cd;
L_1236134c:;
  /* 1236134c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1236134f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12361352 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361355 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361358 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1236135b:;
  /* 1236135b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236135e pop esi */
  ESI = (pop32());
  /* 1236135f mov esp, ebp */
  ESP = (EBP);
  /* 12361361 pop ebp */
  EBP = (pop32());
  /* 12361362 ret  */
  ESPCHK(0x12361240u, _esp0);
  ESP += 4; return;
}

