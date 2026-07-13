#include "recomp.h"

/* FUN_10008560 @ 0x108f8560 (116 bytes, 34 insns) */
void f_108f8560(void) {
  FTRACE(0x108f8560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8560 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8561 mov ebp, esp */
  EBP = (ESP);
  /* 108f8563 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8564 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 108f856b push 9 */
  push32((uint32_t)(0x9u));
  /* 108f856d call 0x108f7d80 */
  push32(0x108f8572u); f_108f7d80();
  /* 108f8572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8575 call 0x108f9c70 */
  push32(0x108f857au); f_108f9c70();
  /* 108f857a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f857c jge 0x108f8585 */
  if ((C.sf==C.of)) goto L_108f8585;
  /* 108f857e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_108f8585:;
  /* 108f8585 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f8587 call 0x108f7e20 */
  push32(0x108f858cu); f_108f7e20();
  /* 108f858c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f858f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f8591 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f8593 mov eax, dword ptr [0x10921f6c] */
  EAX = (r32((uint32_t)(0x10921f6c)));
  /* 108f8598 push eax */
  push32((uint32_t)(EAX));
  /* 108f8599 call dword ptr [0x109233c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233c8))), 0x108f859fu);
  /* 108f859f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f85a1 jne 0x108f85cd */
  if (!C.zf) goto L_108f85cd;
  /* 108f85a3 call dword ptr [0x109233ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233ac))), 0x108f85a9u);
  /* 108f85a9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f85ac jne 0x108f85c6 */
  if (!C.zf) goto L_108f85c6;
  /* 108f85ae call 0x108fc260 */
  push32(0x108f85b3u); f_108fc260();
  /* 108f85b3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 108f85b9 call 0x108fc250 */
  push32(0x108f85beu); f_108fc250();
  /* 108f85be mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 108f85c4 jmp 0x108f85cd */
  goto L_108f85cd;
L_108f85c6:;
  /* 108f85c6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_108f85cd:;
  /* 108f85cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f85d0 mov esp, ebp */
  ESP = (EBP);
  /* 108f85d2 pop ebp */
  EBP = (pop32());
  /* 108f85d3 ret  */
  ESPCHK(0x108f8560u, _esp0);
  ESP += 4; return;
}

/* FUN_100085e0 @ 0x108f85e0 (10 bytes, 5 insns) */
void f_108f85e0(void) {
  FTRACE(0x108f85e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f85e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f85e1 mov ebp, esp */
  EBP = (ESP);
  /* 108f85e3 call 0x108f8560 */
  push32(0x108f85e8u); f_108f8560();
  /* 108f85e8 pop ebp */
  EBP = (pop32());
  /* 108f85e9 ret  */
  ESPCHK(0x108f85e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085f0 @ 0x108f85f0 (10 bytes, 5 insns) */
void f_108f85f0(void) {
  FTRACE(0x108f85f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f85f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f85f1 mov ebp, esp */
  EBP = (ESP);
  /* 108f85f3 mov eax, dword ptr [0x1091ec94] */
  EAX = (r32((uint32_t)(0x1091ec94)));
  /* 108f85f8 pop ebp */
  EBP = (pop32());
  /* 108f85f9 ret  */
  ESPCHK(0x108f85f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008600 @ 0x108f8600 (31 bytes, 11 insns) */
void f_108f8600(void) {
  FTRACE(0x108f8600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8600 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8601 mov ebp, esp */
  EBP = (ESP);
  /* 108f8603 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f860a jbe 0x108f8610 */
  if ((C.cf||C.zf)) goto L_108f8610;
  /* 108f860c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f860e jmp 0x108f861d */
  goto L_108f861d;
L_108f8610:;
  /* 108f8610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8613 mov dword ptr [0x1091ec94], eax */
  w32((uint32_t)(0x1091ec94), (EAX));
  /* 108f8618 mov eax, 1 */
  EAX = (0x1u);
L_108f861d:;
  /* 108f861d pop ebp */
  EBP = (pop32());
  /* 108f861e ret  */
  ESPCHK(0x108f8600u, _esp0);
  ESP += 4; return;
}

/* FUN_10008620 @ 0x108f8620 (89 bytes, 20 insns) */
void f_108f8620(void) {
  FTRACE(0x108f8620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8620 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8621 mov ebp, esp */
  EBP = (ESP);
  /* 108f8623 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 108f8628 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f862a mov eax, dword ptr [0x10921f6c] */
  EAX = (r32((uint32_t)(0x10921f6c)));
  /* 108f862f push eax */
  push32((uint32_t)(EAX));
  /* 108f8630 call dword ptr [0x10923328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923328))), 0x108f8636u);
  /* 108f8636 mov dword ptr [0x10921f68], eax */
  w32((uint32_t)(0x10921f68), (EAX));
  /* 108f863b cmp dword ptr [0x10921f68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10921f68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8642 jne 0x108f8648 */
  if (!C.zf) goto L_108f8648;
  /* 108f8644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f8646 jmp 0x108f8677 */
  goto L_108f8677;
L_108f8648:;
  /* 108f8648 mov ecx, dword ptr [0x10921f68] */
  ECX = (r32((uint32_t)(0x10921f68)));
  /* 108f864e mov dword ptr [0x10921f5c], ecx */
  w32((uint32_t)(0x10921f5c), (ECX));
  /* 108f8654 mov dword ptr [0x10921f60], 0 */
  w32((uint32_t)(0x10921f60), (0x0u));
  /* 108f865e mov dword ptr [0x10921f64], 0 */
  w32((uint32_t)(0x10921f64), (0x0u));
  /* 108f8668 mov dword ptr [0x10921f48], 0x10 */
  w32((uint32_t)(0x10921f48), (0x10u));
  /* 108f8672 mov eax, 1 */
  EAX = (0x1u);
L_108f8677:;
  /* 108f8677 pop ebp */
  EBP = (pop32());
  /* 108f8678 ret  */
  ESPCHK(0x108f8620u, _esp0);
  ESP += 4; return;
}

/* FUN_10008680 @ 0x108f8680 (85 bytes, 29 insns) */
void f_108f8680(void) {
  FTRACE(0x108f8680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8680 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8681 mov ebp, esp */
  EBP = (ESP);
  /* 108f8683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8686 mov eax, dword ptr [0x10921f64] */
  EAX = (r32((uint32_t)(0x10921f64)));
  /* 108f868b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f868e mov ecx, dword ptr [0x10921f68] */
  ECX = (r32((uint32_t)(0x10921f68)));
  /* 108f8694 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8696 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108f8699 mov edx, dword ptr [0x10921f68] */
  EDX = (r32((uint32_t)(0x10921f68)));
  /* 108f869f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108f86a2:;
  /* 108f86a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f86a5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f86a8 jae 0x108f86cf */
  if (!C.cf) goto L_108f86cf;
  /* 108f86aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f86ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f86b0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f86b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f86b6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f86bd jae 0x108f86c4 */
  if (!C.cf) goto L_108f86c4;
  /* 108f86bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f86c2 jmp 0x108f86d1 */
  goto L_108f86d1;
L_108f86c4:;
  /* 108f86c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f86c7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f86ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f86cd jmp 0x108f86a2 */
  goto L_108f86a2;
L_108f86cf:;
  /* 108f86cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108f86d1:;
  /* 108f86d1 mov esp, ebp */
  ESP = (EBP);
  /* 108f86d3 pop ebp */
  EBP = (pop32());
  /* 108f86d4 ret  */
  ESPCHK(0x108f8680u, _esp0);
  ESP += 4; return;
}

/* FUN_100086e0 @ 0x108f86e0 (95 bytes, 33 insns) */
void f_108f86e0(void) {
  FTRACE(0x108f86e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f86e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f86e1 mov ebp, esp */
  EBP = (ESP);
  /* 108f86e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f86e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f86e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f86ec sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f86ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108f86f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f86f5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 108f86f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f86fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f8700 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8703 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f8705 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8708 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108f870b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108f870d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f870f jne 0x108f8731 */
  if (!C.zf) goto L_108f8731;
  /* 108f8711 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f8714 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 108f8717 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f8719 jne 0x108f8731 */
  if (!C.zf) goto L_108f8731;
  /* 108f871b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f871e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f8724 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f8726 je 0x108f8731 */
  if (C.zf) goto L_108f8731;
  /* 108f8728 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 108f872f jmp 0x108f8738 */
  goto L_108f8738;
L_108f8731:;
  /* 108f8731 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_108f8738:;
  /* 108f8738 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f873b mov esp, ebp */
  ESP = (EBP);
  /* 108f873d pop ebp */
  EBP = (pop32());
  /* 108f873e ret  */
  ESPCHK(0x108f86e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008740 @ 0x108f8740 (1485 bytes, 453 insns) */
void f_108f8740(void) {
  FTRACE(0x108f8740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8740 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8741 mov ebp, esp */
  EBP = (ESP);
  /* 108f8743 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8749 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f874c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 108f874f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8752 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f8755 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8758 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108f875b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f875e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 108f8761 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f8764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8767 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f876d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8770 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 108f8777 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108f877a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f877d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8780 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108f8783 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8786 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f8788 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f878b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 108f878e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8791 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8794 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 108f8797 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f879a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f879c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108f879f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f87a2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 108f87a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f87a8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f87ab and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108f87ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f87b0 jne 0x108f88d8 */
  if (!C.zf) goto L_108f88d8;
  /* 108f87b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f87b9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108f87bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f87bf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108f87c2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f87c6 jbe 0x108f87cf */
  if ((C.cf||C.zf)) goto L_108f87cf;
  /* 108f87c8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_108f87cf:;
  /* 108f87cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f87d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f87d5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f87d8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f87db jne 0x108f88b1 */
  if (!C.zf) goto L_108f88b1;
  /* 108f87e1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f87e5 jae 0x108f8846 */
  if (!C.cf) goto L_108f8846;
  /* 108f87e7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f87ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f87ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f87f1 not eax */
  EAX = (~(EAX));
  /* 108f87f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f87f6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f87f9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 108f87fd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108f87ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8802 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8805 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 108f8809 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f880c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f880f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108f8812 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f8815 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8818 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f881b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108f881e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8821 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8824 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108f8828 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f882a jne 0x108f8844 */
  if (!C.zf) goto L_108f8844;
  /* 108f882c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f8831 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f8834 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f8836 not eax */
  EAX = (~(EAX));
  /* 108f8838 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f883b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f883d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108f883f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8842 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108f8844:;
  /* 108f8844 jmp 0x108f88b1 */
  goto L_108f88b1;
L_108f8846:;
  /* 108f8846 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f8849 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f884c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f8851 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f8853 not edx */
  EDX = (~(EDX));
  /* 108f8855 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8858 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f885b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 108f8862 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f8864 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8867 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f886a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 108f8871 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8874 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8877 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f887a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f887d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8880 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8883 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 108f8886 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8889 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f888c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108f8890 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f8892 jne 0x108f88b1 */
  if (!C.zf) goto L_108f88b1;
  /* 108f8894 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f8897 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f889a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f889f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f88a1 not edx */
  EDX = (~(EDX));
  /* 108f88a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f88a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f88a9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f88ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f88ae mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_108f88b1:;
  /* 108f88b1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f88b4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108f88b7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f88ba mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f88bd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108f88c0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f88c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f88c6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f88c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108f88cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108f88cf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f88d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f88d5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_108f88d8:;
  /* 108f88d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f88db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 108f88de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f88e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108f88e4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f88e8 jbe 0x108f88f1 */
  if ((C.cf||C.zf)) goto L_108f88f1;
  /* 108f88ea mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_108f88f1:;
  /* 108f88f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f88f4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108f88f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f88f9 jne 0x108f8a55 */
  if (!C.zf) goto L_108f8a55;
  /* 108f88ff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8902 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8905 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 108f8908 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f890b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 108f890e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8911 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 108f8914 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8918 jbe 0x108f8921 */
  if ((C.cf||C.zf)) goto L_108f8921;
  /* 108f891a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_108f8921:;
  /* 108f8921 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8924 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8927 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 108f892a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f892d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108f8930 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8933 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 108f8936 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f893a jbe 0x108f8943 */
  if ((C.cf||C.zf)) goto L_108f8943;
  /* 108f893c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_108f8943:;
  /* 108f8943 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f8946 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8949 je 0x108f8a4f */
  if (C.zf) goto L_108f8a4f;
  /* 108f894f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8952 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8955 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f8958 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f895b jne 0x108f8a31 */
  if (!C.zf) goto L_108f8a31;
  /* 108f8961 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8965 jae 0x108f89c6 */
  if (!C.cf) goto L_108f89c6;
  /* 108f8967 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f896c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f896f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f8971 not edx */
  EDX = (~(EDX));
  /* 108f8973 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8976 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8979 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 108f897d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f897f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8982 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8985 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 108f8989 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f898c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f898f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f8992 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f8995 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8998 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f899b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 108f899e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f89a1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f89a4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108f89a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f89aa jne 0x108f89c4 */
  if (!C.zf) goto L_108f89c4;
  /* 108f89ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f89b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f89b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f89b6 not edx */
  EDX = (~(EDX));
  /* 108f89b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f89bb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f89bd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f89bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f89c2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108f89c4:;
  /* 108f89c4 jmp 0x108f8a31 */
  goto L_108f8a31;
L_108f89c6:;
  /* 108f89c6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f89c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f89cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f89d1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f89d3 not eax */
  EAX = (~(EAX));
  /* 108f89d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f89d8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f89db mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108f89e2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108f89e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f89e7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f89ea mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 108f89f1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f89f4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f89f7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108f89fa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f89fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8a00 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8a03 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108f8a06 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8a09 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8a0c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108f8a10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f8a12 jne 0x108f8a31 */
  if (!C.zf) goto L_108f8a31;
  /* 108f8a14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f8a17 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8a1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f8a1f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f8a21 not eax */
  EAX = (~(EAX));
  /* 108f8a23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8a26 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f8a29 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108f8a2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8a2e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108f8a31:;
  /* 108f8a31 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8a34 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108f8a37 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8a3a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f8a3d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108f8a40 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8a43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f8a46 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8a49 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108f8a4c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_108f8a4f:;
  /* 108f8a4f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8a52 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_108f8a55:;
  /* 108f8a55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f8a58 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108f8a5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f8a5d jne 0x108f8a6b */
  if (!C.zf) goto L_108f8a6b;
  /* 108f8a5f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f8a62 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8a65 je 0x108f8b7b */
  if (C.zf) goto L_108f8b7b;
L_108f8a6b:;
  /* 108f8a6b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f8a6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f8a71 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 108f8a74 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108f8a77 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8a7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f8a7d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f8a80 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108f8a83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8a86 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f8a89 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 108f8a8c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f8a8f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8a92 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 108f8a95 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8a98 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f8a9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8a9e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108f8aa1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8aa4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8aa7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f8aaa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8aad jne 0x108f8b7b */
  if (!C.zf) goto L_108f8b7b;
  /* 108f8ab3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8ab7 jae 0x108f8b14 */
  if (!C.cf) goto L_108f8b14;
  /* 108f8ab9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8abc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8abf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108f8ac3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8ac6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8ac9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f8acc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108f8acf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8ad2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8ad5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 108f8ad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f8ada jne 0x108f8af2 */
  if (!C.zf) goto L_108f8af2;
  /* 108f8adc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f8ae1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f8ae4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f8ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8ae9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f8aeb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f8aed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8af0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108f8af2:;
  /* 108f8af2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f8af7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f8afa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f8afc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8aff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8b02 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 108f8b06 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108f8b08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8b0b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8b0e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 108f8b12 jmp 0x108f8b7b */
  goto L_108f8b7b;
L_108f8b14:;
  /* 108f8b14 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8b17 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8b1a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108f8b1e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8b21 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8b24 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f8b27 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108f8b2a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8b2d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8b30 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 108f8b33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f8b35 jne 0x108f8b52 */
  if (!C.zf) goto L_108f8b52;
  /* 108f8b37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f8b3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8b3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f8b42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f8b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8b47 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f8b4a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f8b4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8b4f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_108f8b52:;
  /* 108f8b52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f8b55 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8b58 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f8b5d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f8b5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8b62 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8b65 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108f8b6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108f8b6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8b71 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108f8b74 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_108f8b7b:;
  /* 108f8b7b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8b7e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8b81 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108f8b83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8b86 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8b89 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8b8c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 108f8b8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f8b92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f8b94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f8b9a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108f8b9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f8b9f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8ba2 jne 0x108f8d09 */
  if (!C.zf) goto L_108f8d09;
  /* 108f8ba8 cmp dword ptr [0x10921f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10921f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8baf je 0x108f8cf8 */
  if (C.zf) goto L_108f8cf8;
  /* 108f8bb5 mov eax, dword ptr [0x10921f58] */
  EAX = (r32((uint32_t)(0x10921f58)));
  /* 108f8bba shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 108f8bbd mov ecx, dword ptr [0x10921f60] */
  ECX = (r32((uint32_t)(0x10921f60)));
  /* 108f8bc3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108f8bc6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8bc8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108f8bcb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 108f8bd0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108f8bd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8bd8 push eax */
  push32((uint32_t)(EAX));
  /* 108f8bd9 call dword ptr [0x10923344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923344))), 0x108f8bdfu);
  /* 108f8bdf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f8be4 mov ecx, dword ptr [0x10921f58] */
  ECX = (r32((uint32_t)(0x10921f58)));
  /* 108f8bea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f8bec mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f8bf1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108f8bf4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f8bf6 mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f8bfc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108f8bff mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f8c04 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f8c07 mov edx, dword ptr [0x10921f58] */
  EDX = (r32((uint32_t)(0x10921f58)));
  /* 108f8c0d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 108f8c18 mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f8c1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f8c20 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 108f8c23 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f8c26 mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f8c2b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f8c2e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 108f8c31 mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f8c37 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f8c3a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 108f8c3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f8c40 jne 0x108f8c56 */
  if (!C.zf) goto L_108f8c56;
  /* 108f8c42 mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f8c48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f8c4b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 108f8c4d mov ecx, dword ptr [0x10921f60] */
  ECX = (r32((uint32_t)(0x10921f60)));
  /* 108f8c53 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_108f8c56:;
  /* 108f8c56 mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f8c5c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8c60 jne 0x108f8cf8 */
  if (!C.zf) goto L_108f8cf8;
  /* 108f8c66 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108f8c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f8c6d mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f8c72 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108f8c75 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8c76 call dword ptr [0x10923344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923344))), 0x108f8c7cu);
  /* 108f8c7c mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f8c82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f8c85 push eax */
  push32((uint32_t)(EAX));
  /* 108f8c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f8c88 mov ecx, dword ptr [0x10921f6c] */
  ECX = (r32((uint32_t)(0x10921f6c)));
  /* 108f8c8e push ecx */
  push32((uint32_t)(ECX));
  /* 108f8c8f call dword ptr [0x10923348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923348))), 0x108f8c95u);
  /* 108f8c95 mov edx, dword ptr [0x10921f64] */
  EDX = (r32((uint32_t)(0x10921f64)));
  /* 108f8c9b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f8c9e mov eax, dword ptr [0x10921f68] */
  EAX = (r32((uint32_t)(0x10921f68)));
  /* 108f8ca3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8ca5 mov ecx, dword ptr [0x10921f60] */
  ECX = (r32((uint32_t)(0x10921f60)));
  /* 108f8cab add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8cae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8cb0 push eax */
  push32((uint32_t)(EAX));
  /* 108f8cb1 mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f8cb7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8cba push edx */
  push32((uint32_t)(EDX));
  /* 108f8cbb mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f8cc0 push eax */
  push32((uint32_t)(EAX));
  /* 108f8cc1 call 0x108fc270 */
  push32(0x108f8cc6u); f_108fc270();
  /* 108f8cc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8cc9 mov ecx, dword ptr [0x10921f64] */
  ECX = (r32((uint32_t)(0x10921f64)));
  /* 108f8ccf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8cd2 mov dword ptr [0x10921f64], ecx */
  w32((uint32_t)(0x10921f64), (ECX));
  /* 108f8cd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8cdb cmp edx, dword ptr [0x10921f60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10921f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8ce1 jbe 0x108f8cec */
  if ((C.cf||C.zf)) goto L_108f8cec;
  /* 108f8ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8ce6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8ce9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108f8cec:;
  /* 108f8cec mov ecx, dword ptr [0x10921f68] */
  ECX = (r32((uint32_t)(0x10921f68)));
  /* 108f8cf2 mov dword ptr [0x10921f5c], ecx */
  w32((uint32_t)(0x10921f5c), (ECX));
L_108f8cf8:;
  /* 108f8cf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8cfb mov dword ptr [0x10921f60], edx */
  w32((uint32_t)(0x10921f60), (EDX));
  /* 108f8d01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8d04 mov dword ptr [0x10921f58], eax */
  w32((uint32_t)(0x10921f58), (EAX));
L_108f8d09:;
  /* 108f8d09 mov esp, ebp */
  ESP = (EBP);
  /* 108f8d0b pop ebp */
  EBP = (pop32());
  /* 108f8d0c ret  */
  ESPCHK(0x108f8740u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x108f8d10 (1334 bytes, 427 insns) */
void f_108f8d10(void) {
  FTRACE(0x108f8d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8d10 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8d11 mov ebp, esp */
  EBP = (ESP);
  /* 108f8d13 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8d16 push esi */
  push32((uint32_t)(ESI));
  /* 108f8d17 mov eax, dword ptr [0x10921f64] */
  EAX = (r32((uint32_t)(0x10921f64)));
  /* 108f8d1c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f8d1f mov ecx, dword ptr [0x10921f68] */
  ECX = (r32((uint32_t)(0x10921f68)));
  /* 108f8d25 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8d27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108f8d2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8d2d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8d30 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 108f8d33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 108f8d36 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f8d39 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 108f8d3c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8d3f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108f8d42 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8d46 jge 0x108f8d5c */
  if ((C.sf==C.of)) goto L_108f8d5c;
  /* 108f8d48 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f8d4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f8d4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f8d50 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108f8d53 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 108f8d5a jmp 0x108f8d71 */
  goto L_108f8d71;
L_108f8d5c:;
  /* 108f8d5c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108f8d63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f8d66 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8d69 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f8d6c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f8d6e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_108f8d71:;
  /* 108f8d71 mov ecx, dword ptr [0x10921f5c] */
  ECX = (r32((uint32_t)(0x10921f5c)));
  /* 108f8d77 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_108f8d7a:;
  /* 108f8d7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8d7d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8d80 jae 0x108f8da6 */
  if (!C.cf) goto L_108f8da6;
  /* 108f8d82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8d85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f8d88 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 108f8d8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8d8d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8d90 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 108f8d93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108f8d95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f8d97 je 0x108f8d9b */
  if (C.zf) goto L_108f8d9b;
  /* 108f8d99 jmp 0x108f8da6 */
  goto L_108f8da6;
L_108f8d9b:;
  /* 108f8d9b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8d9e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8da1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108f8da4 jmp 0x108f8d7a */
  goto L_108f8d7a;
L_108f8da6:;
  /* 108f8da6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8da9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8dac jne 0x108f8e8d */
  if (!C.zf) goto L_108f8e8d;
  /* 108f8db2 mov eax, dword ptr [0x10921f68] */
  EAX = (r32((uint32_t)(0x10921f68)));
  /* 108f8db7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_108f8dba:;
  /* 108f8dba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8dbd cmp ecx, dword ptr [0x10921f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10921f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8dc3 jae 0x108f8de9 */
  if (!C.cf) goto L_108f8de9;
  /* 108f8dc5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8dc8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f8dcb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 108f8dcd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8dd0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8dd3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 108f8dd6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f8dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f8dda je 0x108f8dde */
  if (C.zf) goto L_108f8dde;
  /* 108f8ddc jmp 0x108f8de9 */
  goto L_108f8de9;
L_108f8dde:;
  /* 108f8dde mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8de1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8de4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f8de7 jmp 0x108f8dba */
  goto L_108f8dba;
L_108f8de9:;
  /* 108f8de9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8dec cmp ecx, dword ptr [0x10921f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10921f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8df2 jne 0x108f8e8d */
  if (!C.zf) goto L_108f8e8d;
L_108f8df8:;
  /* 108f8df8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8dfb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8dfe jae 0x108f8e16 */
  if (!C.cf) goto L_108f8e16;
  /* 108f8e00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e03 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8e07 je 0x108f8e0b */
  if (C.zf) goto L_108f8e0b;
  /* 108f8e09 jmp 0x108f8e16 */
  goto L_108f8e16;
L_108f8e0b:;
  /* 108f8e0b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e0e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8e11 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108f8e14 jmp 0x108f8df8 */
  goto L_108f8df8;
L_108f8e16:;
  /* 108f8e16 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e19 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8e1c jne 0x108f8e67 */
  if (!C.zf) goto L_108f8e67;
  /* 108f8e1e mov eax, dword ptr [0x10921f68] */
  EAX = (r32((uint32_t)(0x10921f68)));
  /* 108f8e23 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_108f8e26:;
  /* 108f8e26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e29 cmp ecx, dword ptr [0x10921f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10921f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8e2f jae 0x108f8e47 */
  if (!C.cf) goto L_108f8e47;
  /* 108f8e31 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e34 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8e38 je 0x108f8e3c */
  if (C.zf) goto L_108f8e3c;
  /* 108f8e3a jmp 0x108f8e47 */
  goto L_108f8e47;
L_108f8e3c:;
  /* 108f8e3c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e3f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8e42 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f8e45 jmp 0x108f8e26 */
  goto L_108f8e26;
L_108f8e47:;
  /* 108f8e47 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e4a cmp ecx, dword ptr [0x10921f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10921f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8e50 jne 0x108f8e67 */
  if (!C.zf) goto L_108f8e67;
  /* 108f8e52 call 0x108f9250 */
  push32(0x108f8e57u); f_108f9250();
  /* 108f8e57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f8e5a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8e5e jne 0x108f8e67 */
  if (!C.zf) goto L_108f8e67;
  /* 108f8e60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f8e62 jmp 0x108f9241 */
  goto L_108f9241;
L_108f8e67:;
  /* 108f8e67 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e6a push edx */
  push32((uint32_t)(EDX));
  /* 108f8e6b call 0x108f9360 */
  push32(0x108f8e70u); f_108f9360();
  /* 108f8e70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8e73 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e76 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108f8e79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108f8e7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e7e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f8e81 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8e84 jne 0x108f8e8d */
  if (!C.zf) goto L_108f8e8d;
  /* 108f8e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f8e88 jmp 0x108f9241 */
  goto L_108f9241;
L_108f8e8d:;
  /* 108f8e8d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e90 mov dword ptr [0x10921f5c], edx */
  w32((uint32_t)(0x10921f5c), (EDX));
  /* 108f8e96 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8e99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f8e9c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 108f8e9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8ea2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f8ea4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 108f8ea7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8eab je 0x108f8ed0 */
  if (C.zf) goto L_108f8ed0;
  /* 108f8ead mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8eb0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8eb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f8eb6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 108f8eba mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8ebd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8ec0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8ec3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 108f8eca or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 108f8ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f8ece jne 0x108f8f05 */
  if (!C.zf) goto L_108f8f05;
L_108f8ed0:;
  /* 108f8ed0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_108f8ed7:;
  /* 108f8ed7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8eda mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8edd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f8ee0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 108f8ee4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8ee7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8eea mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8eed and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 108f8ef4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 108f8ef6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f8ef8 jne 0x108f8f05 */
  if (!C.zf) goto L_108f8f05;
  /* 108f8efa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8efd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8f00 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 108f8f03 jmp 0x108f8ed7 */
  goto L_108f8ed7;
L_108f8f05:;
  /* 108f8f05 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8f08 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f8f0e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8f11 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 108f8f18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f8f1b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108f8f22 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8f25 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8f28 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f8f2b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 108f8f2f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108f8f32 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8f36 jne 0x108f8f52 */
  if (!C.zf) goto L_108f8f52;
  /* 108f8f38 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 108f8f3f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8f42 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8f45 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 108f8f48 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 108f8f4f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_108f8f52:;
  /* 108f8f52 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8f56 jl 0x108f8f6b */
  if ((C.sf!=C.of)) goto L_108f8f6b;
  /* 108f8f58 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f8f5b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108f8f5d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108f8f60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f8f63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8f66 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108f8f69 jmp 0x108f8f52 */
  goto L_108f8f52;
L_108f8f6b:;
  /* 108f8f6b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f8f6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8f71 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 108f8f75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108f8f78 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f8f7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f8f7d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8f80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f8f83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f8f86 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 108f8f89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8f8c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108f8f8f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8f93 jle 0x108f8f9c */
  if ((C.zf||C.sf!=C.of)) goto L_108f8f9c;
  /* 108f8f95 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_108f8f9c:;
  /* 108f8f9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f8f9f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8fa2 je 0x108f91c0 */
  if (C.zf) goto L_108f91c0;
  /* 108f8fa8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f8fab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f8fae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f8fb1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8fb4 jne 0x108f908a */
  if (!C.zf) goto L_108f908a;
  /* 108f8fba cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8fbe jge 0x108f901f */
  if ((C.sf==C.of)) goto L_108f901f;
  /* 108f8fc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f8fc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f8fc8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f8fca not eax */
  EAX = (~(EAX));
  /* 108f8fcc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8fcf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8fd2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 108f8fd6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108f8fd8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f8fdb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8fde mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 108f8fe2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8fe5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8fe8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108f8feb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f8fee mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8ff1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8ff4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108f8ff7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f8ffa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8ffd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108f9001 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f9003 jne 0x108f901d */
  if (!C.zf) goto L_108f901d;
  /* 108f9005 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f900a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f900d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f900f not eax */
  EAX = (~(EAX));
  /* 108f9011 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9014 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f9016 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108f9018 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f901b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108f901d:;
  /* 108f901d jmp 0x108f908a */
  goto L_108f908a;
L_108f901f:;
  /* 108f901f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f9022 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9025 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f902a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f902c not edx */
  EDX = (~(EDX));
  /* 108f902e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9031 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9034 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 108f903b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f903d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9040 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9043 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 108f904a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f904d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9050 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f9053 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f9056 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9059 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f905c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 108f905f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9062 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9065 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108f9069 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f906b jne 0x108f908a */
  if (!C.zf) goto L_108f908a;
  /* 108f906d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f9070 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9073 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f9078 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f907a not edx */
  EDX = (~(EDX));
  /* 108f907c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f907f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f9082 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f9084 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9087 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_108f908a:;
  /* 108f908a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f908d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108f9090 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f9093 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f9096 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108f9099 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f909c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f909f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f90a2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108f90a5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108f90a8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f90ac je 0x108f91c0 */
  if (C.zf) goto L_108f91c0;
  /* 108f90b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f90b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f90b8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 108f90bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108f90be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f90c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f90c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f90c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108f90ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f90cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f90d0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108f90d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f90d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f90d9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 108f90dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f90df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f90e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f90e5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108f90e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f90eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f90ee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f90f1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f90f4 jne 0x108f91c0 */
  if (!C.zf) goto L_108f91c0;
  /* 108f90fa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f90fe jge 0x108f915a */
  if ((C.sf==C.of)) goto L_108f915a;
  /* 108f9100 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9103 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9106 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108f910a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f910d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9110 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 108f9113 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108f9115 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9118 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f911b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 108f911e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f9120 jne 0x108f9138 */
  if (!C.zf) goto L_108f9138;
  /* 108f9122 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f9127 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f912a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f912c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f912f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f9131 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108f9133 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9136 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108f9138:;
  /* 108f9138 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f913d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9140 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f9142 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9145 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9148 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 108f914c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f914e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9151 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9154 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 108f9158 jmp 0x108f91c0 */
  goto L_108f91c0;
L_108f915a:;
  /* 108f915a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f915d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9160 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108f9164 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9167 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f916a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 108f916d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108f916f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9172 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9175 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 108f9178 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f917a jne 0x108f9197 */
  if (!C.zf) goto L_108f9197;
  /* 108f917c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f917f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9182 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f9187 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f9189 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f918c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f918f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108f9191 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9194 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108f9197:;
  /* 108f9197 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f919a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f919d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f91a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f91a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f91a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f91aa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 108f91b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f91b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f91b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f91b9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_108f91c0:;
  /* 108f91c0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f91c4 je 0x108f91da */
  if (C.zf) goto L_108f91da;
  /* 108f91c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f91c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f91cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108f91ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f91d1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f91d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f91d7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_108f91da:;
  /* 108f91da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f91dd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f91e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108f91e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f91e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f91e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f91ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108f91ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f91f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f91f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f91f7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f91fa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 108f91fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9200 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f9202 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9205 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f9207 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f920a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f920d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108f920f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f9211 jne 0x108f9233 */
  if (!C.zf) goto L_108f9233;
  /* 108f9213 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9216 cmp eax, dword ptr [0x10921f60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10921f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f921c jne 0x108f9233 */
  if (!C.zf) goto L_108f9233;
  /* 108f921e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9221 cmp ecx, dword ptr [0x10921f58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10921f58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9227 jne 0x108f9233 */
  if (!C.zf) goto L_108f9233;
  /* 108f9229 mov dword ptr [0x10921f60], 0 */
  w32((uint32_t)(0x10921f60), (0x0u));
L_108f9233:;
  /* 108f9233 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108f9236 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9239 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108f923b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f923e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_108f9241:;
  /* 108f9241 pop esi */
  ESI = (pop32());
  /* 108f9242 mov esp, ebp */
  ESP = (EBP);
  /* 108f9244 pop ebp */
  EBP = (pop32());
  /* 108f9245 ret  */
  ESPCHK(0x108f8d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009250 @ 0x108f9250 (271 bytes, 78 insns) */
void f_108f9250(void) {
  FTRACE(0x108f9250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f9250 push ebp */
  push32((uint32_t)(EBP));
  /* 108f9251 mov ebp, esp */
  EBP = (ESP);
  /* 108f9253 push ecx */
  push32((uint32_t)(ECX));
  /* 108f9254 mov eax, dword ptr [0x10921f64] */
  EAX = (r32((uint32_t)(0x10921f64)));
  /* 108f9259 cmp eax, dword ptr [0x10921f48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10921f48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f925f jne 0x108f92ab */
  if (!C.zf) goto L_108f92ab;
  /* 108f9261 mov ecx, dword ptr [0x10921f48] */
  ECX = (r32((uint32_t)(0x10921f48)));
  /* 108f9267 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f926a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f926d push ecx */
  push32((uint32_t)(ECX));
  /* 108f926e mov edx, dword ptr [0x10921f68] */
  EDX = (r32((uint32_t)(0x10921f68)));
  /* 108f9274 push edx */
  push32((uint32_t)(EDX));
  /* 108f9275 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f9277 mov eax, dword ptr [0x10921f6c] */
  EAX = (r32((uint32_t)(0x10921f6c)));
  /* 108f927c push eax */
  push32((uint32_t)(EAX));
  /* 108f927d call dword ptr [0x10923324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923324))), 0x108f9283u);
  /* 108f9283 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f9286 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f928a jne 0x108f9293 */
  if (!C.zf) goto L_108f9293;
  /* 108f928c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f928e jmp 0x108f935b */
  goto L_108f935b;
L_108f9293:;
  /* 108f9293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9296 mov dword ptr [0x10921f68], ecx */
  w32((uint32_t)(0x10921f68), (ECX));
  /* 108f929c mov edx, dword ptr [0x10921f48] */
  EDX = (r32((uint32_t)(0x10921f48)));
  /* 108f92a2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f92a5 mov dword ptr [0x10921f48], edx */
  w32((uint32_t)(0x10921f48), (EDX));
L_108f92ab:;
  /* 108f92ab mov eax, dword ptr [0x10921f64] */
  EAX = (r32((uint32_t)(0x10921f64)));
  /* 108f92b0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f92b3 mov ecx, dword ptr [0x10921f68] */
  ECX = (r32((uint32_t)(0x10921f68)));
  /* 108f92b9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f92bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f92be push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 108f92c3 push 8 */
  push32((uint32_t)(0x8u));
  /* 108f92c5 mov edx, dword ptr [0x10921f6c] */
  EDX = (r32((uint32_t)(0x10921f6c)));
  /* 108f92cb push edx */
  push32((uint32_t)(EDX));
  /* 108f92cc call dword ptr [0x10923328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923328))), 0x108f92d2u);
  /* 108f92d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f92d5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 108f92d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f92db cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f92df jne 0x108f92e5 */
  if (!C.zf) goto L_108f92e5;
  /* 108f92e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f92e3 jmp 0x108f935b */
  goto L_108f935b;
L_108f92e5:;
  /* 108f92e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f92e7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 108f92ec push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 108f92f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f92f3 call dword ptr [0x10923320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923320))), 0x108f92f9u);
  /* 108f92f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f92fc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 108f92ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9302 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9306 jne 0x108f9322 */
  if (!C.zf) goto L_108f9322;
  /* 108f9308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f930b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f930e push ecx */
  push32((uint32_t)(ECX));
  /* 108f930f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f9311 mov edx, dword ptr [0x10921f6c] */
  EDX = (r32((uint32_t)(0x10921f6c)));
  /* 108f9317 push edx */
  push32((uint32_t)(EDX));
  /* 108f9318 call dword ptr [0x10923348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923348))), 0x108f931eu);
  /* 108f931e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f9320 jmp 0x108f935b */
  goto L_108f935b;
L_108f9322:;
  /* 108f9322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9325 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108f932b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f932e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 108f9335 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9338 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 108f933f mov eax, dword ptr [0x10921f64] */
  EAX = (r32((uint32_t)(0x10921f64)));
  /* 108f9344 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9347 mov dword ptr [0x10921f64], eax */
  w32((uint32_t)(0x10921f64), (EAX));
  /* 108f934c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f934f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108f9352 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 108f9358 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108f935b:;
  /* 108f935b mov esp, ebp */
  ESP = (EBP);
  /* 108f935d pop ebp */
  EBP = (pop32());
  /* 108f935e ret  */
  ESPCHK(0x108f9250u, _esp0);
  ESP += 4; return;
}

/* FUN_10009360 @ 0x108f9360 (494 bytes, 149 insns) */
void f_108f9360(void) {
  FTRACE(0x108f9360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f9360 push ebp */
  push32((uint32_t)(EBP));
  /* 108f9361 mov ebp, esp */
  EBP = (ESP);
  /* 108f9363 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9369 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f936c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108f936f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9372 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108f9375 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f9378 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_108f937f:;
  /* 108f937f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9383 jl 0x108f9398 */
  if ((C.sf!=C.of)) goto L_108f9398;
  /* 108f9385 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f9388 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108f938a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108f938d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f9390 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9393 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 108f9396 jmp 0x108f937f */
  goto L_108f937f;
L_108f9398:;
  /* 108f9398 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f939b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f93a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f93a4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 108f93ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108f93ae mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108f93b5 jmp 0x108f93c0 */
  goto L_108f93c0;
L_108f93b7:;
  /* 108f93b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f93ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f93bd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_108f93c0:;
  /* 108f93c0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f93c4 jge 0x108f93e6 */
  if ((C.sf==C.of)) goto L_108f93e6;
  /* 108f93c6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f93c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f93cc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 108f93cf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f93d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f93d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f93d8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108f93db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f93de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f93e1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 108f93e4 jmp 0x108f93b7 */
  goto L_108f93b7;
L_108f93e6:;
  /* 108f93e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f93e9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 108f93ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f93ef mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108f93f2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f93f4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108f93f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f93f9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108f93fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108f9403 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f9406 push edx */
  push32((uint32_t)(EDX));
  /* 108f9407 call dword ptr [0x10923320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923320))), 0x108f940du);
  /* 108f940d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f940f jne 0x108f9419 */
  if (!C.zf) goto L_108f9419;
  /* 108f9411 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f9414 jmp 0x108f954a */
  goto L_108f954a;
L_108f9419:;
  /* 108f9419 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f941c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9421 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108f9424 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f9427 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f942a jmp 0x108f9438 */
  goto L_108f9438;
L_108f942c:;
  /* 108f942c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f942f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9435 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108f9438:;
  /* 108f9438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f943b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f943e ja 0x108f949d */
  if ((!C.cf&&!C.zf)) goto L_108f949d;
  /* 108f9440 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9443 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 108f944a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f944d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 108f9457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f945a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f945d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f9460 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9463 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 108f9469 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f946c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9472 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9475 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108f9478 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f947b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9481 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9484 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108f9487 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f948a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f948f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108f9492 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f9495 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 108f949b jmp 0x108f942c */
  goto L_108f942c;
L_108f949d:;
  /* 108f949d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f94a0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f94a6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108f94a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f94ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f94af mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f94b2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108f94b5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f94b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f94bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f94be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f94c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f94c4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108f94c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f94ca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f94cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f94d0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 108f94d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f94d6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108f94d9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f94dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f94df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f94e2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 108f94e5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f94e8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f94eb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 108f94f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f94f6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f94f9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 108f9504 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f9507 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 108f950b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f950e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 108f9511 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108f9514 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f9517 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 108f951a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f951c jne 0x108f952d */
  if (!C.zf) goto L_108f952d;
  /* 108f951e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9521 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f9524 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108f9527 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f952a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108f952d:;
  /* 108f952d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f9532 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f9535 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f9537 not edx */
  EDX = (~(EDX));
  /* 108f9539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f953c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108f953f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f9541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9544 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108f9547 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_108f954a:;
  /* 108f954a mov esp, ebp */
  ESP = (EBP);
  /* 108f954c pop ebp */
  EBP = (pop32());
  /* 108f954d ret  */
  ESPCHK(0x108f9360u, _esp0);
  ESP += 4; return;
}

/* FUN_10009550 @ 0x108f9550 (1515 bytes, 489 insns) */
void f_108f9550(void) {
  FTRACE(0x108f9550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f9550 push ebp */
  push32((uint32_t)(EBP));
  /* 108f9551 mov ebp, esp */
  EBP = (ESP);
  /* 108f9553 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9556 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f9559 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f955c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 108f955e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108f9561 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9564 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108f9567 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 108f956a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f956d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f9570 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9573 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108f9576 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f9579 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 108f957c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f957f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9582 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f9588 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f958b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 108f9592 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108f9595 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f9598 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f959b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108f959e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f95a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f95a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f95a6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 108f95a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f95ac add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f95af mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 108f95b2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f95b5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f95b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108f95ba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f95bd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f95c0 jle 0x108f9876 */
  if ((C.zf||C.sf!=C.of)) goto L_108f9876;
  /* 108f95c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f95c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108f95cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f95ce jne 0x108f95db */
  if (!C.zf) goto L_108f95db;
  /* 108f95d0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f95d3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f95d6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f95d9 jle 0x108f95e2 */
  if ((C.zf||C.sf!=C.of)) goto L_108f95e2;
L_108f95db:;
  /* 108f95db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f95dd jmp 0x108f9b37 */
  goto L_108f9b37;
L_108f95e2:;
  /* 108f95e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f95e5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 108f95e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f95eb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108f95ee cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f95f2 jbe 0x108f95fb */
  if ((C.cf||C.zf)) goto L_108f95fb;
  /* 108f95f4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_108f95fb:;
  /* 108f95fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f95fe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f9601 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f9604 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9607 jne 0x108f96dd */
  if (!C.zf) goto L_108f96dd;
  /* 108f960d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9611 jae 0x108f9672 */
  if (!C.cf) goto L_108f9672;
  /* 108f9613 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f9618 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f961b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f961d not edx */
  EDX = (~(EDX));
  /* 108f961f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9622 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9625 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 108f9629 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f962b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f962e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9631 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 108f9635 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9638 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f963b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f963e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f9641 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9644 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9647 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 108f964a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f964d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9650 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108f9654 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f9656 jne 0x108f9670 */
  if (!C.zf) goto L_108f9670;
  /* 108f9658 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f965d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f9660 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f9662 not edx */
  EDX = (~(EDX));
  /* 108f9664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9667 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f9669 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f966b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f966e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108f9670:;
  /* 108f9670 jmp 0x108f96dd */
  goto L_108f96dd;
L_108f9672:;
  /* 108f9672 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f9675 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9678 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f967d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f967f not eax */
  EAX = (~(EAX));
  /* 108f9681 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9684 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9687 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108f968e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108f9690 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9693 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9696 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 108f969d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f96a0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f96a3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108f96a6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f96a9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f96ac add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f96af mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108f96b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f96b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f96b8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108f96bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f96be jne 0x108f96dd */
  if (!C.zf) goto L_108f96dd;
  /* 108f96c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f96c3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f96c6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f96cb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f96cd not eax */
  EAX = (~(EAX));
  /* 108f96cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f96d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f96d5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108f96d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f96da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108f96dd:;
  /* 108f96dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f96e0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108f96e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f96e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f96e9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108f96ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f96ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f96f2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f96f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108f96f8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 108f96fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f96fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9701 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9704 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108f9707 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f970b jle 0x108f9857 */
  if ((C.zf||C.sf!=C.of)) goto L_108f9857;
  /* 108f9711 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9714 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9717 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108f971a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f971d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108f9720 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9723 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108f9726 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f972a jbe 0x108f9733 */
  if ((C.cf||C.zf)) goto L_108f9733;
  /* 108f972c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_108f9733:;
  /* 108f9733 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f9736 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f9739 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 108f973c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108f973f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f9742 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9745 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f9748 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108f974b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f974e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9751 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 108f9754 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9757 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f975a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 108f975d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f9760 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f9763 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f9766 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108f9769 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f976c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f976f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f9772 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9775 jne 0x108f9843 */
  if (!C.zf) goto L_108f9843;
  /* 108f977b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f977f jae 0x108f97dc */
  if (!C.cf) goto L_108f97dc;
  /* 108f9781 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9784 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9787 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108f978b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f978e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9791 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f9794 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108f9797 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f979a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f979d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 108f97a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f97a2 jne 0x108f97ba */
  if (!C.zf) goto L_108f97ba;
  /* 108f97a4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f97a9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f97ac shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f97ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f97b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f97b3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f97b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f97b8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108f97ba:;
  /* 108f97ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f97bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f97c2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f97c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f97c7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f97ca mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 108f97ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108f97d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f97d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f97d6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 108f97da jmp 0x108f9843 */
  goto L_108f9843;
L_108f97dc:;
  /* 108f97dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f97df add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f97e2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108f97e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f97e9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f97ec mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f97ef add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108f97f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f97f5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f97f8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 108f97fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f97fd jne 0x108f981a */
  if (!C.zf) goto L_108f981a;
  /* 108f97ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f9802 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9805 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f980a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f980c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f980f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f9812 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f9814 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9817 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_108f981a:;
  /* 108f981a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f981d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9820 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f9825 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f9827 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f982a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f982d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108f9834 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108f9836 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9839 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f983c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_108f9843:;
  /* 108f9843 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f9846 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f9849 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108f984b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f984e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9851 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f9854 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_108f9857:;
  /* 108f9857 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f985a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f985d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9860 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108f9862 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f9865 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9868 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f986b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f986e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 108f9871 jmp 0x108f9b32 */
  goto L_108f9b32;
L_108f9876:;
  /* 108f9876 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f9879 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f987c jge 0x108f9b32 */
  if ((C.sf==C.of)) goto L_108f9b32;
  /* 108f9882 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f9885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9888 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f988b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108f988d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108f9890 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9893 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9896 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9899 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 108f989c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f989f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f98a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108f98a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f98a8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f98ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108f98ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f98b1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 108f98b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f98b7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108f98ba cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f98be jbe 0x108f98c7 */
  if ((C.cf||C.zf)) goto L_108f98c7;
  /* 108f98c0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_108f98c7:;
  /* 108f98c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f98ca and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108f98cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f98cf jne 0x108f9a10 */
  if (!C.zf) goto L_108f9a10;
  /* 108f98d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f98d8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 108f98db sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f98de mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108f98e1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f98e5 jbe 0x108f98ee */
  if ((C.cf||C.zf)) goto L_108f98ee;
  /* 108f98e7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_108f98ee:;
  /* 108f98ee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f98f1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f98f4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f98f7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f98fa jne 0x108f99d0 */
  if (!C.zf) goto L_108f99d0;
  /* 108f9900 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9904 jae 0x108f9965 */
  if (!C.cf) goto L_108f9965;
  /* 108f9906 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f990b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f990e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f9910 not edx */
  EDX = (~(EDX));
  /* 108f9912 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9915 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9918 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 108f991c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f991e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9921 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9924 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 108f9928 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f992b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f992e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f9931 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f9934 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9937 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f993a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 108f993d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9940 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9943 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108f9947 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f9949 jne 0x108f9963 */
  if (!C.zf) goto L_108f9963;
  /* 108f994b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f9950 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f9953 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f9955 not edx */
  EDX = (~(EDX));
  /* 108f9957 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f995a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f995c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f995e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9961 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108f9963:;
  /* 108f9963 jmp 0x108f99d0 */
  goto L_108f99d0;
L_108f9965:;
  /* 108f9965 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f9968 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f996b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f9970 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f9972 not eax */
  EAX = (~(EAX));
  /* 108f9974 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9977 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f997a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108f9981 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108f9983 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9986 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9989 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 108f9990 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9993 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9996 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108f9999 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f999c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f999f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f99a2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108f99a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f99a8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f99ab movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108f99af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f99b1 jne 0x108f99d0 */
  if (!C.zf) goto L_108f99d0;
  /* 108f99b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f99b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f99b9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f99be shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f99c0 not eax */
  EAX = (~(EAX));
  /* 108f99c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f99c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f99c8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108f99ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f99cd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108f99d0:;
  /* 108f99d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f99d3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108f99d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f99d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f99dc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108f99df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f99e2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f99e5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f99e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108f99eb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 108f99ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f99f1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f99f4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108f99f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f99fa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 108f99fd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9a00 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108f9a03 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9a07 jbe 0x108f9a10 */
  if ((C.cf||C.zf)) goto L_108f9a10;
  /* 108f9a09 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_108f9a10:;
  /* 108f9a10 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f9a13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f9a16 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 108f9a19 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108f9a1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9a1f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9a22 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f9a25 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108f9a28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9a2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9a2e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108f9a31 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9a34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9a37 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 108f9a3a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9a3d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f9a40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9a43 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108f9a46 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9a49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9a4c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f9a4f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9a52 jne 0x108f9b1e */
  if (!C.zf) goto L_108f9b1e;
  /* 108f9a58 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9a5c jae 0x108f9ab8 */
  if (!C.cf) goto L_108f9ab8;
  /* 108f9a5e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9a61 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9a64 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108f9a68 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9a6b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9a6e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 108f9a71 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108f9a73 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9a76 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9a79 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 108f9a7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f9a7e jne 0x108f9a96 */
  if (!C.zf) goto L_108f9a96;
  /* 108f9a80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f9a85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f9a88 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f9a8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9a8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f9a8f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108f9a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9a94 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108f9a96:;
  /* 108f9a96 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f9a9b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f9a9e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f9aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9aa3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9aa6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 108f9aaa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f9aac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9aaf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9ab2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 108f9ab6 jmp 0x108f9b1e */
  goto L_108f9b1e;
L_108f9ab8:;
  /* 108f9ab8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9abb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9abe movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108f9ac2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9ac5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9ac8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 108f9acb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108f9acd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9ad0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9ad3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 108f9ad6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f9ad8 jne 0x108f9af5 */
  if (!C.zf) goto L_108f9af5;
  /* 108f9ada mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f9add sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9ae0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108f9ae5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108f9ae7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9aea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f9aed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108f9aef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f9af2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108f9af5:;
  /* 108f9af5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f9af8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9afb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f9b00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f9b02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9b05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9b08 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 108f9b0f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f9b11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9b14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108f9b17 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_108f9b1e:;
  /* 108f9b1e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9b21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f9b24 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108f9b26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9b29 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9b2c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f9b2f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_108f9b32:;
  /* 108f9b32 mov eax, 1 */
  EAX = (0x1u);
L_108f9b37:;
  /* 108f9b37 mov esp, ebp */
  ESP = (EBP);
  /* 108f9b39 pop ebp */
  EBP = (pop32());
  /* 108f9b3a ret  */
  ESPCHK(0x108f9550u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b40 @ 0x108f9b40 (304 bytes, 79 insns) */
void f_108f9b40(void) {
  FTRACE(0x108f9b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f9b40 push ebp */
  push32((uint32_t)(EBP));
  /* 108f9b41 mov ebp, esp */
  EBP = (ESP);
  /* 108f9b43 push ecx */
  push32((uint32_t)(ECX));
  /* 108f9b44 cmp dword ptr [0x10921f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10921f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9b4b je 0x108f9c6c */
  if (C.zf) goto L_108f9c6c;
  /* 108f9b51 mov eax, dword ptr [0x10921f58] */
  EAX = (r32((uint32_t)(0x10921f58)));
  /* 108f9b56 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 108f9b59 mov ecx, dword ptr [0x10921f60] */
  ECX = (r32((uint32_t)(0x10921f60)));
  /* 108f9b5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108f9b62 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9b64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f9b67 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 108f9b6c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108f9b71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f9b74 push eax */
  push32((uint32_t)(EAX));
  /* 108f9b75 call dword ptr [0x10923344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923344))), 0x108f9b7bu);
  /* 108f9b7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108f9b80 mov ecx, dword ptr [0x10921f58] */
  ECX = (r32((uint32_t)(0x10921f58)));
  /* 108f9b86 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108f9b88 mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f9b8d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108f9b90 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108f9b92 mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f9b98 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108f9b9b mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f9ba0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f9ba3 mov edx, dword ptr [0x10921f58] */
  EDX = (r32((uint32_t)(0x10921f58)));
  /* 108f9ba9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 108f9bb4 mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f9bb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f9bbc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 108f9bbf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108f9bc2 mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f9bc7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f9bca mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 108f9bcd mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f9bd3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f9bd6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 108f9bda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f9bdc jne 0x108f9bf2 */
  if (!C.zf) goto L_108f9bf2;
  /* 108f9bde mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f9be4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f9be7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 108f9be9 mov ecx, dword ptr [0x10921f60] */
  ECX = (r32((uint32_t)(0x10921f60)));
  /* 108f9bef mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_108f9bf2:;
  /* 108f9bf2 mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f9bf8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9bfc jne 0x108f9c62 */
  if (!C.zf) goto L_108f9c62;
  /* 108f9bfe cmp dword ptr [0x10921f64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10921f64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9c05 jle 0x108f9c62 */
  if ((C.zf||C.sf!=C.of)) goto L_108f9c62;
  /* 108f9c07 mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f9c0c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f9c0f push ecx */
  push32((uint32_t)(ECX));
  /* 108f9c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f9c12 mov edx, dword ptr [0x10921f6c] */
  EDX = (r32((uint32_t)(0x10921f6c)));
  /* 108f9c18 push edx */
  push32((uint32_t)(EDX));
  /* 108f9c19 call dword ptr [0x10923348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923348))), 0x108f9c1fu);
  /* 108f9c1f mov eax, dword ptr [0x10921f64] */
  EAX = (r32((uint32_t)(0x10921f64)));
  /* 108f9c24 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f9c27 mov ecx, dword ptr [0x10921f68] */
  ECX = (r32((uint32_t)(0x10921f68)));
  /* 108f9c2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9c2f mov edx, dword ptr [0x10921f60] */
  EDX = (r32((uint32_t)(0x10921f60)));
  /* 108f9c35 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9c38 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9c3a push ecx */
  push32((uint32_t)(ECX));
  /* 108f9c3b mov eax, dword ptr [0x10921f60] */
  EAX = (r32((uint32_t)(0x10921f60)));
  /* 108f9c40 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9c43 push eax */
  push32((uint32_t)(EAX));
  /* 108f9c44 mov ecx, dword ptr [0x10921f60] */
  ECX = (r32((uint32_t)(0x10921f60)));
  /* 108f9c4a push ecx */
  push32((uint32_t)(ECX));
  /* 108f9c4b call 0x108fc270 */
  push32(0x108f9c50u); f_108fc270();
  /* 108f9c50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9c53 mov edx, dword ptr [0x10921f64] */
  EDX = (r32((uint32_t)(0x10921f64)));
  /* 108f9c59 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9c5c mov dword ptr [0x10921f64], edx */
  w32((uint32_t)(0x10921f64), (EDX));
L_108f9c62:;
  /* 108f9c62 mov dword ptr [0x10921f60], 0 */
  w32((uint32_t)(0x10921f60), (0x0u));
L_108f9c6c:;
  /* 108f9c6c mov esp, ebp */
  ESP = (EBP);
  /* 108f9c6e pop ebp */
  EBP = (pop32());
  /* 108f9c6f ret  */
  ESPCHK(0x108f9b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c70 @ 0x108f9c70 (1565 bytes, 343 insns) */
void f_108f9c70(void) {
  FTRACE(0x108f9c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f9c70 push ebp */
  push32((uint32_t)(EBP));
  /* 108f9c71 mov ebp, esp */
  EBP = (ESP);
  /* 108f9c73 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9c79 mov eax, dword ptr [0x10921f64] */
  EAX = (r32((uint32_t)(0x10921f64)));
  /* 108f9c7e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f9c81 push eax */
  push32((uint32_t)(EAX));
  /* 108f9c82 mov ecx, dword ptr [0x10921f68] */
  ECX = (r32((uint32_t)(0x10921f68)));
  /* 108f9c88 push ecx */
  push32((uint32_t)(ECX));
  /* 108f9c89 call dword ptr [0x109233c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233c0))), 0x108f9c8fu);
  /* 108f9c8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f9c91 je 0x108f9c9b */
  if (C.zf) goto L_108f9c9b;
  /* 108f9c93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f9c96 jmp 0x108fa289 */
  goto L_108fa289;
L_108f9c9b:;
  /* 108f9c9b mov edx, dword ptr [0x10921f68] */
  EDX = (r32((uint32_t)(0x10921f68)));
  /* 108f9ca1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 108f9ca7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 108f9cb1 jmp 0x108f9cc2 */
  goto L_108f9cc2;
L_108f9cb3:;
  /* 108f9cb3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 108f9cb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9cbc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_108f9cc2:;
  /* 108f9cc2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 108f9cc8 cmp ecx, dword ptr [0x10921f64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10921f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9cce jge 0x108fa287 */
  if ((C.sf==C.of)) goto L_108fa287;
  /* 108f9cd4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108f9cda mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f9cdd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 108f9ce3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 108f9ce8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 108f9cee push ecx */
  push32((uint32_t)(ECX));
  /* 108f9cef call dword ptr [0x109233c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233c0))), 0x108f9cf5u);
  /* 108f9cf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f9cf7 je 0x108f9d03 */
  if (C.zf) goto L_108f9d03;
  /* 108f9cf9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 108f9cfe jmp 0x108fa289 */
  goto L_108fa289;
L_108f9d03:;
  /* 108f9d03 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108f9d09 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108f9d0c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 108f9d12 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 108f9d18 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9d1e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108f9d21 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108f9d27 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108f9d2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f9d2d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 108f9d37 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 108f9d41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108f9d48 jmp 0x108f9d53 */
  goto L_108f9d53;
L_108f9d4a:;
  /* 108f9d4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f9d4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9d50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_108f9d53:;
  /* 108f9d53 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9d57 jge 0x108fa24b */
  if ((C.sf==C.of)) goto L_108fa24b;
  /* 108f9d5d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 108f9d67 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 108f9d71 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 108f9d7b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 108f9d85 jmp 0x108f9d96 */
  goto L_108f9d96;
L_108f9d87:;
  /* 108f9d87 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 108f9d8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9d90 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_108f9d96:;
  /* 108f9d96 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9d9d jge 0x108f9db2 */
  if ((C.sf==C.of)) goto L_108f9db2;
  /* 108f9d9f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 108f9da5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 108f9db0 jmp 0x108f9d87 */
  goto L_108f9d87;
L_108f9db2:;
  /* 108f9db2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9db6 jl 0x108fa1ed */
  if ((C.sf!=C.of)) goto L_108fa1ed;
  /* 108f9dbc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108f9dc1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 108f9dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 108f9dc8 call dword ptr [0x109233c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233c0))), 0x108f9dceu);
  /* 108f9dce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f9dd0 je 0x108f9ddc */
  if (C.zf) goto L_108f9ddc;
  /* 108f9dd2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 108f9dd7 jmp 0x108fa289 */
  goto L_108fa289;
L_108f9ddc:;
  /* 108f9ddc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 108f9de2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108f9de5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 108f9def jmp 0x108f9e00 */
  goto L_108f9e00;
L_108f9df1:;
  /* 108f9df1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 108f9df7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9dfa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_108f9e00:;
  /* 108f9e00 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9e07 jge 0x108f9f84 */
  if ((C.sf==C.of)) goto L_108f9f84;
  /* 108f9e0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f9e10 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9e13 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 108f9e19 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 108f9e1f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9e25 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 108f9e2b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 108f9e31 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9e35 jne 0x108f9e42 */
  if (!C.zf) goto L_108f9e42;
  /* 108f9e37 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 108f9e3d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9e40 je 0x108f9e4c */
  if (C.zf) goto L_108f9e4c;
L_108f9e42:;
  /* 108f9e42 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 108f9e47 jmp 0x108fa289 */
  goto L_108fa289;
L_108f9e4c:;
  /* 108f9e4c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 108f9e52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f9e54 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 108f9e5a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 108f9e60 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 108f9e66 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 108f9e6c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108f9e6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f9e71 je 0x108f9ea9 */
  if (C.zf) goto L_108f9ea9;
  /* 108f9e73 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 108f9e79 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9e7c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 108f9e82 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9e8c jle 0x108f9e98 */
  if ((C.zf||C.sf!=C.of)) goto L_108f9e98;
  /* 108f9e8e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 108f9e93 jmp 0x108fa289 */
  goto L_108fa289;
L_108f9e98:;
  /* 108f9e98 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 108f9e9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9ea1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 108f9ea7 jmp 0x108f9eeb */
  goto L_108f9eeb;
L_108f9ea9:;
  /* 108f9ea9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 108f9eaf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108f9eb2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f9eb5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 108f9ebb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9ec2 jle 0x108f9ece */
  if ((C.zf||C.sf!=C.of)) goto L_108f9ece;
  /* 108f9ec4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_108f9ece:;
  /* 108f9ece mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 108f9ed4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 108f9edb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9ede mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 108f9ee4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_108f9eeb:;
  /* 108f9eeb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9ef2 jl 0x108f9f0d */
  if ((C.sf!=C.of)) goto L_108f9f0d;
  /* 108f9ef4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 108f9efa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 108f9efd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f9eff jne 0x108f9f0d */
  if (!C.zf) goto L_108f9f0d;
  /* 108f9f01 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9f0b jle 0x108f9f17 */
  if ((C.zf||C.sf!=C.of)) goto L_108f9f17;
L_108f9f0d:;
  /* 108f9f0d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 108f9f12 jmp 0x108fa289 */
  goto L_108fa289;
L_108f9f17:;
  /* 108f9f17 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 108f9f1d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9f23 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 108f9f26 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9f2c je 0x108f9f38 */
  if (C.zf) goto L_108f9f38;
  /* 108f9f2e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 108f9f33 jmp 0x108fa289 */
  goto L_108fa289;
L_108f9f38:;
  /* 108f9f38 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 108f9f3e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9f44 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 108f9f4a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 108f9f50 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9f56 jb 0x108f9e4c */
  if (C.cf) goto L_108f9e4c;
  /* 108f9f5c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 108f9f62 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9f68 je 0x108f9f74 */
  if (C.zf) goto L_108f9f74;
  /* 108f9f6a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 108f9f6f jmp 0x108fa289 */
  goto L_108fa289;
L_108f9f74:;
  /* 108f9f74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f9f77 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9f7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f9f7f jmp 0x108f9df1 */
  goto L_108f9df1;
L_108f9f84:;
  /* 108f9f84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9f87 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f9f89 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9f8f je 0x108f9f9b */
  if (C.zf) goto L_108f9f9b;
  /* 108f9f91 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 108f9f96 jmp 0x108fa289 */
  goto L_108fa289;
L_108f9f9b:;
  /* 108f9f9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f9f9e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 108f9fa4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 108f9fab jmp 0x108f9fb6 */
  goto L_108f9fb6;
L_108f9fad:;
  /* 108f9fad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9fb0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f9fb3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_108f9fb6:;
  /* 108f9fb6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9fba jge 0x108fa1ed */
  if ((C.sf==C.of)) goto L_108fa1ed;
  /* 108f9fc0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 108f9fca mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 108f9fd0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_108f9fd6:;
  /* 108f9fd6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 108f9fdc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f9fdf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 108f9fe5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108f9feb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f9ff1 je 0x108fa11a */
  if (C.zf) goto L_108fa11a;
  /* 108f9ff7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f9ffa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 108fa000 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa007 je 0x108fa11a */
  if (C.zf) goto L_108fa11a;
  /* 108fa00d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108fa013 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa019 jb 0x108fa02e */
  if (C.cf) goto L_108fa02e;
  /* 108fa01b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 108fa021 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa026 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa02c jb 0x108fa038 */
  if (C.cf) goto L_108fa038;
L_108fa02e:;
  /* 108fa02e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 108fa033 jmp 0x108fa289 */
  goto L_108fa289;
L_108fa038:;
  /* 108fa038 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108fa03e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 108fa044 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 108fa04a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 108fa050 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa053 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108fa056 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fa059 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa05e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_108fa064:;
  /* 108fa064 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fa067 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa06d je 0x108fa08e */
  if (C.zf) goto L_108fa08e;
  /* 108fa06f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fa072 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa078 jne 0x108fa07c */
  if (!C.zf) goto L_108fa07c;
  /* 108fa07a jmp 0x108fa08e */
  goto L_108fa08e;
L_108fa07c:;
  /* 108fa07c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fa07f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108fa081 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 108fa084 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fa087 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa089 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108fa08c jmp 0x108fa064 */
  goto L_108fa064;
L_108fa08e:;
  /* 108fa08e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fa091 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa097 jne 0x108fa0a3 */
  if (!C.zf) goto L_108fa0a3;
  /* 108fa099 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 108fa09e jmp 0x108fa289 */
  goto L_108fa289;
L_108fa0a3:;
  /* 108fa0a3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108fa0a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108fa0ab sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108fa0ae sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fa0b1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 108fa0b7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa0be jle 0x108fa0ca */
  if ((C.zf||C.sf!=C.of)) goto L_108fa0ca;
  /* 108fa0c0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_108fa0ca:;
  /* 108fa0ca mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 108fa0d0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa0d3 je 0x108fa0df */
  if (C.zf) goto L_108fa0df;
  /* 108fa0d5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 108fa0da jmp 0x108fa289 */
  goto L_108fa289;
L_108fa0df:;
  /* 108fa0df mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108fa0e5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108fa0e8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa0ee je 0x108fa0fa */
  if (C.zf) goto L_108fa0fa;
  /* 108fa0f0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 108fa0f5 jmp 0x108fa289 */
  goto L_108fa289;
L_108fa0fa:;
  /* 108fa0fa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108fa100 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 108fa106 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 108fa10c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa10f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 108fa115 jmp 0x108f9fd6 */
  goto L_108f9fd6;
L_108fa11a:;
  /* 108fa11a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa121 je 0x108fa191 */
  if (C.zf) goto L_108fa191;
  /* 108fa123 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa127 jge 0x108fa15b */
  if ((C.sf==C.of)) goto L_108fa15b;
  /* 108fa129 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108fa12e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108fa131 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108fa133 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 108fa139 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa13b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 108fa141 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108fa146 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108fa149 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108fa14b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 108fa151 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa153 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 108fa159 jmp 0x108fa191 */
  goto L_108fa191;
L_108fa15b:;
  /* 108fa15b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108fa15e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fa161 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108fa166 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108fa168 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 108fa16e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa170 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 108fa176 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108fa179 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fa17c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108fa181 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108fa183 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 108fa189 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa18b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_108fa191:;
  /* 108fa191 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 108fa197 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108fa19a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa1a0 jne 0x108fa1b4 */
  if (!C.zf) goto L_108fa1b4;
  /* 108fa1a2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108fa1a5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 108fa1ab cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa1b2 je 0x108fa1be */
  if (C.zf) goto L_108fa1be;
L_108fa1b4:;
  /* 108fa1b4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 108fa1b9 jmp 0x108fa289 */
  goto L_108fa289;
L_108fa1be:;
  /* 108fa1be mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 108fa1c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108fa1c7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa1cd je 0x108fa1d9 */
  if (C.zf) goto L_108fa1d9;
  /* 108fa1cf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 108fa1d4 jmp 0x108fa289 */
  goto L_108fa289;
L_108fa1d9:;
  /* 108fa1d9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 108fa1df add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa1e2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 108fa1e8 jmp 0x108f9fad */
  goto L_108f9fad;
L_108fa1ed:;
  /* 108fa1ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fa1f0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 108fa1f6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 108fa1fc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa200 jne 0x108fa21a */
  if (!C.zf) goto L_108fa21a;
  /* 108fa202 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fa205 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 108fa20b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 108fa211 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa218 je 0x108fa221 */
  if (C.zf) goto L_108fa221;
L_108fa21a:;
  /* 108fa21a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 108fa21f jmp 0x108fa289 */
  goto L_108fa289;
L_108fa221:;
  /* 108fa221 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 108fa227 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa22d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 108fa233 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108fa236 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa23b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108fa23e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa241 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108fa243 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108fa246 jmp 0x108f9d4a */
  goto L_108f9d4a;
L_108fa24b:;
  /* 108fa24b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108fa251 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 108fa257 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa259 jne 0x108fa26c */
  if (!C.zf) goto L_108fa26c;
  /* 108fa25b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108fa261 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 108fa267 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa26a je 0x108fa273 */
  if (C.zf) goto L_108fa273;
L_108fa26c:;
  /* 108fa26c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 108fa271 jmp 0x108fa289 */
  goto L_108fa289;
L_108fa273:;
  /* 108fa273 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108fa279 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa27c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 108fa282 jmp 0x108f9cb3 */
  goto L_108f9cb3;
L_108fa287:;
  /* 108fa287 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108fa289:;
  /* 108fa289 mov esp, ebp */
  ESP = (EBP);
  /* 108fa28b pop ebp */
  EBP = (pop32());
  /* 108fa28c ret  */
  ESPCHK(0x108f9c70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a290 @ 0x108fa290 (250 bytes, 92 insns) */
void f_108fa290(void) {
  FTRACE(0x108fa290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fa290 push ebp */
  push32((uint32_t)(EBP));
  /* 108fa291 mov ebp, esp */
  EBP = (ESP);
  /* 108fa293 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fa296 push ebx */
  push32((uint32_t)(EBX));
  /* 108fa297 push esi */
  push32((uint32_t)(ESI));
  /* 108fa298 push edi */
  push32((uint32_t)(EDI));
  /* 108fa299 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 108fa29c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108fa29f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 108fa2a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_108fa2a5:;
  /* 108fa2a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa2a9 jne 0x108fa2c9 */
  if (!C.zf) goto L_108fa2c9;
  /* 108fa2ab push 0x1091bf30 */
  push32((uint32_t)(0x1091bf30u));
  /* 108fa2b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fa2b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 108fa2b4 push 0x1091bf24 */
  push32((uint32_t)(0x1091bf24u));
  /* 108fa2b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fa2bb call 0x108f3440 */
  push32(0x108fa2c0u); f_108f3440();
  /* 108fa2c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa2c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa2c6 jne 0x108fa2c9 */
  if (!C.zf) goto L_108fa2c9;
  /* 108fa2c8 int3  */
  x86_unimpl("int3 @ 0x108fa2c8");
L_108fa2c9:;
  /* 108fa2c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fa2cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fa2cd jne 0x108fa2a5 */
  if (!C.zf) goto L_108fa2a5;
L_108fa2cf:;
  /* 108fa2cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa2d3 jne 0x108fa2f3 */
  if (!C.zf) goto L_108fa2f3;
  /* 108fa2d5 push 0x1091bf14 */
  push32((uint32_t)(0x1091bf14u));
  /* 108fa2da push 0 */
  push32((uint32_t)(0x0u));
  /* 108fa2dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 108fa2de push 0x1091bf24 */
  push32((uint32_t)(0x1091bf24u));
  /* 108fa2e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fa2e5 call 0x108f3440 */
  push32(0x108fa2eau); f_108f3440();
  /* 108fa2ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa2ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa2f0 jne 0x108fa2f3 */
  if (!C.zf) goto L_108fa2f3;
  /* 108fa2f2 int3  */
  x86_unimpl("int3 @ 0x108fa2f2");
L_108fa2f3:;
  /* 108fa2f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa2f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fa2f7 jne 0x108fa2cf */
  if (!C.zf) goto L_108fa2cf;
  /* 108fa2f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa2fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 108fa303 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa309 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108fa30c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa30f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa312 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108fa314 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa317 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 108fa31e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108fa321 push ecx */
  push32((uint32_t)(ECX));
  /* 108fa322 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fa325 push edx */
  push32((uint32_t)(EDX));
  /* 108fa326 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa329 push eax */
  push32((uint32_t)(EAX));
  /* 108fa32a call 0x108fb310 */
  push32(0x108fa32fu); f_108fb310();
  /* 108fa32f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa332 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108fa335 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa338 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108fa33b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fa33e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa341 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108fa344 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa347 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa34b jl 0x108fa36f */
  if ((C.sf!=C.of)) goto L_108fa36f;
  /* 108fa34d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa350 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108fa352 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108fa355 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fa357 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108fa35d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 108fa360 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa363 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108fa365 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa368 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa36b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108fa36d jmp 0x108fa380 */
  goto L_108fa380;
L_108fa36f:;
  /* 108fa36f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa372 push edx */
  push32((uint32_t)(EDX));
  /* 108fa373 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fa375 call 0x108fb090 */
  push32(0x108fa37au); f_108fb090();
  /* 108fa37a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa37d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_108fa380:;
  /* 108fa380 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fa383 pop edi */
  EDI = (pop32());
  /* 108fa384 pop esi */
  ESI = (pop32());
  /* 108fa385 pop ebx */
  EBX = (pop32());
  /* 108fa386 mov esp, ebp */
  ESP = (EBP);
  /* 108fa388 pop ebp */
  EBP = (pop32());
  /* 108fa389 ret  */
  ESPCHK(0x108fa290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a390 @ 0x108fa390 (183 bytes, 58 insns) */
void f_108fa390(void) {
  FTRACE(0x108fa390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fa390 push ebp */
  push32((uint32_t)(EBP));
  /* 108fa391 mov ebp, esp */
  EBP = (ESP);
  /* 108fa393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fa396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa399 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa39c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa3a1 ja 0x108fa3ba */
  if ((!C.cf&&!C.zf)) goto L_108fa3ba;
  /* 108fa3a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa3a6 mov edx, dword ptr [0x1091ec98] */
  EDX = (r32((uint32_t)(0x1091ec98)));
  /* 108fa3ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa3ae mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 108fa3b2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 108fa3b5 jmp 0x108fa443 */
  goto L_108fa443;
L_108fa3ba:;
  /* 108fa3ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa3bd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 108fa3c0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108fa3c6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108fa3cc mov edx, dword ptr [0x1091ec98] */
  EDX = (r32((uint32_t)(0x1091ec98)));
  /* 108fa3d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa3d4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 108fa3d8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 108fa3dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fa3df je 0x108fa403 */
  if (C.zf) goto L_108fa403;
  /* 108fa3e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa3e4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 108fa3e7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108fa3ed mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 108fa3f0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 108fa3f3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 108fa3f6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 108fa3fa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 108fa401 jmp 0x108fa414 */
  goto L_108fa414;
L_108fa403:;
  /* 108fa403 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 108fa406 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 108fa409 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 108fa40d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_108fa414:;
  /* 108fa414 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fa416 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fa418 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fa41a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 108fa41d push ecx */
  push32((uint32_t)(ECX));
  /* 108fa41e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fa421 push edx */
  push32((uint32_t)(EDX));
  /* 108fa422 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 108fa425 push eax */
  push32((uint32_t)(EAX));
  /* 108fa426 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fa428 call 0x108fc5b0 */
  push32(0x108fa42du); f_108fc5b0();
  /* 108fa42d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fa432 jne 0x108fa438 */
  if (!C.zf) goto L_108fa438;
  /* 108fa434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa436 jmp 0x108fa443 */
  goto L_108fa443;
L_108fa438:;
  /* 108fa438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa43b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fa440 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_108fa443:;
  /* 108fa443 mov esp, ebp */
  ESP = (EBP);
  /* 108fa445 pop ebp */
  EBP = (pop32());
  /* 108fa446 ret  */
  ESPCHK(0x108fa390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a450 @ 0x108fa450 (836 bytes, 238 insns) */
void f_108fa450(void) {
  FTRACE(0x108fa450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fa450 push ebp */
  push32((uint32_t)(EBP));
  /* 108fa451 mov ebp, esp */
  EBP = (ESP);
  /* 108fa453 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fa456 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108fa458 call 0x108f7d80 */
  push32(0x108fa45du); f_108f7d80();
  /* 108fa45d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa463 push eax */
  push32((uint32_t)(EAX));
  /* 108fa464 call 0x108fa7a0 */
  push32(0x108fa469u); f_108fa7a0();
  /* 108fa469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa46c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108fa46f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa472 cmp ecx, dword ptr [0x10921ca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10921ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa478 jne 0x108fa48b */
  if (!C.zf) goto L_108fa48b;
  /* 108fa47a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108fa47c call 0x108f7e20 */
  push32(0x108fa481u); f_108f7e20();
  /* 108fa481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa486 jmp 0x108fa790 */
  goto L_108fa790;
L_108fa48b:;
  /* 108fa48b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa48f jne 0x108fa4ac */
  if (!C.zf) goto L_108fa4ac;
  /* 108fa491 call 0x108fa880 */
  push32(0x108fa496u); f_108fa880();
  /* 108fa496 call 0x108fa900 */
  push32(0x108fa49bu); f_108fa900();
  /* 108fa49b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108fa49d call 0x108f7e20 */
  push32(0x108fa4a2u); f_108f7e20();
  /* 108fa4a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa4a7 jmp 0x108fa790 */
  goto L_108fa790;
L_108fa4ac:;
  /* 108fa4ac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fa4b3 jmp 0x108fa4be */
  goto L_108fa4be;
L_108fa4b5:;
  /* 108fa4b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa4b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa4bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108fa4be:;
  /* 108fa4be cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa4c2 jae 0x108fa60f */
  if (!C.cf) goto L_108fa60f;
  /* 108fa4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa4cb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fa4ce mov ecx, dword ptr [eax + 0x1091eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1091eeb8)));
  /* 108fa4d4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa4d7 jne 0x108fa60a */
  if (!C.zf) goto L_108fa60a;
  /* 108fa4dd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108fa4e4 jmp 0x108fa4ef */
  goto L_108fa4ef;
L_108fa4e6:;
  /* 108fa4e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa4e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa4ec mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_108fa4ef:;
  /* 108fa4ef cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa4f6 jae 0x108fa504 */
  if (!C.cf) goto L_108fa504;
  /* 108fa4f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa4fb mov byte ptr [eax + 0x10921e40], 0 */
  w8((uint32_t)(EAX + 0x10921e40), (0x0u));
  /* 108fa502 jmp 0x108fa4e6 */
  goto L_108fa4e6;
L_108fa504:;
  /* 108fa504 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108fa50b jmp 0x108fa516 */
  goto L_108fa516;
L_108fa50d:;
  /* 108fa50d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fa510 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa513 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_108fa516:;
  /* 108fa516 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa51a jae 0x108fa597 */
  if (!C.cf) goto L_108fa597;
  /* 108fa51c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa51f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fa522 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fa525 lea ecx, [edx + eax*8 + 0x1091eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1091eec8));
  /* 108fa52c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108fa52f jmp 0x108fa53a */
  goto L_108fa53a;
L_108fa531:;
  /* 108fa531 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fa534 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa537 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108fa53a:;
  /* 108fa53a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fa53d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fa53f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108fa541 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fa543 je 0x108fa592 */
  if (C.zf) goto L_108fa592;
  /* 108fa545 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fa548 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa54a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108fa54d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fa54f je 0x108fa592 */
  if (C.zf) goto L_108fa592;
  /* 108fa551 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fa554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fa556 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108fa558 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108fa55b jmp 0x108fa566 */
  goto L_108fa566;
L_108fa55d:;
  /* 108fa55d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa560 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa563 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108fa566:;
  /* 108fa566 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fa569 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fa56b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 108fa56e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa571 ja 0x108fa590 */
  if ((!C.cf&&!C.zf)) goto L_108fa590;
  /* 108fa573 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa576 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fa579 mov dl, byte ptr [eax + 0x10921e41] */
  DL = (r8((uint32_t)(EAX + 0x10921e41)));
  /* 108fa57f or dl, byte ptr [ecx + 0x1091eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1091eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 108fa585 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa588 mov byte ptr [eax + 0x10921e41], dl */
  w8((uint32_t)(EAX + 0x10921e41), (DL));
  /* 108fa58e jmp 0x108fa55d */
  goto L_108fa55d;
L_108fa590:;
  /* 108fa590 jmp 0x108fa531 */
  goto L_108fa531;
L_108fa592:;
  /* 108fa592 jmp 0x108fa50d */
  goto L_108fa50d;
L_108fa597:;
  /* 108fa597 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa59a mov dword ptr [0x10921ca4], ecx */
  w32((uint32_t)(0x10921ca4), (ECX));
  /* 108fa5a0 mov dword ptr [0x10921d2c], 1 */
  w32((uint32_t)(0x10921d2c), (0x1u));
  /* 108fa5aa mov edx, dword ptr [0x10921ca4] */
  EDX = (r32((uint32_t)(0x10921ca4)));
  /* 108fa5b0 push edx */
  push32((uint32_t)(EDX));
  /* 108fa5b1 call 0x108fa800 */
  push32(0x108fa5b6u); f_108fa800();
  /* 108fa5b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa5b9 mov dword ptr [0x10921f44], eax */
  w32((uint32_t)(0x10921f44), (EAX));
  /* 108fa5be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108fa5c5 jmp 0x108fa5d0 */
  goto L_108fa5d0;
L_108fa5c7:;
  /* 108fa5c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fa5ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa5cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108fa5d0:;
  /* 108fa5d0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa5d4 jae 0x108fa5f4 */
  if (!C.cf) goto L_108fa5f4;
  /* 108fa5d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa5d9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fa5dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fa5df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fa5e2 mov cx, word ptr [ecx + eax*2 + 0x1091eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1091eebc)));
  /* 108fa5ea mov word ptr [edx*2 + 0x10921d20], cx */
  w16((uint32_t)(EDX*2 + 0x10921d20), (CX));
  /* 108fa5f2 jmp 0x108fa5c7 */
  goto L_108fa5c7;
L_108fa5f4:;
  /* 108fa5f4 call 0x108fa900 */
  push32(0x108fa5f9u); f_108fa900();
  /* 108fa5f9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108fa5fb call 0x108f7e20 */
  push32(0x108fa600u); f_108f7e20();
  /* 108fa600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa605 jmp 0x108fa790 */
  goto L_108fa790;
L_108fa60a:;
  /* 108fa60a jmp 0x108fa4b5 */
  goto L_108fa4b5;
L_108fa60f:;
  /* 108fa60f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 108fa612 push edx */
  push32((uint32_t)(EDX));
  /* 108fa613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa616 push eax */
  push32((uint32_t)(EAX));
  /* 108fa617 call dword ptr [0x1092331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092331c))), 0x108fa61du);
  /* 108fa61d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa620 jne 0x108fa762 */
  if (!C.zf) goto L_108fa762;
  /* 108fa626 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108fa62d jmp 0x108fa638 */
  goto L_108fa638;
L_108fa62f:;
  /* 108fa62f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa632 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa635 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_108fa638:;
  /* 108fa638 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa63f jae 0x108fa64d */
  if (!C.cf) goto L_108fa64d;
  /* 108fa641 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa644 mov byte ptr [edx + 0x10921e40], 0 */
  w8((uint32_t)(EDX + 0x10921e40), (0x0u));
  /* 108fa64b jmp 0x108fa62f */
  goto L_108fa62f;
L_108fa64d:;
  /* 108fa64d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa650 mov dword ptr [0x10921ca4], eax */
  w32((uint32_t)(0x10921ca4), (EAX));
  /* 108fa655 mov dword ptr [0x10921f44], 0 */
  w32((uint32_t)(0x10921f44), (0x0u));
  /* 108fa65f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa663 jbe 0x108fa71e */
  if ((C.cf||C.zf)) goto L_108fa71e;
  /* 108fa669 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 108fa66c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 108fa66f jmp 0x108fa67a */
  goto L_108fa67a;
L_108fa671:;
  /* 108fa671 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fa674 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa677 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_108fa67a:;
  /* 108fa67a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fa67d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fa67f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108fa681 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fa683 je 0x108fa6cc */
  if (C.zf) goto L_108fa6cc;
  /* 108fa685 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fa688 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa68a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108fa68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fa68f je 0x108fa6cc */
  if (C.zf) goto L_108fa6cc;
  /* 108fa691 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fa694 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fa696 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108fa698 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108fa69b jmp 0x108fa6a6 */
  goto L_108fa6a6;
L_108fa69d:;
  /* 108fa69d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa6a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa6a3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108fa6a6:;
  /* 108fa6a6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fa6a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fa6ab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 108fa6ae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa6b1 ja 0x108fa6ca */
  if ((!C.cf&&!C.zf)) goto L_108fa6ca;
  /* 108fa6b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa6b6 mov cl, byte ptr [eax + 0x10921e41] */
  CL = (r8((uint32_t)(EAX + 0x10921e41)));
  /* 108fa6bc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 108fa6bf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa6c2 mov byte ptr [edx + 0x10921e41], cl */
  w8((uint32_t)(EDX + 0x10921e41), (CL));
  /* 108fa6c8 jmp 0x108fa69d */
  goto L_108fa69d;
L_108fa6ca:;
  /* 108fa6ca jmp 0x108fa671 */
  goto L_108fa671;
L_108fa6cc:;
  /* 108fa6cc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 108fa6d3 jmp 0x108fa6de */
  goto L_108fa6de;
L_108fa6d5:;
  /* 108fa6d5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa6d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa6db mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108fa6de:;
  /* 108fa6de cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa6e5 jae 0x108fa6fe */
  if (!C.cf) goto L_108fa6fe;
  /* 108fa6e7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa6ea mov dl, byte ptr [ecx + 0x10921e41] */
  DL = (r8((uint32_t)(ECX + 0x10921e41)));
  /* 108fa6f0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 108fa6f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fa6f6 mov byte ptr [eax + 0x10921e41], dl */
  w8((uint32_t)(EAX + 0x10921e41), (DL));
  /* 108fa6fc jmp 0x108fa6d5 */
  goto L_108fa6d5;
L_108fa6fe:;
  /* 108fa6fe mov ecx, dword ptr [0x10921ca4] */
  ECX = (r32((uint32_t)(0x10921ca4)));
  /* 108fa704 push ecx */
  push32((uint32_t)(ECX));
  /* 108fa705 call 0x108fa800 */
  push32(0x108fa70au); f_108fa800();
  /* 108fa70a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa70d mov dword ptr [0x10921f44], eax */
  w32((uint32_t)(0x10921f44), (EAX));
  /* 108fa712 mov dword ptr [0x10921d2c], 1 */
  w32((uint32_t)(0x10921d2c), (0x1u));
  /* 108fa71c jmp 0x108fa728 */
  goto L_108fa728;
L_108fa71e:;
  /* 108fa71e mov dword ptr [0x10921d2c], 0 */
  w32((uint32_t)(0x10921d2c), (0x0u));
L_108fa728:;
  /* 108fa728 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108fa72f jmp 0x108fa73a */
  goto L_108fa73a;
L_108fa731:;
  /* 108fa731 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fa734 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa737 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108fa73a:;
  /* 108fa73a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa73e jae 0x108fa74f */
  if (!C.cf) goto L_108fa74f;
  /* 108fa740 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fa743 mov word ptr [eax*2 + 0x10921d20], 0 */
  w16((uint32_t)(EAX*2 + 0x10921d20), (0x0u));
  /* 108fa74d jmp 0x108fa731 */
  goto L_108fa731;
L_108fa74f:;
  /* 108fa74f call 0x108fa900 */
  push32(0x108fa754u); f_108fa900();
  /* 108fa754 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108fa756 call 0x108f7e20 */
  push32(0x108fa75bu); f_108f7e20();
  /* 108fa75b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa75e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa760 jmp 0x108fa790 */
  goto L_108fa790;
L_108fa762:;
  /* 108fa762 cmp dword ptr [0x109207a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa769 je 0x108fa783 */
  if (C.zf) goto L_108fa783;
  /* 108fa76b call 0x108fa880 */
  push32(0x108fa770u); f_108fa880();
  /* 108fa770 call 0x108fa900 */
  push32(0x108fa775u); f_108fa900();
  /* 108fa775 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108fa777 call 0x108f7e20 */
  push32(0x108fa77cu); f_108f7e20();
  /* 108fa77c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa77f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fa781 jmp 0x108fa790 */
  goto L_108fa790;
L_108fa783:;
  /* 108fa783 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108fa785 call 0x108f7e20 */
  push32(0x108fa78au); f_108f7e20();
  /* 108fa78a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa78d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108fa790:;
  /* 108fa790 mov esp, ebp */
  ESP = (EBP);
  /* 108fa792 pop ebp */
  EBP = (pop32());
  /* 108fa793 ret  */
  ESPCHK(0x108fa450u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x108fa7a0 (89 bytes, 21 insns) */
void f_108fa7a0(void) {
  FTRACE(0x108fa7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fa7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fa7a1 mov ebp, esp */
  EBP = (ESP);
  /* 108fa7a3 mov dword ptr [0x109207a8], 0 */
  w32((uint32_t)(0x109207a8), (0x0u));
  /* 108fa7ad cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa7b1 jne 0x108fa7c5 */
  if (!C.zf) goto L_108fa7c5;
  /* 108fa7b3 mov dword ptr [0x109207a8], 1 */
  w32((uint32_t)(0x109207a8), (0x1u));
  /* 108fa7bd call dword ptr [0x10923314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923314))), 0x108fa7c3u);
  /* 108fa7c3 jmp 0x108fa7f7 */
  goto L_108fa7f7;
L_108fa7c5:;
  /* 108fa7c5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa7c9 jne 0x108fa7dd */
  if (!C.zf) goto L_108fa7dd;
  /* 108fa7cb mov dword ptr [0x109207a8], 1 */
  w32((uint32_t)(0x109207a8), (0x1u));
  /* 108fa7d5 call dword ptr [0x10923318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923318))), 0x108fa7dbu);
  /* 108fa7db jmp 0x108fa7f7 */
  goto L_108fa7f7;
L_108fa7dd:;
  /* 108fa7dd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa7e1 jne 0x108fa7f4 */
  if (!C.zf) goto L_108fa7f4;
  /* 108fa7e3 mov dword ptr [0x109207a8], 1 */
  w32((uint32_t)(0x109207a8), (0x1u));
  /* 108fa7ed mov eax, dword ptr [0x109207c8] */
  EAX = (r32((uint32_t)(0x109207c8)));
  /* 108fa7f2 jmp 0x108fa7f7 */
  goto L_108fa7f7;
L_108fa7f4:;
  /* 108fa7f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_108fa7f7:;
  /* 108fa7f7 pop ebp */
  EBP = (pop32());
  /* 108fa7f8 ret  */
  ESPCHK(0x108fa7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a800 @ 0x108fa800 (80 bytes, 26 insns) [1 switch table(s)] */
void f_108fa800(void) {
  FTRACE(0x108fa800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fa800 push ebp */
  push32((uint32_t)(EBP));
  /* 108fa801 mov ebp, esp */
  EBP = (ESP);
  /* 108fa803 push ecx */
  push32((uint32_t)(ECX));
  /* 108fa804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fa807 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fa80a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa80d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fa813 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108fa816 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa81a ja 0x108fa84a */
  if ((!C.cf&&!C.zf)) goto L_108fa84a;
  /* 108fa81c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa81f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fa821 mov dl, byte ptr [eax + 0x108fa864] */
  DL = (r8((uint32_t)(EAX + 0x108fa864)));
  /* 108fa827 jmp dword ptr [edx*4 + 0x108fa850] */
  switch (EDX) {
    case 0: goto L_108fa82e;
    case 1: goto L_108fa835;
    case 2: goto L_108fa83c;
    case 3: goto L_108fa843;
    case 4: goto L_108fa84a;
    default: x86_unimpl("switch@0x108fa827 out of table"); return;
  }
L_108fa82e:;
  /* 108fa82e mov eax, 0x411 */
  EAX = (0x411u);
  /* 108fa833 jmp 0x108fa84c */
  goto L_108fa84c;
L_108fa835:;
  /* 108fa835 mov eax, 0x804 */
  EAX = (0x804u);
  /* 108fa83a jmp 0x108fa84c */
  goto L_108fa84c;
L_108fa83c:;
  /* 108fa83c mov eax, 0x412 */
  EAX = (0x412u);
  /* 108fa841 jmp 0x108fa84c */
  goto L_108fa84c;
L_108fa843:;
  /* 108fa843 mov eax, 0x404 */
  EAX = (0x404u);
  /* 108fa848 jmp 0x108fa84c */
  goto L_108fa84c;
L_108fa84a:;
  /* 108fa84a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108fa84c:;
  /* 108fa84c mov esp, ebp */
  ESP = (EBP);
  /* 108fa84e pop ebp */
  EBP = (pop32());
  /* 108fa84f ret  */
  ESPCHK(0x108fa800u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x108fa880 (116 bytes, 29 insns) */
void f_108fa880(void) {
  FTRACE(0x108fa880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fa880 push ebp */
  push32((uint32_t)(EBP));
  /* 108fa881 mov ebp, esp */
  EBP = (ESP);
  /* 108fa883 push ecx */
  push32((uint32_t)(ECX));
  /* 108fa884 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fa88b jmp 0x108fa896 */
  goto L_108fa896;
L_108fa88d:;
  /* 108fa88d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa890 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa893 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108fa896:;
  /* 108fa896 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa89d jge 0x108fa8ab */
  if ((C.sf==C.of)) goto L_108fa8ab;
  /* 108fa89f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa8a2 mov byte ptr [ecx + 0x10921e40], 0 */
  w8((uint32_t)(ECX + 0x10921e40), (0x0u));
  /* 108fa8a9 jmp 0x108fa88d */
  goto L_108fa88d;
L_108fa8ab:;
  /* 108fa8ab mov dword ptr [0x10921ca4], 0 */
  w32((uint32_t)(0x10921ca4), (0x0u));
  /* 108fa8b5 mov dword ptr [0x10921d2c], 0 */
  w32((uint32_t)(0x10921d2c), (0x0u));
  /* 108fa8bf mov dword ptr [0x10921f44], 0 */
  w32((uint32_t)(0x10921f44), (0x0u));
  /* 108fa8c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fa8d0 jmp 0x108fa8db */
  goto L_108fa8db;
L_108fa8d2:;
  /* 108fa8d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa8d5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa8d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108fa8db:;
  /* 108fa8db cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa8df jge 0x108fa8f0 */
  if ((C.sf==C.of)) goto L_108fa8f0;
  /* 108fa8e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa8e4 mov word ptr [eax*2 + 0x10921d20], 0 */
  w16((uint32_t)(EAX*2 + 0x10921d20), (0x0u));
  /* 108fa8ee jmp 0x108fa8d2 */
  goto L_108fa8d2;
L_108fa8f0:;
  /* 108fa8f0 mov esp, ebp */
  ESP = (EBP);
  /* 108fa8f2 pop ebp */
  EBP = (pop32());
  /* 108fa8f3 ret  */
  ESPCHK(0x108fa880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a900 @ 0x108fa900 (770 bytes, 175 insns) */
void f_108fa900(void) {
  FTRACE(0x108fa900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fa900 push ebp */
  push32((uint32_t)(EBP));
  /* 108fa901 mov ebp, esp */
  EBP = (ESP);
  /* 108fa903 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fa909 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 108fa90f push eax */
  push32((uint32_t)(EAX));
  /* 108fa910 mov ecx, dword ptr [0x10921ca4] */
  ECX = (r32((uint32_t)(0x10921ca4)));
  /* 108fa916 push ecx */
  push32((uint32_t)(ECX));
  /* 108fa917 call dword ptr [0x1092331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092331c))), 0x108fa91du);
  /* 108fa91d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa920 jne 0x108fab39 */
  if (!C.zf) goto L_108fab39;
  /* 108fa926 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 108fa930 jmp 0x108fa941 */
  goto L_108fa941;
L_108fa932:;
  /* 108fa932 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fa938 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa93b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_108fa941:;
  /* 108fa941 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa94b jae 0x108fa962 */
  if (!C.cf) goto L_108fa962;
  /* 108fa94d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fa953 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 108fa959 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 108fa960 jmp 0x108fa932 */
  goto L_108fa932;
L_108fa962:;
  /* 108fa962 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 108fa969 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 108fa96f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108fa972 jmp 0x108fa97d */
  goto L_108fa97d;
L_108fa974:;
  /* 108fa974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa977 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa97a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108fa97d:;
  /* 108fa97d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa980 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fa982 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108fa984 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fa986 je 0x108fa9c8 */
  if (C.zf) goto L_108fa9c8;
  /* 108fa988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa98b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fa98d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108fa98f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 108fa995 jmp 0x108fa9a6 */
  goto L_108fa9a6;
L_108fa997:;
  /* 108fa997 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fa99d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa9a0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_108fa9a6:;
  /* 108fa9a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fa9a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fa9ab mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 108fa9ae cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fa9b4 ja 0x108fa9c6 */
  if ((!C.cf&&!C.zf)) goto L_108fa9c6;
  /* 108fa9b6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fa9bc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 108fa9c4 jmp 0x108fa997 */
  goto L_108fa997;
L_108fa9c6:;
  /* 108fa9c6 jmp 0x108fa974 */
  goto L_108fa974;
L_108fa9c8:;
  /* 108fa9c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fa9ca mov eax, dword ptr [0x10921f44] */
  EAX = (r32((uint32_t)(0x10921f44)));
  /* 108fa9cf push eax */
  push32((uint32_t)(EAX));
  /* 108fa9d0 mov ecx, dword ptr [0x10921ca4] */
  ECX = (r32((uint32_t)(0x10921ca4)));
  /* 108fa9d6 push ecx */
  push32((uint32_t)(ECX));
  /* 108fa9d7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 108fa9dd push edx */
  push32((uint32_t)(EDX));
  /* 108fa9de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108fa9e3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 108fa9e9 push eax */
  push32((uint32_t)(EAX));
  /* 108fa9ea push 1 */
  push32((uint32_t)(0x1u));
  /* 108fa9ec call 0x108fc5b0 */
  push32(0x108fa9f1u); f_108fc5b0();
  /* 108fa9f1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fa9f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fa9f6 mov ecx, dword ptr [0x10921ca4] */
  ECX = (r32((uint32_t)(0x10921ca4)));
  /* 108fa9fc push ecx */
  push32((uint32_t)(ECX));
  /* 108fa9fd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108faa02 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 108faa08 push edx */
  push32((uint32_t)(EDX));
  /* 108faa09 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108faa0e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 108faa14 push eax */
  push32((uint32_t)(EAX));
  /* 108faa15 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108faa1a mov ecx, dword ptr [0x10921f44] */
  ECX = (r32((uint32_t)(0x10921f44)));
  /* 108faa20 push ecx */
  push32((uint32_t)(ECX));
  /* 108faa21 call 0x108fc770 */
  push32(0x108faa26u); f_108fc770();
  /* 108faa26 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108faa29 push 0 */
  push32((uint32_t)(0x0u));
  /* 108faa2b mov edx, dword ptr [0x10921ca4] */
  EDX = (r32((uint32_t)(0x10921ca4)));
  /* 108faa31 push edx */
  push32((uint32_t)(EDX));
  /* 108faa32 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108faa37 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 108faa3d push eax */
  push32((uint32_t)(EAX));
  /* 108faa3e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108faa43 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 108faa49 push ecx */
  push32((uint32_t)(ECX));
  /* 108faa4a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 108faa4f mov edx, dword ptr [0x10921f44] */
  EDX = (r32((uint32_t)(0x10921f44)));
  /* 108faa55 push edx */
  push32((uint32_t)(EDX));
  /* 108faa56 call 0x108fc770 */
  push32(0x108faa5bu); f_108fc770();
  /* 108faa5b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108faa5e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 108faa68 jmp 0x108faa79 */
  goto L_108faa79;
L_108faa6a:;
  /* 108faa6a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108faa70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108faa73 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_108faa79:;
  /* 108faa79 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108faa83 jae 0x108fab34 */
  if (!C.cf) goto L_108fab34;
  /* 108faa89 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108faa8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108faa91 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 108faa99 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108faa9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108faa9e je 0x108faad6 */
  if (C.zf) goto L_108faad6;
  /* 108faaa0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108faaa6 mov cl, byte ptr [eax + 0x10921e41] */
  CL = (r8((uint32_t)(EAX + 0x10921e41)));
  /* 108faaac or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 108faaaf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108faab5 mov byte ptr [edx + 0x10921e41], cl */
  w8((uint32_t)(EDX + 0x10921e41), (CL));
  /* 108faabb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108faac1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108faac7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 108faace mov byte ptr [eax + 0x10921d40], dl */
  w8((uint32_t)(EAX + 0x10921d40), (DL));
  /* 108faad4 jmp 0x108fab2f */
  goto L_108fab2f;
L_108faad6:;
  /* 108faad6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108faadc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108faade mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 108faae6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 108faae9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108faaeb je 0x108fab22 */
  if (C.zf) goto L_108fab22;
  /* 108faaed mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108faaf3 mov al, byte ptr [edx + 0x10921e41] */
  AL = (r8((uint32_t)(EDX + 0x10921e41)));
  /* 108faaf9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 108faafb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fab01 mov byte ptr [ecx + 0x10921e41], al */
  w8((uint32_t)(ECX + 0x10921e41), (AL));
  /* 108fab07 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fab0d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fab13 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 108fab1a mov byte ptr [edx + 0x10921d40], cl */
  w8((uint32_t)(EDX + 0x10921d40), (CL));
  /* 108fab20 jmp 0x108fab2f */
  goto L_108fab2f;
L_108fab22:;
  /* 108fab22 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fab28 mov byte ptr [edx + 0x10921d40], 0 */
  w8((uint32_t)(EDX + 0x10921d40), (0x0u));
L_108fab2f:;
  /* 108fab2f jmp 0x108faa6a */
  goto L_108faa6a;
L_108fab34:;
  /* 108fab34 jmp 0x108fabfe */
  goto L_108fabfe;
L_108fab39:;
  /* 108fab39 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 108fab43 jmp 0x108fab54 */
  goto L_108fab54;
L_108fab45:;
  /* 108fab45 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fab4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fab4e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_108fab54:;
  /* 108fab54 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fab5e jae 0x108fabfe */
  if (!C.cf) goto L_108fabfe;
  /* 108fab64 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fab6b jb 0x108faba8 */
  if (C.cf) goto L_108faba8;
  /* 108fab6d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fab74 ja 0x108faba8 */
  if ((!C.cf&&!C.zf)) goto L_108faba8;
  /* 108fab76 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fab7c mov dl, byte ptr [ecx + 0x10921e41] */
  DL = (r8((uint32_t)(ECX + 0x10921e41)));
  /* 108fab82 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 108fab85 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fab8b mov byte ptr [eax + 0x10921e41], dl */
  w8((uint32_t)(EAX + 0x10921e41), (DL));
  /* 108fab91 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fab97 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fab9a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108faba0 mov byte ptr [edx + 0x10921d40], cl */
  w8((uint32_t)(EDX + 0x10921d40), (CL));
  /* 108faba6 jmp 0x108fabf9 */
  goto L_108fabf9;
L_108faba8:;
  /* 108faba8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fabaf jb 0x108fabec */
  if (C.cf) goto L_108fabec;
  /* 108fabb1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fabb8 ja 0x108fabec */
  if ((!C.cf&&!C.zf)) goto L_108fabec;
  /* 108fabba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fabc0 mov cl, byte ptr [eax + 0x10921e41] */
  CL = (r8((uint32_t)(EAX + 0x10921e41)));
  /* 108fabc6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 108fabc9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fabcf mov byte ptr [edx + 0x10921e41], cl */
  w8((uint32_t)(EDX + 0x10921e41), (CL));
  /* 108fabd5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fabdb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fabde mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fabe4 mov byte ptr [ecx + 0x10921d40], al */
  w8((uint32_t)(ECX + 0x10921d40), (AL));
  /* 108fabea jmp 0x108fabf9 */
  goto L_108fabf9;
L_108fabec:;
  /* 108fabec mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108fabf2 mov byte ptr [edx + 0x10921d40], 0 */
  w8((uint32_t)(EDX + 0x10921d40), (0x0u));
L_108fabf9:;
  /* 108fabf9 jmp 0x108fab45 */
  goto L_108fab45;
L_108fabfe:;
  /* 108fabfe mov esp, ebp */
  ESP = (EBP);
  /* 108fac00 pop ebp */
  EBP = (pop32());
  /* 108fac01 ret  */
  ESPCHK(0x108fa900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac10 @ 0x108fac10 (23 bytes, 9 insns) */
void f_108fac10(void) {
  FTRACE(0x108fac10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fac10 push ebp */
  push32((uint32_t)(EBP));
  /* 108fac11 mov ebp, esp */
  EBP = (ESP);
  /* 108fac13 cmp dword ptr [0x10921d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10921d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fac1a je 0x108fac23 */
  if (C.zf) goto L_108fac23;
  /* 108fac1c mov eax, dword ptr [0x10921ca4] */
  EAX = (r32((uint32_t)(0x10921ca4)));
  /* 108fac21 jmp 0x108fac25 */
  goto L_108fac25;
L_108fac23:;
  /* 108fac23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108fac25:;
  /* 108fac25 pop ebp */
  EBP = (pop32());
  /* 108fac26 ret  */
  ESPCHK(0x108fac10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac30 @ 0x108fac30 (34 bytes, 10 insns) */
void f_108fac30(void) {
  FTRACE(0x108fac30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fac30 push ebp */
  push32((uint32_t)(EBP));
  /* 108fac31 mov ebp, esp */
  EBP = (ESP);
  /* 108fac33 cmp dword ptr [0x109220f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109220f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fac3a jne 0x108fac50 */
  if (!C.zf) goto L_108fac50;
  /* 108fac3c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 108fac3e call 0x108fa450 */
  push32(0x108fac43u); f_108fa450();
  /* 108fac43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fac46 mov dword ptr [0x109220f0], 1 */
  w32((uint32_t)(0x109220f0), (0x1u));
L_108fac50:;
  /* 108fac50 pop ebp */
  EBP = (pop32());
  /* 108fac51 ret  */
  ESPCHK(0x108fac30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac60 @ 0x108fac60 (664 bytes, 260 insns) [15 switch table(s)] */
void f_108fac60(void) {
  FTRACE(0x108fac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fac60 push ebp */
  push32((uint32_t)(EBP));
  /* 108fac61 mov ebp, esp */
  EBP = (ESP);
  /* 108fac63 push edi */
  push32((uint32_t)(EDI));
  /* 108fac64 push esi */
  push32((uint32_t)(ESI));
  /* 108fac65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108fac68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fac6b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 108fac6e mov eax, ecx */
  EAX = (ECX);
  /* 108fac70 mov edx, ecx */
  EDX = (ECX);
  /* 108fac72 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fac74 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fac76 jbe 0x108fac80 */
  if ((C.cf||C.zf)) goto L_108fac80;
  /* 108fac78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fac7a jb 0x108fadf8 */
  if (C.cf) goto L_108fadf8;
L_108fac80:;
  /* 108fac80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108fac86 jne 0x108fac9c */
  if (!C.zf) goto L_108fac9c;
  /* 108fac88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fac8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108fac8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fac91 jb 0x108facbc */
  if (C.cf) goto L_108facbc;
  /* 108fac93 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fac95 jmp dword ptr [edx*4 + 0x108fada8] */
  switch (EDX) {
    case 0: goto L_108fadb8;
    case 1: goto L_108fadc0;
    case 2: goto L_108fadcc;
    case 3: goto L_108fade0;
    default: x86_unimpl("switch@0x108fac95 out of table"); return;
  }
L_108fac9c:;
  /* 108fac9c mov eax, edi */
  EAX = (EDI);
  /* 108fac9e mov edx, 3 */
  EDX = (0x3u);
  /* 108faca3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108faca6 jb 0x108facb4 */
  if (C.cf) goto L_108facb4;
  /* 108faca8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108facab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108facad jmp dword ptr [eax*4 + 0x108facc0] */
  switch (EAX) {
    case 1: goto L_108facd0;
    case 2: goto L_108facfc;
    case 3: goto L_108fad20;
    default: x86_unimpl("switch@0x108facad out of table"); return;
  }
L_108facb4:;
  /* 108facb4 jmp dword ptr [ecx*4 + 0x108fadb8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x108fadb8)))); return;
  /* 108facbb nop  */
  /* nop */
L_108facbc:;
  /* 108facbc jmp dword ptr [ecx*4 + 0x108fad3c] */
  switch (ECX) {
    case 0: goto L_108fad9f;
    case 1: goto L_108fad8c;
    case 2: goto L_108fad84;
    case 3: goto L_108fad7c;
    case 4: goto L_108fad74;
    case 5: goto L_108fad6c;
    case 6: goto L_108fad64;
    case 7: goto L_108fad5c;
    default: x86_unimpl("switch@0x108facbc out of table"); return;
  }
  /* 108facc3 nop  */
  /* nop */
L_108facd0:;
  /* 108facd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108facd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108facd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108facd6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108facd9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108facdc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108facdf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108face2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108face5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108face8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108faceb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108facee jb 0x108facbc */
  if (C.cf) goto L_108facbc;
  /* 108facf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108facf2 jmp dword ptr [edx*4 + 0x108fada8] */
  switch (EDX) {
    case 0: goto L_108fadb8;
    case 1: goto L_108fadc0;
    case 2: goto L_108fadcc;
    case 3: goto L_108fade0;
    default: x86_unimpl("switch@0x108facf2 out of table"); return;
  }
  /* 108facf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108facfc:;
  /* 108facfc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108facfe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fad00 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fad02 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108fad05 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fad08 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108fad0b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108fad0e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108fad11 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fad14 jb 0x108facbc */
  if (C.cf) goto L_108facbc;
  /* 108fad16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fad18 jmp dword ptr [edx*4 + 0x108fada8] */
  switch (EDX) {
    case 0: goto L_108fadb8;
    case 1: goto L_108fadc0;
    case 2: goto L_108fadcc;
    case 3: goto L_108fade0;
    default: x86_unimpl("switch@0x108fad18 out of table"); return;
  }
  /* 108fad1f nop  */
  /* nop */
L_108fad20:;
  /* 108fad20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108fad22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fad24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fad26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108fad27 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fad2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108fad2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fad2e jb 0x108facbc */
  if (C.cf) goto L_108facbc;
  /* 108fad30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fad32 jmp dword ptr [edx*4 + 0x108fada8] */
  switch (EDX) {
    case 0: goto L_108fadb8;
    case 1: goto L_108fadc0;
    case 2: goto L_108fadcc;
    case 3: goto L_108fade0;
    default: x86_unimpl("switch@0x108fad32 out of table"); return;
  }
  /* 108fad39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108fad5c:;
  /* 108fad5c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 108fad60 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_108fad64:;
  /* 108fad64 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 108fad68 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_108fad6c:;
  /* 108fad6c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 108fad70 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_108fad74:;
  /* 108fad74 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 108fad78 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_108fad7c:;
  /* 108fad7c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 108fad80 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_108fad84:;
  /* 108fad84 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 108fad88 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_108fad8c:;
  /* 108fad8c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 108fad90 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 108fad94 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 108fad9b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108fad9d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108fad9f:;
  /* 108fad9f jmp dword ptr [edx*4 + 0x108fada8] */
  switch (EDX) {
    case 0: goto L_108fadb8;
    case 1: goto L_108fadc0;
    case 2: goto L_108fadcc;
    case 3: goto L_108fade0;
    default: x86_unimpl("switch@0x108fad9f out of table"); return;
  }
  /* 108fada6 mov edi, edi */
  EDI = (EDI);
L_108fadb8:;
  /* 108fadb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fadbb pop esi */
  ESI = (pop32());
  /* 108fadbc pop edi */
  EDI = (pop32());
  /* 108fadbd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fadbe ret  */
  ESPCHK(0x108fac60u, _esp0);
  ESP += 4; return;
  /* 108fadbf nop  */
  /* nop */
L_108fadc0:;
  /* 108fadc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fadc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fadc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fadc7 pop esi */
  ESI = (pop32());
  /* 108fadc8 pop edi */
  EDI = (pop32());
  /* 108fadc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fadca ret  */
  ESPCHK(0x108fac60u, _esp0);
  ESP += 4; return;
  /* 108fadcb nop  */
  /* nop */
L_108fadcc:;
  /* 108fadcc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fadce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fadd0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108fadd3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108fadd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fadd9 pop esi */
  ESI = (pop32());
  /* 108fadda pop edi */
  EDI = (pop32());
  /* 108faddb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108faddc ret  */
  ESPCHK(0x108fac60u, _esp0);
  ESP += 4; return;
  /* 108faddd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108fade0:;
  /* 108fade0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fade2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fade4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108fade7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108fadea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108faded mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108fadf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fadf3 pop esi */
  ESI = (pop32());
  /* 108fadf4 pop edi */
  EDI = (pop32());
  /* 108fadf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fadf6 ret  */
  ESPCHK(0x108fac60u, _esp0);
  ESP += 4; return;
  /* 108fadf7 nop  */
  /* nop */
L_108fadf8:;
  /* 108fadf8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 108fadfc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 108fae00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108fae06 jne 0x108fae2c */
  if (!C.zf) goto L_108fae2c;
  /* 108fae08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fae0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108fae0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fae11 jb 0x108fae20 */
  if (C.cf) goto L_108fae20;
  /* 108fae13 std  */
  C.df=1;
  /* 108fae14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fae16 cld  */
  C.df=0;
  /* 108fae17 jmp dword ptr [edx*4 + 0x108faf40] */
  switch (EDX) {
    case 0: goto L_108faf50;
    case 1: goto L_108faf58;
    case 2: goto L_108faf68;
    case 3: goto L_108faf7c;
    default: x86_unimpl("switch@0x108fae17 out of table"); return;
  }
  /* 108fae1e mov edi, edi */
  EDI = (EDI);
L_108fae20:;
  /* 108fae20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108fae22 jmp dword ptr [ecx*4 + 0x108faef0] */
  switch (ECX) {
    case 0: goto L_108faf37;
    default: x86_unimpl("switch@0x108fae22 out of table"); return;
  }
  /* 108fae29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108fae2c:;
  /* 108fae2c mov eax, edi */
  EAX = (EDI);
  /* 108fae2e mov edx, 3 */
  EDX = (0x3u);
  /* 108fae33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fae36 jb 0x108fae44 */
  if (C.cf) goto L_108fae44;
  /* 108fae38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108fae3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fae3d jmp dword ptr [eax*4 + 0x108fae48] */
  switch (EAX) {
    case 1: goto L_108fae58;
    case 2: goto L_108fae78;
    case 3: goto L_108faea0;
    default: x86_unimpl("switch@0x108fae3d out of table"); return;
  }
L_108fae44:;
  /* 108fae44 jmp dword ptr [ecx*4 + 0x108faf40] */
  switch (ECX) {
    case 0: goto L_108faf50;
    case 1: goto L_108faf58;
    case 2: goto L_108faf68;
    case 3: goto L_108faf7c;
    default: x86_unimpl("switch@0x108fae44 out of table"); return;
  }
  /* 108fae4b nop  */
  /* nop */
L_108fae58:;
  /* 108fae58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108fae5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108fae5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108fae60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 108fae61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fae64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 108fae65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fae68 jb 0x108fae20 */
  if (C.cf) goto L_108fae20;
  /* 108fae6a std  */
  C.df=1;
  /* 108fae6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fae6d cld  */
  C.df=0;
  /* 108fae6e jmp dword ptr [edx*4 + 0x108faf40] */
  switch (EDX) {
    case 0: goto L_108faf50;
    case 1: goto L_108faf58;
    case 2: goto L_108faf68;
    case 3: goto L_108faf7c;
    default: x86_unimpl("switch@0x108fae6e out of table"); return;
  }
  /* 108fae75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108fae78:;
  /* 108fae78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108fae7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108fae7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108fae80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108fae83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fae86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108fae89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fae8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fae8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fae92 jb 0x108fae20 */
  if (C.cf) goto L_108fae20;
  /* 108fae94 std  */
  C.df=1;
  /* 108fae95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fae97 cld  */
  C.df=0;
  /* 108fae98 jmp dword ptr [edx*4 + 0x108faf40] */
  switch (EDX) {
    case 0: goto L_108faf50;
    case 1: goto L_108faf58;
    case 2: goto L_108faf68;
    case 3: goto L_108faf7c;
    default: x86_unimpl("switch@0x108fae98 out of table"); return;
  }
  /* 108fae9f nop  */
  /* nop */
L_108faea0:;
  /* 108faea0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108faea3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108faea5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108faea8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108faeab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108faeae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108faeb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108faeb4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108faeb7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108faeba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108faebd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108faec0 jb 0x108fae20 */
  if (C.cf) goto L_108fae20;
  /* 108faec6 std  */
  C.df=1;
  /* 108faec7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108faec9 cld  */
  C.df=0;
  /* 108faeca jmp dword ptr [edx*4 + 0x108faf40] */
  switch (EDX) {
    case 0: goto L_108faf50;
    case 1: goto L_108faf58;
    case 2: goto L_108faf68;
    case 3: goto L_108faf7c;
    default: x86_unimpl("switch@0x108faeca out of table"); return;
  }
  /* 108faed1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 108faed4 hlt  */
  x86_unimpl("hlt @ 0x108faed4");
  /* 108faed5 scasb al, byte ptr es:[edi] */
  { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1);
  /* 108faed7 adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 108faed9 scasb al, byte ptr es:[edi] */
  { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1);
  /* 108faedb adc byte ptr [edi + ebp*4], al */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 108faedf adc byte ptr [edi + ebp*4], cl */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 108faee3 adc byte ptr [edi + ebp*4], dl */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 108faee7 adc byte ptr [edi + ebp*4], bl */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 108faeeb adc byte ptr [edi + ebp*4], ah */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 108faef4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 108faef8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 108faefc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 108faf00 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 108faf04 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 108faf08 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 108faf0c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 108faf10 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 108faf14 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 108faf18 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 108faf1c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 108faf20 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 108faf24 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 108faf28 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 108faf2c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 108faf33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108faf35 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108faf37:;
  /* 108faf37 jmp dword ptr [edx*4 + 0x108faf40] */
  switch (EDX) {
    case 0: goto L_108faf50;
    case 1: goto L_108faf58;
    case 2: goto L_108faf68;
    case 3: goto L_108faf7c;
    default: x86_unimpl("switch@0x108faf37 out of table"); return;
  }
  /* 108faf3e mov edi, edi */
  EDI = (EDI);
L_108faf50:;
  /* 108faf50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108faf53 pop esi */
  ESI = (pop32());
  /* 108faf54 pop edi */
  EDI = (pop32());
  /* 108faf55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108faf56 ret  */
  ESPCHK(0x108fac60u, _esp0);
  ESP += 4; return;
  /* 108faf57 nop  */
  /* nop */
L_108faf58:;
  /* 108faf58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108faf5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108faf5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108faf61 pop esi */
  ESI = (pop32());
  /* 108faf62 pop edi */
  EDI = (pop32());
  /* 108faf63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108faf64 ret  */
  ESPCHK(0x108fac60u, _esp0);
  ESP += 4; return;
  /* 108faf65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108faf68:;
  /* 108faf68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108faf6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108faf6e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108faf71 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108faf74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108faf77 pop esi */
  ESI = (pop32());
  /* 108faf78 pop edi */
  EDI = (pop32());
  /* 108faf79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108faf7a ret  */
  ESPCHK(0x108fac60u, _esp0);
  ESP += 4; return;
  /* 108faf7b nop  */
  /* nop */
L_108faf7c:;
  /* 108faf7c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108faf7f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108faf82 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108faf85 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108faf88 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108faf8b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108faf8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108faf91 pop esi */
  ESI = (pop32());
  /* 108faf92 pop edi */
  EDI = (pop32());
  /* 108faf93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108faf94 ret  */
  ESPCHK(0x108fac60u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x108fafa0 (104 bytes, 43 insns) */
void f_108fafa0(void) {
  FTRACE(0x108fafa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fafa0 push ebx */
  push32((uint32_t)(EBX));
  /* 108fafa1 push esi */
  push32((uint32_t)(ESI));
  /* 108fafa2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 108fafa6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fafa8 jne 0x108fafc2 */
  if (!C.zf) goto L_108fafc2;
  /* 108fafaa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 108fafae mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 108fafb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fafb4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108fafb6 mov ebx, eax */
  EBX = (EAX);
  /* 108fafb8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 108fafbc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108fafbe mov edx, ebx */
  EDX = (EBX);
  /* 108fafc0 jmp 0x108fb003 */
  goto L_108fb003;
L_108fafc2:;
  /* 108fafc2 mov ecx, eax */
  ECX = (EAX);
  /* 108fafc4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 108fafc8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 108fafcc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_108fafd0:;
  /* 108fafd0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108fafd2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 108fafd4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 108fafd6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 108fafd8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fafda jne 0x108fafd0 */
  if (!C.zf) goto L_108fafd0;
  /* 108fafdc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108fafde mov esi, eax */
  ESI = (EAX);
  /* 108fafe0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108fafe4 mov ecx, eax */
  ECX = (EAX);
  /* 108fafe6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 108fafea mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108fafec add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fafee jb 0x108faffe */
  if (C.cf) goto L_108faffe;
  /* 108faff0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108faff4 ja 0x108faffe */
  if ((!C.cf&&!C.zf)) goto L_108faffe;
  /* 108faff6 jb 0x108fafff */
  if (C.cf) goto L_108fafff;
  /* 108faff8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108faffc jbe 0x108fafff */
  if ((C.cf||C.zf)) goto L_108fafff;
L_108faffe:;
  /* 108faffe dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_108fafff:;
  /* 108fafff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fb001 mov eax, esi */
  EAX = (ESI);
L_108fb003:;
  /* 108fb003 pop esi */
  ESI = (pop32());
  /* 108fb004 pop ebx */
  EBX = (pop32());
  /* 108fb005 ret 0x10 */
  ESPCHK(0x108fafa0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x108fb010 (117 bytes, 44 insns) */
void f_108fb010(void) {
  FTRACE(0x108fb010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fb010 push ebx */
  push32((uint32_t)(EBX));
  /* 108fb011 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 108fb015 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fb017 jne 0x108fb031 */
  if (!C.zf) goto L_108fb031;
  /* 108fb019 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 108fb01d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 108fb021 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fb023 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108fb025 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108fb029 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108fb02b mov eax, edx */
  EAX = (EDX);
  /* 108fb02d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108fb02f jmp 0x108fb081 */
  goto L_108fb081;
L_108fb031:;
  /* 108fb031 mov ecx, eax */
  ECX = (EAX);
  /* 108fb033 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 108fb037 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 108fb03b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_108fb03f:;
  /* 108fb03f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108fb041 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 108fb043 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 108fb045 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 108fb047 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fb049 jne 0x108fb03f */
  if (!C.zf) goto L_108fb03f;
  /* 108fb04b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108fb04d mov ecx, eax */
  ECX = (EAX);
  /* 108fb04f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108fb053 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 108fb054 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108fb058 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb05a jb 0x108fb06a */
  if (C.cf) goto L_108fb06a;
  /* 108fb05c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb060 ja 0x108fb06a */
  if ((!C.cf&&!C.zf)) goto L_108fb06a;
  /* 108fb062 jb 0x108fb072 */
  if (C.cf) goto L_108fb072;
  /* 108fb064 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb068 jbe 0x108fb072 */
  if ((C.cf||C.zf)) goto L_108fb072;
L_108fb06a:;
  /* 108fb06a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb06e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_108fb072:;
  /* 108fb072 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb076 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb07a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108fb07c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108fb07e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_108fb081:;
  /* 108fb081 pop ebx */
  EBX = (pop32());
  /* 108fb082 ret 0x10 */
  ESPCHK(0x108fb010u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b090 @ 0x108fb090 (628 bytes, 214 insns) */
void f_108fb090(void) {
  FTRACE(0x108fb090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fb090 push ebp */
  push32((uint32_t)(EBP));
  /* 108fb091 mov ebp, esp */
  EBP = (ESP);
  /* 108fb093 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb096 push ebx */
  push32((uint32_t)(EBX));
  /* 108fb097 push esi */
  push32((uint32_t)(ESI));
  /* 108fb098 push edi */
  push32((uint32_t)(EDI));
L_108fb099:;
  /* 108fb099 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb09d jne 0x108fb0bd */
  if (!C.zf) goto L_108fb0bd;
  /* 108fb09f push 0x1091bfdc */
  push32((uint32_t)(0x1091bfdcu));
  /* 108fb0a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fb0a6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 108fb0a8 push 0x1091bfd0 */
  push32((uint32_t)(0x1091bfd0u));
  /* 108fb0ad push 2 */
  push32((uint32_t)(0x2u));
  /* 108fb0af call 0x108f3440 */
  push32(0x108fb0b4u); f_108f3440();
  /* 108fb0b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb0b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb0ba jne 0x108fb0bd */
  if (!C.zf) goto L_108fb0bd;
  /* 108fb0bc int3  */
  x86_unimpl("int3 @ 0x108fb0bc");
L_108fb0bd:;
  /* 108fb0bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fb0bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb0c1 jne 0x108fb099 */
  if (!C.zf) goto L_108fb099;
  /* 108fb0c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fb0c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108fb0c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb0cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108fb0cf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108fb0d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb0d5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fb0d8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 108fb0de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fb0e0 je 0x108fb0ef */
  if (C.zf) goto L_108fb0ef;
  /* 108fb0e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb0e5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108fb0e8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 108fb0eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fb0ed je 0x108fb105 */
  if (C.zf) goto L_108fb105;
L_108fb0ef:;
  /* 108fb0ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb0f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108fb0f5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 108fb0f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb0fa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 108fb0fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fb100 jmp 0x108fb2fd */
  goto L_108fb2fd;
L_108fb105:;
  /* 108fb105 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb108 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108fb10b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 108fb10e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb110 je 0x108fb15c */
  if (C.zf) goto L_108fb15c;
  /* 108fb112 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb115 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 108fb11c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb11f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108fb122 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 108fb125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb127 je 0x108fb145 */
  if (C.zf) goto L_108fb145;
  /* 108fb129 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb12c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb12f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108fb132 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108fb134 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb137 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fb13a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 108fb13d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb140 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108fb143 jmp 0x108fb15c */
  goto L_108fb15c;
L_108fb145:;
  /* 108fb145 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb148 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fb14b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 108fb14e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb151 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108fb154 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fb157 jmp 0x108fb2fd */
  goto L_108fb2fd;
L_108fb15c:;
  /* 108fb15c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb15f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fb162 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 108fb165 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb168 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108fb16b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb16e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fb171 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 108fb174 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb177 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108fb17a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb17d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 108fb184 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fb18b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb18e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108fb191 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb194 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108fb197 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 108fb19d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fb19f jne 0x108fb1cf */
  if (!C.zf) goto L_108fb1cf;
  /* 108fb1a1 cmp dword ptr [ebp - 8], 0x1091f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1091f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb1a8 je 0x108fb1b3 */
  if (C.zf) goto L_108fb1b3;
  /* 108fb1aa cmp dword ptr [ebp - 8], 0x1091f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1091f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb1b1 jne 0x108fb1c3 */
  if (!C.zf) goto L_108fb1c3;
L_108fb1b3:;
  /* 108fb1b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fb1b6 push edx */
  push32((uint32_t)(EDX));
  /* 108fb1b7 call 0x108fd000 */
  push32(0x108fb1bcu); f_108fd000();
  /* 108fb1bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb1bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb1c1 jne 0x108fb1cf */
  if (!C.zf) goto L_108fb1cf;
L_108fb1c3:;
  /* 108fb1c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb1c6 push eax */
  push32((uint32_t)(EAX));
  /* 108fb1c7 call 0x108fcf30 */
  push32(0x108fb1ccu); f_108fcf30();
  /* 108fb1cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fb1cf:;
  /* 108fb1cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb1d2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fb1d5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 108fb1db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fb1dd je 0x108fb2bb */
  if (C.zf) goto L_108fb2bb;
L_108fb1e3:;
  /* 108fb1e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb1e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb1e9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 108fb1eb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb1ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fb1f0 jge 0x108fb213 */
  if ((C.sf==C.of)) goto L_108fb213;
  /* 108fb1f2 push 0x1091bf90 */
  push32((uint32_t)(0x1091bf90u));
  /* 108fb1f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fb1f9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 108fb1fe push 0x1091bfd0 */
  push32((uint32_t)(0x1091bfd0u));
  /* 108fb203 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fb205 call 0x108f3440 */
  push32(0x108fb20au); f_108f3440();
  /* 108fb20a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb20d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb210 jne 0x108fb213 */
  if (!C.zf) goto L_108fb213;
  /* 108fb212 int3  */
  x86_unimpl("int3 @ 0x108fb212");
L_108fb213:;
  /* 108fb213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fb215 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb217 jne 0x108fb1e3 */
  if (!C.zf) goto L_108fb1e3;
  /* 108fb219 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb21c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb21f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108fb221 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb224 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fb227 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb22a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108fb22d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb230 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb233 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108fb235 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb238 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108fb23b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb23e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb241 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108fb244 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb248 jle 0x108fb266 */
  if ((C.zf||C.sf!=C.of)) goto L_108fb266;
  /* 108fb24a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb24d push ecx */
  push32((uint32_t)(ECX));
  /* 108fb24e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb251 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108fb254 push eax */
  push32((uint32_t)(EAX));
  /* 108fb255 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fb258 push ecx */
  push32((uint32_t)(ECX));
  /* 108fb259 call 0x108fcc20 */
  push32(0x108fb25eu); f_108fcc20();
  /* 108fb25e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb261 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108fb264 jmp 0x108fb2ae */
  goto L_108fb2ae;
L_108fb266:;
  /* 108fb266 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb26a je 0x108fb289 */
  if (C.zf) goto L_108fb289;
  /* 108fb26c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fb26f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 108fb272 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fb275 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 108fb278 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fb27b mov ecx, dword ptr [edx*4 + 0x10921fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10921fa0)));
  /* 108fb282 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb284 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108fb287 jmp 0x108fb290 */
  goto L_108fb290;
L_108fb289:;
  /* 108fb289 mov dword ptr [ebp - 0x14], 0x1091ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1091ea60u));
L_108fb290:;
  /* 108fb290 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108fb293 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 108fb297 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 108fb29a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb29c je 0x108fb2ae */
  if (C.zf) goto L_108fb2ae;
  /* 108fb29e push 2 */
  push32((uint32_t)(0x2u));
  /* 108fb2a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fb2a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fb2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 108fb2a6 call 0x108fcad0 */
  push32(0x108fb2abu); f_108fcad0();
  /* 108fb2ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fb2ae:;
  /* 108fb2ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb2b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108fb2b4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 108fb2b7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 108fb2b9 jmp 0x108fb2d9 */
  goto L_108fb2d9;
L_108fb2bb:;
  /* 108fb2bb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108fb2c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb2c5 push edx */
  push32((uint32_t)(EDX));
  /* 108fb2c6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 108fb2c9 push eax */
  push32((uint32_t)(EAX));
  /* 108fb2ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fb2cd push ecx */
  push32((uint32_t)(ECX));
  /* 108fb2ce call 0x108fcc20 */
  push32(0x108fb2d3u); f_108fcc20();
  /* 108fb2d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb2d6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108fb2d9:;
  /* 108fb2d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fb2dc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb2df je 0x108fb2f5 */
  if (C.zf) goto L_108fb2f5;
  /* 108fb2e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb2e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108fb2e7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 108fb2ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb2ed mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 108fb2f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fb2f3 jmp 0x108fb2fd */
  goto L_108fb2fd;
L_108fb2f5:;
  /* 108fb2f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fb2f8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_108fb2fd:;
  /* 108fb2fd pop edi */
  EDI = (pop32());
  /* 108fb2fe pop esi */
  ESI = (pop32());
  /* 108fb2ff pop ebx */
  EBX = (pop32());
  /* 108fb300 mov esp, ebp */
  ESP = (EBP);
  /* 108fb302 pop ebp */
  EBP = (pop32());
  /* 108fb303 ret  */
  ESPCHK(0x108fb090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b310 @ 0x108fb310 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_108fb310(void) {
  FTRACE(0x108fb310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fb310 push ebp */
  push32((uint32_t)(EBP));
  /* 108fb311 mov ebp, esp */
  EBP = (ESP);
  /* 108fb313 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb319 push ebx */
  push32((uint32_t)(EBX));
  /* 108fb31a push esi */
  push32((uint32_t)(ESI));
  /* 108fb31b push edi */
  push32((uint32_t)(EDI));
  /* 108fb31c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108fb323 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 108fb32d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_108fb334:;
  /* 108fb334 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fb337 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108fb339 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 108fb33c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb340 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fb343 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb346 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 108fb349 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fb34b je 0x108fbf27 */
  if (C.zf) goto L_108fbf27;
  /* 108fb351 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb358 jl 0x108fbf27 */
  if ((C.sf!=C.of)) goto L_108fbf27;
  /* 108fb35e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb362 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb365 jl 0x108fb386 */
  if ((C.sf!=C.of)) goto L_108fb386;
  /* 108fb367 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb36b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb36e jg 0x108fb386 */
  if ((!C.zf&&C.sf==C.of)) goto L_108fb386;
  /* 108fb370 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb374 movsx ecx, byte ptr [eax + 0x1091bfc8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1091bfc8))));
  /* 108fb37b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 108fb37e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 108fb384 jmp 0x108fb390 */
  goto L_108fb390;
L_108fb386:;
  /* 108fb386 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_108fb390:;
  /* 108fb390 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 108fb396 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108fb399 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fb39c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108fb39f movsx edx, byte ptr [ecx + eax*8 + 0x1091bfe8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1091bfe8))));
  /* 108fb3a7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108fb3aa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108fb3ad mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108fb3b0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 108fb3b6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb3bd ja 0x108fbf22 */
  if ((!C.cf&&!C.zf)) goto L_108fbf22;
  /* 108fb3c3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 108fb3c9 jmp dword ptr [ecx*4 + 0x108fbf34] */
  switch (ECX) {
    case 0: goto L_108fb3d0;
    case 1: goto L_108fb46a;
    case 2: goto L_108fb4ac;
    case 3: goto L_108fb51b;
    case 4: goto L_108fb573;
    case 5: goto L_108fb582;
    case 6: goto L_108fb5ce;
    case 7: goto L_108fb661;
    case 8: goto L_108fb4f8;
    case 9: goto L_108fb503;
    case 10: goto L_108fb4ee;
    case 11: goto L_108fb4e3;
    case 12: goto L_108fb50e;
    case 13: goto L_108fb516;
    default: x86_unimpl("switch@0x108fb3c9 out of table"); return;
  }
L_108fb3d0:;
  /* 108fb3d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 108fb3d7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fb3da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108fb3e0 mov eax, dword ptr [0x1091ec98] */
  EAX = (r32((uint32_t)(0x1091ec98)));
  /* 108fb3e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fb3e7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 108fb3eb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 108fb3f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fb3f3 je 0x108fb44d */
  if (C.zf) goto L_108fb44d;
  /* 108fb3f5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 108fb3fb push edx */
  push32((uint32_t)(EDX));
  /* 108fb3fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fb3ff push eax */
  push32((uint32_t)(EAX));
  /* 108fb400 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb404 push ecx */
  push32((uint32_t)(ECX));
  /* 108fb405 call 0x108fc040 */
  push32(0x108fb40au); f_108fc040();
  /* 108fb40a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb40d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fb410 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108fb412 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 108fb415 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fb418 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb41b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_108fb41e:;
  /* 108fb41e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb422 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fb424 jne 0x108fb447 */
  if (!C.zf) goto L_108fb447;
  /* 108fb426 push 0x1091c068 */
  push32((uint32_t)(0x1091c068u));
  /* 108fb42b push 0 */
  push32((uint32_t)(0x0u));
  /* 108fb42d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 108fb432 push 0x1091c05c */
  push32((uint32_t)(0x1091c05cu));
  /* 108fb437 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fb439 call 0x108f3440 */
  push32(0x108fb43eu); f_108f3440();
  /* 108fb43e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb441 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb444 jne 0x108fb447 */
  if (!C.zf) goto L_108fb447;
  /* 108fb446 int3  */
  x86_unimpl("int3 @ 0x108fb446");
L_108fb447:;
  /* 108fb447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fb449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb44b jne 0x108fb41e */
  if (!C.zf) goto L_108fb41e;
L_108fb44d:;
  /* 108fb44d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 108fb453 push ecx */
  push32((uint32_t)(ECX));
  /* 108fb454 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fb457 push edx */
  push32((uint32_t)(EDX));
  /* 108fb458 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb45c push eax */
  push32((uint32_t)(EAX));
  /* 108fb45d call 0x108fc040 */
  push32(0x108fb462u); f_108fc040();
  /* 108fb462 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb465 jmp 0x108fbf22 */
  goto L_108fbf22;
L_108fb46a:;
  /* 108fb46a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108fb471 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb474 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 108fb47a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 108fb480 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 108fb486 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 108fb48c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108fb48f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fb496 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 108fb4a0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 108fb4a7 jmp 0x108fbf22 */
  goto L_108fbf22;
L_108fb4ac:;
  /* 108fb4ac movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb4b0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 108fb4b6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 108fb4bc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb4bf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 108fb4c5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb4cc ja 0x108fb516 */
  if ((!C.cf&&!C.zf)) goto L_108fb516;
  /* 108fb4ce mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 108fb4d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fb4d6 mov al, byte ptr [ecx + 0x108fbf6c] */
  AL = (r8((uint32_t)(ECX + 0x108fbf6c)));
  /* 108fb4dc jmp dword ptr [eax*4 + 0x108fbf54] */
  switch (EAX) {
    case 0: goto L_108fb4f8;
    case 1: goto L_108fb503;
    case 2: goto L_108fb4ee;
    case 3: goto L_108fb4e3;
    case 4: goto L_108fb50e;
    case 5: goto L_108fb516;
    default: x86_unimpl("switch@0x108fb4dc out of table"); return;
  }
L_108fb4e3:;
  /* 108fb4e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb4e6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108fb4e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108fb4ec jmp 0x108fb516 */
  goto L_108fb516;
L_108fb4ee:;
  /* 108fb4ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb4f1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 108fb4f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fb4f6 jmp 0x108fb516 */
  goto L_108fb516;
L_108fb4f8:;
  /* 108fb4f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb4fb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 108fb4fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108fb501 jmp 0x108fb516 */
  goto L_108fb516;
L_108fb503:;
  /* 108fb503 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb506 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 108fb509 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108fb50c jmp 0x108fb516 */
  goto L_108fb516;
L_108fb50e:;
  /* 108fb50e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb511 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 108fb513 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108fb516:;
  /* 108fb516 jmp 0x108fbf22 */
  goto L_108fbf22;
L_108fb51b:;
  /* 108fb51b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb51f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb522 jne 0x108fb557 */
  if (!C.zf) goto L_108fb557;
  /* 108fb524 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 108fb527 push edx */
  push32((uint32_t)(EDX));
  /* 108fb528 call 0x108fc150 */
  push32(0x108fb52du); f_108fc150();
  /* 108fb52d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb530 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 108fb536 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb53d jge 0x108fb555 */
  if ((C.sf==C.of)) goto L_108fb555;
  /* 108fb53f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb542 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 108fb544 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fb547 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 108fb54d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108fb54f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_108fb555:;
  /* 108fb555 jmp 0x108fb56e */
  goto L_108fb56e;
L_108fb557:;
  /* 108fb557 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 108fb55d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fb560 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb564 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 108fb568 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_108fb56e:;
  /* 108fb56e jmp 0x108fbf22 */
  goto L_108fbf22;
L_108fb573:;
  /* 108fb573 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 108fb57d jmp 0x108fbf22 */
  goto L_108fbf22;
L_108fb582:;
  /* 108fb582 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb586 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb589 jne 0x108fb5b2 */
  if (!C.zf) goto L_108fb5b2;
  /* 108fb58b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 108fb58e push eax */
  push32((uint32_t)(EAX));
  /* 108fb58f call 0x108fc150 */
  push32(0x108fb594u); f_108fc150();
  /* 108fb594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb597 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 108fb59d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb5a4 jge 0x108fb5b0 */
  if ((C.sf==C.of)) goto L_108fb5b0;
  /* 108fb5a6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_108fb5b0:;
  /* 108fb5b0 jmp 0x108fb5c9 */
  goto L_108fb5c9;
L_108fb5b2:;
  /* 108fb5b2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 108fb5b8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fb5bb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb5bf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 108fb5c3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_108fb5c9:;
  /* 108fb5c9 jmp 0x108fbf22 */
  goto L_108fbf22;
L_108fb5ce:;
  /* 108fb5ce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb5d2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 108fb5d8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 108fb5de sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb5e1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 108fb5e7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb5ee ja 0x108fb65c */
  if ((!C.cf&&!C.zf)) goto L_108fb65c;
  /* 108fb5f0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 108fb5f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fb5f8 mov al, byte ptr [ecx + 0x108fbf91] */
  AL = (r8((uint32_t)(ECX + 0x108fbf91)));
  /* 108fb5fe jmp dword ptr [eax*4 + 0x108fbf7d] */
  switch (EAX) {
    case 0: goto L_108fb610;
    case 1: goto L_108fb649;
    case 2: goto L_108fb605;
    case 3: goto L_108fb653;
    case 4: goto L_108fb65c;
    default: x86_unimpl("switch@0x108fb5fe out of table"); return;
  }
L_108fb605:;
  /* 108fb605 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb608 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 108fb60b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108fb60e jmp 0x108fb65c */
  goto L_108fb65c;
L_108fb610:;
  /* 108fb610 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fb613 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108fb616 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb619 jne 0x108fb63b */
  if (!C.zf) goto L_108fb63b;
  /* 108fb61b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fb61e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108fb622 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb625 jne 0x108fb63b */
  if (!C.zf) goto L_108fb63b;
  /* 108fb627 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fb62a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb62d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 108fb630 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb633 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 108fb636 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108fb639 jmp 0x108fb647 */
  goto L_108fb647;
L_108fb63b:;
  /* 108fb63b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 108fb642 jmp 0x108fb3d0 */
  goto L_108fb3d0;
L_108fb647:;
  /* 108fb647 jmp 0x108fb65c */
  goto L_108fb65c;
L_108fb649:;
  /* 108fb649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb64c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 108fb64e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fb651 jmp 0x108fb65c */
  goto L_108fb65c;
L_108fb653:;
  /* 108fb653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb656 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 108fb659 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108fb65c:;
  /* 108fb65c jmp 0x108fbf22 */
  goto L_108fbf22;
L_108fb661:;
  /* 108fb661 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb665 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 108fb66b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 108fb671 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb674 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 108fb67a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb681 ja 0x108fbd47 */
  if ((!C.cf&&!C.zf)) goto L_108fbd47;
  /* 108fb687 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 108fb68d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fb68f mov cl, byte ptr [edx + 0x108fbffc] */
  CL = (r8((uint32_t)(EDX + 0x108fbffc)));
  /* 108fb695 jmp dword ptr [ecx*4 + 0x108fbfc0] */
  switch (ECX) {
    case 0: goto L_108fb69c;
    case 1: goto L_108fb930;
    case 2: goto L_108fb7c0;
    case 3: goto L_108fba69;
    case 4: goto L_108fb72b;
    case 5: goto L_108fb6b1;
    case 6: goto L_108fba3b;
    case 7: goto L_108fb940;
    case 8: goto L_108fb8e5;
    case 9: goto L_108fbab5;
    case 10: goto L_108fba5f;
    case 11: goto L_108fb7d6;
    case 12: goto L_108fba53;
    case 13: goto L_108fba75;
    case 14: goto L_108fbd47;
    default: x86_unimpl("switch@0x108fb695 out of table"); return;
  }
L_108fb69c:;
  /* 108fb69c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb69f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 108fb6a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb6a6 jne 0x108fb6b1 */
  if (!C.zf) goto L_108fb6b1;
  /* 108fb6a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb6ab or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 108fb6ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108fb6b1:;
  /* 108fb6b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb6b4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 108fb6ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fb6bc je 0x108fb6f7 */
  if (C.zf) goto L_108fb6f7;
  /* 108fb6be lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 108fb6c1 push eax */
  push32((uint32_t)(EAX));
  /* 108fb6c2 call 0x108fc190 */
  push32(0x108fb6c7u); f_108fc190();
  /* 108fb6c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb6ca mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 108fb6ce mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 108fb6d2 push ecx */
  push32((uint32_t)(ECX));
  /* 108fb6d3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 108fb6d9 push edx */
  push32((uint32_t)(EDX));
  /* 108fb6da call 0x108fd270 */
  push32(0x108fb6dfu); f_108fd270();
  /* 108fb6df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb6e2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108fb6e5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb6e9 jge 0x108fb6f5 */
  if ((C.sf==C.of)) goto L_108fb6f5;
  /* 108fb6eb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_108fb6f5:;
  /* 108fb6f5 jmp 0x108fb71d */
  goto L_108fb71d;
L_108fb6f7:;
  /* 108fb6f7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 108fb6fa push eax */
  push32((uint32_t)(EAX));
  /* 108fb6fb call 0x108fc150 */
  push32(0x108fb700u); f_108fc150();
  /* 108fb700 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb703 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 108fb70a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 108fb710 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 108fb716 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_108fb71d:;
  /* 108fb71d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 108fb723 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108fb726 jmp 0x108fbd47 */
  goto L_108fbd47;
L_108fb72b:;
  /* 108fb72b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 108fb72e push eax */
  push32((uint32_t)(EAX));
  /* 108fb72f call 0x108fc150 */
  push32(0x108fb734u); f_108fc150();
  /* 108fb734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb737 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 108fb73d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb744 je 0x108fb752 */
  if (C.zf) goto L_108fb752;
  /* 108fb746 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 108fb74c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb750 jne 0x108fb76c */
  if (!C.zf) goto L_108fb76c;
L_108fb752:;
  /* 108fb752 mov edx, dword ptr [0x1091efb0] */
  EDX = (r32((uint32_t)(0x1091efb0)));
  /* 108fb758 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108fb75b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fb75e push eax */
  push32((uint32_t)(EAX));
  /* 108fb75f call 0x108f71b0 */
  push32(0x108fb764u); f_108f71b0();
  /* 108fb764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb767 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108fb76a jmp 0x108fb7bb */
  goto L_108fb7bb;
L_108fb76c:;
  /* 108fb76c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb76f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 108fb775 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fb777 je 0x108fb79c */
  if (C.zf) goto L_108fb79c;
  /* 108fb779 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 108fb77f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108fb782 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108fb785 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 108fb78b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 108fb78e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 108fb790 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108fb793 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 108fb79a jmp 0x108fb7bb */
  goto L_108fb7bb;
L_108fb79c:;
  /* 108fb79c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 108fb7a3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 108fb7a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108fb7ac mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108fb7af mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 108fb7b5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 108fb7b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108fb7bb:;
  /* 108fb7bb jmp 0x108fbd47 */
  goto L_108fbd47;
L_108fb7c0:;
  /* 108fb7c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb7c3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 108fb7c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fb7cb jne 0x108fb7d6 */
  if (!C.zf) goto L_108fb7d6;
  /* 108fb7cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb7d0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 108fb7d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108fb7d6:;
  /* 108fb7d6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb7dd jne 0x108fb7eb */
  if (!C.zf) goto L_108fb7eb;
  /* 108fb7df mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 108fb7e9 jmp 0x108fb7f7 */
  goto L_108fb7f7;
L_108fb7eb:;
  /* 108fb7eb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 108fb7f1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_108fb7f7:;
  /* 108fb7f7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 108fb7fd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 108fb803 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 108fb806 push edx */
  push32((uint32_t)(EDX));
  /* 108fb807 call 0x108fc150 */
  push32(0x108fb80cu); f_108fc150();
  /* 108fb80c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb80f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108fb812 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb815 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 108fb81a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb81c je 0x108fb886 */
  if (C.zf) goto L_108fb886;
  /* 108fb81e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb822 jne 0x108fb82d */
  if (!C.zf) goto L_108fb82d;
  /* 108fb824 mov ecx, dword ptr [0x1091efb4] */
  ECX = (r32((uint32_t)(0x1091efb4)));
  /* 108fb82a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_108fb82d:;
  /* 108fb82d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 108fb834 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fb837 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_108fb83d:;
  /* 108fb83d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 108fb843 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 108fb849 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb84c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 108fb852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb854 je 0x108fb876 */
  if (C.zf) goto L_108fb876;
  /* 108fb856 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 108fb85c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fb85e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 108fb861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb863 je 0x108fb876 */
  if (C.zf) goto L_108fb876;
  /* 108fb865 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 108fb86b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb86e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 108fb874 jmp 0x108fb83d */
  goto L_108fb83d;
L_108fb876:;
  /* 108fb876 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 108fb87c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb87f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 108fb881 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108fb884 jmp 0x108fb8e0 */
  goto L_108fb8e0;
L_108fb886:;
  /* 108fb886 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb88a jne 0x108fb894 */
  if (!C.zf) goto L_108fb894;
  /* 108fb88c mov eax, dword ptr [0x1091efb0] */
  EAX = (r32((uint32_t)(0x1091efb0)));
  /* 108fb891 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_108fb894:;
  /* 108fb894 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fb897 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_108fb89d:;
  /* 108fb89d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 108fb8a3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 108fb8a9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb8ac mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 108fb8b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fb8b4 je 0x108fb8d4 */
  if (C.zf) goto L_108fb8d4;
  /* 108fb8b6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 108fb8bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108fb8bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fb8c1 je 0x108fb8d4 */
  if (C.zf) goto L_108fb8d4;
  /* 108fb8c3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 108fb8c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb8cc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 108fb8d2 jmp 0x108fb89d */
  goto L_108fb89d;
L_108fb8d4:;
  /* 108fb8d4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 108fb8da sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb8dd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_108fb8e0:;
  /* 108fb8e0 jmp 0x108fbd47 */
  goto L_108fbd47;
L_108fb8e5:;
  /* 108fb8e5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 108fb8e8 push edx */
  push32((uint32_t)(EDX));
  /* 108fb8e9 call 0x108fc150 */
  push32(0x108fb8eeu); f_108fc150();
  /* 108fb8ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb8f1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 108fb8f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb8fa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 108fb8fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb8ff je 0x108fb913 */
  if (C.zf) goto L_108fb913;
  /* 108fb901 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 108fb907 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 108fb90e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 108fb911 jmp 0x108fb921 */
  goto L_108fb921;
L_108fb913:;
  /* 108fb913 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 108fb919 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 108fb91f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_108fb921:;
  /* 108fb921 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 108fb92b jmp 0x108fbd47 */
  goto L_108fbd47;
L_108fb930:;
  /* 108fb930 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 108fb937 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 108fb93a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 108fb93d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_108fb940:;
  /* 108fb940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb943 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 108fb945 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fb948 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 108fb94e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108fb951 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb958 jge 0x108fb966 */
  if ((C.sf==C.of)) goto L_108fb966;
  /* 108fb95a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 108fb964 jmp 0x108fb982 */
  goto L_108fb982;
L_108fb966:;
  /* 108fb966 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb96d jne 0x108fb982 */
  if (!C.zf) goto L_108fb982;
  /* 108fb96f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb973 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb976 jne 0x108fb982 */
  if (!C.zf) goto L_108fb982;
  /* 108fb978 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_108fb982:;
  /* 108fb982 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fb985 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb988 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 108fb98b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fb98e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fb991 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108fb993 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108fb996 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 108fb99c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 108fb9a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fb9a5 push ecx */
  push32((uint32_t)(ECX));
  /* 108fb9a6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 108fb9ac push edx */
  push32((uint32_t)(EDX));
  /* 108fb9ad movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb9b1 push eax */
  push32((uint32_t)(EAX));
  /* 108fb9b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fb9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 108fb9b6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 108fb9bc push edx */
  push32((uint32_t)(EDX));
  /* 108fb9bd call dword ptr [0x1091f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1091f3a0))), 0x108fb9c3u);
  /* 108fb9c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fb9c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb9c9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 108fb9ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb9d0 je 0x108fb9e8 */
  if (C.zf) goto L_108fb9e8;
  /* 108fb9d2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb9d9 jne 0x108fb9e8 */
  if (!C.zf) goto L_108fb9e8;
  /* 108fb9db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fb9de push ecx */
  push32((uint32_t)(ECX));
  /* 108fb9df call dword ptr [0x1091f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1091f3ac))), 0x108fb9e5u);
  /* 108fb9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fb9e8:;
  /* 108fb9e8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108fb9ec cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fb9ef jne 0x108fba0a */
  if (!C.zf) goto L_108fba0a;
  /* 108fb9f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fb9f4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 108fb9f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fb9fb jne 0x108fba0a */
  if (!C.zf) goto L_108fba0a;
  /* 108fb9fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fba00 push ecx */
  push32((uint32_t)(ECX));
  /* 108fba01 call dword ptr [0x1091f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1091f3a4))), 0x108fba07u);
  /* 108fba07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fba0a:;
  /* 108fba0a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fba0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108fba10 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fba13 jne 0x108fba27 */
  if (!C.zf) goto L_108fba27;
  /* 108fba15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fba18 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 108fba1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108fba1e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fba21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fba24 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_108fba27:;
  /* 108fba27 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fba2a push eax */
  push32((uint32_t)(EAX));
  /* 108fba2b call 0x108f71b0 */
  push32(0x108fba30u); f_108f71b0();
  /* 108fba30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fba33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108fba36 jmp 0x108fbd47 */
  goto L_108fbd47;
L_108fba3b:;
  /* 108fba3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fba3e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 108fba41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108fba44 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 108fba4e jmp 0x108fbad5 */
  goto L_108fbad5;
L_108fba53:;
  /* 108fba53 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 108fba5d jmp 0x108fbad5 */
  goto L_108fbad5;
L_108fba5f:;
  /* 108fba5f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_108fba69:;
  /* 108fba69 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 108fba73 jmp 0x108fba7f */
  goto L_108fba7f;
L_108fba75:;
  /* 108fba75 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_108fba7f:;
  /* 108fba7f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 108fba89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fba8c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 108fba92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fba94 je 0x108fbab3 */
  if (C.zf) goto L_108fbab3;
  /* 108fba96 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 108fba9d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 108fbaa3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbaa6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 108fbaac mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_108fbab3:;
  /* 108fbab3 jmp 0x108fbad5 */
  goto L_108fbad5;
L_108fbab5:;
  /* 108fbab5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 108fbabf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbac2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 108fbac8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fbaca je 0x108fbad5 */
  if (C.zf) goto L_108fbad5;
  /* 108fbacc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbacf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 108fbad2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108fbad5:;
  /* 108fbad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbad8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 108fbadd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fbadf je 0x108fbafe */
  if (C.zf) goto L_108fbafe;
  /* 108fbae1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 108fbae4 push ecx */
  push32((uint32_t)(ECX));
  /* 108fbae5 call 0x108fc170 */
  push32(0x108fbaeau); f_108fc170();
  /* 108fbaea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbaed mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 108fbaf3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 108fbaf9 jmp 0x108fbb8f */
  goto L_108fbb8f;
L_108fbafe:;
  /* 108fbafe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbb01 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 108fbb04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fbb06 je 0x108fbb50 */
  if (C.zf) goto L_108fbb50;
  /* 108fbb08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbb0b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 108fbb0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fbb10 je 0x108fbb30 */
  if (C.zf) goto L_108fbb30;
  /* 108fbb12 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 108fbb15 push ecx */
  push32((uint32_t)(ECX));
  /* 108fbb16 call 0x108fc150 */
  push32(0x108fbb1bu); f_108fc150();
  /* 108fbb1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbb1e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 108fbb21 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108fbb22 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 108fbb28 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 108fbb2e jmp 0x108fbb4e */
  goto L_108fbb4e;
L_108fbb30:;
  /* 108fbb30 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 108fbb33 push edx */
  push32((uint32_t)(EDX));
  /* 108fbb34 call 0x108fc150 */
  push32(0x108fbb39u); f_108fc150();
  /* 108fbb39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbb3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fbb41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108fbb42 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 108fbb48 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_108fbb4e:;
  /* 108fbb4e jmp 0x108fbb8f */
  goto L_108fbb8f;
L_108fbb50:;
  /* 108fbb50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbb53 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 108fbb56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fbb58 je 0x108fbb75 */
  if (C.zf) goto L_108fbb75;
  /* 108fbb5a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 108fbb5d push ecx */
  push32((uint32_t)(ECX));
  /* 108fbb5e call 0x108fc150 */
  push32(0x108fbb63u); f_108fc150();
  /* 108fbb63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbb66 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108fbb67 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 108fbb6d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 108fbb73 jmp 0x108fbb8f */
  goto L_108fbb8f;
L_108fbb75:;
  /* 108fbb75 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 108fbb78 push edx */
  push32((uint32_t)(EDX));
  /* 108fbb79 call 0x108fc150 */
  push32(0x108fbb7eu); f_108fc150();
  /* 108fbb7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbb81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fbb83 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 108fbb89 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_108fbb8f:;
  /* 108fbb8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbb92 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 108fbb95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fbb97 je 0x108fbbd7 */
  if (C.zf) goto L_108fbbd7;
  /* 108fbb99 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fbba0 jg 0x108fbbd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_108fbbd7;
  /* 108fbba2 jl 0x108fbbad */
  if ((C.sf!=C.of)) goto L_108fbbad;
  /* 108fbba4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fbbab jae 0x108fbbd7 */
  if (!C.cf) goto L_108fbbd7;
L_108fbbad:;
  /* 108fbbad mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 108fbbb3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108fbbb5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 108fbbbb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbbbe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108fbbc0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 108fbbc6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 108fbbcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbbcf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 108fbbd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108fbbd5 jmp 0x108fbbef */
  goto L_108fbbef;
L_108fbbd7:;
  /* 108fbbd7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 108fbbdd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 108fbbe3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 108fbbe9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_108fbbef:;
  /* 108fbbef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbbf2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 108fbbf8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fbbfa jne 0x108fbc17 */
  if (!C.zf) goto L_108fbc17;
  /* 108fbbfc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 108fbc02 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 108fbc08 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 108fbc0b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 108fbc11 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_108fbc17:;
  /* 108fbc17 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fbc1e jge 0x108fbc2c */
  if ((C.sf==C.of)) goto L_108fbc2c;
  /* 108fbc20 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 108fbc2a jmp 0x108fbc35 */
  goto L_108fbc35;
L_108fbc2c:;
  /* 108fbc2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbc2f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 108fbc32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108fbc35:;
  /* 108fbc35 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 108fbc3b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 108fbc41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fbc43 jne 0x108fbc4c */
  if (!C.zf) goto L_108fbc4c;
  /* 108fbc45 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108fbc4c:;
  /* 108fbc4c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 108fbc4f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_108fbc52:;
  /* 108fbc52 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 108fbc58 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 108fbc5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fbc61 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 108fbc67 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fbc69 jg 0x108fbc7f */
  if ((!C.zf&&C.sf==C.of)) goto L_108fbc7f;
  /* 108fbc6b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 108fbc71 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 108fbc77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fbc79 je 0x108fbd00 */
  if (C.zf) goto L_108fbd00;
L_108fbc7f:;
  /* 108fbc7f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 108fbc85 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108fbc86 push edx */
  push32((uint32_t)(EDX));
  /* 108fbc87 push eax */
  push32((uint32_t)(EAX));
  /* 108fbc88 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 108fbc8e push edx */
  push32((uint32_t)(EDX));
  /* 108fbc8f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 108fbc95 push eax */
  push32((uint32_t)(EAX));
  /* 108fbc96 call 0x108fb010 */
  push32(0x108fbc9bu); f_108fb010();
  /* 108fbc9b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbc9e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 108fbca4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 108fbcaa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108fbcab push edx */
  push32((uint32_t)(EDX));
  /* 108fbcac push eax */
  push32((uint32_t)(EAX));
  /* 108fbcad mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 108fbcb3 push ecx */
  push32((uint32_t)(ECX));
  /* 108fbcb4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 108fbcba push edx */
  push32((uint32_t)(EDX));
  /* 108fbcbb call 0x108fafa0 */
  push32(0x108fbcc0u); f_108fafa0();
  /* 108fbcc0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 108fbcc6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 108fbccc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fbcd3 jle 0x108fbce7 */
  if ((C.zf||C.sf!=C.of)) goto L_108fbce7;
  /* 108fbcd5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 108fbcdb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbce1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_108fbce7:;
  /* 108fbce7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fbcea mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 108fbcf0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 108fbcf2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fbcf5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fbcf8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108fbcfb jmp 0x108fbc52 */
  goto L_108fbc52;
L_108fbd00:;
  /* 108fbd00 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 108fbd03 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fbd06 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108fbd09 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fbd0c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbd0f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108fbd12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbd15 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 108fbd1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fbd1c je 0x108fbd47 */
  if (C.zf) goto L_108fbd47;
  /* 108fbd1e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fbd21 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108fbd24 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fbd27 jne 0x108fbd2f */
  if (!C.zf) goto L_108fbd2f;
  /* 108fbd29 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fbd2d jne 0x108fbd47 */
  if (!C.zf) goto L_108fbd47;
L_108fbd2f:;
  /* 108fbd2f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fbd32 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fbd35 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108fbd38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fbd3b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 108fbd3e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fbd41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbd44 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_108fbd47:;
  /* 108fbd47 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fbd4e jne 0x108fbf22 */
  if (!C.zf) goto L_108fbf22;
  /* 108fbd54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbd57 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 108fbd5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fbd5c je 0x108fbdad */
  if (C.zf) goto L_108fbdad;
  /* 108fbd5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbd61 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 108fbd67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fbd69 je 0x108fbd7b */
  if (C.zf) goto L_108fbd7b;
  /* 108fbd6b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 108fbd72 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 108fbd79 jmp 0x108fbdad */
  goto L_108fbdad;
L_108fbd7b:;
  /* 108fbd7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbd7e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108fbd81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fbd83 je 0x108fbd95 */
  if (C.zf) goto L_108fbd95;
  /* 108fbd85 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 108fbd8c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 108fbd93 jmp 0x108fbdad */
  goto L_108fbdad;
L_108fbd95:;
  /* 108fbd95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbd98 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 108fbd9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fbd9d je 0x108fbdad */
  if (C.zf) goto L_108fbdad;
  /* 108fbd9f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 108fbda6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_108fbdad:;
  /* 108fbdad mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 108fbdb3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fbdb6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fbdb9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 108fbdbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbdc2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 108fbdc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fbdc7 jne 0x108fbde5 */
  if (!C.zf) goto L_108fbde5;
  /* 108fbdc9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 108fbdcf push eax */
  push32((uint32_t)(EAX));
  /* 108fbdd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fbdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 108fbdd4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 108fbdda push edx */
  push32((uint32_t)(EDX));
  /* 108fbddb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 108fbddd call 0x108fc0c0 */
  push32(0x108fbde2u); f_108fc0c0();
  /* 108fbde2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fbde5:;
  /* 108fbde5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 108fbdeb push eax */
  push32((uint32_t)(EAX));
  /* 108fbdec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fbdef push ecx */
  push32((uint32_t)(ECX));
  /* 108fbdf0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fbdf3 push edx */
  push32((uint32_t)(EDX));
  /* 108fbdf4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 108fbdfa push eax */
  push32((uint32_t)(EAX));
  /* 108fbdfb call 0x108fc100 */
  push32(0x108fbe00u); f_108fc100();
  /* 108fbe00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbe03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbe06 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 108fbe09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fbe0b je 0x108fbe33 */
  if (C.zf) goto L_108fbe33;
  /* 108fbe0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbe10 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108fbe13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fbe15 jne 0x108fbe33 */
  if (!C.zf) goto L_108fbe33;
  /* 108fbe17 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 108fbe1d push eax */
  push32((uint32_t)(EAX));
  /* 108fbe1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fbe21 push ecx */
  push32((uint32_t)(ECX));
  /* 108fbe22 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 108fbe28 push edx */
  push32((uint32_t)(EDX));
  /* 108fbe29 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 108fbe2b call 0x108fc0c0 */
  push32(0x108fbe30u); f_108fc0c0();
  /* 108fbe30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fbe33:;
  /* 108fbe33 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fbe37 je 0x108fbee1 */
  if (C.zf) goto L_108fbee1;
  /* 108fbe3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fbe41 jle 0x108fbee1 */
  if ((C.zf||C.sf!=C.of)) goto L_108fbee1;
  /* 108fbe47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fbe4a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 108fbe50 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fbe53 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_108fbe59:;
  /* 108fbe59 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 108fbe5f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 108fbe65 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fbe68 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 108fbe6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fbe70 je 0x108fbedf */
  if (C.zf) goto L_108fbedf;
  /* 108fbe72 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 108fbe78 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 108fbe7b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 108fbe82 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 108fbe89 push eax */
  push32((uint32_t)(EAX));
  /* 108fbe8a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 108fbe90 push ecx */
  push32((uint32_t)(ECX));
  /* 108fbe91 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 108fbe97 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbe9a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 108fbea0 call 0x108fd270 */
  push32(0x108fbea5u); f_108fd270();
  /* 108fbea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbea8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 108fbeae cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fbeb5 jg 0x108fbeb9 */
  if ((!C.zf&&C.sf==C.of)) goto L_108fbeb9;
  /* 108fbeb7 jmp 0x108fbedf */
  goto L_108fbedf;
L_108fbeb9:;
  /* 108fbeb9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 108fbebf push eax */
  push32((uint32_t)(EAX));
  /* 108fbec0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fbec3 push ecx */
  push32((uint32_t)(ECX));
  /* 108fbec4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 108fbeca push edx */
  push32((uint32_t)(EDX));
  /* 108fbecb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 108fbed1 push eax */
  push32((uint32_t)(EAX));
  /* 108fbed2 call 0x108fc100 */
  push32(0x108fbed7u); f_108fc100();
  /* 108fbed7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fbeda jmp 0x108fbe59 */
  goto L_108fbe59;
L_108fbedf:;
  /* 108fbedf jmp 0x108fbefc */
  goto L_108fbefc;
L_108fbee1:;
  /* 108fbee1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 108fbee7 push ecx */
  push32((uint32_t)(ECX));
  /* 108fbee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fbeeb push edx */
  push32((uint32_t)(EDX));
  /* 108fbeec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fbeef push eax */
  push32((uint32_t)(EAX));
  /* 108fbef0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fbef3 push ecx */
  push32((uint32_t)(ECX));
  /* 108fbef4 call 0x108fc100 */
  push32(0x108fbef9u); f_108fc100();
  /* 108fbef9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fbefc:;
  /* 108fbefc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fbeff and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108fbf02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fbf04 je 0x108fbf22 */
  if (C.zf) goto L_108fbf22;
  /* 108fbf06 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 108fbf0c push eax */
  push32((uint32_t)(EAX));
  /* 108fbf0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fbf10 push ecx */
  push32((uint32_t)(ECX));
  /* 108fbf11 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 108fbf17 push edx */
  push32((uint32_t)(EDX));
  /* 108fbf18 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 108fbf1a call 0x108fc0c0 */
  push32(0x108fbf1fu); f_108fc0c0();
  /* 108fbf1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fbf22:;
  /* 108fbf22 jmp 0x108fb334 */
  goto L_108fb334;
L_108fbf27:;
  /* 108fbf27 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 108fbf2d pop edi */
  EDI = (pop32());
  /* 108fbf2e pop esi */
  ESI = (pop32());
  /* 108fbf2f pop ebx */
  EBX = (pop32());
  /* 108fbf30 mov esp, ebp */
  ESP = (EBP);
  /* 108fbf32 pop ebp */
  EBP = (pop32());
  /* 108fbf33 ret  */
  ESPCHK(0x108fb310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c040 @ 0x108fc040 (119 bytes, 44 insns) */
void f_108fc040(void) {
  FTRACE(0x108fc040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc040 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc041 mov ebp, esp */
  EBP = (ESP);
  /* 108fc043 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc044 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc047 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108fc04a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc04d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc050 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108fc053 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc056 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc05a jl 0x108fc082 */
  if ((C.sf!=C.of)) goto L_108fc082;
  /* 108fc05c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc05f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108fc061 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 108fc064 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 108fc066 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 108fc06a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108fc070 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108fc073 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc076 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108fc078 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc07b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc07e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108fc080 jmp 0x108fc095 */
  goto L_108fc095;
L_108fc082:;
  /* 108fc082 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc085 push edx */
  push32((uint32_t)(EDX));
  /* 108fc086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc089 push eax */
  push32((uint32_t)(EAX));
  /* 108fc08a call 0x108fb090 */
  push32(0x108fc08fu); f_108fb090();
  /* 108fc08f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc092 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108fc095:;
  /* 108fc095 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc099 jne 0x108fc0a6 */
  if (!C.zf) goto L_108fc0a6;
  /* 108fc09b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc09e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 108fc0a4 jmp 0x108fc0b3 */
  goto L_108fc0b3;
L_108fc0a6:;
  /* 108fc0a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc0a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108fc0ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc0ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc0b1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_108fc0b3:;
  /* 108fc0b3 mov esp, ebp */
  ESP = (EBP);
  /* 108fc0b5 pop ebp */
  EBP = (pop32());
  /* 108fc0b6 ret  */
  ESPCHK(0x108fc040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c0 @ 0x108fc0c0 (53 bytes, 23 insns) */
void f_108fc0c0(void) {
  FTRACE(0x108fc0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc0c1 mov ebp, esp */
  EBP = (ESP);
L_108fc0c3:;
  /* 108fc0c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc0c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc0c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc0cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 108fc0cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fc0d1 jle 0x108fc0f3 */
  if ((C.zf||C.sf!=C.of)) goto L_108fc0f3;
  /* 108fc0d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fc0d6 push edx */
  push32((uint32_t)(EDX));
  /* 108fc0d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc0da push eax */
  push32((uint32_t)(EAX));
  /* 108fc0db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc0de push ecx */
  push32((uint32_t)(ECX));
  /* 108fc0df call 0x108fc040 */
  push32(0x108fc0e4u); f_108fc040();
  /* 108fc0e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc0e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fc0ea cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc0ed jne 0x108fc0f1 */
  if (!C.zf) goto L_108fc0f1;
  /* 108fc0ef jmp 0x108fc0f3 */
  goto L_108fc0f3;
L_108fc0f1:;
  /* 108fc0f1 jmp 0x108fc0c3 */
  goto L_108fc0c3;
L_108fc0f3:;
  /* 108fc0f3 pop ebp */
  EBP = (pop32());
  /* 108fc0f4 ret  */
  ESPCHK(0x108fc0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c100 @ 0x108fc100 (74 bytes, 31 insns) */
void f_108fc100(void) {
  FTRACE(0x108fc100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc100 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc101 mov ebp, esp */
  EBP = (ESP);
  /* 108fc103 push ecx */
  push32((uint32_t)(ECX));
L_108fc104:;
  /* 108fc104 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc107 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc10a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc10d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 108fc110 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fc112 jle 0x108fc146 */
  if ((C.zf||C.sf!=C.of)) goto L_108fc146;
  /* 108fc114 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fc117 push edx */
  push32((uint32_t)(EDX));
  /* 108fc118 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc11b push eax */
  push32((uint32_t)(EAX));
  /* 108fc11c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc11f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108fc122 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108fc125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fc128 push eax */
  push32((uint32_t)(EAX));
  /* 108fc129 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc12c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc12f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 108fc132 call 0x108fc040 */
  push32(0x108fc137u); f_108fc040();
  /* 108fc137 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc13a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fc13d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc140 jne 0x108fc144 */
  if (!C.zf) goto L_108fc144;
  /* 108fc142 jmp 0x108fc146 */
  goto L_108fc146;
L_108fc144:;
  /* 108fc144 jmp 0x108fc104 */
  goto L_108fc104;
L_108fc146:;
  /* 108fc146 mov esp, ebp */
  ESP = (EBP);
  /* 108fc148 pop ebp */
  EBP = (pop32());
  /* 108fc149 ret  */
  ESPCHK(0x108fc100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c150 @ 0x108fc150 (26 bytes, 12 insns) */
void f_108fc150(void) {
  FTRACE(0x108fc150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc150 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc151 mov ebp, esp */
  EBP = (ESP);
  /* 108fc153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc156 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108fc158 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc15b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc15e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108fc160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc163 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108fc165 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 108fc168 pop ebp */
  EBP = (pop32());
  /* 108fc169 ret  */
  ESPCHK(0x108fc150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c170 @ 0x108fc170 (31 bytes, 14 insns) */
void f_108fc170(void) {
  FTRACE(0x108fc170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc170 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc171 mov ebp, esp */
  EBP = (ESP);
  /* 108fc173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc176 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108fc178 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc17b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc17e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108fc180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc183 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108fc185 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc188 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108fc18a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108fc18d pop ebp */
  EBP = (pop32());
  /* 108fc18e ret  */
  ESPCHK(0x108fc170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c190 @ 0x108fc190 (27 bytes, 12 insns) */
void f_108fc190(void) {
  FTRACE(0x108fc190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc190 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc191 mov ebp, esp */
  EBP = (ESP);
  /* 108fc193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc196 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108fc198 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc19b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc19e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108fc1a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc1a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108fc1a5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 108fc1a9 pop ebp */
  EBP = (pop32());
  /* 108fc1aa ret  */
  ESPCHK(0x108fc190u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x108fc1b0 (145 bytes, 42 insns) */
void f_108fc1b0(void) {
  FTRACE(0x108fc1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc1b1 mov ebp, esp */
  EBP = (ESP);
  /* 108fc1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc1b4 call 0x108fc260 */
  push32(0x108fc1b9u); f_108fc260();
  /* 108fc1b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc1bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108fc1be mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fc1c5 jmp 0x108fc1d0 */
  goto L_108fc1d0;
L_108fc1c7:;
  /* 108fc1c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fc1ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc1cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108fc1d0:;
  /* 108fc1d0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc1d4 jae 0x108fc1fa */
  if (!C.cf) goto L_108fc1fa;
  /* 108fc1d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fc1d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc1dc cmp ecx, dword ptr [eax*8 + 0x1091efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1091efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc1e3 jne 0x108fc1f8 */
  if (!C.zf) goto L_108fc1f8;
  /* 108fc1e5 call 0x108fc250 */
  push32(0x108fc1eau); f_108fc250();
  /* 108fc1ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fc1ed mov ecx, dword ptr [edx*8 + 0x1091efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1091efbc)));
  /* 108fc1f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108fc1f6 jmp 0x108fc23d */
  goto L_108fc23d;
L_108fc1f8:;
  /* 108fc1f8 jmp 0x108fc1c7 */
  goto L_108fc1c7;
L_108fc1fa:;
  /* 108fc1fa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc1fe jb 0x108fc213 */
  if (C.cf) goto L_108fc213;
  /* 108fc200 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc204 ja 0x108fc213 */
  if ((!C.cf&&!C.zf)) goto L_108fc213;
  /* 108fc206 call 0x108fc250 */
  push32(0x108fc20bu); f_108fc250();
  /* 108fc20b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 108fc211 jmp 0x108fc23d */
  goto L_108fc23d;
L_108fc213:;
  /* 108fc213 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc21a jb 0x108fc232 */
  if (C.cf) goto L_108fc232;
  /* 108fc21c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc223 ja 0x108fc232 */
  if ((!C.cf&&!C.zf)) goto L_108fc232;
  /* 108fc225 call 0x108fc250 */
  push32(0x108fc22au); f_108fc250();
  /* 108fc22a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 108fc230 jmp 0x108fc23d */
  goto L_108fc23d;
L_108fc232:;
  /* 108fc232 call 0x108fc250 */
  push32(0x108fc237u); f_108fc250();
  /* 108fc237 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_108fc23d:;
  /* 108fc23d mov esp, ebp */
  ESP = (EBP);
  /* 108fc23f pop ebp */
  EBP = (pop32());
  /* 108fc240 ret  */
  ESPCHK(0x108fc1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c250 @ 0x108fc250 (13 bytes, 6 insns) */
void f_108fc250(void) {
  FTRACE(0x108fc250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc250 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc251 mov ebp, esp */
  EBP = (ESP);
  /* 108fc253 call 0x108f3dc0 */
  push32(0x108fc258u); f_108f3dc0();
  /* 108fc258 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc25b pop ebp */
  EBP = (pop32());
  /* 108fc25c ret  */
  ESPCHK(0x108fc250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x108fc260 (13 bytes, 6 insns) */
void f_108fc260(void) {
  FTRACE(0x108fc260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc260 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc261 mov ebp, esp */
  EBP = (ESP);
  /* 108fc263 call 0x108f3dc0 */
  push32(0x108fc268u); f_108f3dc0();
  /* 108fc268 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc26b pop ebp */
  EBP = (pop32());
  /* 108fc26c ret  */
  ESPCHK(0x108fc260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c270 @ 0x108fc270 (664 bytes, 255 insns) [15 switch table(s)] */
void f_108fc270(void) {
  FTRACE(0x108fc270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc270 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc271 mov ebp, esp */
  EBP = (ESP);
  /* 108fc273 push edi */
  push32((uint32_t)(EDI));
  /* 108fc274 push esi */
  push32((uint32_t)(ESI));
  /* 108fc275 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc278 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc27b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc27e mov eax, ecx */
  EAX = (ECX);
  /* 108fc280 mov edx, ecx */
  EDX = (ECX);
  /* 108fc282 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc284 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc286 jbe 0x108fc290 */
  if ((C.cf||C.zf)) goto L_108fc290;
  /* 108fc288 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc28a jb 0x108fc408 */
  if (C.cf) goto L_108fc408;
L_108fc290:;
  /* 108fc290 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108fc296 jne 0x108fc2ac */
  if (!C.zf) goto L_108fc2ac;
  /* 108fc298 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fc29b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108fc29e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc2a1 jb 0x108fc2cc */
  if (C.cf) goto L_108fc2cc;
  /* 108fc2a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fc2a5 jmp dword ptr [edx*4 + 0x108fc3b8] */
  switch (EDX) {
    case 0: goto L_108fc3c8;
    case 1: goto L_108fc3d0;
    case 2: goto L_108fc3dc;
    case 3: goto L_108fc3f0;
    default: x86_unimpl("switch@0x108fc2a5 out of table"); return;
  }
L_108fc2ac:;
  /* 108fc2ac mov eax, edi */
  EAX = (EDI);
  /* 108fc2ae mov edx, 3 */
  EDX = (0x3u);
  /* 108fc2b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc2b6 jb 0x108fc2c4 */
  if (C.cf) goto L_108fc2c4;
  /* 108fc2b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108fc2bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc2bd jmp dword ptr [eax*4 + 0x108fc2d0] */
  switch (EAX) {
    case 1: goto L_108fc2e0;
    case 2: goto L_108fc30c;
    case 3: goto L_108fc330;
    default: x86_unimpl("switch@0x108fc2bd out of table"); return;
  }
L_108fc2c4:;
  /* 108fc2c4 jmp dword ptr [ecx*4 + 0x108fc3c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x108fc3c8)))); return;
  /* 108fc2cb nop  */
  /* nop */
L_108fc2cc:;
  /* 108fc2cc jmp dword ptr [ecx*4 + 0x108fc34c] */
  switch (ECX) {
    case 0: goto L_108fc3af;
    case 1: goto L_108fc39c;
    case 2: goto L_108fc394;
    case 3: goto L_108fc38c;
    case 4: goto L_108fc384;
    case 5: goto L_108fc37c;
    case 6: goto L_108fc374;
    case 7: goto L_108fc36c;
    default: x86_unimpl("switch@0x108fc2cc out of table"); return;
  }
  /* 108fc2d3 nop  */
  /* nop */
L_108fc2e0:;
  /* 108fc2e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108fc2e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fc2e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fc2e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108fc2e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108fc2ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108fc2ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fc2f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108fc2f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc2f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc2fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc2fe jb 0x108fc2cc */
  if (C.cf) goto L_108fc2cc;
  /* 108fc300 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fc302 jmp dword ptr [edx*4 + 0x108fc3b8] */
  switch (EDX) {
    case 0: goto L_108fc3c8;
    case 1: goto L_108fc3d0;
    case 2: goto L_108fc3dc;
    case 3: goto L_108fc3f0;
    default: x86_unimpl("switch@0x108fc302 out of table"); return;
  }
  /* 108fc309 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108fc30c:;
  /* 108fc30c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108fc30e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fc310 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fc312 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108fc315 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fc318 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108fc31b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc31e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc321 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc324 jb 0x108fc2cc */
  if (C.cf) goto L_108fc2cc;
  /* 108fc326 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fc328 jmp dword ptr [edx*4 + 0x108fc3b8] */
  switch (EDX) {
    case 0: goto L_108fc3c8;
    case 1: goto L_108fc3d0;
    case 2: goto L_108fc3dc;
    case 3: goto L_108fc3f0;
    default: x86_unimpl("switch@0x108fc328 out of table"); return;
  }
  /* 108fc32f nop  */
  /* nop */
L_108fc330:;
  /* 108fc330 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108fc332 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fc334 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fc336 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108fc337 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fc33a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108fc33b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc33e jb 0x108fc2cc */
  if (C.cf) goto L_108fc2cc;
  /* 108fc340 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fc342 jmp dword ptr [edx*4 + 0x108fc3b8] */
  switch (EDX) {
    case 0: goto L_108fc3c8;
    case 1: goto L_108fc3d0;
    case 2: goto L_108fc3dc;
    case 3: goto L_108fc3f0;
    default: x86_unimpl("switch@0x108fc342 out of table"); return;
  }
  /* 108fc349 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108fc36c:;
  /* 108fc36c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 108fc370 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_108fc374:;
  /* 108fc374 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 108fc378 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_108fc37c:;
  /* 108fc37c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 108fc380 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_108fc384:;
  /* 108fc384 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 108fc388 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_108fc38c:;
  /* 108fc38c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 108fc390 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_108fc394:;
  /* 108fc394 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 108fc398 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_108fc39c:;
  /* 108fc39c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 108fc3a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 108fc3a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 108fc3ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc3ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108fc3af:;
  /* 108fc3af jmp dword ptr [edx*4 + 0x108fc3b8] */
  switch (EDX) {
    case 0: goto L_108fc3c8;
    case 1: goto L_108fc3d0;
    case 2: goto L_108fc3dc;
    case 3: goto L_108fc3f0;
    default: x86_unimpl("switch@0x108fc3af out of table"); return;
  }
  /* 108fc3b6 mov edi, edi */
  EDI = (EDI);
L_108fc3c8:;
  /* 108fc3c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc3cb pop esi */
  ESI = (pop32());
  /* 108fc3cc pop edi */
  EDI = (pop32());
  /* 108fc3cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fc3ce ret  */
  ESPCHK(0x108fc270u, _esp0);
  ESP += 4; return;
  /* 108fc3cf nop  */
  /* nop */
L_108fc3d0:;
  /* 108fc3d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fc3d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fc3d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc3d7 pop esi */
  ESI = (pop32());
  /* 108fc3d8 pop edi */
  EDI = (pop32());
  /* 108fc3d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fc3da ret  */
  ESPCHK(0x108fc270u, _esp0);
  ESP += 4; return;
  /* 108fc3db nop  */
  /* nop */
L_108fc3dc:;
  /* 108fc3dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fc3de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fc3e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108fc3e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108fc3e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc3e9 pop esi */
  ESI = (pop32());
  /* 108fc3ea pop edi */
  EDI = (pop32());
  /* 108fc3eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fc3ec ret  */
  ESPCHK(0x108fc270u, _esp0);
  ESP += 4; return;
  /* 108fc3ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108fc3f0:;
  /* 108fc3f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108fc3f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108fc3f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108fc3f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108fc3fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108fc3fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108fc400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc403 pop esi */
  ESI = (pop32());
  /* 108fc404 pop edi */
  EDI = (pop32());
  /* 108fc405 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fc406 ret  */
  ESPCHK(0x108fc270u, _esp0);
  ESP += 4; return;
  /* 108fc407 nop  */
  /* nop */
L_108fc408:;
  /* 108fc408 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 108fc40c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 108fc410 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108fc416 jne 0x108fc43c */
  if (!C.zf) goto L_108fc43c;
  /* 108fc418 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fc41b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108fc41e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc421 jb 0x108fc430 */
  if (C.cf) goto L_108fc430;
  /* 108fc423 std  */
  C.df=1;
  /* 108fc424 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fc426 cld  */
  C.df=0;
  /* 108fc427 jmp dword ptr [edx*4 + 0x108fc550] */
  switch (EDX) {
    case 0: goto L_108fc560;
    case 1: goto L_108fc568;
    case 2: goto L_108fc578;
    case 3: goto L_108fc58c;
    default: x86_unimpl("switch@0x108fc427 out of table"); return;
  }
  /* 108fc42e mov edi, edi */
  EDI = (EDI);
L_108fc430:;
  /* 108fc430 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108fc432 jmp dword ptr [ecx*4 + 0x108fc500] */
  switch (ECX) {
    case 0: goto L_108fc547;
    default: x86_unimpl("switch@0x108fc432 out of table"); return;
  }
  /* 108fc439 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108fc43c:;
  /* 108fc43c mov eax, edi */
  EAX = (EDI);
  /* 108fc43e mov edx, 3 */
  EDX = (0x3u);
  /* 108fc443 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc446 jb 0x108fc454 */
  if (C.cf) goto L_108fc454;
  /* 108fc448 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108fc44b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc44d jmp dword ptr [eax*4 + 0x108fc458] */
  switch (EAX) {
    case 1: goto L_108fc468;
    case 2: goto L_108fc488;
    case 3: goto L_108fc4b0;
    default: x86_unimpl("switch@0x108fc44d out of table"); return;
  }
L_108fc454:;
  /* 108fc454 jmp dword ptr [ecx*4 + 0x108fc550] */
  switch (ECX) {
    case 0: goto L_108fc560;
    case 1: goto L_108fc568;
    case 2: goto L_108fc578;
    case 3: goto L_108fc58c;
    default: x86_unimpl("switch@0x108fc454 out of table"); return;
  }
  /* 108fc45b nop  */
  /* nop */
L_108fc468:;
  /* 108fc468 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108fc46b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108fc46d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108fc470 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 108fc471 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fc474 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 108fc475 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc478 jb 0x108fc430 */
  if (C.cf) goto L_108fc430;
  /* 108fc47a std  */
  C.df=1;
  /* 108fc47b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fc47d cld  */
  C.df=0;
  /* 108fc47e jmp dword ptr [edx*4 + 0x108fc550] */
  switch (EDX) {
    case 0: goto L_108fc560;
    case 1: goto L_108fc568;
    case 2: goto L_108fc578;
    case 3: goto L_108fc58c;
    default: x86_unimpl("switch@0x108fc47e out of table"); return;
  }
  /* 108fc485 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108fc488:;
  /* 108fc488 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108fc48b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108fc48d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108fc490 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108fc493 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fc496 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108fc499 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc49c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc49f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc4a2 jb 0x108fc430 */
  if (C.cf) goto L_108fc430;
  /* 108fc4a4 std  */
  C.df=1;
  /* 108fc4a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fc4a7 cld  */
  C.df=0;
  /* 108fc4a8 jmp dword ptr [edx*4 + 0x108fc550] */
  switch (EDX) {
    case 0: goto L_108fc560;
    case 1: goto L_108fc568;
    case 2: goto L_108fc578;
    case 3: goto L_108fc58c;
    default: x86_unimpl("switch@0x108fc4a8 out of table"); return;
  }
  /* 108fc4af nop  */
  /* nop */
L_108fc4b0:;
  /* 108fc4b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108fc4b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108fc4b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108fc4b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108fc4bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108fc4be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108fc4c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108fc4c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108fc4c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc4ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc4cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc4d0 jb 0x108fc430 */
  if (C.cf) goto L_108fc430;
  /* 108fc4d6 std  */
  C.df=1;
  /* 108fc4d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108fc4d9 cld  */
  C.df=0;
  /* 108fc4da jmp dword ptr [edx*4 + 0x108fc550] */
  switch (EDX) {
    case 0: goto L_108fc560;
    case 1: goto L_108fc568;
    case 2: goto L_108fc578;
    case 3: goto L_108fc58c;
    default: x86_unimpl("switch@0x108fc4da out of table"); return;
  }
  /* 108fc4e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 108fc4e4 add al, 0xc5 */
  { uint32_t _a=(AL),_b=(0xc5u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108fc4e7 adc byte ptr [eax*8 - 0x3aebef71], cl */
  { uint32_t _a=(r8((uint32_t)(EAX*8 + -0x3aebef71))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EAX*8 + -0x3aebef71), (_r)); fl_add(_a,_b,_r,8); }
  /* 108fc4ef adc byte ptr [eax*8 - 0x3adbef71], bl */
  { uint32_t _a=(r8((uint32_t)(EAX*8 + -0x3adbef71))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EAX*8 + -0x3adbef71), (_r)); fl_add(_a,_b,_r,8); }
  /* 108fc4f7 adc byte ptr [eax*8 - 0x3acbef71], ch */
  { uint32_t _a=(r8((uint32_t)(EAX*8 + -0x3acbef71))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX*8 + -0x3acbef71), (_r)); fl_add(_a,_b,_r,8); }
  /* 108fc504 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 108fc508 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 108fc50c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 108fc510 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 108fc514 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 108fc518 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 108fc51c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 108fc520 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 108fc524 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 108fc528 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 108fc52c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 108fc530 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 108fc534 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 108fc538 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 108fc53c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 108fc543 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc545 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108fc547:;
  /* 108fc547 jmp dword ptr [edx*4 + 0x108fc550] */
  switch (EDX) {
    case 0: goto L_108fc560;
    case 1: goto L_108fc568;
    case 2: goto L_108fc578;
    case 3: goto L_108fc58c;
    default: x86_unimpl("switch@0x108fc547 out of table"); return;
  }
  /* 108fc54e mov edi, edi */
  EDI = (EDI);
L_108fc560:;
  /* 108fc560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc563 pop esi */
  ESI = (pop32());
  /* 108fc564 pop edi */
  EDI = (pop32());
  /* 108fc565 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fc566 ret  */
  ESPCHK(0x108fc270u, _esp0);
  ESP += 4; return;
  /* 108fc567 nop  */
  /* nop */
L_108fc568:;
  /* 108fc568 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108fc56b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108fc56e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc571 pop esi */
  ESI = (pop32());
  /* 108fc572 pop edi */
  EDI = (pop32());
  /* 108fc573 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fc574 ret  */
  ESPCHK(0x108fc270u, _esp0);
  ESP += 4; return;
  /* 108fc575 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108fc578:;
  /* 108fc578 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108fc57b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108fc57e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108fc581 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108fc584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc587 pop esi */
  ESI = (pop32());
  /* 108fc588 pop edi */
  EDI = (pop32());
  /* 108fc589 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fc58a ret  */
  ESPCHK(0x108fc270u, _esp0);
  ESP += 4; return;
  /* 108fc58b nop  */
  /* nop */
L_108fc58c:;
  /* 108fc58c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108fc58f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108fc592 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108fc595 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108fc598 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108fc59b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108fc59e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc5a1 pop esi */
  ESI = (pop32());
  /* 108fc5a2 pop edi */
  EDI = (pop32());
  /* 108fc5a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108fc5a4 ret  */
  ESPCHK(0x108fc270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5b0 @ 0x108fc5b0 (421 bytes, 148 insns) */
void f_108fc5b0(void) {
  FTRACE(0x108fc5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc5b1 mov ebp, esp */
  EBP = (ESP);
  /* 108fc5b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108fc5b5 push 0x1091c080 */
  push32((uint32_t)(0x1091c080u));
  /* 108fc5ba push 0x108fd488 */
  push32((uint32_t)(0x108fd488u));
  /* 108fc5bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108fc5c5 push eax */
  push32((uint32_t)(EAX));
  /* 108fc5c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108fc5cd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc5d0 push ebx */
  push32((uint32_t)(EBX));
  /* 108fc5d1 push esi */
  push32((uint32_t)(ESI));
  /* 108fc5d2 push edi */
  push32((uint32_t)(EDI));
  /* 108fc5d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108fc5d6 cmp dword ptr [0x109207ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc5dd jne 0x108fc62e */
  if (!C.zf) goto L_108fc62e;
  /* 108fc5df lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 108fc5e2 push eax */
  push32((uint32_t)(EAX));
  /* 108fc5e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fc5e5 push 0x1091c07c */
  push32((uint32_t)(0x1091c07cu));
  /* 108fc5ea push 1 */
  push32((uint32_t)(0x1u));
  /* 108fc5ec call dword ptr [0x10923308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923308))), 0x108fc5f2u);
  /* 108fc5f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fc5f4 je 0x108fc602 */
  if (C.zf) goto L_108fc602;
  /* 108fc5f6 mov dword ptr [0x109207ac], 1 */
  w32((uint32_t)(0x109207ac), (0x1u));
  /* 108fc600 jmp 0x108fc62e */
  goto L_108fc62e;
L_108fc602:;
  /* 108fc602 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 108fc605 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc606 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fc608 push 0x1091c078 */
  push32((uint32_t)(0x1091c078u));
  /* 108fc60d push 1 */
  push32((uint32_t)(0x1u));
  /* 108fc60f push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc611 call dword ptr [0x1092330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092330c))), 0x108fc617u);
  /* 108fc617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fc619 je 0x108fc627 */
  if (C.zf) goto L_108fc627;
  /* 108fc61b mov dword ptr [0x109207ac], 2 */
  w32((uint32_t)(0x109207ac), (0x2u));
  /* 108fc625 jmp 0x108fc62e */
  goto L_108fc62e;
L_108fc627:;
  /* 108fc627 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc629 jmp 0x108fc758 */
  goto L_108fc758;
L_108fc62e:;
  /* 108fc62e cmp dword ptr [0x109207ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109207ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc635 jne 0x108fc665 */
  if (!C.zf) goto L_108fc665;
  /* 108fc637 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc63b jne 0x108fc646 */
  if (!C.zf) goto L_108fc646;
  /* 108fc63d mov edx, dword ptr [0x109207b8] */
  EDX = (r32((uint32_t)(0x109207b8)));
  /* 108fc643 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_108fc646:;
  /* 108fc646 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fc649 push eax */
  push32((uint32_t)(EAX));
  /* 108fc64a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc64d push ecx */
  push32((uint32_t)(ECX));
  /* 108fc64e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc651 push edx */
  push32((uint32_t)(EDX));
  /* 108fc652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc655 push eax */
  push32((uint32_t)(EAX));
  /* 108fc656 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108fc659 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc65a call dword ptr [0x1092330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092330c))), 0x108fc660u);
  /* 108fc660 jmp 0x108fc758 */
  goto L_108fc758;
L_108fc665:;
  /* 108fc665 cmp dword ptr [0x109207ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109207ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc66c jne 0x108fc756 */
  if (!C.zf) goto L_108fc756;
  /* 108fc672 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc676 jne 0x108fc681 */
  if (!C.zf) goto L_108fc681;
  /* 108fc678 mov edx, dword ptr [0x109207c8] */
  EDX = (r32((uint32_t)(0x109207c8)));
  /* 108fc67e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_108fc681:;
  /* 108fc681 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc683 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc685 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc688 push eax */
  push32((uint32_t)(EAX));
  /* 108fc689 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc68c push ecx */
  push32((uint32_t)(ECX));
  /* 108fc68d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 108fc690 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108fc692 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc694 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 108fc697 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc69a push edx */
  push32((uint32_t)(EDX));
  /* 108fc69b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108fc69e push eax */
  push32((uint32_t)(EAX));
  /* 108fc69f call dword ptr [0x10923310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923310))), 0x108fc6a5u);
  /* 108fc6a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108fc6a8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc6ac jne 0x108fc6b5 */
  if (!C.zf) goto L_108fc6b5;
  /* 108fc6ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc6b0 jmp 0x108fc758 */
  goto L_108fc758;
L_108fc6b5:;
  /* 108fc6b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fc6bc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fc6bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108fc6c1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc6c4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108fc6c6 call 0x108f7520 */
  push32(0x108fc6cbu); f_108f7520();
  /* 108fc6cb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 108fc6ce mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108fc6d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108fc6d4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108fc6d7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fc6da shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 108fc6dc push edx */
  push32((uint32_t)(EDX));
  /* 108fc6dd push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc6df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fc6e2 push eax */
  push32((uint32_t)(EAX));
  /* 108fc6e3 call 0x108f80f0 */
  push32(0x108fc6e8u); f_108f80f0();
  /* 108fc6e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc6eb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108fc6f2 jmp 0x108fc70b */
  goto L_108fc70b;
  /* 108fc6f4 mov eax, 1 */
  EAX = (0x1u);
  /* 108fc6f9 ret  */
  ESPCHK(0x108fc5b0u, _esp0);
  ESP += 4; return;
  /* 108fc6fa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108fc6fd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108fc704 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108fc70b:;
  /* 108fc70b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc70f jne 0x108fc715 */
  if (!C.zf) goto L_108fc715;
  /* 108fc711 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc713 jmp 0x108fc758 */
  goto L_108fc758;
L_108fc715:;
  /* 108fc715 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fc718 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc719 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fc71c push edx */
  push32((uint32_t)(EDX));
  /* 108fc71d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc720 push eax */
  push32((uint32_t)(EAX));
  /* 108fc721 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc724 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc725 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fc727 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108fc72a push edx */
  push32((uint32_t)(EDX));
  /* 108fc72b call dword ptr [0x10923310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923310))), 0x108fc731u);
  /* 108fc731 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108fc734 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc738 jne 0x108fc73e */
  if (!C.zf) goto L_108fc73e;
  /* 108fc73a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc73c jmp 0x108fc758 */
  goto L_108fc758;
L_108fc73e:;
  /* 108fc73e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fc741 push eax */
  push32((uint32_t)(EAX));
  /* 108fc742 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fc745 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc746 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fc749 push edx */
  push32((uint32_t)(EDX));
  /* 108fc74a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc74d push eax */
  push32((uint32_t)(EAX));
  /* 108fc74e call dword ptr [0x10923308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923308))), 0x108fc754u);
  /* 108fc754 jmp 0x108fc758 */
  goto L_108fc758;
L_108fc756:;
  /* 108fc756 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108fc758:;
  /* 108fc758 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 108fc75b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fc75e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108fc765 pop edi */
  EDI = (pop32());
  /* 108fc766 pop esi */
  ESI = (pop32());
  /* 108fc767 pop ebx */
  EBX = (pop32());
  /* 108fc768 mov esp, ebp */
  ESP = (EBP);
  /* 108fc76a pop ebp */
  EBP = (pop32());
  /* 108fc76b ret  */
  ESPCHK(0x108fc5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c770 @ 0x108fc770 (727 bytes, 263 insns) */
void f_108fc770(void) {
  FTRACE(0x108fc770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fc770 push ebp */
  push32((uint32_t)(EBP));
  /* 108fc771 mov ebp, esp */
  EBP = (ESP);
  /* 108fc773 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108fc775 push 0x1091c090 */
  push32((uint32_t)(0x1091c090u));
  /* 108fc77a push 0x108fd488 */
  push32((uint32_t)(0x108fd488u));
  /* 108fc77f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108fc785 push eax */
  push32((uint32_t)(EAX));
  /* 108fc786 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108fc78d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc790 push ebx */
  push32((uint32_t)(EBX));
  /* 108fc791 push esi */
  push32((uint32_t)(ESI));
  /* 108fc792 push edi */
  push32((uint32_t)(EDI));
  /* 108fc793 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108fc796 cmp dword ptr [0x109207d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc79d jne 0x108fc7f6 */
  if (!C.zf) goto L_108fc7f6;
  /* 108fc79f push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc7a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc7a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fc7a5 push 0x1091c07c */
  push32((uint32_t)(0x1091c07cu));
  /* 108fc7aa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108fc7af push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc7b1 call dword ptr [0x10923300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923300))), 0x108fc7b7u);
  /* 108fc7b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fc7b9 je 0x108fc7c7 */
  if (C.zf) goto L_108fc7c7;
  /* 108fc7bb mov dword ptr [0x109207d0], 1 */
  w32((uint32_t)(0x109207d0), (0x1u));
  /* 108fc7c5 jmp 0x108fc7f6 */
  goto L_108fc7f6;
L_108fc7c7:;
  /* 108fc7c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc7c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc7cb push 1 */
  push32((uint32_t)(0x1u));
  /* 108fc7cd push 0x1091c078 */
  push32((uint32_t)(0x1091c078u));
  /* 108fc7d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108fc7d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc7d9 call dword ptr [0x10923304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923304))), 0x108fc7dfu);
  /* 108fc7df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fc7e1 je 0x108fc7ef */
  if (C.zf) goto L_108fc7ef;
  /* 108fc7e3 mov dword ptr [0x109207d0], 2 */
  w32((uint32_t)(0x109207d0), (0x2u));
  /* 108fc7ed jmp 0x108fc7f6 */
  goto L_108fc7f6;
L_108fc7ef:;
  /* 108fc7ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc7f1 jmp 0x108fca61 */
  goto L_108fca61;
L_108fc7f6:;
  /* 108fc7f6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc7fa jle 0x108fc80f */
  if ((C.zf||C.sf!=C.of)) goto L_108fc80f;
  /* 108fc7fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fc7ff push eax */
  push32((uint32_t)(EAX));
  /* 108fc800 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc803 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc804 call 0x108fca80 */
  push32(0x108fc809u); f_108fca80();
  /* 108fc809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc80c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_108fc80f:;
  /* 108fc80f cmp dword ptr [0x109207d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109207d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc816 jne 0x108fc83b */
  if (!C.zf) goto L_108fc83b;
  /* 108fc818 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108fc81b push edx */
  push32((uint32_t)(EDX));
  /* 108fc81c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108fc81f push eax */
  push32((uint32_t)(EAX));
  /* 108fc820 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fc823 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc824 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc827 push edx */
  push32((uint32_t)(EDX));
  /* 108fc828 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc82b push eax */
  push32((uint32_t)(EAX));
  /* 108fc82c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc82f push ecx */
  push32((uint32_t)(ECX));
  /* 108fc830 call dword ptr [0x10923304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923304))), 0x108fc836u);
  /* 108fc836 jmp 0x108fca61 */
  goto L_108fca61;
L_108fc83b:;
  /* 108fc83b cmp dword ptr [0x109207d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109207d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc842 jne 0x108fca5f */
  if (!C.zf) goto L_108fca5f;
  /* 108fc848 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc84c jne 0x108fc857 */
  if (!C.zf) goto L_108fc857;
  /* 108fc84e mov edx, dword ptr [0x109207c8] */
  EDX = (r32((uint32_t)(0x109207c8)));
  /* 108fc854 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_108fc857:;
  /* 108fc857 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc859 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc85b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fc85e push eax */
  push32((uint32_t)(EAX));
  /* 108fc85f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc862 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc863 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 108fc866 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108fc868 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fc86a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 108fc86d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc870 push edx */
  push32((uint32_t)(EDX));
  /* 108fc871 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 108fc874 push eax */
  push32((uint32_t)(EAX));
  /* 108fc875 call dword ptr [0x10923310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923310))), 0x108fc87bu);
  /* 108fc87b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108fc87e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc882 jne 0x108fc88b */
  if (!C.zf) goto L_108fc88b;
  /* 108fc884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc886 jmp 0x108fca61 */
  goto L_108fca61;
L_108fc88b:;
  /* 108fc88b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fc892 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108fc895 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108fc897 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc89a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108fc89c call 0x108f7520 */
  push32(0x108fc8a1u); f_108f7520();
  /* 108fc8a1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 108fc8a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108fc8a7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108fc8aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108fc8ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108fc8b4 jmp 0x108fc8cd */
  goto L_108fc8cd;
  /* 108fc8b6 mov eax, 1 */
  EAX = (0x1u);
  /* 108fc8bb ret  */
  ESPCHK(0x108fc770u, _esp0);
  ESP += 4; return;
  /* 108fc8bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108fc8bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108fc8c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108fc8cd:;
  /* 108fc8cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc8d1 jne 0x108fc8da */
  if (!C.zf) goto L_108fc8da;
  /* 108fc8d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc8d5 jmp 0x108fca61 */
  goto L_108fca61;
L_108fc8da:;
  /* 108fc8da mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108fc8dd push edx */
  push32((uint32_t)(EDX));
  /* 108fc8de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fc8e1 push eax */
  push32((uint32_t)(EAX));
  /* 108fc8e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fc8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc8e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fc8e9 push edx */
  push32((uint32_t)(EDX));
  /* 108fc8ea push 1 */
  push32((uint32_t)(0x1u));
  /* 108fc8ec mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 108fc8ef push eax */
  push32((uint32_t)(EAX));
  /* 108fc8f0 call dword ptr [0x10923310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923310))), 0x108fc8f6u);
  /* 108fc8f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fc8f8 jne 0x108fc901 */
  if (!C.zf) goto L_108fc901;
  /* 108fc8fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc8fc jmp 0x108fca61 */
  goto L_108fca61;
L_108fc901:;
  /* 108fc901 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc903 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc905 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108fc908 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc909 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fc90c push edx */
  push32((uint32_t)(EDX));
  /* 108fc90d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc910 push eax */
  push32((uint32_t)(EAX));
  /* 108fc911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc914 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc915 call dword ptr [0x10923300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923300))), 0x108fc91bu);
  /* 108fc91b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108fc91e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc922 jne 0x108fc92b */
  if (!C.zf) goto L_108fc92b;
  /* 108fc924 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc926 jmp 0x108fca61 */
  goto L_108fca61;
L_108fc92b:;
  /* 108fc92b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc92e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 108fc934 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fc936 je 0x108fc97b */
  if (C.zf) goto L_108fc97b;
  /* 108fc938 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc93c je 0x108fc976 */
  if (C.zf) goto L_108fc976;
  /* 108fc93e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fc941 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc944 jle 0x108fc94d */
  if ((C.zf||C.sf!=C.of)) goto L_108fc94d;
  /* 108fc946 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc948 jmp 0x108fca61 */
  goto L_108fca61;
L_108fc94d:;
  /* 108fc94d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108fc950 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc951 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108fc954 push edx */
  push32((uint32_t)(EDX));
  /* 108fc955 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108fc958 push eax */
  push32((uint32_t)(EAX));
  /* 108fc959 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fc95c push ecx */
  push32((uint32_t)(ECX));
  /* 108fc95d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc960 push edx */
  push32((uint32_t)(EDX));
  /* 108fc961 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc964 push eax */
  push32((uint32_t)(EAX));
  /* 108fc965 call dword ptr [0x10923300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923300))), 0x108fc96bu);
  /* 108fc96b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fc96d jne 0x108fc976 */
  if (!C.zf) goto L_108fc976;
  /* 108fc96f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc971 jmp 0x108fca61 */
  goto L_108fca61;
L_108fc976:;
  /* 108fc976 jmp 0x108fca5a */
  goto L_108fca5a;
L_108fc97b:;
  /* 108fc97b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fc97e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108fc981 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108fc988 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108fc98b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108fc98d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fc990 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108fc992 call 0x108f7520 */
  push32(0x108fc997u); f_108f7520();
  /* 108fc997 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 108fc99a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108fc99d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 108fc9a0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108fc9a3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108fc9aa jmp 0x108fc9c3 */
  goto L_108fc9c3;
  /* 108fc9ac mov eax, 1 */
  EAX = (0x1u);
  /* 108fc9b1 ret  */
  ESPCHK(0x108fc770u, _esp0);
  ESP += 4; return;
  /* 108fc9b2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108fc9b5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108fc9bc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108fc9c3:;
  /* 108fc9c3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc9c7 jne 0x108fc9d0 */
  if (!C.zf) goto L_108fc9d0;
  /* 108fc9c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc9cb jmp 0x108fca61 */
  goto L_108fca61;
L_108fc9d0:;
  /* 108fc9d0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108fc9d3 push eax */
  push32((uint32_t)(EAX));
  /* 108fc9d4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fc9d7 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc9d8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108fc9db push edx */
  push32((uint32_t)(EDX));
  /* 108fc9dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108fc9df push eax */
  push32((uint32_t)(EAX));
  /* 108fc9e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fc9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108fc9e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fc9e7 push edx */
  push32((uint32_t)(EDX));
  /* 108fc9e8 call dword ptr [0x10923300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923300))), 0x108fc9eeu);
  /* 108fc9ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fc9f0 jne 0x108fc9f6 */
  if (!C.zf) goto L_108fc9f6;
  /* 108fc9f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fc9f4 jmp 0x108fca61 */
  goto L_108fca61;
L_108fc9f6:;
  /* 108fc9f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fc9fa jne 0x108fca2a */
  if (!C.zf) goto L_108fca2a;
  /* 108fc9fc push 0 */
  push32((uint32_t)(0x0u));
  /* 108fc9fe push 0 */
  push32((uint32_t)(0x0u));
  /* 108fca00 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fca02 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fca04 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108fca07 push eax */
  push32((uint32_t)(EAX));
  /* 108fca08 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fca0b push ecx */
  push32((uint32_t)(ECX));
  /* 108fca0c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108fca11 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 108fca14 push edx */
  push32((uint32_t)(EDX));
  /* 108fca15 call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x108fca1bu);
  /* 108fca1b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108fca1e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fca22 jne 0x108fca28 */
  if (!C.zf) goto L_108fca28;
  /* 108fca24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fca26 jmp 0x108fca61 */
  goto L_108fca61;
L_108fca28:;
  /* 108fca28 jmp 0x108fca5a */
  goto L_108fca5a;
L_108fca2a:;
  /* 108fca2a push 0 */
  push32((uint32_t)(0x0u));
  /* 108fca2c push 0 */
  push32((uint32_t)(0x0u));
  /* 108fca2e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108fca31 push eax */
  push32((uint32_t)(EAX));
  /* 108fca32 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108fca35 push ecx */
  push32((uint32_t)(ECX));
  /* 108fca36 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108fca39 push edx */
  push32((uint32_t)(EDX));
  /* 108fca3a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108fca3d push eax */
  push32((uint32_t)(EAX));
  /* 108fca3e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108fca43 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 108fca46 push ecx */
  push32((uint32_t)(ECX));
  /* 108fca47 call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x108fca4du);
  /* 108fca4d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108fca50 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fca54 jne 0x108fca5a */
  if (!C.zf) goto L_108fca5a;
  /* 108fca56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fca58 jmp 0x108fca61 */
  goto L_108fca61;
L_108fca5a:;
  /* 108fca5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fca5d jmp 0x108fca61 */
  goto L_108fca61;
L_108fca5f:;
  /* 108fca5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108fca61:;
  /* 108fca61 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 108fca64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fca67 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108fca6e pop edi */
  EDI = (pop32());
  /* 108fca6f pop esi */
  ESI = (pop32());
  /* 108fca70 pop ebx */
  EBX = (pop32());
  /* 108fca71 mov esp, ebp */
  ESP = (EBP);
  /* 108fca73 pop ebp */
  EBP = (pop32());
  /* 108fca74 ret  */
  ESPCHK(0x108fc770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca80 @ 0x108fca80 (80 bytes, 32 insns) */
void f_108fca80(void) {
  FTRACE(0x108fca80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fca80 push ebp */
  push32((uint32_t)(EBP));
  /* 108fca81 mov ebp, esp */
  EBP = (ESP);
  /* 108fca83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fca86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fca89 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108fca8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fca8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108fca92:;
  /* 108fca92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fca95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fca98 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fca9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108fca9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fcaa0 je 0x108fcab7 */
  if (C.zf) goto L_108fcab7;
  /* 108fcaa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcaa5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108fcaa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fcaaa je 0x108fcab7 */
  if (C.zf) goto L_108fcab7;
  /* 108fcaac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcaaf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcab2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fcab5 jmp 0x108fca92 */
  goto L_108fca92;
L_108fcab7:;
  /* 108fcab7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcaba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108fcabd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fcabf jne 0x108fcac9 */
  if (!C.zf) goto L_108fcac9;
  /* 108fcac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcac4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fcac7 jmp 0x108fcacc */
  goto L_108fcacc;
L_108fcac9:;
  /* 108fcac9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_108fcacc:;
  /* 108fcacc mov esp, ebp */
  ESP = (EBP);
  /* 108fcace pop ebp */
  EBP = (pop32());
  /* 108fcacf ret  */
  ESPCHK(0x108fca80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cad0 @ 0x108fcad0 (130 bytes, 43 insns) */
void f_108fcad0(void) {
  FTRACE(0x108fcad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fcad0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fcad1 mov ebp, esp */
  EBP = (ESP);
  /* 108fcad3 push ecx */
  push32((uint32_t)(ECX));
  /* 108fcad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcad7 cmp eax, dword ptr [0x109220dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109220dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcadd jae 0x108fcb01 */
  if (!C.cf) goto L_108fcb01;
  /* 108fcadf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcae2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fcae5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcae8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fcaeb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fcaee mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fcaf5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108fcafa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108fcafd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fcaff jne 0x108fcb1c */
  if (!C.zf) goto L_108fcb1c;
L_108fcb01:;
  /* 108fcb01 call 0x108fc250 */
  push32(0x108fcb06u); f_108fc250();
  /* 108fcb06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108fcb0c call 0x108fc260 */
  push32(0x108fcb11u); f_108fc260();
  /* 108fcb11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108fcb17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fcb1a jmp 0x108fcb4e */
  goto L_108fcb4e;
L_108fcb1c:;
  /* 108fcb1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcb1f push edx */
  push32((uint32_t)(EDX));
  /* 108fcb20 call 0x108fda70 */
  push32(0x108fcb25u); f_108fda70();
  /* 108fcb25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcb28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fcb2b push eax */
  push32((uint32_t)(EAX));
  /* 108fcb2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fcb2f push ecx */
  push32((uint32_t)(ECX));
  /* 108fcb30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcb33 push edx */
  push32((uint32_t)(EDX));
  /* 108fcb34 call 0x108fcb60 */
  push32(0x108fcb39u); f_108fcb60();
  /* 108fcb39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcb3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fcb3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcb42 push eax */
  push32((uint32_t)(EAX));
  /* 108fcb43 call 0x108fdb00 */
  push32(0x108fcb48u); f_108fdb00();
  /* 108fcb48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcb4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108fcb4e:;
  /* 108fcb4e mov esp, ebp */
  ESP = (EBP);
  /* 108fcb50 pop ebp */
  EBP = (pop32());
  /* 108fcb51 ret  */
  ESPCHK(0x108fcad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb60 @ 0x108fcb60 (178 bytes, 56 insns) */
void f_108fcb60(void) {
  FTRACE(0x108fcb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fcb60 push ebp */
  push32((uint32_t)(EBP));
  /* 108fcb61 mov ebp, esp */
  EBP = (ESP);
  /* 108fcb63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fcb66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcb69 push eax */
  push32((uint32_t)(EAX));
  /* 108fcb6a call 0x108fd8f0 */
  push32(0x108fcb6fu); f_108fd8f0();
  /* 108fcb6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcb72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108fcb75 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcb79 jne 0x108fcb8e */
  if (!C.zf) goto L_108fcb8e;
  /* 108fcb7b call 0x108fc250 */
  push32(0x108fcb80u); f_108fc250();
  /* 108fcb80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108fcb86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fcb89 jmp 0x108fcc0e */
  goto L_108fcc0e;
L_108fcb8e:;
  /* 108fcb8e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fcb91 push ecx */
  push32((uint32_t)(ECX));
  /* 108fcb92 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fcb94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fcb97 push edx */
  push32((uint32_t)(EDX));
  /* 108fcb98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fcb9b push eax */
  push32((uint32_t)(EAX));
  /* 108fcb9c call dword ptr [0x109232fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232fc))), 0x108fcba2u);
  /* 108fcba2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108fcba5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcba9 jne 0x108fcbb6 */
  if (!C.zf) goto L_108fcbb6;
  /* 108fcbab call dword ptr [0x109233ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233ac))), 0x108fcbb1u);
  /* 108fcbb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fcbb4 jmp 0x108fcbbd */
  goto L_108fcbbd;
L_108fcbb6:;
  /* 108fcbb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108fcbbd:;
  /* 108fcbbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcbc1 je 0x108fcbd4 */
  if (C.zf) goto L_108fcbd4;
  /* 108fcbc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcbc6 push ecx */
  push32((uint32_t)(ECX));
  /* 108fcbc7 call 0x108fc1b0 */
  push32(0x108fcbccu); f_108fc1b0();
  /* 108fcbcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcbcf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fcbd2 jmp 0x108fcc0e */
  goto L_108fcc0e;
L_108fcbd4:;
  /* 108fcbd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcbd7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 108fcbda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcbdd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 108fcbe0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fcbe3 mov ecx, dword ptr [edx*4 + 0x10921fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10921fa0)));
  /* 108fcbea mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 108fcbee and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 108fcbf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcbf4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fcbf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcbfa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108fcbfd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fcc00 mov eax, dword ptr [eax*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108fcc07 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 108fcc0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108fcc0e:;
  /* 108fcc0e mov esp, ebp */
  ESP = (EBP);
  /* 108fcc10 pop ebp */
  EBP = (pop32());
  /* 108fcc11 ret  */
  ESPCHK(0x108fcb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x108fcc20 (130 bytes, 43 insns) */
void f_108fcc20(void) {
  FTRACE(0x108fcc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fcc20 push ebp */
  push32((uint32_t)(EBP));
  /* 108fcc21 mov ebp, esp */
  EBP = (ESP);
  /* 108fcc23 push ecx */
  push32((uint32_t)(ECX));
  /* 108fcc24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcc27 cmp eax, dword ptr [0x109220dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109220dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcc2d jae 0x108fcc51 */
  if (!C.cf) goto L_108fcc51;
  /* 108fcc2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcc32 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fcc35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcc38 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fcc3b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fcc3e mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fcc45 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108fcc4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108fcc4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fcc4f jne 0x108fcc6c */
  if (!C.zf) goto L_108fcc6c;
L_108fcc51:;
  /* 108fcc51 call 0x108fc250 */
  push32(0x108fcc56u); f_108fc250();
  /* 108fcc56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108fcc5c call 0x108fc260 */
  push32(0x108fcc61u); f_108fc260();
  /* 108fcc61 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108fcc67 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fcc6a jmp 0x108fcc9e */
  goto L_108fcc9e;
L_108fcc6c:;
  /* 108fcc6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcc6f push edx */
  push32((uint32_t)(EDX));
  /* 108fcc70 call 0x108fda70 */
  push32(0x108fcc75u); f_108fda70();
  /* 108fcc75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcc78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fcc7b push eax */
  push32((uint32_t)(EAX));
  /* 108fcc7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fcc7f push ecx */
  push32((uint32_t)(ECX));
  /* 108fcc80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcc83 push edx */
  push32((uint32_t)(EDX));
  /* 108fcc84 call 0x108fccb0 */
  push32(0x108fcc89u); f_108fccb0();
  /* 108fcc89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcc8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fcc8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcc92 push eax */
  push32((uint32_t)(EAX));
  /* 108fcc93 call 0x108fdb00 */
  push32(0x108fcc98u); f_108fdb00();
  /* 108fcc98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcc9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108fcc9e:;
  /* 108fcc9e mov esp, ebp */
  ESP = (EBP);
  /* 108fcca0 pop ebp */
  EBP = (pop32());
  /* 108fcca1 ret  */
  ESPCHK(0x108fcc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccb0 @ 0x108fccb0 (627 bytes, 182 insns) */
void f_108fccb0(void) {
  FTRACE(0x108fccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fccb1 mov ebp, esp */
  EBP = (ESP);
  /* 108fccb3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fccb9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108fccc0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fccc3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 108fccc9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcccd jne 0x108fccd6 */
  if (!C.zf) goto L_108fccd6;
  /* 108fcccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fccd1 jmp 0x108fcf1f */
  goto L_108fcf1f;
L_108fccd6:;
  /* 108fccd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fccd9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fccdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fccdf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fcce2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fcce5 mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fccec movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108fccf1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 108fccf4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fccf6 je 0x108fcd08 */
  if (C.zf) goto L_108fcd08;
  /* 108fccf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fccfa push 0 */
  push32((uint32_t)(0x0u));
  /* 108fccfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fccff push edx */
  push32((uint32_t)(EDX));
  /* 108fcd00 call 0x108fcb60 */
  push32(0x108fcd05u); f_108fcb60();
  /* 108fcd05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fcd08:;
  /* 108fcd08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcd0b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fcd0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcd11 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108fcd14 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fcd17 mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108fcd1e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 108fcd23 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 108fcd28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fcd2a je 0x108fce3c */
  if (C.zf) goto L_108fce3c;
  /* 108fcd30 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fcd33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108fcd36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_108fcd3d:;
  /* 108fcd3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcd40 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fcd43 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcd46 jae 0x108fce3a */
  if (!C.cf) goto L_108fce3a;
  /* 108fcd4c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 108fcd52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108fcd55:;
  /* 108fcd55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fcd58 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 108fcd5e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fcd60 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcd66 jge 0x108fcdc7 */
  if ((C.sf==C.of)) goto L_108fcdc7;
  /* 108fcd68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcd6b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fcd6e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcd71 jae 0x108fcdc7 */
  if (!C.cf) goto L_108fcdc7;
  /* 108fcd73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcd76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108fcd78 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 108fcd7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcd81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcd84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fcd87 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 108fcd8e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcd91 jne 0x108fcdb1 */
  if (!C.zf) goto L_108fcdb1;
  /* 108fcd93 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 108fcd99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcd9c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 108fcda2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fcda5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 108fcda8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fcdab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcdae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108fcdb1:;
  /* 108fcdb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fcdb4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 108fcdba mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 108fcdbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fcdbf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcdc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108fcdc5 jmp 0x108fcd55 */
  goto L_108fcd55;
L_108fcdc7:;
  /* 108fcdc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fcdc9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 108fcdcf push edx */
  push32((uint32_t)(EDX));
  /* 108fcdd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fcdd3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 108fcdd9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fcddb push eax */
  push32((uint32_t)(EAX));
  /* 108fcddc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 108fcde2 push edx */
  push32((uint32_t)(EDX));
  /* 108fcde3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcde6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fcde9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcdec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108fcdef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fcdf2 mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108fcdf9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 108fcdfc push eax */
  push32((uint32_t)(EAX));
  /* 108fcdfd call dword ptr [0x1092336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092336c))), 0x108fce03u);
  /* 108fce03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fce05 je 0x108fce2a */
  if (C.zf) goto L_108fce2a;
  /* 108fce07 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fce0a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fce10 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108fce13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fce16 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 108fce1c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fce1e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fce24 jge 0x108fce28 */
  if ((C.sf==C.of)) goto L_108fce28;
  /* 108fce26 jmp 0x108fce3a */
  goto L_108fce3a;
L_108fce28:;
  /* 108fce28 jmp 0x108fce35 */
  goto L_108fce35;
L_108fce2a:;
  /* 108fce2a call dword ptr [0x109233ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233ac))), 0x108fce30u);
  /* 108fce30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108fce33 jmp 0x108fce3a */
  goto L_108fce3a;
L_108fce35:;
  /* 108fce35 jmp 0x108fcd3d */
  goto L_108fcd3d;
L_108fce3a:;
  /* 108fce3a jmp 0x108fce8c */
  goto L_108fce8c;
L_108fce3c:;
  /* 108fce3c push 0 */
  push32((uint32_t)(0x0u));
  /* 108fce3e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 108fce44 push ecx */
  push32((uint32_t)(ECX));
  /* 108fce45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fce48 push edx */
  push32((uint32_t)(EDX));
  /* 108fce49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fce4c push eax */
  push32((uint32_t)(EAX));
  /* 108fce4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fce50 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fce53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fce56 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fce59 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fce5c mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fce63 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 108fce66 push ecx */
  push32((uint32_t)(ECX));
  /* 108fce67 call dword ptr [0x1092336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092336c))), 0x108fce6du);
  /* 108fce6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fce6f je 0x108fce83 */
  if (C.zf) goto L_108fce83;
  /* 108fce71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108fce78 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 108fce7e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108fce81 jmp 0x108fce8c */
  goto L_108fce8c;
L_108fce83:;
  /* 108fce83 call dword ptr [0x109233ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233ac))), 0x108fce89u);
  /* 108fce89 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108fce8c:;
  /* 108fce8c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fce90 jne 0x108fcf16 */
  if (!C.zf) goto L_108fcf16;
  /* 108fce96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fce9a je 0x108fceca */
  if (C.zf) goto L_108fceca;
  /* 108fce9c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcea0 jne 0x108fceb9 */
  if (!C.zf) goto L_108fceb9;
  /* 108fcea2 call 0x108fc250 */
  push32(0x108fcea7u); f_108fc250();
  /* 108fcea7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108fcead call 0x108fc260 */
  push32(0x108fceb2u); f_108fc260();
  /* 108fceb2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fceb5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108fceb7 jmp 0x108fcec5 */
  goto L_108fcec5;
L_108fceb9:;
  /* 108fceb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fcebc push edx */
  push32((uint32_t)(EDX));
  /* 108fcebd call 0x108fc1b0 */
  push32(0x108fcec2u); f_108fc1b0();
  /* 108fcec2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fcec5:;
  /* 108fcec5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fcec8 jmp 0x108fcf1f */
  goto L_108fcf1f;
L_108fceca:;
  /* 108fceca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcecd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fced0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fced3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108fced6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fced9 mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108fcee0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 108fcee5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 108fcee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fceea je 0x108fcefb */
  if (C.zf) goto L_108fcefb;
  /* 108fceec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fceef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108fcef2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcef5 jne 0x108fcefb */
  if (!C.zf) goto L_108fcefb;
  /* 108fcef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fcef9 jmp 0x108fcf1f */
  goto L_108fcf1f;
L_108fcefb:;
  /* 108fcefb call 0x108fc250 */
  push32(0x108fcf00u); f_108fc250();
  /* 108fcf00 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 108fcf06 call 0x108fc260 */
  push32(0x108fcf0bu); f_108fc260();
  /* 108fcf0b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108fcf11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fcf14 jmp 0x108fcf1f */
  goto L_108fcf1f;
L_108fcf16:;
  /* 108fcf16 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fcf19 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_108fcf1f:;
  /* 108fcf1f mov esp, ebp */
  ESP = (EBP);
  /* 108fcf21 pop ebp */
  EBP = (pop32());
  /* 108fcf22 ret  */
  ESPCHK(0x108fccb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf30 @ 0x108fcf30 (199 bytes, 68 insns) */
void f_108fcf30(void) {
  FTRACE(0x108fcf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fcf30 push ebp */
  push32((uint32_t)(EBP));
  /* 108fcf31 mov ebp, esp */
  EBP = (ESP);
  /* 108fcf33 push ecx */
  push32((uint32_t)(ECX));
  /* 108fcf34 push ebx */
  push32((uint32_t)(EBX));
  /* 108fcf35 push esi */
  push32((uint32_t)(ESI));
  /* 108fcf36 push edi */
  push32((uint32_t)(EDI));
L_108fcf37:;
  /* 108fcf37 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcf3b jne 0x108fcf5b */
  if (!C.zf) goto L_108fcf5b;
  /* 108fcf3d push 0x1091bfdc */
  push32((uint32_t)(0x1091bfdcu));
  /* 108fcf42 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fcf44 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 108fcf46 push 0x1091c0a8 */
  push32((uint32_t)(0x1091c0a8u));
  /* 108fcf4b push 2 */
  push32((uint32_t)(0x2u));
  /* 108fcf4d call 0x108f3440 */
  push32(0x108fcf52u); f_108f3440();
  /* 108fcf52 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcf55 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcf58 jne 0x108fcf5b */
  if (!C.zf) goto L_108fcf5b;
  /* 108fcf5a int3  */
  x86_unimpl("int3 @ 0x108fcf5a");
L_108fcf5b:;
  /* 108fcf5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fcf5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fcf5f jne 0x108fcf37 */
  if (!C.zf) goto L_108fcf37;
  /* 108fcf61 mov ecx, dword ptr [0x109207d4] */
  ECX = (r32((uint32_t)(0x109207d4)));
  /* 108fcf67 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcf6a mov dword ptr [0x109207d4], ecx */
  w32((uint32_t)(0x109207d4), (ECX));
  /* 108fcf70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fcf73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108fcf76 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 108fcf78 push 0x1091c0a8 */
  push32((uint32_t)(0x1091c0a8u));
  /* 108fcf7d push 2 */
  push32((uint32_t)(0x2u));
  /* 108fcf7f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108fcf84 call 0x108f4380 */
  push32(0x108fcf89u); f_108f4380();
  /* 108fcf89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcf8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcf8f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 108fcf92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcf95 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fcf99 je 0x108fcfb6 */
  if (C.zf) goto L_108fcfb6;
  /* 108fcf9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcf9e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108fcfa1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 108fcfa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcfa7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 108fcfaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcfad mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 108fcfb4 jmp 0x108fcfdb */
  goto L_108fcfdb;
L_108fcfb6:;
  /* 108fcfb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcfb9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fcfbc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108fcfbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcfc2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108fcfc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcfc8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fcfcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcfce mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108fcfd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcfd4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_108fcfdb:;
  /* 108fcfdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcfde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcfe1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108fcfe4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108fcfe6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fcfe9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 108fcff0 pop edi */
  EDI = (pop32());
  /* 108fcff1 pop esi */
  ESI = (pop32());
  /* 108fcff2 pop ebx */
  EBX = (pop32());
  /* 108fcff3 mov esp, ebp */
  ESP = (EBP);
  /* 108fcff5 pop ebp */
  EBP = (pop32());
  /* 108fcff6 ret  */
  ESPCHK(0x108fcf30u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x108fd000 (50 bytes, 17 insns) */
void f_108fd000(void) {
  FTRACE(0x108fd000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd000 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd001 mov ebp, esp */
  EBP = (ESP);
  /* 108fd003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd006 cmp eax, dword ptr [0x109220dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109220dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd00c jb 0x108fd012 */
  if (C.cf) goto L_108fd012;
  /* 108fd00e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fd010 jmp 0x108fd030 */
  goto L_108fd030;
L_108fd012:;
  /* 108fd012 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd015 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fd018 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd01b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fd01e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fd021 mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fd028 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108fd02d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_108fd030:;
  /* 108fd030 pop ebp */
  EBP = (pop32());
  /* 108fd031 ret  */
  ESPCHK(0x108fd000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d040 @ 0x108fd040 (300 bytes, 80 insns) */
void f_108fd040(void) {
  FTRACE(0x108fd040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd040 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd041 mov ebp, esp */
  EBP = (ESP);
  /* 108fd043 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd044 cmp dword ptr [0x10921ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10921ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd04b jne 0x108fd059 */
  if (!C.zf) goto L_108fd059;
  /* 108fd04d mov dword ptr [0x10921ca0], 0x200 */
  w32((uint32_t)(0x10921ca0), (0x200u));
  /* 108fd057 jmp 0x108fd06c */
  goto L_108fd06c;
L_108fd059:;
  /* 108fd059 cmp dword ptr [0x10921ca0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10921ca0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd060 jge 0x108fd06c */
  if ((C.sf==C.of)) goto L_108fd06c;
  /* 108fd062 mov dword ptr [0x10921ca0], 0x14 */
  w32((uint32_t)(0x10921ca0), (0x14u));
L_108fd06c:;
  /* 108fd06c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 108fd071 push 0x1091c0b4 */
  push32((uint32_t)(0x1091c0b4u));
  /* 108fd076 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fd078 push 4 */
  push32((uint32_t)(0x4u));
  /* 108fd07a mov eax, dword ptr [0x10921ca0] */
  EAX = (r32((uint32_t)(0x10921ca0)));
  /* 108fd07f push eax */
  push32((uint32_t)(EAX));
  /* 108fd080 call 0x108f4790 */
  push32(0x108fd085u); f_108f4790();
  /* 108fd085 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd088 mov dword ptr [0x10920948], eax */
  w32((uint32_t)(0x10920948), (EAX));
  /* 108fd08d cmp dword ptr [0x10920948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd094 jne 0x108fd0d5 */
  if (!C.zf) goto L_108fd0d5;
  /* 108fd096 mov dword ptr [0x10921ca0], 0x14 */
  w32((uint32_t)(0x10921ca0), (0x14u));
  /* 108fd0a0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 108fd0a5 push 0x1091c0b4 */
  push32((uint32_t)(0x1091c0b4u));
  /* 108fd0aa push 2 */
  push32((uint32_t)(0x2u));
  /* 108fd0ac push 4 */
  push32((uint32_t)(0x4u));
  /* 108fd0ae mov ecx, dword ptr [0x10921ca0] */
  ECX = (r32((uint32_t)(0x10921ca0)));
  /* 108fd0b4 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd0b5 call 0x108f4790 */
  push32(0x108fd0bau); f_108f4790();
  /* 108fd0ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd0bd mov dword ptr [0x10920948], eax */
  w32((uint32_t)(0x10920948), (EAX));
  /* 108fd0c2 cmp dword ptr [0x10920948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd0c9 jne 0x108fd0d5 */
  if (!C.zf) goto L_108fd0d5;
  /* 108fd0cb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 108fd0cd call 0x108f32f0 */
  push32(0x108fd0d2u); f_108f32f0();
  /* 108fd0d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fd0d5:;
  /* 108fd0d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fd0dc jmp 0x108fd0e7 */
  goto L_108fd0e7;
L_108fd0de:;
  /* 108fd0de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd0e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd0e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108fd0e7:;
  /* 108fd0e7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd0eb jge 0x108fd106 */
  if ((C.sf==C.of)) goto L_108fd106;
  /* 108fd0ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd0f0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fd0f3 add eax, 0x1091f120 */
  { uint32_t _a=(EAX),_b=(0x1091f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd0f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd0fb mov edx, dword ptr [0x10920948] */
  EDX = (r32((uint32_t)(0x10920948)));
  /* 108fd101 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 108fd104 jmp 0x108fd0de */
  goto L_108fd0de;
L_108fd106:;
  /* 108fd106 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fd10d jmp 0x108fd118 */
  goto L_108fd118;
L_108fd10f:;
  /* 108fd10f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd112 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108fd118:;
  /* 108fd118 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd11c jge 0x108fd168 */
  if ((C.sf==C.of)) goto L_108fd168;
  /* 108fd11e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd121 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fd124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd127 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fd12a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fd12d mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fd134 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd138 je 0x108fd156 */
  if (C.zf) goto L_108fd156;
  /* 108fd13a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd13d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fd140 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd143 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fd146 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fd149 mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fd150 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd154 jne 0x108fd166 */
  if (!C.zf) goto L_108fd166;
L_108fd156:;
  /* 108fd156 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd159 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fd15c mov dword ptr [ecx + 0x1091f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1091f130), (0xffffffffu));
L_108fd166:;
  /* 108fd166 jmp 0x108fd10f */
  goto L_108fd10f;
L_108fd168:;
  /* 108fd168 mov esp, ebp */
  ESP = (EBP);
  /* 108fd16a pop ebp */
  EBP = (pop32());
  /* 108fd16b ret  */
  ESPCHK(0x108fd040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d170 @ 0x108fd170 (26 bytes, 9 insns) */
void f_108fd170(void) {
  FTRACE(0x108fd170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd170 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd171 mov ebp, esp */
  EBP = (ESP);
  /* 108fd173 call 0x108fdd70 */
  push32(0x108fd178u); f_108fdd70();
  /* 108fd178 movsx eax, byte ptr [0x109205f0] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x109205f0))));
  /* 108fd17f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fd181 je 0x108fd188 */
  if (C.zf) goto L_108fd188;
  /* 108fd183 call 0x108fdb30 */
  push32(0x108fd188u); f_108fdb30();
L_108fd188:;
  /* 108fd188 pop ebp */
  EBP = (pop32());
  /* 108fd189 ret  */
  ESPCHK(0x108fd170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x108fd190 (61 bytes, 20 insns) */
void f_108fd190(void) {
  FTRACE(0x108fd190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd190 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd191 mov ebp, esp */
  EBP = (ESP);
  /* 108fd193 cmp dword ptr [ebp + 8], 0x1091f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1091f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd19a jb 0x108fd1be */
  if (C.cf) goto L_108fd1be;
  /* 108fd19c cmp dword ptr [ebp + 8], 0x1091f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1091f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd1a3 ja 0x108fd1be */
  if ((!C.cf&&!C.zf)) goto L_108fd1be;
  /* 108fd1a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd1a8 sub eax, 0x1091f120 */
  { uint32_t _a=(EAX),_b=(0x1091f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fd1ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fd1b0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd1b3 push eax */
  push32((uint32_t)(EAX));
  /* 108fd1b4 call 0x108f7d80 */
  push32(0x108fd1b9u); f_108f7d80();
  /* 108fd1b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd1bc jmp 0x108fd1cb */
  goto L_108fd1cb;
L_108fd1be:;
  /* 108fd1be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd1c1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd1c5 call dword ptr [0x10923338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923338))), 0x108fd1cbu);
L_108fd1cb:;
  /* 108fd1cb pop ebp */
  EBP = (pop32());
  /* 108fd1cc ret  */
  ESPCHK(0x108fd190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1d0 @ 0x108fd1d0 (41 bytes, 16 insns) */
void f_108fd1d0(void) {
  FTRACE(0x108fd1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd1d1 mov ebp, esp */
  EBP = (ESP);
  /* 108fd1d3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd1d7 jge 0x108fd1ea */
  if ((C.sf==C.of)) goto L_108fd1ea;
  /* 108fd1d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd1dc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd1df push eax */
  push32((uint32_t)(EAX));
  /* 108fd1e0 call 0x108f7d80 */
  push32(0x108fd1e5u); f_108f7d80();
  /* 108fd1e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd1e8 jmp 0x108fd1f7 */
  goto L_108fd1f7;
L_108fd1ea:;
  /* 108fd1ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fd1ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd1f1 call dword ptr [0x10923338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923338))), 0x108fd1f7u);
L_108fd1f7:;
  /* 108fd1f7 pop ebp */
  EBP = (pop32());
  /* 108fd1f8 ret  */
  ESPCHK(0x108fd1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d200 @ 0x108fd200 (61 bytes, 20 insns) */
void f_108fd200(void) {
  FTRACE(0x108fd200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd200 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd201 mov ebp, esp */
  EBP = (ESP);
  /* 108fd203 cmp dword ptr [ebp + 8], 0x1091f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1091f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd20a jb 0x108fd22e */
  if (C.cf) goto L_108fd22e;
  /* 108fd20c cmp dword ptr [ebp + 8], 0x1091f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1091f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd213 ja 0x108fd22e */
  if ((!C.cf&&!C.zf)) goto L_108fd22e;
  /* 108fd215 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd218 sub eax, 0x1091f120 */
  { uint32_t _a=(EAX),_b=(0x1091f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fd21d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fd220 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd223 push eax */
  push32((uint32_t)(EAX));
  /* 108fd224 call 0x108f7e20 */
  push32(0x108fd229u); f_108f7e20();
  /* 108fd229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd22c jmp 0x108fd23b */
  goto L_108fd23b;
L_108fd22e:;
  /* 108fd22e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd231 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd234 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd235 call dword ptr [0x10923334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923334))), 0x108fd23bu);
L_108fd23b:;
  /* 108fd23b pop ebp */
  EBP = (pop32());
  /* 108fd23c ret  */
  ESPCHK(0x108fd200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x108fd240 (41 bytes, 16 insns) */
void f_108fd240(void) {
  FTRACE(0x108fd240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd240 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd241 mov ebp, esp */
  EBP = (ESP);
  /* 108fd243 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd247 jge 0x108fd25a */
  if ((C.sf==C.of)) goto L_108fd25a;
  /* 108fd249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd24c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd24f push eax */
  push32((uint32_t)(EAX));
  /* 108fd250 call 0x108f7e20 */
  push32(0x108fd255u); f_108f7e20();
  /* 108fd255 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd258 jmp 0x108fd267 */
  goto L_108fd267;
L_108fd25a:;
  /* 108fd25a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fd25d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd260 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd261 call dword ptr [0x10923334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923334))), 0x108fd267u);
L_108fd267:;
  /* 108fd267 pop ebp */
  EBP = (pop32());
  /* 108fd268 ret  */
  ESPCHK(0x108fd240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x108fd270 (119 bytes, 34 insns) */
void f_108fd270(void) {
  FTRACE(0x108fd270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd270 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd271 mov ebp, esp */
  EBP = (ESP);
  /* 108fd273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fd276 push 0x10920944 */
  push32((uint32_t)(0x10920944u));
  /* 108fd27b call dword ptr [0x10923380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923380))), 0x108fd281u);
  /* 108fd281 cmp dword ptr [0x10920934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd288 je 0x108fd2a8 */
  if (C.zf) goto L_108fd2a8;
  /* 108fd28a push 0x10920944 */
  push32((uint32_t)(0x10920944u));
  /* 108fd28f call dword ptr [0x10923370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923370))), 0x108fd295u);
  /* 108fd295 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108fd297 call 0x108f7d80 */
  push32(0x108fd29cu); f_108f7d80();
  /* 108fd29c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd29f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108fd2a6 jmp 0x108fd2af */
  goto L_108fd2af;
L_108fd2a8:;
  /* 108fd2a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108fd2af:;
  /* 108fd2af mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 108fd2b3 push eax */
  push32((uint32_t)(EAX));
  /* 108fd2b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd2b7 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd2b8 call 0x108fd2f0 */
  push32(0x108fd2bdu); f_108fd2f0();
  /* 108fd2bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd2c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108fd2c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd2c7 je 0x108fd2d5 */
  if (C.zf) goto L_108fd2d5;
  /* 108fd2c9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108fd2cb call 0x108f7e20 */
  push32(0x108fd2d0u); f_108f7e20();
  /* 108fd2d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd2d3 jmp 0x108fd2e0 */
  goto L_108fd2e0;
L_108fd2d5:;
  /* 108fd2d5 push 0x10920944 */
  push32((uint32_t)(0x10920944u));
  /* 108fd2da call dword ptr [0x10923370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923370))), 0x108fd2e0u);
L_108fd2e0:;
  /* 108fd2e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fd2e3 mov esp, ebp */
  ESP = (EBP);
  /* 108fd2e5 pop ebp */
  EBP = (pop32());
  /* 108fd2e6 ret  */
  ESPCHK(0x108fd270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2f0 @ 0x108fd2f0 (160 bytes, 50 insns) */
void f_108fd2f0(void) {
  FTRACE(0x108fd2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd2f1 mov ebp, esp */
  EBP = (ESP);
  /* 108fd2f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fd2f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd2fa jne 0x108fd303 */
  if (!C.zf) goto L_108fd303;
  /* 108fd2fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fd2fe jmp 0x108fd38c */
  goto L_108fd38c;
L_108fd303:;
  /* 108fd303 cmp dword ptr [0x109207b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd30a jne 0x108fd33a */
  if (!C.zf) goto L_108fd33a;
  /* 108fd30c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fd30f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fd314 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd319 jle 0x108fd32b */
  if ((C.zf||C.sf!=C.of)) goto L_108fd32b;
  /* 108fd31b call 0x108fc250 */
  push32(0x108fd320u); f_108fc250();
  /* 108fd320 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 108fd326 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fd329 jmp 0x108fd38c */
  goto L_108fd38c;
L_108fd32b:;
  /* 108fd32b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd32e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 108fd331 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 108fd333 mov eax, 1 */
  EAX = (0x1u);
  /* 108fd338 jmp 0x108fd38c */
  goto L_108fd38c;
L_108fd33a:;
  /* 108fd33a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108fd341 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 108fd344 push eax */
  push32((uint32_t)(EAX));
  /* 108fd345 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fd347 mov ecx, dword ptr [0x1091eea4] */
  ECX = (r32((uint32_t)(0x1091eea4)));
  /* 108fd34d push ecx */
  push32((uint32_t)(ECX));
  /* 108fd34e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd351 push edx */
  push32((uint32_t)(EDX));
  /* 108fd352 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fd354 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 108fd357 push eax */
  push32((uint32_t)(EAX));
  /* 108fd358 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108fd35d mov ecx, dword ptr [0x109207c8] */
  ECX = (r32((uint32_t)(0x109207c8)));
  /* 108fd363 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd364 call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x108fd36au);
  /* 108fd36a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fd36d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd371 je 0x108fd379 */
  if (C.zf) goto L_108fd379;
  /* 108fd373 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd377 je 0x108fd389 */
  if (C.zf) goto L_108fd389;
L_108fd379:;
  /* 108fd379 call 0x108fc250 */
  push32(0x108fd37eu); f_108fc250();
  /* 108fd37e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 108fd384 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fd387 jmp 0x108fd38c */
  goto L_108fd38c;
L_108fd389:;
  /* 108fd389 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108fd38c:;
  /* 108fd38c mov esp, ebp */
  ESP = (EBP);
  /* 108fd38e pop ebp */
  EBP = (pop32());
  /* 108fd38f ret  */
  ESPCHK(0x108fd2f0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x108fd390 (32 bytes, 18 insns) */
void f_108fd390(void) {
  FTRACE(0x108fd390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd390 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd391 mov ebp, esp */
  EBP = (ESP);
  /* 108fd393 push ebx */
  push32((uint32_t)(EBX));
  /* 108fd394 push esi */
  push32((uint32_t)(ESI));
  /* 108fd395 push edi */
  push32((uint32_t)(EDI));
  /* 108fd396 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd397 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fd399 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fd39b push 0x108fd3a8 */
  push32((uint32_t)(0x108fd3a8u));
  /* 108fd3a0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 108fd3a3 call 0x10904adc */
  push32(0x108fd3a8u); f_10904adc();
  /* 108fd3a8 pop ebp */
  EBP = (pop32());
  /* 108fd3a9 pop edi */
  EDI = (pop32());
  /* 108fd3aa pop esi */
  ESI = (pop32());
  /* 108fd3ab pop ebx */
  EBX = (pop32());
  /* 108fd3ac mov esp, ebp */
  ESP = (EBP);
  /* 108fd3ae pop ebp */
  EBP = (pop32());
  /* 108fd3af ret  */
  ESPCHK(0x108fd390u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x108fd3d2 (104 bytes, 33 insns) */
void f_108fd3d2(void) {
  FTRACE(0x108fd3d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd3d2 push ebx */
  push32((uint32_t)(EBX));
  /* 108fd3d3 push esi */
  push32((uint32_t)(ESI));
  /* 108fd3d4 push edi */
  push32((uint32_t)(EDI));
  /* 108fd3d5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 108fd3d9 push eax */
  push32((uint32_t)(EAX));
  /* 108fd3da push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 108fd3dc push 0x108fd3b0 */
  push32((uint32_t)(0x108fd3b0u));
  /* 108fd3e1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 108fd3e8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_108fd3ef:;
  /* 108fd3ef mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 108fd3f3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 108fd3f6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 108fd3f9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd3fc je 0x108fd42c */
  if (C.zf) goto L_108fd42c;
  /* 108fd3fe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd402 je 0x108fd42c */
  if (C.zf) goto L_108fd42c;
  /* 108fd404 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 108fd407 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 108fd40a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 108fd40e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 108fd411 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd416 jne 0x108fd42a */
  if (!C.zf) goto L_108fd42a;
  /* 108fd418 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 108fd41d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 108fd421 call 0x108fd466 */
  push32(0x108fd426u); f_108fd466();
  /* 108fd426 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x108fd42au);
L_108fd42a:;
  /* 108fd42a jmp 0x108fd3ef */
  goto L_108fd3ef;
L_108fd42c:;
  /* 108fd42c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 108fd433 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd436 pop edi */
  EDI = (pop32());
  /* 108fd437 pop esi */
  ESI = (pop32());
  /* 108fd438 pop ebx */
  EBX = (pop32());
  /* 108fd439 ret  */
  ESPCHK(0x108fd3d2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d466 @ 0x108fd466 (24 bytes, 10 insns) */
void f_108fd466(void) {
  FTRACE(0x108fd466u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd466 push ebx */
  push32((uint32_t)(EBX));
  /* 108fd467 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd468 mov ebx, 0x1091f3b8 */
  EBX = (0x1091f3b8u);
  /* 108fd46d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd470 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 108fd473 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 108fd476 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 108fd479 pop ecx */
  ECX = (pop32());
  /* 108fd47a pop ebx */
  EBX = (pop32());
  /* 108fd47b ret 4 */
  ESPCHK(0x108fd466u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d545 @ 0x108fd545 (27 bytes, 11 insns) */
void f_108fd545(void) {
  FTRACE(0x108fd545u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd545 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd546 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 108fd54a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 108fd54c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 108fd54f push eax */
  push32((uint32_t)(EAX));
  /* 108fd550 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 108fd553 push eax */
  push32((uint32_t)(EAX));
  /* 108fd554 call 0x108fd3d2 */
  push32(0x108fd559u); f_108fd3d2();
  /* 108fd559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd55c pop ebp */
  EBP = (pop32());
  /* 108fd55d ret 4 */
  ESPCHK(0x108fd545u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d560 @ 0x108fd560 (482 bytes, 138 insns) */
void f_108fd560(void) {
  FTRACE(0x108fd560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd560 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd561 mov ebp, esp */
  EBP = (ESP);
  /* 108fd563 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fd566 push esi */
  push32((uint32_t)(ESI));
  /* 108fd567 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 108fd56e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 108fd570 call 0x108f7d80 */
  push32(0x108fd575u); f_108f7d80();
  /* 108fd575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd578 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108fd57f jmp 0x108fd58a */
  goto L_108fd58a;
L_108fd581:;
  /* 108fd581 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fd584 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd587 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108fd58a:;
  /* 108fd58a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd58e jge 0x108fd730 */
  if ((C.sf==C.of)) goto L_108fd730;
  /* 108fd594 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fd597 cmp dword ptr [ecx*4 + 0x10921fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10921fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd59f je 0x108fd696 */
  if (C.zf) goto L_108fd696;
  /* 108fd5a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fd5a8 mov eax, dword ptr [edx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10921fa0)));
  /* 108fd5af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fd5b2 jmp 0x108fd5bd */
  goto L_108fd5bd;
L_108fd5b4:;
  /* 108fd5b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd5b7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd5ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108fd5bd:;
  /* 108fd5bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fd5c0 mov eax, dword ptr [edx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10921fa0)));
  /* 108fd5c7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd5cc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd5cf jae 0x108fd686 */
  if (!C.cf) goto L_108fd686;
  /* 108fd5d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd5d8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108fd5dc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108fd5df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fd5e1 jne 0x108fd681 */
  if (!C.zf) goto L_108fd681;
  /* 108fd5e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd5ea cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd5ee jne 0x108fd629 */
  if (!C.zf) goto L_108fd629;
  /* 108fd5f0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108fd5f2 call 0x108f7d80 */
  push32(0x108fd5f7u); f_108f7d80();
  /* 108fd5f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd5fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd5fd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd601 jne 0x108fd61f */
  if (!C.zf) goto L_108fd61f;
  /* 108fd603 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd606 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd609 push edx */
  push32((uint32_t)(EDX));
  /* 108fd60a call dword ptr [0x1092333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092333c))), 0x108fd610u);
  /* 108fd610 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd613 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108fd616 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd61c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_108fd61f:;
  /* 108fd61f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108fd621 call 0x108f7e20 */
  push32(0x108fd626u); f_108f7e20();
  /* 108fd626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fd629:;
  /* 108fd629 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd62c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd62f push eax */
  push32((uint32_t)(EAX));
  /* 108fd630 call dword ptr [0x10923338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923338))), 0x108fd636u);
  /* 108fd636 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd639 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108fd63d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108fd640 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fd642 je 0x108fd656 */
  if (C.zf) goto L_108fd656;
  /* 108fd644 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd647 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd64a push eax */
  push32((uint32_t)(EAX));
  /* 108fd64b call dword ptr [0x10923334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923334))), 0x108fd651u);
  /* 108fd651 jmp 0x108fd5b4 */
  goto L_108fd5b4;
L_108fd656:;
  /* 108fd656 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd659 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 108fd65f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fd662 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fd665 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fd668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd66b sub eax, dword ptr [edx*4 + 0x10921fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10921fa0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fd672 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108fd673 mov esi, 0x24 */
  ESI = (0x24u);
  /* 108fd678 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108fd67a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd67c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108fd67f jmp 0x108fd686 */
  goto L_108fd686;
L_108fd681:;
  /* 108fd681 jmp 0x108fd5b4 */
  goto L_108fd5b4;
L_108fd686:;
  /* 108fd686 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd68a je 0x108fd691 */
  if (C.zf) goto L_108fd691;
  /* 108fd68c jmp 0x108fd730 */
  goto L_108fd730;
L_108fd691:;
  /* 108fd691 jmp 0x108fd72b */
  goto L_108fd72b;
L_108fd696:;
  /* 108fd696 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 108fd698 push 0x1091c0bc */
  push32((uint32_t)(0x1091c0bcu));
  /* 108fd69d push 2 */
  push32((uint32_t)(0x2u));
  /* 108fd69f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 108fd6a4 call 0x108f4380 */
  push32(0x108fd6a9u); f_108f4380();
  /* 108fd6a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd6ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fd6af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd6b3 je 0x108fd729 */
  if (C.zf) goto L_108fd729;
  /* 108fd6b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fd6b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd6bb mov dword ptr [eax*4 + 0x10921fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x10921fa0), (ECX));
  /* 108fd6c2 mov edx, dword ptr [0x109220dc] */
  EDX = (r32((uint32_t)(0x109220dc)));
  /* 108fd6c8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd6cb mov dword ptr [0x109220dc], edx */
  w32((uint32_t)(0x109220dc), (EDX));
  /* 108fd6d1 jmp 0x108fd6dc */
  goto L_108fd6dc;
L_108fd6d3:;
  /* 108fd6d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd6d6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd6d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108fd6dc:;
  /* 108fd6dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fd6df mov edx, dword ptr [ecx*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fd6e6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd6ec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd6ef jae 0x108fd714 */
  if (!C.cf) goto L_108fd714;
  /* 108fd6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd6f4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 108fd6f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd6fb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 108fd701 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd704 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 108fd708 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fd70b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 108fd712 jmp 0x108fd6d3 */
  goto L_108fd6d3;
L_108fd714:;
  /* 108fd714 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fd717 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fd71a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108fd71d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fd720 push edx */
  push32((uint32_t)(EDX));
  /* 108fd721 call 0x108fda70 */
  push32(0x108fd726u); f_108fda70();
  /* 108fd726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fd729:;
  /* 108fd729 jmp 0x108fd730 */
  goto L_108fd730;
L_108fd72b:;
  /* 108fd72b jmp 0x108fd581 */
  goto L_108fd581;
L_108fd730:;
  /* 108fd730 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 108fd732 call 0x108f7e20 */
  push32(0x108fd737u); f_108f7e20();
  /* 108fd737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd73a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fd73d pop esi */
  ESI = (pop32());
  /* 108fd73e mov esp, ebp */
  ESP = (EBP);
  /* 108fd740 pop ebp */
  EBP = (pop32());
  /* 108fd741 ret  */
  ESPCHK(0x108fd560u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x108fd750 (183 bytes, 57 insns) */
void f_108fd750(void) {
  FTRACE(0x108fd750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd750 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd751 mov ebp, esp */
  EBP = (ESP);
  /* 108fd753 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd757 cmp eax, dword ptr [0x109220dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109220dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd75d jae 0x108fd7ea */
  if (!C.cf) goto L_108fd7ea;
  /* 108fd763 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd766 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fd769 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd76c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fd76f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fd772 mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fd779 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd77d jne 0x108fd7ea */
  if (!C.zf) goto L_108fd7ea;
  /* 108fd77f cmp dword ptr [0x109205b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109205b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd786 jne 0x108fd7ca */
  if (!C.zf) goto L_108fd7ca;
  /* 108fd788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd78b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108fd78e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd792 je 0x108fd7a2 */
  if (C.zf) goto L_108fd7a2;
  /* 108fd794 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd798 je 0x108fd7b0 */
  if (C.zf) goto L_108fd7b0;
  /* 108fd79a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd79e je 0x108fd7be */
  if (C.zf) goto L_108fd7be;
  /* 108fd7a0 jmp 0x108fd7ca */
  goto L_108fd7ca;
L_108fd7a2:;
  /* 108fd7a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fd7a5 push edx */
  push32((uint32_t)(EDX));
  /* 108fd7a6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 108fd7a8 call dword ptr [0x109232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232f4))), 0x108fd7aeu);
  /* 108fd7ae jmp 0x108fd7ca */
  goto L_108fd7ca;
L_108fd7b0:;
  /* 108fd7b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fd7b3 push eax */
  push32((uint32_t)(EAX));
  /* 108fd7b4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 108fd7b6 call dword ptr [0x109232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232f4))), 0x108fd7bcu);
  /* 108fd7bc jmp 0x108fd7ca */
  goto L_108fd7ca;
L_108fd7be:;
  /* 108fd7be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fd7c1 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd7c2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 108fd7c4 call dword ptr [0x109232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232f4))), 0x108fd7cau);
L_108fd7ca:;
  /* 108fd7ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd7cd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 108fd7d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd7d3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 108fd7d6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fd7d9 mov ecx, dword ptr [edx*4 + 0x10921fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10921fa0)));
  /* 108fd7e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fd7e3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 108fd7e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fd7e8 jmp 0x108fd803 */
  goto L_108fd803;
L_108fd7ea:;
  /* 108fd7ea call 0x108fc250 */
  push32(0x108fd7efu); f_108fc250();
  /* 108fd7ef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108fd7f5 call 0x108fc260 */
  push32(0x108fd7fau); f_108fc260();
  /* 108fd7fa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108fd800 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108fd803:;
  /* 108fd803 mov esp, ebp */
  ESP = (EBP);
  /* 108fd805 pop ebp */
  EBP = (pop32());
  /* 108fd806 ret  */
  ESPCHK(0x108fd750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d810 @ 0x108fd810 (216 bytes, 63 insns) */
void f_108fd810(void) {
  FTRACE(0x108fd810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd810 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd811 mov ebp, esp */
  EBP = (ESP);
  /* 108fd813 push ecx */
  push32((uint32_t)(ECX));
  /* 108fd814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd817 cmp eax, dword ptr [0x109220dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109220dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd81d jae 0x108fd8cb */
  if (!C.cf) goto L_108fd8cb;
  /* 108fd823 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd826 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fd829 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd82c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fd82f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fd832 mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fd839 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108fd83e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108fd841 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fd843 je 0x108fd8cb */
  if (C.zf) goto L_108fd8cb;
  /* 108fd849 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd84c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 108fd84f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd852 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 108fd855 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fd858 mov ecx, dword ptr [edx*4 + 0x10921fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10921fa0)));
  /* 108fd85f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd863 je 0x108fd8cb */
  if (C.zf) goto L_108fd8cb;
  /* 108fd865 cmp dword ptr [0x109205b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109205b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd86c jne 0x108fd8aa */
  if (!C.zf) goto L_108fd8aa;
  /* 108fd86e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd871 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108fd874 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd878 je 0x108fd888 */
  if (C.zf) goto L_108fd888;
  /* 108fd87a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd87e je 0x108fd894 */
  if (C.zf) goto L_108fd894;
  /* 108fd880 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd884 je 0x108fd8a0 */
  if (C.zf) goto L_108fd8a0;
  /* 108fd886 jmp 0x108fd8aa */
  goto L_108fd8aa;
L_108fd888:;
  /* 108fd888 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fd88a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 108fd88c call dword ptr [0x109232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232f4))), 0x108fd892u);
  /* 108fd892 jmp 0x108fd8aa */
  goto L_108fd8aa;
L_108fd894:;
  /* 108fd894 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fd896 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 108fd898 call dword ptr [0x109232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232f4))), 0x108fd89eu);
  /* 108fd89e jmp 0x108fd8aa */
  goto L_108fd8aa;
L_108fd8a0:;
  /* 108fd8a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fd8a2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 108fd8a4 call dword ptr [0x109232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232f4))), 0x108fd8aau);
L_108fd8aa:;
  /* 108fd8aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd8ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fd8b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd8b3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108fd8b6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fd8b9 mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108fd8c0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 108fd8c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fd8c9 jmp 0x108fd8e4 */
  goto L_108fd8e4;
L_108fd8cb:;
  /* 108fd8cb call 0x108fc250 */
  push32(0x108fd8d0u); f_108fc250();
  /* 108fd8d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108fd8d6 call 0x108fc260 */
  push32(0x108fd8dbu); f_108fc260();
  /* 108fd8db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108fd8e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108fd8e4:;
  /* 108fd8e4 mov esp, ebp */
  ESP = (EBP);
  /* 108fd8e6 pop ebp */
  EBP = (pop32());
  /* 108fd8e7 ret  */
  ESPCHK(0x108fd810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x108fd8f0 (102 bytes, 30 insns) */
void f_108fd8f0(void) {
  FTRACE(0x108fd8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd8f1 mov ebp, esp */
  EBP = (ESP);
  /* 108fd8f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd8f6 cmp eax, dword ptr [0x109220dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109220dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd8fc jae 0x108fd93b */
  if (!C.cf) goto L_108fd93b;
  /* 108fd8fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd901 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fd904 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd907 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fd90a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fd90d mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fd914 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108fd919 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108fd91c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fd91e je 0x108fd93b */
  if (C.zf) goto L_108fd93b;
  /* 108fd920 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd923 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 108fd926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd929 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 108fd92c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fd92f mov ecx, dword ptr [edx*4 + 0x10921fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10921fa0)));
  /* 108fd936 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 108fd939 jmp 0x108fd954 */
  goto L_108fd954;
L_108fd93b:;
  /* 108fd93b call 0x108fc250 */
  push32(0x108fd940u); f_108fc250();
  /* 108fd940 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108fd946 call 0x108fc260 */
  push32(0x108fd94bu); f_108fc260();
  /* 108fd94b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108fd951 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108fd954:;
  /* 108fd954 pop ebp */
  EBP = (pop32());
  /* 108fd955 ret  */
  ESPCHK(0x108fd8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d960 @ 0x108fd960 (260 bytes, 83 insns) */
void f_108fd960(void) {
  FTRACE(0x108fd960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fd960 push ebp */
  push32((uint32_t)(EBP));
  /* 108fd961 mov ebp, esp */
  EBP = (ESP);
  /* 108fd963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fd966 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 108fd96a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fd96d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 108fd970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fd972 je 0x108fd97d */
  if (C.zf) goto L_108fd97d;
  /* 108fd974 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 108fd977 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 108fd97a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_108fd97d:;
  /* 108fd97d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fd980 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 108fd986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fd988 je 0x108fd992 */
  if (C.zf) goto L_108fd992;
  /* 108fd98a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 108fd98d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 108fd98f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_108fd992:;
  /* 108fd992 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fd995 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 108fd99b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fd99d je 0x108fd9a8 */
  if (C.zf) goto L_108fd9a8;
  /* 108fd99f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 108fd9a2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 108fd9a5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_108fd9a8:;
  /* 108fd9a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fd9ab push eax */
  push32((uint32_t)(EAX));
  /* 108fd9ac call dword ptr [0x10923398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923398))), 0x108fd9b2u);
  /* 108fd9b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fd9b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd9b9 jne 0x108fd9d2 */
  if (!C.zf) goto L_108fd9d2;
  /* 108fd9bb call dword ptr [0x109233ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233ac))), 0x108fd9c1u);
  /* 108fd9c1 push eax */
  push32((uint32_t)(EAX));
  /* 108fd9c2 call 0x108fc1b0 */
  push32(0x108fd9c7u); f_108fc1b0();
  /* 108fd9c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fd9ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fd9cd jmp 0x108fda60 */
  goto L_108fda60;
L_108fd9d2:;
  /* 108fd9d2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd9d6 jne 0x108fd9e3 */
  if (!C.zf) goto L_108fd9e3;
  /* 108fd9d8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 108fd9db or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 108fd9de mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 108fd9e1 jmp 0x108fd9f2 */
  goto L_108fd9f2;
L_108fd9e3:;
  /* 108fd9e3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd9e7 jne 0x108fd9f2 */
  if (!C.zf) goto L_108fd9f2;
  /* 108fd9e9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 108fd9ec or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 108fd9ef mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_108fd9f2:;
  /* 108fd9f2 call 0x108fd560 */
  push32(0x108fd9f7u); f_108fd560();
  /* 108fd9f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108fd9fa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fd9fe jne 0x108fda1b */
  if (!C.zf) goto L_108fda1b;
  /* 108fda00 call 0x108fc250 */
  push32(0x108fda05u); f_108fc250();
  /* 108fda05 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 108fda0b call 0x108fc260 */
  push32(0x108fda10u); f_108fc260();
  /* 108fda10 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108fda16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fda19 jmp 0x108fda60 */
  goto L_108fda60;
L_108fda1b:;
  /* 108fda1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fda1e push eax */
  push32((uint32_t)(EAX));
  /* 108fda1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fda22 push ecx */
  push32((uint32_t)(ECX));
  /* 108fda23 call 0x108fd750 */
  push32(0x108fda28u); f_108fd750();
  /* 108fda28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fda2b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 108fda2e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 108fda31 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 108fda34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fda37 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fda3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fda3d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108fda40 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fda43 mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108fda4a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 108fda4d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 108fda51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fda54 push ecx */
  push32((uint32_t)(ECX));
  /* 108fda55 call 0x108fdb00 */
  push32(0x108fda5au); f_108fdb00();
  /* 108fda5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fda5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108fda60:;
  /* 108fda60 mov esp, ebp */
  ESP = (EBP);
  /* 108fda62 pop ebp */
  EBP = (pop32());
  /* 108fda63 ret  */
  ESPCHK(0x108fd960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da70 @ 0x108fda70 (134 bytes, 44 insns) */
void f_108fda70(void) {
  FTRACE(0x108fda70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fda70 push ebp */
  push32((uint32_t)(EBP));
  /* 108fda71 mov ebp, esp */
  EBP = (ESP);
  /* 108fda73 push ecx */
  push32((uint32_t)(ECX));
  /* 108fda74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fda77 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fda7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fda7d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108fda80 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fda83 mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108fda8a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fda8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108fda8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fda92 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fda96 jne 0x108fdad1 */
  if (!C.zf) goto L_108fdad1;
  /* 108fda98 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108fda9a call 0x108f7d80 */
  push32(0x108fda9fu); f_108f7d80();
  /* 108fda9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdaa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fdaa5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdaa9 jne 0x108fdac7 */
  if (!C.zf) goto L_108fdac7;
  /* 108fdaab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fdaae add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdab1 push edx */
  push32((uint32_t)(EDX));
  /* 108fdab2 call dword ptr [0x1092333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092333c))), 0x108fdab8u);
  /* 108fdab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fdabb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108fdabe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fdac4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_108fdac7:;
  /* 108fdac7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108fdac9 call 0x108f7e20 */
  push32(0x108fdaceu); f_108f7e20();
  /* 108fdace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fdad1:;
  /* 108fdad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdad4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fdad7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdada and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108fdadd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fdae0 mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108fdae7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 108fdaeb push eax */
  push32((uint32_t)(EAX));
  /* 108fdaec call dword ptr [0x10923338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923338))), 0x108fdaf2u);
  /* 108fdaf2 mov esp, ebp */
  ESP = (EBP);
  /* 108fdaf4 pop ebp */
  EBP = (pop32());
  /* 108fdaf5 ret  */
  ESPCHK(0x108fda70u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x108fdb00 (38 bytes, 13 insns) */
void f_108fdb00(void) {
  FTRACE(0x108fdb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fdb00 push ebp */
  push32((uint32_t)(EBP));
  /* 108fdb01 mov ebp, esp */
  EBP = (ESP);
  /* 108fdb03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdb06 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108fdb09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdb0c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108fdb0f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fdb12 mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108fdb19 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 108fdb1d push eax */
  push32((uint32_t)(EAX));
  /* 108fdb1e call dword ptr [0x10923334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923334))), 0x108fdb24u);
  /* 108fdb24 pop ebp */
  EBP = (pop32());
  /* 108fdb25 ret  */
  ESPCHK(0x108fdb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db30 @ 0x108fdb30 (218 bytes, 63 insns) */
void f_108fdb30(void) {
  FTRACE(0x108fdb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fdb30 push ebp */
  push32((uint32_t)(EBP));
  /* 108fdb31 mov ebp, esp */
  EBP = (ESP);
  /* 108fdb33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fdb36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fdb3d push 2 */
  push32((uint32_t)(0x2u));
  /* 108fdb3f call 0x108f7d80 */
  push32(0x108fdb44u); f_108f7d80();
  /* 108fdb44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdb47 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 108fdb4e jmp 0x108fdb59 */
  goto L_108fdb59;
L_108fdb50:;
  /* 108fdb50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdb53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdb56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108fdb59:;
  /* 108fdb59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdb5c cmp ecx, dword ptr [0x10921ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10921ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdb62 jge 0x108fdbf9 */
  if ((C.sf==C.of)) goto L_108fdbf9;
  /* 108fdb68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdb6b mov eax, dword ptr [0x10920948] */
  EAX = (r32((uint32_t)(0x10920948)));
  /* 108fdb70 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdb74 je 0x108fdbf4 */
  if (C.zf) goto L_108fdbf4;
  /* 108fdb76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdb79 mov edx, dword ptr [0x10920948] */
  EDX = (r32((uint32_t)(0x10920948)));
  /* 108fdb7f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 108fdb82 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108fdb85 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 108fdb8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fdb8d je 0x108fdbb1 */
  if (C.zf) goto L_108fdbb1;
  /* 108fdb8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdb92 mov eax, dword ptr [0x10920948] */
  EAX = (r32((uint32_t)(0x10920948)));
  /* 108fdb97 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 108fdb9a push ecx */
  push32((uint32_t)(ECX));
  /* 108fdb9b call 0x108fe920 */
  push32(0x108fdba0u); f_108fe920();
  /* 108fdba0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdba3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdba6 je 0x108fdbb1 */
  if (C.zf) goto L_108fdbb1;
  /* 108fdba8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fdbab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdbae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108fdbb1:;
  /* 108fdbb1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdbb5 jl 0x108fdbf4 */
  if ((C.sf!=C.of)) goto L_108fdbf4;
  /* 108fdbb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdbba mov ecx, dword ptr [0x10920948] */
  ECX = (r32((uint32_t)(0x10920948)));
  /* 108fdbc0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108fdbc3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdbc6 push edx */
  push32((uint32_t)(EDX));
  /* 108fdbc7 call dword ptr [0x109233bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233bc))), 0x108fdbcdu);
  /* 108fdbcd push 2 */
  push32((uint32_t)(0x2u));
  /* 108fdbcf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdbd2 mov ecx, dword ptr [0x10920948] */
  ECX = (r32((uint32_t)(0x10920948)));
  /* 108fdbd8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108fdbdb push edx */
  push32((uint32_t)(EDX));
  /* 108fdbdc call 0x108f4e10 */
  push32(0x108fdbe1u); f_108f4e10();
  /* 108fdbe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdbe4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdbe7 mov ecx, dword ptr [0x10920948] */
  ECX = (r32((uint32_t)(0x10920948)));
  /* 108fdbed mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_108fdbf4:;
  /* 108fdbf4 jmp 0x108fdb50 */
  goto L_108fdb50;
L_108fdbf9:;
  /* 108fdbf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fdbfb call 0x108f7e20 */
  push32(0x108fdc00u); f_108f7e20();
  /* 108fdc00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdc03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fdc06 mov esp, ebp */
  ESP = (EBP);
  /* 108fdc08 pop ebp */
  EBP = (pop32());
  /* 108fdc09 ret  */
  ESPCHK(0x108fdb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc10 @ 0x108fdc10 (68 bytes, 26 insns) */
void f_108fdc10(void) {
  FTRACE(0x108fdc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fdc10 push ebp */
  push32((uint32_t)(EBP));
  /* 108fdc11 mov ebp, esp */
  EBP = (ESP);
  /* 108fdc13 push ecx */
  push32((uint32_t)(ECX));
  /* 108fdc14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdc18 jne 0x108fdc26 */
  if (!C.zf) goto L_108fdc26;
  /* 108fdc1a push 0 */
  push32((uint32_t)(0x0u));
  /* 108fdc1c call 0x108fdd80 */
  push32(0x108fdc21u); f_108fdd80();
  /* 108fdc21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdc24 jmp 0x108fdc50 */
  goto L_108fdc50;
L_108fdc26:;
  /* 108fdc26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdc29 push eax */
  push32((uint32_t)(EAX));
  /* 108fdc2a call 0x108fd190 */
  push32(0x108fdc2fu); f_108fd190();
  /* 108fdc2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdc32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdc35 push ecx */
  push32((uint32_t)(ECX));
  /* 108fdc36 call 0x108fdc60 */
  push32(0x108fdc3bu); f_108fdc60();
  /* 108fdc3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdc3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fdc41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdc44 push edx */
  push32((uint32_t)(EDX));
  /* 108fdc45 call 0x108fd200 */
  push32(0x108fdc4au); f_108fd200();
  /* 108fdc4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdc4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108fdc50:;
  /* 108fdc50 mov esp, ebp */
  ESP = (EBP);
  /* 108fdc52 pop ebp */
  EBP = (pop32());
  /* 108fdc53 ret  */
  ESPCHK(0x108fdc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc60 @ 0x108fdc60 (65 bytes, 26 insns) */
void f_108fdc60(void) {
  FTRACE(0x108fdc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fdc60 push ebp */
  push32((uint32_t)(EBP));
  /* 108fdc61 mov ebp, esp */
  EBP = (ESP);
  /* 108fdc63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdc66 push eax */
  push32((uint32_t)(EAX));
  /* 108fdc67 call 0x108fdcb0 */
  push32(0x108fdc6cu); f_108fdcb0();
  /* 108fdc6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdc6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fdc71 je 0x108fdc78 */
  if (C.zf) goto L_108fdc78;
  /* 108fdc73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fdc76 jmp 0x108fdc9f */
  goto L_108fdc9f;
L_108fdc78:;
  /* 108fdc78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdc7b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fdc7e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 108fdc84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fdc86 je 0x108fdc9d */
  if (C.zf) goto L_108fdc9d;
  /* 108fdc88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdc8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108fdc8e push ecx */
  push32((uint32_t)(ECX));
  /* 108fdc8f call 0x108fea70 */
  push32(0x108fdc94u); f_108fea70();
  /* 108fdc94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdc97 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108fdc99 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fdc9b jmp 0x108fdc9f */
  goto L_108fdc9f;
L_108fdc9d:;
  /* 108fdc9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108fdc9f:;
  /* 108fdc9f pop ebp */
  EBP = (pop32());
  /* 108fdca0 ret  */
  ESPCHK(0x108fdc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcb0 @ 0x108fdcb0 (183 bytes, 62 insns) */
void f_108fdcb0(void) {
  FTRACE(0x108fdcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fdcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fdcb1 mov ebp, esp */
  EBP = (ESP);
  /* 108fdcb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fdcb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fdcbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdcc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108fdcc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdcc6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fdcc9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108fdccc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdccf jne 0x108fdd4b */
  if (!C.zf) goto L_108fdd4b;
  /* 108fdcd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdcd4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108fdcd7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 108fdcdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fdcdf je 0x108fdd4b */
  if (C.zf) goto L_108fdd4b;
  /* 108fdce1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdce4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdce7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 108fdce9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fdcec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fdcef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdcf3 jle 0x108fdd4b */
  if ((C.zf||C.sf!=C.of)) goto L_108fdd4b;
  /* 108fdcf5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fdcf8 push edx */
  push32((uint32_t)(EDX));
  /* 108fdcf9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdcfc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108fdcff push ecx */
  push32((uint32_t)(ECX));
  /* 108fdd00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdd03 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108fdd06 push eax */
  push32((uint32_t)(EAX));
  /* 108fdd07 call 0x108fcc20 */
  push32(0x108fdd0cu); f_108fcc20();
  /* 108fdd0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdd0f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdd12 jne 0x108fdd35 */
  if (!C.zf) goto L_108fdd35;
  /* 108fdd14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdd17 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fdd1a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 108fdd20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fdd22 je 0x108fdd33 */
  if (C.zf) goto L_108fdd33;
  /* 108fdd24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdd27 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108fdd2a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 108fdd2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdd30 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_108fdd33:;
  /* 108fdd33 jmp 0x108fdd4b */
  goto L_108fdd4b;
L_108fdd35:;
  /* 108fdd35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdd38 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108fdd3b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 108fdd3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdd41 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 108fdd44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108fdd4b:;
  /* 108fdd4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdd4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdd51 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108fdd54 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108fdd56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fdd59 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 108fdd60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fdd63 mov esp, ebp */
  ESP = (EBP);
  /* 108fdd65 pop ebp */
  EBP = (pop32());
  /* 108fdd66 ret  */
  ESPCHK(0x108fdcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd70 @ 0x108fdd70 (15 bytes, 7 insns) */
void f_108fdd70(void) {
  FTRACE(0x108fdd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fdd70 push ebp */
  push32((uint32_t)(EBP));
  /* 108fdd71 mov ebp, esp */
  EBP = (ESP);
  /* 108fdd73 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fdd75 call 0x108fdd80 */
  push32(0x108fdd7au); f_108fdd80();
  /* 108fdd7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdd7d pop ebp */
  EBP = (pop32());
  /* 108fdd7e ret  */
  ESPCHK(0x108fdd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd80 @ 0x108fdd80 (319 bytes, 94 insns) */
void f_108fdd80(void) {
  FTRACE(0x108fdd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fdd80 push ebp */
  push32((uint32_t)(EBP));
  /* 108fdd81 mov ebp, esp */
  EBP = (ESP);
  /* 108fdd83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fdd86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fdd8d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108fdd94 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fdd96 call 0x108f7d80 */
  push32(0x108fdd9bu); f_108f7d80();
  /* 108fdd9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdd9e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108fdda5 jmp 0x108fddb0 */
  goto L_108fddb0;
L_108fdda7:;
  /* 108fdda7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fddaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fddad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108fddb0:;
  /* 108fddb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fddb3 cmp ecx, dword ptr [0x10921ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10921ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fddb9 jge 0x108fdea3 */
  if ((C.sf==C.of)) goto L_108fdea3;
  /* 108fddbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fddc2 mov eax, dword ptr [0x10920948] */
  EAX = (r32((uint32_t)(0x10920948)));
  /* 108fddc7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fddcb je 0x108fde9e */
  if (C.zf) goto L_108fde9e;
  /* 108fddd1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fddd4 mov edx, dword ptr [0x10920948] */
  EDX = (r32((uint32_t)(0x10920948)));
  /* 108fddda mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 108fdddd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108fdde0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 108fdde6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fdde8 je 0x108fde9e */
  if (C.zf) goto L_108fde9e;
  /* 108fddee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fddf1 mov eax, dword ptr [0x10920948] */
  EAX = (r32((uint32_t)(0x10920948)));
  /* 108fddf6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 108fddf9 push ecx */
  push32((uint32_t)(ECX));
  /* 108fddfa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fddfd push edx */
  push32((uint32_t)(EDX));
  /* 108fddfe call 0x108fd1d0 */
  push32(0x108fde03u); f_108fd1d0();
  /* 108fde03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fde06 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fde09 mov ecx, dword ptr [0x10920948] */
  ECX = (r32((uint32_t)(0x10920948)));
  /* 108fde0f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108fde12 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108fde15 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 108fde1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fde1c je 0x108fde85 */
  if (C.zf) goto L_108fde85;
  /* 108fde1e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fde22 jne 0x108fde49 */
  if (!C.zf) goto L_108fde49;
  /* 108fde24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fde27 mov edx, dword ptr [0x10920948] */
  EDX = (r32((uint32_t)(0x10920948)));
  /* 108fde2d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 108fde30 push eax */
  push32((uint32_t)(EAX));
  /* 108fde31 call 0x108fdc60 */
  push32(0x108fde36u); f_108fdc60();
  /* 108fde36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fde39 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fde3c je 0x108fde47 */
  if (C.zf) goto L_108fde47;
  /* 108fde3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fde41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fde44 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108fde47:;
  /* 108fde47 jmp 0x108fde85 */
  goto L_108fde85;
L_108fde49:;
  /* 108fde49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fde4d jne 0x108fde85 */
  if (!C.zf) goto L_108fde85;
  /* 108fde4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fde52 mov eax, dword ptr [0x10920948] */
  EAX = (r32((uint32_t)(0x10920948)));
  /* 108fde57 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 108fde5a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fde5d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 108fde60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fde62 je 0x108fde85 */
  if (C.zf) goto L_108fde85;
  /* 108fde64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fde67 mov ecx, dword ptr [0x10920948] */
  ECX = (r32((uint32_t)(0x10920948)));
  /* 108fde6d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108fde70 push edx */
  push32((uint32_t)(EDX));
  /* 108fde71 call 0x108fdc60 */
  push32(0x108fde76u); f_108fdc60();
  /* 108fde76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fde79 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fde7c jne 0x108fde85 */
  if (!C.zf) goto L_108fde85;
  /* 108fde7e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_108fde85:;
  /* 108fde85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fde88 mov ecx, dword ptr [0x10920948] */
  ECX = (r32((uint32_t)(0x10920948)));
  /* 108fde8e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108fde91 push edx */
  push32((uint32_t)(EDX));
  /* 108fde92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fde95 push eax */
  push32((uint32_t)(EAX));
  /* 108fde96 call 0x108fd240 */
  push32(0x108fde9bu); f_108fd240();
  /* 108fde9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fde9e:;
  /* 108fde9e jmp 0x108fdda7 */
  goto L_108fdda7;
L_108fdea3:;
  /* 108fdea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fdea5 call 0x108f7e20 */
  push32(0x108fdeaau); f_108f7e20();
  /* 108fdeaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdead cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdeb1 jne 0x108fdeb8 */
  if (!C.zf) goto L_108fdeb8;
  /* 108fdeb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fdeb6 jmp 0x108fdebb */
  goto L_108fdebb;
L_108fdeb8:;
  /* 108fdeb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108fdebb:;
  /* 108fdebb mov esp, ebp */
  ESP = (EBP);
  /* 108fdebd pop ebp */
  EBP = (pop32());
  /* 108fdebe ret  */
  ESPCHK(0x108fdd80u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x108fdec0 (15 bytes, 7 insns) */
void f_108fdec0(void) {
  FTRACE(0x108fdec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fdec0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fdec1 mov ebp, esp */
  EBP = (ESP);
  /* 108fdec3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fdec5 call 0x108f32f0 */
  push32(0x108fdecau); f_108f32f0();
  /* 108fdeca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdecd pop ebp */
  EBP = (pop32());
  /* 108fdece ret  */
  ESPCHK(0x108fdec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ded0 @ 0x108fded0 (1007 bytes, 269 insns) */
void f_108fded0(void) {
  FTRACE(0x108fded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fded0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fded1 mov ebp, esp */
  EBP = (ESP);
  /* 108fded3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fded9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdedd jl 0x108fdee5 */
  if ((C.sf!=C.of)) goto L_108fdee5;
  /* 108fdedf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdee3 jle 0x108fdeec */
  if ((C.zf||C.sf!=C.of)) goto L_108fdeec;
L_108fdee5:;
  /* 108fdee5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fdee7 jmp 0x108fe2bb */
  goto L_108fe2bb;
L_108fdeec:;
  /* 108fdeec push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108fdeee call 0x108f7d80 */
  push32(0x108fdef3u); f_108f7d80();
  /* 108fdef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdef6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108fdefd mov eax, dword ptr [0x10920934] */
  EAX = (r32((uint32_t)(0x10920934)));
  /* 108fdf02 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdf05 mov dword ptr [0x10920934], eax */
  w32((uint32_t)(0x10920934), (EAX));
L_108fdf0a:;
  /* 108fdf0a cmp dword ptr [0x10920944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdf11 je 0x108fdf1d */
  if (C.zf) goto L_108fdf1d;
  /* 108fdf13 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fdf15 call dword ptr [0x109232f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232f0))), 0x108fdf1bu);
  /* 108fdf1b jmp 0x108fdf0a */
  goto L_108fdf0a;
L_108fdf1d:;
  /* 108fdf1d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdf21 je 0x108fdf61 */
  if (C.zf) goto L_108fdf61;
  /* 108fdf23 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdf27 je 0x108fdf41 */
  if (C.zf) goto L_108fdf41;
  /* 108fdf29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fdf2c push ecx */
  push32((uint32_t)(ECX));
  /* 108fdf2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdf30 push edx */
  push32((uint32_t)(EDX));
  /* 108fdf31 call 0x108fe2c0 */
  push32(0x108fdf36u); f_108fe2c0();
  /* 108fdf36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdf39 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 108fdf3f jmp 0x108fdf53 */
  goto L_108fdf53;
L_108fdf41:;
  /* 108fdf41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fdf44 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fdf47 mov ecx, dword ptr [eax + 0x1091f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1091f4dc)));
  /* 108fdf4d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_108fdf53:;
  /* 108fdf53 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 108fdf59 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108fdf5c jmp 0x108fe29b */
  goto L_108fe29b;
L_108fdf61:;
  /* 108fdf61 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 108fdf68 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108fdf6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdf73 je 0x108fe293 */
  if (C.zf) goto L_108fe293;
  /* 108fdf79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fdf7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108fdf7f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdf82 jne 0x108fe1a4 */
  if (!C.zf) goto L_108fe1a4;
  /* 108fdf88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fdf8b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108fdf8f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdf92 jne 0x108fe1a4 */
  if (!C.zf) goto L_108fe1a4;
  /* 108fdf98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fdf9b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 108fdf9f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdfa2 jne 0x108fe1a4 */
  if (!C.zf) goto L_108fe1a4;
  /* 108fdfa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fdfab mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_108fdfb1:;
  /* 108fdfb1 push 0x1091c10c */
  push32((uint32_t)(0x1091c10cu));
  /* 108fdfb6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108fdfbc push ecx */
  push32((uint32_t)(ECX));
  /* 108fdfbd call 0x10900120 */
  push32(0x108fdfc2u); f_10900120();
  /* 108fdfc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fdfc5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 108fdfcb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdfd2 je 0x108fdffd */
  if (C.zf) goto L_108fdffd;
  /* 108fdfd4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108fdfda sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fdfe0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 108fdfe6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdfed je 0x108fdffd */
  if (C.zf) goto L_108fdffd;
  /* 108fdfef mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108fdff5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108fdff8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fdffb jne 0x108fe023 */
  if (!C.zf) goto L_108fe023;
L_108fdffd:;
  /* 108fdffd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe001 je 0x108fe01c */
  if (C.zf) goto L_108fe01c;
  /* 108fe003 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108fe005 call 0x108f7e20 */
  push32(0x108fe00au); f_108f7e20();
  /* 108fe00a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe00d mov edx, dword ptr [0x10920934] */
  EDX = (r32((uint32_t)(0x10920934)));
  /* 108fe013 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fe016 mov dword ptr [0x10920934], edx */
  w32((uint32_t)(0x10920934), (EDX));
L_108fe01c:;
  /* 108fe01c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe01e jmp 0x108fe2bb */
  goto L_108fe2bb;
L_108fe023:;
  /* 108fe023 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 108fe02a jmp 0x108fe035 */
  goto L_108fe035;
L_108fe02c:;
  /* 108fe02c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fe02f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe032 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_108fe035:;
  /* 108fe035 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe039 jg 0x108fe083 */
  if ((!C.zf&&C.sf==C.of)) goto L_108fe083;
  /* 108fe03b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 108fe041 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe042 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108fe048 push edx */
  push32((uint32_t)(EDX));
  /* 108fe049 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fe04c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe04f mov ecx, dword ptr [eax + 0x1091f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1091f4d8)));
  /* 108fe055 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe056 call 0x109000e0 */
  push32(0x108fe05bu); f_109000e0();
  /* 108fe05b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe05e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe060 jne 0x108fe081 */
  if (!C.zf) goto L_108fe081;
  /* 108fe062 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fe065 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe068 mov eax, dword ptr [edx + 0x1091f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1091f4d8)));
  /* 108fe06e push eax */
  push32((uint32_t)(EAX));
  /* 108fe06f call 0x108f71b0 */
  push32(0x108fe074u); f_108f71b0();
  /* 108fe074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe077 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe07d jne 0x108fe081 */
  if (!C.zf) goto L_108fe081;
  /* 108fe07f jmp 0x108fe083 */
  goto L_108fe083;
L_108fe081:;
  /* 108fe081 jmp 0x108fe02c */
  goto L_108fe02c;
L_108fe083:;
  /* 108fe083 push 0x1091c108 */
  push32((uint32_t)(0x1091c108u));
  /* 108fe088 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108fe08e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe091 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 108fe097 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108fe09d push edx */
  push32((uint32_t)(EDX));
  /* 108fe09e call 0x109000a0 */
  push32(0x108fe0a3u); f_109000a0();
  /* 108fe0a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe0a6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 108fe0ac cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe0b3 jne 0x108fe0e9 */
  if (!C.zf) goto L_108fe0e9;
  /* 108fe0b5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108fe0bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108fe0be cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe0c1 je 0x108fe0e9 */
  if (C.zf) goto L_108fe0e9;
  /* 108fe0c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe0c7 je 0x108fe0e2 */
  if (C.zf) goto L_108fe0e2;
  /* 108fe0c9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108fe0cb call 0x108f7e20 */
  push32(0x108fe0d0u); f_108f7e20();
  /* 108fe0d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe0d3 mov edx, dword ptr [0x10920934] */
  EDX = (r32((uint32_t)(0x10920934)));
  /* 108fe0d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fe0dc mov dword ptr [0x10920934], edx */
  w32((uint32_t)(0x10920934), (EDX));
L_108fe0e2:;
  /* 108fe0e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe0e4 jmp 0x108fe2bb */
  goto L_108fe2bb;
L_108fe0e9:;
  /* 108fe0e9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe0ed jg 0x108fe13a */
  if ((!C.zf&&C.sf==C.of)) goto L_108fe13a;
  /* 108fe0ef mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 108fe0f5 push eax */
  push32((uint32_t)(EAX));
  /* 108fe0f6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108fe0fc push ecx */
  push32((uint32_t)(ECX));
  /* 108fe0fd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 108fe103 push edx */
  push32((uint32_t)(EDX));
  /* 108fe104 call 0x108f7ba0 */
  push32(0x108fe109u); f_108f7ba0();
  /* 108fe109 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe10c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 108fe112 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 108fe11a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 108fe120 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe121 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fe124 push edx */
  push32((uint32_t)(EDX));
  /* 108fe125 call 0x108fe2c0 */
  push32(0x108fe12au); f_108fe2c0();
  /* 108fe12a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe12d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe12f je 0x108fe13a */
  if (C.zf) goto L_108fe13a;
  /* 108fe131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fe134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe137 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108fe13a:;
  /* 108fe13a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108fe140 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe146 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 108fe14c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108fe152 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108fe155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe157 je 0x108fe168 */
  if (C.zf) goto L_108fe168;
  /* 108fe159 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108fe15f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe162 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_108fe168:;
  /* 108fe168 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108fe16e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108fe171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe173 jne 0x108fdfb1 */
  if (!C.zf) goto L_108fdfb1;
  /* 108fe179 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe17d je 0x108fe18c */
  if (C.zf) goto L_108fe18c;
  /* 108fe17f call 0x108fe460 */
  push32(0x108fe184u); f_108fe460();
  /* 108fe184 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 108fe18a jmp 0x108fe196 */
  goto L_108fe196;
L_108fe18c:;
  /* 108fe18c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_108fe196:;
  /* 108fe196 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 108fe19c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108fe19f jmp 0x108fe291 */
  goto L_108fe291;
L_108fe1a4:;
  /* 108fe1a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe1a7 push edx */
  push32((uint32_t)(EDX));
  /* 108fe1a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fe1aa push 0 */
  push32((uint32_t)(0x0u));
  /* 108fe1ac lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 108fe1b2 push eax */
  push32((uint32_t)(EAX));
  /* 108fe1b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe1b6 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe1b7 call 0x108fe560 */
  push32(0x108fe1bcu); f_108fe560();
  /* 108fe1bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe1bf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108fe1c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe1c6 je 0x108fe291 */
  if (C.zf) goto L_108fe291;
  /* 108fe1cc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108fe1d3 jmp 0x108fe1de */
  goto L_108fe1de;
L_108fe1d5:;
  /* 108fe1d5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fe1d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe1db mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108fe1de:;
  /* 108fe1de cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe1e2 jg 0x108fe240 */
  if ((!C.zf&&C.sf==C.of)) goto L_108fe240;
  /* 108fe1e4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe1e8 je 0x108fe23e */
  if (C.zf) goto L_108fe23e;
  /* 108fe1ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fe1ed imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe1f0 mov ecx, dword ptr [eax + 0x1091f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1091f4dc)));
  /* 108fe1f6 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe1f7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 108fe1fd push edx */
  push32((uint32_t)(EDX));
  /* 108fe1fe call 0x10900010 */
  push32(0x108fe203u); f_10900010();
  /* 108fe203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe208 je 0x108fe235 */
  if (C.zf) goto L_108fe235;
  /* 108fe20a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 108fe210 push eax */
  push32((uint32_t)(EAX));
  /* 108fe211 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108fe214 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe215 call 0x108fe2c0 */
  push32(0x108fe21au); f_108fe2c0();
  /* 108fe21a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe21d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe21f je 0x108fe22c */
  if (C.zf) goto L_108fe22c;
  /* 108fe221 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fe224 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe227 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108fe22a jmp 0x108fe233 */
  goto L_108fe233;
L_108fe22c:;
  /* 108fe22c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_108fe233:;
  /* 108fe233 jmp 0x108fe23e */
  goto L_108fe23e;
L_108fe235:;
  /* 108fe235 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fe238 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe23b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108fe23e:;
  /* 108fe23e jmp 0x108fe1d5 */
  goto L_108fe1d5;
L_108fe240:;
  /* 108fe240 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe244 je 0x108fe26b */
  if (C.zf) goto L_108fe26b;
  /* 108fe246 call 0x108fe460 */
  push32(0x108fe24bu); f_108fe460();
  /* 108fe24b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108fe24e push 2 */
  push32((uint32_t)(0x2u));
  /* 108fe250 mov ecx, dword ptr [0x1091f4dc] */
  ECX = (r32((uint32_t)(0x1091f4dc)));
  /* 108fe256 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe257 call 0x108f4e10 */
  push32(0x108fe25cu); f_108f4e10();
  /* 108fe25c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe25f mov dword ptr [0x1091f4dc], 0 */
  w32((uint32_t)(0x1091f4dc), (0x0u));
  /* 108fe269 jmp 0x108fe291 */
  goto L_108fe291;
L_108fe26b:;
  /* 108fe26b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe26f je 0x108fe27e */
  if (C.zf) goto L_108fe27e;
  /* 108fe271 call 0x108fe460 */
  push32(0x108fe276u); f_108fe460();
  /* 108fe276 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 108fe27c jmp 0x108fe288 */
  goto L_108fe288;
L_108fe27e:;
  /* 108fe27e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_108fe288:;
  /* 108fe288 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 108fe28e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108fe291:;
  /* 108fe291 jmp 0x108fe29b */
  goto L_108fe29b;
L_108fe293:;
  /* 108fe293 call 0x108fe460 */
  push32(0x108fe298u); f_108fe460();
  /* 108fe298 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108fe29b:;
  /* 108fe29b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe29f je 0x108fe2b8 */
  if (C.zf) goto L_108fe2b8;
  /* 108fe2a1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108fe2a3 call 0x108f7e20 */
  push32(0x108fe2a8u); f_108f7e20();
  /* 108fe2a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe2ab mov eax, dword ptr [0x10920934] */
  EAX = (r32((uint32_t)(0x10920934)));
  /* 108fe2b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fe2b3 mov dword ptr [0x10920934], eax */
  w32((uint32_t)(0x10920934), (EAX));
L_108fe2b8:;
  /* 108fe2b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108fe2bb:;
  /* 108fe2bb mov esp, ebp */
  ESP = (EBP);
  /* 108fe2bd pop ebp */
  EBP = (pop32());
  /* 108fe2be ret  */
  ESPCHK(0x108fded0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2c0 @ 0x108fe2c0 (403 bytes, 117 insns) */
void f_108fe2c0(void) {
  FTRACE(0x108fe2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fe2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fe2c1 mov ebp, esp */
  EBP = (ESP);
  /* 108fe2c3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fe2c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe2cc push eax */
  push32((uint32_t)(EAX));
  /* 108fe2cd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 108fe2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe2d4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 108fe2da push edx */
  push32((uint32_t)(EDX));
  /* 108fe2db lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 108fe2e1 push eax */
  push32((uint32_t)(EAX));
  /* 108fe2e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe2e5 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe2e6 call 0x108fe560 */
  push32(0x108fe2ebu); f_108fe560();
  /* 108fe2eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe2ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe2f0 jne 0x108fe2f9 */
  if (!C.zf) goto L_108fe2f9;
  /* 108fe2f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe2f4 jmp 0x108fe44f */
  goto L_108fe44f;
L_108fe2f9:;
  /* 108fe2f9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 108fe2fe push 0x1091c110 */
  push32((uint32_t)(0x1091c110u));
  /* 108fe303 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fe305 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 108fe30b push edx */
  push32((uint32_t)(EDX));
  /* 108fe30c call 0x108f71b0 */
  push32(0x108fe311u); f_108f71b0();
  /* 108fe311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe314 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe317 push eax */
  push32((uint32_t)(EAX));
  /* 108fe318 call 0x108f4380 */
  push32(0x108fe31du); f_108f4380();
  /* 108fe31d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe320 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108fe323 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe327 jne 0x108fe330 */
  if (!C.zf) goto L_108fe330;
  /* 108fe329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe32b jmp 0x108fe44f */
  goto L_108fe44f;
L_108fe330:;
  /* 108fe330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe333 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe336 mov ecx, dword ptr [eax + 0x1091f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1091f4dc)));
  /* 108fe33c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fe33f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe342 mov eax, dword ptr [edx*4 + 0x109207b0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109207b0)));
  /* 108fe349 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fe34c push 6 */
  push32((uint32_t)(0x6u));
  /* 108fe34e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe351 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe354 add ecx, 0x10920800 */
  { uint32_t _a=(ECX),_b=(0x10920800u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe35a push ecx */
  push32((uint32_t)(ECX));
  /* 108fe35b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 108fe35e push edx */
  push32((uint32_t)(EDX));
  /* 108fe35f call 0x108fac60 */
  push32(0x108fe364u); f_108fac60();
  /* 108fe364 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe367 mov eax, dword ptr [0x109207c8] */
  EAX = (r32((uint32_t)(0x109207c8)));
  /* 108fe36c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108fe36f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 108fe375 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe376 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fe379 push edx */
  push32((uint32_t)(EDX));
  /* 108fe37a call 0x108f7330 */
  push32(0x108fe37fu); f_108f7330();
  /* 108fe37f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe382 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe385 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe388 mov dword ptr [ecx + 0x1091f4dc], eax */
  w32((uint32_t)(ECX + 0x1091f4dc), (EAX));
  /* 108fe38e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 108fe394 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108fe39a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe39d mov dword ptr [eax*4 + 0x109207b0], edx */
  w32((uint32_t)(EAX*4 + 0x109207b0), (EDX));
  /* 108fe3a4 push 6 */
  push32((uint32_t)(0x6u));
  /* 108fe3a6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 108fe3ac push ecx */
  push32((uint32_t)(ECX));
  /* 108fe3ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe3b0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe3b3 add edx, 0x10920800 */
  { uint32_t _a=(EDX),_b=(0x10920800u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe3b9 push edx */
  push32((uint32_t)(EDX));
  /* 108fe3ba call 0x108fac60 */
  push32(0x108fe3bfu); f_108fac60();
  /* 108fe3bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe3c2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe3c6 jne 0x108fe3d3 */
  if (!C.zf) goto L_108fe3d3;
  /* 108fe3c8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108fe3ce mov dword ptr [0x109207c8], eax */
  w32((uint32_t)(0x109207c8), (EAX));
L_108fe3d3:;
  /* 108fe3d3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe3d7 jne 0x108fe3e5 */
  if (!C.zf) goto L_108fe3e5;
  /* 108fe3d9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108fe3df mov dword ptr [0x109207cc], ecx */
  w32((uint32_t)(0x109207cc), (ECX));
L_108fe3e5:;
  /* 108fe3e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe3e8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe3eb call dword ptr [edx + 0x1091f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1091f4e0))), 0x108fe3f1u);
  /* 108fe3f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe3f3 je 0x108fe42c */
  if (C.zf) goto L_108fe42c;
  /* 108fe3f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe3f8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe3fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fe3fe mov dword ptr [eax + 0x1091f4dc], ecx */
  w32((uint32_t)(EAX + 0x1091f4dc), (ECX));
  /* 108fe404 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fe406 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fe409 push edx */
  push32((uint32_t)(EDX));
  /* 108fe40a call 0x108f4e10 */
  push32(0x108fe40fu); f_108f4e10();
  /* 108fe40f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe412 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe415 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fe418 mov dword ptr [eax*4 + 0x109207b0], ecx */
  w32((uint32_t)(EAX*4 + 0x109207b0), (ECX));
  /* 108fe41f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108fe422 mov dword ptr [0x109207c8], edx */
  w32((uint32_t)(0x109207c8), (EDX));
  /* 108fe428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe42a jmp 0x108fe44f */
  goto L_108fe44f;
L_108fe42c:;
  /* 108fe42c cmp dword ptr [ebp - 0xc], 0x1091f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1091f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe433 je 0x108fe443 */
  if (C.zf) goto L_108fe443;
  /* 108fe435 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fe437 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fe43a push eax */
  push32((uint32_t)(EAX));
  /* 108fe43b call 0x108f4e10 */
  push32(0x108fe440u); f_108f4e10();
  /* 108fe440 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fe443:;
  /* 108fe443 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe446 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe449 mov eax, dword ptr [ecx + 0x1091f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1091f4dc)));
L_108fe44f:;
  /* 108fe44f mov esp, ebp */
  ESP = (EBP);
  /* 108fe451 pop ebp */
  EBP = (pop32());
  /* 108fe452 ret  */
  ESPCHK(0x108fe2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e460 @ 0x108fe460 (256 bytes, 72 insns) */
void f_108fe460(void) {
  FTRACE(0x108fe460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fe460 push ebp */
  push32((uint32_t)(EBP));
  /* 108fe461 mov ebp, esp */
  EBP = (ESP);
  /* 108fe463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fe466 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 108fe46d cmp dword ptr [0x1091f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1091f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe474 jne 0x108fe494 */
  if (!C.zf) goto L_108fe494;
  /* 108fe476 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 108fe47b push 0x1091c110 */
  push32((uint32_t)(0x1091c110u));
  /* 108fe480 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fe482 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 108fe487 call 0x108f4380 */
  push32(0x108fe48cu); f_108f4380();
  /* 108fe48c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe48f mov dword ptr [0x1091f4dc], eax */
  w32((uint32_t)(0x1091f4dc), (EAX));
L_108fe494:;
  /* 108fe494 mov eax, dword ptr [0x1091f4dc] */
  EAX = (r32((uint32_t)(0x1091f4dc)));
  /* 108fe499 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108fe49c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108fe4a3 jmp 0x108fe4ae */
  goto L_108fe4ae;
L_108fe4a5:;
  /* 108fe4a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fe4a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe4ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108fe4ae:;
  /* 108fe4ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fe4b1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe4b4 mov eax, dword ptr [edx + 0x1091f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1091f4dc)));
  /* 108fe4ba push eax */
  push32((uint32_t)(EAX));
  /* 108fe4bb push 0x1091c11c */
  push32((uint32_t)(0x1091c11cu));
  /* 108fe4c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fe4c3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe4c6 mov edx, dword ptr [ecx + 0x1091f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1091f4d8)));
  /* 108fe4cc push edx */
  push32((uint32_t)(EDX));
  /* 108fe4cd push 3 */
  push32((uint32_t)(0x3u));
  /* 108fe4cf mov eax, dword ptr [0x1091f4dc] */
  EAX = (r32((uint32_t)(0x1091f4dc)));
  /* 108fe4d4 push eax */
  push32((uint32_t)(EAX));
  /* 108fe4d5 call 0x108fe700 */
  push32(0x108fe4dau); f_108fe700();
  /* 108fe4da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe4dd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe4e1 jge 0x108fe529 */
  if ((C.sf==C.of)) goto L_108fe529;
  /* 108fe4e3 push 0x1091c108 */
  push32((uint32_t)(0x1091c108u));
  /* 108fe4e8 mov ecx, dword ptr [0x1091f4dc] */
  ECX = (r32((uint32_t)(0x1091f4dc)));
  /* 108fe4ee push ecx */
  push32((uint32_t)(ECX));
  /* 108fe4ef call 0x108f7340 */
  push32(0x108fe4f4u); f_108f7340();
  /* 108fe4f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe4f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fe4fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe4fd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe500 mov eax, dword ptr [edx + 0x1091f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1091f4dc)));
  /* 108fe506 push eax */
  push32((uint32_t)(EAX));
  /* 108fe507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fe50a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fe50d mov edx, dword ptr [ecx + 0x1091f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1091f4dc)));
  /* 108fe513 push edx */
  push32((uint32_t)(EDX));
  /* 108fe514 call 0x10900010 */
  push32(0x108fe519u); f_10900010();
  /* 108fe519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe51c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe51e je 0x108fe527 */
  if (C.zf) goto L_108fe527;
  /* 108fe520 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108fe527:;
  /* 108fe527 jmp 0x108fe557 */
  goto L_108fe557;
L_108fe529:;
  /* 108fe529 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe52d jne 0x108fe536 */
  if (!C.zf) goto L_108fe536;
  /* 108fe52f mov eax, dword ptr [0x1091f4dc] */
  EAX = (r32((uint32_t)(0x1091f4dc)));
  /* 108fe534 jmp 0x108fe55c */
  goto L_108fe55c;
L_108fe536:;
  /* 108fe536 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fe538 mov eax, dword ptr [0x1091f4dc] */
  EAX = (r32((uint32_t)(0x1091f4dc)));
  /* 108fe53d push eax */
  push32((uint32_t)(EAX));
  /* 108fe53e call 0x108f4e10 */
  push32(0x108fe543u); f_108f4e10();
  /* 108fe543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe546 mov dword ptr [0x1091f4dc], 0 */
  w32((uint32_t)(0x1091f4dc), (0x0u));
  /* 108fe550 mov eax, dword ptr [0x1091f4f4] */
  EAX = (r32((uint32_t)(0x1091f4f4)));
  /* 108fe555 jmp 0x108fe55c */
  goto L_108fe55c;
L_108fe557:;
  /* 108fe557 jmp 0x108fe4a5 */
  goto L_108fe4a5;
L_108fe55c:;
  /* 108fe55c mov esp, ebp */
  ESP = (EBP);
  /* 108fe55e pop ebp */
  EBP = (pop32());
  /* 108fe55f ret  */
  ESPCHK(0x108fe460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e560 @ 0x108fe560 (388 bytes, 115 insns) */
void f_108fe560(void) {
  FTRACE(0x108fe560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fe560 push ebp */
  push32((uint32_t)(EBP));
  /* 108fe561 mov ebp, esp */
  EBP = (ESP);
  /* 108fe563 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fe569 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe56d jne 0x108fe576 */
  if (!C.zf) goto L_108fe576;
  /* 108fe56f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe571 jmp 0x108fe6e0 */
  goto L_108fe6e0;
L_108fe576:;
  /* 108fe576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe579 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108fe57c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe57f jne 0x108fe5d0 */
  if (!C.zf) goto L_108fe5d0;
  /* 108fe581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe584 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108fe588 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe58a jne 0x108fe5d0 */
  if (!C.zf) goto L_108fe5d0;
  /* 108fe58c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe58f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 108fe592 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe595 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 108fe599 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe59d je 0x108fe5b9 */
  if (C.zf) goto L_108fe5b9;
  /* 108fe59f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fe5a2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 108fe5a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fe5aa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 108fe5b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fe5b3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_108fe5b9:;
  /* 108fe5b9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe5bd je 0x108fe5c8 */
  if (C.zf) goto L_108fe5c8;
  /* 108fe5bf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fe5c2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_108fe5c8:;
  /* 108fe5c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe5cb jmp 0x108fe6e0 */
  goto L_108fe6e0;
L_108fe5d0:;
  /* 108fe5d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe5d4 push 0x1091f450 */
  push32((uint32_t)(0x1091f450u));
  /* 108fe5d9 call 0x10900010 */
  push32(0x108fe5deu); f_10900010();
  /* 108fe5de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe5e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe5e3 je 0x108fe698 */
  if (C.zf) goto L_108fe698;
  /* 108fe5e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe5ec push edx */
  push32((uint32_t)(EDX));
  /* 108fe5ed push 0x1091f3cc */
  push32((uint32_t)(0x1091f3ccu));
  /* 108fe5f2 call 0x10900010 */
  push32(0x108fe5f7u); f_10900010();
  /* 108fe5f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe5fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe5fc je 0x108fe698 */
  if (C.zf) goto L_108fe698;
  /* 108fe602 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe605 push eax */
  push32((uint32_t)(EAX));
  /* 108fe606 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 108fe60c push ecx */
  push32((uint32_t)(ECX));
  /* 108fe60d call 0x108fe750 */
  push32(0x108fe612u); f_108fe750();
  /* 108fe612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe617 je 0x108fe620 */
  if (C.zf) goto L_108fe620;
  /* 108fe619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe61b jmp 0x108fe6e0 */
  goto L_108fe6e0;
L_108fe620:;
  /* 108fe620 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 108fe626 push edx */
  push32((uint32_t)(EDX));
  /* 108fe627 push 0x109207d8 */
  push32((uint32_t)(0x109207d8u));
  /* 108fe62c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 108fe632 push eax */
  push32((uint32_t)(EAX));
  /* 108fe633 call 0x10900160 */
  push32(0x108fe638u); f_10900160();
  /* 108fe638 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe63b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe63d jne 0x108fe646 */
  if (!C.zf) goto L_108fe646;
  /* 108fe63f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe641 jmp 0x108fe6e0 */
  goto L_108fe6e0;
L_108fe646:;
  /* 108fe646 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fe648 mov cx, word ptr [0x109207dc] */
  CX = (r16((uint32_t)(0x109207dc)));
  /* 108fe64f mov dword ptr [0x109207e0], ecx */
  w32((uint32_t)(0x109207e0), (ECX));
  /* 108fe655 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 108fe65b push edx */
  push32((uint32_t)(EDX));
  /* 108fe65c push 0x1091f450 */
  push32((uint32_t)(0x1091f450u));
  /* 108fe661 call 0x108fe8b0 */
  push32(0x108fe666u); f_108fe8b0();
  /* 108fe666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe669 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe66c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108fe66f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fe671 je 0x108fe686 */
  if (C.zf) goto L_108fe686;
  /* 108fe673 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe676 push edx */
  push32((uint32_t)(EDX));
  /* 108fe677 push 0x1091f3cc */
  push32((uint32_t)(0x1091f3ccu));
  /* 108fe67c call 0x108f7330 */
  push32(0x108fe681u); f_108f7330();
  /* 108fe681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe684 jmp 0x108fe698 */
  goto L_108fe698;
L_108fe686:;
  /* 108fe686 push 0x1091f450 */
  push32((uint32_t)(0x1091f450u));
  /* 108fe68b push 0x1091f3cc */
  push32((uint32_t)(0x1091f3ccu));
  /* 108fe690 call 0x108f7330 */
  push32(0x108fe695u); f_108f7330();
  /* 108fe695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fe698:;
  /* 108fe698 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe69c je 0x108fe6b1 */
  if (C.zf) goto L_108fe6b1;
  /* 108fe69e push 6 */
  push32((uint32_t)(0x6u));
  /* 108fe6a0 push 0x109207d8 */
  push32((uint32_t)(0x109207d8u));
  /* 108fe6a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108fe6a8 push eax */
  push32((uint32_t)(EAX));
  /* 108fe6a9 call 0x108fac60 */
  push32(0x108fe6aeu); f_108fac60();
  /* 108fe6ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fe6b1:;
  /* 108fe6b1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe6b5 je 0x108fe6ca */
  if (C.zf) goto L_108fe6ca;
  /* 108fe6b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 108fe6b9 push 0x109207e0 */
  push32((uint32_t)(0x109207e0u));
  /* 108fe6be mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108fe6c1 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe6c2 call 0x108fac60 */
  push32(0x108fe6c7u); f_108fac60();
  /* 108fe6c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fe6ca:;
  /* 108fe6ca push 0x1091f450 */
  push32((uint32_t)(0x1091f450u));
  /* 108fe6cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe6d2 push edx */
  push32((uint32_t)(EDX));
  /* 108fe6d3 call 0x108f7330 */
  push32(0x108fe6d8u); f_108f7330();
  /* 108fe6d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe6db mov eax, 0x1091f450 */
  EAX = (0x1091f450u);
L_108fe6e0:;
  /* 108fe6e0 mov esp, ebp */
  ESP = (EBP);
  /* 108fe6e2 pop ebp */
  EBP = (pop32());
  /* 108fe6e3 ret  */
  ESPCHK(0x108fe560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6f0 @ 0x108fe6f0 (7 bytes, 5 insns) */
void f_108fe6f0(void) {
  FTRACE(0x108fe6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fe6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fe6f1 mov ebp, esp */
  EBP = (ESP);
  /* 108fe6f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe6f5 pop ebp */
  EBP = (pop32());
  /* 108fe6f6 ret  */
  ESPCHK(0x108fe6f0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x108fe700 (79 bytes, 28 insns) */
void f_108fe700(void) {
  FTRACE(0x108fe700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fe700 push ebp */
  push32((uint32_t)(EBP));
  /* 108fe701 mov ebp, esp */
  EBP = (ESP);
  /* 108fe703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fe706 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 108fe709 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fe70c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108fe713 jmp 0x108fe71e */
  goto L_108fe71e;
L_108fe715:;
  /* 108fe715 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fe718 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe71b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108fe71e:;
  /* 108fe71e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fe721 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe724 jge 0x108fe744 */
  if ((C.sf==C.of)) goto L_108fe744;
  /* 108fe726 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fe729 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe72c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fe72f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fe732 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 108fe735 push edx */
  push32((uint32_t)(EDX));
  /* 108fe736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe739 push eax */
  push32((uint32_t)(EAX));
  /* 108fe73a call 0x108f7340 */
  push32(0x108fe73fu); f_108f7340();
  /* 108fe73f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe742 jmp 0x108fe715 */
  goto L_108fe715;
L_108fe744:;
  /* 108fe744 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fe74b mov esp, ebp */
  ESP = (EBP);
  /* 108fe74d pop ebp */
  EBP = (pop32());
  /* 108fe74e ret  */
  ESPCHK(0x108fe700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e750 @ 0x108fe750 (349 bytes, 122 insns) */
void f_108fe750(void) {
  FTRACE(0x108fe750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fe750 push ebp */
  push32((uint32_t)(EBP));
  /* 108fe751 mov ebp, esp */
  EBP = (ESP);
  /* 108fe753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fe756 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 108fe75b push 0 */
  push32((uint32_t)(0x0u));
  /* 108fe75d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe760 push eax */
  push32((uint32_t)(EAX));
  /* 108fe761 call 0x108f80f0 */
  push32(0x108fe766u); f_108f80f0();
  /* 108fe766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe769 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe76c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108fe76f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fe771 jne 0x108fe77a */
  if (!C.zf) goto L_108fe77a;
  /* 108fe773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe775 jmp 0x108fe8a9 */
  goto L_108fe8a9;
L_108fe77a:;
  /* 108fe77a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe77d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108fe780 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe783 jne 0x108fe7b0 */
  if (!C.zf) goto L_108fe7b0;
  /* 108fe785 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe788 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108fe78c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe78e je 0x108fe7b0 */
  if (C.zf) goto L_108fe7b0;
  /* 108fe790 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe793 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe796 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe797 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe79a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe7a0 push edx */
  push32((uint32_t)(EDX));
  /* 108fe7a1 call 0x108f7330 */
  push32(0x108fe7a6u); f_108f7330();
  /* 108fe7a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe7a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe7ab jmp 0x108fe8a9 */
  goto L_108fe8a9;
L_108fe7b0:;
  /* 108fe7b0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108fe7b7 jmp 0x108fe7c2 */
  goto L_108fe7c2;
L_108fe7b9:;
  /* 108fe7b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fe7bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe7bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108fe7c2:;
  /* 108fe7c2 push 0x1091c120 */
  push32((uint32_t)(0x1091c120u));
  /* 108fe7c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe7ca push ecx */
  push32((uint32_t)(ECX));
  /* 108fe7cb call 0x109000a0 */
  push32(0x108fe7d0u); f_109000a0();
  /* 108fe7d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe7d3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108fe7d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe7da jne 0x108fe7e4 */
  if (!C.zf) goto L_108fe7e4;
  /* 108fe7dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fe7df jmp 0x108fe8a9 */
  goto L_108fe8a9;
L_108fe7e4:;
  /* 108fe7e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe7e7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe7ea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108fe7ec mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 108fe7ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe7f3 jne 0x108fe81a */
  if (!C.zf) goto L_108fe81a;
  /* 108fe7f5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe7f9 jge 0x108fe81a */
  if ((C.sf==C.of)) goto L_108fe81a;
  /* 108fe7fb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108fe7ff cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe802 je 0x108fe81a */
  if (C.zf) goto L_108fe81a;
  /* 108fe804 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fe807 push edx */
  push32((uint32_t)(EDX));
  /* 108fe808 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe80b push eax */
  push32((uint32_t)(EAX));
  /* 108fe80c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe80f push ecx */
  push32((uint32_t)(ECX));
  /* 108fe810 call 0x108f7ba0 */
  push32(0x108fe815u); f_108f7ba0();
  /* 108fe815 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe818 jmp 0x108fe880 */
  goto L_108fe880;
L_108fe81a:;
  /* 108fe81a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe81e jne 0x108fe848 */
  if (!C.zf) goto L_108fe848;
  /* 108fe820 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe824 jge 0x108fe848 */
  if ((C.sf==C.of)) goto L_108fe848;
  /* 108fe826 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108fe82a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe82d je 0x108fe848 */
  if (C.zf) goto L_108fe848;
  /* 108fe82f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fe832 push eax */
  push32((uint32_t)(EAX));
  /* 108fe833 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe836 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe837 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe83a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe83d push edx */
  push32((uint32_t)(EDX));
  /* 108fe83e call 0x108f7ba0 */
  push32(0x108fe843u); f_108f7ba0();
  /* 108fe843 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe846 jmp 0x108fe880 */
  goto L_108fe880;
L_108fe848:;
  /* 108fe848 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe84c jne 0x108fe87b */
  if (!C.zf) goto L_108fe87b;
  /* 108fe84e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108fe852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe854 je 0x108fe85f */
  if (C.zf) goto L_108fe85f;
  /* 108fe856 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108fe85a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe85d jne 0x108fe87b */
  if (!C.zf) goto L_108fe87b;
L_108fe85f:;
  /* 108fe85f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fe862 push edx */
  push32((uint32_t)(EDX));
  /* 108fe863 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe866 push eax */
  push32((uint32_t)(EAX));
  /* 108fe867 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe86a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe870 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe871 call 0x108f7ba0 */
  push32(0x108fe876u); f_108f7ba0();
  /* 108fe876 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe879 jmp 0x108fe880 */
  goto L_108fe880;
L_108fe87b:;
  /* 108fe87b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fe87e jmp 0x108fe8a9 */
  goto L_108fe8a9;
L_108fe880:;
  /* 108fe880 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108fe884 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe887 jne 0x108fe88b */
  if (!C.zf) goto L_108fe88b;
  /* 108fe889 jmp 0x108fe8a7 */
  goto L_108fe8a7;
L_108fe88b:;
  /* 108fe88b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108fe88f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe891 jne 0x108fe895 */
  if (!C.zf) goto L_108fe895;
  /* 108fe893 jmp 0x108fe8a7 */
  goto L_108fe8a7;
L_108fe895:;
  /* 108fe895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fe898 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe89b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 108fe89f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 108fe8a2 jmp 0x108fe7b9 */
  goto L_108fe7b9;
L_108fe8a7:;
  /* 108fe8a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108fe8a9:;
  /* 108fe8a9 mov esp, ebp */
  ESP = (EBP);
  /* 108fe8ab pop ebp */
  EBP = (pop32());
  /* 108fe8ac ret  */
  ESPCHK(0x108fe750u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x108fe8b0 (101 bytes, 36 insns) */
void f_108fe8b0(void) {
  FTRACE(0x108fe8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fe8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fe8b1 mov ebp, esp */
  EBP = (ESP);
  /* 108fe8b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe8b6 push eax */
  push32((uint32_t)(EAX));
  /* 108fe8b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe8ba push ecx */
  push32((uint32_t)(ECX));
  /* 108fe8bb call 0x108f7330 */
  push32(0x108fe8c0u); f_108f7330();
  /* 108fe8c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe8c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe8c6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 108fe8ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe8cc je 0x108fe8e8 */
  if (C.zf) goto L_108fe8e8;
  /* 108fe8ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe8d1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe8d4 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe8d5 push 0x1091c128 */
  push32((uint32_t)(0x1091c128u));
  /* 108fe8da push 2 */
  push32((uint32_t)(0x2u));
  /* 108fe8dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe8df push edx */
  push32((uint32_t)(EDX));
  /* 108fe8e0 call 0x108fe700 */
  push32(0x108fe8e5u); f_108fe700();
  /* 108fe8e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fe8e8:;
  /* 108fe8e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe8eb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 108fe8f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fe8f4 je 0x108fe913 */
  if (C.zf) goto L_108fe913;
  /* 108fe8f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108fe8f9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe8ff push edx */
  push32((uint32_t)(EDX));
  /* 108fe900 push 0x1091c124 */
  push32((uint32_t)(0x1091c124u));
  /* 108fe905 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fe907 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe90a push eax */
  push32((uint32_t)(EAX));
  /* 108fe90b call 0x108fe700 */
  push32(0x108fe910u); f_108fe700();
  /* 108fe910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fe913:;
  /* 108fe913 pop ebp */
  EBP = (pop32());
  /* 108fe914 ret  */
  ESPCHK(0x108fe8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e920 @ 0x108fe920 (130 bytes, 50 insns) */
void f_108fe920(void) {
  FTRACE(0x108fe920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fe920 push ebp */
  push32((uint32_t)(EBP));
  /* 108fe921 mov ebp, esp */
  EBP = (ESP);
  /* 108fe923 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe924 push ebx */
  push32((uint32_t)(EBX));
  /* 108fe925 push esi */
  push32((uint32_t)(ESI));
  /* 108fe926 push edi */
  push32((uint32_t)(EDI));
  /* 108fe927 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108fe92e:;
  /* 108fe92e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe932 jne 0x108fe952 */
  if (!C.zf) goto L_108fe952;
  /* 108fe934 push 0x1091c138 */
  push32((uint32_t)(0x1091c138u));
  /* 108fe939 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fe93b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 108fe93d push 0x1091c12c */
  push32((uint32_t)(0x1091c12cu));
  /* 108fe942 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fe944 call 0x108f3440 */
  push32(0x108fe949u); f_108f3440();
  /* 108fe949 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe94c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe94f jne 0x108fe952 */
  if (!C.zf) goto L_108fe952;
  /* 108fe951 int3  */
  x86_unimpl("int3 @ 0x108fe951");
L_108fe952:;
  /* 108fe952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fe954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe956 jne 0x108fe92e */
  if (!C.zf) goto L_108fe92e;
  /* 108fe958 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe95b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108fe95e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 108fe961 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108fe963 je 0x108fe971 */
  if (C.zf) goto L_108fe971;
  /* 108fe965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe968 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 108fe96f jmp 0x108fe998 */
  goto L_108fe998;
L_108fe971:;
  /* 108fe971 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe974 push ecx */
  push32((uint32_t)(ECX));
  /* 108fe975 call 0x108fd190 */
  push32(0x108fe97au); f_108fd190();
  /* 108fe97a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe97d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe980 push edx */
  push32((uint32_t)(EDX));
  /* 108fe981 call 0x108fe9b0 */
  push32(0x108fe986u); f_108fe9b0();
  /* 108fe986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fe98c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe98f push eax */
  push32((uint32_t)(EAX));
  /* 108fe990 call 0x108fd200 */
  push32(0x108fe995u); f_108fd200();
  /* 108fe995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fe998:;
  /* 108fe998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fe99b pop edi */
  EDI = (pop32());
  /* 108fe99c pop esi */
  ESI = (pop32());
  /* 108fe99d pop ebx */
  EBX = (pop32());
  /* 108fe99e mov esp, ebp */
  ESP = (EBP);
  /* 108fe9a0 pop ebp */
  EBP = (pop32());
  /* 108fe9a1 ret  */
  ESPCHK(0x108fe920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9b0 @ 0x108fe9b0 (190 bytes, 67 insns) */
void f_108fe9b0(void) {
  FTRACE(0x108fe9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fe9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108fe9b1 mov ebp, esp */
  EBP = (ESP);
  /* 108fe9b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fe9b6 push ebx */
  push32((uint32_t)(EBX));
  /* 108fe9b7 push esi */
  push32((uint32_t)(ESI));
  /* 108fe9b8 push edi */
  push32((uint32_t)(EDI));
  /* 108fe9b9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108fe9c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fe9c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108fe9c6:;
  /* 108fe9c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe9ca jne 0x108fe9ea */
  if (!C.zf) goto L_108fe9ea;
  /* 108fe9cc push 0x1091bfdc */
  push32((uint32_t)(0x1091bfdcu));
  /* 108fe9d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108fe9d3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 108fe9d5 push 0x1091c12c */
  push32((uint32_t)(0x1091c12cu));
  /* 108fe9da push 2 */
  push32((uint32_t)(0x2u));
  /* 108fe9dc call 0x108f3440 */
  push32(0x108fe9e1u); f_108f3440();
  /* 108fe9e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fe9e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fe9e7 jne 0x108fe9ea */
  if (!C.zf) goto L_108fe9ea;
  /* 108fe9e9 int3  */
  x86_unimpl("int3 @ 0x108fe9e9");
L_108fe9ea:;
  /* 108fe9ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fe9ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fe9ee jne 0x108fe9c6 */
  if (!C.zf) goto L_108fe9c6;
  /* 108fe9f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fe9f3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108fe9f6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 108fe9fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fe9fd je 0x108fea5a */
  if (C.zf) goto L_108fea5a;
  /* 108fe9ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fea02 push ecx */
  push32((uint32_t)(ECX));
  /* 108fea03 call 0x108fdcb0 */
  push32(0x108fea08u); f_108fdcb0();
  /* 108fea08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fea0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fea0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fea11 push edx */
  push32((uint32_t)(EDX));
  /* 108fea12 call 0x10901030 */
  push32(0x108fea17u); f_10901030();
  /* 108fea17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fea1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fea1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108fea20 push ecx */
  push32((uint32_t)(ECX));
  /* 108fea21 call 0x10900f00 */
  push32(0x108fea26u); f_10900f00();
  /* 108fea26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fea29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108fea2b jge 0x108fea36 */
  if ((C.sf==C.of)) goto L_108fea36;
  /* 108fea2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108fea34 jmp 0x108fea5a */
  goto L_108fea5a;
L_108fea36:;
  /* 108fea36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fea39 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fea3d je 0x108fea5a */
  if (C.zf) goto L_108fea5a;
  /* 108fea3f push 2 */
  push32((uint32_t)(0x2u));
  /* 108fea41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fea44 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 108fea47 push ecx */
  push32((uint32_t)(ECX));
  /* 108fea48 call 0x108f4e10 */
  push32(0x108fea4du); f_108f4e10();
  /* 108fea4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fea50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fea53 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_108fea5a:;
  /* 108fea5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108fea5d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 108fea64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fea67 pop edi */
  EDI = (pop32());
  /* 108fea68 pop esi */
  ESI = (pop32());
  /* 108fea69 pop ebx */
  EBX = (pop32());
  /* 108fea6a mov esp, ebp */
  ESP = (EBP);
  /* 108fea6c pop ebp */
  EBP = (pop32());
  /* 108fea6d ret  */
  ESPCHK(0x108fe9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea70 @ 0x108fea70 (210 bytes, 63 insns) */
void f_108fea70(void) {
  FTRACE(0x108fea70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fea70 push ebp */
  push32((uint32_t)(EBP));
  /* 108fea71 mov ebp, esp */
  EBP = (ESP);
  /* 108fea73 push ecx */
  push32((uint32_t)(ECX));
  /* 108fea74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fea77 cmp eax, dword ptr [0x109220dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109220dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fea7d jae 0x108feaa1 */
  if (!C.cf) goto L_108feaa1;
  /* 108fea7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fea82 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108fea85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fea88 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108fea8b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108fea8e mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108fea95 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108fea9a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108fea9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108fea9f jne 0x108feab4 */
  if (!C.zf) goto L_108feab4;
L_108feaa1:;
  /* 108feaa1 call 0x108fc250 */
  push32(0x108feaa6u); f_108fc250();
  /* 108feaa6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108feaac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108feaaf jmp 0x108feb3e */
  goto L_108feb3e;
L_108feab4:;
  /* 108feab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108feab7 push edx */
  push32((uint32_t)(EDX));
  /* 108feab8 call 0x108fda70 */
  push32(0x108feabdu); f_108fda70();
  /* 108feabd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108feac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108feac3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108feac6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108feac9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108feacc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108feacf mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108fead6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 108feadb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 108feade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108feae0 je 0x108feb1d */
  if (C.zf) goto L_108feb1d;
  /* 108feae2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108feae5 push ecx */
  push32((uint32_t)(ECX));
  /* 108feae6 call 0x108fd8f0 */
  push32(0x108feaebu); f_108fd8f0();
  /* 108feaeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108feaee push eax */
  push32((uint32_t)(EAX));
  /* 108feaef call dword ptr [0x109232ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232ec))), 0x108feaf5u);
  /* 108feaf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108feaf7 jne 0x108feb04 */
  if (!C.zf) goto L_108feb04;
  /* 108feaf9 call dword ptr [0x109233ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233ac))), 0x108feaffu);
  /* 108feaff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108feb02 jmp 0x108feb0b */
  goto L_108feb0b;
L_108feb04:;
  /* 108feb04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108feb0b:;
  /* 108feb0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108feb0f jne 0x108feb13 */
  if (!C.zf) goto L_108feb13;
  /* 108feb11 jmp 0x108feb2f */
  goto L_108feb2f;
L_108feb13:;
  /* 108feb13 call 0x108fc260 */
  push32(0x108feb18u); f_108fc260();
  /* 108feb18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108feb1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108feb1d:;
  /* 108feb1d call 0x108fc250 */
  push32(0x108feb22u); f_108fc250();
  /* 108feb22 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108feb28 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108feb2f:;
  /* 108feb2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108feb32 push eax */
  push32((uint32_t)(EAX));
  /* 108feb33 call 0x108fdb00 */
  push32(0x108feb38u); f_108fdb00();
  /* 108feb38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108feb3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108feb3e:;
  /* 108feb3e mov esp, ebp */
  ESP = (EBP);
  /* 108feb40 pop ebp */
  EBP = (pop32());
  /* 108feb41 ret  */
  ESPCHK(0x108fea70u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x108feb50 (219 bytes, 64 insns) */
void f_108feb50(void) {
  FTRACE(0x108feb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108feb50 push ebp */
  push32((uint32_t)(EBP));
  /* 108feb51 mov ebp, esp */
  EBP = (ESP);
  /* 108feb53 push ecx */
  push32((uint32_t)(ECX));
  /* 108feb54 cmp dword ptr [0x109207c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108feb5b je 0x108febf1 */
  if (C.zf) goto L_108febf1;
  /* 108feb61 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 108feb63 push 0x1091c148 */
  push32((uint32_t)(0x1091c148u));
  /* 108feb68 push 2 */
  push32((uint32_t)(0x2u));
  /* 108feb6a push 0xac */
  push32((uint32_t)(0xacu));
  /* 108feb6f push 1 */
  push32((uint32_t)(0x1u));
  /* 108feb71 call 0x108f4790 */
  push32(0x108feb76u); f_108f4790();
  /* 108feb76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108feb79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108feb7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108feb80 jne 0x108feb8c */
  if (!C.zf) goto L_108feb8c;
  /* 108feb82 mov eax, 1 */
  EAX = (0x1u);
  /* 108feb87 jmp 0x108fec27 */
  goto L_108fec27;
L_108feb8c:;
  /* 108feb8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108feb8f push eax */
  push32((uint32_t)(EAX));
  /* 108feb90 call 0x108fec30 */
  push32(0x108feb95u); f_108fec30();
  /* 108feb95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108feb98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108feb9a je 0x108febbd */
  if (C.zf) goto L_108febbd;
  /* 108feb9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108feb9f push ecx */
  push32((uint32_t)(ECX));
  /* 108feba0 call 0x108ff1c0 */
  push32(0x108feba5u); f_108ff1c0();
  /* 108feba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108feba8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108febaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108febad push edx */
  push32((uint32_t)(EDX));
  /* 108febae call 0x108f4e10 */
  push32(0x108febb3u); f_108f4e10();
  /* 108febb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108febb6 mov eax, 1 */
  EAX = (0x1u);
  /* 108febbb jmp 0x108fec27 */
  goto L_108fec27;
L_108febbd:;
  /* 108febbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108febc0 mov dword ptr [0x1091fc98], eax */
  w32((uint32_t)(0x1091fc98), (EAX));
  /* 108febc5 mov ecx, dword ptr [0x109207e4] */
  ECX = (r32((uint32_t)(0x109207e4)));
  /* 108febcb push ecx */
  push32((uint32_t)(ECX));
  /* 108febcc call 0x108ff1c0 */
  push32(0x108febd1u); f_108ff1c0();
  /* 108febd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108febd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108febd6 mov edx, dword ptr [0x109207e4] */
  EDX = (r32((uint32_t)(0x109207e4)));
  /* 108febdc push edx */
  push32((uint32_t)(EDX));
  /* 108febdd call 0x108f4e10 */
  push32(0x108febe2u); f_108f4e10();
  /* 108febe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108febe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108febe8 mov dword ptr [0x109207e4], eax */
  w32((uint32_t)(0x109207e4), (EAX));
  /* 108febed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108febef jmp 0x108fec27 */
  goto L_108fec27;
L_108febf1:;
  /* 108febf1 mov dword ptr [0x1091fc98], 0x1091fca0 */
  w32((uint32_t)(0x1091fc98), (0x1091fca0u));
  /* 108febfb mov ecx, dword ptr [0x109207e4] */
  ECX = (r32((uint32_t)(0x109207e4)));
  /* 108fec01 push ecx */
  push32((uint32_t)(ECX));
  /* 108fec02 call 0x108ff1c0 */
  push32(0x108fec07u); f_108ff1c0();
  /* 108fec07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fec0a push 2 */
  push32((uint32_t)(0x2u));
  /* 108fec0c mov edx, dword ptr [0x109207e4] */
  EDX = (r32((uint32_t)(0x109207e4)));
  /* 108fec12 push edx */
  push32((uint32_t)(EDX));
  /* 108fec13 call 0x108f4e10 */
  push32(0x108fec18u); f_108f4e10();
  /* 108fec18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fec1b mov dword ptr [0x109207e4], 0 */
  w32((uint32_t)(0x109207e4), (0x0u));
  /* 108fec25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108fec27:;
  /* 108fec27 mov esp, ebp */
  ESP = (EBP);
  /* 108fec29 pop ebp */
  EBP = (pop32());
  /* 108fec2a ret  */
  ESPCHK(0x108feb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec30 @ 0x108fec30 (1423 bytes, 533 insns) */
void f_108fec30(void) {
  FTRACE(0x108fec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108fec30 push ebp */
  push32((uint32_t)(EBP));
  /* 108fec31 mov ebp, esp */
  EBP = (ESP);
  /* 108fec33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108fec36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108fec3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fec3f mov ax, word ptr [0x1092081e] */
  AX = (r16((uint32_t)(0x1092081e)));
  /* 108fec45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108fec48 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108fec4a mov cx, word ptr [0x10920820] */
  CX = (r16((uint32_t)(0x10920820)));
  /* 108fec51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108fec54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fec58 jne 0x108fec62 */
  if (!C.zf) goto L_108fec62;
  /* 108fec5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108fec5d jmp 0x108ff1bb */
  goto L_108ff1bb;
L_108fec62:;
  /* 108fec62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fec65 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fec68 push edx */
  push32((uint32_t)(EDX));
  /* 108fec69 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 108fec6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fec6e push eax */
  push32((uint32_t)(EAX));
  /* 108fec6f push 1 */
  push32((uint32_t)(0x1u));
  /* 108fec71 call 0x10902540 */
  push32(0x108fec76u); f_10902540();
  /* 108fec76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fec79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fec7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fec7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fec81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fec84 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fec87 push edx */
  push32((uint32_t)(EDX));
  /* 108fec88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 108fec8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fec8d push eax */
  push32((uint32_t)(EAX));
  /* 108fec8e push 1 */
  push32((uint32_t)(0x1u));
  /* 108fec90 call 0x10902540 */
  push32(0x108fec95u); f_10902540();
  /* 108fec95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fec98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fec9b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fec9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108feca0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108feca3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108feca6 push edx */
  push32((uint32_t)(EDX));
  /* 108feca7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 108feca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fecac push eax */
  push32((uint32_t)(EAX));
  /* 108fecad push 1 */
  push32((uint32_t)(0x1u));
  /* 108fecaf call 0x10902540 */
  push32(0x108fecb4u); f_10902540();
  /* 108fecb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fecb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fecba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fecbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fecbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fecc2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fecc5 push edx */
  push32((uint32_t)(EDX));
  /* 108fecc6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 108fecc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108feccb push eax */
  push32((uint32_t)(EAX));
  /* 108feccc push 1 */
  push32((uint32_t)(0x1u));
  /* 108fecce call 0x10902540 */
  push32(0x108fecd3u); f_10902540();
  /* 108fecd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fecd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fecd9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fecdb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fecde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fece1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fece4 push edx */
  push32((uint32_t)(EDX));
  /* 108fece5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 108fece7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fecea push eax */
  push32((uint32_t)(EAX));
  /* 108feceb push 1 */
  push32((uint32_t)(0x1u));
  /* 108feced call 0x10902540 */
  push32(0x108fecf2u); f_10902540();
  /* 108fecf2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fecf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fecf8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fecfa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fecfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fed00 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fed03 push edx */
  push32((uint32_t)(EDX));
  /* 108fed04 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 108fed06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fed09 push eax */
  push32((uint32_t)(EAX));
  /* 108fed0a push 1 */
  push32((uint32_t)(0x1u));
  /* 108fed0c call 0x10902540 */
  push32(0x108fed11u); f_10902540();
  /* 108fed11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fed14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fed17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fed19 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fed1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fed1f push edx */
  push32((uint32_t)(EDX));
  /* 108fed20 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 108fed22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fed25 push eax */
  push32((uint32_t)(EAX));
  /* 108fed26 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fed28 call 0x10902540 */
  push32(0x108fed2du); f_10902540();
  /* 108fed2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fed30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fed33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fed35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fed38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fed3b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fed3e push edx */
  push32((uint32_t)(EDX));
  /* 108fed3f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 108fed41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fed44 push eax */
  push32((uint32_t)(EAX));
  /* 108fed45 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fed47 call 0x10902540 */
  push32(0x108fed4cu); f_10902540();
  /* 108fed4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fed4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fed52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fed54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fed57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fed5a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fed5d push edx */
  push32((uint32_t)(EDX));
  /* 108fed5e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 108fed60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fed63 push eax */
  push32((uint32_t)(EAX));
  /* 108fed64 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fed66 call 0x10902540 */
  push32(0x108fed6bu); f_10902540();
  /* 108fed6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fed6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fed71 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fed73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fed76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fed79 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fed7c push edx */
  push32((uint32_t)(EDX));
  /* 108fed7d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 108fed7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fed82 push eax */
  push32((uint32_t)(EAX));
  /* 108fed83 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fed85 call 0x10902540 */
  push32(0x108fed8au); f_10902540();
  /* 108fed8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fed8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fed90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fed92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fed95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fed98 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fed9b push edx */
  push32((uint32_t)(EDX));
  /* 108fed9c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 108fed9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108feda1 push eax */
  push32((uint32_t)(EAX));
  /* 108feda2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108feda4 call 0x10902540 */
  push32(0x108feda9u); f_10902540();
  /* 108feda9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fedac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fedaf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fedb1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fedb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fedb7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fedba push edx */
  push32((uint32_t)(EDX));
  /* 108fedbb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 108fedbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fedc0 push eax */
  push32((uint32_t)(EAX));
  /* 108fedc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fedc3 call 0x10902540 */
  push32(0x108fedc8u); f_10902540();
  /* 108fedc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fedcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fedce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fedd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fedd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fedd6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fedd9 push edx */
  push32((uint32_t)(EDX));
  /* 108fedda push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 108feddc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108feddf push eax */
  push32((uint32_t)(EAX));
  /* 108fede0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fede2 call 0x10902540 */
  push32(0x108fede7u); f_10902540();
  /* 108fede7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fedea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108feded or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fedef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fedf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fedf5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fedf8 push edx */
  push32((uint32_t)(EDX));
  /* 108fedf9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 108fedfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fedfe push eax */
  push32((uint32_t)(EAX));
  /* 108fedff push 1 */
  push32((uint32_t)(0x1u));
  /* 108fee01 call 0x10902540 */
  push32(0x108fee06u); f_10902540();
  /* 108fee06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fee09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fee0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fee0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fee11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fee14 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fee17 push edx */
  push32((uint32_t)(EDX));
  /* 108fee18 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 108fee1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fee1d push eax */
  push32((uint32_t)(EAX));
  /* 108fee1e push 1 */
  push32((uint32_t)(0x1u));
  /* 108fee20 call 0x10902540 */
  push32(0x108fee25u); f_10902540();
  /* 108fee25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fee28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fee2b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fee2d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fee30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fee33 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fee36 push edx */
  push32((uint32_t)(EDX));
  /* 108fee37 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 108fee39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fee3c push eax */
  push32((uint32_t)(EAX));
  /* 108fee3d push 1 */
  push32((uint32_t)(0x1u));
  /* 108fee3f call 0x10902540 */
  push32(0x108fee44u); f_10902540();
  /* 108fee44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fee47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fee4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fee4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fee4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fee52 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fee55 push edx */
  push32((uint32_t)(EDX));
  /* 108fee56 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 108fee58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fee5b push eax */
  push32((uint32_t)(EAX));
  /* 108fee5c push 1 */
  push32((uint32_t)(0x1u));
  /* 108fee5e call 0x10902540 */
  push32(0x108fee63u); f_10902540();
  /* 108fee63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fee66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fee69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fee6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fee6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fee71 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fee74 push edx */
  push32((uint32_t)(EDX));
  /* 108fee75 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 108fee77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fee7a push eax */
  push32((uint32_t)(EAX));
  /* 108fee7b push 1 */
  push32((uint32_t)(0x1u));
  /* 108fee7d call 0x10902540 */
  push32(0x108fee82u); f_10902540();
  /* 108fee82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fee85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fee88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fee8a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fee8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fee90 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fee93 push edx */
  push32((uint32_t)(EDX));
  /* 108fee94 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 108fee96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fee99 push eax */
  push32((uint32_t)(EAX));
  /* 108fee9a push 1 */
  push32((uint32_t)(0x1u));
  /* 108fee9c call 0x10902540 */
  push32(0x108feea1u); f_10902540();
  /* 108feea1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108feea4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108feea7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108feea9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108feeac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108feeaf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108feeb2 push edx */
  push32((uint32_t)(EDX));
  /* 108feeb3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 108feeb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108feeb8 push eax */
  push32((uint32_t)(EAX));
  /* 108feeb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 108feebb call 0x10902540 */
  push32(0x108feec0u); f_10902540();
  /* 108feec0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108feec3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108feec6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108feec8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108feecb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108feece add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108feed1 push edx */
  push32((uint32_t)(EDX));
  /* 108feed2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 108feed4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108feed7 push eax */
  push32((uint32_t)(EAX));
  /* 108feed8 push 1 */
  push32((uint32_t)(0x1u));
  /* 108feeda call 0x10902540 */
  push32(0x108feedfu); f_10902540();
  /* 108feedf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108feee2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108feee5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108feee7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108feeea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108feeed add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108feef0 push edx */
  push32((uint32_t)(EDX));
  /* 108feef1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 108feef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108feef6 push eax */
  push32((uint32_t)(EAX));
  /* 108feef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108feef9 call 0x10902540 */
  push32(0x108feefeu); f_10902540();
  /* 108feefe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fef04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fef06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fef09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fef0c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef0f push edx */
  push32((uint32_t)(EDX));
  /* 108fef10 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 108fef12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fef15 push eax */
  push32((uint32_t)(EAX));
  /* 108fef16 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fef18 call 0x10902540 */
  push32(0x108fef1du); f_10902540();
  /* 108fef1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fef23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fef25 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fef28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fef2b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef2e push edx */
  push32((uint32_t)(EDX));
  /* 108fef2f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 108fef31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fef34 push eax */
  push32((uint32_t)(EAX));
  /* 108fef35 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fef37 call 0x10902540 */
  push32(0x108fef3cu); f_10902540();
  /* 108fef3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fef42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fef44 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fef47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fef4a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef4d push edx */
  push32((uint32_t)(EDX));
  /* 108fef4e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 108fef50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fef53 push eax */
  push32((uint32_t)(EAX));
  /* 108fef54 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fef56 call 0x10902540 */
  push32(0x108fef5bu); f_10902540();
  /* 108fef5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fef61 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fef63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fef66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fef69 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef6c push edx */
  push32((uint32_t)(EDX));
  /* 108fef6d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 108fef6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fef72 push eax */
  push32((uint32_t)(EAX));
  /* 108fef73 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fef75 call 0x10902540 */
  push32(0x108fef7au); f_10902540();
  /* 108fef7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fef80 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fef82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fef85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fef88 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef8b push edx */
  push32((uint32_t)(EDX));
  /* 108fef8c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 108fef8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fef91 push eax */
  push32((uint32_t)(EAX));
  /* 108fef92 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fef94 call 0x10902540 */
  push32(0x108fef99u); f_10902540();
  /* 108fef99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fef9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fef9f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fefa1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fefa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fefa7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fefaa push edx */
  push32((uint32_t)(EDX));
  /* 108fefab push 0x39 */
  push32((uint32_t)(0x39u));
  /* 108fefad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fefb0 push eax */
  push32((uint32_t)(EAX));
  /* 108fefb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fefb3 call 0x10902540 */
  push32(0x108fefb8u); f_10902540();
  /* 108fefb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fefbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fefbe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fefc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fefc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fefc6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fefc9 push edx */
  push32((uint32_t)(EDX));
  /* 108fefca push 0x3a */
  push32((uint32_t)(0x3au));
  /* 108fefcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fefcf push eax */
  push32((uint32_t)(EAX));
  /* 108fefd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108fefd2 call 0x10902540 */
  push32(0x108fefd7u); f_10902540();
  /* 108fefd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fefda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108fefdd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108fefdf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108fefe2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108fefe5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fefe8 push edx */
  push32((uint32_t)(EDX));
  /* 108fefe9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 108fefeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108fefee push eax */
  push32((uint32_t)(EAX));
  /* 108fefef push 1 */
  push32((uint32_t)(0x1u));
  /* 108feff1 call 0x10902540 */
  push32(0x108feff6u); f_10902540();
  /* 108feff6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108feff9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108feffc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108feffe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff001 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff004 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff007 push edx */
  push32((uint32_t)(EDX));
  /* 108ff008 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 108ff00a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff00d push eax */
  push32((uint32_t)(EAX));
  /* 108ff00e push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff010 call 0x10902540 */
  push32(0x108ff015u); f_10902540();
  /* 108ff015 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff018 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff01b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff01d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff020 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff023 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff026 push edx */
  push32((uint32_t)(EDX));
  /* 108ff027 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 108ff029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff02c push eax */
  push32((uint32_t)(EAX));
  /* 108ff02d push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff02f call 0x10902540 */
  push32(0x108ff034u); f_10902540();
  /* 108ff034 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff037 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff03a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff03c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff03f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff042 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff048 push edx */
  push32((uint32_t)(EDX));
  /* 108ff049 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 108ff04b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff04e push eax */
  push32((uint32_t)(EAX));
  /* 108ff04f push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff051 call 0x10902540 */
  push32(0x108ff056u); f_10902540();
  /* 108ff056 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff059 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff05c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff05e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff061 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff064 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff06a push edx */
  push32((uint32_t)(EDX));
  /* 108ff06b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 108ff06d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff070 push eax */
  push32((uint32_t)(EAX));
  /* 108ff071 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff073 call 0x10902540 */
  push32(0x108ff078u); f_10902540();
  /* 108ff078 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff07b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff07e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff080 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff083 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff086 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff08c push edx */
  push32((uint32_t)(EDX));
  /* 108ff08d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108ff08f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff092 push eax */
  push32((uint32_t)(EAX));
  /* 108ff093 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff095 call 0x10902540 */
  push32(0x108ff09au); f_10902540();
  /* 108ff09a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff09d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff0a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff0a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff0a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff0a8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff0ae push edx */
  push32((uint32_t)(EDX));
  /* 108ff0af push 0x41 */
  push32((uint32_t)(0x41u));
  /* 108ff0b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff0b4 push eax */
  push32((uint32_t)(EAX));
  /* 108ff0b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff0b7 call 0x10902540 */
  push32(0x108ff0bcu); f_10902540();
  /* 108ff0bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff0bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff0c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff0c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff0c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff0ca add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff0d0 push edx */
  push32((uint32_t)(EDX));
  /* 108ff0d1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 108ff0d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff0d6 push eax */
  push32((uint32_t)(EAX));
  /* 108ff0d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff0d9 call 0x10902540 */
  push32(0x108ff0deu); f_10902540();
  /* 108ff0de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff0e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff0e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff0e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff0e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff0ec add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff0f2 push edx */
  push32((uint32_t)(EDX));
  /* 108ff0f3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 108ff0f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff0f8 push eax */
  push32((uint32_t)(EAX));
  /* 108ff0f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff0fb call 0x10902540 */
  push32(0x108ff100u); f_10902540();
  /* 108ff100 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff103 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff106 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff108 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff10b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff10e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff114 push edx */
  push32((uint32_t)(EDX));
  /* 108ff115 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 108ff117 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff11a push eax */
  push32((uint32_t)(EAX));
  /* 108ff11b push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff11d call 0x10902540 */
  push32(0x108ff122u); f_10902540();
  /* 108ff122 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff125 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff128 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff12a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff12d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff130 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff136 push edx */
  push32((uint32_t)(EDX));
  /* 108ff137 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 108ff139 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff13c push eax */
  push32((uint32_t)(EAX));
  /* 108ff13d push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff13f call 0x10902540 */
  push32(0x108ff144u); f_10902540();
  /* 108ff144 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff147 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff14a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff14c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff14f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff152 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff158 push edx */
  push32((uint32_t)(EDX));
  /* 108ff159 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 108ff15b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff15e push eax */
  push32((uint32_t)(EAX));
  /* 108ff15f push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff161 call 0x10902540 */
  push32(0x108ff166u); f_10902540();
  /* 108ff166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff169 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff16c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff16e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff174 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff17a push edx */
  push32((uint32_t)(EDX));
  /* 108ff17b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 108ff17d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff180 push eax */
  push32((uint32_t)(EAX));
  /* 108ff181 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff183 call 0x10902540 */
  push32(0x108ff188u); f_10902540();
  /* 108ff188 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff18b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff18e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff190 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff193 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff196 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff19c push edx */
  push32((uint32_t)(EDX));
  /* 108ff19d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 108ff1a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff1a5 push eax */
  push32((uint32_t)(EAX));
  /* 108ff1a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff1a8 call 0x10902540 */
  push32(0x108ff1adu); f_10902540();
  /* 108ff1ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff1b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ff1b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff1b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108ff1b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_108ff1bb:;
  /* 108ff1bb mov esp, ebp */
  ESP = (EBP);
  /* 108ff1bd pop ebp */
  EBP = (pop32());
  /* 108ff1be ret  */
  ESPCHK(0x108fec30u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x108ff1c0 (779 bytes, 265 insns) */
void f_108ff1c0(void) {
  FTRACE(0x108ff1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ff1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108ff1c1 mov ebp, esp */
  EBP = (ESP);
  /* 108ff1c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff1c7 jne 0x108ff1ce */
  if (!C.zf) goto L_108ff1ce;
  /* 108ff1c9 jmp 0x108ff4c9 */
  goto L_108ff4c9;
L_108ff1ce:;
  /* 108ff1ce push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff1d3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108ff1d6 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff1d7 call 0x108f4e10 */
  push32(0x108ff1dcu); f_108f4e10();
  /* 108ff1dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff1df push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff1e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff1e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108ff1e7 push eax */
  push32((uint32_t)(EAX));
  /* 108ff1e8 call 0x108f4e10 */
  push32(0x108ff1edu); f_108f4e10();
  /* 108ff1ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff1f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff1f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff1f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108ff1f8 push edx */
  push32((uint32_t)(EDX));
  /* 108ff1f9 call 0x108f4e10 */
  push32(0x108ff1feu); f_108f4e10();
  /* 108ff1fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff201 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff203 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff206 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108ff209 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff20a call 0x108f4e10 */
  push32(0x108ff20fu); f_108f4e10();
  /* 108ff20f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff212 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff217 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108ff21a push eax */
  push32((uint32_t)(EAX));
  /* 108ff21b call 0x108f4e10 */
  push32(0x108ff220u); f_108f4e10();
  /* 108ff220 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff223 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff225 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff228 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108ff22b push edx */
  push32((uint32_t)(EDX));
  /* 108ff22c call 0x108f4e10 */
  push32(0x108ff231u); f_108f4e10();
  /* 108ff231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff234 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff239 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108ff23b push ecx */
  push32((uint32_t)(ECX));
  /* 108ff23c call 0x108f4e10 */
  push32(0x108ff241u); f_108f4e10();
  /* 108ff241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff244 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff246 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff249 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 108ff24c push eax */
  push32((uint32_t)(EAX));
  /* 108ff24d call 0x108f4e10 */
  push32(0x108ff252u); f_108f4e10();
  /* 108ff252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff255 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff25a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 108ff25d push edx */
  push32((uint32_t)(EDX));
  /* 108ff25e call 0x108f4e10 */
  push32(0x108ff263u); f_108f4e10();
  /* 108ff263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff266 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff26b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 108ff26e push ecx */
  push32((uint32_t)(ECX));
  /* 108ff26f call 0x108f4e10 */
  push32(0x108ff274u); f_108f4e10();
  /* 108ff274 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff277 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff279 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff27c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 108ff27f push eax */
  push32((uint32_t)(EAX));
  /* 108ff280 call 0x108f4e10 */
  push32(0x108ff285u); f_108f4e10();
  /* 108ff285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff288 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff28a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff28d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 108ff290 push edx */
  push32((uint32_t)(EDX));
  /* 108ff291 call 0x108f4e10 */
  push32(0x108ff296u); f_108f4e10();
  /* 108ff296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff299 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff29b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff29e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 108ff2a1 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff2a2 call 0x108f4e10 */
  push32(0x108ff2a7u); f_108f4e10();
  /* 108ff2a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff2aa push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff2ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff2af mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 108ff2b2 push eax */
  push32((uint32_t)(EAX));
  /* 108ff2b3 call 0x108f4e10 */
  push32(0x108ff2b8u); f_108f4e10();
  /* 108ff2b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff2bb push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff2bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff2c0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 108ff2c3 push edx */
  push32((uint32_t)(EDX));
  /* 108ff2c4 call 0x108f4e10 */
  push32(0x108ff2c9u); f_108f4e10();
  /* 108ff2c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff2cc push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff2ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff2d1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 108ff2d4 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff2d5 call 0x108f4e10 */
  push32(0x108ff2dau); f_108f4e10();
  /* 108ff2da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff2dd push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff2df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff2e2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 108ff2e5 push eax */
  push32((uint32_t)(EAX));
  /* 108ff2e6 call 0x108f4e10 */
  push32(0x108ff2ebu); f_108f4e10();
  /* 108ff2eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff2ee push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff2f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff2f3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 108ff2f6 push edx */
  push32((uint32_t)(EDX));
  /* 108ff2f7 call 0x108f4e10 */
  push32(0x108ff2fcu); f_108f4e10();
  /* 108ff2fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff2ff push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff304 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 108ff307 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff308 call 0x108f4e10 */
  push32(0x108ff30du); f_108f4e10();
  /* 108ff30d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff310 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff315 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 108ff318 push eax */
  push32((uint32_t)(EAX));
  /* 108ff319 call 0x108f4e10 */
  push32(0x108ff31eu); f_108f4e10();
  /* 108ff31e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff321 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff326 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108ff329 push edx */
  push32((uint32_t)(EDX));
  /* 108ff32a call 0x108f4e10 */
  push32(0x108ff32fu); f_108f4e10();
  /* 108ff32f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff332 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff337 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 108ff33a push ecx */
  push32((uint32_t)(ECX));
  /* 108ff33b call 0x108f4e10 */
  push32(0x108ff340u); f_108f4e10();
  /* 108ff340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff343 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff348 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 108ff34b push eax */
  push32((uint32_t)(EAX));
  /* 108ff34c call 0x108f4e10 */
  push32(0x108ff351u); f_108f4e10();
  /* 108ff351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff354 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff356 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff359 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 108ff35c push edx */
  push32((uint32_t)(EDX));
  /* 108ff35d call 0x108f4e10 */
  push32(0x108ff362u); f_108f4e10();
  /* 108ff362 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff365 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff36a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 108ff36d push ecx */
  push32((uint32_t)(ECX));
  /* 108ff36e call 0x108f4e10 */
  push32(0x108ff373u); f_108f4e10();
  /* 108ff373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff376 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff378 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff37b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 108ff37e push eax */
  push32((uint32_t)(EAX));
  /* 108ff37f call 0x108f4e10 */
  push32(0x108ff384u); f_108f4e10();
  /* 108ff384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff387 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff38c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 108ff38f push edx */
  push32((uint32_t)(EDX));
  /* 108ff390 call 0x108f4e10 */
  push32(0x108ff395u); f_108f4e10();
  /* 108ff395 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff398 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff39a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff39d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 108ff3a0 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff3a1 call 0x108f4e10 */
  push32(0x108ff3a6u); f_108f4e10();
  /* 108ff3a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff3a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff3ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff3ae mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 108ff3b1 push eax */
  push32((uint32_t)(EAX));
  /* 108ff3b2 call 0x108f4e10 */
  push32(0x108ff3b7u); f_108f4e10();
  /* 108ff3b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff3ba push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff3bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff3bf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 108ff3c2 push edx */
  push32((uint32_t)(EDX));
  /* 108ff3c3 call 0x108f4e10 */
  push32(0x108ff3c8u); f_108f4e10();
  /* 108ff3c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff3cb push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff3cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff3d0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 108ff3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff3d4 call 0x108f4e10 */
  push32(0x108ff3d9u); f_108f4e10();
  /* 108ff3d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff3dc push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff3de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff3e1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 108ff3e4 push eax */
  push32((uint32_t)(EAX));
  /* 108ff3e5 call 0x108f4e10 */
  push32(0x108ff3eau); f_108f4e10();
  /* 108ff3ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff3ed push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff3ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff3f2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 108ff3f8 push edx */
  push32((uint32_t)(EDX));
  /* 108ff3f9 call 0x108f4e10 */
  push32(0x108ff3feu); f_108f4e10();
  /* 108ff3fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff401 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff403 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff406 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 108ff40c push ecx */
  push32((uint32_t)(ECX));
  /* 108ff40d call 0x108f4e10 */
  push32(0x108ff412u); f_108f4e10();
  /* 108ff412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff415 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff417 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff41a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 108ff420 push eax */
  push32((uint32_t)(EAX));
  /* 108ff421 call 0x108f4e10 */
  push32(0x108ff426u); f_108f4e10();
  /* 108ff426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff429 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff42b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff42e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 108ff434 push edx */
  push32((uint32_t)(EDX));
  /* 108ff435 call 0x108f4e10 */
  push32(0x108ff43au); f_108f4e10();
  /* 108ff43a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff43d push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff43f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff442 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 108ff448 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff449 call 0x108f4e10 */
  push32(0x108ff44eu); f_108f4e10();
  /* 108ff44e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff451 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff456 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 108ff45c push eax */
  push32((uint32_t)(EAX));
  /* 108ff45d call 0x108f4e10 */
  push32(0x108ff462u); f_108f4e10();
  /* 108ff462 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff465 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff467 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff46a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 108ff470 push edx */
  push32((uint32_t)(EDX));
  /* 108ff471 call 0x108f4e10 */
  push32(0x108ff476u); f_108f4e10();
  /* 108ff476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff479 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff47b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff47e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 108ff484 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff485 call 0x108f4e10 */
  push32(0x108ff48au); f_108f4e10();
  /* 108ff48a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff48d push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff48f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff492 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 108ff498 push eax */
  push32((uint32_t)(EAX));
  /* 108ff499 call 0x108f4e10 */
  push32(0x108ff49eu); f_108f4e10();
  /* 108ff49e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff4a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff4a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff4a6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 108ff4ac push edx */
  push32((uint32_t)(EDX));
  /* 108ff4ad call 0x108f4e10 */
  push32(0x108ff4b2u); f_108f4e10();
  /* 108ff4b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff4b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff4b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff4ba mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 108ff4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff4c1 call 0x108f4e10 */
  push32(0x108ff4c6u); f_108f4e10();
  /* 108ff4c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108ff4c9:;
  /* 108ff4c9 pop ebp */
  EBP = (pop32());
  /* 108ff4ca ret  */
  ESPCHK(0x108ff1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4d0 @ 0x108ff4d0 (678 bytes, 180 insns) */
void f_108ff4d0(void) {
  FTRACE(0x108ff4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ff4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108ff4d1 mov ebp, esp */
  EBP = (ESP);
  /* 108ff4d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ff4d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108ff4dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ff4df mov ax, word ptr [0x1092081a] */
  AX = (r16((uint32_t)(0x1092081a)));
  /* 108ff4e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108ff4e8 cmp dword ptr [0x109207c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff4ef je 0x108ff64a */
  if (C.zf) goto L_108ff64a;
  /* 108ff4f5 push 0x109207e8 */
  push32((uint32_t)(0x109207e8u));
  /* 108ff4fa push 0xe */
  push32((uint32_t)(0xeu));
  /* 108ff4fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff4ff push ecx */
  push32((uint32_t)(ECX));
  /* 108ff500 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff502 call 0x10902540 */
  push32(0x108ff507u); f_10902540();
  /* 108ff507 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff50a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff50d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108ff50f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108ff512 push 0x109207ec */
  push32((uint32_t)(0x109207ecu));
  /* 108ff517 push 0xf */
  push32((uint32_t)(0xfu));
  /* 108ff519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff51c push eax */
  push32((uint32_t)(EAX));
  /* 108ff51d push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff51f call 0x10902540 */
  push32(0x108ff524u); f_10902540();
  /* 108ff524 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff527 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff52a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff52c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ff52f push 0x109207f0 */
  push32((uint32_t)(0x109207f0u));
  /* 108ff534 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 108ff536 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff539 push edx */
  push32((uint32_t)(EDX));
  /* 108ff53a push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff53c call 0x10902540 */
  push32(0x108ff541u); f_10902540();
  /* 108ff541 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff544 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff547 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff549 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ff54c mov edx, dword ptr [0x109207f0] */
  EDX = (r32((uint32_t)(0x109207f0)));
  /* 108ff552 push edx */
  push32((uint32_t)(EDX));
  /* 108ff553 call 0x108ff780 */
  push32(0x108ff558u); f_108ff780();
  /* 108ff558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff55b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff55f je 0x108ff5b9 */
  if (C.zf) goto L_108ff5b9;
  /* 108ff561 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff563 mov eax, dword ptr [0x109207e8] */
  EAX = (r32((uint32_t)(0x109207e8)));
  /* 108ff568 push eax */
  push32((uint32_t)(EAX));
  /* 108ff569 call 0x108f4e10 */
  push32(0x108ff56eu); f_108f4e10();
  /* 108ff56e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff571 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff573 mov ecx, dword ptr [0x109207ec] */
  ECX = (r32((uint32_t)(0x109207ec)));
  /* 108ff579 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff57a call 0x108f4e10 */
  push32(0x108ff57fu); f_108f4e10();
  /* 108ff57f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff582 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff584 mov edx, dword ptr [0x109207f0] */
  EDX = (r32((uint32_t)(0x109207f0)));
  /* 108ff58a push edx */
  push32((uint32_t)(EDX));
  /* 108ff58b call 0x108f4e10 */
  push32(0x108ff590u); f_108f4e10();
  /* 108ff590 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff593 mov dword ptr [0x109207e8], 0 */
  w32((uint32_t)(0x109207e8), (0x0u));
  /* 108ff59d mov dword ptr [0x109207ec], 0 */
  w32((uint32_t)(0x109207ec), (0x0u));
  /* 108ff5a7 mov dword ptr [0x109207f0], 0 */
  w32((uint32_t)(0x109207f0), (0x0u));
  /* 108ff5b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108ff5b4 jmp 0x108ff772 */
  goto L_108ff772;
L_108ff5b9:;
  /* 108ff5b9 mov eax, dword ptr [0x1091fd88] */
  EAX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff5be cmp dword ptr [eax], 0x1091fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1091fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff5c4 je 0x108ff600 */
  if (C.zf) goto L_108ff600;
  /* 108ff5c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff5c8 mov ecx, dword ptr [0x1091fd88] */
  ECX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff5ce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108ff5d0 push edx */
  push32((uint32_t)(EDX));
  /* 108ff5d1 call 0x108f4e10 */
  push32(0x108ff5d6u); f_108f4e10();
  /* 108ff5d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff5d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff5db mov eax, dword ptr [0x1091fd88] */
  EAX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff5e0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108ff5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff5e4 call 0x108f4e10 */
  push32(0x108ff5e9u); f_108f4e10();
  /* 108ff5e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff5ec push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff5ee mov edx, dword ptr [0x1091fd88] */
  EDX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff5f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108ff5f7 push eax */
  push32((uint32_t)(EAX));
  /* 108ff5f8 call 0x108f4e10 */
  push32(0x108ff5fdu); f_108f4e10();
  /* 108ff5fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108ff600:;
  /* 108ff600 mov ecx, dword ptr [0x1091fd88] */
  ECX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff606 mov edx, dword ptr [0x109207e8] */
  EDX = (r32((uint32_t)(0x109207e8)));
  /* 108ff60c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108ff60e mov eax, dword ptr [0x1091fd88] */
  EAX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff613 mov ecx, dword ptr [0x109207ec] */
  ECX = (r32((uint32_t)(0x109207ec)));
  /* 108ff619 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 108ff61c mov edx, dword ptr [0x1091fd88] */
  EDX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff622 mov eax, dword ptr [0x109207f0] */
  EAX = (r32((uint32_t)(0x109207f0)));
  /* 108ff627 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108ff62a mov ecx, dword ptr [0x1091fd88] */
  ECX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff630 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108ff632 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108ff634 mov byte ptr [0x1091eea8], al */
  w8((uint32_t)(0x1091eea8), (AL));
  /* 108ff639 mov dword ptr [0x1091eeac], 1 */
  w32((uint32_t)(0x1091eeac), (0x1u));
  /* 108ff643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ff645 jmp 0x108ff772 */
  goto L_108ff772;
L_108ff64a:;
  /* 108ff64a push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff64c mov ecx, dword ptr [0x109207e8] */
  ECX = (r32((uint32_t)(0x109207e8)));
  /* 108ff652 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff653 call 0x108f4e10 */
  push32(0x108ff658u); f_108f4e10();
  /* 108ff658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff65b push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff65d mov edx, dword ptr [0x109207ec] */
  EDX = (r32((uint32_t)(0x109207ec)));
  /* 108ff663 push edx */
  push32((uint32_t)(EDX));
  /* 108ff664 call 0x108f4e10 */
  push32(0x108ff669u); f_108f4e10();
  /* 108ff669 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff66c push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff66e mov eax, dword ptr [0x109207f0] */
  EAX = (r32((uint32_t)(0x109207f0)));
  /* 108ff673 push eax */
  push32((uint32_t)(EAX));
  /* 108ff674 call 0x108f4e10 */
  push32(0x108ff679u); f_108f4e10();
  /* 108ff679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff67c mov dword ptr [0x109207e8], 0 */
  w32((uint32_t)(0x109207e8), (0x0u));
  /* 108ff686 mov dword ptr [0x109207ec], 0 */
  w32((uint32_t)(0x109207ec), (0x0u));
  /* 108ff690 mov dword ptr [0x109207f0], 0 */
  w32((uint32_t)(0x109207f0), (0x0u));
  /* 108ff69a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 108ff69f push 0x1091c154 */
  push32((uint32_t)(0x1091c154u));
  /* 108ff6a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff6a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff6a8 call 0x108f4380 */
  push32(0x108ff6adu); f_108f4380();
  /* 108ff6ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff6b0 mov ecx, dword ptr [0x1091fd88] */
  ECX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff6b6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108ff6b8 mov edx, dword ptr [0x1091fd88] */
  EDX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff6be cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff6c1 jne 0x108ff6cb */
  if (!C.zf) goto L_108ff6cb;
  /* 108ff6c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108ff6c6 jmp 0x108ff772 */
  goto L_108ff772;
L_108ff6cb:;
  /* 108ff6cb push 0x1091c124 */
  push32((uint32_t)(0x1091c124u));
  /* 108ff6d0 mov eax, dword ptr [0x1091fd88] */
  EAX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff6d5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108ff6d7 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff6d8 call 0x108f7330 */
  push32(0x108ff6ddu); f_108f7330();
  /* 108ff6dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff6e0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 108ff6e5 push 0x1091c154 */
  push32((uint32_t)(0x1091c154u));
  /* 108ff6ea push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff6ec push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff6ee call 0x108f4380 */
  push32(0x108ff6f3u); f_108f4380();
  /* 108ff6f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff6f6 mov edx, dword ptr [0x1091fd88] */
  EDX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff6fc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 108ff6ff mov eax, dword ptr [0x1091fd88] */
  EAX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff704 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff708 jne 0x108ff70f */
  if (!C.zf) goto L_108ff70f;
  /* 108ff70a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108ff70d jmp 0x108ff772 */
  goto L_108ff772;
L_108ff70f:;
  /* 108ff70f mov ecx, dword ptr [0x1091fd88] */
  ECX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff715 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108ff718 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108ff71b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 108ff720 push 0x1091c154 */
  push32((uint32_t)(0x1091c154u));
  /* 108ff725 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff727 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff729 call 0x108f4380 */
  push32(0x108ff72eu); f_108f4380();
  /* 108ff72e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff731 mov ecx, dword ptr [0x1091fd88] */
  ECX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff737 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 108ff73a mov edx, dword ptr [0x1091fd88] */
  EDX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff740 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff744 jne 0x108ff74b */
  if (!C.zf) goto L_108ff74b;
  /* 108ff746 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108ff749 jmp 0x108ff772 */
  goto L_108ff772;
L_108ff74b:;
  /* 108ff74b mov eax, dword ptr [0x1091fd88] */
  EAX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff750 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108ff753 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 108ff756 mov edx, dword ptr [0x1091fd88] */
  EDX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff75c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108ff75e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108ff760 mov byte ptr [0x1091eea8], cl */
  w8((uint32_t)(0x1091eea8), (CL));
  /* 108ff766 mov dword ptr [0x1091eeac], 1 */
  w32((uint32_t)(0x1091eeac), (0x1u));
  /* 108ff770 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108ff772:;
  /* 108ff772 mov esp, ebp */
  ESP = (EBP);
  /* 108ff774 pop ebp */
  EBP = (pop32());
  /* 108ff775 ret  */
  ESPCHK(0x108ff4d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x108ff780 (125 bytes, 49 insns) */
void f_108ff780(void) {
  FTRACE(0x108ff780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ff780 push ebp */
  push32((uint32_t)(EBP));
  /* 108ff781 mov ebp, esp */
  EBP = (ESP);
  /* 108ff783 push ecx */
  push32((uint32_t)(ECX));
L_108ff784:;
  /* 108ff784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff787 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108ff78a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108ff78c je 0x108ff7f9 */
  if (C.zf) goto L_108ff7f9;
  /* 108ff78e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff791 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108ff794 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff797 jl 0x108ff7bd */
  if ((C.sf!=C.of)) goto L_108ff7bd;
  /* 108ff799 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff79c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108ff79f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff7a2 jg 0x108ff7bd */
  if ((!C.zf&&C.sf==C.of)) goto L_108ff7bd;
  /* 108ff7a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff7a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108ff7aa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ff7ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff7b0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108ff7b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff7b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff7b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108ff7bb jmp 0x108ff7f7 */
  goto L_108ff7f7;
L_108ff7bd:;
  /* 108ff7bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff7c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108ff7c3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff7c6 jne 0x108ff7ee */
  if (!C.zf) goto L_108ff7ee;
  /* 108ff7c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff7cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108ff7ce:;
  /* 108ff7ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff7d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff7d4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108ff7d7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108ff7d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff7dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff7df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108ff7e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff7e5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108ff7e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108ff7ea jne 0x108ff7ce */
  if (!C.zf) goto L_108ff7ce;
  /* 108ff7ec jmp 0x108ff7f7 */
  goto L_108ff7f7;
L_108ff7ee:;
  /* 108ff7ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff7f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff7f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_108ff7f7:;
  /* 108ff7f7 jmp 0x108ff784 */
  goto L_108ff784;
L_108ff7f9:;
  /* 108ff7f9 mov esp, ebp */
  ESP = (EBP);
  /* 108ff7fb pop ebp */
  EBP = (pop32());
  /* 108ff7fc ret  */
  ESPCHK(0x108ff780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f800 @ 0x108ff800 (304 bytes, 85 insns) */
void f_108ff800(void) {
  FTRACE(0x108ff800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ff800 push ebp */
  push32((uint32_t)(EBP));
  /* 108ff801 mov ebp, esp */
  EBP = (ESP);
  /* 108ff803 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff804 cmp dword ptr [0x109207bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff80b je 0x108ff8cc */
  if (C.zf) goto L_108ff8cc;
  /* 108ff811 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 108ff813 push 0x1091c160 */
  push32((uint32_t)(0x1091c160u));
  /* 108ff818 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff81a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 108ff81c push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff81e call 0x108f4790 */
  push32(0x108ff823u); f_108f4790();
  /* 108ff823 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff826 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108ff829 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff82d jne 0x108ff839 */
  if (!C.zf) goto L_108ff839;
  /* 108ff82f mov eax, 1 */
  EAX = (0x1u);
  /* 108ff834 jmp 0x108ff92c */
  goto L_108ff92c;
L_108ff839:;
  /* 108ff839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff83c push eax */
  push32((uint32_t)(EAX));
  /* 108ff83d call 0x108ff930 */
  push32(0x108ff842u); f_108ff930();
  /* 108ff842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108ff847 je 0x108ff86d */
  if (C.zf) goto L_108ff86d;
  /* 108ff849 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff84c push ecx */
  push32((uint32_t)(ECX));
  /* 108ff84d call 0x108ffbc0 */
  push32(0x108ff852u); f_108ffbc0();
  /* 108ff852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff855 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff857 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff85a push edx */
  push32((uint32_t)(EDX));
  /* 108ff85b call 0x108f4e10 */
  push32(0x108ff860u); f_108f4e10();
  /* 108ff860 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff863 mov eax, 1 */
  EAX = (0x1u);
  /* 108ff868 jmp 0x108ff92c */
  goto L_108ff92c;
L_108ff86d:;
  /* 108ff86d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff870 mov ecx, dword ptr [0x1091fd88] */
  ECX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff876 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108ff878 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108ff87a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff87d mov ecx, dword ptr [0x1091fd88] */
  ECX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff883 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108ff886 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108ff889 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff88c mov ecx, dword ptr [0x1091fd88] */
  ECX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff892 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108ff895 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 108ff898 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff89b mov dword ptr [0x1091fd88], eax */
  w32((uint32_t)(0x1091fd88), (EAX));
  /* 108ff8a0 mov ecx, dword ptr [0x109207f4] */
  ECX = (r32((uint32_t)(0x109207f4)));
  /* 108ff8a6 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff8a7 call 0x108ffbc0 */
  push32(0x108ff8acu); f_108ffbc0();
  /* 108ff8ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff8af push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff8b1 mov edx, dword ptr [0x109207f4] */
  EDX = (r32((uint32_t)(0x109207f4)));
  /* 108ff8b7 push edx */
  push32((uint32_t)(EDX));
  /* 108ff8b8 call 0x108f4e10 */
  push32(0x108ff8bdu); f_108f4e10();
  /* 108ff8bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff8c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff8c3 mov dword ptr [0x109207f4], eax */
  w32((uint32_t)(0x109207f4), (EAX));
  /* 108ff8c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ff8ca jmp 0x108ff92c */
  goto L_108ff92c;
L_108ff8cc:;
  /* 108ff8cc mov ecx, dword ptr [0x1091fd88] */
  ECX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff8d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108ff8d4 mov dword ptr [0x1091fd58], edx */
  w32((uint32_t)(0x1091fd58), (EDX));
  /* 108ff8da mov eax, dword ptr [0x1091fd88] */
  EAX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff8df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108ff8e2 mov dword ptr [0x1091fd5c], ecx */
  w32((uint32_t)(0x1091fd5c), (ECX));
  /* 108ff8e8 mov edx, dword ptr [0x1091fd88] */
  EDX = (r32((uint32_t)(0x1091fd88)));
  /* 108ff8ee mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108ff8f1 mov dword ptr [0x1091fd60], eax */
  w32((uint32_t)(0x1091fd60), (EAX));
  /* 108ff8f6 mov dword ptr [0x1091fd88], 0x1091fd58 */
  w32((uint32_t)(0x1091fd88), (0x1091fd58u));
  /* 108ff900 mov ecx, dword ptr [0x109207f4] */
  ECX = (r32((uint32_t)(0x109207f4)));
  /* 108ff906 push ecx */
  push32((uint32_t)(ECX));
  /* 108ff907 call 0x108ffbc0 */
  push32(0x108ff90cu); f_108ffbc0();
  /* 108ff90c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff90f push 2 */
  push32((uint32_t)(0x2u));
  /* 108ff911 mov edx, dword ptr [0x109207f4] */
  EDX = (r32((uint32_t)(0x109207f4)));
  /* 108ff917 push edx */
  push32((uint32_t)(EDX));
  /* 108ff918 call 0x108f4e10 */
  push32(0x108ff91du); f_108f4e10();
  /* 108ff91d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff920 mov dword ptr [0x109207f4], 0 */
  w32((uint32_t)(0x109207f4), (0x0u));
  /* 108ff92a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108ff92c:;
  /* 108ff92c mov esp, ebp */
  ESP = (EBP);
  /* 108ff92e pop ebp */
  EBP = (pop32());
  /* 108ff92f ret  */
  ESPCHK(0x108ff800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f930 @ 0x108ff930 (525 bytes, 200 insns) */
void f_108ff930(void) {
  FTRACE(0x108ff930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ff930 push ebp */
  push32((uint32_t)(EBP));
  /* 108ff931 mov ebp, esp */
  EBP = (ESP);
  /* 108ff933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ff936 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108ff93d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ff93f mov ax, word ptr [0x10920814] */
  AX = (r16((uint32_t)(0x10920814)));
  /* 108ff945 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108ff948 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ff94c jne 0x108ff956 */
  if (!C.zf) goto L_108ff956;
  /* 108ff94e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108ff951 jmp 0x108ffb39 */
  goto L_108ffb39;
L_108ff956:;
  /* 108ff956 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff959 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff95c push ecx */
  push32((uint32_t)(ECX));
  /* 108ff95d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 108ff95f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff962 push edx */
  push32((uint32_t)(EDX));
  /* 108ff963 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff965 call 0x10902540 */
  push32(0x108ff96au); f_10902540();
  /* 108ff96a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff96d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff970 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff972 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ff975 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff978 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff97b push edx */
  push32((uint32_t)(EDX));
  /* 108ff97c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 108ff97e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff981 push eax */
  push32((uint32_t)(EAX));
  /* 108ff982 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff984 call 0x10902540 */
  push32(0x108ff989u); f_10902540();
  /* 108ff989 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff98c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff98f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff991 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ff994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff997 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff99a push edx */
  push32((uint32_t)(EDX));
  /* 108ff99b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 108ff99d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff9a0 push eax */
  push32((uint32_t)(EAX));
  /* 108ff9a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff9a3 call 0x10902540 */
  push32(0x108ff9a8u); f_10902540();
  /* 108ff9a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff9ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff9ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff9b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ff9b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff9b6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff9b9 push edx */
  push32((uint32_t)(EDX));
  /* 108ff9ba push 0x17 */
  push32((uint32_t)(0x17u));
  /* 108ff9bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff9bf push eax */
  push32((uint32_t)(EAX));
  /* 108ff9c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff9c2 call 0x10902540 */
  push32(0x108ff9c7u); f_10902540();
  /* 108ff9c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff9ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff9cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff9cf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ff9d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff9d5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff9d8 push edx */
  push32((uint32_t)(EDX));
  /* 108ff9d9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 108ff9db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ff9de push eax */
  push32((uint32_t)(EAX));
  /* 108ff9df push 1 */
  push32((uint32_t)(0x1u));
  /* 108ff9e1 call 0x10902540 */
  push32(0x108ff9e6u); f_10902540();
  /* 108ff9e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ff9e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ff9ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ff9ee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ff9f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ff9f4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 108ff9f7 push eax */
  push32((uint32_t)(EAX));
  /* 108ff9f8 call 0x108ffb40 */
  push32(0x108ff9fdu); f_108ffb40();
  /* 108ff9fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffa03 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa06 push ecx */
  push32((uint32_t)(ECX));
  /* 108ffa07 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 108ffa09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffa0c push edx */
  push32((uint32_t)(EDX));
  /* 108ffa0d push 1 */
  push32((uint32_t)(0x1u));
  /* 108ffa0f call 0x10902540 */
  push32(0x108ffa14u); f_10902540();
  /* 108ffa14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ffa1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffa1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ffa1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffa22 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa25 push edx */
  push32((uint32_t)(EDX));
  /* 108ffa26 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 108ffa28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffa2b push eax */
  push32((uint32_t)(EAX));
  /* 108ffa2c push 1 */
  push32((uint32_t)(0x1u));
  /* 108ffa2e call 0x10902540 */
  push32(0x108ffa33u); f_10902540();
  /* 108ffa33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ffa39 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffa3b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ffa3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffa41 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa44 push edx */
  push32((uint32_t)(EDX));
  /* 108ffa45 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 108ffa47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffa4a push eax */
  push32((uint32_t)(EAX));
  /* 108ffa4b push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffa4d call 0x10902540 */
  push32(0x108ffa52u); f_10902540();
  /* 108ffa52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ffa58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffa5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ffa5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffa60 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa63 push edx */
  push32((uint32_t)(EDX));
  /* 108ffa64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108ffa66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffa69 push eax */
  push32((uint32_t)(EAX));
  /* 108ffa6a push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffa6c call 0x10902540 */
  push32(0x108ffa71u); f_10902540();
  /* 108ffa71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ffa77 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffa79 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ffa7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffa7f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa82 push edx */
  push32((uint32_t)(EDX));
  /* 108ffa83 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 108ffa85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffa88 push eax */
  push32((uint32_t)(EAX));
  /* 108ffa89 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffa8b call 0x10902540 */
  push32(0x108ffa90u); f_10902540();
  /* 108ffa90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffa93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ffa96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffa98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ffa9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffa9e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffaa1 push edx */
  push32((uint32_t)(EDX));
  /* 108ffaa2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 108ffaa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffaa7 push eax */
  push32((uint32_t)(EAX));
  /* 108ffaa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffaaa call 0x10902540 */
  push32(0x108ffaafu); f_10902540();
  /* 108ffaaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffab2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ffab5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffab7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ffaba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffabd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffac0 push edx */
  push32((uint32_t)(EDX));
  /* 108ffac1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 108ffac3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffac6 push eax */
  push32((uint32_t)(EAX));
  /* 108ffac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffac9 call 0x10902540 */
  push32(0x108ffaceu); f_10902540();
  /* 108fface add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffad1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ffad4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffad6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ffad9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffadc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffadf push edx */
  push32((uint32_t)(EDX));
  /* 108ffae0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 108ffae2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffae5 push eax */
  push32((uint32_t)(EAX));
  /* 108ffae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffae8 call 0x10902540 */
  push32(0x108ffaedu); f_10902540();
  /* 108ffaed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffaf0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ffaf3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffaf5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ffaf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffafb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffafe push edx */
  push32((uint32_t)(EDX));
  /* 108ffaff push 0x52 */
  push32((uint32_t)(0x52u));
  /* 108ffb01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffb04 push eax */
  push32((uint32_t)(EAX));
  /* 108ffb05 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffb07 call 0x10902540 */
  push32(0x108ffb0cu); f_10902540();
  /* 108ffb0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffb0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ffb12 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffb14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ffb17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffb1a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffb1d push edx */
  push32((uint32_t)(EDX));
  /* 108ffb1e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 108ffb20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffb23 push eax */
  push32((uint32_t)(EAX));
  /* 108ffb24 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffb26 call 0x10902540 */
  push32(0x108ffb2bu); f_10902540();
  /* 108ffb2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffb2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108ffb31 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffb33 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108ffb36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108ffb39:;
  /* 108ffb39 mov esp, ebp */
  ESP = (EBP);
  /* 108ffb3b pop ebp */
  EBP = (pop32());
  /* 108ffb3c ret  */
  ESPCHK(0x108ff930u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x108ffb40 (125 bytes, 49 insns) */
void f_108ffb40(void) {
  FTRACE(0x108ffb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ffb40 push ebp */
  push32((uint32_t)(EBP));
  /* 108ffb41 mov ebp, esp */
  EBP = (ESP);
  /* 108ffb43 push ecx */
  push32((uint32_t)(ECX));
L_108ffb44:;
  /* 108ffb44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffb47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108ffb4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108ffb4c je 0x108ffbb9 */
  if (C.zf) goto L_108ffbb9;
  /* 108ffb4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffb51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108ffb54 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffb57 jl 0x108ffb7d */
  if ((C.sf!=C.of)) goto L_108ffb7d;
  /* 108ffb59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffb5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108ffb5f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffb62 jg 0x108ffb7d */
  if ((!C.zf&&C.sf==C.of)) goto L_108ffb7d;
  /* 108ffb64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffb67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108ffb6a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ffb6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffb70 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108ffb72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffb75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffb78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108ffb7b jmp 0x108ffbb7 */
  goto L_108ffbb7;
L_108ffb7d:;
  /* 108ffb7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffb80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108ffb83 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffb86 jne 0x108ffbae */
  if (!C.zf) goto L_108ffbae;
  /* 108ffb88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffb8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108ffb8e:;
  /* 108ffb8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffb91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffb94 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108ffb97 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108ffb99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffb9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffb9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108ffba2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ffba5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108ffba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108ffbaa jne 0x108ffb8e */
  if (!C.zf) goto L_108ffb8e;
  /* 108ffbac jmp 0x108ffbb7 */
  goto L_108ffbb7;
L_108ffbae:;
  /* 108ffbae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffbb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffbb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_108ffbb7:;
  /* 108ffbb7 jmp 0x108ffb44 */
  goto L_108ffb44;
L_108ffbb9:;
  /* 108ffbb9 mov esp, ebp */
  ESP = (EBP);
  /* 108ffbbb pop ebp */
  EBP = (pop32());
  /* 108ffbbc ret  */
  ESPCHK(0x108ffb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbc0 @ 0x108ffbc0 (147 bytes, 52 insns) */
void f_108ffbc0(void) {
  FTRACE(0x108ffbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ffbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 108ffbc1 mov ebp, esp */
  EBP = (ESP);
  /* 108ffbc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffbc7 jne 0x108ffbce */
  if (!C.zf) goto L_108ffbce;
  /* 108ffbc9 jmp 0x108ffc51 */
  goto L_108ffc51;
L_108ffbce:;
  /* 108ffbce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffbd1 cmp dword ptr [eax + 0xc], 0x10920850 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10920850u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffbd8 je 0x108ffc51 */
  if (C.zf) goto L_108ffc51;
  /* 108ffbda push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffbdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffbdf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108ffbe2 push edx */
  push32((uint32_t)(EDX));
  /* 108ffbe3 call 0x108f4e10 */
  push32(0x108ffbe8u); f_108f4e10();
  /* 108ffbe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffbeb push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffbed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffbf0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108ffbf3 push ecx */
  push32((uint32_t)(ECX));
  /* 108ffbf4 call 0x108f4e10 */
  push32(0x108ffbf9u); f_108f4e10();
  /* 108ffbf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffbfc push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffbfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffc01 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108ffc04 push eax */
  push32((uint32_t)(EAX));
  /* 108ffc05 call 0x108f4e10 */
  push32(0x108ffc0au); f_108f4e10();
  /* 108ffc0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffc0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffc12 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108ffc15 push edx */
  push32((uint32_t)(EDX));
  /* 108ffc16 call 0x108f4e10 */
  push32(0x108ffc1bu); f_108f4e10();
  /* 108ffc1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffc1e push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffc20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffc23 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 108ffc26 push ecx */
  push32((uint32_t)(ECX));
  /* 108ffc27 call 0x108f4e10 */
  push32(0x108ffc2cu); f_108f4e10();
  /* 108ffc2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffc2f push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffc31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffc34 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 108ffc37 push eax */
  push32((uint32_t)(EAX));
  /* 108ffc38 call 0x108f4e10 */
  push32(0x108ffc3du); f_108f4e10();
  /* 108ffc3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffc40 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffc42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ffc45 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 108ffc48 push edx */
  push32((uint32_t)(EDX));
  /* 108ffc49 call 0x108f4e10 */
  push32(0x108ffc4eu); f_108f4e10();
  /* 108ffc4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108ffc51:;
  /* 108ffc51 pop ebp */
  EBP = (pop32());
  /* 108ffc52 ret  */
  ESPCHK(0x108ffbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc60 @ 0x108ffc60 (928 bytes, 284 insns) */
void f_108ffc60(void) {
  FTRACE(0x108ffc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ffc60 push ebp */
  push32((uint32_t)(EBP));
  /* 108ffc61 mov ebp, esp */
  EBP = (ESP);
  /* 108ffc63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ffc66 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 108ffc6d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 108ffc74 cmp dword ptr [0x109207b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffc7b je 0x108fffb1 */
  if (C.zf) goto L_108fffb1;
  /* 108ffc81 cmp dword ptr [0x109207c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffc88 jne 0x108ffcb0 */
  if (!C.zf) goto L_108ffcb0;
  /* 108ffc8a push 0x109207c8 */
  push32((uint32_t)(0x109207c8u));
  /* 108ffc8f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 108ffc94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ffc96 mov ax, word ptr [0x1092080c] */
  AX = (r16((uint32_t)(0x1092080c)));
  /* 108ffc9c push eax */
  push32((uint32_t)(EAX));
  /* 108ffc9d push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffc9f call 0x10902540 */
  push32(0x108ffca4u); f_10902540();
  /* 108ffca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108ffca9 je 0x108ffcb0 */
  if (C.zf) goto L_108ffcb0;
  /* 108ffcab jmp 0x108fff72 */
  goto L_108fff72;
L_108ffcb0:;
  /* 108ffcb0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 108ffcb2 push 0x1091c16c */
  push32((uint32_t)(0x1091c16cu));
  /* 108ffcb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffcb9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 108ffcbe call 0x108f4380 */
  push32(0x108ffcc3u); f_108f4380();
  /* 108ffcc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffcc6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 108ffcc9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 108ffccb push 0x1091c16c */
  push32((uint32_t)(0x1091c16cu));
  /* 108ffcd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffcd2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 108ffcd7 call 0x108f4380 */
  push32(0x108ffcdcu); f_108f4380();
  /* 108ffcdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffcdf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108ffce2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 108ffce4 push 0x1091c16c */
  push32((uint32_t)(0x1091c16cu));
  /* 108ffce9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffceb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 108ffcf0 call 0x108f4380 */
  push32(0x108ffcf5u); f_108f4380();
  /* 108ffcf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffcf8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 108ffcfb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 108ffcfd push 0x1091c16c */
  push32((uint32_t)(0x1091c16cu));
  /* 108ffd02 push 2 */
  push32((uint32_t)(0x2u));
  /* 108ffd04 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 108ffd09 call 0x108f4380 */
  push32(0x108ffd0eu); f_108f4380();
  /* 108ffd0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffd11 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108ffd14 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffd18 je 0x108ffd2c */
  if (C.zf) goto L_108ffd2c;
  /* 108ffd1a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffd1e je 0x108ffd2c */
  if (C.zf) goto L_108ffd2c;
  /* 108ffd20 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffd24 je 0x108ffd2c */
  if (C.zf) goto L_108ffd2c;
  /* 108ffd26 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffd2a jne 0x108ffd31 */
  if (!C.zf) goto L_108ffd31;
L_108ffd2c:;
  /* 108ffd2c jmp 0x108fff72 */
  goto L_108fff72;
L_108ffd31:;
  /* 108ffd31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108ffd34 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108ffd37 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108ffd3e jmp 0x108ffd49 */
  goto L_108ffd49;
L_108ffd40:;
  /* 108ffd40 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108ffd43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffd46 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_108ffd49:;
  /* 108ffd49 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffd50 jge 0x108ffd65 */
  if ((C.sf==C.of)) goto L_108ffd65;
  /* 108ffd52 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffd55 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 108ffd58 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 108ffd5a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffd5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffd60 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108ffd63 jmp 0x108ffd40 */
  goto L_108ffd40;
L_108ffd65:;
  /* 108ffd65 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 108ffd68 push eax */
  push32((uint32_t)(EAX));
  /* 108ffd69 mov ecx, dword ptr [0x109207c8] */
  ECX = (r32((uint32_t)(0x109207c8)));
  /* 108ffd6f push ecx */
  push32((uint32_t)(ECX));
  /* 108ffd70 call dword ptr [0x1092331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092331c))), 0x108ffd76u);
  /* 108ffd76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108ffd78 jne 0x108ffd7f */
  if (!C.zf) goto L_108ffd7f;
  /* 108ffd7a jmp 0x108fff72 */
  goto L_108fff72;
L_108ffd7f:;
  /* 108ffd7f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffd83 jbe 0x108ffd8a */
  if ((C.cf||C.zf)) goto L_108ffd8a;
  /* 108ffd85 jmp 0x108fff72 */
  goto L_108fff72;
L_108ffd8a:;
  /* 108ffd8a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108ffd8d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108ffd93 mov dword ptr [0x1091eea4], edx */
  w32((uint32_t)(0x1091eea4), (EDX));
  /* 108ffd99 cmp dword ptr [0x1091eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1091eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffda0 jle 0x108ffdf9 */
  if ((C.zf||C.sf!=C.of)) goto L_108ffdf9;
  /* 108ffda2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 108ffda5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108ffda8 jmp 0x108ffdb3 */
  goto L_108ffdb3;
L_108ffdaa:;
  /* 108ffdaa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffdad add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffdb0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_108ffdb3:;
  /* 108ffdb3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffdb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ffdb8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108ffdba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108ffdbc je 0x108ffdf9 */
  if (C.zf) goto L_108ffdf9;
  /* 108ffdbe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffdc1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ffdc3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 108ffdc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108ffdc8 je 0x108ffdf9 */
  if (C.zf) goto L_108ffdf9;
  /* 108ffdca mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffdcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffdcf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108ffdd1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108ffdd4 jmp 0x108ffddf */
  goto L_108ffddf;
L_108ffdd6:;
  /* 108ffdd6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108ffdd9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffddc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_108ffddf:;
  /* 108ffddf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffde2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffde4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 108ffde7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffdea jg 0x108ffdf7 */
  if ((!C.zf&&C.sf==C.of)) goto L_108ffdf7;
  /* 108ffdec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108ffdef add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffdf2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108ffdf5 jmp 0x108ffdd6 */
  goto L_108ffdd6;
L_108ffdf7:;
  /* 108ffdf7 jmp 0x108ffdaa */
  goto L_108ffdaa;
L_108ffdf9:;
  /* 108ffdf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffdfb push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffdfd push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffdff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108ffe02 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffe05 push eax */
  push32((uint32_t)(EAX));
  /* 108ffe06 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108ffe0b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108ffe0e push ecx */
  push32((uint32_t)(ECX));
  /* 108ffe0f push 1 */
  push32((uint32_t)(0x1u));
  /* 108ffe11 call 0x108fc5b0 */
  push32(0x108ffe16u); f_108fc5b0();
  /* 108ffe16 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffe19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108ffe1b jne 0x108ffe22 */
  if (!C.zf) goto L_108ffe22;
  /* 108ffe1d jmp 0x108fff72 */
  goto L_108fff72;
L_108ffe22:;
  /* 108ffe22 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108ffe25 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 108ffe2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108ffe2d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108ffe30 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108ffe37 jmp 0x108ffe42 */
  goto L_108ffe42;
L_108ffe39:;
  /* 108ffe39 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108ffe3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffe3f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_108ffe42:;
  /* 108ffe42 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffe49 jge 0x108ffe60 */
  if ((C.sf==C.of)) goto L_108ffe60;
  /* 108ffe4b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108ffe4e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 108ffe52 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 108ffe55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108ffe58 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffe5b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108ffe5e jmp 0x108ffe39 */
  goto L_108ffe39;
L_108ffe60:;
  /* 108ffe60 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffe62 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ffe64 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108ffe67 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffe6a push edx */
  push32((uint32_t)(EDX));
  /* 108ffe6b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108ffe70 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108ffe73 push eax */
  push32((uint32_t)(EAX));
  /* 108ffe74 push 1 */
  push32((uint32_t)(0x1u));
  /* 108ffe76 call 0x109027e0 */
  push32(0x108ffe7bu); f_109027e0();
  /* 108ffe7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffe7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108ffe80 jne 0x108ffe87 */
  if (!C.zf) goto L_108ffe87;
  /* 108ffe82 jmp 0x108fff72 */
  goto L_108fff72;
L_108ffe87:;
  /* 108ffe87 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108ffe8a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 108ffe8f cmp dword ptr [0x1091eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1091eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffe96 jle 0x108ffef3 */
  if ((C.zf||C.sf!=C.of)) goto L_108ffef3;
  /* 108ffe98 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 108ffe9b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108ffe9e jmp 0x108ffea9 */
  goto L_108ffea9;
L_108ffea0:;
  /* 108ffea0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffea3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffea6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_108ffea9:;
  /* 108ffea9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffeac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ffeae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108ffeb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108ffeb2 je 0x108ffef3 */
  if (C.zf) goto L_108ffef3;
  /* 108ffeb4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffeb7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108ffeb9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 108ffebc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108ffebe je 0x108ffef3 */
  if (C.zf) goto L_108ffef3;
  /* 108ffec0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ffec5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108ffec7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108ffeca jmp 0x108ffed5 */
  goto L_108ffed5;
L_108ffecc:;
  /* 108ffecc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108ffecf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffed2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_108ffed5:;
  /* 108ffed5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108ffed8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ffeda mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108ffedd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ffee0 jg 0x108ffef1 */
  if ((!C.zf&&C.sf==C.of)) goto L_108ffef1;
  /* 108ffee2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108ffee5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108ffee8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 108ffeef jmp 0x108ffecc */
  goto L_108ffecc;
L_108ffef1:;
  /* 108ffef1 jmp 0x108ffea0 */
  goto L_108ffea0;
L_108ffef3:;
  /* 108ffef3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108ffef6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ffef9 mov dword ptr [0x1091ec98], eax */
  w32((uint32_t)(0x1091ec98), (EAX));
  /* 108ffefe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108fff01 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108fff04 mov dword ptr [0x1091ec9c], ecx */
  w32((uint32_t)(0x1091ec9c), (ECX));
  /* 108fff0a cmp dword ptr [0x109207f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fff11 je 0x108fff24 */
  if (C.zf) goto L_108fff24;
  /* 108fff13 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fff15 mov edx, dword ptr [0x109207f8] */
  EDX = (r32((uint32_t)(0x109207f8)));
  /* 108fff1b push edx */
  push32((uint32_t)(EDX));
  /* 108fff1c call 0x108f4e10 */
  push32(0x108fff21u); f_108f4e10();
  /* 108fff21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fff24:;
  /* 108fff24 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108fff27 mov dword ptr [0x109207f8], eax */
  w32((uint32_t)(0x109207f8), (EAX));
  /* 108fff2c cmp dword ptr [0x109207fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108fff33 je 0x108fff46 */
  if (C.zf) goto L_108fff46;
  /* 108fff35 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fff37 mov ecx, dword ptr [0x109207fc] */
  ECX = (r32((uint32_t)(0x109207fc)));
  /* 108fff3d push ecx */
  push32((uint32_t)(ECX));
  /* 108fff3e call 0x108f4e10 */
  push32(0x108fff43u); f_108f4e10();
  /* 108fff43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108fff46:;
  /* 108fff46 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108fff49 mov dword ptr [0x109207fc], edx */
  w32((uint32_t)(0x109207fc), (EDX));
  /* 108fff4f push 2 */
  push32((uint32_t)(0x2u));
  /* 108fff51 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108fff54 push eax */
  push32((uint32_t)(EAX));
  /* 108fff55 call 0x108f4e10 */
  push32(0x108fff5au); f_108f4e10();
  /* 108fff5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fff5d push 2 */
  push32((uint32_t)(0x2u));
  /* 108fff5f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fff62 push ecx */
  push32((uint32_t)(ECX));
  /* 108fff63 call 0x108f4e10 */
  push32(0x108fff68u); f_108f4e10();
  /* 108fff68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fff6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108fff6d jmp 0x108ffffc */
  goto L_108ffffc;
L_108fff72:;
  /* 108fff72 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fff74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108fff77 push edx */
  push32((uint32_t)(EDX));
  /* 108fff78 call 0x108f4e10 */
  push32(0x108fff7du); f_108f4e10();
  /* 108fff7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fff80 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fff82 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108fff85 push eax */
  push32((uint32_t)(EAX));
  /* 108fff86 call 0x108f4e10 */
  push32(0x108fff8bu); f_108f4e10();
  /* 108fff8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fff8e push 2 */
  push32((uint32_t)(0x2u));
  /* 108fff90 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108fff93 push ecx */
  push32((uint32_t)(ECX));
  /* 108fff94 call 0x108f4e10 */
  push32(0x108fff99u); f_108f4e10();
  /* 108fff99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fff9c push 2 */
  push32((uint32_t)(0x2u));
  /* 108fff9e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108fffa1 push edx */
  push32((uint32_t)(EDX));
  /* 108fffa2 call 0x108f4e10 */
  push32(0x108fffa7u); f_108f4e10();
  /* 108fffa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fffaa mov eax, 1 */
  EAX = (0x1u);
  /* 108fffaf jmp 0x108ffffc */
  goto L_108ffffc;
L_108fffb1:;
  /* 108fffb1 mov dword ptr [0x1091ec98], 0x1091eca2 */
  w32((uint32_t)(0x1091ec98), (0x1091eca2u));
  /* 108fffbb mov dword ptr [0x1091ec9c], 0x1091eca2 */
  w32((uint32_t)(0x1091ec9c), (0x1091eca2u));
  /* 108fffc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fffc7 mov eax, dword ptr [0x109207f8] */
  EAX = (r32((uint32_t)(0x109207f8)));
  /* 108fffcc push eax */
  push32((uint32_t)(EAX));
  /* 108fffcd call 0x108f4e10 */
  push32(0x108fffd2u); f_108f4e10();
  /* 108fffd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fffd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108fffd7 mov ecx, dword ptr [0x109207fc] */
  ECX = (r32((uint32_t)(0x109207fc)));
  /* 108fffdd push ecx */
  push32((uint32_t)(ECX));
  /* 108fffde call 0x108f4e10 */
  push32(0x108fffe3u); f_108f4e10();
  /* 108fffe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108fffe6 mov dword ptr [0x109207f8], 0 */
  w32((uint32_t)(0x109207f8), (0x0u));
  /* 108ffff0 mov dword ptr [0x109207fc], 0 */
  w32((uint32_t)(0x109207fc), (0x0u));
  /* 108ffffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108ffffc:;
  /* 108ffffc mov esp, ebp */
  ESP = (EBP);
  /* 108ffffe pop ebp */
  EBP = (pop32());
  /* 108fffff ret  */
  ESPCHK(0x108ffc60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010000 @ 0x10900000 (7 bytes, 5 insns) */
void f_10900000(void) {
  FTRACE(0x10900000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900000 push ebp */
  push32((uint32_t)(EBP));
  /* 10900001 mov ebp, esp */
  EBP = (ESP);
  /* 10900003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10900005 pop ebp */
  EBP = (pop32());
  /* 10900006 ret  */
  ESPCHK(0x10900000u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10900010 (129 bytes, 56 insns) */
void f_10900010(void) {
  FTRACE(0x10900010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900010 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10900014 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10900018 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1090001e jne 0x1090005c */
  if (!C.zf) goto L_1090005c;
L_10900020:;
  /* 10900020 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10900022 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10900024 jne 0x10900054 */
  if (!C.zf) goto L_10900054;
  /* 10900026 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10900028 je 0x10900050 */
  if (C.zf) goto L_10900050;
  /* 1090002a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1090002d jne 0x10900054 */
  if (!C.zf) goto L_10900054;
  /* 1090002f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10900031 je 0x10900050 */
  if (C.zf) goto L_10900050;
  /* 10900033 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10900036 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10900039 jne 0x10900054 */
  if (!C.zf) goto L_10900054;
  /* 1090003b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1090003d je 0x10900050 */
  if (C.zf) goto L_10900050;
  /* 1090003f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10900042 jne 0x10900054 */
  if (!C.zf) goto L_10900054;
  /* 10900044 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900047 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090004a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1090004c jne 0x10900020 */
  if (!C.zf) goto L_10900020;
  /* 1090004e mov edi, edi */
  EDI = (EDI);
L_10900050:;
  /* 10900050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10900052 ret  */
  ESPCHK(0x10900010u, _esp0);
  ESP += 4; return;
  /* 10900053 nop  */
  /* nop */
L_10900054:;
  /* 10900054 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900056 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10900058 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10900059 ret  */
  ESPCHK(0x10900010u, _esp0);
  ESP += 4; return;
  /* 1090005a mov edi, edi */
  EDI = (EDI);
L_1090005c:;
  /* 1090005c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10900062 je 0x10900078 */
  if (C.zf) goto L_10900078;
  /* 10900064 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10900066 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10900067 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10900069 jne 0x10900054 */
  if (!C.zf) goto L_10900054;
  /* 1090006b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1090006c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1090006e je 0x10900050 */
  if (C.zf) goto L_10900050;
  /* 10900070 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10900076 je 0x10900020 */
  if (C.zf) goto L_10900020;
L_10900078:;
  /* 10900078 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1090007b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090007e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10900080 jne 0x10900054 */
  if (!C.zf) goto L_10900054;
  /* 10900082 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10900084 je 0x10900050 */
  if (C.zf) goto L_10900050;
  /* 10900086 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10900089 jne 0x10900054 */
  if (!C.zf) goto L_10900054;
  /* 1090008b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1090008d je 0x10900050 */
  if (C.zf) goto L_10900050;
  /* 1090008f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900092 jmp 0x10900020 */
  goto L_10900020;
}

/* FUN_100100a0 @ 0x109000a0 (62 bytes, 35 insns) */
void f_109000a0(void) {
  FTRACE(0x109000a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109000a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109000a1 mov ebp, esp */
  EBP = (ESP);
  /* 109000a3 push esi */
  push32((uint32_t)(ESI));
  /* 109000a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109000a6 push eax */
  push32((uint32_t)(EAX));
  /* 109000a7 push eax */
  push32((uint32_t)(EAX));
  /* 109000a8 push eax */
  push32((uint32_t)(EAX));
  /* 109000a9 push eax */
  push32((uint32_t)(EAX));
  /* 109000aa push eax */
  push32((uint32_t)(EAX));
  /* 109000ab push eax */
  push32((uint32_t)(EAX));
  /* 109000ac push eax */
  push32((uint32_t)(EAX));
  /* 109000ad push eax */
  push32((uint32_t)(EAX));
  /* 109000ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109000b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109000b4:;
  /* 109000b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109000b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109000b8 je 0x109000c1 */
  if (C.zf) goto L_109000c1;
  /* 109000ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 109000bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x109000bb");
  /* 109000bf jmp 0x109000b4 */
  goto L_109000b4;
L_109000c1:;
  /* 109000c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 109000c4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109000c7 nop  */
  /* nop */
L_109000c8:;
  /* 109000c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109000c9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109000cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109000cd je 0x109000d6 */
  if (C.zf) goto L_109000d6;
  /* 109000cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109000d0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x109000d0");
  /* 109000d4 jae 0x109000c8 */
  if (!C.cf) goto L_109000c8;
L_109000d6:;
  /* 109000d6 mov eax, ecx */
  EAX = (ECX);
  /* 109000d8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109000db pop esi */
  ESI = (pop32());
  /* 109000dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109000dd ret  */
  ESPCHK(0x109000a0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x109000e0 (56 bytes, 31 insns) */
void f_109000e0(void) {
  FTRACE(0x109000e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109000e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109000e1 mov ebp, esp */
  EBP = (ESP);
  /* 109000e3 push edi */
  push32((uint32_t)(EDI));
  /* 109000e4 push esi */
  push32((uint32_t)(ESI));
  /* 109000e5 push ebx */
  push32((uint32_t)(EBX));
  /* 109000e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109000e9 jecxz 0x10900111 */
  x86_unimpl("jecxz @ 0x109000e9");
  /* 109000eb mov ebx, ecx */
  EBX = (ECX);
  /* 109000ed mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 109000f0 mov esi, edi */
  ESI = (EDI);
  /* 109000f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109000f4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 109000f6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109000f8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109000fa mov edi, esi */
  EDI = (ESI);
  /* 109000fc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109000ff repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10900101 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10900104 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10900106 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10900109 ja 0x1090010f */
  if ((!C.cf&&!C.zf)) goto L_1090010f;
  /* 1090010b je 0x10900111 */
  if (C.zf) goto L_10900111;
  /* 1090010d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1090010e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1090010f:;
  /* 1090010f not ecx */
  ECX = (~(ECX));
L_10900111:;
  /* 10900111 mov eax, ecx */
  EAX = (ECX);
  /* 10900113 pop ebx */
  EBX = (pop32());
  /* 10900114 pop esi */
  ESI = (pop32());
  /* 10900115 pop edi */
  EDI = (pop32());
  /* 10900116 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10900117 ret  */
  ESPCHK(0x109000e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010120 @ 0x10900120 (58 bytes, 32 insns) */
void f_10900120(void) {
  FTRACE(0x10900120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900120 push ebp */
  push32((uint32_t)(EBP));
  /* 10900121 mov ebp, esp */
  EBP = (ESP);
  /* 10900123 push esi */
  push32((uint32_t)(ESI));
  /* 10900124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10900126 push eax */
  push32((uint32_t)(EAX));
  /* 10900127 push eax */
  push32((uint32_t)(EAX));
  /* 10900128 push eax */
  push32((uint32_t)(EAX));
  /* 10900129 push eax */
  push32((uint32_t)(EAX));
  /* 1090012a push eax */
  push32((uint32_t)(EAX));
  /* 1090012b push eax */
  push32((uint32_t)(EAX));
  /* 1090012c push eax */
  push32((uint32_t)(EAX));
  /* 1090012d push eax */
  push32((uint32_t)(EAX));
  /* 1090012e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10900131 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10900134:;
  /* 10900134 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10900136 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10900138 je 0x10900141 */
  if (C.zf) goto L_10900141;
  /* 1090013a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1090013b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1090013b");
  /* 1090013f jmp 0x10900134 */
  goto L_10900134;
L_10900141:;
  /* 10900141 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10900144:;
  /* 10900144 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10900146 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10900148 je 0x10900154 */
  if (C.zf) goto L_10900154;
  /* 1090014a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1090014b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1090014b");
  /* 1090014f jae 0x10900144 */
  if (!C.cf) goto L_10900144;
  /* 10900151 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10900154:;
  /* 10900154 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900157 pop esi */
  ESI = (pop32());
  /* 10900158 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10900159 ret  */
  ESPCHK(0x10900120u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x10900160 (512 bytes, 147 insns) */
void f_10900160(void) {
  FTRACE(0x10900160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900160 push ebp */
  push32((uint32_t)(EBP));
  /* 10900161 mov ebp, esp */
  EBP = (ESP);
  /* 10900163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900166 cmp dword ptr [0x10920844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090016d jne 0x10900192 */
  if (!C.zf) goto L_10900192;
  /* 1090016f call 0x10900c30 */
  push32(0x10900174u); f_10900c30();
  /* 10900174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900176 je 0x10900182 */
  if (C.zf) goto L_10900182;
  /* 10900178 mov eax, dword ptr [0x109232e0] */
  EAX = (r32((uint32_t)(0x109232e0)));
  /* 1090017d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10900180 jmp 0x10900189 */
  goto L_10900189;
L_10900182:;
  /* 10900182 mov dword ptr [ebp - 8], 0x10900c80 */
  w32((uint32_t)(EBP + -0x8), (0x10900c80u));
L_10900189:;
  /* 10900189 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090018c mov dword ptr [0x10920844], ecx */
  w32((uint32_t)(0x10920844), (ECX));
L_10900192:;
  /* 10900192 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900196 jne 0x109001a2 */
  if (!C.zf) goto L_109001a2;
  /* 10900198 call 0x10900a80 */
  push32(0x1090019du); f_10900a80();
  /* 1090019d jmp 0x1090026e */
  goto L_1090026e;
L_109001a2:;
  /* 109001a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109001a5 mov dword ptr [0x10920834], edx */
  w32((uint32_t)(0x10920834), (EDX));
  /* 109001ab cmp dword ptr [0x10920834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109001b2 je 0x109001d4 */
  if (C.zf) goto L_109001d4;
  /* 109001b4 mov eax, dword ptr [0x10920834] */
  EAX = (r32((uint32_t)(0x10920834)));
  /* 109001b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109001bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109001be je 0x109001d4 */
  if (C.zf) goto L_109001d4;
  /* 109001c0 push 0x10920834 */
  push32((uint32_t)(0x10920834u));
  /* 109001c5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109001c7 push 0x1091fa90 */
  push32((uint32_t)(0x1091fa90u));
  /* 109001cc call 0x10900360 */
  push32(0x109001d1u); f_10900360();
  /* 109001d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109001d4:;
  /* 109001d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109001d7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109001da mov dword ptr [0x10920838], edx */
  w32((uint32_t)(0x10920838), (EDX));
  /* 109001e0 cmp dword ptr [0x10920838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109001e7 je 0x10900209 */
  if (C.zf) goto L_10900209;
  /* 109001e9 mov eax, dword ptr [0x10920838] */
  EAX = (r32((uint32_t)(0x10920838)));
  /* 109001ee movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109001f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109001f3 je 0x10900209 */
  if (C.zf) goto L_10900209;
  /* 109001f5 push 0x10920838 */
  push32((uint32_t)(0x10920838u));
  /* 109001fa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109001fc push 0x1091f9d8 */
  push32((uint32_t)(0x1091f9d8u));
  /* 10900201 call 0x10900360 */
  push32(0x10900206u); f_10900360();
  /* 10900206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10900209:;
  /* 10900209 mov dword ptr [0x1092083c], 0 */
  w32((uint32_t)(0x1092083c), (0x0u));
  /* 10900213 cmp dword ptr [0x10920834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090021a je 0x1090024d */
  if (C.zf) goto L_1090024d;
  /* 1090021c mov edx, dword ptr [0x10920834] */
  EDX = (r32((uint32_t)(0x10920834)));
  /* 10900222 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10900225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900227 je 0x1090024d */
  if (C.zf) goto L_1090024d;
  /* 10900229 cmp dword ptr [0x10920838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900230 je 0x10900246 */
  if (C.zf) goto L_10900246;
  /* 10900232 mov ecx, dword ptr [0x10920838] */
  ECX = (r32((uint32_t)(0x10920838)));
  /* 10900238 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1090023b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1090023d je 0x10900246 */
  if (C.zf) goto L_10900246;
  /* 1090023f call 0x109003f0 */
  push32(0x10900244u); f_109003f0();
  /* 10900244 jmp 0x1090024b */
  goto L_1090024b;
L_10900246:;
  /* 10900246 call 0x109007e0 */
  push32(0x1090024bu); f_109007e0();
L_1090024b:;
  /* 1090024b jmp 0x1090026e */
  goto L_1090026e;
L_1090024d:;
  /* 1090024d cmp dword ptr [0x10920838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900254 je 0x10900269 */
  if (C.zf) goto L_10900269;
  /* 10900256 mov eax, dword ptr [0x10920838] */
  EAX = (r32((uint32_t)(0x10920838)));
  /* 1090025b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1090025e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10900260 je 0x10900269 */
  if (C.zf) goto L_10900269;
  /* 10900262 call 0x10900980 */
  push32(0x10900267u); f_10900980();
  /* 10900267 jmp 0x1090026e */
  goto L_1090026e;
L_10900269:;
  /* 10900269 call 0x10900a80 */
  push32(0x1090026eu); f_10900a80();
L_1090026e:;
  /* 1090026e cmp dword ptr [0x1092083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900275 jne 0x1090027e */
  if (!C.zf) goto L_1090027e;
  /* 10900277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10900279 jmp 0x1090035c */
  goto L_1090035c;
L_1090027e:;
  /* 1090027e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900281 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900287 push edx */
  push32((uint32_t)(EDX));
  /* 10900288 call 0x10900ab0 */
  push32(0x1090028du); f_10900ab0();
  /* 1090028d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900290 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10900293 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900297 je 0x109002ac */
  if (C.zf) goto L_109002ac;
  /* 10900299 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090029c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109002a1 push eax */
  push32((uint32_t)(EAX));
  /* 109002a2 call dword ptr [0x109232e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232e4))), 0x109002a8u);
  /* 109002a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109002aa jne 0x109002b3 */
  if (!C.zf) goto L_109002b3;
L_109002ac:;
  /* 109002ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109002ae jmp 0x1090035c */
  goto L_1090035c;
L_109002b3:;
  /* 109002b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109002b5 mov ecx, dword ptr [0x10920824] */
  ECX = (r32((uint32_t)(0x10920824)));
  /* 109002bb push ecx */
  push32((uint32_t)(ECX));
  /* 109002bc call dword ptr [0x109232e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232e8))), 0x109002c2u);
  /* 109002c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109002c4 jne 0x109002cd */
  if (!C.zf) goto L_109002cd;
  /* 109002c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109002c8 jmp 0x1090035c */
  goto L_1090035c;
L_109002cd:;
  /* 109002cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109002d1 je 0x109002f8 */
  if (C.zf) goto L_109002f8;
  /* 109002d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109002d6 mov ax, word ptr [0x10920824] */
  AX = (r16((uint32_t)(0x10920824)));
  /* 109002dc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 109002df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109002e2 mov dx, word ptr [0x10920840] */
  DX = (r16((uint32_t)(0x10920840)));
  /* 109002e9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 109002ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109002f0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 109002f4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_109002f8:;
  /* 109002f8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109002fc je 0x10900357 */
  if (C.zf) goto L_10900357;
  /* 109002fe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10900300 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10900303 push edx */
  push32((uint32_t)(EDX));
  /* 10900304 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10900309 mov eax, dword ptr [0x10920824] */
  EAX = (r32((uint32_t)(0x10920824)));
  /* 1090030e push eax */
  push32((uint32_t)(EAX));
  /* 1090030f call dword ptr [0x10920844] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920844))), 0x10900315u);
  /* 10900315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900317 jne 0x1090031d */
  if (!C.zf) goto L_1090031d;
  /* 10900319 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090031b jmp 0x1090035c */
  goto L_1090035c;
L_1090031d:;
  /* 1090031d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1090031f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10900322 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900325 push ecx */
  push32((uint32_t)(ECX));
  /* 10900326 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1090032b mov edx, dword ptr [0x10920840] */
  EDX = (r32((uint32_t)(0x10920840)));
  /* 10900331 push edx */
  push32((uint32_t)(EDX));
  /* 10900332 call dword ptr [0x10920844] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920844))), 0x10900338u);
  /* 10900338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1090033a jne 0x10900340 */
  if (!C.zf) goto L_10900340;
  /* 1090033c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090033e jmp 0x1090035c */
  goto L_1090035c;
L_10900340:;
  /* 10900340 push 0xa */
  push32((uint32_t)(0xau));
  /* 10900342 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10900345 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090034a push eax */
  push32((uint32_t)(EAX));
  /* 1090034b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090034e push ecx */
  push32((uint32_t)(ECX));
  /* 1090034f call 0x108f6ec0 */
  push32(0x10900354u); f_108f6ec0();
  /* 10900354 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10900357:;
  /* 10900357 mov eax, 1 */
  EAX = (0x1u);
L_1090035c:;
  /* 1090035c mov esp, ebp */
  ESP = (EBP);
  /* 1090035e pop ebp */
  EBP = (pop32());
  /* 1090035f ret  */
  ESPCHK(0x10900160u, _esp0);
  ESP += 4; return;
}

/* FUN_10010360 @ 0x10900360 (130 bytes, 47 insns) */
void f_10900360(void) {
  FTRACE(0x10900360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900360 push ebp */
  push32((uint32_t)(EBP));
  /* 10900361 mov ebp, esp */
  EBP = (ESP);
  /* 10900363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900366 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1090036d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10900374:;
  /* 10900374 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900377 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090037a jg 0x109003de */
  if ((!C.zf&&C.sf==C.of)) goto L_109003de;
  /* 1090037c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900380 je 0x109003de */
  if (C.zf) goto L_109003de;
  /* 10900382 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900385 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900388 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10900389 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1090038b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1090038d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10900390 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10900393 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900396 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10900399 push eax */
  push32((uint32_t)(EAX));
  /* 1090039a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090039d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1090039f push edx */
  push32((uint32_t)(EDX));
  /* 109003a0 call 0x10902a50 */
  push32(0x109003a5u); f_10902a50();
  /* 109003a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109003a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109003ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109003af jne 0x109003c2 */
  if (!C.zf) goto L_109003c2;
  /* 109003b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109003b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109003b7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 109003bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109003be mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109003c0 jmp 0x109003dc */
  goto L_109003dc;
L_109003c2:;
  /* 109003c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109003c6 jge 0x109003d3 */
  if ((C.sf==C.of)) goto L_109003d3;
  /* 109003c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109003cb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109003ce mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 109003d1 jmp 0x109003dc */
  goto L_109003dc;
L_109003d3:;
  /* 109003d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109003d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109003d9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_109003dc:;
  /* 109003dc jmp 0x10900374 */
  goto L_10900374;
L_109003de:;
  /* 109003de mov esp, ebp */
  ESP = (EBP);
  /* 109003e0 pop ebp */
  EBP = (pop32());
  /* 109003e1 ret  */
  ESPCHK(0x10900360u, _esp0);
  ESP += 4; return;
}

/* FUN_100103f0 @ 0x109003f0 (186 bytes, 50 insns) */
void f_109003f0(void) {
  FTRACE(0x109003f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109003f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109003f1 mov ebp, esp */
  EBP = (ESP);
  /* 109003f3 push ecx */
  push32((uint32_t)(ECX));
  /* 109003f4 mov eax, dword ptr [0x10920834] */
  EAX = (r32((uint32_t)(0x10920834)));
  /* 109003f9 push eax */
  push32((uint32_t)(EAX));
  /* 109003fa call 0x108f71b0 */
  push32(0x109003ffu); f_108f71b0();
  /* 109003ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900402 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10900404 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900407 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1090040a mov dword ptr [0x10920830], ecx */
  w32((uint32_t)(0x10920830), (ECX));
  /* 10900410 mov edx, dword ptr [0x10920838] */
  EDX = (r32((uint32_t)(0x10920838)));
  /* 10900416 push edx */
  push32((uint32_t)(EDX));
  /* 10900417 call 0x108f71b0 */
  push32(0x1090041cu); f_108f71b0();
  /* 1090041c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090041f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10900421 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900424 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10900427 mov dword ptr [0x10920828], ecx */
  w32((uint32_t)(0x10920828), (ECX));
  /* 1090042d mov dword ptr [0x10920824], 0 */
  w32((uint32_t)(0x10920824), (0x0u));
  /* 10900437 cmp dword ptr [0x10920830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090043e je 0x10900449 */
  if (C.zf) goto L_10900449;
  /* 10900440 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10900447 jmp 0x1090045b */
  goto L_1090045b;
L_10900449:;
  /* 10900449 mov edx, dword ptr [0x10920834] */
  EDX = (r32((uint32_t)(0x10920834)));
  /* 1090044f push edx */
  push32((uint32_t)(EDX));
  /* 10900450 call 0x10900e90 */
  push32(0x10900455u); f_10900e90();
  /* 10900455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1090045b:;
  /* 1090045b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090045e mov dword ptr [0x1092082c], eax */
  w32((uint32_t)(0x1092082c), (EAX));
  /* 10900463 push 1 */
  push32((uint32_t)(0x1u));
  /* 10900465 push 0x109004b0 */
  push32((uint32_t)(0x109004b0u));
  /* 1090046a call dword ptr [0x109232dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232dc))), 0x10900470u);
  /* 10900470 mov ecx, dword ptr [0x1092083c] */
  ECX = (r32((uint32_t)(0x1092083c)));
  /* 10900476 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1090047c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1090047e je 0x1090049c */
  if (C.zf) goto L_1090049c;
  /* 10900480 mov edx, dword ptr [0x1092083c] */
  EDX = (r32((uint32_t)(0x1092083c)));
  /* 10900486 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1090048c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1090048e je 0x1090049c */
  if (C.zf) goto L_1090049c;
  /* 10900490 mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 10900495 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10900498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1090049a jne 0x109004a6 */
  if (!C.zf) goto L_109004a6;
L_1090049c:;
  /* 1090049c mov dword ptr [0x1092083c], 0 */
  w32((uint32_t)(0x1092083c), (0x0u));
L_109004a6:;
  /* 109004a6 mov esp, ebp */
  ESP = (EBP);
  /* 109004a8 pop ebp */
  EBP = (pop32());
  /* 109004a9 ret  */
  ESPCHK(0x109003f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100104b0 @ 0x109004b0 (804 bytes, 220 insns) */
void f_109004b0(void) {
  FTRACE(0x109004b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109004b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109004b1 mov ebp, esp */
  EBP = (ESP);
  /* 109004b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109004b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109004b9 push eax */
  push32((uint32_t)(EAX));
  /* 109004ba call 0x10900e10 */
  push32(0x109004bfu); f_10900e10();
  /* 109004bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109004c2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 109004c5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 109004c7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109004ca push ecx */
  push32((uint32_t)(ECX));
  /* 109004cb mov edx, dword ptr [0x10920828] */
  EDX = (r32((uint32_t)(0x10920828)));
  /* 109004d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109004d3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109004d5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 109004db add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109004e1 push edx */
  push32((uint32_t)(EDX));
  /* 109004e2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109004e5 push eax */
  push32((uint32_t)(EAX));
  /* 109004e6 call dword ptr [0x10920844] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920844))), 0x109004ecu);
  /* 109004ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109004ee jne 0x10900504 */
  if (!C.zf) goto L_10900504;
  /* 109004f0 mov dword ptr [0x1092083c], 0 */
  w32((uint32_t)(0x1092083c), (0x0u));
  /* 109004fa mov eax, 1 */
  EAX = (0x1u);
  /* 109004ff jmp 0x109007ce */
  goto L_109007ce;
L_10900504:;
  /* 10900504 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10900507 push ecx */
  push32((uint32_t)(ECX));
  /* 10900508 mov edx, dword ptr [0x10920838] */
  EDX = (r32((uint32_t)(0x10920838)));
  /* 1090050e push edx */
  push32((uint32_t)(EDX));
  /* 1090050f call 0x10902a50 */
  push32(0x10900514u); f_10902a50();
  /* 10900514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900517 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900519 jne 0x1090063f */
  if (!C.zf) goto L_1090063f;
  /* 1090051f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10900521 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10900524 push eax */
  push32((uint32_t)(EAX));
  /* 10900525 mov ecx, dword ptr [0x10920830] */
  ECX = (r32((uint32_t)(0x10920830)));
  /* 1090052b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1090052d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1090052f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10900535 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090053b push ecx */
  push32((uint32_t)(ECX));
  /* 1090053c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1090053f push edx */
  push32((uint32_t)(EDX));
  /* 10900540 call dword ptr [0x10920844] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920844))), 0x10900546u);
  /* 10900546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900548 jne 0x1090055e */
  if (!C.zf) goto L_1090055e;
  /* 1090054a mov dword ptr [0x1092083c], 0 */
  w32((uint32_t)(0x1092083c), (0x0u));
  /* 10900554 mov eax, 1 */
  EAX = (0x1u);
  /* 10900559 jmp 0x109007ce */
  goto L_109007ce;
L_1090055e:;
  /* 1090055e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10900561 push eax */
  push32((uint32_t)(EAX));
  /* 10900562 mov ecx, dword ptr [0x10920834] */
  ECX = (r32((uint32_t)(0x10920834)));
  /* 10900568 push ecx */
  push32((uint32_t)(ECX));
  /* 10900569 call 0x10902a50 */
  push32(0x1090056eu); f_10902a50();
  /* 1090056e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900573 jne 0x109005a0 */
  if (!C.zf) goto L_109005a0;
  /* 10900575 mov edx, dword ptr [0x1092083c] */
  EDX = (r32((uint32_t)(0x1092083c)));
  /* 1090057b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10900581 mov dword ptr [0x1092083c], edx */
  w32((uint32_t)(0x1092083c), (EDX));
  /* 10900587 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1090058a mov dword ptr [0x10920840], eax */
  w32((uint32_t)(0x10920840), (EAX));
  /* 1090058f mov ecx, dword ptr [0x10920840] */
  ECX = (r32((uint32_t)(0x10920840)));
  /* 10900595 mov dword ptr [0x10920824], ecx */
  w32((uint32_t)(0x10920824), (ECX));
  /* 1090059b jmp 0x1090063f */
  goto L_1090063f;
L_109005a0:;
  /* 109005a0 mov edx, dword ptr [0x1092083c] */
  EDX = (r32((uint32_t)(0x1092083c)));
  /* 109005a6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 109005a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109005ab jne 0x1090063f */
  if (!C.zf) goto L_1090063f;
  /* 109005b1 cmp dword ptr [0x1092082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109005b8 je 0x1090060d */
  if (C.zf) goto L_1090060d;
  /* 109005ba mov eax, dword ptr [0x1092082c] */
  EAX = (r32((uint32_t)(0x1092082c)));
  /* 109005bf push eax */
  push32((uint32_t)(EAX));
  /* 109005c0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109005c3 push ecx */
  push32((uint32_t)(ECX));
  /* 109005c4 mov edx, dword ptr [0x10920834] */
  EDX = (r32((uint32_t)(0x10920834)));
  /* 109005ca push edx */
  push32((uint32_t)(EDX));
  /* 109005cb call 0x10902b20 */
  push32(0x109005d0u); f_10902b20();
  /* 109005d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109005d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109005d5 jne 0x1090060d */
  if (!C.zf) goto L_1090060d;
  /* 109005d7 mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 109005dc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 109005de mov dword ptr [0x1092083c], eax */
  w32((uint32_t)(0x1092083c), (EAX));
  /* 109005e3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109005e6 mov dword ptr [0x10920840], ecx */
  w32((uint32_t)(0x10920840), (ECX));
  /* 109005ec mov edx, dword ptr [0x10920834] */
  EDX = (r32((uint32_t)(0x10920834)));
  /* 109005f2 push edx */
  push32((uint32_t)(EDX));
  /* 109005f3 call 0x108f71b0 */
  push32(0x109005f8u); f_108f71b0();
  /* 109005f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109005fb cmp eax, dword ptr [0x1092082c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1092082c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900601 jne 0x1090060b */
  if (!C.zf) goto L_1090060b;
  /* 10900603 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10900606 mov dword ptr [0x10920824], eax */
  w32((uint32_t)(0x10920824), (EAX));
L_1090060b:;
  /* 1090060b jmp 0x1090063f */
  goto L_1090063f;
L_1090060d:;
  /* 1090060d mov ecx, dword ptr [0x1092083c] */
  ECX = (r32((uint32_t)(0x1092083c)));
  /* 10900613 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10900616 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10900618 jne 0x1090063f */
  if (!C.zf) goto L_1090063f;
  /* 1090061a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1090061d push edx */
  push32((uint32_t)(EDX));
  /* 1090061e call 0x10900b50 */
  push32(0x10900623u); f_10900b50();
  /* 10900623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900628 je 0x1090063f */
  if (C.zf) goto L_1090063f;
  /* 1090062a mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 1090062f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10900631 mov dword ptr [0x1092083c], eax */
  w32((uint32_t)(0x1092083c), (EAX));
  /* 10900636 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10900639 mov dword ptr [0x10920840], ecx */
  w32((uint32_t)(0x10920840), (ECX));
L_1090063f:;
  /* 1090063f mov edx, dword ptr [0x1092083c] */
  EDX = (r32((uint32_t)(0x1092083c)));
  /* 10900645 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1090064b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900651 je 0x109007c1 */
  if (C.zf) goto L_109007c1;
  /* 10900657 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10900659 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1090065c push eax */
  push32((uint32_t)(EAX));
  /* 1090065d mov ecx, dword ptr [0x10920830] */
  ECX = (r32((uint32_t)(0x10920830)));
  /* 10900663 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10900665 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900667 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1090066d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900673 push ecx */
  push32((uint32_t)(ECX));
  /* 10900674 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10900677 push edx */
  push32((uint32_t)(EDX));
  /* 10900678 call dword ptr [0x10920844] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920844))), 0x1090067eu);
  /* 1090067e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900680 jne 0x10900696 */
  if (!C.zf) goto L_10900696;
  /* 10900682 mov dword ptr [0x1092083c], 0 */
  w32((uint32_t)(0x1092083c), (0x0u));
  /* 1090068c mov eax, 1 */
  EAX = (0x1u);
  /* 10900691 jmp 0x109007ce */
  goto L_109007ce;
L_10900696:;
  /* 10900696 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10900699 push eax */
  push32((uint32_t)(EAX));
  /* 1090069a mov ecx, dword ptr [0x10920834] */
  ECX = (r32((uint32_t)(0x10920834)));
  /* 109006a0 push ecx */
  push32((uint32_t)(ECX));
  /* 109006a1 call 0x10902a50 */
  push32(0x109006a6u); f_10902a50();
  /* 109006a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109006a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109006ab jne 0x10900760 */
  if (!C.zf) goto L_10900760;
  /* 109006b1 mov edx, dword ptr [0x1092083c] */
  EDX = (r32((uint32_t)(0x1092083c)));
  /* 109006b7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 109006ba mov dword ptr [0x1092083c], edx */
  w32((uint32_t)(0x1092083c), (EDX));
  /* 109006c0 cmp dword ptr [0x10920830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109006c7 je 0x109006ea */
  if (C.zf) goto L_109006ea;
  /* 109006c9 mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 109006ce or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 109006d1 mov dword ptr [0x1092083c], eax */
  w32((uint32_t)(0x1092083c), (EAX));
  /* 109006d6 cmp dword ptr [0x10920824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109006dd jne 0x109006e8 */
  if (!C.zf) goto L_109006e8;
  /* 109006df mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109006e2 mov dword ptr [0x10920824], ecx */
  w32((uint32_t)(0x10920824), (ECX));
L_109006e8:;
  /* 109006e8 jmp 0x1090075e */
  goto L_1090075e;
L_109006ea:;
  /* 109006ea cmp dword ptr [0x1092082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109006f1 je 0x1090073f */
  if (C.zf) goto L_1090073f;
  /* 109006f3 mov edx, dword ptr [0x10920834] */
  EDX = (r32((uint32_t)(0x10920834)));
  /* 109006f9 push edx */
  push32((uint32_t)(EDX));
  /* 109006fa call 0x108f71b0 */
  push32(0x109006ffu); f_108f71b0();
  /* 109006ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900702 cmp eax, dword ptr [0x1092082c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1092082c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900708 jne 0x1090073f */
  if (!C.zf) goto L_1090073f;
  /* 1090070a push 1 */
  push32((uint32_t)(0x1u));
  /* 1090070c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1090070f push eax */
  push32((uint32_t)(EAX));
  /* 10900710 call 0x10900ba0 */
  push32(0x10900715u); f_10900ba0();
  /* 10900715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1090071a je 0x1090073d */
  if (C.zf) goto L_1090073d;
  /* 1090071c mov ecx, dword ptr [0x1092083c] */
  ECX = (r32((uint32_t)(0x1092083c)));
  /* 10900722 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10900725 mov dword ptr [0x1092083c], ecx */
  w32((uint32_t)(0x1092083c), (ECX));
  /* 1090072b cmp dword ptr [0x10920824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900732 jne 0x1090073d */
  if (!C.zf) goto L_1090073d;
  /* 10900734 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10900737 mov dword ptr [0x10920824], edx */
  w32((uint32_t)(0x10920824), (EDX));
L_1090073d:;
  /* 1090073d jmp 0x1090075e */
  goto L_1090075e;
L_1090073f:;
  /* 1090073f mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 10900744 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10900747 mov dword ptr [0x1092083c], eax */
  w32((uint32_t)(0x1092083c), (EAX));
  /* 1090074c cmp dword ptr [0x10920824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900753 jne 0x1090075e */
  if (!C.zf) goto L_1090075e;
  /* 10900755 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10900758 mov dword ptr [0x10920824], ecx */
  w32((uint32_t)(0x10920824), (ECX));
L_1090075e:;
  /* 1090075e jmp 0x109007c1 */
  goto L_109007c1;
L_10900760:;
  /* 10900760 cmp dword ptr [0x10920830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900767 jne 0x109007c1 */
  if (!C.zf) goto L_109007c1;
  /* 10900769 cmp dword ptr [0x1092082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900770 je 0x109007c1 */
  if (C.zf) goto L_109007c1;
  /* 10900772 mov edx, dword ptr [0x1092082c] */
  EDX = (r32((uint32_t)(0x1092082c)));
  /* 10900778 push edx */
  push32((uint32_t)(EDX));
  /* 10900779 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1090077c push eax */
  push32((uint32_t)(EAX));
  /* 1090077d mov ecx, dword ptr [0x10920834] */
  ECX = (r32((uint32_t)(0x10920834)));
  /* 10900783 push ecx */
  push32((uint32_t)(ECX));
  /* 10900784 call 0x10902b20 */
  push32(0x10900789u); f_10902b20();
  /* 10900789 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090078c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1090078e jne 0x109007c1 */
  if (!C.zf) goto L_109007c1;
  /* 10900790 push 0 */
  push32((uint32_t)(0x0u));
  /* 10900792 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10900795 push edx */
  push32((uint32_t)(EDX));
  /* 10900796 call 0x10900ba0 */
  push32(0x1090079bu); f_10900ba0();
  /* 1090079b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090079e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109007a0 je 0x109007c1 */
  if (C.zf) goto L_109007c1;
  /* 109007a2 mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 109007a7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 109007aa mov dword ptr [0x1092083c], eax */
  w32((uint32_t)(0x1092083c), (EAX));
  /* 109007af cmp dword ptr [0x10920824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109007b6 jne 0x109007c1 */
  if (!C.zf) goto L_109007c1;
  /* 109007b8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109007bb mov dword ptr [0x10920824], ecx */
  w32((uint32_t)(0x10920824), (ECX));
L_109007c1:;
  /* 109007c1 mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 109007c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109007c9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109007cb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109007cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_109007ce:;
  /* 109007ce mov esp, ebp */
  ESP = (EBP);
  /* 109007d0 pop ebp */
  EBP = (pop32());
  /* 109007d1 ret 4 */
  ESPCHK(0x109004b0u, _esp0);
  ESP += 8; return;
}

/* FUN_100107e0 @ 0x109007e0 (116 bytes, 33 insns) */
void f_109007e0(void) {
  FTRACE(0x109007e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109007e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109007e1 mov ebp, esp */
  EBP = (ESP);
  /* 109007e3 push ecx */
  push32((uint32_t)(ECX));
  /* 109007e4 mov eax, dword ptr [0x10920834] */
  EAX = (r32((uint32_t)(0x10920834)));
  /* 109007e9 push eax */
  push32((uint32_t)(EAX));
  /* 109007ea call 0x108f71b0 */
  push32(0x109007efu); f_108f71b0();
  /* 109007ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109007f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109007f4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109007f7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 109007fa mov dword ptr [0x10920830], ecx */
  w32((uint32_t)(0x10920830), (ECX));
  /* 10900800 cmp dword ptr [0x10920830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900807 je 0x10900812 */
  if (C.zf) goto L_10900812;
  /* 10900809 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10900810 jmp 0x10900824 */
  goto L_10900824;
L_10900812:;
  /* 10900812 mov edx, dword ptr [0x10920834] */
  EDX = (r32((uint32_t)(0x10920834)));
  /* 10900818 push edx */
  push32((uint32_t)(EDX));
  /* 10900819 call 0x10900e90 */
  push32(0x1090081eu); f_10900e90();
  /* 1090081e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900821 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10900824:;
  /* 10900824 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10900827 mov dword ptr [0x1092082c], eax */
  w32((uint32_t)(0x1092082c), (EAX));
  /* 1090082c push 1 */
  push32((uint32_t)(0x1u));
  /* 1090082e push 0x10900860 */
  push32((uint32_t)(0x10900860u));
  /* 10900833 call dword ptr [0x109232dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232dc))), 0x10900839u);
  /* 10900839 mov ecx, dword ptr [0x1092083c] */
  ECX = (r32((uint32_t)(0x1092083c)));
  /* 1090083f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10900842 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10900844 jne 0x10900850 */
  if (!C.zf) goto L_10900850;
  /* 10900846 mov dword ptr [0x1092083c], 0 */
  w32((uint32_t)(0x1092083c), (0x0u));
L_10900850:;
  /* 10900850 mov esp, ebp */
  ESP = (EBP);
  /* 10900852 pop ebp */
  EBP = (pop32());
  /* 10900853 ret  */
  ESPCHK(0x109007e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010860 @ 0x10900860 (287 bytes, 86 insns) */
void f_10900860(void) {
  FTRACE(0x10900860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900860 push ebp */
  push32((uint32_t)(EBP));
  /* 10900861 mov ebp, esp */
  EBP = (ESP);
  /* 10900863 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900869 push eax */
  push32((uint32_t)(EAX));
  /* 1090086a call 0x10900e10 */
  push32(0x1090086fu); f_10900e10();
  /* 1090086f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900872 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10900875 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10900877 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1090087a push ecx */
  push32((uint32_t)(ECX));
  /* 1090087b mov edx, dword ptr [0x10920830] */
  EDX = (r32((uint32_t)(0x10920830)));
  /* 10900881 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10900883 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900885 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1090088b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900891 push edx */
  push32((uint32_t)(EDX));
  /* 10900892 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10900895 push eax */
  push32((uint32_t)(EAX));
  /* 10900896 call dword ptr [0x10920844] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920844))), 0x1090089cu);
  /* 1090089c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1090089e jne 0x109008b4 */
  if (!C.zf) goto L_109008b4;
  /* 109008a0 mov dword ptr [0x1092083c], 0 */
  w32((uint32_t)(0x1092083c), (0x0u));
  /* 109008aa mov eax, 1 */
  EAX = (0x1u);
  /* 109008af jmp 0x10900979 */
  goto L_10900979;
L_109008b4:;
  /* 109008b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109008b7 push ecx */
  push32((uint32_t)(ECX));
  /* 109008b8 mov edx, dword ptr [0x10920834] */
  EDX = (r32((uint32_t)(0x10920834)));
  /* 109008be push edx */
  push32((uint32_t)(EDX));
  /* 109008bf call 0x10902a50 */
  push32(0x109008c4u); f_10902a50();
  /* 109008c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109008c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109008c9 jne 0x10900909 */
  if (!C.zf) goto L_10900909;
  /* 109008cb cmp dword ptr [0x10920830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109008d2 jne 0x109008e6 */
  if (!C.zf) goto L_109008e6;
  /* 109008d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109008d6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109008d9 push eax */
  push32((uint32_t)(EAX));
  /* 109008da call 0x10900ba0 */
  push32(0x109008dfu); f_10900ba0();
  /* 109008df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109008e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109008e4 je 0x10900907 */
  if (C.zf) goto L_10900907;
L_109008e6:;
  /* 109008e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109008e9 mov dword ptr [0x10920840], ecx */
  w32((uint32_t)(0x10920840), (ECX));
  /* 109008ef mov edx, dword ptr [0x10920840] */
  EDX = (r32((uint32_t)(0x10920840)));
  /* 109008f5 mov dword ptr [0x10920824], edx */
  w32((uint32_t)(0x10920824), (EDX));
  /* 109008fb mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 10900900 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10900902 mov dword ptr [0x1092083c], eax */
  w32((uint32_t)(0x1092083c), (EAX));
L_10900907:;
  /* 10900907 jmp 0x1090096c */
  goto L_1090096c;
L_10900909:;
  /* 10900909 cmp dword ptr [0x10920830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900910 jne 0x1090096c */
  if (!C.zf) goto L_1090096c;
  /* 10900912 cmp dword ptr [0x1092082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900919 je 0x1090096c */
  if (C.zf) goto L_1090096c;
  /* 1090091b mov ecx, dword ptr [0x1092082c] */
  ECX = (r32((uint32_t)(0x1092082c)));
  /* 10900921 push ecx */
  push32((uint32_t)(ECX));
  /* 10900922 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10900925 push edx */
  push32((uint32_t)(EDX));
  /* 10900926 mov eax, dword ptr [0x10920834] */
  EAX = (r32((uint32_t)(0x10920834)));
  /* 1090092b push eax */
  push32((uint32_t)(EAX));
  /* 1090092c call 0x10902b20 */
  push32(0x10900931u); f_10902b20();
  /* 10900931 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900936 jne 0x1090096c */
  if (!C.zf) goto L_1090096c;
  /* 10900938 push 0 */
  push32((uint32_t)(0x0u));
  /* 1090093a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1090093d push ecx */
  push32((uint32_t)(ECX));
  /* 1090093e call 0x10900ba0 */
  push32(0x10900943u); f_10900ba0();
  /* 10900943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900946 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900948 je 0x1090096c */
  if (C.zf) goto L_1090096c;
  /* 1090094a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1090094d mov dword ptr [0x10920840], edx */
  w32((uint32_t)(0x10920840), (EDX));
  /* 10900953 mov eax, dword ptr [0x10920840] */
  EAX = (r32((uint32_t)(0x10920840)));
  /* 10900958 mov dword ptr [0x10920824], eax */
  w32((uint32_t)(0x10920824), (EAX));
  /* 1090095d mov ecx, dword ptr [0x1092083c] */
  ECX = (r32((uint32_t)(0x1092083c)));
  /* 10900963 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10900966 mov dword ptr [0x1092083c], ecx */
  w32((uint32_t)(0x1092083c), (ECX));
L_1090096c:;
  /* 1090096c mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 10900971 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10900974 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10900976 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900978 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10900979:;
  /* 10900979 mov esp, ebp */
  ESP = (EBP);
  /* 1090097b pop ebp */
  EBP = (pop32());
  /* 1090097c ret 4 */
  ESPCHK(0x10900860u, _esp0);
  ESP += 8; return;
}

/* FUN_10010980 @ 0x10900980 (69 bytes, 20 insns) */
void f_10900980(void) {
  FTRACE(0x10900980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900980 push ebp */
  push32((uint32_t)(EBP));
  /* 10900981 mov ebp, esp */
  EBP = (ESP);
  /* 10900983 mov eax, dword ptr [0x10920838] */
  EAX = (r32((uint32_t)(0x10920838)));
  /* 10900988 push eax */
  push32((uint32_t)(EAX));
  /* 10900989 call 0x108f71b0 */
  push32(0x1090098eu); f_108f71b0();
  /* 1090098e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900991 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10900993 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900996 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10900999 mov dword ptr [0x10920828], ecx */
  w32((uint32_t)(0x10920828), (ECX));
  /* 1090099f push 1 */
  push32((uint32_t)(0x1u));
  /* 109009a1 push 0x109009d0 */
  push32((uint32_t)(0x109009d0u));
  /* 109009a6 call dword ptr [0x109232dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232dc))), 0x109009acu);
  /* 109009ac mov edx, dword ptr [0x1092083c] */
  EDX = (r32((uint32_t)(0x1092083c)));
  /* 109009b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109009b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109009b7 jne 0x109009c3 */
  if (!C.zf) goto L_109009c3;
  /* 109009b9 mov dword ptr [0x1092083c], 0 */
  w32((uint32_t)(0x1092083c), (0x0u));
L_109009c3:;
  /* 109009c3 pop ebp */
  EBP = (pop32());
  /* 109009c4 ret  */
  ESPCHK(0x10900980u, _esp0);
  ESP += 4; return;
}

/* FUN_100109d0 @ 0x109009d0 (172 bytes, 54 insns) */
void f_109009d0(void) {
  FTRACE(0x109009d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109009d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109009d1 mov ebp, esp */
  EBP = (ESP);
  /* 109009d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109009d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109009d9 push eax */
  push32((uint32_t)(EAX));
  /* 109009da call 0x10900e10 */
  push32(0x109009dfu); f_10900e10();
  /* 109009df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109009e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 109009e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 109009e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109009ea push ecx */
  push32((uint32_t)(ECX));
  /* 109009eb mov edx, dword ptr [0x10920828] */
  EDX = (r32((uint32_t)(0x10920828)));
  /* 109009f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109009f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109009f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 109009fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900a01 push edx */
  push32((uint32_t)(EDX));
  /* 10900a02 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10900a05 push eax */
  push32((uint32_t)(EAX));
  /* 10900a06 call dword ptr [0x10920844] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920844))), 0x10900a0cu);
  /* 10900a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900a0e jne 0x10900a21 */
  if (!C.zf) goto L_10900a21;
  /* 10900a10 mov dword ptr [0x1092083c], 0 */
  w32((uint32_t)(0x1092083c), (0x0u));
  /* 10900a1a mov eax, 1 */
  EAX = (0x1u);
  /* 10900a1f jmp 0x10900a76 */
  goto L_10900a76;
L_10900a21:;
  /* 10900a21 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10900a24 push ecx */
  push32((uint32_t)(ECX));
  /* 10900a25 mov edx, dword ptr [0x10920838] */
  EDX = (r32((uint32_t)(0x10920838)));
  /* 10900a2b push edx */
  push32((uint32_t)(EDX));
  /* 10900a2c call 0x10902a50 */
  push32(0x10900a31u); f_10902a50();
  /* 10900a31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900a36 jne 0x10900a69 */
  if (!C.zf) goto L_10900a69;
  /* 10900a38 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10900a3b push eax */
  push32((uint32_t)(EAX));
  /* 10900a3c call 0x10900b50 */
  push32(0x10900a41u); f_10900b50();
  /* 10900a41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900a46 je 0x10900a69 */
  if (C.zf) goto L_10900a69;
  /* 10900a48 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10900a4b mov dword ptr [0x10920840], ecx */
  w32((uint32_t)(0x10920840), (ECX));
  /* 10900a51 mov edx, dword ptr [0x10920840] */
  EDX = (r32((uint32_t)(0x10920840)));
  /* 10900a57 mov dword ptr [0x10920824], edx */
  w32((uint32_t)(0x10920824), (EDX));
  /* 10900a5d mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 10900a62 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10900a64 mov dword ptr [0x1092083c], eax */
  w32((uint32_t)(0x1092083c), (EAX));
L_10900a69:;
  /* 10900a69 mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 10900a6e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10900a71 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10900a73 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900a75 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10900a76:;
  /* 10900a76 mov esp, ebp */
  ESP = (EBP);
  /* 10900a78 pop ebp */
  EBP = (pop32());
  /* 10900a79 ret 4 */
  ESPCHK(0x109009d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010a80 @ 0x10900a80 (43 bytes, 11 insns) */
void f_10900a80(void) {
  FTRACE(0x10900a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10900a81 mov ebp, esp */
  EBP = (ESP);
  /* 10900a83 mov eax, dword ptr [0x1092083c] */
  EAX = (r32((uint32_t)(0x1092083c)));
  /* 10900a88 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10900a8d mov dword ptr [0x1092083c], eax */
  w32((uint32_t)(0x1092083c), (EAX));
  /* 10900a92 call dword ptr [0x109232d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232d8))), 0x10900a98u);
  /* 10900a98 mov dword ptr [0x10920840], eax */
  w32((uint32_t)(0x10920840), (EAX));
  /* 10900a9d mov ecx, dword ptr [0x10920840] */
  ECX = (r32((uint32_t)(0x10920840)));
  /* 10900aa3 mov dword ptr [0x10920824], ecx */
  w32((uint32_t)(0x10920824), (ECX));
  /* 10900aa9 pop ebp */
  EBP = (pop32());
  /* 10900aaa ret  */
  ESPCHK(0x10900a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ab0 @ 0x10900ab0 (155 bytes, 57 insns) */
void f_10900ab0(void) {
  FTRACE(0x10900ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10900ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10900ab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900ab6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900aba je 0x10900adb */
  if (C.zf) goto L_10900adb;
  /* 10900abc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900abf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10900ac2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10900ac4 je 0x10900adb */
  if (C.zf) goto L_10900adb;
  /* 10900ac6 push 0x1091c7fc */
  push32((uint32_t)(0x1091c7fcu));
  /* 10900acb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900ace push edx */
  push32((uint32_t)(EDX));
  /* 10900acf call 0x10900010 */
  push32(0x10900ad4u); f_10900010();
  /* 10900ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900ad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900ad9 jne 0x10900b03 */
  if (!C.zf) goto L_10900b03;
L_10900adb:;
  /* 10900adb push 8 */
  push32((uint32_t)(0x8u));
  /* 10900add lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10900ae0 push eax */
  push32((uint32_t)(EAX));
  /* 10900ae1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10900ae6 mov ecx, dword ptr [0x10920840] */
  ECX = (r32((uint32_t)(0x10920840)));
  /* 10900aec push ecx */
  push32((uint32_t)(ECX));
  /* 10900aed call dword ptr [0x10920844] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920844))), 0x10900af3u);
  /* 10900af3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900af5 jne 0x10900afb */
  if (!C.zf) goto L_10900afb;
  /* 10900af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10900af9 jmp 0x10900b47 */
  goto L_10900b47;
L_10900afb:;
  /* 10900afb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10900afe mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10900b01 jmp 0x10900b3b */
  goto L_10900b3b;
L_10900b03:;
  /* 10900b03 push 0x1091c7f8 */
  push32((uint32_t)(0x1091c7f8u));
  /* 10900b08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900b0b push eax */
  push32((uint32_t)(EAX));
  /* 10900b0c call 0x10900010 */
  push32(0x10900b11u); f_10900010();
  /* 10900b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900b16 jne 0x10900b3b */
  if (!C.zf) goto L_10900b3b;
  /* 10900b18 push 8 */
  push32((uint32_t)(0x8u));
  /* 10900b1a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10900b1d push ecx */
  push32((uint32_t)(ECX));
  /* 10900b1e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10900b20 mov edx, dword ptr [0x10920840] */
  EDX = (r32((uint32_t)(0x10920840)));
  /* 10900b26 push edx */
  push32((uint32_t)(EDX));
  /* 10900b27 call dword ptr [0x10920844] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920844))), 0x10900b2du);
  /* 10900b2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900b2f jne 0x10900b35 */
  if (!C.zf) goto L_10900b35;
  /* 10900b31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10900b33 jmp 0x10900b47 */
  goto L_10900b47;
L_10900b35:;
  /* 10900b35 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10900b38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10900b3b:;
  /* 10900b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900b3e push ecx */
  push32((uint32_t)(ECX));
  /* 10900b3f call 0x10902c30 */
  push32(0x10900b44u); f_10902c30();
  /* 10900b44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10900b47:;
  /* 10900b47 mov esp, ebp */
  ESP = (EBP);
  /* 10900b49 pop ebp */
  EBP = (pop32());
  /* 10900b4a ret  */
  ESPCHK(0x10900ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b50 @ 0x10900b50 (79 bytes, 26 insns) */
void f_10900b50(void) {
  FTRACE(0x10900b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10900b51 mov ebp, esp */
  EBP = (ESP);
  /* 10900b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900b56 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10900b5a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10900b5e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10900b65 jmp 0x10900b70 */
  goto L_10900b70;
L_10900b67:;
  /* 10900b67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10900b6a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900b6d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10900b70:;
  /* 10900b70 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900b74 jae 0x10900b96 */
  if (!C.cf) goto L_10900b96;
  /* 10900b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10900b79 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10900b7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10900b82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10900b84 mov cx, word ptr [eax*2 + 0x1091f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1091f9c4)));
  /* 10900b8c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900b8e jne 0x10900b94 */
  if (!C.zf) goto L_10900b94;
  /* 10900b90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10900b92 jmp 0x10900b9b */
  goto L_10900b9b;
L_10900b94:;
  /* 10900b94 jmp 0x10900b67 */
  goto L_10900b67;
L_10900b96:;
  /* 10900b96 mov eax, 1 */
  EAX = (0x1u);
L_10900b9b:;
  /* 10900b9b mov esp, ebp */
  ESP = (EBP);
  /* 10900b9d pop ebp */
  EBP = (pop32());
  /* 10900b9e ret  */
  ESPCHK(0x10900b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ba0 @ 0x10900ba0 (135 bytes, 48 insns) */
void f_10900ba0(void) {
  FTRACE(0x10900ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10900ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10900ba3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900ba6 push esi */
  push32((uint32_t)(ESI));
  /* 10900ba7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900baa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10900baf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10900bb4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10900bb9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10900bbc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10900bc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10900bc4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10900bc6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10900bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10900bca push 1 */
  push32((uint32_t)(0x1u));
  /* 10900bcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10900bcf push edx */
  push32((uint32_t)(EDX));
  /* 10900bd0 call dword ptr [0x10920844] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920844))), 0x10900bd6u);
  /* 10900bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900bd8 jne 0x10900bde */
  if (!C.zf) goto L_10900bde;
  /* 10900bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10900bdc jmp 0x10900c22 */
  goto L_10900c22;
L_10900bde:;
  /* 10900bde lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10900be1 push eax */
  push32((uint32_t)(EAX));
  /* 10900be2 call 0x10900e10 */
  push32(0x10900be7u); f_10900e10();
  /* 10900be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900bea cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900bed je 0x10900c1d */
  if (C.zf) goto L_10900c1d;
  /* 10900bef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900bf3 je 0x10900c1d */
  if (C.zf) goto L_10900c1d;
  /* 10900bf5 mov ecx, dword ptr [0x10920834] */
  ECX = (r32((uint32_t)(0x10920834)));
  /* 10900bfb push ecx */
  push32((uint32_t)(ECX));
  /* 10900bfc call 0x10900e90 */
  push32(0x10900c01u); f_10900e90();
  /* 10900c01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900c04 mov esi, eax */
  ESI = (EAX);
  /* 10900c06 mov edx, dword ptr [0x10920834] */
  EDX = (r32((uint32_t)(0x10920834)));
  /* 10900c0c push edx */
  push32((uint32_t)(EDX));
  /* 10900c0d call 0x108f71b0 */
  push32(0x10900c12u); f_108f71b0();
  /* 10900c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900c15 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900c17 jne 0x10900c1d */
  if (!C.zf) goto L_10900c1d;
  /* 10900c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10900c1b jmp 0x10900c22 */
  goto L_10900c22;
L_10900c1d:;
  /* 10900c1d mov eax, 1 */
  EAX = (0x1u);
L_10900c22:;
  /* 10900c22 pop esi */
  ESI = (pop32());
  /* 10900c23 mov esp, ebp */
  ESP = (EBP);
  /* 10900c25 pop ebp */
  EBP = (pop32());
  /* 10900c26 ret  */
  ESPCHK(0x10900ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c30 @ 0x10900c30 (77 bytes, 18 insns) */
void f_10900c30(void) {
  FTRACE(0x10900c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10900c31 mov ebp, esp */
  EBP = (ESP);
  /* 10900c33 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900c39 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10900c43 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10900c49 push eax */
  push32((uint32_t)(EAX));
  /* 10900c4a call dword ptr [0x109232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232d4))), 0x10900c50u);
  /* 10900c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900c52 je 0x10900c69 */
  if (C.zf) goto L_10900c69;
  /* 10900c54 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900c5b jne 0x10900c69 */
  if (!C.zf) goto L_10900c69;
  /* 10900c5d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10900c67 jmp 0x10900c73 */
  goto L_10900c73;
L_10900c69:;
  /* 10900c69 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10900c73:;
  /* 10900c73 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10900c79 mov esp, ebp */
  ESP = (EBP);
  /* 10900c7b pop ebp */
  EBP = (pop32());
  /* 10900c7c ret  */
  ESPCHK(0x10900c30u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10900c80 (388 bytes, 118 insns) */
void f_10900c80(void) {
  FTRACE(0x10900c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10900c81 mov ebp, esp */
  EBP = (ESP);
  /* 10900c83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900c86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10900c8d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10900c94 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10900c9b:;
  /* 10900c9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10900c9e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900ca1 jg 0x10900de8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10900de8;
  /* 10900ca7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10900caa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900cad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10900cae sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900cb0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10900cb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10900cb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900cb8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10900cbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900cbe cmp edx, dword ptr [ecx + 0x1091f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1091f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900cc4 jne 0x10900dbe */
  if (!C.zf) goto L_10900dbe;
  /* 10900cca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10900ccd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10900cd0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900cd4 ja 0x10900cf7 */
  if ((!C.cf&&!C.zf)) goto L_10900cf7;
  /* 10900cd6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900cda je 0x10900d69 */
  if (C.zf) goto L_10900d69;
  /* 10900ce0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900ce4 je 0x10900d14 */
  if (C.zf) goto L_10900d14;
  /* 10900ce6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900cea je 0x10900d36 */
  if (C.zf) goto L_10900d36;
  /* 10900cec cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900cf0 je 0x10900d58 */
  if (C.zf) goto L_10900d58;
  /* 10900cf2 jmp 0x10900d88 */
  goto L_10900d88;
L_10900cf7:;
  /* 10900cf7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900cfe je 0x10900d25 */
  if (C.zf) goto L_10900d25;
  /* 10900d00 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900d07 je 0x10900d47 */
  if (C.zf) goto L_10900d47;
  /* 10900d09 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900d10 je 0x10900d7a */
  if (C.zf) goto L_10900d7a;
  /* 10900d12 jmp 0x10900d88 */
  goto L_10900d88;
L_10900d14:;
  /* 10900d14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900d17 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10900d1a add ecx, 0x1091f524 */
  { uint32_t _a=(ECX),_b=(0x1091f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900d20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10900d23 jmp 0x10900d88 */
  goto L_10900d88;
L_10900d25:;
  /* 10900d25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900d28 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10900d2b mov eax, dword ptr [edx + 0x1091f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1091f52c)));
  /* 10900d31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10900d34 jmp 0x10900d88 */
  goto L_10900d88;
L_10900d36:;
  /* 10900d36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900d39 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10900d3c add ecx, 0x1091f530 */
  { uint32_t _a=(ECX),_b=(0x1091f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900d42 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10900d45 jmp 0x10900d88 */
  goto L_10900d88;
L_10900d47:;
  /* 10900d47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900d4a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10900d4d mov eax, dword ptr [edx + 0x1091f534] */
  EAX = (r32((uint32_t)(EDX + 0x1091f534)));
  /* 10900d53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10900d56 jmp 0x10900d88 */
  goto L_10900d88;
L_10900d58:;
  /* 10900d58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900d5b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10900d5e add ecx, 0x1091f538 */
  { uint32_t _a=(ECX),_b=(0x1091f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900d64 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10900d67 jmp 0x10900d88 */
  goto L_10900d88;
L_10900d69:;
  /* 10900d69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900d6c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10900d6f add edx, 0x1091f53c */
  { uint32_t _a=(EDX),_b=(0x1091f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900d75 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10900d78 jmp 0x10900d88 */
  goto L_10900d88;
L_10900d7a:;
  /* 10900d7a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900d7d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10900d80 add eax, 0x1091f544 */
  { uint32_t _a=(EAX),_b=(0x1091f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900d85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10900d88:;
  /* 10900d88 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900d8c je 0x10900d94 */
  if (C.zf) goto L_10900d94;
  /* 10900d8e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900d92 jge 0x10900d96 */
  if ((C.sf==C.of)) goto L_10900d96;
L_10900d94:;
  /* 10900d94 jmp 0x10900de8 */
  goto L_10900de8;
L_10900d96:;
  /* 10900d96 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10900d99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900d9c push ecx */
  push32((uint32_t)(ECX));
  /* 10900d9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10900da0 push edx */
  push32((uint32_t)(EDX));
  /* 10900da1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10900da4 push eax */
  push32((uint32_t)(EAX));
  /* 10900da5 call 0x108f7ba0 */
  push32(0x10900daau); f_108f7ba0();
  /* 10900daa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900dad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10900db0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900db3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10900db7 mov eax, 1 */
  EAX = (0x1u);
  /* 10900dbc jmp 0x10900dfe */
  goto L_10900dfe;
L_10900dbe:;
  /* 10900dbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900dc1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10900dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900dc7 cmp eax, dword ptr [edx + 0x1091f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1091f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900dcd jae 0x10900dda */
  if (!C.cf) goto L_10900dda;
  /* 10900dcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900dd2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900dd5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10900dd8 jmp 0x10900de3 */
  goto L_10900de3;
L_10900dda:;
  /* 10900dda mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10900ddd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900de0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10900de3:;
  /* 10900de3 jmp 0x10900c9b */
  goto L_10900c9b;
L_10900de8:;
  /* 10900de8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10900deb push eax */
  push32((uint32_t)(EAX));
  /* 10900dec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10900def push ecx */
  push32((uint32_t)(ECX));
  /* 10900df0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10900df3 push edx */
  push32((uint32_t)(EDX));
  /* 10900df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900df7 push eax */
  push32((uint32_t)(EAX));
  /* 10900df8 call dword ptr [0x109232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232e0))), 0x10900dfeu);
L_10900dfe:;
  /* 10900dfe mov esp, ebp */
  ESP = (EBP);
  /* 10900e00 pop ebp */
  EBP = (pop32());
  /* 10900e01 ret 0x10 */
  ESPCHK(0x10900c80u, _esp0);
  ESP += 20; return;
}

/* FUN_10010e10 @ 0x10900e10 (118 bytes, 42 insns) */
void f_10900e10(void) {
  FTRACE(0x10900e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10900e11 mov ebp, esp */
  EBP = (ESP);
  /* 10900e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900e16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10900e1d:;
  /* 10900e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900e20 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10900e22 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10900e25 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10900e29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900e2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900e2f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10900e32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10900e34 je 0x10900e7f */
  if (C.zf) goto L_10900e7f;
  /* 10900e36 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10900e3a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900e3d jl 0x10900e52 */
  if ((C.sf!=C.of)) goto L_10900e52;
  /* 10900e3f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10900e43 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900e46 jg 0x10900e52 */
  if ((!C.zf&&C.sf==C.of)) goto L_10900e52;
  /* 10900e48 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10900e4b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10900e4d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10900e50 jmp 0x10900e6c */
  goto L_10900e6c;
L_10900e52:;
  /* 10900e52 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10900e56 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900e59 jl 0x10900e6c */
  if ((C.sf!=C.of)) goto L_10900e6c;
  /* 10900e5b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10900e5f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900e62 jg 0x10900e6c */
  if ((!C.zf&&C.sf==C.of)) goto L_10900e6c;
  /* 10900e64 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10900e67 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10900e69 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10900e6c:;
  /* 10900e6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10900e6f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10900e72 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10900e76 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10900e7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10900e7d jmp 0x10900e1d */
  goto L_10900e1d;
L_10900e7f:;
  /* 10900e7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10900e82 mov esp, ebp */
  ESP = (EBP);
  /* 10900e84 pop ebp */
  EBP = (pop32());
  /* 10900e85 ret  */
  ESPCHK(0x10900e10u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10900e90 (101 bytes, 36 insns) */
void f_10900e90(void) {
  FTRACE(0x10900e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10900e91 mov ebp, esp */
  EBP = (ESP);
  /* 10900e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10900e96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10900e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900ea0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10900ea2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10900ea5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900ea8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900eab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10900eae:;
  /* 10900eae movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10900eb2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900eb5 jl 0x10900ec0 */
  if ((C.sf!=C.of)) goto L_10900ec0;
  /* 10900eb7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10900ebb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900ebe jle 0x10900ed2 */
  if ((C.zf||C.sf!=C.of)) goto L_10900ed2;
L_10900ec0:;
  /* 10900ec0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10900ec4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900ec7 jl 0x10900eee */
  if ((C.sf!=C.of)) goto L_10900eee;
  /* 10900ec9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10900ecd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900ed0 jg 0x10900eee */
  if ((!C.zf&&C.sf==C.of)) goto L_10900eee;
L_10900ed2:;
  /* 10900ed2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10900ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900ed8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10900edb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900ede mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10900ee0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10900ee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900ee6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10900ee9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10900eec jmp 0x10900eae */
  goto L_10900eae;
L_10900eee:;
  /* 10900eee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10900ef1 mov esp, ebp */
  ESP = (EBP);
  /* 10900ef3 pop ebp */
  EBP = (pop32());
  /* 10900ef4 ret  */
  ESPCHK(0x10900e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f00 @ 0x10900f00 (122 bytes, 39 insns) */
void f_10900f00(void) {
  FTRACE(0x10900f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10900f01 mov ebp, esp */
  EBP = (ESP);
  /* 10900f03 push ecx */
  push32((uint32_t)(ECX));
  /* 10900f04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900f07 cmp eax, dword ptr [0x109220dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109220dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900f0d jae 0x10900f31 */
  if (!C.cf) goto L_10900f31;
  /* 10900f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900f12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10900f15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900f18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10900f1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10900f1e mov eax, dword ptr [ecx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 10900f25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10900f2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10900f2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10900f2f jne 0x10900f4c */
  if (!C.zf) goto L_10900f4c;
L_10900f31:;
  /* 10900f31 call 0x108fc250 */
  push32(0x10900f36u); f_108fc250();
  /* 10900f36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10900f3c call 0x108fc260 */
  push32(0x10900f41u); f_108fc260();
  /* 10900f41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10900f47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10900f4a jmp 0x10900f76 */
  goto L_10900f76;
L_10900f4c:;
  /* 10900f4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900f4f push edx */
  push32((uint32_t)(EDX));
  /* 10900f50 call 0x108fda70 */
  push32(0x10900f55u); f_108fda70();
  /* 10900f55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900f58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900f5b push eax */
  push32((uint32_t)(EAX));
  /* 10900f5c call 0x10900f80 */
  push32(0x10900f61u); f_10900f80();
  /* 10900f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900f64 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10900f67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900f6a push ecx */
  push32((uint32_t)(ECX));
  /* 10900f6b call 0x108fdb00 */
  push32(0x10900f70u); f_108fdb00();
  /* 10900f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900f73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10900f76:;
  /* 10900f76 mov esp, ebp */
  ESP = (EBP);
  /* 10900f78 pop ebp */
  EBP = (pop32());
  /* 10900f79 ret  */
  ESPCHK(0x10900f00u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10900f80 (170 bytes, 59 insns) */
void f_10900f80(void) {
  FTRACE(0x10900f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10900f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10900f81 mov ebp, esp */
  EBP = (ESP);
  /* 10900f83 push ecx */
  push32((uint32_t)(ECX));
  /* 10900f84 push esi */
  push32((uint32_t)(ESI));
  /* 10900f85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900f88 push eax */
  push32((uint32_t)(EAX));
  /* 10900f89 call 0x108fd8f0 */
  push32(0x10900f8eu); f_108fd8f0();
  /* 10900f8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900f91 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900f94 je 0x10900fd3 */
  if (C.zf) goto L_10900fd3;
  /* 10900f96 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900f9a je 0x10900fa2 */
  if (C.zf) goto L_10900fa2;
  /* 10900f9c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900fa0 jne 0x10900fbc */
  if (!C.zf) goto L_10900fbc;
L_10900fa2:;
  /* 10900fa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10900fa4 call 0x108fd8f0 */
  push32(0x10900fa9u); f_108fd8f0();
  /* 10900fa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900fac mov esi, eax */
  ESI = (EAX);
  /* 10900fae push 2 */
  push32((uint32_t)(0x2u));
  /* 10900fb0 call 0x108fd8f0 */
  push32(0x10900fb5u); f_108fd8f0();
  /* 10900fb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900fb8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10900fba je 0x10900fd3 */
  if (C.zf) goto L_10900fd3;
L_10900fbc:;
  /* 10900fbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900fbf push ecx */
  push32((uint32_t)(ECX));
  /* 10900fc0 call 0x108fd8f0 */
  push32(0x10900fc5u); f_108fd8f0();
  /* 10900fc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900fc8 push eax */
  push32((uint32_t)(EAX));
  /* 10900fc9 call dword ptr [0x109232d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232d0))), 0x10900fcfu);
  /* 10900fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10900fd1 je 0x10900fdc */
  if (C.zf) goto L_10900fdc;
L_10900fd3:;
  /* 10900fd3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10900fda jmp 0x10900fe5 */
  goto L_10900fe5;
L_10900fdc:;
  /* 10900fdc call dword ptr [0x109233ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233ac))), 0x10900fe2u);
  /* 10900fe2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10900fe5:;
  /* 10900fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900fe8 push edx */
  push32((uint32_t)(EDX));
  /* 10900fe9 call 0x108fd810 */
  push32(0x10900feeu); f_108fd810();
  /* 10900fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10900ff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900ff4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10900ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10900ffa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10900ffd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10901000 mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 10901007 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1090100c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901010 je 0x10901023 */
  if (C.zf) goto L_10901023;
  /* 10901012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901015 push eax */
  push32((uint32_t)(EAX));
  /* 10901016 call 0x108fc1b0 */
  push32(0x1090101bu); f_108fc1b0();
  /* 1090101b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090101e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10901021 jmp 0x10901025 */
  goto L_10901025;
L_10901023:;
  /* 10901023 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10901025:;
  /* 10901025 pop esi */
  ESI = (pop32());
  /* 10901026 mov esp, ebp */
  ESP = (EBP);
  /* 10901028 pop ebp */
  EBP = (pop32());
  /* 10901029 ret  */
  ESPCHK(0x10900f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011030 @ 0x10901030 (146 bytes, 52 insns) */
void f_10901030(void) {
  FTRACE(0x10901030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10901030 push ebp */
  push32((uint32_t)(EBP));
  /* 10901031 mov ebp, esp */
  EBP = (ESP);
  /* 10901033 push ebx */
  push32((uint32_t)(EBX));
  /* 10901034 push esi */
  push32((uint32_t)(ESI));
  /* 10901035 push edi */
  push32((uint32_t)(EDI));
L_10901036:;
  /* 10901036 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090103a jne 0x1090105a */
  if (!C.zf) goto L_1090105a;
  /* 1090103c push 0x1091c138 */
  push32((uint32_t)(0x1091c138u));
  /* 10901041 push 0 */
  push32((uint32_t)(0x0u));
  /* 10901043 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10901045 push 0x1091c800 */
  push32((uint32_t)(0x1091c800u));
  /* 1090104a push 2 */
  push32((uint32_t)(0x2u));
  /* 1090104c call 0x108f3440 */
  push32(0x10901051u); f_108f3440();
  /* 10901051 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901054 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901057 jne 0x1090105a */
  if (!C.zf) goto L_1090105a;
  /* 10901059 int3  */
  x86_unimpl("int3 @ 0x10901059");
L_1090105a:;
  /* 1090105a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090105c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1090105e jne 0x10901036 */
  if (!C.zf) goto L_10901036;
  /* 10901060 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901063 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10901066 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1090106c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1090106e je 0x109010bd */
  if (C.zf) goto L_109010bd;
  /* 10901070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901073 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10901076 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10901079 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1090107b je 0x109010bd */
  if (C.zf) goto L_109010bd;
  /* 1090107d push 2 */
  push32((uint32_t)(0x2u));
  /* 1090107f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901082 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10901085 push eax */
  push32((uint32_t)(EAX));
  /* 10901086 call 0x108f4e10 */
  push32(0x1090108bu); f_108f4e10();
  /* 1090108b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090108e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901091 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10901094 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1090109a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090109d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 109010a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109010a3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 109010a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109010ac mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 109010b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109010b6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_109010bd:;
  /* 109010bd pop edi */
  EDI = (pop32());
  /* 109010be pop esi */
  ESI = (pop32());
  /* 109010bf pop ebx */
  EBX = (pop32());
  /* 109010c0 pop ebp */
  EBP = (pop32());
  /* 109010c1 ret  */
  ESPCHK(0x10901030u, _esp0);
  ESP += 4; return;
}

/* FUN_100110d0 @ 0x109010d0 (289 bytes, 97 insns) */
void f_109010d0(void) {
  FTRACE(0x109010d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109010d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109010d1 mov ebp, esp */
  EBP = (ESP);
  /* 109010d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109010d6 push esi */
  push32((uint32_t)(ESI));
  /* 109010d7 mov eax, dword ptr [0x1091fc98] */
  EAX = (r32((uint32_t)(0x1091fc98)));
  /* 109010dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109010df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109010e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109010ed jmp 0x109010f8 */
  goto L_109010f8;
L_109010ef:;
  /* 109010ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109010f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109010f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109010f8:;
  /* 109010f8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109010fc jae 0x10901131 */
  if (!C.cf) goto L_10901131;
  /* 109010fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901101 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901104 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10901107 push ecx */
  push32((uint32_t)(ECX));
  /* 10901108 call 0x108f71b0 */
  push32(0x1090110du); f_108f71b0();
  /* 1090110d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901110 mov esi, eax */
  ESI = (EAX);
  /* 10901112 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901115 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901118 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1090111c push ecx */
  push32((uint32_t)(ECX));
  /* 1090111d call 0x108f71b0 */
  push32(0x10901122u); f_108f71b0();
  /* 10901122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901125 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901128 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1090112c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1090112f jmp 0x109010ef */
  goto L_109010ef;
L_10901131:;
  /* 10901131 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10901134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901137 push eax */
  push32((uint32_t)(EAX));
  /* 10901138 call 0x108f4360 */
  push32(0x1090113du); f_108f4360();
  /* 1090113d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901140 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10901143 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901147 je 0x109011e9 */
  if (C.zf) goto L_109011e9;
  /* 1090114d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901150 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10901153 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1090115a jmp 0x10901165 */
  goto L_10901165;
L_1090115c:;
  /* 1090115c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1090115f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901162 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10901165:;
  /* 10901165 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901169 jae 0x109011da */
  if (!C.cf) goto L_109011da;
  /* 1090116b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1090116e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10901171 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901174 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901177 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1090117a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1090117d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901180 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10901183 push ecx */
  push32((uint32_t)(ECX));
  /* 10901184 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901187 push edx */
  push32((uint32_t)(EDX));
  /* 10901188 call 0x108f7330 */
  push32(0x1090118du); f_108f7330();
  /* 1090118d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901190 push eax */
  push32((uint32_t)(EAX));
  /* 10901191 call 0x108f71b0 */
  push32(0x10901196u); f_108f71b0();
  /* 10901196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901199 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1090119c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090119e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109011a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109011a4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 109011a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109011aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109011ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109011b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109011b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109011b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 109011ba push eax */
  push32((uint32_t)(EAX));
  /* 109011bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109011be push ecx */
  push32((uint32_t)(ECX));
  /* 109011bf call 0x108f7330 */
  push32(0x109011c4u); f_108f7330();
  /* 109011c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109011c7 push eax */
  push32((uint32_t)(EAX));
  /* 109011c8 call 0x108f71b0 */
  push32(0x109011cdu); f_108f71b0();
  /* 109011cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109011d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109011d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109011d5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109011d8 jmp 0x1090115c */
  goto L_1090115c;
L_109011da:;
  /* 109011da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109011dd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 109011e0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109011e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109011e6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_109011e9:;
  /* 109011e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109011ec pop esi */
  ESI = (pop32());
  /* 109011ed mov esp, ebp */
  ESP = (EBP);
  /* 109011ef pop ebp */
  EBP = (pop32());
  /* 109011f0 ret  */
  ESPCHK(0x109010d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x10901200 (291 bytes, 97 insns) */
void f_10901200(void) {
  FTRACE(0x10901200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10901200 push ebp */
  push32((uint32_t)(EBP));
  /* 10901201 mov ebp, esp */
  EBP = (ESP);
  /* 10901203 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901206 push esi */
  push32((uint32_t)(ESI));
  /* 10901207 mov eax, dword ptr [0x1091fc98] */
  EAX = (r32((uint32_t)(0x1091fc98)));
  /* 1090120c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1090120f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10901216 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1090121d jmp 0x10901228 */
  goto L_10901228;
L_1090121f:;
  /* 1090121f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901222 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901225 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10901228:;
  /* 10901228 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090122c jae 0x10901262 */
  if (!C.cf) goto L_10901262;
  /* 1090122e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901231 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901234 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10901238 push ecx */
  push32((uint32_t)(ECX));
  /* 10901239 call 0x108f71b0 */
  push32(0x1090123eu); f_108f71b0();
  /* 1090123e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901241 mov esi, eax */
  ESI = (EAX);
  /* 10901243 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901246 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901249 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1090124d push ecx */
  push32((uint32_t)(ECX));
  /* 1090124e call 0x108f71b0 */
  push32(0x10901253u); f_108f71b0();
  /* 10901253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901256 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901259 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1090125d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10901260 jmp 0x1090121f */
  goto L_1090121f;
L_10901262:;
  /* 10901262 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10901265 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901268 push eax */
  push32((uint32_t)(EAX));
  /* 10901269 call 0x108f4360 */
  push32(0x1090126eu); f_108f4360();
  /* 1090126e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10901274 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901278 je 0x1090131b */
  if (C.zf) goto L_1090131b;
  /* 1090127e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901281 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10901284 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1090128b jmp 0x10901296 */
  goto L_10901296;
L_1090128d:;
  /* 1090128d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901290 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901293 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10901296:;
  /* 10901296 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090129a jae 0x1090130c */
  if (!C.cf) goto L_1090130c;
  /* 1090129c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1090129f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 109012a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109012a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109012a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109012ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109012ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109012b1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 109012b5 push ecx */
  push32((uint32_t)(ECX));
  /* 109012b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109012b9 push edx */
  push32((uint32_t)(EDX));
  /* 109012ba call 0x108f7330 */
  push32(0x109012bfu); f_108f7330();
  /* 109012bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109012c2 push eax */
  push32((uint32_t)(EAX));
  /* 109012c3 call 0x108f71b0 */
  push32(0x109012c8u); f_108f71b0();
  /* 109012c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109012cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109012ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109012d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109012d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109012d6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 109012d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109012dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109012df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109012e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109012e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109012e8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 109012ec push eax */
  push32((uint32_t)(EAX));
  /* 109012ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109012f0 push ecx */
  push32((uint32_t)(ECX));
  /* 109012f1 call 0x108f7330 */
  push32(0x109012f6u); f_108f7330();
  /* 109012f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109012f9 push eax */
  push32((uint32_t)(EAX));
  /* 109012fa call 0x108f71b0 */
  push32(0x109012ffu); f_108f71b0();
  /* 109012ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901302 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901305 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901307 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1090130a jmp 0x1090128d */
  goto L_1090128d;
L_1090130c:;
  /* 1090130c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1090130f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10901312 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901315 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901318 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1090131b:;
  /* 1090131b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090131e pop esi */
  ESI = (pop32());
  /* 1090131f mov esp, ebp */
  ESP = (EBP);
  /* 10901321 pop ebp */
  EBP = (pop32());
  /* 10901322 ret  */
  ESPCHK(0x10901200u, _esp0);
  ESP += 4; return;
}

