#include "recomp.h"

/* FUN_1000a660 @ 0x123da660 (10 bytes, 5 insns) */
void f_123da660(void) {
  FTRACE(0x123da660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da660 push ebp */
  push32((uint32_t)(EBP));
  /* 123da661 mov ebp, esp */
  EBP = (ESP);
  /* 123da663 mov eax, dword ptr [0x12400c94] */
  EAX = (r32((uint32_t)(0x12400c94)));
  /* 123da668 pop ebp */
  EBP = (pop32());
  /* 123da669 ret  */
  ESPCHK(0x123da660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a670 @ 0x123da670 (31 bytes, 11 insns) */
void f_123da670(void) {
  FTRACE(0x123da670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da670 push ebp */
  push32((uint32_t)(EBP));
  /* 123da671 mov ebp, esp */
  EBP = (ESP);
  /* 123da673 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da67a jbe 0x123da680 */
  if ((C.cf||C.zf)) goto L_123da680;
  /* 123da67c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123da67e jmp 0x123da68d */
  goto L_123da68d;
L_123da680:;
  /* 123da680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da683 mov dword ptr [0x12400c94], eax */
  w32((uint32_t)(0x12400c94), (EAX));
  /* 123da688 mov eax, 1 */
  EAX = (0x1u);
L_123da68d:;
  /* 123da68d pop ebp */
  EBP = (pop32());
  /* 123da68e ret  */
  ESPCHK(0x123da670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a690 @ 0x123da690 (89 bytes, 20 insns) */
void f_123da690(void) {
  FTRACE(0x123da690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da690 push ebp */
  push32((uint32_t)(EBP));
  /* 123da691 mov ebp, esp */
  EBP = (ESP);
  /* 123da693 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 123da698 push 0 */
  push32((uint32_t)(0x0u));
  /* 123da69a mov eax, dword ptr [0x1240416c] */
  EAX = (r32((uint32_t)(0x1240416c)));
  /* 123da69f push eax */
  push32((uint32_t)(EAX));
  /* 123da6a0 call dword ptr [0x124052f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052f8))), 0x123da6a6u);
  /* 123da6a6 mov dword ptr [0x12404168], eax */
  w32((uint32_t)(0x12404168), (EAX));
  /* 123da6ab cmp dword ptr [0x12404168], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12404168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da6b2 jne 0x123da6b8 */
  if (!C.zf) goto L_123da6b8;
  /* 123da6b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123da6b6 jmp 0x123da6e7 */
  goto L_123da6e7;
L_123da6b8:;
  /* 123da6b8 mov ecx, dword ptr [0x12404168] */
  ECX = (r32((uint32_t)(0x12404168)));
  /* 123da6be mov dword ptr [0x1240415c], ecx */
  w32((uint32_t)(0x1240415c), (ECX));
  /* 123da6c4 mov dword ptr [0x12404160], 0 */
  w32((uint32_t)(0x12404160), (0x0u));
  /* 123da6ce mov dword ptr [0x12404164], 0 */
  w32((uint32_t)(0x12404164), (0x0u));
  /* 123da6d8 mov dword ptr [0x12404148], 0x10 */
  w32((uint32_t)(0x12404148), (0x10u));
  /* 123da6e2 mov eax, 1 */
  EAX = (0x1u);
L_123da6e7:;
  /* 123da6e7 pop ebp */
  EBP = (pop32());
  /* 123da6e8 ret  */
  ESPCHK(0x123da690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6f0 @ 0x123da6f0 (85 bytes, 29 insns) */
void f_123da6f0(void) {
  FTRACE(0x123da6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123da6f1 mov ebp, esp */
  EBP = (ESP);
  /* 123da6f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da6f6 mov eax, dword ptr [0x12404164] */
  EAX = (r32((uint32_t)(0x12404164)));
  /* 123da6fb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123da6fe mov ecx, dword ptr [0x12404168] */
  ECX = (r32((uint32_t)(0x12404168)));
  /* 123da704 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da706 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123da709 mov edx, dword ptr [0x12404168] */
  EDX = (r32((uint32_t)(0x12404168)));
  /* 123da70f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123da712:;
  /* 123da712 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da715 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da718 jae 0x123da73f */
  if (!C.cf) goto L_123da73f;
  /* 123da71a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da71d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da720 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da723 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123da726 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da72d jae 0x123da734 */
  if (!C.cf) goto L_123da734;
  /* 123da72f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da732 jmp 0x123da741 */
  goto L_123da741;
L_123da734:;
  /* 123da734 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da737 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da73a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123da73d jmp 0x123da712 */
  goto L_123da712;
L_123da73f:;
  /* 123da73f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123da741:;
  /* 123da741 mov esp, ebp */
  ESP = (EBP);
  /* 123da743 pop ebp */
  EBP = (pop32());
  /* 123da744 ret  */
  ESPCHK(0x123da6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a750 @ 0x123da750 (95 bytes, 33 insns) */
void f_123da750(void) {
  FTRACE(0x123da750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da750 push ebp */
  push32((uint32_t)(EBP));
  /* 123da751 mov ebp, esp */
  EBP = (ESP);
  /* 123da753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da759 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da75c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da75f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123da762 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da765 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 123da768 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123da76b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123da770 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da773 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123da775 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da778 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123da77b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123da77d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123da77f jne 0x123da7a1 */
  if (!C.zf) goto L_123da7a1;
  /* 123da781 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da784 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 123da787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123da789 jne 0x123da7a1 */
  if (!C.zf) goto L_123da7a1;
  /* 123da78b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da78e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 123da794 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123da796 je 0x123da7a1 */
  if (C.zf) goto L_123da7a1;
  /* 123da798 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 123da79f jmp 0x123da7a8 */
  goto L_123da7a8;
L_123da7a1:;
  /* 123da7a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_123da7a8:;
  /* 123da7a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123da7ab mov esp, ebp */
  ESP = (EBP);
  /* 123da7ad pop ebp */
  EBP = (pop32());
  /* 123da7ae ret  */
  ESPCHK(0x123da750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7b0 @ 0x123da7b0 (1485 bytes, 453 insns) */
void f_123da7b0(void) {
  FTRACE(0x123da7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123da7b1 mov ebp, esp */
  EBP = (ESP);
  /* 123da7b3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da7b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da7b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123da7bc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 123da7bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da7c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da7c5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da7c8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123da7cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123da7ce shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 123da7d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123da7d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da7d7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123da7dd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da7e0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 123da7e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123da7ea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da7ed sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da7f0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123da7f3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123da7f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123da7f8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da7fb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 123da7fe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123da801 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da804 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 123da807 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123da80a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123da80c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123da80f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123da812 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 123da815 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123da818 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123da81b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123da81e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123da820 jne 0x123da948 */
  if (!C.zf) goto L_123da948;
  /* 123da826 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123da829 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 123da82c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da82f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 123da832 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da836 jbe 0x123da83f */
  if ((C.cf||C.zf)) goto L_123da83f;
  /* 123da838 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_123da83f:;
  /* 123da83f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123da842 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123da845 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 123da848 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da84b jne 0x123da921 */
  if (!C.zf) goto L_123da921;
  /* 123da851 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da855 jae 0x123da8b6 */
  if (!C.cf) goto L_123da8b6;
  /* 123da857 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123da85c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123da85f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123da861 not eax */
  EAX = (~(EAX));
  /* 123da863 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da866 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da869 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 123da86d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123da86f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da872 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da875 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 123da879 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da87c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da87f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 123da882 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123da885 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da888 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da88b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 123da88e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da891 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da894 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123da898 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123da89a jne 0x123da8b4 */
  if (!C.zf) goto L_123da8b4;
  /* 123da89c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123da8a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123da8a4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123da8a6 not eax */
  EAX = (~(EAX));
  /* 123da8a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da8ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123da8ad and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123da8af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da8b2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123da8b4:;
  /* 123da8b4 jmp 0x123da921 */
  goto L_123da921;
L_123da8b6:;
  /* 123da8b6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123da8b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da8bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123da8c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123da8c3 not edx */
  EDX = (~(EDX));
  /* 123da8c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da8c8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da8cb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 123da8d2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123da8d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da8d7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da8da mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 123da8e1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da8e4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da8e7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123da8ea sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123da8ed mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da8f0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da8f3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 123da8f6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da8f9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da8fc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123da900 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123da902 jne 0x123da921 */
  if (!C.zf) goto L_123da921;
  /* 123da904 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123da907 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da90a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123da90f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123da911 not edx */
  EDX = (~(EDX));
  /* 123da913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da916 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123da919 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123da91b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da91e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_123da921:;
  /* 123da921 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123da924 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123da927 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123da92a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123da92d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 123da930 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123da933 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123da936 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123da939 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123da93c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123da93f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123da942 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da945 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_123da948:;
  /* 123da948 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123da94b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 123da94e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da951 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123da954 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da958 jbe 0x123da961 */
  if ((C.cf||C.zf)) goto L_123da961;
  /* 123da95a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_123da961:;
  /* 123da961 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123da964 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123da967 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123da969 jne 0x123daac5 */
  if (!C.zf) goto L_123daac5;
  /* 123da96f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123da972 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da975 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 123da978 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123da97b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 123da97e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da981 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 123da984 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da988 jbe 0x123da991 */
  if ((C.cf||C.zf)) goto L_123da991;
  /* 123da98a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_123da991:;
  /* 123da991 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123da994 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da997 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 123da99a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123da99d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 123da9a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da9a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 123da9a6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da9aa jbe 0x123da9b3 */
  if ((C.cf||C.zf)) goto L_123da9b3;
  /* 123da9ac mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_123da9b3:;
  /* 123da9b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123da9b6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da9b9 je 0x123daabf */
  if (C.zf) goto L_123daabf;
  /* 123da9bf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 123da9c2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 123da9c5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 123da9c8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da9cb jne 0x123daaa1 */
  if (!C.zf) goto L_123daaa1;
  /* 123da9d1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da9d5 jae 0x123daa36 */
  if (!C.cf) goto L_123daa36;
  /* 123da9d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123da9dc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123da9df shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123da9e1 not edx */
  EDX = (~(EDX));
  /* 123da9e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da9e6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da9e9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 123da9ed and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123da9ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da9f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da9f5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 123da9f9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123da9fc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da9ff mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123daa02 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123daa05 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123daa08 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123daa0b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 123daa0e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123daa11 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123daa14 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123daa18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123daa1a jne 0x123daa34 */
  if (!C.zf) goto L_123daa34;
  /* 123daa1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123daa21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123daa24 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123daa26 not edx */
  EDX = (~(EDX));
  /* 123daa28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123daa2b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123daa2d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123daa2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123daa32 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123daa34:;
  /* 123daa34 jmp 0x123daaa1 */
  goto L_123daaa1;
L_123daa36:;
  /* 123daa36 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123daa39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123daa3c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123daa41 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123daa43 not eax */
  EAX = (~(EAX));
  /* 123daa45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123daa48 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123daa4b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 123daa52 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123daa54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123daa57 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123daa5a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 123daa61 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123daa64 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123daa67 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 123daa6a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123daa6d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123daa70 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123daa73 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 123daa76 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123daa79 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123daa7c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123daa80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123daa82 jne 0x123daaa1 */
  if (!C.zf) goto L_123daaa1;
  /* 123daa84 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123daa87 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123daa8a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123daa8f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123daa91 not eax */
  EAX = (~(EAX));
  /* 123daa93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123daa96 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123daa99 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123daa9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123daa9e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_123daaa1:;
  /* 123daaa1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 123daaa4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123daaa7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 123daaaa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123daaad mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 123daab0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 123daab3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123daab6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 123daab9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123daabc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_123daabf:;
  /* 123daabf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 123daac2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_123daac5:;
  /* 123daac5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123daac8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123daacb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123daacd jne 0x123daadb */
  if (!C.zf) goto L_123daadb;
  /* 123daacf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123daad2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123daad5 je 0x123dabeb */
  if (C.zf) goto L_123dabeb;
L_123daadb:;
  /* 123daadb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123daade mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123daae1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 123daae4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 123daae7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123daaea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123daaed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123daaf0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123daaf3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123daaf6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123daaf9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 123daafc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123daaff mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123dab02 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 123dab05 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123dab08 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123dab0b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123dab0e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123dab11 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123dab14 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123dab17 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 123dab1a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dab1d jne 0x123dabeb */
  if (!C.zf) goto L_123dabeb;
  /* 123dab23 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dab27 jae 0x123dab84 */
  if (!C.cf) goto L_123dab84;
  /* 123dab29 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123dab2c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dab2f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123dab33 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123dab36 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dab39 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123dab3c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 123dab3f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123dab42 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dab45 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 123dab48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dab4a jne 0x123dab62 */
  if (!C.zf) goto L_123dab62;
  /* 123dab4c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123dab51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dab54 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dab56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dab59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123dab5b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123dab5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dab60 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123dab62:;
  /* 123dab62 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123dab67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dab6a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123dab6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dab6f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123dab72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 123dab76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123dab78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dab7b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123dab7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 123dab82 jmp 0x123dabeb */
  goto L_123dabeb;
L_123dab84:;
  /* 123dab84 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123dab87 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dab8a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123dab8e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123dab91 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dab94 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123dab97 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 123dab9a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123dab9d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123daba0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 123daba3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123daba5 jne 0x123dabc2 */
  if (!C.zf) goto L_123dabc2;
  /* 123daba7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dabaa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dabad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123dabb2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dabb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dabb7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123dabba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123dabbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dabbf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_123dabc2:;
  /* 123dabc2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dabc5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dabc8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123dabcd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123dabcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dabd2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123dabd5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 123dabdc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123dabde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dabe1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123dabe4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_123dabeb:;
  /* 123dabeb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123dabee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dabf1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123dabf3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123dabf6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dabf9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dabfc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 123dabff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dac02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123dac04 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dac07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dac0a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123dac0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dac0f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dac12 jne 0x123dad79 */
  if (!C.zf) goto L_123dad79;
  /* 123dac18 cmp dword ptr [0x12404160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12404160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dac1f je 0x123dad68 */
  if (C.zf) goto L_123dad68;
  /* 123dac25 mov eax, dword ptr [0x12404158] */
  EAX = (r32((uint32_t)(0x12404158)));
  /* 123dac2a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 123dac2d mov ecx, dword ptr [0x12404160] */
  ECX = (r32((uint32_t)(0x12404160)));
  /* 123dac33 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dac36 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dac38 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123dac3b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 123dac40 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 123dac45 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dac48 push eax */
  push32((uint32_t)(EAX));
  /* 123dac49 call dword ptr [0x1240539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240539c))), 0x123dac4fu);
  /* 123dac4f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123dac54 mov ecx, dword ptr [0x12404158] */
  ECX = (r32((uint32_t)(0x12404158)));
  /* 123dac5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dac5c mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dac61 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123dac64 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123dac66 mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123dac6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123dac6f mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dac74 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123dac77 mov edx, dword ptr [0x12404158] */
  EDX = (r32((uint32_t)(0x12404158)));
  /* 123dac7d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 123dac88 mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dac8d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123dac90 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 123dac93 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123dac96 mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dac9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123dac9e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 123daca1 mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123daca7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123dacaa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 123dacae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dacb0 jne 0x123dacc6 */
  if (!C.zf) goto L_123dacc6;
  /* 123dacb2 mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123dacb8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123dacbb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 123dacbd mov ecx, dword ptr [0x12404160] */
  ECX = (r32((uint32_t)(0x12404160)));
  /* 123dacc3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_123dacc6:;
  /* 123dacc6 mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123daccc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dacd0 jne 0x123dad68 */
  if (!C.zf) goto L_123dad68;
  /* 123dacd6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 123dacdb push 0 */
  push32((uint32_t)(0x0u));
  /* 123dacdd mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dace2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123dace5 push ecx */
  push32((uint32_t)(ECX));
  /* 123dace6 call dword ptr [0x1240539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240539c))), 0x123dacecu);
  /* 123dacec mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123dacf2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123dacf5 push eax */
  push32((uint32_t)(EAX));
  /* 123dacf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dacf8 mov ecx, dword ptr [0x1240416c] */
  ECX = (r32((uint32_t)(0x1240416c)));
  /* 123dacfe push ecx */
  push32((uint32_t)(ECX));
  /* 123dacff call dword ptr [0x12405398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405398))), 0x123dad05u);
  /* 123dad05 mov edx, dword ptr [0x12404164] */
  EDX = (r32((uint32_t)(0x12404164)));
  /* 123dad0b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dad0e mov eax, dword ptr [0x12404168] */
  EAX = (r32((uint32_t)(0x12404168)));
  /* 123dad13 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dad15 mov ecx, dword ptr [0x12404160] */
  ECX = (r32((uint32_t)(0x12404160)));
  /* 123dad1b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dad1e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dad20 push eax */
  push32((uint32_t)(EAX));
  /* 123dad21 mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123dad27 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dad2a push edx */
  push32((uint32_t)(EDX));
  /* 123dad2b mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dad30 push eax */
  push32((uint32_t)(EAX));
  /* 123dad31 call 0x123de2e0 */
  push32(0x123dad36u); f_123de2e0();
  /* 123dad36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dad39 mov ecx, dword ptr [0x12404164] */
  ECX = (r32((uint32_t)(0x12404164)));
  /* 123dad3f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dad42 mov dword ptr [0x12404164], ecx */
  w32((uint32_t)(0x12404164), (ECX));
  /* 123dad48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dad4b cmp edx, dword ptr [0x12404160] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12404160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dad51 jbe 0x123dad5c */
  if ((C.cf||C.zf)) goto L_123dad5c;
  /* 123dad53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dad56 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dad59 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123dad5c:;
  /* 123dad5c mov ecx, dword ptr [0x12404168] */
  ECX = (r32((uint32_t)(0x12404168)));
  /* 123dad62 mov dword ptr [0x1240415c], ecx */
  w32((uint32_t)(0x1240415c), (ECX));
L_123dad68:;
  /* 123dad68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dad6b mov dword ptr [0x12404160], edx */
  w32((uint32_t)(0x12404160), (EDX));
  /* 123dad71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dad74 mov dword ptr [0x12404158], eax */
  w32((uint32_t)(0x12404158), (EAX));
L_123dad79:;
  /* 123dad79 mov esp, ebp */
  ESP = (EBP);
  /* 123dad7b pop ebp */
  EBP = (pop32());
  /* 123dad7c ret  */
  ESPCHK(0x123da7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad80 @ 0x123dad80 (1334 bytes, 427 insns) */
void f_123dad80(void) {
  FTRACE(0x123dad80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dad80 push ebp */
  push32((uint32_t)(EBP));
  /* 123dad81 mov ebp, esp */
  EBP = (ESP);
  /* 123dad83 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dad86 push esi */
  push32((uint32_t)(ESI));
  /* 123dad87 mov eax, dword ptr [0x12404164] */
  EAX = (r32((uint32_t)(0x12404164)));
  /* 123dad8c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dad8f mov ecx, dword ptr [0x12404168] */
  ECX = (r32((uint32_t)(0x12404168)));
  /* 123dad95 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dad97 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 123dad9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dad9d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dada0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 123dada3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 123dada6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dada9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 123dadac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dadaf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123dadb2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dadb6 jge 0x123dadcc */
  if ((C.sf==C.of)) goto L_123dadcc;
  /* 123dadb8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123dadbb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dadbe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dadc0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 123dadc3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 123dadca jmp 0x123dade1 */
  goto L_123dade1;
L_123dadcc:;
  /* 123dadcc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123dadd3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dadd6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dadd9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123daddc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123dadde mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_123dade1:;
  /* 123dade1 mov ecx, dword ptr [0x1240415c] */
  ECX = (r32((uint32_t)(0x1240415c)));
  /* 123dade7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_123dadea:;
  /* 123dadea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123daded cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dadf0 jae 0x123dae16 */
  if (!C.cf) goto L_123dae16;
  /* 123dadf2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dadf5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dadf8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 123dadfa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dadfd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 123dae00 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 123dae03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123dae05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dae07 je 0x123dae0b */
  if (C.zf) goto L_123dae0b;
  /* 123dae09 jmp 0x123dae16 */
  goto L_123dae16;
L_123dae0b:;
  /* 123dae0b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae0e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dae11 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123dae14 jmp 0x123dadea */
  goto L_123dadea;
L_123dae16:;
  /* 123dae16 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae19 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dae1c jne 0x123daefd */
  if (!C.zf) goto L_123daefd;
  /* 123dae22 mov eax, dword ptr [0x12404168] */
  EAX = (r32((uint32_t)(0x12404168)));
  /* 123dae27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_123dae2a:;
  /* 123dae2a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae2d cmp ecx, dword ptr [0x1240415c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1240415c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dae33 jae 0x123dae59 */
  if (!C.cf) goto L_123dae59;
  /* 123dae35 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae38 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dae3b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 123dae3d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae40 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 123dae43 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 123dae46 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123dae48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dae4a je 0x123dae4e */
  if (C.zf) goto L_123dae4e;
  /* 123dae4c jmp 0x123dae59 */
  goto L_123dae59;
L_123dae4e:;
  /* 123dae4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae51 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dae54 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123dae57 jmp 0x123dae2a */
  goto L_123dae2a;
L_123dae59:;
  /* 123dae59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae5c cmp ecx, dword ptr [0x1240415c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1240415c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dae62 jne 0x123daefd */
  if (!C.zf) goto L_123daefd;
L_123dae68:;
  /* 123dae68 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae6b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dae6e jae 0x123dae86 */
  if (!C.cf) goto L_123dae86;
  /* 123dae70 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae73 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dae77 je 0x123dae7b */
  if (C.zf) goto L_123dae7b;
  /* 123dae79 jmp 0x123dae86 */
  goto L_123dae86;
L_123dae7b:;
  /* 123dae7b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae7e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dae81 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123dae84 jmp 0x123dae68 */
  goto L_123dae68;
L_123dae86:;
  /* 123dae86 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae89 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dae8c jne 0x123daed7 */
  if (!C.zf) goto L_123daed7;
  /* 123dae8e mov eax, dword ptr [0x12404168] */
  EAX = (r32((uint32_t)(0x12404168)));
  /* 123dae93 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_123dae96:;
  /* 123dae96 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dae99 cmp ecx, dword ptr [0x1240415c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1240415c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dae9f jae 0x123daeb7 */
  if (!C.cf) goto L_123daeb7;
  /* 123daea1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123daea4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123daea8 je 0x123daeac */
  if (C.zf) goto L_123daeac;
  /* 123daeaa jmp 0x123daeb7 */
  goto L_123daeb7;
L_123daeac:;
  /* 123daeac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123daeaf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123daeb2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123daeb5 jmp 0x123dae96 */
  goto L_123dae96;
L_123daeb7:;
  /* 123daeb7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123daeba cmp ecx, dword ptr [0x1240415c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1240415c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123daec0 jne 0x123daed7 */
  if (!C.zf) goto L_123daed7;
  /* 123daec2 call 0x123db2c0 */
  push32(0x123daec7u); f_123db2c0();
  /* 123daec7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123daeca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123daece jne 0x123daed7 */
  if (!C.zf) goto L_123daed7;
  /* 123daed0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123daed2 jmp 0x123db2b1 */
  goto L_123db2b1;
L_123daed7:;
  /* 123daed7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123daeda push edx */
  push32((uint32_t)(EDX));
  /* 123daedb call 0x123db3d0 */
  push32(0x123daee0u); f_123db3d0();
  /* 123daee0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123daee3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123daee6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 123daee9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123daeeb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123daeee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123daef1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123daef4 jne 0x123daefd */
  if (!C.zf) goto L_123daefd;
  /* 123daef6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123daef8 jmp 0x123db2b1 */
  goto L_123db2b1;
L_123daefd:;
  /* 123daefd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123daf00 mov dword ptr [0x1240415c], edx */
  w32((uint32_t)(0x1240415c), (EDX));
  /* 123daf06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123daf09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123daf0c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 123daf0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123daf12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123daf14 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 123daf17 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123daf1b je 0x123daf40 */
  if (C.zf) goto L_123daf40;
  /* 123daf1d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123daf20 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123daf23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123daf26 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 123daf2a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123daf2d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123daf30 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 123daf33 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 123daf3a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 123daf3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123daf3e jne 0x123daf75 */
  if (!C.zf) goto L_123daf75;
L_123daf40:;
  /* 123daf40 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_123daf47:;
  /* 123daf47 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123daf4a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123daf4d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123daf50 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 123daf54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123daf57 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123daf5a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 123daf5d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 123daf64 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 123daf66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123daf68 jne 0x123daf75 */
  if (!C.zf) goto L_123daf75;
  /* 123daf6a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123daf6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123daf70 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 123daf73 jmp 0x123daf47 */
  goto L_123daf47;
L_123daf75:;
  /* 123daf75 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123daf78 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123daf7e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123daf81 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 123daf88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123daf8b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123daf92 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123daf95 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123daf98 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123daf9b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 123daf9f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123dafa2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dafa6 jne 0x123dafc2 */
  if (!C.zf) goto L_123dafc2;
  /* 123dafa8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 123dafaf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dafb2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123dafb5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 123dafb8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 123dafbf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_123dafc2:;
  /* 123dafc2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dafc6 jl 0x123dafdb */
  if ((C.sf!=C.of)) goto L_123dafdb;
  /* 123dafc8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123dafcb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123dafcd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123dafd0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dafd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dafd6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123dafd9 jmp 0x123dafc2 */
  goto L_123dafc2;
L_123dafdb:;
  /* 123dafdb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dafde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dafe1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 123dafe5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123dafe8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dafeb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123dafed sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123daff0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123daff3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123daff6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 123daff9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123daffc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123dafff cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db003 jle 0x123db00c */
  if ((C.zf||C.sf!=C.of)) goto L_123db00c;
  /* 123db005 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_123db00c:;
  /* 123db00c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db00f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db012 je 0x123db230 */
  if (C.zf) goto L_123db230;
  /* 123db018 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db01b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db01e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 123db021 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db024 jne 0x123db0fa */
  if (!C.zf) goto L_123db0fa;
  /* 123db02a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db02e jge 0x123db08f */
  if ((C.sf==C.of)) goto L_123db08f;
  /* 123db030 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123db035 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db038 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123db03a not eax */
  EAX = (~(EAX));
  /* 123db03c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db03f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db042 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 123db046 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123db048 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db04b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db04e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 123db052 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db055 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db058 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 123db05b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123db05e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db061 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db064 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 123db067 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db06a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db06d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123db071 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123db073 jne 0x123db08d */
  if (!C.zf) goto L_123db08d;
  /* 123db075 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123db07a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db07d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123db07f not eax */
  EAX = (~(EAX));
  /* 123db081 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db084 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123db086 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123db088 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db08b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123db08d:;
  /* 123db08d jmp 0x123db0fa */
  goto L_123db0fa;
L_123db08f:;
  /* 123db08f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db092 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db095 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db09a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db09c not edx */
  EDX = (~(EDX));
  /* 123db09e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db0a1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db0a4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 123db0ab and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123db0ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db0b0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db0b3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 123db0ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db0bd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db0c0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123db0c3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123db0c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db0c9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db0cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 123db0cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db0d2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db0d5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123db0d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123db0db jne 0x123db0fa */
  if (!C.zf) goto L_123db0fa;
  /* 123db0dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db0e0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db0e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db0e8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db0ea not edx */
  EDX = (~(EDX));
  /* 123db0ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db0ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123db0f2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123db0f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db0f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_123db0fa:;
  /* 123db0fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db0fd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123db100 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db103 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123db106 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 123db109 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db10c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123db10f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db112 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123db115 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123db118 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db11c je 0x123db230 */
  if (C.zf) goto L_123db230;
  /* 123db122 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db128 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 123db12b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123db12e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123db134 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123db137 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 123db13a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db13d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123db140 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123db143 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123db146 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db149 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 123db14c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db14f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123db152 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db155 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 123db158 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db15b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db15e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 123db161 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db164 jne 0x123db230 */
  if (!C.zf) goto L_123db230;
  /* 123db16a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db16e jge 0x123db1ca */
  if ((C.sf==C.of)) goto L_123db1ca;
  /* 123db170 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db173 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db176 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123db17a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db17d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db180 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 123db183 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123db185 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db188 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db18b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 123db18e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123db190 jne 0x123db1a8 */
  if (!C.zf) goto L_123db1a8;
  /* 123db192 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123db197 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db19a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123db19c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db19f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123db1a1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123db1a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db1a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123db1a8:;
  /* 123db1a8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db1ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db1b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db1b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db1b5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db1b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 123db1bc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123db1be mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db1c1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db1c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 123db1c8 jmp 0x123db230 */
  goto L_123db230;
L_123db1ca:;
  /* 123db1ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db1cd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db1d0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123db1d4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db1d7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db1da mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 123db1dd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123db1df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db1e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db1e5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 123db1e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123db1ea jne 0x123db207 */
  if (!C.zf) goto L_123db207;
  /* 123db1ec mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db1ef sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db1f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123db1f7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123db1f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db1fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123db1ff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123db201 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db204 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_123db207:;
  /* 123db207 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db20a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db20d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db212 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db214 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db217 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db21a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 123db221 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123db223 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db226 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db229 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_123db230:;
  /* 123db230 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db234 je 0x123db24a */
  if (C.zf) goto L_123db24a;
  /* 123db236 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123db23c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123db23e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db241 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db244 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123db247 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_123db24a:;
  /* 123db24a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db24d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db250 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123db253 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db256 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db259 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db25c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123db25e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db261 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db264 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db267 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db26a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 123db26d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db270 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123db272 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db275 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123db277 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db27a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db27d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123db27f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123db281 jne 0x123db2a3 */
  if (!C.zf) goto L_123db2a3;
  /* 123db283 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db286 cmp eax, dword ptr [0x12404160] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12404160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db28c jne 0x123db2a3 */
  if (!C.zf) goto L_123db2a3;
  /* 123db28e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db291 cmp ecx, dword ptr [0x12404158] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12404158))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db297 jne 0x123db2a3 */
  if (!C.zf) goto L_123db2a3;
  /* 123db299 mov dword ptr [0x12404160], 0 */
  w32((uint32_t)(0x12404160), (0x0u));
L_123db2a3:;
  /* 123db2a3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123db2a6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db2a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123db2ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db2ae add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_123db2b1:;
  /* 123db2b1 pop esi */
  ESI = (pop32());
  /* 123db2b2 mov esp, ebp */
  ESP = (EBP);
  /* 123db2b4 pop ebp */
  EBP = (pop32());
  /* 123db2b5 ret  */
  ESPCHK(0x123dad80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2c0 @ 0x123db2c0 (271 bytes, 78 insns) */
void f_123db2c0(void) {
  FTRACE(0x123db2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123db2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123db2c1 mov ebp, esp */
  EBP = (ESP);
  /* 123db2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123db2c4 mov eax, dword ptr [0x12404164] */
  EAX = (r32((uint32_t)(0x12404164)));
  /* 123db2c9 cmp eax, dword ptr [0x12404148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12404148))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db2cf jne 0x123db31b */
  if (!C.zf) goto L_123db31b;
  /* 123db2d1 mov ecx, dword ptr [0x12404148] */
  ECX = (r32((uint32_t)(0x12404148)));
  /* 123db2d7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db2da imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123db2dd push ecx */
  push32((uint32_t)(ECX));
  /* 123db2de mov edx, dword ptr [0x12404168] */
  EDX = (r32((uint32_t)(0x12404168)));
  /* 123db2e4 push edx */
  push32((uint32_t)(EDX));
  /* 123db2e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123db2e7 mov eax, dword ptr [0x1240416c] */
  EAX = (r32((uint32_t)(0x1240416c)));
  /* 123db2ec push eax */
  push32((uint32_t)(EAX));
  /* 123db2ed call dword ptr [0x12405300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405300))), 0x123db2f3u);
  /* 123db2f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123db2f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db2fa jne 0x123db303 */
  if (!C.zf) goto L_123db303;
  /* 123db2fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123db2fe jmp 0x123db3cb */
  goto L_123db3cb;
L_123db303:;
  /* 123db303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db306 mov dword ptr [0x12404168], ecx */
  w32((uint32_t)(0x12404168), (ECX));
  /* 123db30c mov edx, dword ptr [0x12404148] */
  EDX = (r32((uint32_t)(0x12404148)));
  /* 123db312 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db315 mov dword ptr [0x12404148], edx */
  w32((uint32_t)(0x12404148), (EDX));
L_123db31b:;
  /* 123db31b mov eax, dword ptr [0x12404164] */
  EAX = (r32((uint32_t)(0x12404164)));
  /* 123db320 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123db323 mov ecx, dword ptr [0x12404168] */
  ECX = (r32((uint32_t)(0x12404168)));
  /* 123db329 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db32b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123db32e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 123db333 push 8 */
  push32((uint32_t)(0x8u));
  /* 123db335 mov edx, dword ptr [0x1240416c] */
  EDX = (r32((uint32_t)(0x1240416c)));
  /* 123db33b push edx */
  push32((uint32_t)(EDX));
  /* 123db33c call dword ptr [0x124052f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052f8))), 0x123db342u);
  /* 123db342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db345 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 123db348 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db34b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db34f jne 0x123db355 */
  if (!C.zf) goto L_123db355;
  /* 123db351 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123db353 jmp 0x123db3cb */
  goto L_123db3cb;
L_123db355:;
  /* 123db355 push 4 */
  push32((uint32_t)(0x4u));
  /* 123db357 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 123db35c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 123db361 push 0 */
  push32((uint32_t)(0x0u));
  /* 123db363 call dword ptr [0x124052f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052f0))), 0x123db369u);
  /* 123db369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db36c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 123db36f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db372 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db376 jne 0x123db392 */
  if (!C.zf) goto L_123db392;
  /* 123db378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db37b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123db37e push ecx */
  push32((uint32_t)(ECX));
  /* 123db37f push 0 */
  push32((uint32_t)(0x0u));
  /* 123db381 mov edx, dword ptr [0x1240416c] */
  EDX = (r32((uint32_t)(0x1240416c)));
  /* 123db387 push edx */
  push32((uint32_t)(EDX));
  /* 123db388 call dword ptr [0x12405398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405398))), 0x123db38eu);
  /* 123db38e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123db390 jmp 0x123db3cb */
  goto L_123db3cb;
L_123db392:;
  /* 123db392 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db395 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123db39b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db39e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 123db3a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db3a8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 123db3af mov eax, dword ptr [0x12404164] */
  EAX = (r32((uint32_t)(0x12404164)));
  /* 123db3b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db3b7 mov dword ptr [0x12404164], eax */
  w32((uint32_t)(0x12404164), (EAX));
  /* 123db3bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db3bf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 123db3c2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 123db3c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123db3cb:;
  /* 123db3cb mov esp, ebp */
  ESP = (EBP);
  /* 123db3cd pop ebp */
  EBP = (pop32());
  /* 123db3ce ret  */
  ESPCHK(0x123db2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3d0 @ 0x123db3d0 (494 bytes, 149 insns) */
void f_123db3d0(void) {
  FTRACE(0x123db3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123db3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123db3d1 mov ebp, esp */
  EBP = (ESP);
  /* 123db3d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db3d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db3d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123db3dc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 123db3df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db3e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123db3e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123db3e8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_123db3ef:;
  /* 123db3ef cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db3f3 jl 0x123db408 */
  if ((C.sf!=C.of)) goto L_123db408;
  /* 123db3f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123db3f8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 123db3fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123db3fd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db400 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db403 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 123db406 jmp 0x123db3ef */
  goto L_123db3ef;
L_123db408:;
  /* 123db408 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db40b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123db411 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db414 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 123db41b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123db41e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123db425 jmp 0x123db430 */
  goto L_123db430;
L_123db427:;
  /* 123db427 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db42a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db42d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_123db430:;
  /* 123db430 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db434 jge 0x123db456 */
  if ((C.sf==C.of)) goto L_123db456;
  /* 123db436 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db439 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123db43c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 123db43f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123db442 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db445 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db448 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 123db44b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db44e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db451 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 123db454 jmp 0x123db427 */
  goto L_123db427;
L_123db456:;
  /* 123db456 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db459 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 123db45c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db45f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123db462 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db464 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123db467 push 4 */
  push32((uint32_t)(0x4u));
  /* 123db469 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 123db46e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 123db473 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db476 push edx */
  push32((uint32_t)(EDX));
  /* 123db477 call dword ptr [0x124052f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052f0))), 0x123db47du);
  /* 123db47d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123db47f jne 0x123db489 */
  if (!C.zf) goto L_123db489;
  /* 123db481 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123db484 jmp 0x123db5ba */
  goto L_123db5ba;
L_123db489:;
  /* 123db489 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db48c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db491 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123db494 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db497 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123db49a jmp 0x123db4a8 */
  goto L_123db4a8;
L_123db49c:;
  /* 123db49c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db49f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db4a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123db4a8:;
  /* 123db4a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db4ab cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db4ae ja 0x123db50d */
  if ((!C.cf&&!C.zf)) goto L_123db50d;
  /* 123db4b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db4b3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 123db4ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db4bd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 123db4c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db4ca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db4cd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123db4d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db4d3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 123db4d9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db4dc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db4e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db4e5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123db4e8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db4eb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db4f1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db4f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123db4f7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db4fa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db4ff mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123db502 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123db505 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 123db50b jmp 0x123db49c */
  goto L_123db49c;
L_123db50d:;
  /* 123db50d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123db510 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db516 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123db519 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db51c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db51f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db522 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 123db525 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db528 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123db52b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123db52e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db531 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db534 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 123db537 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123db53a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db53d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db540 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 123db543 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db546 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123db549 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123db54c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db54f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db552 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 123db555 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db558 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db55b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 123db563 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db566 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db569 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 123db574 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db577 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 123db57b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db57e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 123db581 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 123db584 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db587 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 123db58a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123db58c jne 0x123db59d */
  if (!C.zf) goto L_123db59d;
  /* 123db58e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db591 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123db594 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 123db597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db59a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_123db59d:;
  /* 123db59d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db5a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db5a5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db5a7 not edx */
  EDX = (~(EDX));
  /* 123db5a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db5ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123db5af and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123db5b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db5b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123db5b7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_123db5ba:;
  /* 123db5ba mov esp, ebp */
  ESP = (EBP);
  /* 123db5bc pop ebp */
  EBP = (pop32());
  /* 123db5bd ret  */
  ESPCHK(0x123db3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5c0 @ 0x123db5c0 (1515 bytes, 489 insns) */
void f_123db5c0(void) {
  FTRACE(0x123db5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123db5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123db5c1 mov ebp, esp */
  EBP = (ESP);
  /* 123db5c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db5c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123db5c9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db5cc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 123db5ce mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123db5d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db5d4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 123db5d7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 123db5da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db5dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123db5e0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db5e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123db5e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123db5e9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 123db5ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123db5ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db5f2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123db5f8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db5fb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 123db602 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123db605 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123db608 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db60b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123db60e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db611 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123db613 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db616 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 123db619 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db61c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db61f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 123db622 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db625 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123db627 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123db62a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123db62d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db630 jle 0x123db8e6 */
  if ((C.zf||C.sf!=C.of)) goto L_123db8e6;
  /* 123db636 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db639 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123db63c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123db63e jne 0x123db64b */
  if (!C.zf) goto L_123db64b;
  /* 123db640 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db643 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db646 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db649 jle 0x123db652 */
  if ((C.zf||C.sf!=C.of)) goto L_123db652;
L_123db64b:;
  /* 123db64b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123db64d jmp 0x123dbba7 */
  goto L_123dbba7;
L_123db652:;
  /* 123db652 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db655 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 123db658 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db65b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123db65e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db662 jbe 0x123db66b */
  if ((C.cf||C.zf)) goto L_123db66b;
  /* 123db664 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_123db66b:;
  /* 123db66b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db66e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db671 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 123db674 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db677 jne 0x123db74d */
  if (!C.zf) goto L_123db74d;
  /* 123db67d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db681 jae 0x123db6e2 */
  if (!C.cf) goto L_123db6e2;
  /* 123db683 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db688 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db68b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db68d not edx */
  EDX = (~(EDX));
  /* 123db68f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db692 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db695 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 123db699 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123db69b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db69e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db6a1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 123db6a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db6a8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db6ab mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123db6ae sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123db6b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db6b4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db6b7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 123db6ba mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db6bd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db6c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123db6c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123db6c6 jne 0x123db6e0 */
  if (!C.zf) goto L_123db6e0;
  /* 123db6c8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db6cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db6d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db6d2 not edx */
  EDX = (~(EDX));
  /* 123db6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db6d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123db6d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123db6db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db6de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123db6e0:;
  /* 123db6e0 jmp 0x123db74d */
  goto L_123db74d;
L_123db6e2:;
  /* 123db6e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db6e5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db6e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123db6ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123db6ef not eax */
  EAX = (~(EAX));
  /* 123db6f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db6f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db6f7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 123db6fe and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123db700 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db703 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db706 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 123db70d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db710 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db713 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 123db716 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123db719 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db71c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db71f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 123db722 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db725 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db728 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123db72c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123db72e jne 0x123db74d */
  if (!C.zf) goto L_123db74d;
  /* 123db730 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db733 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db736 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123db73b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123db73d not eax */
  EAX = (~(EAX));
  /* 123db73f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db742 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123db745 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123db747 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db74a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_123db74d:;
  /* 123db74d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db750 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123db753 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db756 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123db759 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 123db75c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db75f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123db762 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db765 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123db768 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 123db76b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db76e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db771 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db774 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123db777 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db77b jle 0x123db8c7 */
  if ((C.zf||C.sf!=C.of)) goto L_123db8c7;
  /* 123db781 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db784 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db787 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 123db78a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db78d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 123db790 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db793 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 123db796 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db79a jbe 0x123db7a3 */
  if ((C.cf||C.zf)) goto L_123db7a3;
  /* 123db79c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_123db7a3:;
  /* 123db7a3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db7a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123db7a9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 123db7ac mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123db7af mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db7b2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db7b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123db7b8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123db7bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db7be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db7c1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 123db7c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123db7c7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db7ca mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 123db7cd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db7d0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123db7d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db7d6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123db7d9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db7dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db7df mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 123db7e2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db7e5 jne 0x123db8b3 */
  if (!C.zf) goto L_123db8b3;
  /* 123db7eb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db7ef jae 0x123db84c */
  if (!C.cf) goto L_123db84c;
  /* 123db7f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db7f4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db7f7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123db7fb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db7fe add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db801 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123db804 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 123db807 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db80a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db80d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 123db810 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123db812 jne 0x123db82a */
  if (!C.zf) goto L_123db82a;
  /* 123db814 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db819 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db81c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db81e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db821 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123db823 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123db825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db828 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123db82a:;
  /* 123db82a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123db82f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db832 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123db834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db837 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db83a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 123db83e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123db840 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db843 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db846 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 123db84a jmp 0x123db8b3 */
  goto L_123db8b3;
L_123db84c:;
  /* 123db84c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db84f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db852 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123db856 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db859 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db85c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123db85f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 123db862 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db865 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db868 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 123db86b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123db86d jne 0x123db88a */
  if (!C.zf) goto L_123db88a;
  /* 123db86f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db872 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db875 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db87a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db87c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db87f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123db882 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123db884 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db887 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_123db88a:;
  /* 123db88a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db88d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db890 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123db895 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123db897 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db89a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db89d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 123db8a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123db8a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db8a9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db8ac mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_123db8b3:;
  /* 123db8b3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db8b6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db8b9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123db8bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db8be add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db8c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db8c4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_123db8c7:;
  /* 123db8c7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123db8ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db8cd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db8d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123db8d2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123db8d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db8d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db8db add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db8de mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 123db8e1 jmp 0x123dbba2 */
  goto L_123dbba2;
L_123db8e6:;
  /* 123db8e6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123db8e9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db8ec jge 0x123dbba2 */
  if ((C.sf==C.of)) goto L_123dbba2;
  /* 123db8f2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123db8f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db8f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db8fb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123db8fd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123db900 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db903 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db906 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db909 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 123db90c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123db90f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db912 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123db915 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db918 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db91b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123db91e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123db921 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 123db924 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db927 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123db92a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db92e jbe 0x123db937 */
  if ((C.cf||C.zf)) goto L_123db937;
  /* 123db930 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_123db937:;
  /* 123db937 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db93a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 123db93d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123db93f jne 0x123dba80 */
  if (!C.zf) goto L_123dba80;
  /* 123db945 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123db948 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 123db94b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db94e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123db951 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db955 jbe 0x123db95e */
  if ((C.cf||C.zf)) goto L_123db95e;
  /* 123db957 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_123db95e:;
  /* 123db95e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db961 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123db964 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 123db967 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db96a jne 0x123dba40 */
  if (!C.zf) goto L_123dba40;
  /* 123db970 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123db974 jae 0x123db9d5 */
  if (!C.cf) goto L_123db9d5;
  /* 123db976 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db97b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db97e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db980 not edx */
  EDX = (~(EDX));
  /* 123db982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db985 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db988 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 123db98c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123db98e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db991 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db994 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 123db998 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db99b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db99e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123db9a1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123db9a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db9a7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db9aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 123db9ad mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db9b0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123db9b3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123db9b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123db9b9 jne 0x123db9d3 */
  if (!C.zf) goto L_123db9d3;
  /* 123db9bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123db9c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db9c3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123db9c5 not edx */
  EDX = (~(EDX));
  /* 123db9c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db9ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123db9cc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123db9ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123db9d1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123db9d3:;
  /* 123db9d3 jmp 0x123dba40 */
  goto L_123dba40;
L_123db9d5:;
  /* 123db9d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123db9d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123db9db mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123db9e0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123db9e2 not eax */
  EAX = (~(EAX));
  /* 123db9e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db9e7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db9ea mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 123db9f1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123db9f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123db9f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123db9f9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 123dba00 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dba03 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dba06 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 123dba09 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123dba0c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dba0f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dba12 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 123dba15 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dba18 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dba1b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123dba1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dba21 jne 0x123dba40 */
  if (!C.zf) goto L_123dba40;
  /* 123dba23 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dba26 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dba29 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123dba2e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123dba30 not eax */
  EAX = (~(EAX));
  /* 123dba32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dba35 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123dba38 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123dba3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dba3d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_123dba40:;
  /* 123dba40 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123dba43 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123dba46 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123dba49 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123dba4c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 123dba4f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123dba52 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123dba55 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123dba58 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123dba5b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 123dba5e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dba61 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dba64 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123dba67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dba6a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 123dba6d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dba70 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123dba73 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dba77 jbe 0x123dba80 */
  if ((C.cf||C.zf)) goto L_123dba80;
  /* 123dba79 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_123dba80:;
  /* 123dba80 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dba83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dba86 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 123dba89 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123dba8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dba8f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dba92 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123dba95 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 123dba98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dba9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dba9e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123dbaa1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dbaa4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dbaa7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 123dbaaa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dbaad mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123dbab0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dbab3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 123dbab6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dbab9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dbabc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 123dbabf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbac2 jne 0x123dbb8e */
  if (!C.zf) goto L_123dbb8e;
  /* 123dbac8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbacc jae 0x123dbb28 */
  if (!C.cf) goto L_123dbb28;
  /* 123dbace mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dbad1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbad4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123dbad8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dbadb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbade mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 123dbae1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123dbae3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dbae6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbae9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 123dbaec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dbaee jne 0x123dbb06 */
  if (!C.zf) goto L_123dbb06;
  /* 123dbaf0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123dbaf5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dbaf8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123dbafa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dbafd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123dbaff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123dbb01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dbb04 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123dbb06:;
  /* 123dbb06 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123dbb0b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dbb0e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dbb10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dbb13 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dbb16 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 123dbb1a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123dbb1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dbb1f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dbb22 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 123dbb26 jmp 0x123dbb8e */
  goto L_123dbb8e;
L_123dbb28:;
  /* 123dbb28 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dbb2b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbb2e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123dbb32 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dbb35 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbb38 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 123dbb3b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123dbb3d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dbb40 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbb43 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 123dbb46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dbb48 jne 0x123dbb65 */
  if (!C.zf) goto L_123dbb65;
  /* 123dbb4a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dbb4d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dbb50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123dbb55 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123dbb57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dbb5a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123dbb5d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123dbb5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dbb62 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_123dbb65:;
  /* 123dbb65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dbb68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dbb6b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123dbb70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dbb72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dbb75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dbb78 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 123dbb7f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123dbb81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dbb84 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123dbb87 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_123dbb8e:;
  /* 123dbb8e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dbb91 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dbb94 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123dbb96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dbb99 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbb9c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dbb9f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_123dbba2:;
  /* 123dbba2 mov eax, 1 */
  EAX = (0x1u);
L_123dbba7:;
  /* 123dbba7 mov esp, ebp */
  ESP = (EBP);
  /* 123dbba9 pop ebp */
  EBP = (pop32());
  /* 123dbbaa ret  */
  ESPCHK(0x123db5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbb0 @ 0x123dbbb0 (304 bytes, 79 insns) */
void f_123dbbb0(void) {
  FTRACE(0x123dbbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dbbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dbbb1 mov ebp, esp */
  EBP = (ESP);
  /* 123dbbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 123dbbb4 cmp dword ptr [0x12404160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12404160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbbbb je 0x123dbcdc */
  if (C.zf) goto L_123dbcdc;
  /* 123dbbc1 mov eax, dword ptr [0x12404158] */
  EAX = (r32((uint32_t)(0x12404158)));
  /* 123dbbc6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 123dbbc9 mov ecx, dword ptr [0x12404160] */
  ECX = (r32((uint32_t)(0x12404160)));
  /* 123dbbcf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dbbd2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbbd4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123dbbd7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 123dbbdc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 123dbbe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dbbe4 push eax */
  push32((uint32_t)(EAX));
  /* 123dbbe5 call dword ptr [0x1240539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240539c))), 0x123dbbebu);
  /* 123dbbeb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123dbbf0 mov ecx, dword ptr [0x12404158] */
  ECX = (r32((uint32_t)(0x12404158)));
  /* 123dbbf6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dbbf8 mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dbbfd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123dbc00 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123dbc02 mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123dbc08 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123dbc0b mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dbc10 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123dbc13 mov edx, dword ptr [0x12404158] */
  EDX = (r32((uint32_t)(0x12404158)));
  /* 123dbc19 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 123dbc24 mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dbc29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123dbc2c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 123dbc2f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123dbc32 mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dbc37 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123dbc3a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 123dbc3d mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123dbc43 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123dbc46 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 123dbc4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dbc4c jne 0x123dbc62 */
  if (!C.zf) goto L_123dbc62;
  /* 123dbc4e mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123dbc54 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123dbc57 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 123dbc59 mov ecx, dword ptr [0x12404160] */
  ECX = (r32((uint32_t)(0x12404160)));
  /* 123dbc5f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_123dbc62:;
  /* 123dbc62 mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123dbc68 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbc6c jne 0x123dbcd2 */
  if (!C.zf) goto L_123dbcd2;
  /* 123dbc6e cmp dword ptr [0x12404164], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12404164))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbc75 jle 0x123dbcd2 */
  if ((C.zf||C.sf!=C.of)) goto L_123dbcd2;
  /* 123dbc77 mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dbc7c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123dbc7f push ecx */
  push32((uint32_t)(ECX));
  /* 123dbc80 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dbc82 mov edx, dword ptr [0x1240416c] */
  EDX = (r32((uint32_t)(0x1240416c)));
  /* 123dbc88 push edx */
  push32((uint32_t)(EDX));
  /* 123dbc89 call dword ptr [0x12405398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405398))), 0x123dbc8fu);
  /* 123dbc8f mov eax, dword ptr [0x12404164] */
  EAX = (r32((uint32_t)(0x12404164)));
  /* 123dbc94 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dbc97 mov ecx, dword ptr [0x12404168] */
  ECX = (r32((uint32_t)(0x12404168)));
  /* 123dbc9d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbc9f mov edx, dword ptr [0x12404160] */
  EDX = (r32((uint32_t)(0x12404160)));
  /* 123dbca5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbca8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dbcaa push ecx */
  push32((uint32_t)(ECX));
  /* 123dbcab mov eax, dword ptr [0x12404160] */
  EAX = (r32((uint32_t)(0x12404160)));
  /* 123dbcb0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbcb3 push eax */
  push32((uint32_t)(EAX));
  /* 123dbcb4 mov ecx, dword ptr [0x12404160] */
  ECX = (r32((uint32_t)(0x12404160)));
  /* 123dbcba push ecx */
  push32((uint32_t)(ECX));
  /* 123dbcbb call 0x123de2e0 */
  push32(0x123dbcc0u); f_123de2e0();
  /* 123dbcc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbcc3 mov edx, dword ptr [0x12404164] */
  EDX = (r32((uint32_t)(0x12404164)));
  /* 123dbcc9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dbccc mov dword ptr [0x12404164], edx */
  w32((uint32_t)(0x12404164), (EDX));
L_123dbcd2:;
  /* 123dbcd2 mov dword ptr [0x12404160], 0 */
  w32((uint32_t)(0x12404160), (0x0u));
L_123dbcdc:;
  /* 123dbcdc mov esp, ebp */
  ESP = (EBP);
  /* 123dbcde pop ebp */
  EBP = (pop32());
  /* 123dbcdf ret  */
  ESPCHK(0x123dbbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce0 @ 0x123dbce0 (1565 bytes, 343 insns) */
void f_123dbce0(void) {
  FTRACE(0x123dbce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dbce0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dbce1 mov ebp, esp */
  EBP = (ESP);
  /* 123dbce3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dbce9 mov eax, dword ptr [0x12404164] */
  EAX = (r32((uint32_t)(0x12404164)));
  /* 123dbcee imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dbcf1 push eax */
  push32((uint32_t)(EAX));
  /* 123dbcf2 mov ecx, dword ptr [0x12404168] */
  ECX = (r32((uint32_t)(0x12404168)));
  /* 123dbcf8 push ecx */
  push32((uint32_t)(ECX));
  /* 123dbcf9 call dword ptr [0x12405374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405374))), 0x123dbcffu);
  /* 123dbcff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dbd01 je 0x123dbd0b */
  if (C.zf) goto L_123dbd0b;
  /* 123dbd03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123dbd06 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dbd0b:;
  /* 123dbd0b mov edx, dword ptr [0x12404168] */
  EDX = (r32((uint32_t)(0x12404168)));
  /* 123dbd11 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 123dbd17 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 123dbd21 jmp 0x123dbd32 */
  goto L_123dbd32;
L_123dbd23:;
  /* 123dbd23 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 123dbd29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbd2c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_123dbd32:;
  /* 123dbd32 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 123dbd38 cmp ecx, dword ptr [0x12404164] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12404164))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbd3e jge 0x123dc2f7 */
  if ((C.sf==C.of)) goto L_123dc2f7;
  /* 123dbd44 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 123dbd4a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123dbd4d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 123dbd53 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 123dbd58 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 123dbd5e push ecx */
  push32((uint32_t)(ECX));
  /* 123dbd5f call dword ptr [0x12405374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405374))), 0x123dbd65u);
  /* 123dbd65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dbd67 je 0x123dbd73 */
  if (C.zf) goto L_123dbd73;
  /* 123dbd69 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 123dbd6e jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dbd73:;
  /* 123dbd73 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 123dbd79 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 123dbd7c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 123dbd82 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 123dbd88 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbd8e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123dbd91 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 123dbd97 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123dbd9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dbd9d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 123dbda7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 123dbdb1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123dbdb8 jmp 0x123dbdc3 */
  goto L_123dbdc3;
L_123dbdba:;
  /* 123dbdba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dbdbd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbdc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_123dbdc3:;
  /* 123dbdc3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbdc7 jge 0x123dc2bb */
  if ((C.sf==C.of)) goto L_123dc2bb;
  /* 123dbdcd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 123dbdd7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 123dbde1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 123dbdeb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 123dbdf5 jmp 0x123dbe06 */
  goto L_123dbe06;
L_123dbdf7:;
  /* 123dbdf7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 123dbdfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbe00 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_123dbe06:;
  /* 123dbe06 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbe0d jge 0x123dbe22 */
  if ((C.sf==C.of)) goto L_123dbe22;
  /* 123dbe0f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 123dbe15 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 123dbe20 jmp 0x123dbdf7 */
  goto L_123dbdf7;
L_123dbe22:;
  /* 123dbe22 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbe26 jl 0x123dc25d */
  if ((C.sf!=C.of)) goto L_123dc25d;
  /* 123dbe2c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 123dbe31 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 123dbe37 push ecx */
  push32((uint32_t)(ECX));
  /* 123dbe38 call dword ptr [0x12405374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405374))), 0x123dbe3eu);
  /* 123dbe3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dbe40 je 0x123dbe4c */
  if (C.zf) goto L_123dbe4c;
  /* 123dbe42 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 123dbe47 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dbe4c:;
  /* 123dbe4c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 123dbe52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123dbe55 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 123dbe5f jmp 0x123dbe70 */
  goto L_123dbe70;
L_123dbe61:;
  /* 123dbe61 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 123dbe67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbe6a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_123dbe70:;
  /* 123dbe70 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbe77 jge 0x123dbff4 */
  if ((C.sf==C.of)) goto L_123dbff4;
  /* 123dbe7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dbe80 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbe83 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 123dbe89 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 123dbe8f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbe95 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 123dbe9b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 123dbea1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbea5 jne 0x123dbeb2 */
  if (!C.zf) goto L_123dbeb2;
  /* 123dbea7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 123dbead cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbeb0 je 0x123dbebc */
  if (C.zf) goto L_123dbebc;
L_123dbeb2:;
  /* 123dbeb2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 123dbeb7 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dbebc:;
  /* 123dbebc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 123dbec2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123dbec4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 123dbeca mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 123dbed0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 123dbed6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 123dbedc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 123dbedf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dbee1 je 0x123dbf19 */
  if (C.zf) goto L_123dbf19;
  /* 123dbee3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 123dbee9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dbeec mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 123dbef2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbefc jle 0x123dbf08 */
  if ((C.zf||C.sf!=C.of)) goto L_123dbf08;
  /* 123dbefe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 123dbf03 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dbf08:;
  /* 123dbf08 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 123dbf0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbf11 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 123dbf17 jmp 0x123dbf5b */
  goto L_123dbf5b;
L_123dbf19:;
  /* 123dbf19 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 123dbf1f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 123dbf22 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dbf25 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 123dbf2b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbf32 jle 0x123dbf3e */
  if ((C.zf||C.sf!=C.of)) goto L_123dbf3e;
  /* 123dbf34 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_123dbf3e:;
  /* 123dbf3e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 123dbf44 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 123dbf4b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbf4e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 123dbf54 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_123dbf5b:;
  /* 123dbf5b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbf62 jl 0x123dbf7d */
  if ((C.sf!=C.of)) goto L_123dbf7d;
  /* 123dbf64 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 123dbf6a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 123dbf6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dbf6f jne 0x123dbf7d */
  if (!C.zf) goto L_123dbf7d;
  /* 123dbf71 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbf7b jle 0x123dbf87 */
  if ((C.zf||C.sf!=C.of)) goto L_123dbf87;
L_123dbf7d:;
  /* 123dbf7d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 123dbf82 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dbf87:;
  /* 123dbf87 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 123dbf8d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbf93 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 123dbf96 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbf9c je 0x123dbfa8 */
  if (C.zf) goto L_123dbfa8;
  /* 123dbf9e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 123dbfa3 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dbfa8:;
  /* 123dbfa8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 123dbfae add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbfb4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 123dbfba mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 123dbfc0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbfc6 jb 0x123dbebc */
  if (C.cf) goto L_123dbebc;
  /* 123dbfcc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 123dbfd2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbfd8 je 0x123dbfe4 */
  if (C.zf) goto L_123dbfe4;
  /* 123dbfda mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 123dbfdf jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dbfe4:;
  /* 123dbfe4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dbfe7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dbfec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123dbfef jmp 0x123dbe61 */
  goto L_123dbe61;
L_123dbff4:;
  /* 123dbff4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dbff7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123dbff9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dbfff je 0x123dc00b */
  if (C.zf) goto L_123dc00b;
  /* 123dc001 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 123dc006 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dc00b:;
  /* 123dc00b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dc00e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 123dc014 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 123dc01b jmp 0x123dc026 */
  goto L_123dc026;
L_123dc01d:;
  /* 123dc01d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dc020 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc023 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_123dc026:;
  /* 123dc026 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc02a jge 0x123dc25d */
  if ((C.sf==C.of)) goto L_123dc25d;
  /* 123dc030 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 123dc03a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 123dc040 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_123dc046:;
  /* 123dc046 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 123dc04c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123dc04f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 123dc055 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 123dc05b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc061 je 0x123dc18a */
  if (C.zf) goto L_123dc18a;
  /* 123dc067 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dc06a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 123dc070 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc077 je 0x123dc18a */
  if (C.zf) goto L_123dc18a;
  /* 123dc07d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 123dc083 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc089 jb 0x123dc09e */
  if (C.cf) goto L_123dc09e;
  /* 123dc08b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 123dc091 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc096 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc09c jb 0x123dc0a8 */
  if (C.cf) goto L_123dc0a8;
L_123dc09e:;
  /* 123dc09e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 123dc0a3 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dc0a8:;
  /* 123dc0a8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 123dc0ae and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 123dc0b4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 123dc0ba mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 123dc0c0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc0c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123dc0c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dc0c9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc0ce mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_123dc0d4:;
  /* 123dc0d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dc0d7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc0dd je 0x123dc0fe */
  if (C.zf) goto L_123dc0fe;
  /* 123dc0df mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dc0e2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc0e8 jne 0x123dc0ec */
  if (!C.zf) goto L_123dc0ec;
  /* 123dc0ea jmp 0x123dc0fe */
  goto L_123dc0fe;
L_123dc0ec:;
  /* 123dc0ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dc0ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123dc0f1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 123dc0f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dc0f7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc0f9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123dc0fc jmp 0x123dc0d4 */
  goto L_123dc0d4;
L_123dc0fe:;
  /* 123dc0fe mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dc101 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc107 jne 0x123dc113 */
  if (!C.zf) goto L_123dc113;
  /* 123dc109 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 123dc10e jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dc113:;
  /* 123dc113 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 123dc119 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123dc11b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 123dc11e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dc121 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 123dc127 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc12e jle 0x123dc13a */
  if ((C.zf||C.sf!=C.of)) goto L_123dc13a;
  /* 123dc130 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_123dc13a:;
  /* 123dc13a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 123dc140 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc143 je 0x123dc14f */
  if (C.zf) goto L_123dc14f;
  /* 123dc145 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 123dc14a jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dc14f:;
  /* 123dc14f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 123dc155 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123dc158 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc15e je 0x123dc16a */
  if (C.zf) goto L_123dc16a;
  /* 123dc160 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 123dc165 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dc16a:;
  /* 123dc16a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 123dc170 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 123dc176 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 123dc17c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc17f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 123dc185 jmp 0x123dc046 */
  goto L_123dc046;
L_123dc18a:;
  /* 123dc18a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc191 je 0x123dc201 */
  if (C.zf) goto L_123dc201;
  /* 123dc193 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc197 jge 0x123dc1cb */
  if ((C.sf==C.of)) goto L_123dc1cb;
  /* 123dc199 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123dc19e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dc1a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dc1a3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 123dc1a9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc1ab mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 123dc1b1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123dc1b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dc1b9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dc1bb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 123dc1c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc1c3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 123dc1c9 jmp 0x123dc201 */
  goto L_123dc201;
L_123dc1cb:;
  /* 123dc1cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dc1ce sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dc1d1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123dc1d6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dc1d8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 123dc1de or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc1e0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 123dc1e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dc1e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dc1ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123dc1f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123dc1f3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 123dc1f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc1fb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_123dc201:;
  /* 123dc201 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 123dc207 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123dc20a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc210 jne 0x123dc224 */
  if (!C.zf) goto L_123dc224;
  /* 123dc212 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dc215 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 123dc21b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc222 je 0x123dc22e */
  if (C.zf) goto L_123dc22e;
L_123dc224:;
  /* 123dc224 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 123dc229 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dc22e:;
  /* 123dc22e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 123dc234 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123dc237 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc23d je 0x123dc249 */
  if (C.zf) goto L_123dc249;
  /* 123dc23f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 123dc244 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dc249:;
  /* 123dc249 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 123dc24f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc252 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 123dc258 jmp 0x123dc01d */
  goto L_123dc01d;
L_123dc25d:;
  /* 123dc25d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dc260 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 123dc266 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 123dc26c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc270 jne 0x123dc28a */
  if (!C.zf) goto L_123dc28a;
  /* 123dc272 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dc275 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 123dc27b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 123dc281 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc288 je 0x123dc291 */
  if (C.zf) goto L_123dc291;
L_123dc28a:;
  /* 123dc28a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 123dc28f jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dc291:;
  /* 123dc291 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 123dc297 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc29d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 123dc2a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dc2a6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc2ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123dc2ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc2b1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 123dc2b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123dc2b6 jmp 0x123dbdba */
  goto L_123dbdba;
L_123dc2bb:;
  /* 123dc2bb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 123dc2c1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 123dc2c7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc2c9 jne 0x123dc2dc */
  if (!C.zf) goto L_123dc2dc;
  /* 123dc2cb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 123dc2d1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 123dc2d7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc2da je 0x123dc2e3 */
  if (C.zf) goto L_123dc2e3;
L_123dc2dc:;
  /* 123dc2dc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 123dc2e1 jmp 0x123dc2f9 */
  goto L_123dc2f9;
L_123dc2e3:;
  /* 123dc2e3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 123dc2e9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc2ec mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 123dc2f2 jmp 0x123dbd23 */
  goto L_123dbd23;
L_123dc2f7:;
  /* 123dc2f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123dc2f9:;
  /* 123dc2f9 mov esp, ebp */
  ESP = (EBP);
  /* 123dc2fb pop ebp */
  EBP = (pop32());
  /* 123dc2fc ret  */
  ESPCHK(0x123dbce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c300 @ 0x123dc300 (250 bytes, 92 insns) */
void f_123dc300(void) {
  FTRACE(0x123dc300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dc300 push ebp */
  push32((uint32_t)(EBP));
  /* 123dc301 mov ebp, esp */
  EBP = (ESP);
  /* 123dc303 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dc306 push ebx */
  push32((uint32_t)(EBX));
  /* 123dc307 push esi */
  push32((uint32_t)(ESI));
  /* 123dc308 push edi */
  push32((uint32_t)(EDI));
  /* 123dc309 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 123dc30c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123dc30f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 123dc312 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_123dc315:;
  /* 123dc315 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc319 jne 0x123dc339 */
  if (!C.zf) goto L_123dc339;
  /* 123dc31b push 0x123fe46c */
  push32((uint32_t)(0x123fe46cu));
  /* 123dc320 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dc322 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 123dc324 push 0x123fe460 */
  push32((uint32_t)(0x123fe460u));
  /* 123dc329 push 2 */
  push32((uint32_t)(0x2u));
  /* 123dc32b call 0x123d54b0 */
  push32(0x123dc330u); f_123d54b0();
  /* 123dc330 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc333 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc336 jne 0x123dc339 */
  if (!C.zf) goto L_123dc339;
  /* 123dc338 int3  */
  x86_unimpl("int3 @ 0x123dc338");
L_123dc339:;
  /* 123dc339 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dc33b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dc33d jne 0x123dc315 */
  if (!C.zf) goto L_123dc315;
L_123dc33f:;
  /* 123dc33f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc343 jne 0x123dc363 */
  if (!C.zf) goto L_123dc363;
  /* 123dc345 push 0x123fe450 */
  push32((uint32_t)(0x123fe450u));
  /* 123dc34a push 0 */
  push32((uint32_t)(0x0u));
  /* 123dc34c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 123dc34e push 0x123fe460 */
  push32((uint32_t)(0x123fe460u));
  /* 123dc353 push 2 */
  push32((uint32_t)(0x2u));
  /* 123dc355 call 0x123d54b0 */
  push32(0x123dc35au); f_123d54b0();
  /* 123dc35a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc35d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc360 jne 0x123dc363 */
  if (!C.zf) goto L_123dc363;
  /* 123dc362 int3  */
  x86_unimpl("int3 @ 0x123dc362");
L_123dc363:;
  /* 123dc363 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dc367 jne 0x123dc33f */
  if (!C.zf) goto L_123dc33f;
  /* 123dc369 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc36c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 123dc373 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc379 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123dc37c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc37f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc382 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123dc384 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc387 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 123dc38e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123dc391 push ecx */
  push32((uint32_t)(ECX));
  /* 123dc392 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dc395 push edx */
  push32((uint32_t)(EDX));
  /* 123dc396 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc399 push eax */
  push32((uint32_t)(EAX));
  /* 123dc39a call 0x123dd380 */
  push32(0x123dc39fu); f_123dd380();
  /* 123dc39f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc3a2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123dc3a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc3a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123dc3ab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dc3ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc3b1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123dc3b4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc3b7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc3bb jl 0x123dc3df */
  if ((C.sf!=C.of)) goto L_123dc3df;
  /* 123dc3bd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc3c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123dc3c2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123dc3c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123dc3c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123dc3cd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 123dc3d0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc3d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123dc3d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc3d8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc3db mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123dc3dd jmp 0x123dc3f0 */
  goto L_123dc3f0;
L_123dc3df:;
  /* 123dc3df mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc3e2 push edx */
  push32((uint32_t)(EDX));
  /* 123dc3e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dc3e5 call 0x123dd100 */
  push32(0x123dc3eau); f_123dd100();
  /* 123dc3ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc3ed mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_123dc3f0:;
  /* 123dc3f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dc3f3 pop edi */
  EDI = (pop32());
  /* 123dc3f4 pop esi */
  ESI = (pop32());
  /* 123dc3f5 pop ebx */
  EBX = (pop32());
  /* 123dc3f6 mov esp, ebp */
  ESP = (EBP);
  /* 123dc3f8 pop ebp */
  EBP = (pop32());
  /* 123dc3f9 ret  */
  ESPCHK(0x123dc300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c400 @ 0x123dc400 (183 bytes, 58 insns) */
void f_123dc400(void) {
  FTRACE(0x123dc400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dc400 push ebp */
  push32((uint32_t)(EBP));
  /* 123dc401 mov ebp, esp */
  EBP = (ESP);
  /* 123dc403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dc406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc409 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc40c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc411 ja 0x123dc42a */
  if ((!C.cf&&!C.zf)) goto L_123dc42a;
  /* 123dc413 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc416 mov edx, dword ptr [0x12400c98] */
  EDX = (r32((uint32_t)(0x12400c98)));
  /* 123dc41c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc41e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 123dc422 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 123dc425 jmp 0x123dc4b3 */
  goto L_123dc4b3;
L_123dc42a:;
  /* 123dc42a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc42d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 123dc430 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123dc436 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123dc43c mov edx, dword ptr [0x12400c98] */
  EDX = (r32((uint32_t)(0x12400c98)));
  /* 123dc442 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc444 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 123dc448 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 123dc44d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dc44f je 0x123dc473 */
  if (C.zf) goto L_123dc473;
  /* 123dc451 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc454 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 123dc457 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123dc45d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 123dc460 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 123dc463 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 123dc466 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 123dc46a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 123dc471 jmp 0x123dc484 */
  goto L_123dc484;
L_123dc473:;
  /* 123dc473 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 123dc476 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 123dc479 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 123dc47d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_123dc484:;
  /* 123dc484 push 1 */
  push32((uint32_t)(0x1u));
  /* 123dc486 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dc488 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dc48a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 123dc48d push ecx */
  push32((uint32_t)(ECX));
  /* 123dc48e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dc491 push edx */
  push32((uint32_t)(EDX));
  /* 123dc492 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 123dc495 push eax */
  push32((uint32_t)(EAX));
  /* 123dc496 push 1 */
  push32((uint32_t)(0x1u));
  /* 123dc498 call 0x123de620 */
  push32(0x123dc49du); f_123de620();
  /* 123dc49d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc4a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dc4a2 jne 0x123dc4a8 */
  if (!C.zf) goto L_123dc4a8;
  /* 123dc4a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc4a6 jmp 0x123dc4b3 */
  goto L_123dc4b3;
L_123dc4a8:;
  /* 123dc4a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc4ab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123dc4b0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_123dc4b3:;
  /* 123dc4b3 mov esp, ebp */
  ESP = (EBP);
  /* 123dc4b5 pop ebp */
  EBP = (pop32());
  /* 123dc4b6 ret  */
  ESPCHK(0x123dc400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4c0 @ 0x123dc4c0 (836 bytes, 238 insns) */
void f_123dc4c0(void) {
  FTRACE(0x123dc4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dc4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dc4c1 mov ebp, esp */
  EBP = (ESP);
  /* 123dc4c3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dc4c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123dc4c8 call 0x123d9df0 */
  push32(0x123dc4cdu); f_123d9df0();
  /* 123dc4cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc4d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc4d3 push eax */
  push32((uint32_t)(EAX));
  /* 123dc4d4 call 0x123dc810 */
  push32(0x123dc4d9u); f_123dc810();
  /* 123dc4d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc4dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123dc4df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc4e2 cmp ecx, dword ptr [0x12403ea4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12403ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc4e8 jne 0x123dc4fb */
  if (!C.zf) goto L_123dc4fb;
  /* 123dc4ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123dc4ec call 0x123d9e90 */
  push32(0x123dc4f1u); f_123d9e90();
  /* 123dc4f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc4f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc4f6 jmp 0x123dc800 */
  goto L_123dc800;
L_123dc4fb:;
  /* 123dc4fb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc4ff jne 0x123dc51c */
  if (!C.zf) goto L_123dc51c;
  /* 123dc501 call 0x123dc8f0 */
  push32(0x123dc506u); f_123dc8f0();
  /* 123dc506 call 0x123dc970 */
  push32(0x123dc50bu); f_123dc970();
  /* 123dc50b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123dc50d call 0x123d9e90 */
  push32(0x123dc512u); f_123d9e90();
  /* 123dc512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc515 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc517 jmp 0x123dc800 */
  goto L_123dc800;
L_123dc51c:;
  /* 123dc51c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123dc523 jmp 0x123dc52e */
  goto L_123dc52e;
L_123dc525:;
  /* 123dc525 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc528 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc52b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123dc52e:;
  /* 123dc52e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc532 jae 0x123dc67f */
  if (!C.cf) goto L_123dc67f;
  /* 123dc538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc53b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dc53e mov ecx, dword ptr [eax + 0x12400eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12400eb8)));
  /* 123dc544 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc547 jne 0x123dc67a */
  if (!C.zf) goto L_123dc67a;
  /* 123dc54d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123dc554 jmp 0x123dc55f */
  goto L_123dc55f;
L_123dc556:;
  /* 123dc556 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc559 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc55c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_123dc55f:;
  /* 123dc55f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc566 jae 0x123dc574 */
  if (!C.cf) goto L_123dc574;
  /* 123dc568 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc56b mov byte ptr [eax + 0x12404040], 0 */
  w8((uint32_t)(EAX + 0x12404040), (0x0u));
  /* 123dc572 jmp 0x123dc556 */
  goto L_123dc556;
L_123dc574:;
  /* 123dc574 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123dc57b jmp 0x123dc586 */
  goto L_123dc586;
L_123dc57d:;
  /* 123dc57d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dc580 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc583 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_123dc586:;
  /* 123dc586 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc58a jae 0x123dc607 */
  if (!C.cf) goto L_123dc607;
  /* 123dc58c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc58f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dc592 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dc595 lea ecx, [edx + eax*8 + 0x12400ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12400ec8));
  /* 123dc59c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123dc59f jmp 0x123dc5aa */
  goto L_123dc5aa;
L_123dc5a1:;
  /* 123dc5a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dc5a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc5a7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123dc5aa:;
  /* 123dc5aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dc5ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123dc5af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123dc5b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dc5b3 je 0x123dc602 */
  if (C.zf) goto L_123dc602;
  /* 123dc5b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dc5b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc5ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 123dc5bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dc5bf je 0x123dc602 */
  if (C.zf) goto L_123dc602;
  /* 123dc5c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dc5c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dc5c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123dc5c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 123dc5cb jmp 0x123dc5d6 */
  goto L_123dc5d6;
L_123dc5cd:;
  /* 123dc5cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc5d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc5d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_123dc5d6:;
  /* 123dc5d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dc5d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dc5db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 123dc5de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc5e1 ja 0x123dc600 */
  if ((!C.cf&&!C.zf)) goto L_123dc600;
  /* 123dc5e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc5e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dc5e9 mov dl, byte ptr [eax + 0x12404041] */
  DL = (r8((uint32_t)(EAX + 0x12404041)));
  /* 123dc5ef or dl, byte ptr [ecx + 0x12400eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12400eb0))); DL = (_r); fl_logic(_r,8); }
  /* 123dc5f5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc5f8 mov byte ptr [eax + 0x12404041], dl */
  w8((uint32_t)(EAX + 0x12404041), (DL));
  /* 123dc5fe jmp 0x123dc5cd */
  goto L_123dc5cd;
L_123dc600:;
  /* 123dc600 jmp 0x123dc5a1 */
  goto L_123dc5a1;
L_123dc602:;
  /* 123dc602 jmp 0x123dc57d */
  goto L_123dc57d;
L_123dc607:;
  /* 123dc607 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc60a mov dword ptr [0x12403ea4], ecx */
  w32((uint32_t)(0x12403ea4), (ECX));
  /* 123dc610 mov dword ptr [0x12403f2c], 1 */
  w32((uint32_t)(0x12403f2c), (0x1u));
  /* 123dc61a mov edx, dword ptr [0x12403ea4] */
  EDX = (r32((uint32_t)(0x12403ea4)));
  /* 123dc620 push edx */
  push32((uint32_t)(EDX));
  /* 123dc621 call 0x123dc870 */
  push32(0x123dc626u); f_123dc870();
  /* 123dc626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc629 mov dword ptr [0x12404144], eax */
  w32((uint32_t)(0x12404144), (EAX));
  /* 123dc62e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123dc635 jmp 0x123dc640 */
  goto L_123dc640;
L_123dc637:;
  /* 123dc637 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dc63a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc63d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_123dc640:;
  /* 123dc640 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc644 jae 0x123dc664 */
  if (!C.cf) goto L_123dc664;
  /* 123dc646 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc649 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dc64c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dc64f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dc652 mov cx, word ptr [ecx + eax*2 + 0x12400ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12400ebc)));
  /* 123dc65a mov word ptr [edx*2 + 0x12403f20], cx */
  w16((uint32_t)(EDX*2 + 0x12403f20), (CX));
  /* 123dc662 jmp 0x123dc637 */
  goto L_123dc637;
L_123dc664:;
  /* 123dc664 call 0x123dc970 */
  push32(0x123dc669u); f_123dc970();
  /* 123dc669 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123dc66b call 0x123d9e90 */
  push32(0x123dc670u); f_123d9e90();
  /* 123dc670 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc675 jmp 0x123dc800 */
  goto L_123dc800;
L_123dc67a:;
  /* 123dc67a jmp 0x123dc525 */
  goto L_123dc525;
L_123dc67f:;
  /* 123dc67f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 123dc682 push edx */
  push32((uint32_t)(EDX));
  /* 123dc683 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc686 push eax */
  push32((uint32_t)(EAX));
  /* 123dc687 call dword ptr [0x124052ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052ec))), 0x123dc68du);
  /* 123dc68d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc690 jne 0x123dc7d2 */
  if (!C.zf) goto L_123dc7d2;
  /* 123dc696 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123dc69d jmp 0x123dc6a8 */
  goto L_123dc6a8;
L_123dc69f:;
  /* 123dc69f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc6a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc6a5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_123dc6a8:;
  /* 123dc6a8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc6af jae 0x123dc6bd */
  if (!C.cf) goto L_123dc6bd;
  /* 123dc6b1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc6b4 mov byte ptr [edx + 0x12404040], 0 */
  w8((uint32_t)(EDX + 0x12404040), (0x0u));
  /* 123dc6bb jmp 0x123dc69f */
  goto L_123dc69f;
L_123dc6bd:;
  /* 123dc6bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc6c0 mov dword ptr [0x12403ea4], eax */
  w32((uint32_t)(0x12403ea4), (EAX));
  /* 123dc6c5 mov dword ptr [0x12404144], 0 */
  w32((uint32_t)(0x12404144), (0x0u));
  /* 123dc6cf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc6d3 jbe 0x123dc78e */
  if ((C.cf||C.zf)) goto L_123dc78e;
  /* 123dc6d9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 123dc6dc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 123dc6df jmp 0x123dc6ea */
  goto L_123dc6ea;
L_123dc6e1:;
  /* 123dc6e1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dc6e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc6e7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_123dc6ea:;
  /* 123dc6ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dc6ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123dc6ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123dc6f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dc6f3 je 0x123dc73c */
  if (C.zf) goto L_123dc73c;
  /* 123dc6f5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dc6f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc6fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 123dc6fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dc6ff je 0x123dc73c */
  if (C.zf) goto L_123dc73c;
  /* 123dc701 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dc704 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dc706 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123dc708 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 123dc70b jmp 0x123dc716 */
  goto L_123dc716;
L_123dc70d:;
  /* 123dc70d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc710 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc713 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_123dc716:;
  /* 123dc716 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dc719 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dc71b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 123dc71e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc721 ja 0x123dc73a */
  if ((!C.cf&&!C.zf)) goto L_123dc73a;
  /* 123dc723 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc726 mov cl, byte ptr [eax + 0x12404041] */
  CL = (r8((uint32_t)(EAX + 0x12404041)));
  /* 123dc72c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 123dc72f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc732 mov byte ptr [edx + 0x12404041], cl */
  w8((uint32_t)(EDX + 0x12404041), (CL));
  /* 123dc738 jmp 0x123dc70d */
  goto L_123dc70d;
L_123dc73a:;
  /* 123dc73a jmp 0x123dc6e1 */
  goto L_123dc6e1;
L_123dc73c:;
  /* 123dc73c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 123dc743 jmp 0x123dc74e */
  goto L_123dc74e;
L_123dc745:;
  /* 123dc745 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc748 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc74b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_123dc74e:;
  /* 123dc74e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc755 jae 0x123dc76e */
  if (!C.cf) goto L_123dc76e;
  /* 123dc757 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc75a mov dl, byte ptr [ecx + 0x12404041] */
  DL = (r8((uint32_t)(ECX + 0x12404041)));
  /* 123dc760 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 123dc763 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dc766 mov byte ptr [eax + 0x12404041], dl */
  w8((uint32_t)(EAX + 0x12404041), (DL));
  /* 123dc76c jmp 0x123dc745 */
  goto L_123dc745;
L_123dc76e:;
  /* 123dc76e mov ecx, dword ptr [0x12403ea4] */
  ECX = (r32((uint32_t)(0x12403ea4)));
  /* 123dc774 push ecx */
  push32((uint32_t)(ECX));
  /* 123dc775 call 0x123dc870 */
  push32(0x123dc77au); f_123dc870();
  /* 123dc77a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc77d mov dword ptr [0x12404144], eax */
  w32((uint32_t)(0x12404144), (EAX));
  /* 123dc782 mov dword ptr [0x12403f2c], 1 */
  w32((uint32_t)(0x12403f2c), (0x1u));
  /* 123dc78c jmp 0x123dc798 */
  goto L_123dc798;
L_123dc78e:;
  /* 123dc78e mov dword ptr [0x12403f2c], 0 */
  w32((uint32_t)(0x12403f2c), (0x0u));
L_123dc798:;
  /* 123dc798 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123dc79f jmp 0x123dc7aa */
  goto L_123dc7aa;
L_123dc7a1:;
  /* 123dc7a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dc7a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc7a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123dc7aa:;
  /* 123dc7aa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc7ae jae 0x123dc7bf */
  if (!C.cf) goto L_123dc7bf;
  /* 123dc7b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dc7b3 mov word ptr [eax*2 + 0x12403f20], 0 */
  w16((uint32_t)(EAX*2 + 0x12403f20), (0x0u));
  /* 123dc7bd jmp 0x123dc7a1 */
  goto L_123dc7a1;
L_123dc7bf:;
  /* 123dc7bf call 0x123dc970 */
  push32(0x123dc7c4u); f_123dc970();
  /* 123dc7c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123dc7c6 call 0x123d9e90 */
  push32(0x123dc7cbu); f_123d9e90();
  /* 123dc7cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc7ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc7d0 jmp 0x123dc800 */
  goto L_123dc800;
L_123dc7d2:;
  /* 123dc7d2 cmp dword ptr [0x124029c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc7d9 je 0x123dc7f3 */
  if (C.zf) goto L_123dc7f3;
  /* 123dc7db call 0x123dc8f0 */
  push32(0x123dc7e0u); f_123dc8f0();
  /* 123dc7e0 call 0x123dc970 */
  push32(0x123dc7e5u); f_123dc970();
  /* 123dc7e5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123dc7e7 call 0x123d9e90 */
  push32(0x123dc7ecu); f_123d9e90();
  /* 123dc7ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc7ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dc7f1 jmp 0x123dc800 */
  goto L_123dc800;
L_123dc7f3:;
  /* 123dc7f3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123dc7f5 call 0x123d9e90 */
  push32(0x123dc7fau); f_123d9e90();
  /* 123dc7fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc7fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_123dc800:;
  /* 123dc800 mov esp, ebp */
  ESP = (EBP);
  /* 123dc802 pop ebp */
  EBP = (pop32());
  /* 123dc803 ret  */
  ESPCHK(0x123dc4c0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x123dc810 (89 bytes, 21 insns) */
void f_123dc810(void) {
  FTRACE(0x123dc810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dc810 push ebp */
  push32((uint32_t)(EBP));
  /* 123dc811 mov ebp, esp */
  EBP = (ESP);
  /* 123dc813 mov dword ptr [0x124029c0], 0 */
  w32((uint32_t)(0x124029c0), (0x0u));
  /* 123dc81d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc821 jne 0x123dc835 */
  if (!C.zf) goto L_123dc835;
  /* 123dc823 mov dword ptr [0x124029c0], 1 */
  w32((uint32_t)(0x124029c0), (0x1u));
  /* 123dc82d call dword ptr [0x124052e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e4))), 0x123dc833u);
  /* 123dc833 jmp 0x123dc867 */
  goto L_123dc867;
L_123dc835:;
  /* 123dc835 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc839 jne 0x123dc84d */
  if (!C.zf) goto L_123dc84d;
  /* 123dc83b mov dword ptr [0x124029c0], 1 */
  w32((uint32_t)(0x124029c0), (0x1u));
  /* 123dc845 call dword ptr [0x124052f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052f4))), 0x123dc84bu);
  /* 123dc84b jmp 0x123dc867 */
  goto L_123dc867;
L_123dc84d:;
  /* 123dc84d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc851 jne 0x123dc864 */
  if (!C.zf) goto L_123dc864;
  /* 123dc853 mov dword ptr [0x124029c0], 1 */
  w32((uint32_t)(0x124029c0), (0x1u));
  /* 123dc85d mov eax, dword ptr [0x124029e0] */
  EAX = (r32((uint32_t)(0x124029e0)));
  /* 123dc862 jmp 0x123dc867 */
  goto L_123dc867;
L_123dc864:;
  /* 123dc864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_123dc867:;
  /* 123dc867 pop ebp */
  EBP = (pop32());
  /* 123dc868 ret  */
  ESPCHK(0x123dc810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c870 @ 0x123dc870 (80 bytes, 26 insns) [1 switch table(s)] */
void f_123dc870(void) {
  FTRACE(0x123dc870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dc870 push ebp */
  push32((uint32_t)(EBP));
  /* 123dc871 mov ebp, esp */
  EBP = (ESP);
  /* 123dc873 push ecx */
  push32((uint32_t)(ECX));
  /* 123dc874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dc877 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dc87a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc87d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dc883 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123dc886 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc88a ja 0x123dc8ba */
  if ((!C.cf&&!C.zf)) goto L_123dc8ba;
  /* 123dc88c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc88f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dc891 mov dl, byte ptr [eax + 0x123dc8d4] */
  DL = (r8((uint32_t)(EAX + 0x123dc8d4)));
  /* 123dc897 jmp dword ptr [edx*4 + 0x123dc8c0] */
  switch (EDX) {
    case 0: goto L_123dc89e;
    case 1: goto L_123dc8a5;
    case 2: goto L_123dc8ac;
    case 3: goto L_123dc8b3;
    case 4: goto L_123dc8ba;
    default: x86_unimpl("switch@0x123dc897 out of table"); return;
  }
L_123dc89e:;
  /* 123dc89e mov eax, 0x411 */
  EAX = (0x411u);
  /* 123dc8a3 jmp 0x123dc8bc */
  goto L_123dc8bc;
L_123dc8a5:;
  /* 123dc8a5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 123dc8aa jmp 0x123dc8bc */
  goto L_123dc8bc;
L_123dc8ac:;
  /* 123dc8ac mov eax, 0x412 */
  EAX = (0x412u);
  /* 123dc8b1 jmp 0x123dc8bc */
  goto L_123dc8bc;
L_123dc8b3:;
  /* 123dc8b3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 123dc8b8 jmp 0x123dc8bc */
  goto L_123dc8bc;
L_123dc8ba:;
  /* 123dc8ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123dc8bc:;
  /* 123dc8bc mov esp, ebp */
  ESP = (EBP);
  /* 123dc8be pop ebp */
  EBP = (pop32());
  /* 123dc8bf ret  */
  ESPCHK(0x123dc870u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x123dc8f0 (116 bytes, 29 insns) */
void f_123dc8f0(void) {
  FTRACE(0x123dc8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dc8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dc8f1 mov ebp, esp */
  EBP = (ESP);
  /* 123dc8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 123dc8f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123dc8fb jmp 0x123dc906 */
  goto L_123dc906;
L_123dc8fd:;
  /* 123dc8fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc900 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc903 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123dc906:;
  /* 123dc906 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc90d jge 0x123dc91b */
  if ((C.sf==C.of)) goto L_123dc91b;
  /* 123dc90f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc912 mov byte ptr [ecx + 0x12404040], 0 */
  w8((uint32_t)(ECX + 0x12404040), (0x0u));
  /* 123dc919 jmp 0x123dc8fd */
  goto L_123dc8fd;
L_123dc91b:;
  /* 123dc91b mov dword ptr [0x12403ea4], 0 */
  w32((uint32_t)(0x12403ea4), (0x0u));
  /* 123dc925 mov dword ptr [0x12403f2c], 0 */
  w32((uint32_t)(0x12403f2c), (0x0u));
  /* 123dc92f mov dword ptr [0x12404144], 0 */
  w32((uint32_t)(0x12404144), (0x0u));
  /* 123dc939 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123dc940 jmp 0x123dc94b */
  goto L_123dc94b;
L_123dc942:;
  /* 123dc942 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc945 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc948 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123dc94b:;
  /* 123dc94b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc94f jge 0x123dc960 */
  if ((C.sf==C.of)) goto L_123dc960;
  /* 123dc951 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc954 mov word ptr [eax*2 + 0x12403f20], 0 */
  w16((uint32_t)(EAX*2 + 0x12403f20), (0x0u));
  /* 123dc95e jmp 0x123dc942 */
  goto L_123dc942;
L_123dc960:;
  /* 123dc960 mov esp, ebp */
  ESP = (EBP);
  /* 123dc962 pop ebp */
  EBP = (pop32());
  /* 123dc963 ret  */
  ESPCHK(0x123dc8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x123dc970 (770 bytes, 175 insns) */
void f_123dc970(void) {
  FTRACE(0x123dc970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dc970 push ebp */
  push32((uint32_t)(EBP));
  /* 123dc971 mov ebp, esp */
  EBP = (ESP);
  /* 123dc973 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dc979 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 123dc97f push eax */
  push32((uint32_t)(EAX));
  /* 123dc980 mov ecx, dword ptr [0x12403ea4] */
  ECX = (r32((uint32_t)(0x12403ea4)));
  /* 123dc986 push ecx */
  push32((uint32_t)(ECX));
  /* 123dc987 call dword ptr [0x124052ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052ec))), 0x123dc98du);
  /* 123dc98d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc990 jne 0x123dcba9 */
  if (!C.zf) goto L_123dcba9;
  /* 123dc996 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 123dc9a0 jmp 0x123dc9b1 */
  goto L_123dc9b1;
L_123dc9a2:;
  /* 123dc9a2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dc9a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc9ab mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_123dc9b1:;
  /* 123dc9b1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dc9bb jae 0x123dc9d2 */
  if (!C.cf) goto L_123dc9d2;
  /* 123dc9bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dc9c3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 123dc9c9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 123dc9d0 jmp 0x123dc9a2 */
  goto L_123dc9a2;
L_123dc9d2:;
  /* 123dc9d2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 123dc9d9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 123dc9df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123dc9e2 jmp 0x123dc9ed */
  goto L_123dc9ed;
L_123dc9e4:;
  /* 123dc9e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc9e7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dc9ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123dc9ed:;
  /* 123dc9ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc9f0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dc9f2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123dc9f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dc9f6 je 0x123dca38 */
  if (C.zf) goto L_123dca38;
  /* 123dc9f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dc9fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123dc9fd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123dc9ff mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 123dca05 jmp 0x123dca16 */
  goto L_123dca16;
L_123dca07:;
  /* 123dca07 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dca0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dca10 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_123dca16:;
  /* 123dca16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dca19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123dca1b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123dca1e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dca24 ja 0x123dca36 */
  if ((!C.cf&&!C.zf)) goto L_123dca36;
  /* 123dca26 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dca2c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 123dca34 jmp 0x123dca07 */
  goto L_123dca07;
L_123dca36:;
  /* 123dca36 jmp 0x123dc9e4 */
  goto L_123dc9e4;
L_123dca38:;
  /* 123dca38 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dca3a mov eax, dword ptr [0x12404144] */
  EAX = (r32((uint32_t)(0x12404144)));
  /* 123dca3f push eax */
  push32((uint32_t)(EAX));
  /* 123dca40 mov ecx, dword ptr [0x12403ea4] */
  ECX = (r32((uint32_t)(0x12403ea4)));
  /* 123dca46 push ecx */
  push32((uint32_t)(ECX));
  /* 123dca47 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 123dca4d push edx */
  push32((uint32_t)(EDX));
  /* 123dca4e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123dca53 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 123dca59 push eax */
  push32((uint32_t)(EAX));
  /* 123dca5a push 1 */
  push32((uint32_t)(0x1u));
  /* 123dca5c call 0x123de620 */
  push32(0x123dca61u); f_123de620();
  /* 123dca61 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dca64 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dca66 mov ecx, dword ptr [0x12403ea4] */
  ECX = (r32((uint32_t)(0x12403ea4)));
  /* 123dca6c push ecx */
  push32((uint32_t)(ECX));
  /* 123dca6d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123dca72 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 123dca78 push edx */
  push32((uint32_t)(EDX));
  /* 123dca79 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123dca7e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 123dca84 push eax */
  push32((uint32_t)(EAX));
  /* 123dca85 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123dca8a mov ecx, dword ptr [0x12404144] */
  ECX = (r32((uint32_t)(0x12404144)));
  /* 123dca90 push ecx */
  push32((uint32_t)(ECX));
  /* 123dca91 call 0x123de7e0 */
  push32(0x123dca96u); f_123de7e0();
  /* 123dca96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dca99 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dca9b mov edx, dword ptr [0x12403ea4] */
  EDX = (r32((uint32_t)(0x12403ea4)));
  /* 123dcaa1 push edx */
  push32((uint32_t)(EDX));
  /* 123dcaa2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123dcaa7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 123dcaad push eax */
  push32((uint32_t)(EAX));
  /* 123dcaae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123dcab3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 123dcab9 push ecx */
  push32((uint32_t)(ECX));
  /* 123dcaba push 0x200 */
  push32((uint32_t)(0x200u));
  /* 123dcabf mov edx, dword ptr [0x12404144] */
  EDX = (r32((uint32_t)(0x12404144)));
  /* 123dcac5 push edx */
  push32((uint32_t)(EDX));
  /* 123dcac6 call 0x123de7e0 */
  push32(0x123dcacbu); f_123de7e0();
  /* 123dcacb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcace mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 123dcad8 jmp 0x123dcae9 */
  goto L_123dcae9;
L_123dcada:;
  /* 123dcada mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcae0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcae3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_123dcae9:;
  /* 123dcae9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcaf3 jae 0x123dcba4 */
  if (!C.cf) goto L_123dcba4;
  /* 123dcaf9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcaff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dcb01 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 123dcb09 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 123dcb0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dcb0e je 0x123dcb46 */
  if (C.zf) goto L_123dcb46;
  /* 123dcb10 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcb16 mov cl, byte ptr [eax + 0x12404041] */
  CL = (r8((uint32_t)(EAX + 0x12404041)));
  /* 123dcb1c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 123dcb1f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcb25 mov byte ptr [edx + 0x12404041], cl */
  w8((uint32_t)(EDX + 0x12404041), (CL));
  /* 123dcb2b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcb31 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcb37 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 123dcb3e mov byte ptr [eax + 0x12403f40], dl */
  w8((uint32_t)(EAX + 0x12403f40), (DL));
  /* 123dcb44 jmp 0x123dcb9f */
  goto L_123dcb9f;
L_123dcb46:;
  /* 123dcb46 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcb4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123dcb4e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 123dcb56 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 123dcb59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dcb5b je 0x123dcb92 */
  if (C.zf) goto L_123dcb92;
  /* 123dcb5d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcb63 mov al, byte ptr [edx + 0x12404041] */
  AL = (r8((uint32_t)(EDX + 0x12404041)));
  /* 123dcb69 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 123dcb6b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcb71 mov byte ptr [ecx + 0x12404041], al */
  w8((uint32_t)(ECX + 0x12404041), (AL));
  /* 123dcb77 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcb7d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcb83 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 123dcb8a mov byte ptr [edx + 0x12403f40], cl */
  w8((uint32_t)(EDX + 0x12403f40), (CL));
  /* 123dcb90 jmp 0x123dcb9f */
  goto L_123dcb9f;
L_123dcb92:;
  /* 123dcb92 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcb98 mov byte ptr [edx + 0x12403f40], 0 */
  w8((uint32_t)(EDX + 0x12403f40), (0x0u));
L_123dcb9f:;
  /* 123dcb9f jmp 0x123dcada */
  goto L_123dcada;
L_123dcba4:;
  /* 123dcba4 jmp 0x123dcc6e */
  goto L_123dcc6e;
L_123dcba9:;
  /* 123dcba9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 123dcbb3 jmp 0x123dcbc4 */
  goto L_123dcbc4;
L_123dcbb5:;
  /* 123dcbb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcbbb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcbbe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_123dcbc4:;
  /* 123dcbc4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcbce jae 0x123dcc6e */
  if (!C.cf) goto L_123dcc6e;
  /* 123dcbd4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcbdb jb 0x123dcc18 */
  if (C.cf) goto L_123dcc18;
  /* 123dcbdd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcbe4 ja 0x123dcc18 */
  if ((!C.cf&&!C.zf)) goto L_123dcc18;
  /* 123dcbe6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcbec mov dl, byte ptr [ecx + 0x12404041] */
  DL = (r8((uint32_t)(ECX + 0x12404041)));
  /* 123dcbf2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 123dcbf5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcbfb mov byte ptr [eax + 0x12404041], dl */
  w8((uint32_t)(EAX + 0x12404041), (DL));
  /* 123dcc01 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcc07 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcc0a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcc10 mov byte ptr [edx + 0x12403f40], cl */
  w8((uint32_t)(EDX + 0x12403f40), (CL));
  /* 123dcc16 jmp 0x123dcc69 */
  goto L_123dcc69;
L_123dcc18:;
  /* 123dcc18 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcc1f jb 0x123dcc5c */
  if (C.cf) goto L_123dcc5c;
  /* 123dcc21 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcc28 ja 0x123dcc5c */
  if ((!C.cf&&!C.zf)) goto L_123dcc5c;
  /* 123dcc2a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcc30 mov cl, byte ptr [eax + 0x12404041] */
  CL = (r8((uint32_t)(EAX + 0x12404041)));
  /* 123dcc36 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 123dcc39 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcc3f mov byte ptr [edx + 0x12404041], cl */
  w8((uint32_t)(EDX + 0x12404041), (CL));
  /* 123dcc45 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcc4b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dcc4e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcc54 mov byte ptr [ecx + 0x12403f40], al */
  w8((uint32_t)(ECX + 0x12403f40), (AL));
  /* 123dcc5a jmp 0x123dcc69 */
  goto L_123dcc69;
L_123dcc5c:;
  /* 123dcc5c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 123dcc62 mov byte ptr [edx + 0x12403f40], 0 */
  w8((uint32_t)(EDX + 0x12403f40), (0x0u));
L_123dcc69:;
  /* 123dcc69 jmp 0x123dcbb5 */
  goto L_123dcbb5;
L_123dcc6e:;
  /* 123dcc6e mov esp, ebp */
  ESP = (EBP);
  /* 123dcc70 pop ebp */
  EBP = (pop32());
  /* 123dcc71 ret  */
  ESPCHK(0x123dc970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc80 @ 0x123dcc80 (23 bytes, 9 insns) */
void f_123dcc80(void) {
  FTRACE(0x123dcc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dcc80 push ebp */
  push32((uint32_t)(EBP));
  /* 123dcc81 mov ebp, esp */
  EBP = (ESP);
  /* 123dcc83 cmp dword ptr [0x12403f2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12403f2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcc8a je 0x123dcc93 */
  if (C.zf) goto L_123dcc93;
  /* 123dcc8c mov eax, dword ptr [0x12403ea4] */
  EAX = (r32((uint32_t)(0x12403ea4)));
  /* 123dcc91 jmp 0x123dcc95 */
  goto L_123dcc95;
L_123dcc93:;
  /* 123dcc93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123dcc95:;
  /* 123dcc95 pop ebp */
  EBP = (pop32());
  /* 123dcc96 ret  */
  ESPCHK(0x123dcc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cca0 @ 0x123dcca0 (34 bytes, 10 insns) */
void f_123dcca0(void) {
  FTRACE(0x123dcca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dcca0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dcca1 mov ebp, esp */
  EBP = (ESP);
  /* 123dcca3 cmp dword ptr [0x124042f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124042f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dccaa jne 0x123dccc0 */
  if (!C.zf) goto L_123dccc0;
  /* 123dccac push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 123dccae call 0x123dc4c0 */
  push32(0x123dccb3u); f_123dc4c0();
  /* 123dccb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dccb6 mov dword ptr [0x124042f0], 1 */
  w32((uint32_t)(0x124042f0), (0x1u));
L_123dccc0:;
  /* 123dccc0 pop ebp */
  EBP = (pop32());
  /* 123dccc1 ret  */
  ESPCHK(0x123dcca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccd0 @ 0x123dccd0 (664 bytes, 257 insns) [15 switch table(s)] */
void f_123dccd0(void) {
  FTRACE(0x123dccd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dccd0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dccd1 mov ebp, esp */
  EBP = (ESP);
  /* 123dccd3 push edi */
  push32((uint32_t)(EDI));
  /* 123dccd4 push esi */
  push32((uint32_t)(ESI));
  /* 123dccd5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 123dccd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123dccdb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 123dccde mov eax, ecx */
  EAX = (ECX);
  /* 123dcce0 mov edx, ecx */
  EDX = (ECX);
  /* 123dcce2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcce4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcce6 jbe 0x123dccf0 */
  if ((C.cf||C.zf)) goto L_123dccf0;
  /* 123dcce8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dccea jb 0x123dce68 */
  if (C.cf) goto L_123dce68;
L_123dccf0:;
  /* 123dccf0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 123dccf6 jne 0x123dcd0c */
  if (!C.zf) goto L_123dcd0c;
  /* 123dccf8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123dccfb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 123dccfe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcd01 jb 0x123dcd2c */
  if (C.cf) goto L_123dcd2c;
  /* 123dcd03 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123dcd05 jmp dword ptr [edx*4 + 0x123dce18] */
  switch (EDX) {
    case 0: goto L_123dce28;
    case 1: goto L_123dce30;
    case 2: goto L_123dce3c;
    case 3: goto L_123dce50;
    default: x86_unimpl("switch@0x123dcd05 out of table"); return;
  }
L_123dcd0c:;
  /* 123dcd0c mov eax, edi */
  EAX = (EDI);
  /* 123dcd0e mov edx, 3 */
  EDX = (0x3u);
  /* 123dcd13 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dcd16 jb 0x123dcd24 */
  if (C.cf) goto L_123dcd24;
  /* 123dcd18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 123dcd1b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcd1d jmp dword ptr [eax*4 + 0x123dcd30] */
  switch (EAX) {
    case 1: goto L_123dcd40;
    case 2: goto L_123dcd6c;
    case 3: goto L_123dcd90;
    default: x86_unimpl("switch@0x123dcd1d out of table"); return;
  }
L_123dcd24:;
  /* 123dcd24 jmp dword ptr [ecx*4 + 0x123dce28] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x123dce28)))); return;
  /* 123dcd2b nop  */
  /* nop */
L_123dcd2c:;
  /* 123dcd2c jmp dword ptr [ecx*4 + 0x123dcdac] */
  switch (ECX) {
    case 0: goto L_123dce0f;
    case 1: goto L_123dcdfc;
    case 2: goto L_123dcdf4;
    case 3: goto L_123dcdec;
    case 4: goto L_123dcde4;
    case 5: goto L_123dcddc;
    case 6: goto L_123dcdd4;
    case 7: goto L_123dcdcc;
    default: x86_unimpl("switch@0x123dcd2c out of table"); return;
  }
  /* 123dcd33 nop  */
  /* nop */
L_123dcd40:;
  /* 123dcd40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123dcd42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123dcd44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123dcd46 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123dcd49 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123dcd4c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123dcd4f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123dcd52 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123dcd55 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcd58 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcd5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcd5e jb 0x123dcd2c */
  if (C.cf) goto L_123dcd2c;
  /* 123dcd60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123dcd62 jmp dword ptr [edx*4 + 0x123dce18] */
  switch (EDX) {
    case 0: goto L_123dce28;
    case 1: goto L_123dce30;
    case 2: goto L_123dce3c;
    case 3: goto L_123dce50;
    default: x86_unimpl("switch@0x123dcd62 out of table"); return;
  }
  /* 123dcd69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123dcd6c:;
  /* 123dcd6c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123dcd6e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123dcd70 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123dcd72 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123dcd75 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123dcd78 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123dcd7b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcd7e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcd81 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcd84 jb 0x123dcd2c */
  if (C.cf) goto L_123dcd2c;
  /* 123dcd86 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123dcd88 jmp dword ptr [edx*4 + 0x123dce18] */
  switch (EDX) {
    case 0: goto L_123dce28;
    case 1: goto L_123dce30;
    case 2: goto L_123dce3c;
    case 3: goto L_123dce50;
    default: x86_unimpl("switch@0x123dcd88 out of table"); return;
  }
  /* 123dcd8f nop  */
  /* nop */
L_123dcd90:;
  /* 123dcd90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123dcd92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123dcd94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123dcd96 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123dcd97 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123dcd9a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123dcd9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcd9e jb 0x123dcd2c */
  if (C.cf) goto L_123dcd2c;
  /* 123dcda0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123dcda2 jmp dword ptr [edx*4 + 0x123dce18] */
  switch (EDX) {
    case 0: goto L_123dce28;
    case 1: goto L_123dce30;
    case 2: goto L_123dce3c;
    case 3: goto L_123dce50;
    default: x86_unimpl("switch@0x123dcda2 out of table"); return;
  }
  /* 123dcda9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123dcdcc:;
  /* 123dcdcc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 123dcdd0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_123dcdd4:;
  /* 123dcdd4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 123dcdd8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_123dcddc:;
  /* 123dcddc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 123dcde0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_123dcde4:;
  /* 123dcde4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 123dcde8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_123dcdec:;
  /* 123dcdec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 123dcdf0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_123dcdf4:;
  /* 123dcdf4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 123dcdf8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_123dcdfc:;
  /* 123dcdfc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 123dce00 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 123dce04 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 123dce0b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123dce0d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_123dce0f:;
  /* 123dce0f jmp dword ptr [edx*4 + 0x123dce18] */
  switch (EDX) {
    case 0: goto L_123dce28;
    case 1: goto L_123dce30;
    case 2: goto L_123dce3c;
    case 3: goto L_123dce50;
    default: x86_unimpl("switch@0x123dce0f out of table"); return;
  }
  /* 123dce16 mov edi, edi */
  EDI = (EDI);
L_123dce28:;
  /* 123dce28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dce2b pop esi */
  ESI = (pop32());
  /* 123dce2c pop edi */
  EDI = (pop32());
  /* 123dce2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123dce2e ret  */
  ESPCHK(0x123dccd0u, _esp0);
  ESP += 4; return;
  /* 123dce2f nop  */
  /* nop */
L_123dce30:;
  /* 123dce30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123dce32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123dce34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dce37 pop esi */
  ESI = (pop32());
  /* 123dce38 pop edi */
  EDI = (pop32());
  /* 123dce39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123dce3a ret  */
  ESPCHK(0x123dccd0u, _esp0);
  ESP += 4; return;
  /* 123dce3b nop  */
  /* nop */
L_123dce3c:;
  /* 123dce3c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123dce3e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123dce40 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123dce43 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123dce46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dce49 pop esi */
  ESI = (pop32());
  /* 123dce4a pop edi */
  EDI = (pop32());
  /* 123dce4b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123dce4c ret  */
  ESPCHK(0x123dccd0u, _esp0);
  ESP += 4; return;
  /* 123dce4d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123dce50:;
  /* 123dce50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123dce52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123dce54 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123dce57 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123dce5a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123dce5d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123dce60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dce63 pop esi */
  ESI = (pop32());
  /* 123dce64 pop edi */
  EDI = (pop32());
  /* 123dce65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123dce66 ret  */
  ESPCHK(0x123dccd0u, _esp0);
  ESP += 4; return;
  /* 123dce67 nop  */
  /* nop */
L_123dce68:;
  /* 123dce68 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 123dce6c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 123dce70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 123dce76 jne 0x123dce9c */
  if (!C.zf) goto L_123dce9c;
  /* 123dce78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123dce7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 123dce7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dce81 jb 0x123dce90 */
  if (C.cf) goto L_123dce90;
  /* 123dce83 std  */
  C.df=1;
  /* 123dce84 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123dce86 cld  */
  C.df=0;
  /* 123dce87 jmp dword ptr [edx*4 + 0x123dcfb0] */
  switch (EDX) {
    case 0: goto L_123dcfc0;
    case 1: goto L_123dcfc8;
    case 2: goto L_123dcfd8;
    case 3: goto L_123dcfec;
    default: x86_unimpl("switch@0x123dce87 out of table"); return;
  }
  /* 123dce8e mov edi, edi */
  EDI = (EDI);
L_123dce90:;
  /* 123dce90 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123dce92 jmp dword ptr [ecx*4 + 0x123dcf60] */
  switch (ECX) {
    case 0: goto L_123dcfa7;
    default: x86_unimpl("switch@0x123dce92 out of table"); return;
  }
  /* 123dce99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123dce9c:;
  /* 123dce9c mov eax, edi */
  EAX = (EDI);
  /* 123dce9e mov edx, 3 */
  EDX = (0x3u);
  /* 123dcea3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcea6 jb 0x123dceb4 */
  if (C.cf) goto L_123dceb4;
  /* 123dcea8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 123dceab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dcead jmp dword ptr [eax*4 + 0x123dceb8] */
  switch (EAX) {
    case 1: goto L_123dcec8;
    case 2: goto L_123dcee8;
    case 3: goto L_123dcf10;
    default: x86_unimpl("switch@0x123dcead out of table"); return;
  }
L_123dceb4:;
  /* 123dceb4 jmp dword ptr [ecx*4 + 0x123dcfb0] */
  switch (ECX) {
    case 0: goto L_123dcfc0;
    case 1: goto L_123dcfc8;
    case 2: goto L_123dcfd8;
    case 3: goto L_123dcfec;
    default: x86_unimpl("switch@0x123dceb4 out of table"); return;
  }
  /* 123dcebb nop  */
  /* nop */
L_123dcec8:;
  /* 123dcec8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123dcecb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123dcecd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123dced0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 123dced1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123dced4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 123dced5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dced8 jb 0x123dce90 */
  if (C.cf) goto L_123dce90;
  /* 123dceda std  */
  C.df=1;
  /* 123dcedb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123dcedd cld  */
  C.df=0;
  /* 123dcede jmp dword ptr [edx*4 + 0x123dcfb0] */
  switch (EDX) {
    case 0: goto L_123dcfc0;
    case 1: goto L_123dcfc8;
    case 2: goto L_123dcfd8;
    case 3: goto L_123dcfec;
    default: x86_unimpl("switch@0x123dcede out of table"); return;
  }
  /* 123dcee5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123dcee8:;
  /* 123dcee8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123dceeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123dceed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123dcef0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123dcef3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123dcef6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123dcef9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dcefc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dceff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcf02 jb 0x123dce90 */
  if (C.cf) goto L_123dce90;
  /* 123dcf04 std  */
  C.df=1;
  /* 123dcf05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123dcf07 cld  */
  C.df=0;
  /* 123dcf08 jmp dword ptr [edx*4 + 0x123dcfb0] */
  switch (EDX) {
    case 0: goto L_123dcfc0;
    case 1: goto L_123dcfc8;
    case 2: goto L_123dcfd8;
    case 3: goto L_123dcfec;
    default: x86_unimpl("switch@0x123dcf08 out of table"); return;
  }
  /* 123dcf0f nop  */
  /* nop */
L_123dcf10:;
  /* 123dcf10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123dcf13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123dcf15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123dcf18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123dcf1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123dcf1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123dcf21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123dcf24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123dcf27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dcf2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dcf2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcf30 jb 0x123dce90 */
  if (C.cf) goto L_123dce90;
  /* 123dcf36 std  */
  C.df=1;
  /* 123dcf37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123dcf39 cld  */
  C.df=0;
  /* 123dcf3a jmp dword ptr [edx*4 + 0x123dcfb0] */
  switch (EDX) {
    case 0: goto L_123dcfc0;
    case 1: goto L_123dcfc8;
    case 2: goto L_123dcfd8;
    case 3: goto L_123dcfec;
    default: x86_unimpl("switch@0x123dcf3a out of table"); return;
  }
  /* 123dcf41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 123dcf44 iretd  */
  x86_unimpl("iretd @ 0x123dcf44");
  /* 123dcf46 cmp eax, 0x3dcf6c12 */
  { uint32_t _a=(EAX),_b=(0x3dcf6c12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcf4b adc dh, byte ptr [edi + ecx*8 + 0x3d] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EDI + ECX*8 + 0x3d))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 123dcf4f adc bh, byte ptr [edi + ecx*8 + 0x3d] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDI + ECX*8 + 0x3d))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 123dcf53 adc al, byte ptr [edi + ecx*8 - 0x3073edc3] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + ECX*8 + -0x3073edc3))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123dcf5a cmp eax, 0x3dcf9412 */
  { uint32_t _a=(EAX),_b=(0x3dcf9412u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dcf64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 123dcf68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 123dcf6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 123dcf70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 123dcf74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 123dcf78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 123dcf7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 123dcf80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 123dcf84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 123dcf88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 123dcf8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 123dcf90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 123dcf94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 123dcf98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 123dcf9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 123dcfa3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123dcfa5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_123dcfa7:;
  /* 123dcfa7 jmp dword ptr [edx*4 + 0x123dcfb0] */
  switch (EDX) {
    case 0: goto L_123dcfc0;
    case 1: goto L_123dcfc8;
    case 2: goto L_123dcfd8;
    case 3: goto L_123dcfec;
    default: x86_unimpl("switch@0x123dcfa7 out of table"); return;
  }
  /* 123dcfae mov edi, edi */
  EDI = (EDI);
L_123dcfc0:;
  /* 123dcfc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dcfc3 pop esi */
  ESI = (pop32());
  /* 123dcfc4 pop edi */
  EDI = (pop32());
  /* 123dcfc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123dcfc6 ret  */
  ESPCHK(0x123dccd0u, _esp0);
  ESP += 4; return;
  /* 123dcfc7 nop  */
  /* nop */
L_123dcfc8:;
  /* 123dcfc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123dcfcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123dcfce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dcfd1 pop esi */
  ESI = (pop32());
  /* 123dcfd2 pop edi */
  EDI = (pop32());
  /* 123dcfd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123dcfd4 ret  */
  ESPCHK(0x123dccd0u, _esp0);
  ESP += 4; return;
  /* 123dcfd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123dcfd8:;
  /* 123dcfd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123dcfdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123dcfde mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123dcfe1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123dcfe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dcfe7 pop esi */
  ESI = (pop32());
  /* 123dcfe8 pop edi */
  EDI = (pop32());
  /* 123dcfe9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123dcfea ret  */
  ESPCHK(0x123dccd0u, _esp0);
  ESP += 4; return;
  /* 123dcfeb nop  */
  /* nop */
L_123dcfec:;
  /* 123dcfec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123dcfef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123dcff2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123dcff5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123dcff8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123dcffb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123dcffe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dd001 pop esi */
  ESI = (pop32());
  /* 123dd002 pop edi */
  EDI = (pop32());
  /* 123dd003 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123dd004 ret  */
  ESPCHK(0x123dccd0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x123dd010 (104 bytes, 43 insns) */
void f_123dd010(void) {
  FTRACE(0x123dd010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dd010 push ebx */
  push32((uint32_t)(EBX));
  /* 123dd011 push esi */
  push32((uint32_t)(ESI));
  /* 123dd012 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 123dd016 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dd018 jne 0x123dd032 */
  if (!C.zf) goto L_123dd032;
  /* 123dd01a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 123dd01e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 123dd022 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dd024 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123dd026 mov ebx, eax */
  EBX = (EAX);
  /* 123dd028 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 123dd02c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123dd02e mov edx, ebx */
  EDX = (EBX);
  /* 123dd030 jmp 0x123dd073 */
  goto L_123dd073;
L_123dd032:;
  /* 123dd032 mov ecx, eax */
  ECX = (EAX);
  /* 123dd034 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 123dd038 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 123dd03c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_123dd040:;
  /* 123dd040 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 123dd042 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 123dd044 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 123dd046 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 123dd048 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123dd04a jne 0x123dd040 */
  if (!C.zf) goto L_123dd040;
  /* 123dd04c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123dd04e mov esi, eax */
  ESI = (EAX);
  /* 123dd050 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123dd054 mov ecx, eax */
  ECX = (EAX);
  /* 123dd056 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 123dd05a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123dd05c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd05e jb 0x123dd06e */
  if (C.cf) goto L_123dd06e;
  /* 123dd060 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd064 ja 0x123dd06e */
  if ((!C.cf&&!C.zf)) goto L_123dd06e;
  /* 123dd066 jb 0x123dd06f */
  if (C.cf) goto L_123dd06f;
  /* 123dd068 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd06c jbe 0x123dd06f */
  if ((C.cf||C.zf)) goto L_123dd06f;
L_123dd06e:;
  /* 123dd06e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_123dd06f:;
  /* 123dd06f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dd071 mov eax, esi */
  EAX = (ESI);
L_123dd073:;
  /* 123dd073 pop esi */
  ESI = (pop32());
  /* 123dd074 pop ebx */
  EBX = (pop32());
  /* 123dd075 ret 0x10 */
  ESPCHK(0x123dd010u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x123dd080 (117 bytes, 44 insns) */
void f_123dd080(void) {
  FTRACE(0x123dd080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dd080 push ebx */
  push32((uint32_t)(EBX));
  /* 123dd081 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 123dd085 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dd087 jne 0x123dd0a1 */
  if (!C.zf) goto L_123dd0a1;
  /* 123dd089 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 123dd08d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 123dd091 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dd093 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123dd095 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123dd099 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123dd09b mov eax, edx */
  EAX = (EDX);
  /* 123dd09d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123dd09f jmp 0x123dd0f1 */
  goto L_123dd0f1;
L_123dd0a1:;
  /* 123dd0a1 mov ecx, eax */
  ECX = (EAX);
  /* 123dd0a3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 123dd0a7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 123dd0ab mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_123dd0af:;
  /* 123dd0af shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 123dd0b1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 123dd0b3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 123dd0b5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 123dd0b7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123dd0b9 jne 0x123dd0af */
  if (!C.zf) goto L_123dd0af;
  /* 123dd0bb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123dd0bd mov ecx, eax */
  ECX = (EAX);
  /* 123dd0bf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123dd0c3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 123dd0c4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123dd0c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd0ca jb 0x123dd0da */
  if (C.cf) goto L_123dd0da;
  /* 123dd0cc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd0d0 ja 0x123dd0da */
  if ((!C.cf&&!C.zf)) goto L_123dd0da;
  /* 123dd0d2 jb 0x123dd0e2 */
  if (C.cf) goto L_123dd0e2;
  /* 123dd0d4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd0d8 jbe 0x123dd0e2 */
  if ((C.cf||C.zf)) goto L_123dd0e2;
L_123dd0da:;
  /* 123dd0da sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd0de sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_123dd0e2:;
  /* 123dd0e2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd0e6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd0ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123dd0ec neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123dd0ee sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_123dd0f1:;
  /* 123dd0f1 pop ebx */
  EBX = (pop32());
  /* 123dd0f2 ret 0x10 */
  ESPCHK(0x123dd080u, _esp0);
  ESP += 20; return;
}

/* FUN_1000d100 @ 0x123dd100 (628 bytes, 214 insns) */
void f_123dd100(void) {
  FTRACE(0x123dd100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dd100 push ebp */
  push32((uint32_t)(EBP));
  /* 123dd101 mov ebp, esp */
  EBP = (ESP);
  /* 123dd103 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd106 push ebx */
  push32((uint32_t)(EBX));
  /* 123dd107 push esi */
  push32((uint32_t)(ESI));
  /* 123dd108 push edi */
  push32((uint32_t)(EDI));
L_123dd109:;
  /* 123dd109 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd10d jne 0x123dd12d */
  if (!C.zf) goto L_123dd12d;
  /* 123dd10f push 0x123fe518 */
  push32((uint32_t)(0x123fe518u));
  /* 123dd114 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dd116 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 123dd118 push 0x123fe50c */
  push32((uint32_t)(0x123fe50cu));
  /* 123dd11d push 2 */
  push32((uint32_t)(0x2u));
  /* 123dd11f call 0x123d54b0 */
  push32(0x123dd124u); f_123d54b0();
  /* 123dd124 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd127 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd12a jne 0x123dd12d */
  if (!C.zf) goto L_123dd12d;
  /* 123dd12c int3  */
  x86_unimpl("int3 @ 0x123dd12c");
L_123dd12d:;
  /* 123dd12d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dd12f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd131 jne 0x123dd109 */
  if (!C.zf) goto L_123dd109;
  /* 123dd133 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dd136 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123dd139 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd13c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123dd13f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123dd142 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd145 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dd148 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 123dd14e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dd150 je 0x123dd15f */
  if (C.zf) goto L_123dd15f;
  /* 123dd152 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd155 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123dd158 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 123dd15b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dd15d je 0x123dd175 */
  if (C.zf) goto L_123dd175;
L_123dd15f:;
  /* 123dd15f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd162 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 123dd165 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 123dd167 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd16a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 123dd16d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123dd170 jmp 0x123dd36d */
  goto L_123dd36d;
L_123dd175:;
  /* 123dd175 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd178 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 123dd17b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 123dd17e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd180 je 0x123dd1cc */
  if (C.zf) goto L_123dd1cc;
  /* 123dd182 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd185 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 123dd18c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd18f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 123dd192 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 123dd195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd197 je 0x123dd1b5 */
  if (C.zf) goto L_123dd1b5;
  /* 123dd199 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd19c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd19f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123dd1a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123dd1a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd1a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dd1aa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 123dd1ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd1b0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 123dd1b3 jmp 0x123dd1cc */
  goto L_123dd1cc;
L_123dd1b5:;
  /* 123dd1b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd1b8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dd1bb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 123dd1be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd1c1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 123dd1c4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123dd1c7 jmp 0x123dd36d */
  goto L_123dd36d;
L_123dd1cc:;
  /* 123dd1cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd1cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dd1d2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 123dd1d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd1d8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 123dd1db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd1de mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dd1e1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 123dd1e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd1e7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 123dd1ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd1ed mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 123dd1f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123dd1fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd1fe mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123dd201 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd204 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123dd207 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 123dd20d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dd20f jne 0x123dd23f */
  if (!C.zf) goto L_123dd23f;
  /* 123dd211 cmp dword ptr [ebp - 8], 0x12401140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12401140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd218 je 0x123dd223 */
  if (C.zf) goto L_123dd223;
  /* 123dd21a cmp dword ptr [ebp - 8], 0x12401160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12401160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd221 jne 0x123dd233 */
  if (!C.zf) goto L_123dd233;
L_123dd223:;
  /* 123dd223 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dd226 push edx */
  push32((uint32_t)(EDX));
  /* 123dd227 call 0x123df070 */
  push32(0x123dd22cu); f_123df070();
  /* 123dd22c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd22f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd231 jne 0x123dd23f */
  if (!C.zf) goto L_123dd23f;
L_123dd233:;
  /* 123dd233 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd236 push eax */
  push32((uint32_t)(EAX));
  /* 123dd237 call 0x123defa0 */
  push32(0x123dd23cu); f_123defa0();
  /* 123dd23c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123dd23f:;
  /* 123dd23f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd242 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dd245 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 123dd24b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dd24d je 0x123dd32b */
  if (C.zf) goto L_123dd32b;
L_123dd253:;
  /* 123dd253 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd256 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd259 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 123dd25b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd25e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dd260 jge 0x123dd283 */
  if ((C.sf==C.of)) goto L_123dd283;
  /* 123dd262 push 0x123fe4cc */
  push32((uint32_t)(0x123fe4ccu));
  /* 123dd267 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dd269 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 123dd26e push 0x123fe50c */
  push32((uint32_t)(0x123fe50cu));
  /* 123dd273 push 2 */
  push32((uint32_t)(0x2u));
  /* 123dd275 call 0x123d54b0 */
  push32(0x123dd27au); f_123d54b0();
  /* 123dd27a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd27d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd280 jne 0x123dd283 */
  if (!C.zf) goto L_123dd283;
  /* 123dd282 int3  */
  x86_unimpl("int3 @ 0x123dd282");
L_123dd283:;
  /* 123dd283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dd285 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd287 jne 0x123dd253 */
  if (!C.zf) goto L_123dd253;
  /* 123dd289 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd28c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd28f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 123dd291 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd294 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dd297 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd29a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123dd29d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd2a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd2a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123dd2a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd2a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123dd2ab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd2ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd2b1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123dd2b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd2b8 jle 0x123dd2d6 */
  if ((C.zf||C.sf!=C.of)) goto L_123dd2d6;
  /* 123dd2ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd2bd push ecx */
  push32((uint32_t)(ECX));
  /* 123dd2be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd2c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123dd2c4 push eax */
  push32((uint32_t)(EAX));
  /* 123dd2c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dd2c8 push ecx */
  push32((uint32_t)(ECX));
  /* 123dd2c9 call 0x123dec90 */
  push32(0x123dd2ceu); f_123dec90();
  /* 123dd2ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd2d1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123dd2d4 jmp 0x123dd31e */
  goto L_123dd31e;
L_123dd2d6:;
  /* 123dd2d6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd2da je 0x123dd2f9 */
  if (C.zf) goto L_123dd2f9;
  /* 123dd2dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dd2df sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 123dd2e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dd2e5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 123dd2e8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dd2eb mov ecx, dword ptr [edx*4 + 0x124041a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x124041a0)));
  /* 123dd2f2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd2f4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123dd2f7 jmp 0x123dd300 */
  goto L_123dd300;
L_123dd2f9:;
  /* 123dd2f9 mov dword ptr [ebp - 0x14], 0x12400a60 */
  w32((uint32_t)(EBP + -0x14), (0x12400a60u));
L_123dd300:;
  /* 123dd300 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123dd303 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 123dd307 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 123dd30a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd30c je 0x123dd31e */
  if (C.zf) goto L_123dd31e;
  /* 123dd30e push 2 */
  push32((uint32_t)(0x2u));
  /* 123dd310 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dd312 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dd315 push ecx */
  push32((uint32_t)(ECX));
  /* 123dd316 call 0x123deb40 */
  push32(0x123dd31bu); f_123deb40();
  /* 123dd31b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123dd31e:;
  /* 123dd31e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd321 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123dd324 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 123dd327 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 123dd329 jmp 0x123dd349 */
  goto L_123dd349;
L_123dd32b:;
  /* 123dd32b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123dd332 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd335 push edx */
  push32((uint32_t)(EDX));
  /* 123dd336 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 123dd339 push eax */
  push32((uint32_t)(EAX));
  /* 123dd33a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dd33d push ecx */
  push32((uint32_t)(ECX));
  /* 123dd33e call 0x123dec90 */
  push32(0x123dd343u); f_123dec90();
  /* 123dd343 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd346 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_123dd349:;
  /* 123dd349 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dd34c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd34f je 0x123dd365 */
  if (C.zf) goto L_123dd365;
  /* 123dd351 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd354 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123dd357 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 123dd35a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd35d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 123dd360 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123dd363 jmp 0x123dd36d */
  goto L_123dd36d;
L_123dd365:;
  /* 123dd365 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dd368 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_123dd36d:;
  /* 123dd36d pop edi */
  EDI = (pop32());
  /* 123dd36e pop esi */
  ESI = (pop32());
  /* 123dd36f pop ebx */
  EBX = (pop32());
  /* 123dd370 mov esp, ebp */
  ESP = (EBP);
  /* 123dd372 pop ebp */
  EBP = (pop32());
  /* 123dd373 ret  */
  ESPCHK(0x123dd100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d380 @ 0x123dd380 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_123dd380(void) {
  FTRACE(0x123dd380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dd380 push ebp */
  push32((uint32_t)(EBP));
  /* 123dd381 mov ebp, esp */
  EBP = (ESP);
  /* 123dd383 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd389 push ebx */
  push32((uint32_t)(EBX));
  /* 123dd38a push esi */
  push32((uint32_t)(ESI));
  /* 123dd38b push edi */
  push32((uint32_t)(EDI));
  /* 123dd38c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123dd393 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 123dd39d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_123dd3a4:;
  /* 123dd3a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dd3a7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123dd3a9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 123dd3ac movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd3b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dd3b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd3b6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 123dd3b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dd3bb je 0x123ddf97 */
  if (C.zf) goto L_123ddf97;
  /* 123dd3c1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd3c8 jl 0x123ddf97 */
  if ((C.sf!=C.of)) goto L_123ddf97;
  /* 123dd3ce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd3d2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd3d5 jl 0x123dd3f6 */
  if ((C.sf!=C.of)) goto L_123dd3f6;
  /* 123dd3d7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd3db cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd3de jg 0x123dd3f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_123dd3f6;
  /* 123dd3e0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd3e4 movsx ecx, byte ptr [eax + 0x123fe504] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x123fe504))));
  /* 123dd3eb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 123dd3ee mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 123dd3f4 jmp 0x123dd400 */
  goto L_123dd400;
L_123dd3f6:;
  /* 123dd3f6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_123dd400:;
  /* 123dd400 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 123dd406 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123dd409 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dd40c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dd40f movsx edx, byte ptr [ecx + eax*8 + 0x123fe524] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x123fe524))));
  /* 123dd417 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 123dd41a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123dd41d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123dd420 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 123dd426 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd42d ja 0x123ddf92 */
  if ((!C.cf&&!C.zf)) goto L_123ddf92;
  /* 123dd433 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 123dd439 jmp dword ptr [ecx*4 + 0x123ddfa4] */
  switch (ECX) {
    case 0: goto L_123dd440;
    case 1: goto L_123dd4da;
    case 2: goto L_123dd51c;
    case 3: goto L_123dd58b;
    case 4: goto L_123dd5e3;
    case 5: goto L_123dd5f2;
    case 6: goto L_123dd63e;
    case 7: goto L_123dd6d1;
    case 8: goto L_123dd568;
    case 9: goto L_123dd573;
    case 10: goto L_123dd55e;
    case 11: goto L_123dd553;
    case 12: goto L_123dd57e;
    case 13: goto L_123dd586;
    default: x86_unimpl("switch@0x123dd439 out of table"); return;
  }
L_123dd440:;
  /* 123dd440 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 123dd447 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123dd44a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123dd450 mov eax, dword ptr [0x12400c98] */
  EAX = (r32((uint32_t)(0x12400c98)));
  /* 123dd455 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123dd457 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 123dd45b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 123dd461 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dd463 je 0x123dd4bd */
  if (C.zf) goto L_123dd4bd;
  /* 123dd465 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 123dd46b push edx */
  push32((uint32_t)(EDX));
  /* 123dd46c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dd46f push eax */
  push32((uint32_t)(EAX));
  /* 123dd470 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd474 push ecx */
  push32((uint32_t)(ECX));
  /* 123dd475 call 0x123de0b0 */
  push32(0x123dd47au); f_123de0b0();
  /* 123dd47a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd47d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dd480 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123dd482 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 123dd485 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dd488 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd48b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_123dd48e:;
  /* 123dd48e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd492 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dd494 jne 0x123dd4b7 */
  if (!C.zf) goto L_123dd4b7;
  /* 123dd496 push 0x123fe5a4 */
  push32((uint32_t)(0x123fe5a4u));
  /* 123dd49b push 0 */
  push32((uint32_t)(0x0u));
  /* 123dd49d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 123dd4a2 push 0x123fe598 */
  push32((uint32_t)(0x123fe598u));
  /* 123dd4a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123dd4a9 call 0x123d54b0 */
  push32(0x123dd4aeu); f_123d54b0();
  /* 123dd4ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd4b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd4b4 jne 0x123dd4b7 */
  if (!C.zf) goto L_123dd4b7;
  /* 123dd4b6 int3  */
  x86_unimpl("int3 @ 0x123dd4b6");
L_123dd4b7:;
  /* 123dd4b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dd4b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd4bb jne 0x123dd48e */
  if (!C.zf) goto L_123dd48e;
L_123dd4bd:;
  /* 123dd4bd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 123dd4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123dd4c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dd4c7 push edx */
  push32((uint32_t)(EDX));
  /* 123dd4c8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd4cc push eax */
  push32((uint32_t)(EAX));
  /* 123dd4cd call 0x123de0b0 */
  push32(0x123dd4d2u); f_123de0b0();
  /* 123dd4d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd4d5 jmp 0x123ddf92 */
  goto L_123ddf92;
L_123dd4da:;
  /* 123dd4da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123dd4e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dd4e4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 123dd4ea mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 123dd4f0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 123dd4f6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 123dd4fc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123dd4ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123dd506 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 123dd510 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 123dd517 jmp 0x123ddf92 */
  goto L_123ddf92;
L_123dd51c:;
  /* 123dd51c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd520 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 123dd526 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 123dd52c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd52f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 123dd535 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd53c ja 0x123dd586 */
  if ((!C.cf&&!C.zf)) goto L_123dd586;
  /* 123dd53e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 123dd544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dd546 mov al, byte ptr [ecx + 0x123ddfdc] */
  AL = (r8((uint32_t)(ECX + 0x123ddfdc)));
  /* 123dd54c jmp dword ptr [eax*4 + 0x123ddfc4] */
  switch (EAX) {
    case 0: goto L_123dd568;
    case 1: goto L_123dd573;
    case 2: goto L_123dd55e;
    case 3: goto L_123dd553;
    case 4: goto L_123dd57e;
    case 5: goto L_123dd586;
    default: x86_unimpl("switch@0x123dd54c out of table"); return;
  }
L_123dd553:;
  /* 123dd553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd556 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123dd559 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123dd55c jmp 0x123dd586 */
  goto L_123dd586;
L_123dd55e:;
  /* 123dd55e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd561 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 123dd563 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dd566 jmp 0x123dd586 */
  goto L_123dd586;
L_123dd568:;
  /* 123dd568 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd56b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 123dd56e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123dd571 jmp 0x123dd586 */
  goto L_123dd586;
L_123dd573:;
  /* 123dd573 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd576 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 123dd579 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123dd57c jmp 0x123dd586 */
  goto L_123dd586;
L_123dd57e:;
  /* 123dd57e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd581 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 123dd583 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123dd586:;
  /* 123dd586 jmp 0x123ddf92 */
  goto L_123ddf92;
L_123dd58b:;
  /* 123dd58b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd58f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd592 jne 0x123dd5c7 */
  if (!C.zf) goto L_123dd5c7;
  /* 123dd594 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 123dd597 push edx */
  push32((uint32_t)(EDX));
  /* 123dd598 call 0x123de1c0 */
  push32(0x123dd59du); f_123de1c0();
  /* 123dd59d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd5a0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 123dd5a6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd5ad jge 0x123dd5c5 */
  if ((C.sf==C.of)) goto L_123dd5c5;
  /* 123dd5af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd5b2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 123dd5b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dd5b7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 123dd5bd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123dd5bf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_123dd5c5:;
  /* 123dd5c5 jmp 0x123dd5de */
  goto L_123dd5de;
L_123dd5c7:;
  /* 123dd5c7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 123dd5cd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dd5d0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd5d4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 123dd5d8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_123dd5de:;
  /* 123dd5de jmp 0x123ddf92 */
  goto L_123ddf92;
L_123dd5e3:;
  /* 123dd5e3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 123dd5ed jmp 0x123ddf92 */
  goto L_123ddf92;
L_123dd5f2:;
  /* 123dd5f2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd5f6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd5f9 jne 0x123dd622 */
  if (!C.zf) goto L_123dd622;
  /* 123dd5fb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 123dd5fe push eax */
  push32((uint32_t)(EAX));
  /* 123dd5ff call 0x123de1c0 */
  push32(0x123dd604u); f_123de1c0();
  /* 123dd604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd607 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 123dd60d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd614 jge 0x123dd620 */
  if ((C.sf==C.of)) goto L_123dd620;
  /* 123dd616 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_123dd620:;
  /* 123dd620 jmp 0x123dd639 */
  goto L_123dd639;
L_123dd622:;
  /* 123dd622 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 123dd628 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dd62b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd62f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 123dd633 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_123dd639:;
  /* 123dd639 jmp 0x123ddf92 */
  goto L_123ddf92;
L_123dd63e:;
  /* 123dd63e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd642 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 123dd648 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 123dd64e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd651 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 123dd657 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd65e ja 0x123dd6cc */
  if ((!C.cf&&!C.zf)) goto L_123dd6cc;
  /* 123dd660 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 123dd666 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dd668 mov al, byte ptr [ecx + 0x123de001] */
  AL = (r8((uint32_t)(ECX + 0x123de001)));
  /* 123dd66e jmp dword ptr [eax*4 + 0x123ddfed] */
  switch (EAX) {
    case 0: goto L_123dd680;
    case 1: goto L_123dd6b9;
    case 2: goto L_123dd675;
    case 3: goto L_123dd6c3;
    case 4: goto L_123dd6cc;
    default: x86_unimpl("switch@0x123dd66e out of table"); return;
  }
L_123dd675:;
  /* 123dd675 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd678 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 123dd67b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123dd67e jmp 0x123dd6cc */
  goto L_123dd6cc;
L_123dd680:;
  /* 123dd680 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dd683 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123dd686 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd689 jne 0x123dd6ab */
  if (!C.zf) goto L_123dd6ab;
  /* 123dd68b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dd68e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 123dd692 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd695 jne 0x123dd6ab */
  if (!C.zf) goto L_123dd6ab;
  /* 123dd697 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dd69a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd69d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 123dd6a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd6a3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 123dd6a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123dd6a9 jmp 0x123dd6b7 */
  goto L_123dd6b7;
L_123dd6ab:;
  /* 123dd6ab mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 123dd6b2 jmp 0x123dd440 */
  goto L_123dd440;
L_123dd6b7:;
  /* 123dd6b7 jmp 0x123dd6cc */
  goto L_123dd6cc;
L_123dd6b9:;
  /* 123dd6b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd6bc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 123dd6be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dd6c1 jmp 0x123dd6cc */
  goto L_123dd6cc;
L_123dd6c3:;
  /* 123dd6c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd6c6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 123dd6c9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123dd6cc:;
  /* 123dd6cc jmp 0x123ddf92 */
  goto L_123ddf92;
L_123dd6d1:;
  /* 123dd6d1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd6d5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 123dd6db mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 123dd6e1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd6e4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 123dd6ea cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd6f1 ja 0x123dddb7 */
  if ((!C.cf&&!C.zf)) goto L_123dddb7;
  /* 123dd6f7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 123dd6fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123dd6ff mov cl, byte ptr [edx + 0x123de06c] */
  CL = (r8((uint32_t)(EDX + 0x123de06c)));
  /* 123dd705 jmp dword ptr [ecx*4 + 0x123de030] */
  switch (ECX) {
    case 0: goto L_123dd70c;
    case 1: goto L_123dd9a0;
    case 2: goto L_123dd830;
    case 3: goto L_123ddad9;
    case 4: goto L_123dd79b;
    case 5: goto L_123dd721;
    case 6: goto L_123ddaab;
    case 7: goto L_123dd9b0;
    case 8: goto L_123dd955;
    case 9: goto L_123ddb25;
    case 10: goto L_123ddacf;
    case 11: goto L_123dd846;
    case 12: goto L_123ddac3;
    case 13: goto L_123ddae5;
    case 14: goto L_123dddb7;
    default: x86_unimpl("switch@0x123dd705 out of table"); return;
  }
L_123dd70c:;
  /* 123dd70c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd70f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 123dd714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd716 jne 0x123dd721 */
  if (!C.zf) goto L_123dd721;
  /* 123dd718 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd71b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 123dd71e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123dd721:;
  /* 123dd721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd724 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 123dd72a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dd72c je 0x123dd767 */
  if (C.zf) goto L_123dd767;
  /* 123dd72e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 123dd731 push eax */
  push32((uint32_t)(EAX));
  /* 123dd732 call 0x123de200 */
  push32(0x123dd737u); f_123de200();
  /* 123dd737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd73a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 123dd73e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 123dd742 push ecx */
  push32((uint32_t)(ECX));
  /* 123dd743 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 123dd749 push edx */
  push32((uint32_t)(EDX));
  /* 123dd74a call 0x123df2e0 */
  push32(0x123dd74fu); f_123df2e0();
  /* 123dd74f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd752 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123dd755 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd759 jge 0x123dd765 */
  if ((C.sf==C.of)) goto L_123dd765;
  /* 123dd75b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_123dd765:;
  /* 123dd765 jmp 0x123dd78d */
  goto L_123dd78d;
L_123dd767:;
  /* 123dd767 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 123dd76a push eax */
  push32((uint32_t)(EAX));
  /* 123dd76b call 0x123de1c0 */
  push32(0x123dd770u); f_123de1c0();
  /* 123dd770 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd773 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 123dd77a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 123dd780 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 123dd786 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_123dd78d:;
  /* 123dd78d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 123dd793 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 123dd796 jmp 0x123dddb7 */
  goto L_123dddb7;
L_123dd79b:;
  /* 123dd79b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 123dd79e push eax */
  push32((uint32_t)(EAX));
  /* 123dd79f call 0x123de1c0 */
  push32(0x123dd7a4u); f_123de1c0();
  /* 123dd7a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd7a7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 123dd7ad cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd7b4 je 0x123dd7c2 */
  if (C.zf) goto L_123dd7c2;
  /* 123dd7b6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 123dd7bc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd7c0 jne 0x123dd7dc */
  if (!C.zf) goto L_123dd7dc;
L_123dd7c2:;
  /* 123dd7c2 mov edx, dword ptr [0x12400fb0] */
  EDX = (r32((uint32_t)(0x12400fb0)));
  /* 123dd7c8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 123dd7cb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dd7ce push eax */
  push32((uint32_t)(EAX));
  /* 123dd7cf call 0x123d9220 */
  push32(0x123dd7d4u); f_123d9220();
  /* 123dd7d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd7d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123dd7da jmp 0x123dd82b */
  goto L_123dd82b;
L_123dd7dc:;
  /* 123dd7dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd7df and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 123dd7e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dd7e7 je 0x123dd80c */
  if (C.zf) goto L_123dd80c;
  /* 123dd7e9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 123dd7ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123dd7f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123dd7f5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 123dd7fb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 123dd7fe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 123dd800 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 123dd803 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 123dd80a jmp 0x123dd82b */
  goto L_123dd82b;
L_123dd80c:;
  /* 123dd80c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 123dd813 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 123dd819 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123dd81c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123dd81f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 123dd825 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 123dd828 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_123dd82b:;
  /* 123dd82b jmp 0x123dddb7 */
  goto L_123dddb7;
L_123dd830:;
  /* 123dd830 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd833 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 123dd839 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dd83b jne 0x123dd846 */
  if (!C.zf) goto L_123dd846;
  /* 123dd83d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd840 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 123dd843 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123dd846:;
  /* 123dd846 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd84d jne 0x123dd85b */
  if (!C.zf) goto L_123dd85b;
  /* 123dd84f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 123dd859 jmp 0x123dd867 */
  goto L_123dd867;
L_123dd85b:;
  /* 123dd85b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 123dd861 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_123dd867:;
  /* 123dd867 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 123dd86d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 123dd873 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 123dd876 push edx */
  push32((uint32_t)(EDX));
  /* 123dd877 call 0x123de1c0 */
  push32(0x123dd87cu); f_123de1c0();
  /* 123dd87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd87f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123dd882 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd885 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 123dd88a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd88c je 0x123dd8f6 */
  if (C.zf) goto L_123dd8f6;
  /* 123dd88e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd892 jne 0x123dd89d */
  if (!C.zf) goto L_123dd89d;
  /* 123dd894 mov ecx, dword ptr [0x12400fb4] */
  ECX = (r32((uint32_t)(0x12400fb4)));
  /* 123dd89a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_123dd89d:;
  /* 123dd89d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 123dd8a4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dd8a7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_123dd8ad:;
  /* 123dd8ad mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 123dd8b3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 123dd8b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd8bc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 123dd8c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd8c4 je 0x123dd8e6 */
  if (C.zf) goto L_123dd8e6;
  /* 123dd8c6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 123dd8cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dd8ce mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 123dd8d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd8d3 je 0x123dd8e6 */
  if (C.zf) goto L_123dd8e6;
  /* 123dd8d5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 123dd8db add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd8de mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 123dd8e4 jmp 0x123dd8ad */
  goto L_123dd8ad;
L_123dd8e6:;
  /* 123dd8e6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 123dd8ec sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd8ef sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 123dd8f1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 123dd8f4 jmp 0x123dd950 */
  goto L_123dd950;
L_123dd8f6:;
  /* 123dd8f6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd8fa jne 0x123dd904 */
  if (!C.zf) goto L_123dd904;
  /* 123dd8fc mov eax, dword ptr [0x12400fb0] */
  EAX = (r32((uint32_t)(0x12400fb0)));
  /* 123dd901 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_123dd904:;
  /* 123dd904 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dd907 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_123dd90d:;
  /* 123dd90d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 123dd913 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 123dd919 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd91c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 123dd922 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dd924 je 0x123dd944 */
  if (C.zf) goto L_123dd944;
  /* 123dd926 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 123dd92c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123dd92f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dd931 je 0x123dd944 */
  if (C.zf) goto L_123dd944;
  /* 123dd933 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 123dd939 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd93c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 123dd942 jmp 0x123dd90d */
  goto L_123dd90d;
L_123dd944:;
  /* 123dd944 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 123dd94a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dd94d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_123dd950:;
  /* 123dd950 jmp 0x123dddb7 */
  goto L_123dddb7;
L_123dd955:;
  /* 123dd955 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 123dd958 push edx */
  push32((uint32_t)(EDX));
  /* 123dd959 call 0x123de1c0 */
  push32(0x123dd95eu); f_123de1c0();
  /* 123dd95e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd961 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 123dd967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd96a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 123dd96d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dd96f je 0x123dd983 */
  if (C.zf) goto L_123dd983;
  /* 123dd971 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 123dd977 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 123dd97e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 123dd981 jmp 0x123dd991 */
  goto L_123dd991;
L_123dd983:;
  /* 123dd983 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 123dd989 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 123dd98f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_123dd991:;
  /* 123dd991 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 123dd99b jmp 0x123dddb7 */
  goto L_123dddb7;
L_123dd9a0:;
  /* 123dd9a0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123dd9a7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 123dd9aa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 123dd9ad mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_123dd9b0:;
  /* 123dd9b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dd9b3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 123dd9b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dd9b8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 123dd9be mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123dd9c1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd9c8 jge 0x123dd9d6 */
  if ((C.sf==C.of)) goto L_123dd9d6;
  /* 123dd9ca mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 123dd9d4 jmp 0x123dd9f2 */
  goto L_123dd9f2;
L_123dd9d6:;
  /* 123dd9d6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd9dd jne 0x123dd9f2 */
  if (!C.zf) goto L_123dd9f2;
  /* 123dd9df movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dd9e3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dd9e6 jne 0x123dd9f2 */
  if (!C.zf) goto L_123dd9f2;
  /* 123dd9e8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_123dd9f2:;
  /* 123dd9f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123dd9f5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dd9f8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 123dd9fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123dd9fe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dda01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123dda03 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 123dda06 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 123dda0c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 123dda12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dda15 push ecx */
  push32((uint32_t)(ECX));
  /* 123dda16 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 123dda1c push edx */
  push32((uint32_t)(EDX));
  /* 123dda1d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dda21 push eax */
  push32((uint32_t)(EAX));
  /* 123dda22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dda25 push ecx */
  push32((uint32_t)(ECX));
  /* 123dda26 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 123dda2c push edx */
  push32((uint32_t)(EDX));
  /* 123dda2d call dword ptr [0x124013a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124013a0))), 0x123dda33u);
  /* 123dda33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dda36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dda39 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 123dda3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dda40 je 0x123dda58 */
  if (C.zf) goto L_123dda58;
  /* 123dda42 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dda49 jne 0x123dda58 */
  if (!C.zf) goto L_123dda58;
  /* 123dda4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dda4e push ecx */
  push32((uint32_t)(ECX));
  /* 123dda4f call dword ptr [0x124013ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124013ac))), 0x123dda55u);
  /* 123dda55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123dda58:;
  /* 123dda58 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 123dda5c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dda5f jne 0x123dda7a */
  if (!C.zf) goto L_123dda7a;
  /* 123dda61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dda64 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 123dda69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dda6b jne 0x123dda7a */
  if (!C.zf) goto L_123dda7a;
  /* 123dda6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dda70 push ecx */
  push32((uint32_t)(ECX));
  /* 123dda71 call dword ptr [0x124013a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124013a4))), 0x123dda77u);
  /* 123dda77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123dda7a:;
  /* 123dda7a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dda7d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123dda80 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dda83 jne 0x123dda97 */
  if (!C.zf) goto L_123dda97;
  /* 123dda85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dda88 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 123dda8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123dda8e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dda91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dda94 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_123dda97:;
  /* 123dda97 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dda9a push eax */
  push32((uint32_t)(EAX));
  /* 123dda9b call 0x123d9220 */
  push32(0x123ddaa0u); f_123d9220();
  /* 123ddaa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddaa3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123ddaa6 jmp 0x123dddb7 */
  goto L_123dddb7;
L_123ddaab:;
  /* 123ddaab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddaae or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 123ddab1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123ddab4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 123ddabe jmp 0x123ddb45 */
  goto L_123ddb45;
L_123ddac3:;
  /* 123ddac3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 123ddacd jmp 0x123ddb45 */
  goto L_123ddb45;
L_123ddacf:;
  /* 123ddacf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_123ddad9:;
  /* 123ddad9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 123ddae3 jmp 0x123ddaef */
  goto L_123ddaef;
L_123ddae5:;
  /* 123ddae5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_123ddaef:;
  /* 123ddaef mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 123ddaf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddafc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 123ddb02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123ddb04 je 0x123ddb23 */
  if (C.zf) goto L_123ddb23;
  /* 123ddb06 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 123ddb0d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 123ddb13 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddb16 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 123ddb1c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_123ddb23:;
  /* 123ddb23 jmp 0x123ddb45 */
  goto L_123ddb45;
L_123ddb25:;
  /* 123ddb25 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 123ddb2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddb32 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 123ddb38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123ddb3a je 0x123ddb45 */
  if (C.zf) goto L_123ddb45;
  /* 123ddb3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddb3f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 123ddb42 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123ddb45:;
  /* 123ddb45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddb48 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 123ddb4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123ddb4f je 0x123ddb6e */
  if (C.zf) goto L_123ddb6e;
  /* 123ddb51 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 123ddb54 push ecx */
  push32((uint32_t)(ECX));
  /* 123ddb55 call 0x123de1e0 */
  push32(0x123ddb5au); f_123de1e0();
  /* 123ddb5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddb5d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 123ddb63 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 123ddb69 jmp 0x123ddbff */
  goto L_123ddbff;
L_123ddb6e:;
  /* 123ddb6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddb71 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 123ddb74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123ddb76 je 0x123ddbc0 */
  if (C.zf) goto L_123ddbc0;
  /* 123ddb78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddb7b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 123ddb7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123ddb80 je 0x123ddba0 */
  if (C.zf) goto L_123ddba0;
  /* 123ddb82 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 123ddb85 push ecx */
  push32((uint32_t)(ECX));
  /* 123ddb86 call 0x123de1c0 */
  push32(0x123ddb8bu); f_123de1c0();
  /* 123ddb8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddb8e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 123ddb91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123ddb92 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 123ddb98 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 123ddb9e jmp 0x123ddbbe */
  goto L_123ddbbe;
L_123ddba0:;
  /* 123ddba0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 123ddba3 push edx */
  push32((uint32_t)(EDX));
  /* 123ddba4 call 0x123de1c0 */
  push32(0x123ddba9u); f_123de1c0();
  /* 123ddba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddbac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123ddbb1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123ddbb2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 123ddbb8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_123ddbbe:;
  /* 123ddbbe jmp 0x123ddbff */
  goto L_123ddbff;
L_123ddbc0:;
  /* 123ddbc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddbc3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 123ddbc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123ddbc8 je 0x123ddbe5 */
  if (C.zf) goto L_123ddbe5;
  /* 123ddbca lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 123ddbcd push ecx */
  push32((uint32_t)(ECX));
  /* 123ddbce call 0x123de1c0 */
  push32(0x123ddbd3u); f_123de1c0();
  /* 123ddbd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddbd6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123ddbd7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 123ddbdd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 123ddbe3 jmp 0x123ddbff */
  goto L_123ddbff;
L_123ddbe5:;
  /* 123ddbe5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 123ddbe8 push edx */
  push32((uint32_t)(EDX));
  /* 123ddbe9 call 0x123de1c0 */
  push32(0x123ddbeeu); f_123de1c0();
  /* 123ddbee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddbf1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123ddbf3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 123ddbf9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_123ddbff:;
  /* 123ddbff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddc02 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 123ddc05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123ddc07 je 0x123ddc47 */
  if (C.zf) goto L_123ddc47;
  /* 123ddc09 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123ddc10 jg 0x123ddc47 */
  if ((!C.zf&&C.sf==C.of)) goto L_123ddc47;
  /* 123ddc12 jl 0x123ddc1d */
  if ((C.sf!=C.of)) goto L_123ddc1d;
  /* 123ddc14 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123ddc1b jae 0x123ddc47 */
  if (!C.cf) goto L_123ddc47;
L_123ddc1d:;
  /* 123ddc1d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 123ddc23 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123ddc25 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 123ddc2b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddc2e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123ddc30 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 123ddc36 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 123ddc3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddc3f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 123ddc42 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123ddc45 jmp 0x123ddc5f */
  goto L_123ddc5f;
L_123ddc47:;
  /* 123ddc47 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 123ddc4d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 123ddc53 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 123ddc59 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_123ddc5f:;
  /* 123ddc5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddc62 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 123ddc68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123ddc6a jne 0x123ddc87 */
  if (!C.zf) goto L_123ddc87;
  /* 123ddc6c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 123ddc72 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 123ddc78 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 123ddc7b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 123ddc81 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_123ddc87:;
  /* 123ddc87 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123ddc8e jge 0x123ddc9c */
  if ((C.sf==C.of)) goto L_123ddc9c;
  /* 123ddc90 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 123ddc9a jmp 0x123ddca5 */
  goto L_123ddca5;
L_123ddc9c:;
  /* 123ddc9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddc9f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 123ddca2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123ddca5:;
  /* 123ddca5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 123ddcab or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 123ddcb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123ddcb3 jne 0x123ddcbc */
  if (!C.zf) goto L_123ddcbc;
  /* 123ddcb5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_123ddcbc:;
  /* 123ddcbc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 123ddcbf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_123ddcc2:;
  /* 123ddcc2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 123ddcc8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 123ddcce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123ddcd1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 123ddcd7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123ddcd9 jg 0x123ddcef */
  if ((!C.zf&&C.sf==C.of)) goto L_123ddcef;
  /* 123ddcdb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 123ddce1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 123ddce7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123ddce9 je 0x123ddd70 */
  if (C.zf) goto L_123ddd70;
L_123ddcef:;
  /* 123ddcef mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 123ddcf5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123ddcf6 push edx */
  push32((uint32_t)(EDX));
  /* 123ddcf7 push eax */
  push32((uint32_t)(EAX));
  /* 123ddcf8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 123ddcfe push edx */
  push32((uint32_t)(EDX));
  /* 123ddcff mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 123ddd05 push eax */
  push32((uint32_t)(EAX));
  /* 123ddd06 call 0x123dd080 */
  push32(0x123ddd0bu); f_123dd080();
  /* 123ddd0b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddd0e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 123ddd14 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 123ddd1a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123ddd1b push edx */
  push32((uint32_t)(EDX));
  /* 123ddd1c push eax */
  push32((uint32_t)(EAX));
  /* 123ddd1d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 123ddd23 push ecx */
  push32((uint32_t)(ECX));
  /* 123ddd24 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 123ddd2a push edx */
  push32((uint32_t)(EDX));
  /* 123ddd2b call 0x123dd010 */
  push32(0x123ddd30u); f_123dd010();
  /* 123ddd30 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 123ddd36 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 123ddd3c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123ddd43 jle 0x123ddd57 */
  if ((C.zf||C.sf!=C.of)) goto L_123ddd57;
  /* 123ddd45 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 123ddd4b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddd51 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_123ddd57:;
  /* 123ddd57 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123ddd5a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 123ddd60 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 123ddd62 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123ddd65 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123ddd68 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123ddd6b jmp 0x123ddcc2 */
  goto L_123ddcc2;
L_123ddd70:;
  /* 123ddd70 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 123ddd73 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123ddd76 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123ddd79 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123ddd7c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddd7f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 123ddd82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddd85 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 123ddd8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123ddd8c je 0x123dddb7 */
  if (C.zf) goto L_123dddb7;
  /* 123ddd8e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123ddd91 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123ddd94 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123ddd97 jne 0x123ddd9f */
  if (!C.zf) goto L_123ddd9f;
  /* 123ddd99 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123ddd9d jne 0x123dddb7 */
  if (!C.zf) goto L_123dddb7;
L_123ddd9f:;
  /* 123ddd9f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123ddda2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123ddda5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123ddda8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dddab mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 123dddae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dddb1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dddb4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_123dddb7:;
  /* 123dddb7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dddbe jne 0x123ddf92 */
  if (!C.zf) goto L_123ddf92;
  /* 123dddc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dddc7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 123dddca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dddcc je 0x123dde1d */
  if (C.zf) goto L_123dde1d;
  /* 123dddce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dddd1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 123dddd7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dddd9 je 0x123dddeb */
  if (C.zf) goto L_123dddeb;
  /* 123ddddb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 123ddde2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 123ddde9 jmp 0x123dde1d */
  goto L_123dde1d;
L_123dddeb:;
  /* 123dddeb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dddee and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 123dddf1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dddf3 je 0x123dde05 */
  if (C.zf) goto L_123dde05;
  /* 123dddf5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 123dddfc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 123dde03 jmp 0x123dde1d */
  goto L_123dde1d;
L_123dde05:;
  /* 123dde05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dde08 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 123dde0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dde0d je 0x123dde1d */
  if (C.zf) goto L_123dde1d;
  /* 123dde0f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 123dde16 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_123dde1d:;
  /* 123dde1d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 123dde23 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dde26 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dde29 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 123dde2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dde32 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 123dde35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dde37 jne 0x123dde55 */
  if (!C.zf) goto L_123dde55;
  /* 123dde39 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 123dde3f push eax */
  push32((uint32_t)(EAX));
  /* 123dde40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dde43 push ecx */
  push32((uint32_t)(ECX));
  /* 123dde44 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 123dde4a push edx */
  push32((uint32_t)(EDX));
  /* 123dde4b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 123dde4d call 0x123de130 */
  push32(0x123dde52u); f_123de130();
  /* 123dde52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123dde55:;
  /* 123dde55 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 123dde5b push eax */
  push32((uint32_t)(EAX));
  /* 123dde5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dde5f push ecx */
  push32((uint32_t)(ECX));
  /* 123dde60 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dde63 push edx */
  push32((uint32_t)(EDX));
  /* 123dde64 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 123dde6a push eax */
  push32((uint32_t)(EAX));
  /* 123dde6b call 0x123de170 */
  push32(0x123dde70u); f_123de170();
  /* 123dde70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dde73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dde76 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 123dde79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dde7b je 0x123ddea3 */
  if (C.zf) goto L_123ddea3;
  /* 123dde7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dde80 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123dde83 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dde85 jne 0x123ddea3 */
  if (!C.zf) goto L_123ddea3;
  /* 123dde87 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 123dde8d push eax */
  push32((uint32_t)(EAX));
  /* 123dde8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dde91 push ecx */
  push32((uint32_t)(ECX));
  /* 123dde92 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 123dde98 push edx */
  push32((uint32_t)(EDX));
  /* 123dde99 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 123dde9b call 0x123de130 */
  push32(0x123ddea0u); f_123de130();
  /* 123ddea0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123ddea3:;
  /* 123ddea3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123ddea7 je 0x123ddf51 */
  if (C.zf) goto L_123ddf51;
  /* 123ddead cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123ddeb1 jle 0x123ddf51 */
  if ((C.zf||C.sf!=C.of)) goto L_123ddf51;
  /* 123ddeb7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123ddeba mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 123ddec0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123ddec3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_123ddec9:;
  /* 123ddec9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 123ddecf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 123dded5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dded8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 123ddede test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123ddee0 je 0x123ddf4f */
  if (C.zf) goto L_123ddf4f;
  /* 123ddee2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 123ddee8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 123ddeeb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 123ddef2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 123ddef9 push eax */
  push32((uint32_t)(EAX));
  /* 123ddefa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 123ddf00 push ecx */
  push32((uint32_t)(ECX));
  /* 123ddf01 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 123ddf07 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddf0a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 123ddf10 call 0x123df2e0 */
  push32(0x123ddf15u); f_123df2e0();
  /* 123ddf15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddf18 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 123ddf1e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123ddf25 jg 0x123ddf29 */
  if ((!C.zf&&C.sf==C.of)) goto L_123ddf29;
  /* 123ddf27 jmp 0x123ddf4f */
  goto L_123ddf4f;
L_123ddf29:;
  /* 123ddf29 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 123ddf2f push eax */
  push32((uint32_t)(EAX));
  /* 123ddf30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123ddf33 push ecx */
  push32((uint32_t)(ECX));
  /* 123ddf34 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 123ddf3a push edx */
  push32((uint32_t)(EDX));
  /* 123ddf3b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 123ddf41 push eax */
  push32((uint32_t)(EAX));
  /* 123ddf42 call 0x123de170 */
  push32(0x123ddf47u); f_123de170();
  /* 123ddf47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123ddf4a jmp 0x123ddec9 */
  goto L_123ddec9;
L_123ddf4f:;
  /* 123ddf4f jmp 0x123ddf6c */
  goto L_123ddf6c;
L_123ddf51:;
  /* 123ddf51 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 123ddf57 push ecx */
  push32((uint32_t)(ECX));
  /* 123ddf58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123ddf5b push edx */
  push32((uint32_t)(EDX));
  /* 123ddf5c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123ddf5f push eax */
  push32((uint32_t)(EAX));
  /* 123ddf60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123ddf63 push ecx */
  push32((uint32_t)(ECX));
  /* 123ddf64 call 0x123de170 */
  push32(0x123ddf69u); f_123de170();
  /* 123ddf69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123ddf6c:;
  /* 123ddf6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123ddf6f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123ddf72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123ddf74 je 0x123ddf92 */
  if (C.zf) goto L_123ddf92;
  /* 123ddf76 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 123ddf7c push eax */
  push32((uint32_t)(EAX));
  /* 123ddf7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123ddf80 push ecx */
  push32((uint32_t)(ECX));
  /* 123ddf81 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 123ddf87 push edx */
  push32((uint32_t)(EDX));
  /* 123ddf88 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 123ddf8a call 0x123de130 */
  push32(0x123ddf8fu); f_123de130();
  /* 123ddf8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123ddf92:;
  /* 123ddf92 jmp 0x123dd3a4 */
  goto L_123dd3a4;
L_123ddf97:;
  /* 123ddf97 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 123ddf9d pop edi */
  EDI = (pop32());
  /* 123ddf9e pop esi */
  ESI = (pop32());
  /* 123ddf9f pop ebx */
  EBX = (pop32());
  /* 123ddfa0 mov esp, ebp */
  ESP = (EBP);
  /* 123ddfa2 pop ebp */
  EBP = (pop32());
  /* 123ddfa3 ret  */
  ESPCHK(0x123dd380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0b0 @ 0x123de0b0 (119 bytes, 44 insns) */
void f_123de0b0(void) {
  FTRACE(0x123de0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123de0b1 mov ebp, esp */
  EBP = (ESP);
  /* 123de0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123de0b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de0b7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123de0ba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de0bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de0c0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 123de0c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de0c6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de0ca jl 0x123de0f2 */
  if ((C.sf!=C.of)) goto L_123de0f2;
  /* 123de0cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de0cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123de0d1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 123de0d4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 123de0d6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 123de0da and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123de0e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123de0e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de0e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123de0e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de0eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de0ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123de0f0 jmp 0x123de105 */
  goto L_123de105;
L_123de0f2:;
  /* 123de0f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de0f5 push edx */
  push32((uint32_t)(EDX));
  /* 123de0f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de0f9 push eax */
  push32((uint32_t)(EAX));
  /* 123de0fa call 0x123dd100 */
  push32(0x123de0ffu); f_123dd100();
  /* 123de0ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123de102 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123de105:;
  /* 123de105 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de109 jne 0x123de116 */
  if (!C.zf) goto L_123de116;
  /* 123de10b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de10e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 123de114 jmp 0x123de123 */
  goto L_123de123;
L_123de116:;
  /* 123de116 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de119 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123de11b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de11e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de121 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_123de123:;
  /* 123de123 mov esp, ebp */
  ESP = (EBP);
  /* 123de125 pop ebp */
  EBP = (pop32());
  /* 123de126 ret  */
  ESPCHK(0x123de0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e130 @ 0x123de130 (53 bytes, 23 insns) */
void f_123de130(void) {
  FTRACE(0x123de130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de130 push ebp */
  push32((uint32_t)(EBP));
  /* 123de131 mov ebp, esp */
  EBP = (ESP);
L_123de133:;
  /* 123de133 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de136 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de139 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de13c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 123de13f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123de141 jle 0x123de163 */
  if ((C.zf||C.sf!=C.of)) goto L_123de163;
  /* 123de143 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123de146 push edx */
  push32((uint32_t)(EDX));
  /* 123de147 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de14a push eax */
  push32((uint32_t)(EAX));
  /* 123de14b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de14e push ecx */
  push32((uint32_t)(ECX));
  /* 123de14f call 0x123de0b0 */
  push32(0x123de154u); f_123de0b0();
  /* 123de154 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123de157 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123de15a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de15d jne 0x123de161 */
  if (!C.zf) goto L_123de161;
  /* 123de15f jmp 0x123de163 */
  goto L_123de163;
L_123de161:;
  /* 123de161 jmp 0x123de133 */
  goto L_123de133;
L_123de163:;
  /* 123de163 pop ebp */
  EBP = (pop32());
  /* 123de164 ret  */
  ESPCHK(0x123de130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x123de170 (74 bytes, 31 insns) */
void f_123de170(void) {
  FTRACE(0x123de170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de170 push ebp */
  push32((uint32_t)(EBP));
  /* 123de171 mov ebp, esp */
  EBP = (ESP);
  /* 123de173 push ecx */
  push32((uint32_t)(ECX));
L_123de174:;
  /* 123de174 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de177 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de17a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de17d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 123de180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123de182 jle 0x123de1b6 */
  if ((C.zf||C.sf!=C.of)) goto L_123de1b6;
  /* 123de184 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123de187 push edx */
  push32((uint32_t)(EDX));
  /* 123de188 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de18b push eax */
  push32((uint32_t)(EAX));
  /* 123de18c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de18f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123de192 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123de195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123de198 push eax */
  push32((uint32_t)(EAX));
  /* 123de199 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de19c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de19f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123de1a2 call 0x123de0b0 */
  push32(0x123de1a7u); f_123de0b0();
  /* 123de1a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123de1aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123de1ad cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de1b0 jne 0x123de1b4 */
  if (!C.zf) goto L_123de1b4;
  /* 123de1b2 jmp 0x123de1b6 */
  goto L_123de1b6;
L_123de1b4:;
  /* 123de1b4 jmp 0x123de174 */
  goto L_123de174;
L_123de1b6:;
  /* 123de1b6 mov esp, ebp */
  ESP = (EBP);
  /* 123de1b8 pop ebp */
  EBP = (pop32());
  /* 123de1b9 ret  */
  ESPCHK(0x123de170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1c0 @ 0x123de1c0 (26 bytes, 12 insns) */
void f_123de1c0(void) {
  FTRACE(0x123de1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123de1c1 mov ebp, esp */
  EBP = (ESP);
  /* 123de1c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de1c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123de1c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de1cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de1ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123de1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de1d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123de1d5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 123de1d8 pop ebp */
  EBP = (pop32());
  /* 123de1d9 ret  */
  ESPCHK(0x123de1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1e0 @ 0x123de1e0 (31 bytes, 14 insns) */
void f_123de1e0(void) {
  FTRACE(0x123de1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123de1e1 mov ebp, esp */
  EBP = (ESP);
  /* 123de1e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de1e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123de1e8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de1eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de1ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123de1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de1f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123de1f5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de1f8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 123de1fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123de1fd pop ebp */
  EBP = (pop32());
  /* 123de1fe ret  */
  ESPCHK(0x123de1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e200 @ 0x123de200 (27 bytes, 12 insns) */
void f_123de200(void) {
  FTRACE(0x123de200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de200 push ebp */
  push32((uint32_t)(EBP));
  /* 123de201 mov ebp, esp */
  EBP = (ESP);
  /* 123de203 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de206 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123de208 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de20b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de20e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123de210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de213 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123de215 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 123de219 pop ebp */
  EBP = (pop32());
  /* 123de21a ret  */
  ESPCHK(0x123de200u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x123de220 (145 bytes, 42 insns) */
void f_123de220(void) {
  FTRACE(0x123de220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de220 push ebp */
  push32((uint32_t)(EBP));
  /* 123de221 mov ebp, esp */
  EBP = (ESP);
  /* 123de223 push ecx */
  push32((uint32_t)(ECX));
  /* 123de224 call 0x123de2d0 */
  push32(0x123de229u); f_123de2d0();
  /* 123de229 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de22c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123de22e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123de235 jmp 0x123de240 */
  goto L_123de240;
L_123de237:;
  /* 123de237 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123de23a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de23d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123de240:;
  /* 123de240 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de244 jae 0x123de26a */
  if (!C.cf) goto L_123de26a;
  /* 123de246 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123de249 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de24c cmp ecx, dword ptr [eax*8 + 0x12400fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12400fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de253 jne 0x123de268 */
  if (!C.zf) goto L_123de268;
  /* 123de255 call 0x123de2c0 */
  push32(0x123de25au); f_123de2c0();
  /* 123de25a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123de25d mov ecx, dword ptr [edx*8 + 0x12400fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12400fbc)));
  /* 123de264 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123de266 jmp 0x123de2ad */
  goto L_123de2ad;
L_123de268:;
  /* 123de268 jmp 0x123de237 */
  goto L_123de237;
L_123de26a:;
  /* 123de26a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de26e jb 0x123de283 */
  if (C.cf) goto L_123de283;
  /* 123de270 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de274 ja 0x123de283 */
  if ((!C.cf&&!C.zf)) goto L_123de283;
  /* 123de276 call 0x123de2c0 */
  push32(0x123de27bu); f_123de2c0();
  /* 123de27b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 123de281 jmp 0x123de2ad */
  goto L_123de2ad;
L_123de283:;
  /* 123de283 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de28a jb 0x123de2a2 */
  if (C.cf) goto L_123de2a2;
  /* 123de28c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de293 ja 0x123de2a2 */
  if ((!C.cf&&!C.zf)) goto L_123de2a2;
  /* 123de295 call 0x123de2c0 */
  push32(0x123de29au); f_123de2c0();
  /* 123de29a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 123de2a0 jmp 0x123de2ad */
  goto L_123de2ad;
L_123de2a2:;
  /* 123de2a2 call 0x123de2c0 */
  push32(0x123de2a7u); f_123de2c0();
  /* 123de2a7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_123de2ad:;
  /* 123de2ad mov esp, ebp */
  ESP = (EBP);
  /* 123de2af pop ebp */
  EBP = (pop32());
  /* 123de2b0 ret  */
  ESPCHK(0x123de220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2c0 @ 0x123de2c0 (13 bytes, 6 insns) */
void f_123de2c0(void) {
  FTRACE(0x123de2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123de2c1 mov ebp, esp */
  EBP = (ESP);
  /* 123de2c3 call 0x123d5e30 */
  push32(0x123de2c8u); f_123d5e30();
  /* 123de2c8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de2cb pop ebp */
  EBP = (pop32());
  /* 123de2cc ret  */
  ESPCHK(0x123de2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2d0 @ 0x123de2d0 (13 bytes, 6 insns) */
void f_123de2d0(void) {
  FTRACE(0x123de2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123de2d1 mov ebp, esp */
  EBP = (ESP);
  /* 123de2d3 call 0x123d5e30 */
  push32(0x123de2d8u); f_123d5e30();
  /* 123de2d8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de2db pop ebp */
  EBP = (pop32());
  /* 123de2dc ret  */
  ESPCHK(0x123de2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2e0 @ 0x123de2e0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_123de2e0(void) {
  FTRACE(0x123de2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123de2e1 mov ebp, esp */
  EBP = (ESP);
  /* 123de2e3 push edi */
  push32((uint32_t)(EDI));
  /* 123de2e4 push esi */
  push32((uint32_t)(ESI));
  /* 123de2e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 123de2e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de2eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 123de2ee mov eax, ecx */
  EAX = (ECX);
  /* 123de2f0 mov edx, ecx */
  EDX = (ECX);
  /* 123de2f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de2f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de2f6 jbe 0x123de300 */
  if ((C.cf||C.zf)) goto L_123de300;
  /* 123de2f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de2fa jb 0x123de478 */
  if (C.cf) goto L_123de478;
L_123de300:;
  /* 123de300 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 123de306 jne 0x123de31c */
  if (!C.zf) goto L_123de31c;
  /* 123de308 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123de30b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 123de30e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de311 jb 0x123de33c */
  if (C.cf) goto L_123de33c;
  /* 123de313 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123de315 jmp dword ptr [edx*4 + 0x123de428] */
  switch (EDX) {
    case 0: goto L_123de438;
    case 1: goto L_123de440;
    case 2: goto L_123de44c;
    case 3: goto L_123de460;
    default: x86_unimpl("switch@0x123de315 out of table"); return;
  }
L_123de31c:;
  /* 123de31c mov eax, edi */
  EAX = (EDI);
  /* 123de31e mov edx, 3 */
  EDX = (0x3u);
  /* 123de323 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de326 jb 0x123de334 */
  if (C.cf) goto L_123de334;
  /* 123de328 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 123de32b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de32d jmp dword ptr [eax*4 + 0x123de340] */
  switch (EAX) {
    case 1: goto L_123de350;
    case 2: goto L_123de37c;
    case 3: goto L_123de3a0;
    default: x86_unimpl("switch@0x123de32d out of table"); return;
  }
L_123de334:;
  /* 123de334 jmp dword ptr [ecx*4 + 0x123de438] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x123de438)))); return;
  /* 123de33b nop  */
  /* nop */
L_123de33c:;
  /* 123de33c jmp dword ptr [ecx*4 + 0x123de3bc] */
  switch (ECX) {
    case 0: goto L_123de41f;
    case 1: goto L_123de40c;
    case 2: goto L_123de404;
    case 3: goto L_123de3fc;
    case 4: goto L_123de3f4;
    case 5: goto L_123de3ec;
    case 6: goto L_123de3e4;
    case 7: goto L_123de3dc;
    default: x86_unimpl("switch@0x123de33c out of table"); return;
  }
  /* 123de343 nop  */
  /* nop */
L_123de350:;
  /* 123de350 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123de352 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123de354 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123de356 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123de359 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123de35c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123de35f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123de362 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123de365 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123de368 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123de36b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de36e jb 0x123de33c */
  if (C.cf) goto L_123de33c;
  /* 123de370 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123de372 jmp dword ptr [edx*4 + 0x123de428] */
  switch (EDX) {
    case 0: goto L_123de438;
    case 1: goto L_123de440;
    case 2: goto L_123de44c;
    case 3: goto L_123de460;
    default: x86_unimpl("switch@0x123de372 out of table"); return;
  }
  /* 123de379 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123de37c:;
  /* 123de37c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123de37e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123de380 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123de382 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123de385 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123de388 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123de38b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123de38e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123de391 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de394 jb 0x123de33c */
  if (C.cf) goto L_123de33c;
  /* 123de396 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123de398 jmp dword ptr [edx*4 + 0x123de428] */
  switch (EDX) {
    case 0: goto L_123de438;
    case 1: goto L_123de440;
    case 2: goto L_123de44c;
    case 3: goto L_123de460;
    default: x86_unimpl("switch@0x123de398 out of table"); return;
  }
  /* 123de39f nop  */
  /* nop */
L_123de3a0:;
  /* 123de3a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123de3a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123de3a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123de3a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123de3a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123de3aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123de3ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de3ae jb 0x123de33c */
  if (C.cf) goto L_123de33c;
  /* 123de3b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123de3b2 jmp dword ptr [edx*4 + 0x123de428] */
  switch (EDX) {
    case 0: goto L_123de438;
    case 1: goto L_123de440;
    case 2: goto L_123de44c;
    case 3: goto L_123de460;
    default: x86_unimpl("switch@0x123de3b2 out of table"); return;
  }
  /* 123de3b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123de3dc:;
  /* 123de3dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 123de3e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_123de3e4:;
  /* 123de3e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 123de3e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_123de3ec:;
  /* 123de3ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 123de3f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_123de3f4:;
  /* 123de3f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 123de3f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_123de3fc:;
  /* 123de3fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 123de400 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_123de404:;
  /* 123de404 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 123de408 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_123de40c:;
  /* 123de40c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 123de410 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 123de414 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 123de41b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123de41d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_123de41f:;
  /* 123de41f jmp dword ptr [edx*4 + 0x123de428] */
  switch (EDX) {
    case 0: goto L_123de438;
    case 1: goto L_123de440;
    case 2: goto L_123de44c;
    case 3: goto L_123de460;
    default: x86_unimpl("switch@0x123de41f out of table"); return;
  }
  /* 123de426 mov edi, edi */
  EDI = (EDI);
L_123de438:;
  /* 123de438 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de43b pop esi */
  ESI = (pop32());
  /* 123de43c pop edi */
  EDI = (pop32());
  /* 123de43d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123de43e ret  */
  ESPCHK(0x123de2e0u, _esp0);
  ESP += 4; return;
  /* 123de43f nop  */
  /* nop */
L_123de440:;
  /* 123de440 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123de442 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123de444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de447 pop esi */
  ESI = (pop32());
  /* 123de448 pop edi */
  EDI = (pop32());
  /* 123de449 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123de44a ret  */
  ESPCHK(0x123de2e0u, _esp0);
  ESP += 4; return;
  /* 123de44b nop  */
  /* nop */
L_123de44c:;
  /* 123de44c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123de44e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123de450 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123de453 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123de456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de459 pop esi */
  ESI = (pop32());
  /* 123de45a pop edi */
  EDI = (pop32());
  /* 123de45b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123de45c ret  */
  ESPCHK(0x123de2e0u, _esp0);
  ESP += 4; return;
  /* 123de45d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123de460:;
  /* 123de460 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123de462 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123de464 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123de467 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123de46a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123de46d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123de470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de473 pop esi */
  ESI = (pop32());
  /* 123de474 pop edi */
  EDI = (pop32());
  /* 123de475 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123de476 ret  */
  ESPCHK(0x123de2e0u, _esp0);
  ESP += 4; return;
  /* 123de477 nop  */
  /* nop */
L_123de478:;
  /* 123de478 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 123de47c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 123de480 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 123de486 jne 0x123de4ac */
  if (!C.zf) goto L_123de4ac;
  /* 123de488 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123de48b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 123de48e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de491 jb 0x123de4a0 */
  if (C.cf) goto L_123de4a0;
  /* 123de493 std  */
  C.df=1;
  /* 123de494 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123de496 cld  */
  C.df=0;
  /* 123de497 jmp dword ptr [edx*4 + 0x123de5c0] */
  switch (EDX) {
    case 0: goto L_123de5d0;
    case 1: goto L_123de5d8;
    case 2: goto L_123de5e8;
    case 3: goto L_123de5fc;
    default: x86_unimpl("switch@0x123de497 out of table"); return;
  }
  /* 123de49e mov edi, edi */
  EDI = (EDI);
L_123de4a0:;
  /* 123de4a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123de4a2 jmp dword ptr [ecx*4 + 0x123de570] */
  switch (ECX) {
    case 0: goto L_123de5b7;
    default: x86_unimpl("switch@0x123de4a2 out of table"); return;
  }
  /* 123de4a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123de4ac:;
  /* 123de4ac mov eax, edi */
  EAX = (EDI);
  /* 123de4ae mov edx, 3 */
  EDX = (0x3u);
  /* 123de4b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de4b6 jb 0x123de4c4 */
  if (C.cf) goto L_123de4c4;
  /* 123de4b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 123de4bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de4bd jmp dword ptr [eax*4 + 0x123de4c8] */
  switch (EAX) {
    case 1: goto L_123de4d8;
    case 2: goto L_123de4f8;
    case 3: goto L_123de520;
    default: x86_unimpl("switch@0x123de4bd out of table"); return;
  }
L_123de4c4:;
  /* 123de4c4 jmp dword ptr [ecx*4 + 0x123de5c0] */
  switch (ECX) {
    case 0: goto L_123de5d0;
    case 1: goto L_123de5d8;
    case 2: goto L_123de5e8;
    case 3: goto L_123de5fc;
    default: x86_unimpl("switch@0x123de4c4 out of table"); return;
  }
  /* 123de4cb nop  */
  /* nop */
L_123de4d8:;
  /* 123de4d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123de4db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123de4dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123de4e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 123de4e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123de4e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 123de4e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de4e8 jb 0x123de4a0 */
  if (C.cf) goto L_123de4a0;
  /* 123de4ea std  */
  C.df=1;
  /* 123de4eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123de4ed cld  */
  C.df=0;
  /* 123de4ee jmp dword ptr [edx*4 + 0x123de5c0] */
  switch (EDX) {
    case 0: goto L_123de5d0;
    case 1: goto L_123de5d8;
    case 2: goto L_123de5e8;
    case 3: goto L_123de5fc;
    default: x86_unimpl("switch@0x123de4ee out of table"); return;
  }
  /* 123de4f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123de4f8:;
  /* 123de4f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123de4fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123de4fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123de500 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123de503 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123de506 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123de509 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de50c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de50f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de512 jb 0x123de4a0 */
  if (C.cf) goto L_123de4a0;
  /* 123de514 std  */
  C.df=1;
  /* 123de515 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123de517 cld  */
  C.df=0;
  /* 123de518 jmp dword ptr [edx*4 + 0x123de5c0] */
  switch (EDX) {
    case 0: goto L_123de5d0;
    case 1: goto L_123de5d8;
    case 2: goto L_123de5e8;
    case 3: goto L_123de5fc;
    default: x86_unimpl("switch@0x123de518 out of table"); return;
  }
  /* 123de51f nop  */
  /* nop */
L_123de520:;
  /* 123de520 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123de523 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123de525 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123de528 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123de52b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123de52e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123de531 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123de534 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123de537 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de53a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de53d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de540 jb 0x123de4a0 */
  if (C.cf) goto L_123de4a0;
  /* 123de546 std  */
  C.df=1;
  /* 123de547 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 123de549 cld  */
  C.df=0;
  /* 123de54a jmp dword ptr [edx*4 + 0x123de5c0] */
  switch (EDX) {
    case 0: goto L_123de5d0;
    case 1: goto L_123de5d8;
    case 2: goto L_123de5e8;
    case 3: goto L_123de5fc;
    default: x86_unimpl("switch@0x123de54a out of table"); return;
  }
  /* 123de551 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 123de554 je 0x123de53b */
  if (C.zf) goto L_123de53b;
  /* 123de556 cmp eax, 0x3de57c12 */
  { uint32_t _a=(EAX),_b=(0x3de57c12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de55b adc al, byte ptr [ebp - 0x1a73edc3] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBP + -0x1a73edc3))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123de562 cmp eax, 0x3de59412 */
  { uint32_t _a=(EAX),_b=(0x3de59412u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de567 adc bl, byte ptr [ebp - 0x1a5bedc3] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBP + -0x1a5bedc3))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 123de574 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 123de578 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 123de57c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 123de580 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 123de584 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 123de588 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 123de58c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 123de590 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 123de594 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 123de598 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 123de59c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 123de5a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 123de5a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 123de5a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 123de5ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 123de5b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123de5b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_123de5b7:;
  /* 123de5b7 jmp dword ptr [edx*4 + 0x123de5c0] */
  switch (EDX) {
    case 0: goto L_123de5d0;
    case 1: goto L_123de5d8;
    case 2: goto L_123de5e8;
    case 3: goto L_123de5fc;
    default: x86_unimpl("switch@0x123de5b7 out of table"); return;
  }
  /* 123de5be mov edi, edi */
  EDI = (EDI);
L_123de5d0:;
  /* 123de5d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de5d3 pop esi */
  ESI = (pop32());
  /* 123de5d4 pop edi */
  EDI = (pop32());
  /* 123de5d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123de5d6 ret  */
  ESPCHK(0x123de2e0u, _esp0);
  ESP += 4; return;
  /* 123de5d7 nop  */
  /* nop */
L_123de5d8:;
  /* 123de5d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123de5db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123de5de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de5e1 pop esi */
  ESI = (pop32());
  /* 123de5e2 pop edi */
  EDI = (pop32());
  /* 123de5e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123de5e4 ret  */
  ESPCHK(0x123de2e0u, _esp0);
  ESP += 4; return;
  /* 123de5e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123de5e8:;
  /* 123de5e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123de5eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123de5ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123de5f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123de5f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de5f7 pop esi */
  ESI = (pop32());
  /* 123de5f8 pop edi */
  EDI = (pop32());
  /* 123de5f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123de5fa ret  */
  ESPCHK(0x123de2e0u, _esp0);
  ESP += 4; return;
  /* 123de5fb nop  */
  /* nop */
L_123de5fc:;
  /* 123de5fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 123de5ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 123de602 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 123de605 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 123de608 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 123de60b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 123de60e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de611 pop esi */
  ESI = (pop32());
  /* 123de612 pop edi */
  EDI = (pop32());
  /* 123de613 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123de614 ret  */
  ESPCHK(0x123de2e0u, _esp0);
  ESP += 4; return;
L_123de53b: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x123de53b (unresolved jump table)"); return;
}

/* FUN_1000e620 @ 0x123de620 (421 bytes, 148 insns) */
void f_123de620(void) {
  FTRACE(0x123de620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de620 push ebp */
  push32((uint32_t)(EBP));
  /* 123de621 mov ebp, esp */
  EBP = (ESP);
  /* 123de623 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123de625 push 0x123fe5c0 */
  push32((uint32_t)(0x123fe5c0u));
  /* 123de62a push 0x123df4f8 */
  push32((uint32_t)(0x123df4f8u));
  /* 123de62f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123de635 push eax */
  push32((uint32_t)(EAX));
  /* 123de636 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123de63d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123de640 push ebx */
  push32((uint32_t)(EBX));
  /* 123de641 push esi */
  push32((uint32_t)(ESI));
  /* 123de642 push edi */
  push32((uint32_t)(EDI));
  /* 123de643 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123de646 cmp dword ptr [0x124029c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de64d jne 0x123de69e */
  if (!C.zf) goto L_123de69e;
  /* 123de64f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 123de652 push eax */
  push32((uint32_t)(EAX));
  /* 123de653 push 1 */
  push32((uint32_t)(0x1u));
  /* 123de655 push 0x123fe5b8 */
  push32((uint32_t)(0x123fe5b8u));
  /* 123de65a push 1 */
  push32((uint32_t)(0x1u));
  /* 123de65c call dword ptr [0x124052d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d8))), 0x123de662u);
  /* 123de662 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123de664 je 0x123de672 */
  if (C.zf) goto L_123de672;
  /* 123de666 mov dword ptr [0x124029c4], 1 */
  w32((uint32_t)(0x124029c4), (0x1u));
  /* 123de670 jmp 0x123de69e */
  goto L_123de69e;
L_123de672:;
  /* 123de672 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 123de675 push ecx */
  push32((uint32_t)(ECX));
  /* 123de676 push 1 */
  push32((uint32_t)(0x1u));
  /* 123de678 push 0x123fe5b4 */
  push32((uint32_t)(0x123fe5b4u));
  /* 123de67d push 1 */
  push32((uint32_t)(0x1u));
  /* 123de67f push 0 */
  push32((uint32_t)(0x0u));
  /* 123de681 call dword ptr [0x124052e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e8))), 0x123de687u);
  /* 123de687 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123de689 je 0x123de697 */
  if (C.zf) goto L_123de697;
  /* 123de68b mov dword ptr [0x124029c4], 2 */
  w32((uint32_t)(0x124029c4), (0x2u));
  /* 123de695 jmp 0x123de69e */
  goto L_123de69e;
L_123de697:;
  /* 123de697 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de699 jmp 0x123de7c8 */
  goto L_123de7c8;
L_123de69e:;
  /* 123de69e cmp dword ptr [0x124029c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x124029c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de6a5 jne 0x123de6d5 */
  if (!C.zf) goto L_123de6d5;
  /* 123de6a7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de6ab jne 0x123de6b6 */
  if (!C.zf) goto L_123de6b6;
  /* 123de6ad mov edx, dword ptr [0x124029d0] */
  EDX = (r32((uint32_t)(0x124029d0)));
  /* 123de6b3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_123de6b6:;
  /* 123de6b6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123de6b9 push eax */
  push32((uint32_t)(EAX));
  /* 123de6ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de6bd push ecx */
  push32((uint32_t)(ECX));
  /* 123de6be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de6c1 push edx */
  push32((uint32_t)(EDX));
  /* 123de6c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de6c5 push eax */
  push32((uint32_t)(EAX));
  /* 123de6c6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123de6c9 push ecx */
  push32((uint32_t)(ECX));
  /* 123de6ca call dword ptr [0x124052e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e8))), 0x123de6d0u);
  /* 123de6d0 jmp 0x123de7c8 */
  goto L_123de7c8;
L_123de6d5:;
  /* 123de6d5 cmp dword ptr [0x124029c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124029c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de6dc jne 0x123de7c6 */
  if (!C.zf) goto L_123de7c6;
  /* 123de6e2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de6e6 jne 0x123de6f1 */
  if (!C.zf) goto L_123de6f1;
  /* 123de6e8 mov edx, dword ptr [0x124029e0] */
  EDX = (r32((uint32_t)(0x124029e0)));
  /* 123de6ee mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_123de6f1:;
  /* 123de6f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123de6f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123de6f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de6f8 push eax */
  push32((uint32_t)(EAX));
  /* 123de6f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de6fc push ecx */
  push32((uint32_t)(ECX));
  /* 123de6fd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 123de700 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123de702 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de704 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 123de707 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de70a push edx */
  push32((uint32_t)(EDX));
  /* 123de70b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123de70e push eax */
  push32((uint32_t)(EAX));
  /* 123de70f call dword ptr [0x124052e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e0))), 0x123de715u);
  /* 123de715 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123de718 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de71c jne 0x123de725 */
  if (!C.zf) goto L_123de725;
  /* 123de71e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de720 jmp 0x123de7c8 */
  goto L_123de7c8;
L_123de725:;
  /* 123de725 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123de72c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123de72f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123de731 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de734 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123de736 call 0x123d9590 */
  push32(0x123de73bu); f_123d9590();
  /* 123de73b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 123de73e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123de741 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123de744 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123de747 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123de74a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 123de74c push edx */
  push32((uint32_t)(EDX));
  /* 123de74d push 0 */
  push32((uint32_t)(0x0u));
  /* 123de74f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123de752 push eax */
  push32((uint32_t)(EAX));
  /* 123de753 call 0x123da160 */
  push32(0x123de758u); f_123da160();
  /* 123de758 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123de75b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123de762 jmp 0x123de77b */
  goto L_123de77b;
  /* 123de764 mov eax, 1 */
  EAX = (0x1u);
  /* 123de769 ret  */
  ESPCHK(0x123de620u, _esp0);
  ESP += 4; return;
  /* 123de76a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123de76d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123de774 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123de77b:;
  /* 123de77b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de77f jne 0x123de785 */
  if (!C.zf) goto L_123de785;
  /* 123de781 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de783 jmp 0x123de7c8 */
  goto L_123de7c8;
L_123de785:;
  /* 123de785 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123de788 push ecx */
  push32((uint32_t)(ECX));
  /* 123de789 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123de78c push edx */
  push32((uint32_t)(EDX));
  /* 123de78d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de790 push eax */
  push32((uint32_t)(EAX));
  /* 123de791 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de794 push ecx */
  push32((uint32_t)(ECX));
  /* 123de795 push 1 */
  push32((uint32_t)(0x1u));
  /* 123de797 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123de79a push edx */
  push32((uint32_t)(EDX));
  /* 123de79b call dword ptr [0x124052e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e0))), 0x123de7a1u);
  /* 123de7a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123de7a4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de7a8 jne 0x123de7ae */
  if (!C.zf) goto L_123de7ae;
  /* 123de7aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de7ac jmp 0x123de7c8 */
  goto L_123de7c8;
L_123de7ae:;
  /* 123de7ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123de7b1 push eax */
  push32((uint32_t)(EAX));
  /* 123de7b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123de7b5 push ecx */
  push32((uint32_t)(ECX));
  /* 123de7b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123de7b9 push edx */
  push32((uint32_t)(EDX));
  /* 123de7ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de7bd push eax */
  push32((uint32_t)(EAX));
  /* 123de7be call dword ptr [0x124052d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d8))), 0x123de7c4u);
  /* 123de7c4 jmp 0x123de7c8 */
  goto L_123de7c8;
L_123de7c6:;
  /* 123de7c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123de7c8:;
  /* 123de7c8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 123de7cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123de7ce mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123de7d5 pop edi */
  EDI = (pop32());
  /* 123de7d6 pop esi */
  ESI = (pop32());
  /* 123de7d7 pop ebx */
  EBX = (pop32());
  /* 123de7d8 mov esp, ebp */
  ESP = (EBP);
  /* 123de7da pop ebp */
  EBP = (pop32());
  /* 123de7db ret  */
  ESPCHK(0x123de620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7e0 @ 0x123de7e0 (727 bytes, 263 insns) */
void f_123de7e0(void) {
  FTRACE(0x123de7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123de7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123de7e1 mov ebp, esp */
  EBP = (ESP);
  /* 123de7e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123de7e5 push 0x123fe5d0 */
  push32((uint32_t)(0x123fe5d0u));
  /* 123de7ea push 0x123df4f8 */
  push32((uint32_t)(0x123df4f8u));
  /* 123de7ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123de7f5 push eax */
  push32((uint32_t)(EAX));
  /* 123de7f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123de7fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123de800 push ebx */
  push32((uint32_t)(EBX));
  /* 123de801 push esi */
  push32((uint32_t)(ESI));
  /* 123de802 push edi */
  push32((uint32_t)(EDI));
  /* 123de803 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123de806 cmp dword ptr [0x124029e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de80d jne 0x123de866 */
  if (!C.zf) goto L_123de866;
  /* 123de80f push 0 */
  push32((uint32_t)(0x0u));
  /* 123de811 push 0 */
  push32((uint32_t)(0x0u));
  /* 123de813 push 1 */
  push32((uint32_t)(0x1u));
  /* 123de815 push 0x123fe5b8 */
  push32((uint32_t)(0x123fe5b8u));
  /* 123de81a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123de81f push 0 */
  push32((uint32_t)(0x0u));
  /* 123de821 call dword ptr [0x124052dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052dc))), 0x123de827u);
  /* 123de827 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123de829 je 0x123de837 */
  if (C.zf) goto L_123de837;
  /* 123de82b mov dword ptr [0x124029e8], 1 */
  w32((uint32_t)(0x124029e8), (0x1u));
  /* 123de835 jmp 0x123de866 */
  goto L_123de866;
L_123de837:;
  /* 123de837 push 0 */
  push32((uint32_t)(0x0u));
  /* 123de839 push 0 */
  push32((uint32_t)(0x0u));
  /* 123de83b push 1 */
  push32((uint32_t)(0x1u));
  /* 123de83d push 0x123fe5b4 */
  push32((uint32_t)(0x123fe5b4u));
  /* 123de842 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123de847 push 0 */
  push32((uint32_t)(0x0u));
  /* 123de849 call dword ptr [0x124052d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d4))), 0x123de84fu);
  /* 123de84f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123de851 je 0x123de85f */
  if (C.zf) goto L_123de85f;
  /* 123de853 mov dword ptr [0x124029e8], 2 */
  w32((uint32_t)(0x124029e8), (0x2u));
  /* 123de85d jmp 0x123de866 */
  goto L_123de866;
L_123de85f:;
  /* 123de85f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de861 jmp 0x123dead1 */
  goto L_123dead1;
L_123de866:;
  /* 123de866 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de86a jle 0x123de87f */
  if ((C.zf||C.sf!=C.of)) goto L_123de87f;
  /* 123de86c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123de86f push eax */
  push32((uint32_t)(EAX));
  /* 123de870 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de873 push ecx */
  push32((uint32_t)(ECX));
  /* 123de874 call 0x123deaf0 */
  push32(0x123de879u); f_123deaf0();
  /* 123de879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123de87c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_123de87f:;
  /* 123de87f cmp dword ptr [0x124029e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x124029e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de886 jne 0x123de8ab */
  if (!C.zf) goto L_123de8ab;
  /* 123de888 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123de88b push edx */
  push32((uint32_t)(EDX));
  /* 123de88c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123de88f push eax */
  push32((uint32_t)(EAX));
  /* 123de890 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123de893 push ecx */
  push32((uint32_t)(ECX));
  /* 123de894 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de897 push edx */
  push32((uint32_t)(EDX));
  /* 123de898 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de89b push eax */
  push32((uint32_t)(EAX));
  /* 123de89c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de89f push ecx */
  push32((uint32_t)(ECX));
  /* 123de8a0 call dword ptr [0x124052d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d4))), 0x123de8a6u);
  /* 123de8a6 jmp 0x123dead1 */
  goto L_123dead1;
L_123de8ab:;
  /* 123de8ab cmp dword ptr [0x124029e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124029e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de8b2 jne 0x123deacf */
  if (!C.zf) goto L_123deacf;
  /* 123de8b8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de8bc jne 0x123de8c7 */
  if (!C.zf) goto L_123de8c7;
  /* 123de8be mov edx, dword ptr [0x124029e0] */
  EDX = (r32((uint32_t)(0x124029e0)));
  /* 123de8c4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_123de8c7:;
  /* 123de8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123de8c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123de8cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123de8ce push eax */
  push32((uint32_t)(EAX));
  /* 123de8cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de8d2 push ecx */
  push32((uint32_t)(ECX));
  /* 123de8d3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 123de8d6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123de8d8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123de8da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 123de8dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de8e0 push edx */
  push32((uint32_t)(EDX));
  /* 123de8e1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123de8e4 push eax */
  push32((uint32_t)(EAX));
  /* 123de8e5 call dword ptr [0x124052e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e0))), 0x123de8ebu);
  /* 123de8eb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123de8ee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de8f2 jne 0x123de8fb */
  if (!C.zf) goto L_123de8fb;
  /* 123de8f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de8f6 jmp 0x123dead1 */
  goto L_123dead1;
L_123de8fb:;
  /* 123de8fb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123de902 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123de905 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123de907 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123de90a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123de90c call 0x123d9590 */
  push32(0x123de911u); f_123d9590();
  /* 123de911 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 123de914 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123de917 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123de91a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123de91d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123de924 jmp 0x123de93d */
  goto L_123de93d;
  /* 123de926 mov eax, 1 */
  EAX = (0x1u);
  /* 123de92b ret  */
  ESPCHK(0x123de7e0u, _esp0);
  ESP += 4; return;
  /* 123de92c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123de92f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123de936 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123de93d:;
  /* 123de93d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de941 jne 0x123de94a */
  if (!C.zf) goto L_123de94a;
  /* 123de943 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de945 jmp 0x123dead1 */
  goto L_123dead1;
L_123de94a:;
  /* 123de94a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123de94d push edx */
  push32((uint32_t)(EDX));
  /* 123de94e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123de951 push eax */
  push32((uint32_t)(EAX));
  /* 123de952 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123de955 push ecx */
  push32((uint32_t)(ECX));
  /* 123de956 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123de959 push edx */
  push32((uint32_t)(EDX));
  /* 123de95a push 1 */
  push32((uint32_t)(0x1u));
  /* 123de95c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123de95f push eax */
  push32((uint32_t)(EAX));
  /* 123de960 call dword ptr [0x124052e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052e0))), 0x123de966u);
  /* 123de966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123de968 jne 0x123de971 */
  if (!C.zf) goto L_123de971;
  /* 123de96a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de96c jmp 0x123dead1 */
  goto L_123dead1;
L_123de971:;
  /* 123de971 push 0 */
  push32((uint32_t)(0x0u));
  /* 123de973 push 0 */
  push32((uint32_t)(0x0u));
  /* 123de975 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123de978 push ecx */
  push32((uint32_t)(ECX));
  /* 123de979 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123de97c push edx */
  push32((uint32_t)(EDX));
  /* 123de97d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de980 push eax */
  push32((uint32_t)(EAX));
  /* 123de981 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de984 push ecx */
  push32((uint32_t)(ECX));
  /* 123de985 call dword ptr [0x124052dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052dc))), 0x123de98bu);
  /* 123de98b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123de98e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de992 jne 0x123de99b */
  if (!C.zf) goto L_123de99b;
  /* 123de994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de996 jmp 0x123dead1 */
  goto L_123dead1;
L_123de99b:;
  /* 123de99b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de99e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 123de9a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123de9a6 je 0x123de9eb */
  if (C.zf) goto L_123de9eb;
  /* 123de9a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de9ac je 0x123de9e6 */
  if (C.zf) goto L_123de9e6;
  /* 123de9ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123de9b1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123de9b4 jle 0x123de9bd */
  if ((C.zf||C.sf!=C.of)) goto L_123de9bd;
  /* 123de9b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de9b8 jmp 0x123dead1 */
  goto L_123dead1;
L_123de9bd:;
  /* 123de9bd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123de9c0 push ecx */
  push32((uint32_t)(ECX));
  /* 123de9c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123de9c4 push edx */
  push32((uint32_t)(EDX));
  /* 123de9c5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123de9c8 push eax */
  push32((uint32_t)(EAX));
  /* 123de9c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123de9cc push ecx */
  push32((uint32_t)(ECX));
  /* 123de9cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123de9d0 push edx */
  push32((uint32_t)(EDX));
  /* 123de9d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123de9d4 push eax */
  push32((uint32_t)(EAX));
  /* 123de9d5 call dword ptr [0x124052dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052dc))), 0x123de9dbu);
  /* 123de9db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123de9dd jne 0x123de9e6 */
  if (!C.zf) goto L_123de9e6;
  /* 123de9df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123de9e1 jmp 0x123dead1 */
  goto L_123dead1;
L_123de9e6:;
  /* 123de9e6 jmp 0x123deaca */
  goto L_123deaca;
L_123de9eb:;
  /* 123de9eb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123de9ee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 123de9f1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123de9f8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123de9fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123de9fd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dea00 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123dea02 call 0x123d9590 */
  push32(0x123dea07u); f_123d9590();
  /* 123dea07 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 123dea0a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123dea0d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 123dea10 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 123dea13 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123dea1a jmp 0x123dea33 */
  goto L_123dea33;
  /* 123dea1c mov eax, 1 */
  EAX = (0x1u);
  /* 123dea21 ret  */
  ESPCHK(0x123de7e0u, _esp0);
  ESP += 4; return;
  /* 123dea22 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123dea25 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123dea2c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123dea33:;
  /* 123dea33 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dea37 jne 0x123dea40 */
  if (!C.zf) goto L_123dea40;
  /* 123dea39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dea3b jmp 0x123dead1 */
  goto L_123dead1;
L_123dea40:;
  /* 123dea40 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123dea43 push eax */
  push32((uint32_t)(EAX));
  /* 123dea44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dea47 push ecx */
  push32((uint32_t)(ECX));
  /* 123dea48 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123dea4b push edx */
  push32((uint32_t)(EDX));
  /* 123dea4c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123dea4f push eax */
  push32((uint32_t)(EAX));
  /* 123dea50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dea53 push ecx */
  push32((uint32_t)(ECX));
  /* 123dea54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dea57 push edx */
  push32((uint32_t)(EDX));
  /* 123dea58 call dword ptr [0x124052dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052dc))), 0x123dea5eu);
  /* 123dea5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dea60 jne 0x123dea66 */
  if (!C.zf) goto L_123dea66;
  /* 123dea62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dea64 jmp 0x123dead1 */
  goto L_123dead1;
L_123dea66:;
  /* 123dea66 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dea6a jne 0x123dea9a */
  if (!C.zf) goto L_123dea9a;
  /* 123dea6c push 0 */
  push32((uint32_t)(0x0u));
  /* 123dea6e push 0 */
  push32((uint32_t)(0x0u));
  /* 123dea70 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dea72 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dea74 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123dea77 push eax */
  push32((uint32_t)(EAX));
  /* 123dea78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123dea7b push ecx */
  push32((uint32_t)(ECX));
  /* 123dea7c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123dea81 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 123dea84 push edx */
  push32((uint32_t)(EDX));
  /* 123dea85 call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123dea8bu);
  /* 123dea8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123dea8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dea92 jne 0x123dea98 */
  if (!C.zf) goto L_123dea98;
  /* 123dea94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dea96 jmp 0x123dead1 */
  goto L_123dead1;
L_123dea98:;
  /* 123dea98 jmp 0x123deaca */
  goto L_123deaca;
L_123dea9a:;
  /* 123dea9a push 0 */
  push32((uint32_t)(0x0u));
  /* 123dea9c push 0 */
  push32((uint32_t)(0x0u));
  /* 123dea9e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123deaa1 push eax */
  push32((uint32_t)(EAX));
  /* 123deaa2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123deaa5 push ecx */
  push32((uint32_t)(ECX));
  /* 123deaa6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123deaa9 push edx */
  push32((uint32_t)(EDX));
  /* 123deaaa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123deaad push eax */
  push32((uint32_t)(EAX));
  /* 123deaae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123deab3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 123deab6 push ecx */
  push32((uint32_t)(ECX));
  /* 123deab7 call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123deabdu);
  /* 123deabd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123deac0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123deac4 jne 0x123deaca */
  if (!C.zf) goto L_123deaca;
  /* 123deac6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123deac8 jmp 0x123dead1 */
  goto L_123dead1;
L_123deaca:;
  /* 123deaca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123deacd jmp 0x123dead1 */
  goto L_123dead1;
L_123deacf:;
  /* 123deacf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123dead1:;
  /* 123dead1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 123dead4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dead7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123deade pop edi */
  EDI = (pop32());
  /* 123deadf pop esi */
  ESI = (pop32());
  /* 123deae0 pop ebx */
  EBX = (pop32());
  /* 123deae1 mov esp, ebp */
  ESP = (EBP);
  /* 123deae3 pop ebp */
  EBP = (pop32());
  /* 123deae4 ret  */
  ESPCHK(0x123de7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaf0 @ 0x123deaf0 (80 bytes, 32 insns) */
void f_123deaf0(void) {
  FTRACE(0x123deaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123deaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 123deaf1 mov ebp, esp */
  EBP = (ESP);
  /* 123deaf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123deaf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123deaf9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123deafc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123deaff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123deb02:;
  /* 123deb02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123deb05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123deb08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123deb0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123deb0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123deb10 je 0x123deb27 */
  if (C.zf) goto L_123deb27;
  /* 123deb12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123deb15 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123deb18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123deb1a je 0x123deb27 */
  if (C.zf) goto L_123deb27;
  /* 123deb1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123deb1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123deb22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123deb25 jmp 0x123deb02 */
  goto L_123deb02;
L_123deb27:;
  /* 123deb27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123deb2a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123deb2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123deb2f jne 0x123deb39 */
  if (!C.zf) goto L_123deb39;
  /* 123deb31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123deb34 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123deb37 jmp 0x123deb3c */
  goto L_123deb3c;
L_123deb39:;
  /* 123deb39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_123deb3c:;
  /* 123deb3c mov esp, ebp */
  ESP = (EBP);
  /* 123deb3e pop ebp */
  EBP = (pop32());
  /* 123deb3f ret  */
  ESPCHK(0x123deaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb40 @ 0x123deb40 (130 bytes, 43 insns) */
void f_123deb40(void) {
  FTRACE(0x123deb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123deb40 push ebp */
  push32((uint32_t)(EBP));
  /* 123deb41 mov ebp, esp */
  EBP = (ESP);
  /* 123deb43 push ecx */
  push32((uint32_t)(ECX));
  /* 123deb44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123deb47 cmp eax, dword ptr [0x124042dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124042dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123deb4d jae 0x123deb71 */
  if (!C.cf) goto L_123deb71;
  /* 123deb4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123deb52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123deb55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123deb58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123deb5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123deb5e mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123deb65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 123deb6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123deb6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123deb6f jne 0x123deb8c */
  if (!C.zf) goto L_123deb8c;
L_123deb71:;
  /* 123deb71 call 0x123de2c0 */
  push32(0x123deb76u); f_123de2c0();
  /* 123deb76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123deb7c call 0x123de2d0 */
  push32(0x123deb81u); f_123de2d0();
  /* 123deb81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123deb87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123deb8a jmp 0x123debbe */
  goto L_123debbe;
L_123deb8c:;
  /* 123deb8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123deb8f push edx */
  push32((uint32_t)(EDX));
  /* 123deb90 call 0x123dfae0 */
  push32(0x123deb95u); f_123dfae0();
  /* 123deb95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123deb98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123deb9b push eax */
  push32((uint32_t)(EAX));
  /* 123deb9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123deb9f push ecx */
  push32((uint32_t)(ECX));
  /* 123deba0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123deba3 push edx */
  push32((uint32_t)(EDX));
  /* 123deba4 call 0x123debd0 */
  push32(0x123deba9u); f_123debd0();
  /* 123deba9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123debac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123debaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123debb2 push eax */
  push32((uint32_t)(EAX));
  /* 123debb3 call 0x123dfb70 */
  push32(0x123debb8u); f_123dfb70();
  /* 123debb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123debbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123debbe:;
  /* 123debbe mov esp, ebp */
  ESP = (EBP);
  /* 123debc0 pop ebp */
  EBP = (pop32());
  /* 123debc1 ret  */
  ESPCHK(0x123deb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebd0 @ 0x123debd0 (178 bytes, 56 insns) */
void f_123debd0(void) {
  FTRACE(0x123debd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123debd0 push ebp */
  push32((uint32_t)(EBP));
  /* 123debd1 mov ebp, esp */
  EBP = (ESP);
  /* 123debd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123debd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123debd9 push eax */
  push32((uint32_t)(EAX));
  /* 123debda call 0x123df960 */
  push32(0x123debdfu); f_123df960();
  /* 123debdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123debe2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123debe5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123debe9 jne 0x123debfe */
  if (!C.zf) goto L_123debfe;
  /* 123debeb call 0x123de2c0 */
  push32(0x123debf0u); f_123de2c0();
  /* 123debf0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123debf6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123debf9 jmp 0x123dec7e */
  goto L_123dec7e;
L_123debfe:;
  /* 123debfe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123dec01 push ecx */
  push32((uint32_t)(ECX));
  /* 123dec02 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dec04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dec07 push edx */
  push32((uint32_t)(EDX));
  /* 123dec08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dec0b push eax */
  push32((uint32_t)(EAX));
  /* 123dec0c call dword ptr [0x124052cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052cc))), 0x123dec12u);
  /* 123dec12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123dec15 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dec19 jne 0x123dec26 */
  if (!C.zf) goto L_123dec26;
  /* 123dec1b call dword ptr [0x1240528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240528c))), 0x123dec21u);
  /* 123dec21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dec24 jmp 0x123dec2d */
  goto L_123dec2d;
L_123dec26:;
  /* 123dec26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123dec2d:;
  /* 123dec2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dec31 je 0x123dec44 */
  if (C.zf) goto L_123dec44;
  /* 123dec33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dec36 push ecx */
  push32((uint32_t)(ECX));
  /* 123dec37 call 0x123de220 */
  push32(0x123dec3cu); f_123de220();
  /* 123dec3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dec3f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123dec42 jmp 0x123dec7e */
  goto L_123dec7e;
L_123dec44:;
  /* 123dec44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dec47 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 123dec4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dec4d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 123dec50 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dec53 mov ecx, dword ptr [edx*4 + 0x124041a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x124041a0)));
  /* 123dec5a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 123dec5e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 123dec61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dec64 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123dec67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dec6a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123dec6d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dec70 mov eax, dword ptr [eax*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123dec77 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 123dec7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123dec7e:;
  /* 123dec7e mov esp, ebp */
  ESP = (EBP);
  /* 123dec80 pop ebp */
  EBP = (pop32());
  /* 123dec81 ret  */
  ESPCHK(0x123debd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec90 @ 0x123dec90 (130 bytes, 43 insns) */
void f_123dec90(void) {
  FTRACE(0x123dec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dec90 push ebp */
  push32((uint32_t)(EBP));
  /* 123dec91 mov ebp, esp */
  EBP = (ESP);
  /* 123dec93 push ecx */
  push32((uint32_t)(ECX));
  /* 123dec94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dec97 cmp eax, dword ptr [0x124042dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124042dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dec9d jae 0x123decc1 */
  if (!C.cf) goto L_123decc1;
  /* 123dec9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123deca2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123deca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123deca8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123decab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123decae mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123decb5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 123decba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123decbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123decbf jne 0x123decdc */
  if (!C.zf) goto L_123decdc;
L_123decc1:;
  /* 123decc1 call 0x123de2c0 */
  push32(0x123decc6u); f_123de2c0();
  /* 123decc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123deccc call 0x123de2d0 */
  push32(0x123decd1u); f_123de2d0();
  /* 123decd1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123decd7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123decda jmp 0x123ded0e */
  goto L_123ded0e;
L_123decdc:;
  /* 123decdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123decdf push edx */
  push32((uint32_t)(EDX));
  /* 123dece0 call 0x123dfae0 */
  push32(0x123dece5u); f_123dfae0();
  /* 123dece5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dece8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123deceb push eax */
  push32((uint32_t)(EAX));
  /* 123decec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123decef push ecx */
  push32((uint32_t)(ECX));
  /* 123decf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123decf3 push edx */
  push32((uint32_t)(EDX));
  /* 123decf4 call 0x123ded20 */
  push32(0x123decf9u); f_123ded20();
  /* 123decf9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123decfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123decff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123ded02 push eax */
  push32((uint32_t)(EAX));
  /* 123ded03 call 0x123dfb70 */
  push32(0x123ded08u); f_123dfb70();
  /* 123ded08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123ded0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123ded0e:;
  /* 123ded0e mov esp, ebp */
  ESP = (EBP);
  /* 123ded10 pop ebp */
  EBP = (pop32());
  /* 123ded11 ret  */
  ESPCHK(0x123dec90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed20 @ 0x123ded20 (627 bytes, 182 insns) */
void f_123ded20(void) {
  FTRACE(0x123ded20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123ded20 push ebp */
  push32((uint32_t)(EBP));
  /* 123ded21 mov ebp, esp */
  EBP = (ESP);
  /* 123ded23 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123ded29 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123ded30 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123ded33 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 123ded39 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123ded3d jne 0x123ded46 */
  if (!C.zf) goto L_123ded46;
  /* 123ded3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123ded41 jmp 0x123def8f */
  goto L_123def8f;
L_123ded46:;
  /* 123ded46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123ded49 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123ded4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123ded4f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123ded52 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123ded55 mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123ded5c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 123ded61 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 123ded64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123ded66 je 0x123ded78 */
  if (C.zf) goto L_123ded78;
  /* 123ded68 push 2 */
  push32((uint32_t)(0x2u));
  /* 123ded6a push 0 */
  push32((uint32_t)(0x0u));
  /* 123ded6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123ded6f push edx */
  push32((uint32_t)(EDX));
  /* 123ded70 call 0x123debd0 */
  push32(0x123ded75u); f_123debd0();
  /* 123ded75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123ded78:;
  /* 123ded78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123ded7b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123ded7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123ded81 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123ded84 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123ded87 mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123ded8e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 123ded93 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 123ded98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123ded9a je 0x123deeac */
  if (C.zf) goto L_123deeac;
  /* 123deda0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123deda3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123deda6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_123dedad:;
  /* 123dedad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dedb0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dedb3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dedb6 jae 0x123deeaa */
  if (!C.cf) goto L_123deeaa;
  /* 123dedbc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 123dedc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123dedc5:;
  /* 123dedc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dedc8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 123dedce sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dedd0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dedd6 jge 0x123dee37 */
  if ((C.sf==C.of)) goto L_123dee37;
  /* 123dedd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123deddb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dedde cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dede1 jae 0x123dee37 */
  if (!C.cf) goto L_123dee37;
  /* 123dede3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dede6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123dede8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 123dedee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dedf1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dedf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dedf7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 123dedfe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dee01 jne 0x123dee21 */
  if (!C.zf) goto L_123dee21;
  /* 123dee03 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 123dee09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dee0c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 123dee12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dee15 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 123dee18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dee1b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dee1e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123dee21:;
  /* 123dee21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dee24 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 123dee2a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 123dee2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dee2f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dee32 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123dee35 jmp 0x123dedc5 */
  goto L_123dedc5;
L_123dee37:;
  /* 123dee37 push 0 */
  push32((uint32_t)(0x0u));
  /* 123dee39 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 123dee3f push edx */
  push32((uint32_t)(EDX));
  /* 123dee40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dee43 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 123dee49 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dee4b push eax */
  push32((uint32_t)(EAX));
  /* 123dee4c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 123dee52 push edx */
  push32((uint32_t)(EDX));
  /* 123dee53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dee56 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123dee59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dee5c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123dee5f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dee62 mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123dee69 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 123dee6c push eax */
  push32((uint32_t)(EAX));
  /* 123dee6d call dword ptr [0x1240531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240531c))), 0x123dee73u);
  /* 123dee73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dee75 je 0x123dee9a */
  if (C.zf) goto L_123dee9a;
  /* 123dee77 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123dee7a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dee80 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123dee83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dee86 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 123dee8c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dee8e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dee94 jge 0x123dee98 */
  if ((C.sf==C.of)) goto L_123dee98;
  /* 123dee96 jmp 0x123deeaa */
  goto L_123deeaa;
L_123dee98:;
  /* 123dee98 jmp 0x123deea5 */
  goto L_123deea5;
L_123dee9a:;
  /* 123dee9a call dword ptr [0x1240528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240528c))), 0x123deea0u);
  /* 123deea0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123deea3 jmp 0x123deeaa */
  goto L_123deeaa;
L_123deea5:;
  /* 123deea5 jmp 0x123dedad */
  goto L_123dedad;
L_123deeaa:;
  /* 123deeaa jmp 0x123deefc */
  goto L_123deefc;
L_123deeac:;
  /* 123deeac push 0 */
  push32((uint32_t)(0x0u));
  /* 123deeae lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 123deeb4 push ecx */
  push32((uint32_t)(ECX));
  /* 123deeb5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123deeb8 push edx */
  push32((uint32_t)(EDX));
  /* 123deeb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123deebc push eax */
  push32((uint32_t)(EAX));
  /* 123deebd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123deec0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123deec3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123deec6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123deec9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123deecc mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123deed3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 123deed6 push ecx */
  push32((uint32_t)(ECX));
  /* 123deed7 call dword ptr [0x1240531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240531c))), 0x123deeddu);
  /* 123deedd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123deedf je 0x123deef3 */
  if (C.zf) goto L_123deef3;
  /* 123deee1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123deee8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 123deeee mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123deef1 jmp 0x123deefc */
  goto L_123deefc;
L_123deef3:;
  /* 123deef3 call dword ptr [0x1240528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240528c))), 0x123deef9u);
  /* 123deef9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_123deefc:;
  /* 123deefc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123def00 jne 0x123def86 */
  if (!C.zf) goto L_123def86;
  /* 123def06 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123def0a je 0x123def3a */
  if (C.zf) goto L_123def3a;
  /* 123def0c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123def10 jne 0x123def29 */
  if (!C.zf) goto L_123def29;
  /* 123def12 call 0x123de2c0 */
  push32(0x123def17u); f_123de2c0();
  /* 123def17 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123def1d call 0x123de2d0 */
  push32(0x123def22u); f_123de2d0();
  /* 123def22 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123def25 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123def27 jmp 0x123def35 */
  goto L_123def35;
L_123def29:;
  /* 123def29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123def2c push edx */
  push32((uint32_t)(EDX));
  /* 123def2d call 0x123de220 */
  push32(0x123def32u); f_123de220();
  /* 123def32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123def35:;
  /* 123def35 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123def38 jmp 0x123def8f */
  goto L_123def8f;
L_123def3a:;
  /* 123def3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123def3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123def40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123def43 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123def46 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123def49 mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123def50 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 123def55 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 123def58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123def5a je 0x123def6b */
  if (C.zf) goto L_123def6b;
  /* 123def5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123def5f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123def62 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123def65 jne 0x123def6b */
  if (!C.zf) goto L_123def6b;
  /* 123def67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123def69 jmp 0x123def8f */
  goto L_123def8f;
L_123def6b:;
  /* 123def6b call 0x123de2c0 */
  push32(0x123def70u); f_123de2c0();
  /* 123def70 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 123def76 call 0x123de2d0 */
  push32(0x123def7bu); f_123de2d0();
  /* 123def7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123def81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123def84 jmp 0x123def8f */
  goto L_123def8f;
L_123def86:;
  /* 123def86 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123def89 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_123def8f:;
  /* 123def8f mov esp, ebp */
  ESP = (EBP);
  /* 123def91 pop ebp */
  EBP = (pop32());
  /* 123def92 ret  */
  ESPCHK(0x123ded20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efa0 @ 0x123defa0 (199 bytes, 68 insns) */
void f_123defa0(void) {
  FTRACE(0x123defa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123defa0 push ebp */
  push32((uint32_t)(EBP));
  /* 123defa1 mov ebp, esp */
  EBP = (ESP);
  /* 123defa3 push ecx */
  push32((uint32_t)(ECX));
  /* 123defa4 push ebx */
  push32((uint32_t)(EBX));
  /* 123defa5 push esi */
  push32((uint32_t)(ESI));
  /* 123defa6 push edi */
  push32((uint32_t)(EDI));
L_123defa7:;
  /* 123defa7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123defab jne 0x123defcb */
  if (!C.zf) goto L_123defcb;
  /* 123defad push 0x123fe518 */
  push32((uint32_t)(0x123fe518u));
  /* 123defb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123defb4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 123defb6 push 0x123fe5e8 */
  push32((uint32_t)(0x123fe5e8u));
  /* 123defbb push 2 */
  push32((uint32_t)(0x2u));
  /* 123defbd call 0x123d54b0 */
  push32(0x123defc2u); f_123d54b0();
  /* 123defc2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123defc5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123defc8 jne 0x123defcb */
  if (!C.zf) goto L_123defcb;
  /* 123defca int3  */
  x86_unimpl("int3 @ 0x123defca");
L_123defcb:;
  /* 123defcb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123defcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123defcf jne 0x123defa7 */
  if (!C.zf) goto L_123defa7;
  /* 123defd1 mov ecx, dword ptr [0x124029ec] */
  ECX = (r32((uint32_t)(0x124029ec)));
  /* 123defd7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123defda mov dword ptr [0x124029ec], ecx */
  w32((uint32_t)(0x124029ec), (ECX));
  /* 123defe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123defe3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123defe6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 123defe8 push 0x123fe5e8 */
  push32((uint32_t)(0x123fe5e8u));
  /* 123defed push 2 */
  push32((uint32_t)(0x2u));
  /* 123defef push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 123deff4 call 0x123d63f0 */
  push32(0x123deff9u); f_123d63f0();
  /* 123deff9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123deffc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123defff mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 123df002 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df005 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df009 je 0x123df026 */
  if (C.zf) goto L_123df026;
  /* 123df00b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df00e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123df011 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 123df014 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df017 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 123df01a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df01d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 123df024 jmp 0x123df04b */
  goto L_123df04b;
L_123df026:;
  /* 123df026 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df029 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123df02c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123df02f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df032 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 123df035 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df038 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df03b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df03e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123df041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df044 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_123df04b:;
  /* 123df04b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df04e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df051 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123df054 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123df056 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df059 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 123df060 pop edi */
  EDI = (pop32());
  /* 123df061 pop esi */
  ESI = (pop32());
  /* 123df062 pop ebx */
  EBX = (pop32());
  /* 123df063 mov esp, ebp */
  ESP = (EBP);
  /* 123df065 pop ebp */
  EBP = (pop32());
  /* 123df066 ret  */
  ESPCHK(0x123defa0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x123df070 (50 bytes, 17 insns) */
void f_123df070(void) {
  FTRACE(0x123df070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df070 push ebp */
  push32((uint32_t)(EBP));
  /* 123df071 mov ebp, esp */
  EBP = (ESP);
  /* 123df073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df076 cmp eax, dword ptr [0x124042dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124042dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df07c jb 0x123df082 */
  if (C.cf) goto L_123df082;
  /* 123df07e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123df080 jmp 0x123df0a0 */
  goto L_123df0a0;
L_123df082:;
  /* 123df082 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df085 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123df088 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df08b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123df08e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123df091 mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123df098 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 123df09d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_123df0a0:;
  /* 123df0a0 pop ebp */
  EBP = (pop32());
  /* 123df0a1 ret  */
  ESPCHK(0x123df070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0b0 @ 0x123df0b0 (300 bytes, 80 insns) */
void f_123df0b0(void) {
  FTRACE(0x123df0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123df0b1 mov ebp, esp */
  EBP = (ESP);
  /* 123df0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123df0b4 cmp dword ptr [0x12403ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12403ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df0bb jne 0x123df0c9 */
  if (!C.zf) goto L_123df0c9;
  /* 123df0bd mov dword ptr [0x12403ea0], 0x200 */
  w32((uint32_t)(0x12403ea0), (0x200u));
  /* 123df0c7 jmp 0x123df0dc */
  goto L_123df0dc;
L_123df0c9:;
  /* 123df0c9 cmp dword ptr [0x12403ea0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12403ea0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df0d0 jge 0x123df0dc */
  if ((C.sf==C.of)) goto L_123df0dc;
  /* 123df0d2 mov dword ptr [0x12403ea0], 0x14 */
  w32((uint32_t)(0x12403ea0), (0x14u));
L_123df0dc:;
  /* 123df0dc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 123df0e1 push 0x123fe5f4 */
  push32((uint32_t)(0x123fe5f4u));
  /* 123df0e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123df0e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 123df0ea mov eax, dword ptr [0x12403ea0] */
  EAX = (r32((uint32_t)(0x12403ea0)));
  /* 123df0ef push eax */
  push32((uint32_t)(EAX));
  /* 123df0f0 call 0x123d6800 */
  push32(0x123df0f5u); f_123d6800();
  /* 123df0f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df0f8 mov dword ptr [0x12402b60], eax */
  w32((uint32_t)(0x12402b60), (EAX));
  /* 123df0fd cmp dword ptr [0x12402b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df104 jne 0x123df145 */
  if (!C.zf) goto L_123df145;
  /* 123df106 mov dword ptr [0x12403ea0], 0x14 */
  w32((uint32_t)(0x12403ea0), (0x14u));
  /* 123df110 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 123df115 push 0x123fe5f4 */
  push32((uint32_t)(0x123fe5f4u));
  /* 123df11a push 2 */
  push32((uint32_t)(0x2u));
  /* 123df11c push 4 */
  push32((uint32_t)(0x4u));
  /* 123df11e mov ecx, dword ptr [0x12403ea0] */
  ECX = (r32((uint32_t)(0x12403ea0)));
  /* 123df124 push ecx */
  push32((uint32_t)(ECX));
  /* 123df125 call 0x123d6800 */
  push32(0x123df12au); f_123d6800();
  /* 123df12a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df12d mov dword ptr [0x12402b60], eax */
  w32((uint32_t)(0x12402b60), (EAX));
  /* 123df132 cmp dword ptr [0x12402b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df139 jne 0x123df145 */
  if (!C.zf) goto L_123df145;
  /* 123df13b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 123df13d call 0x123d5360 */
  push32(0x123df142u); f_123d5360();
  /* 123df142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123df145:;
  /* 123df145 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123df14c jmp 0x123df157 */
  goto L_123df157;
L_123df14e:;
  /* 123df14e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df151 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df154 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123df157:;
  /* 123df157 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df15b jge 0x123df176 */
  if ((C.sf==C.of)) goto L_123df176;
  /* 123df15d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df160 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123df163 add eax, 0x12401120 */
  { uint32_t _a=(EAX),_b=(0x12401120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df168 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df16b mov edx, dword ptr [0x12402b60] */
  EDX = (r32((uint32_t)(0x12402b60)));
  /* 123df171 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 123df174 jmp 0x123df14e */
  goto L_123df14e;
L_123df176:;
  /* 123df176 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123df17d jmp 0x123df188 */
  goto L_123df188;
L_123df17f:;
  /* 123df17f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df182 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df185 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123df188:;
  /* 123df188 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df18c jge 0x123df1d8 */
  if ((C.sf==C.of)) goto L_123df1d8;
  /* 123df18e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df191 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123df194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df197 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123df19a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123df19d mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123df1a4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df1a8 je 0x123df1c6 */
  if (C.zf) goto L_123df1c6;
  /* 123df1aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df1ad sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123df1b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df1b3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123df1b6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123df1b9 mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123df1c0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df1c4 jne 0x123df1d6 */
  if (!C.zf) goto L_123df1d6;
L_123df1c6:;
  /* 123df1c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df1c9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123df1cc mov dword ptr [ecx + 0x12401130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12401130), (0xffffffffu));
L_123df1d6:;
  /* 123df1d6 jmp 0x123df17f */
  goto L_123df17f;
L_123df1d8:;
  /* 123df1d8 mov esp, ebp */
  ESP = (EBP);
  /* 123df1da pop ebp */
  EBP = (pop32());
  /* 123df1db ret  */
  ESPCHK(0x123df0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1e0 @ 0x123df1e0 (26 bytes, 9 insns) */
void f_123df1e0(void) {
  FTRACE(0x123df1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123df1e1 mov ebp, esp */
  EBP = (ESP);
  /* 123df1e3 call 0x123dfde0 */
  push32(0x123df1e8u); f_123dfde0();
  /* 123df1e8 movsx eax, byte ptr [0x12402808] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12402808))));
  /* 123df1ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123df1f1 je 0x123df1f8 */
  if (C.zf) goto L_123df1f8;
  /* 123df1f3 call 0x123dfba0 */
  push32(0x123df1f8u); f_123dfba0();
L_123df1f8:;
  /* 123df1f8 pop ebp */
  EBP = (pop32());
  /* 123df1f9 ret  */
  ESPCHK(0x123df1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f200 @ 0x123df200 (61 bytes, 20 insns) */
void f_123df200(void) {
  FTRACE(0x123df200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df200 push ebp */
  push32((uint32_t)(EBP));
  /* 123df201 mov ebp, esp */
  EBP = (ESP);
  /* 123df203 cmp dword ptr [ebp + 8], 0x12401120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12401120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df20a jb 0x123df22e */
  if (C.cf) goto L_123df22e;
  /* 123df20c cmp dword ptr [ebp + 8], 0x12401380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12401380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df213 ja 0x123df22e */
  if ((!C.cf&&!C.zf)) goto L_123df22e;
  /* 123df215 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df218 sub eax, 0x12401120 */
  { uint32_t _a=(EAX),_b=(0x12401120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123df21d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123df220 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df223 push eax */
  push32((uint32_t)(EAX));
  /* 123df224 call 0x123d9df0 */
  push32(0x123df229u); f_123d9df0();
  /* 123df229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df22c jmp 0x123df23b */
  goto L_123df23b;
L_123df22e:;
  /* 123df22e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df231 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df234 push ecx */
  push32((uint32_t)(ECX));
  /* 123df235 call dword ptr [0x12405308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405308))), 0x123df23bu);
L_123df23b:;
  /* 123df23b pop ebp */
  EBP = (pop32());
  /* 123df23c ret  */
  ESPCHK(0x123df200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f240 @ 0x123df240 (41 bytes, 16 insns) */
void f_123df240(void) {
  FTRACE(0x123df240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df240 push ebp */
  push32((uint32_t)(EBP));
  /* 123df241 mov ebp, esp */
  EBP = (ESP);
  /* 123df243 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df247 jge 0x123df25a */
  if ((C.sf==C.of)) goto L_123df25a;
  /* 123df249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df24c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df24f push eax */
  push32((uint32_t)(EAX));
  /* 123df250 call 0x123d9df0 */
  push32(0x123df255u); f_123d9df0();
  /* 123df255 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df258 jmp 0x123df267 */
  goto L_123df267;
L_123df25a:;
  /* 123df25a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123df25d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df260 push ecx */
  push32((uint32_t)(ECX));
  /* 123df261 call dword ptr [0x12405308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405308))), 0x123df267u);
L_123df267:;
  /* 123df267 pop ebp */
  EBP = (pop32());
  /* 123df268 ret  */
  ESPCHK(0x123df240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f270 @ 0x123df270 (61 bytes, 20 insns) */
void f_123df270(void) {
  FTRACE(0x123df270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df270 push ebp */
  push32((uint32_t)(EBP));
  /* 123df271 mov ebp, esp */
  EBP = (ESP);
  /* 123df273 cmp dword ptr [ebp + 8], 0x12401120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12401120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df27a jb 0x123df29e */
  if (C.cf) goto L_123df29e;
  /* 123df27c cmp dword ptr [ebp + 8], 0x12401380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12401380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df283 ja 0x123df29e */
  if ((!C.cf&&!C.zf)) goto L_123df29e;
  /* 123df285 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df288 sub eax, 0x12401120 */
  { uint32_t _a=(EAX),_b=(0x12401120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123df28d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123df290 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df293 push eax */
  push32((uint32_t)(EAX));
  /* 123df294 call 0x123d9e90 */
  push32(0x123df299u); f_123d9e90();
  /* 123df299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df29c jmp 0x123df2ab */
  goto L_123df2ab;
L_123df29e:;
  /* 123df29e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df2a1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df2a4 push ecx */
  push32((uint32_t)(ECX));
  /* 123df2a5 call dword ptr [0x12405304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405304))), 0x123df2abu);
L_123df2ab:;
  /* 123df2ab pop ebp */
  EBP = (pop32());
  /* 123df2ac ret  */
  ESPCHK(0x123df270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2b0 @ 0x123df2b0 (41 bytes, 16 insns) */
void f_123df2b0(void) {
  FTRACE(0x123df2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123df2b1 mov ebp, esp */
  EBP = (ESP);
  /* 123df2b3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df2b7 jge 0x123df2ca */
  if ((C.sf==C.of)) goto L_123df2ca;
  /* 123df2b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df2bc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df2bf push eax */
  push32((uint32_t)(EAX));
  /* 123df2c0 call 0x123d9e90 */
  push32(0x123df2c5u); f_123d9e90();
  /* 123df2c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df2c8 jmp 0x123df2d7 */
  goto L_123df2d7;
L_123df2ca:;
  /* 123df2ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123df2cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df2d0 push ecx */
  push32((uint32_t)(ECX));
  /* 123df2d1 call dword ptr [0x12405304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405304))), 0x123df2d7u);
L_123df2d7:;
  /* 123df2d7 pop ebp */
  EBP = (pop32());
  /* 123df2d8 ret  */
  ESPCHK(0x123df2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x123df2e0 (119 bytes, 34 insns) */
void f_123df2e0(void) {
  FTRACE(0x123df2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123df2e1 mov ebp, esp */
  EBP = (ESP);
  /* 123df2e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123df2e6 push 0x12402b5c */
  push32((uint32_t)(0x12402b5cu));
  /* 123df2eb call dword ptr [0x12405330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405330))), 0x123df2f1u);
  /* 123df2f1 cmp dword ptr [0x12402b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df2f8 je 0x123df318 */
  if (C.zf) goto L_123df318;
  /* 123df2fa push 0x12402b5c */
  push32((uint32_t)(0x12402b5cu));
  /* 123df2ff call dword ptr [0x12405320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405320))), 0x123df305u);
  /* 123df305 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123df307 call 0x123d9df0 */
  push32(0x123df30cu); f_123d9df0();
  /* 123df30c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df30f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123df316 jmp 0x123df31f */
  goto L_123df31f;
L_123df318:;
  /* 123df318 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123df31f:;
  /* 123df31f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 123df323 push eax */
  push32((uint32_t)(EAX));
  /* 123df324 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df327 push ecx */
  push32((uint32_t)(ECX));
  /* 123df328 call 0x123df360 */
  push32(0x123df32du); f_123df360();
  /* 123df32d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df330 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123df333 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df337 je 0x123df345 */
  if (C.zf) goto L_123df345;
  /* 123df339 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123df33b call 0x123d9e90 */
  push32(0x123df340u); f_123d9e90();
  /* 123df340 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df343 jmp 0x123df350 */
  goto L_123df350;
L_123df345:;
  /* 123df345 push 0x12402b5c */
  push32((uint32_t)(0x12402b5cu));
  /* 123df34a call dword ptr [0x12405320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405320))), 0x123df350u);
L_123df350:;
  /* 123df350 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123df353 mov esp, ebp */
  ESP = (EBP);
  /* 123df355 pop ebp */
  EBP = (pop32());
  /* 123df356 ret  */
  ESPCHK(0x123df2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f360 @ 0x123df360 (160 bytes, 50 insns) */
void f_123df360(void) {
  FTRACE(0x123df360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df360 push ebp */
  push32((uint32_t)(EBP));
  /* 123df361 mov ebp, esp */
  EBP = (ESP);
  /* 123df363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123df366 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df36a jne 0x123df373 */
  if (!C.zf) goto L_123df373;
  /* 123df36c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123df36e jmp 0x123df3fc */
  goto L_123df3fc;
L_123df373:;
  /* 123df373 cmp dword ptr [0x124029d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df37a jne 0x123df3aa */
  if (!C.zf) goto L_123df3aa;
  /* 123df37c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123df37f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123df384 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df389 jle 0x123df39b */
  if ((C.zf||C.sf!=C.of)) goto L_123df39b;
  /* 123df38b call 0x123de2c0 */
  push32(0x123df390u); f_123de2c0();
  /* 123df390 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 123df396 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123df399 jmp 0x123df3fc */
  goto L_123df3fc;
L_123df39b:;
  /* 123df39b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df39e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 123df3a1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 123df3a3 mov eax, 1 */
  EAX = (0x1u);
  /* 123df3a8 jmp 0x123df3fc */
  goto L_123df3fc;
L_123df3aa:;
  /* 123df3aa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123df3b1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 123df3b4 push eax */
  push32((uint32_t)(EAX));
  /* 123df3b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123df3b7 mov ecx, dword ptr [0x12400ea4] */
  ECX = (r32((uint32_t)(0x12400ea4)));
  /* 123df3bd push ecx */
  push32((uint32_t)(ECX));
  /* 123df3be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df3c1 push edx */
  push32((uint32_t)(EDX));
  /* 123df3c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 123df3c4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 123df3c7 push eax */
  push32((uint32_t)(EAX));
  /* 123df3c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123df3cd mov ecx, dword ptr [0x124029e0] */
  ECX = (r32((uint32_t)(0x124029e0)));
  /* 123df3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 123df3d4 call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123df3dau);
  /* 123df3da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123df3dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df3e1 je 0x123df3e9 */
  if (C.zf) goto L_123df3e9;
  /* 123df3e3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df3e7 je 0x123df3f9 */
  if (C.zf) goto L_123df3f9;
L_123df3e9:;
  /* 123df3e9 call 0x123de2c0 */
  push32(0x123df3eeu); f_123de2c0();
  /* 123df3ee mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 123df3f4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123df3f7 jmp 0x123df3fc */
  goto L_123df3fc;
L_123df3f9:;
  /* 123df3f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123df3fc:;
  /* 123df3fc mov esp, ebp */
  ESP = (EBP);
  /* 123df3fe pop ebp */
  EBP = (pop32());
  /* 123df3ff ret  */
  ESPCHK(0x123df360u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x123df400 (32 bytes, 18 insns) */
void f_123df400(void) {
  FTRACE(0x123df400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df400 push ebp */
  push32((uint32_t)(EBP));
  /* 123df401 mov ebp, esp */
  EBP = (ESP);
  /* 123df403 push ebx */
  push32((uint32_t)(EBX));
  /* 123df404 push esi */
  push32((uint32_t)(ESI));
  /* 123df405 push edi */
  push32((uint32_t)(EDI));
  /* 123df406 push ebp */
  push32((uint32_t)(EBP));
  /* 123df407 push 0 */
  push32((uint32_t)(0x0u));
  /* 123df409 push 0 */
  push32((uint32_t)(0x0u));
  /* 123df40b push 0x123df418 */
  push32((uint32_t)(0x123df418u));
  /* 123df410 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 123df413 call 0x123e6b4c */
  push32(0x123df418u); f_123e6b4c();
  /* 123df418 pop ebp */
  EBP = (pop32());
  /* 123df419 pop edi */
  EDI = (pop32());
  /* 123df41a pop esi */
  ESI = (pop32());
  /* 123df41b pop ebx */
  EBX = (pop32());
  /* 123df41c mov esp, ebp */
  ESP = (EBP);
  /* 123df41e pop ebp */
  EBP = (pop32());
  /* 123df41f ret  */
  ESPCHK(0x123df400u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x123df442 (104 bytes, 33 insns) */
void f_123df442(void) {
  FTRACE(0x123df442u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df442 push ebx */
  push32((uint32_t)(EBX));
  /* 123df443 push esi */
  push32((uint32_t)(ESI));
  /* 123df444 push edi */
  push32((uint32_t)(EDI));
  /* 123df445 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 123df449 push eax */
  push32((uint32_t)(EAX));
  /* 123df44a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 123df44c push 0x123df420 */
  push32((uint32_t)(0x123df420u));
  /* 123df451 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 123df458 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_123df45f:;
  /* 123df45f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 123df463 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 123df466 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 123df469 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df46c je 0x123df49c */
  if (C.zf) goto L_123df49c;
  /* 123df46e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df472 je 0x123df49c */
  if (C.zf) goto L_123df49c;
  /* 123df474 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 123df477 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 123df47a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 123df47e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 123df481 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df486 jne 0x123df49a */
  if (!C.zf) goto L_123df49a;
  /* 123df488 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 123df48d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 123df491 call 0x123df4d6 */
  push32(0x123df496u); f_123df4d6();
  /* 123df496 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x123df49au);
L_123df49a:;
  /* 123df49a jmp 0x123df45f */
  goto L_123df45f;
L_123df49c:;
  /* 123df49c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 123df4a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df4a6 pop edi */
  EDI = (pop32());
  /* 123df4a7 pop esi */
  ESI = (pop32());
  /* 123df4a8 pop ebx */
  EBX = (pop32());
  /* 123df4a9 ret  */
  ESPCHK(0x123df442u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4d6 @ 0x123df4d6 (24 bytes, 10 insns) */
void f_123df4d6(void) {
  FTRACE(0x123df4d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df4d6 push ebx */
  push32((uint32_t)(EBX));
  /* 123df4d7 push ecx */
  push32((uint32_t)(ECX));
  /* 123df4d8 mov ebx, 0x124013b8 */
  EBX = (0x124013b8u);
  /* 123df4dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df4e0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 123df4e3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 123df4e6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 123df4e9 pop ecx */
  ECX = (pop32());
  /* 123df4ea pop ebx */
  EBX = (pop32());
  /* 123df4eb ret 4 */
  ESPCHK(0x123df4d6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f5b5 @ 0x123df5b5 (27 bytes, 11 insns) */
void f_123df5b5(void) {
  FTRACE(0x123df5b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df5b5 push ebp */
  push32((uint32_t)(EBP));
  /* 123df5b6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 123df5ba mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 123df5bc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123df5bf push eax */
  push32((uint32_t)(EAX));
  /* 123df5c0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 123df5c3 push eax */
  push32((uint32_t)(EAX));
  /* 123df5c4 call 0x123df442 */
  push32(0x123df5c9u); f_123df442();
  /* 123df5c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df5cc pop ebp */
  EBP = (pop32());
  /* 123df5cd ret 4 */
  ESPCHK(0x123df5b5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f5d0 @ 0x123df5d0 (482 bytes, 138 insns) */
void f_123df5d0(void) {
  FTRACE(0x123df5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123df5d1 mov ebp, esp */
  EBP = (ESP);
  /* 123df5d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123df5d6 push esi */
  push32((uint32_t)(ESI));
  /* 123df5d7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 123df5de push 0x12 */
  push32((uint32_t)(0x12u));
  /* 123df5e0 call 0x123d9df0 */
  push32(0x123df5e5u); f_123d9df0();
  /* 123df5e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df5e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123df5ef jmp 0x123df5fa */
  goto L_123df5fa;
L_123df5f1:;
  /* 123df5f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123df5f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df5f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_123df5fa:;
  /* 123df5fa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df5fe jge 0x123df7a0 */
  if ((C.sf==C.of)) goto L_123df7a0;
  /* 123df604 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123df607 cmp dword ptr [ecx*4 + 0x124041a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x124041a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df60f je 0x123df706 */
  if (C.zf) goto L_123df706;
  /* 123df615 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123df618 mov eax, dword ptr [edx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x124041a0)));
  /* 123df61f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123df622 jmp 0x123df62d */
  goto L_123df62d;
L_123df624:;
  /* 123df624 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df627 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df62a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123df62d:;
  /* 123df62d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123df630 mov eax, dword ptr [edx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x124041a0)));
  /* 123df637 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df63c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df63f jae 0x123df6f6 */
  if (!C.cf) goto L_123df6f6;
  /* 123df645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df648 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123df64c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 123df64f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123df651 jne 0x123df6f1 */
  if (!C.zf) goto L_123df6f1;
  /* 123df657 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df65a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df65e jne 0x123df699 */
  if (!C.zf) goto L_123df699;
  /* 123df660 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123df662 call 0x123d9df0 */
  push32(0x123df667u); f_123d9df0();
  /* 123df667 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df66a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df66d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df671 jne 0x123df68f */
  if (!C.zf) goto L_123df68f;
  /* 123df673 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df676 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df679 push edx */
  push32((uint32_t)(EDX));
  /* 123df67a call dword ptr [0x124053a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124053a4))), 0x123df680u);
  /* 123df680 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df683 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123df686 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df689 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df68c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_123df68f:;
  /* 123df68f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123df691 call 0x123d9e90 */
  push32(0x123df696u); f_123d9e90();
  /* 123df696 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123df699:;
  /* 123df699 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df69c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df69f push eax */
  push32((uint32_t)(EAX));
  /* 123df6a0 call dword ptr [0x12405308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405308))), 0x123df6a6u);
  /* 123df6a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df6a9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 123df6ad and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 123df6b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123df6b2 je 0x123df6c6 */
  if (C.zf) goto L_123df6c6;
  /* 123df6b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df6b7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df6ba push eax */
  push32((uint32_t)(EAX));
  /* 123df6bb call dword ptr [0x12405304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405304))), 0x123df6c1u);
  /* 123df6c1 jmp 0x123df624 */
  goto L_123df624;
L_123df6c6:;
  /* 123df6c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df6c9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 123df6cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123df6d2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123df6d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123df6d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df6db sub eax, dword ptr [edx*4 + 0x124041a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x124041a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123df6e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123df6e3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 123df6e8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123df6ea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df6ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123df6ef jmp 0x123df6f6 */
  goto L_123df6f6;
L_123df6f1:;
  /* 123df6f1 jmp 0x123df624 */
  goto L_123df624;
L_123df6f6:;
  /* 123df6f6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df6fa je 0x123df701 */
  if (C.zf) goto L_123df701;
  /* 123df6fc jmp 0x123df7a0 */
  goto L_123df7a0;
L_123df701:;
  /* 123df701 jmp 0x123df79b */
  goto L_123df79b;
L_123df706:;
  /* 123df706 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 123df708 push 0x123fe5fc */
  push32((uint32_t)(0x123fe5fcu));
  /* 123df70d push 2 */
  push32((uint32_t)(0x2u));
  /* 123df70f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 123df714 call 0x123d63f0 */
  push32(0x123df719u); f_123d63f0();
  /* 123df719 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df71c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123df71f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df723 je 0x123df799 */
  if (C.zf) goto L_123df799;
  /* 123df725 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123df728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df72b mov dword ptr [eax*4 + 0x124041a0], ecx */
  w32((uint32_t)(EAX*4 + 0x124041a0), (ECX));
  /* 123df732 mov edx, dword ptr [0x124042dc] */
  EDX = (r32((uint32_t)(0x124042dc)));
  /* 123df738 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df73b mov dword ptr [0x124042dc], edx */
  w32((uint32_t)(0x124042dc), (EDX));
  /* 123df741 jmp 0x123df74c */
  goto L_123df74c;
L_123df743:;
  /* 123df743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df746 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df749 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123df74c:;
  /* 123df74c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123df74f mov edx, dword ptr [ecx*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123df756 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123df75c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df75f jae 0x123df784 */
  if (!C.cf) goto L_123df784;
  /* 123df761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df764 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 123df768 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df76b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 123df771 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df774 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 123df778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123df77b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 123df782 jmp 0x123df743 */
  goto L_123df743;
L_123df784:;
  /* 123df784 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123df787 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123df78a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123df78d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123df790 push edx */
  push32((uint32_t)(EDX));
  /* 123df791 call 0x123dfae0 */
  push32(0x123df796u); f_123dfae0();
  /* 123df796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123df799:;
  /* 123df799 jmp 0x123df7a0 */
  goto L_123df7a0;
L_123df79b:;
  /* 123df79b jmp 0x123df5f1 */
  goto L_123df5f1;
L_123df7a0:;
  /* 123df7a0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 123df7a2 call 0x123d9e90 */
  push32(0x123df7a7u); f_123d9e90();
  /* 123df7a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123df7aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123df7ad pop esi */
  ESI = (pop32());
  /* 123df7ae mov esp, ebp */
  ESP = (EBP);
  /* 123df7b0 pop ebp */
  EBP = (pop32());
  /* 123df7b1 ret  */
  ESPCHK(0x123df5d0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x123df7c0 (183 bytes, 57 insns) */
void f_123df7c0(void) {
  FTRACE(0x123df7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123df7c1 mov ebp, esp */
  EBP = (ESP);
  /* 123df7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123df7c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df7c7 cmp eax, dword ptr [0x124042dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124042dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df7cd jae 0x123df85a */
  if (!C.cf) goto L_123df85a;
  /* 123df7d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df7d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123df7d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df7dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123df7df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123df7e2 mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123df7e9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df7ed jne 0x123df85a */
  if (!C.zf) goto L_123df85a;
  /* 123df7ef cmp dword ptr [0x124027c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124027c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df7f6 jne 0x123df83a */
  if (!C.zf) goto L_123df83a;
  /* 123df7f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df7fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123df7fe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df802 je 0x123df812 */
  if (C.zf) goto L_123df812;
  /* 123df804 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df808 je 0x123df820 */
  if (C.zf) goto L_123df820;
  /* 123df80a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df80e je 0x123df82e */
  if (C.zf) goto L_123df82e;
  /* 123df810 jmp 0x123df83a */
  goto L_123df83a;
L_123df812:;
  /* 123df812 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123df815 push edx */
  push32((uint32_t)(EDX));
  /* 123df816 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 123df818 call dword ptr [0x124052d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d0))), 0x123df81eu);
  /* 123df81e jmp 0x123df83a */
  goto L_123df83a;
L_123df820:;
  /* 123df820 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123df823 push eax */
  push32((uint32_t)(EAX));
  /* 123df824 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 123df826 call dword ptr [0x124052d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d0))), 0x123df82cu);
  /* 123df82c jmp 0x123df83a */
  goto L_123df83a;
L_123df82e:;
  /* 123df82e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123df831 push ecx */
  push32((uint32_t)(ECX));
  /* 123df832 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 123df834 call dword ptr [0x124052d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d0))), 0x123df83au);
L_123df83a:;
  /* 123df83a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df83d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 123df840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df843 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 123df846 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123df849 mov ecx, dword ptr [edx*4 + 0x124041a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x124041a0)));
  /* 123df850 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123df853 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 123df856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123df858 jmp 0x123df873 */
  goto L_123df873;
L_123df85a:;
  /* 123df85a call 0x123de2c0 */
  push32(0x123df85fu); f_123de2c0();
  /* 123df85f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123df865 call 0x123de2d0 */
  push32(0x123df86au); f_123de2d0();
  /* 123df86a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123df870 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_123df873:;
  /* 123df873 mov esp, ebp */
  ESP = (EBP);
  /* 123df875 pop ebp */
  EBP = (pop32());
  /* 123df876 ret  */
  ESPCHK(0x123df7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f880 @ 0x123df880 (216 bytes, 63 insns) */
void f_123df880(void) {
  FTRACE(0x123df880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df880 push ebp */
  push32((uint32_t)(EBP));
  /* 123df881 mov ebp, esp */
  EBP = (ESP);
  /* 123df883 push ecx */
  push32((uint32_t)(ECX));
  /* 123df884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df887 cmp eax, dword ptr [0x124042dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124042dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df88d jae 0x123df93b */
  if (!C.cf) goto L_123df93b;
  /* 123df893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df896 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123df899 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df89c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123df89f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123df8a2 mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123df8a9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 123df8ae and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123df8b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123df8b3 je 0x123df93b */
  if (C.zf) goto L_123df93b;
  /* 123df8b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df8bc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 123df8bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df8c2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 123df8c5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123df8c8 mov ecx, dword ptr [edx*4 + 0x124041a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x124041a0)));
  /* 123df8cf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df8d3 je 0x123df93b */
  if (C.zf) goto L_123df93b;
  /* 123df8d5 cmp dword ptr [0x124027c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124027c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df8dc jne 0x123df91a */
  if (!C.zf) goto L_123df91a;
  /* 123df8de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df8e1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123df8e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df8e8 je 0x123df8f8 */
  if (C.zf) goto L_123df8f8;
  /* 123df8ea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df8ee je 0x123df904 */
  if (C.zf) goto L_123df904;
  /* 123df8f0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df8f4 je 0x123df910 */
  if (C.zf) goto L_123df910;
  /* 123df8f6 jmp 0x123df91a */
  goto L_123df91a;
L_123df8f8:;
  /* 123df8f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123df8fa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 123df8fc call dword ptr [0x124052d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d0))), 0x123df902u);
  /* 123df902 jmp 0x123df91a */
  goto L_123df91a;
L_123df904:;
  /* 123df904 push 0 */
  push32((uint32_t)(0x0u));
  /* 123df906 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 123df908 call dword ptr [0x124052d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d0))), 0x123df90eu);
  /* 123df90e jmp 0x123df91a */
  goto L_123df91a;
L_123df910:;
  /* 123df910 push 0 */
  push32((uint32_t)(0x0u));
  /* 123df912 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 123df914 call dword ptr [0x124052d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052d0))), 0x123df91au);
L_123df91a:;
  /* 123df91a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df91d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123df920 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df923 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123df926 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123df929 mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123df930 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 123df937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123df939 jmp 0x123df954 */
  goto L_123df954;
L_123df93b:;
  /* 123df93b call 0x123de2c0 */
  push32(0x123df940u); f_123de2c0();
  /* 123df940 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123df946 call 0x123de2d0 */
  push32(0x123df94bu); f_123de2d0();
  /* 123df94b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123df951 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_123df954:;
  /* 123df954 mov esp, ebp */
  ESP = (EBP);
  /* 123df956 pop ebp */
  EBP = (pop32());
  /* 123df957 ret  */
  ESPCHK(0x123df880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f960 @ 0x123df960 (102 bytes, 30 insns) */
void f_123df960(void) {
  FTRACE(0x123df960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df960 push ebp */
  push32((uint32_t)(EBP));
  /* 123df961 mov ebp, esp */
  EBP = (ESP);
  /* 123df963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df966 cmp eax, dword ptr [0x124042dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124042dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123df96c jae 0x123df9ab */
  if (!C.cf) goto L_123df9ab;
  /* 123df96e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df971 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123df974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df977 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123df97a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123df97d mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123df984 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 123df989 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123df98c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123df98e je 0x123df9ab */
  if (C.zf) goto L_123df9ab;
  /* 123df990 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df993 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 123df996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123df999 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 123df99c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123df99f mov ecx, dword ptr [edx*4 + 0x124041a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x124041a0)));
  /* 123df9a6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 123df9a9 jmp 0x123df9c4 */
  goto L_123df9c4;
L_123df9ab:;
  /* 123df9ab call 0x123de2c0 */
  push32(0x123df9b0u); f_123de2c0();
  /* 123df9b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123df9b6 call 0x123de2d0 */
  push32(0x123df9bbu); f_123de2d0();
  /* 123df9bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123df9c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_123df9c4:;
  /* 123df9c4 pop ebp */
  EBP = (pop32());
  /* 123df9c5 ret  */
  ESPCHK(0x123df960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9d0 @ 0x123df9d0 (260 bytes, 83 insns) */
void f_123df9d0(void) {
  FTRACE(0x123df9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123df9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123df9d1 mov ebp, esp */
  EBP = (ESP);
  /* 123df9d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123df9d6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 123df9da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123df9dd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 123df9e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123df9e2 je 0x123df9ed */
  if (C.zf) goto L_123df9ed;
  /* 123df9e4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 123df9e7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 123df9ea mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_123df9ed:;
  /* 123df9ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123df9f0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 123df9f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123df9f8 je 0x123dfa02 */
  if (C.zf) goto L_123dfa02;
  /* 123df9fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 123df9fd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 123df9ff mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_123dfa02:;
  /* 123dfa02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dfa05 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 123dfa0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dfa0d je 0x123dfa18 */
  if (C.zf) goto L_123dfa18;
  /* 123dfa0f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 123dfa12 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 123dfa15 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_123dfa18:;
  /* 123dfa18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfa1b push eax */
  push32((uint32_t)(EAX));
  /* 123dfa1c call dword ptr [0x12405368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405368))), 0x123dfa22u);
  /* 123dfa22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dfa25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfa29 jne 0x123dfa42 */
  if (!C.zf) goto L_123dfa42;
  /* 123dfa2b call dword ptr [0x1240528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240528c))), 0x123dfa31u);
  /* 123dfa31 push eax */
  push32((uint32_t)(EAX));
  /* 123dfa32 call 0x123de220 */
  push32(0x123dfa37u); f_123de220();
  /* 123dfa37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfa3a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123dfa3d jmp 0x123dfad0 */
  goto L_123dfad0;
L_123dfa42:;
  /* 123dfa42 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfa46 jne 0x123dfa53 */
  if (!C.zf) goto L_123dfa53;
  /* 123dfa48 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 123dfa4b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 123dfa4e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 123dfa51 jmp 0x123dfa62 */
  goto L_123dfa62;
L_123dfa53:;
  /* 123dfa53 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfa57 jne 0x123dfa62 */
  if (!C.zf) goto L_123dfa62;
  /* 123dfa59 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 123dfa5c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 123dfa5f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_123dfa62:;
  /* 123dfa62 call 0x123df5d0 */
  push32(0x123dfa67u); f_123df5d0();
  /* 123dfa67 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123dfa6a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfa6e jne 0x123dfa8b */
  if (!C.zf) goto L_123dfa8b;
  /* 123dfa70 call 0x123de2c0 */
  push32(0x123dfa75u); f_123de2c0();
  /* 123dfa75 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 123dfa7b call 0x123de2d0 */
  push32(0x123dfa80u); f_123de2d0();
  /* 123dfa80 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123dfa86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123dfa89 jmp 0x123dfad0 */
  goto L_123dfad0;
L_123dfa8b:;
  /* 123dfa8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfa8e push eax */
  push32((uint32_t)(EAX));
  /* 123dfa8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfa92 push ecx */
  push32((uint32_t)(ECX));
  /* 123dfa93 call 0x123df7c0 */
  push32(0x123dfa98u); f_123df7c0();
  /* 123dfa98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfa9b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 123dfa9e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 123dfaa1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 123dfaa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfaa7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123dfaaa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfaad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123dfab0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dfab3 mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123dfaba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 123dfabd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 123dfac1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfac4 push ecx */
  push32((uint32_t)(ECX));
  /* 123dfac5 call 0x123dfb70 */
  push32(0x123dfacau); f_123dfb70();
  /* 123dfaca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfacd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123dfad0:;
  /* 123dfad0 mov esp, ebp */
  ESP = (EBP);
  /* 123dfad2 pop ebp */
  EBP = (pop32());
  /* 123dfad3 ret  */
  ESPCHK(0x123df9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fae0 @ 0x123dfae0 (134 bytes, 44 insns) */
void f_123dfae0(void) {
  FTRACE(0x123dfae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dfae0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dfae1 mov ebp, esp */
  EBP = (ESP);
  /* 123dfae3 push ecx */
  push32((uint32_t)(ECX));
  /* 123dfae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfae7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123dfaea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfaed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123dfaf0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dfaf3 mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123dfafa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfafc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123dfaff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dfb02 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfb06 jne 0x123dfb41 */
  if (!C.zf) goto L_123dfb41;
  /* 123dfb08 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123dfb0a call 0x123d9df0 */
  push32(0x123dfb0fu); f_123d9df0();
  /* 123dfb0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfb12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dfb15 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfb19 jne 0x123dfb37 */
  if (!C.zf) goto L_123dfb37;
  /* 123dfb1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dfb1e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfb21 push edx */
  push32((uint32_t)(EDX));
  /* 123dfb22 call dword ptr [0x124053a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124053a4))), 0x123dfb28u);
  /* 123dfb28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dfb2b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123dfb2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfb31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dfb34 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_123dfb37:;
  /* 123dfb37 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123dfb39 call 0x123d9e90 */
  push32(0x123dfb3eu); f_123d9e90();
  /* 123dfb3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123dfb41:;
  /* 123dfb41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfb44 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123dfb47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfb4a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123dfb4d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dfb50 mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123dfb57 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 123dfb5b push eax */
  push32((uint32_t)(EAX));
  /* 123dfb5c call dword ptr [0x12405308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405308))), 0x123dfb62u);
  /* 123dfb62 mov esp, ebp */
  ESP = (EBP);
  /* 123dfb64 pop ebp */
  EBP = (pop32());
  /* 123dfb65 ret  */
  ESPCHK(0x123dfae0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x123dfb70 (38 bytes, 13 insns) */
void f_123dfb70(void) {
  FTRACE(0x123dfb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dfb70 push ebp */
  push32((uint32_t)(EBP));
  /* 123dfb71 mov ebp, esp */
  EBP = (ESP);
  /* 123dfb73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfb76 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123dfb79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfb7c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123dfb7f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dfb82 mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123dfb89 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 123dfb8d push eax */
  push32((uint32_t)(EAX));
  /* 123dfb8e call dword ptr [0x12405304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405304))), 0x123dfb94u);
  /* 123dfb94 pop ebp */
  EBP = (pop32());
  /* 123dfb95 ret  */
  ESPCHK(0x123dfb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fba0 @ 0x123dfba0 (218 bytes, 63 insns) */
void f_123dfba0(void) {
  FTRACE(0x123dfba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dfba0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dfba1 mov ebp, esp */
  EBP = (ESP);
  /* 123dfba3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dfba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123dfbad push 2 */
  push32((uint32_t)(0x2u));
  /* 123dfbaf call 0x123d9df0 */
  push32(0x123dfbb4u); f_123d9df0();
  /* 123dfbb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfbb7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 123dfbbe jmp 0x123dfbc9 */
  goto L_123dfbc9;
L_123dfbc0:;
  /* 123dfbc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfbc3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfbc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123dfbc9:;
  /* 123dfbc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfbcc cmp ecx, dword ptr [0x12403ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12403ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfbd2 jge 0x123dfc69 */
  if ((C.sf==C.of)) goto L_123dfc69;
  /* 123dfbd8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfbdb mov eax, dword ptr [0x12402b60] */
  EAX = (r32((uint32_t)(0x12402b60)));
  /* 123dfbe0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfbe4 je 0x123dfc64 */
  if (C.zf) goto L_123dfc64;
  /* 123dfbe6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfbe9 mov edx, dword ptr [0x12402b60] */
  EDX = (r32((uint32_t)(0x12402b60)));
  /* 123dfbef mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 123dfbf2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123dfbf5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 123dfbfb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dfbfd je 0x123dfc21 */
  if (C.zf) goto L_123dfc21;
  /* 123dfbff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfc02 mov eax, dword ptr [0x12402b60] */
  EAX = (r32((uint32_t)(0x12402b60)));
  /* 123dfc07 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123dfc0a push ecx */
  push32((uint32_t)(ECX));
  /* 123dfc0b call 0x123e0990 */
  push32(0x123dfc10u); f_123e0990();
  /* 123dfc10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfc13 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfc16 je 0x123dfc21 */
  if (C.zf) goto L_123dfc21;
  /* 123dfc18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dfc1b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfc1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123dfc21:;
  /* 123dfc21 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfc25 jl 0x123dfc64 */
  if ((C.sf!=C.of)) goto L_123dfc64;
  /* 123dfc27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfc2a mov ecx, dword ptr [0x12402b60] */
  ECX = (r32((uint32_t)(0x12402b60)));
  /* 123dfc30 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 123dfc33 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfc36 push edx */
  push32((uint32_t)(EDX));
  /* 123dfc37 call dword ptr [0x12405370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405370))), 0x123dfc3du);
  /* 123dfc3d push 2 */
  push32((uint32_t)(0x2u));
  /* 123dfc3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfc42 mov ecx, dword ptr [0x12402b60] */
  ECX = (r32((uint32_t)(0x12402b60)));
  /* 123dfc48 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 123dfc4b push edx */
  push32((uint32_t)(EDX));
  /* 123dfc4c call 0x123d6e80 */
  push32(0x123dfc51u); f_123d6e80();
  /* 123dfc51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfc54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfc57 mov ecx, dword ptr [0x12402b60] */
  ECX = (r32((uint32_t)(0x12402b60)));
  /* 123dfc5d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_123dfc64:;
  /* 123dfc64 jmp 0x123dfbc0 */
  goto L_123dfbc0;
L_123dfc69:;
  /* 123dfc69 push 2 */
  push32((uint32_t)(0x2u));
  /* 123dfc6b call 0x123d9e90 */
  push32(0x123dfc70u); f_123d9e90();
  /* 123dfc70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfc73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dfc76 mov esp, ebp */
  ESP = (EBP);
  /* 123dfc78 pop ebp */
  EBP = (pop32());
  /* 123dfc79 ret  */
  ESPCHK(0x123dfba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc80 @ 0x123dfc80 (68 bytes, 26 insns) */
void f_123dfc80(void) {
  FTRACE(0x123dfc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dfc80 push ebp */
  push32((uint32_t)(EBP));
  /* 123dfc81 mov ebp, esp */
  EBP = (ESP);
  /* 123dfc83 push ecx */
  push32((uint32_t)(ECX));
  /* 123dfc84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfc88 jne 0x123dfc96 */
  if (!C.zf) goto L_123dfc96;
  /* 123dfc8a push 0 */
  push32((uint32_t)(0x0u));
  /* 123dfc8c call 0x123dfdf0 */
  push32(0x123dfc91u); f_123dfdf0();
  /* 123dfc91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfc94 jmp 0x123dfcc0 */
  goto L_123dfcc0;
L_123dfc96:;
  /* 123dfc96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfc99 push eax */
  push32((uint32_t)(EAX));
  /* 123dfc9a call 0x123df200 */
  push32(0x123dfc9fu); f_123df200();
  /* 123dfc9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfca5 push ecx */
  push32((uint32_t)(ECX));
  /* 123dfca6 call 0x123dfcd0 */
  push32(0x123dfcabu); f_123dfcd0();
  /* 123dfcab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfcae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123dfcb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfcb4 push edx */
  push32((uint32_t)(EDX));
  /* 123dfcb5 call 0x123df270 */
  push32(0x123dfcbau); f_123df270();
  /* 123dfcba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfcbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123dfcc0:;
  /* 123dfcc0 mov esp, ebp */
  ESP = (EBP);
  /* 123dfcc2 pop ebp */
  EBP = (pop32());
  /* 123dfcc3 ret  */
  ESPCHK(0x123dfc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcd0 @ 0x123dfcd0 (65 bytes, 26 insns) */
void f_123dfcd0(void) {
  FTRACE(0x123dfcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dfcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dfcd1 mov ebp, esp */
  EBP = (ESP);
  /* 123dfcd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfcd6 push eax */
  push32((uint32_t)(EAX));
  /* 123dfcd7 call 0x123dfd20 */
  push32(0x123dfcdcu); f_123dfd20();
  /* 123dfcdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfcdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dfce1 je 0x123dfce8 */
  if (C.zf) goto L_123dfce8;
  /* 123dfce3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123dfce6 jmp 0x123dfd0f */
  goto L_123dfd0f;
L_123dfce8:;
  /* 123dfce8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfceb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dfcee and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 123dfcf4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dfcf6 je 0x123dfd0d */
  if (C.zf) goto L_123dfd0d;
  /* 123dfcf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfcfb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123dfcfe push ecx */
  push32((uint32_t)(ECX));
  /* 123dfcff call 0x123e0ae0 */
  push32(0x123dfd04u); f_123e0ae0();
  /* 123dfd04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfd07 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123dfd09 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dfd0b jmp 0x123dfd0f */
  goto L_123dfd0f;
L_123dfd0d:;
  /* 123dfd0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123dfd0f:;
  /* 123dfd0f pop ebp */
  EBP = (pop32());
  /* 123dfd10 ret  */
  ESPCHK(0x123dfcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd20 @ 0x123dfd20 (183 bytes, 62 insns) */
void f_123dfd20(void) {
  FTRACE(0x123dfd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dfd20 push ebp */
  push32((uint32_t)(EBP));
  /* 123dfd21 mov ebp, esp */
  EBP = (ESP);
  /* 123dfd23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dfd26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123dfd2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dfd30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123dfd33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfd36 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dfd39 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 123dfd3c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfd3f jne 0x123dfdbb */
  if (!C.zf) goto L_123dfdbb;
  /* 123dfd41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfd44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123dfd47 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 123dfd4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dfd4f je 0x123dfdbb */
  if (C.zf) goto L_123dfdbb;
  /* 123dfd51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfd54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfd57 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 123dfd59 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dfd5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123dfd5f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfd63 jle 0x123dfdbb */
  if ((C.zf||C.sf!=C.of)) goto L_123dfdbb;
  /* 123dfd65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfd68 push edx */
  push32((uint32_t)(EDX));
  /* 123dfd69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfd6c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123dfd6f push ecx */
  push32((uint32_t)(ECX));
  /* 123dfd70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfd73 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123dfd76 push eax */
  push32((uint32_t)(EAX));
  /* 123dfd77 call 0x123dec90 */
  push32(0x123dfd7cu); f_123dec90();
  /* 123dfd7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfd7f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfd82 jne 0x123dfda5 */
  if (!C.zf) goto L_123dfda5;
  /* 123dfd84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfd87 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dfd8a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 123dfd90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dfd92 je 0x123dfda3 */
  if (C.zf) goto L_123dfda3;
  /* 123dfd94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfd97 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123dfd9a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 123dfd9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfda0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_123dfda3:;
  /* 123dfda3 jmp 0x123dfdbb */
  goto L_123dfdbb;
L_123dfda5:;
  /* 123dfda5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfda8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123dfdab or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 123dfdae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfdb1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 123dfdb4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123dfdbb:;
  /* 123dfdbb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfdbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfdc1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123dfdc4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123dfdc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123dfdc9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 123dfdd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dfdd3 mov esp, ebp */
  ESP = (EBP);
  /* 123dfdd5 pop ebp */
  EBP = (pop32());
  /* 123dfdd6 ret  */
  ESPCHK(0x123dfd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fde0 @ 0x123dfde0 (15 bytes, 7 insns) */
void f_123dfde0(void) {
  FTRACE(0x123dfde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dfde0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dfde1 mov ebp, esp */
  EBP = (ESP);
  /* 123dfde3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123dfde5 call 0x123dfdf0 */
  push32(0x123dfdeau); f_123dfdf0();
  /* 123dfdea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfded pop ebp */
  EBP = (pop32());
  /* 123dfdee ret  */
  ESPCHK(0x123dfde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdf0 @ 0x123dfdf0 (319 bytes, 94 insns) */
void f_123dfdf0(void) {
  FTRACE(0x123dfdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dfdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 123dfdf1 mov ebp, esp */
  EBP = (ESP);
  /* 123dfdf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dfdf6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123dfdfd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123dfe04 push 2 */
  push32((uint32_t)(0x2u));
  /* 123dfe06 call 0x123d9df0 */
  push32(0x123dfe0bu); f_123d9df0();
  /* 123dfe0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfe0e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123dfe15 jmp 0x123dfe20 */
  goto L_123dfe20;
L_123dfe17:;
  /* 123dfe17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfe1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfe1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_123dfe20:;
  /* 123dfe20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfe23 cmp ecx, dword ptr [0x12403ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12403ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfe29 jge 0x123dff13 */
  if ((C.sf==C.of)) goto L_123dff13;
  /* 123dfe2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfe32 mov eax, dword ptr [0x12402b60] */
  EAX = (r32((uint32_t)(0x12402b60)));
  /* 123dfe37 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfe3b je 0x123dff0e */
  if (C.zf) goto L_123dff0e;
  /* 123dfe41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfe44 mov edx, dword ptr [0x12402b60] */
  EDX = (r32((uint32_t)(0x12402b60)));
  /* 123dfe4a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 123dfe4d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123dfe50 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 123dfe56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123dfe58 je 0x123dff0e */
  if (C.zf) goto L_123dff0e;
  /* 123dfe5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfe61 mov eax, dword ptr [0x12402b60] */
  EAX = (r32((uint32_t)(0x12402b60)));
  /* 123dfe66 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123dfe69 push ecx */
  push32((uint32_t)(ECX));
  /* 123dfe6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfe6d push edx */
  push32((uint32_t)(EDX));
  /* 123dfe6e call 0x123df240 */
  push32(0x123dfe73u); f_123df240();
  /* 123dfe73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfe76 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfe79 mov ecx, dword ptr [0x12402b60] */
  ECX = (r32((uint32_t)(0x12402b60)));
  /* 123dfe7f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 123dfe82 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 123dfe85 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 123dfe8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123dfe8c je 0x123dfef5 */
  if (C.zf) goto L_123dfef5;
  /* 123dfe8e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfe92 jne 0x123dfeb9 */
  if (!C.zf) goto L_123dfeb9;
  /* 123dfe94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfe97 mov edx, dword ptr [0x12402b60] */
  EDX = (r32((uint32_t)(0x12402b60)));
  /* 123dfe9d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 123dfea0 push eax */
  push32((uint32_t)(EAX));
  /* 123dfea1 call 0x123dfcd0 */
  push32(0x123dfea6u); f_123dfcd0();
  /* 123dfea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfea9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfeac je 0x123dfeb7 */
  if (C.zf) goto L_123dfeb7;
  /* 123dfeae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dfeb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfeb4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123dfeb7:;
  /* 123dfeb7 jmp 0x123dfef5 */
  goto L_123dfef5;
L_123dfeb9:;
  /* 123dfeb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfebd jne 0x123dfef5 */
  if (!C.zf) goto L_123dfef5;
  /* 123dfebf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfec2 mov eax, dword ptr [0x12402b60] */
  EAX = (r32((uint32_t)(0x12402b60)));
  /* 123dfec7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123dfeca mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123dfecd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 123dfed0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123dfed2 je 0x123dfef5 */
  if (C.zf) goto L_123dfef5;
  /* 123dfed4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfed7 mov ecx, dword ptr [0x12402b60] */
  ECX = (r32((uint32_t)(0x12402b60)));
  /* 123dfedd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 123dfee0 push edx */
  push32((uint32_t)(EDX));
  /* 123dfee1 call 0x123dfcd0 */
  push32(0x123dfee6u); f_123dfcd0();
  /* 123dfee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dfee9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfeec jne 0x123dfef5 */
  if (!C.zf) goto L_123dfef5;
  /* 123dfeee mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_123dfef5:;
  /* 123dfef5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dfef8 mov ecx, dword ptr [0x12402b60] */
  ECX = (r32((uint32_t)(0x12402b60)));
  /* 123dfefe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 123dff01 push edx */
  push32((uint32_t)(EDX));
  /* 123dff02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123dff05 push eax */
  push32((uint32_t)(EAX));
  /* 123dff06 call 0x123df2b0 */
  push32(0x123dff0bu); f_123df2b0();
  /* 123dff0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123dff0e:;
  /* 123dff0e jmp 0x123dfe17 */
  goto L_123dfe17;
L_123dff13:;
  /* 123dff13 push 2 */
  push32((uint32_t)(0x2u));
  /* 123dff15 call 0x123d9e90 */
  push32(0x123dff1au); f_123d9e90();
  /* 123dff1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dff1d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dff21 jne 0x123dff28 */
  if (!C.zf) goto L_123dff28;
  /* 123dff23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123dff26 jmp 0x123dff2b */
  goto L_123dff2b;
L_123dff28:;
  /* 123dff28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123dff2b:;
  /* 123dff2b mov esp, ebp */
  ESP = (EBP);
  /* 123dff2d pop ebp */
  EBP = (pop32());
  /* 123dff2e ret  */
  ESPCHK(0x123dfdf0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x123dff30 (15 bytes, 7 insns) */
void f_123dff30(void) {
  FTRACE(0x123dff30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dff30 push ebp */
  push32((uint32_t)(EBP));
  /* 123dff31 mov ebp, esp */
  EBP = (ESP);
  /* 123dff33 push 2 */
  push32((uint32_t)(0x2u));
  /* 123dff35 call 0x123d5360 */
  push32(0x123dff3au); f_123d5360();
  /* 123dff3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dff3d pop ebp */
  EBP = (pop32());
  /* 123dff3e ret  */
  ESPCHK(0x123dff30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff40 @ 0x123dff40 (1007 bytes, 269 insns) */
void f_123dff40(void) {
  FTRACE(0x123dff40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123dff40 push ebp */
  push32((uint32_t)(EBP));
  /* 123dff41 mov ebp, esp */
  EBP = (ESP);
  /* 123dff43 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123dff49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dff4d jl 0x123dff55 */
  if ((C.sf!=C.of)) goto L_123dff55;
  /* 123dff4f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dff53 jle 0x123dff5c */
  if ((C.zf||C.sf!=C.of)) goto L_123dff5c;
L_123dff55:;
  /* 123dff55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123dff57 jmp 0x123e032b */
  goto L_123e032b;
L_123dff5c:;
  /* 123dff5c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123dff5e call 0x123d9df0 */
  push32(0x123dff63u); f_123d9df0();
  /* 123dff63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dff66 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123dff6d mov eax, dword ptr [0x12402b4c] */
  EAX = (r32((uint32_t)(0x12402b4c)));
  /* 123dff72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123dff75 mov dword ptr [0x12402b4c], eax */
  w32((uint32_t)(0x12402b4c), (EAX));
L_123dff7a:;
  /* 123dff7a cmp dword ptr [0x12402b5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402b5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dff81 je 0x123dff8d */
  if (C.zf) goto L_123dff8d;
  /* 123dff83 push 1 */
  push32((uint32_t)(0x1u));
  /* 123dff85 call dword ptr [0x124052c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052c0))), 0x123dff8bu);
  /* 123dff8b jmp 0x123dff7a */
  goto L_123dff7a;
L_123dff8d:;
  /* 123dff8d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dff91 je 0x123dffd1 */
  if (C.zf) goto L_123dffd1;
  /* 123dff93 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dff97 je 0x123dffb1 */
  if (C.zf) goto L_123dffb1;
  /* 123dff99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dff9c push ecx */
  push32((uint32_t)(ECX));
  /* 123dff9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dffa0 push edx */
  push32((uint32_t)(EDX));
  /* 123dffa1 call 0x123e0330 */
  push32(0x123dffa6u); f_123e0330();
  /* 123dffa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123dffa9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 123dffaf jmp 0x123dffc3 */
  goto L_123dffc3;
L_123dffb1:;
  /* 123dffb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123dffb4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123dffb7 mov ecx, dword ptr [eax + 0x124014dc] */
  ECX = (r32((uint32_t)(EAX + 0x124014dc)));
  /* 123dffbd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_123dffc3:;
  /* 123dffc3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 123dffc9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123dffcc jmp 0x123e030b */
  goto L_123e030b;
L_123dffd1:;
  /* 123dffd1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 123dffd8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123dffdf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dffe3 je 0x123e0303 */
  if (C.zf) goto L_123e0303;
  /* 123dffe9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dffec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123dffef cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123dfff2 jne 0x123e0214 */
  if (!C.zf) goto L_123e0214;
  /* 123dfff8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123dfffb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 123dffff cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0002 jne 0x123e0214 */
  if (!C.zf) goto L_123e0214;
  /* 123e0008 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e000b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 123e000f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0012 jne 0x123e0214 */
  if (!C.zf) goto L_123e0214;
  /* 123e0018 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e001b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_123e0021:;
  /* 123e0021 push 0x123fe64c */
  push32((uint32_t)(0x123fe64cu));
  /* 123e0026 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123e002c push ecx */
  push32((uint32_t)(ECX));
  /* 123e002d call 0x123e2190 */
  push32(0x123e0032u); f_123e2190();
  /* 123e0032 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0035 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 123e003b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0042 je 0x123e006d */
  if (C.zf) goto L_123e006d;
  /* 123e0044 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e004a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e0050 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 123e0056 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e005d je 0x123e006d */
  if (C.zf) goto L_123e006d;
  /* 123e005f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e0065 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e0068 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e006b jne 0x123e0093 */
  if (!C.zf) goto L_123e0093;
L_123e006d:;
  /* 123e006d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0071 je 0x123e008c */
  if (C.zf) goto L_123e008c;
  /* 123e0073 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e0075 call 0x123d9e90 */
  push32(0x123e007au); f_123d9e90();
  /* 123e007a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e007d mov edx, dword ptr [0x12402b4c] */
  EDX = (r32((uint32_t)(0x12402b4c)));
  /* 123e0083 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e0086 mov dword ptr [0x12402b4c], edx */
  w32((uint32_t)(0x12402b4c), (EDX));
L_123e008c:;
  /* 123e008c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e008e jmp 0x123e032b */
  goto L_123e032b;
L_123e0093:;
  /* 123e0093 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 123e009a jmp 0x123e00a5 */
  goto L_123e00a5;
L_123e009c:;
  /* 123e009c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e009f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e00a2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123e00a5:;
  /* 123e00a5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e00a9 jg 0x123e00f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e00f3;
  /* 123e00ab mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 123e00b1 push ecx */
  push32((uint32_t)(ECX));
  /* 123e00b2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123e00b8 push edx */
  push32((uint32_t)(EDX));
  /* 123e00b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e00bc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e00bf mov ecx, dword ptr [eax + 0x124014d8] */
  ECX = (r32((uint32_t)(EAX + 0x124014d8)));
  /* 123e00c5 push ecx */
  push32((uint32_t)(ECX));
  /* 123e00c6 call 0x123e2150 */
  push32(0x123e00cbu); f_123e2150();
  /* 123e00cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e00ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e00d0 jne 0x123e00f1 */
  if (!C.zf) goto L_123e00f1;
  /* 123e00d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e00d5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e00d8 mov eax, dword ptr [edx + 0x124014d8] */
  EAX = (r32((uint32_t)(EDX + 0x124014d8)));
  /* 123e00de push eax */
  push32((uint32_t)(EAX));
  /* 123e00df call 0x123d9220 */
  push32(0x123e00e4u); f_123d9220();
  /* 123e00e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e00e7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e00ed jne 0x123e00f1 */
  if (!C.zf) goto L_123e00f1;
  /* 123e00ef jmp 0x123e00f3 */
  goto L_123e00f3;
L_123e00f1:;
  /* 123e00f1 jmp 0x123e009c */
  goto L_123e009c;
L_123e00f3:;
  /* 123e00f3 push 0x123fe648 */
  push32((uint32_t)(0x123fe648u));
  /* 123e00f8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e00fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0101 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 123e0107 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e010d push edx */
  push32((uint32_t)(EDX));
  /* 123e010e call 0x123e2110 */
  push32(0x123e0113u); f_123e2110();
  /* 123e0113 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0116 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 123e011c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0123 jne 0x123e0159 */
  if (!C.zf) goto L_123e0159;
  /* 123e0125 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e012b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e012e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0131 je 0x123e0159 */
  if (C.zf) goto L_123e0159;
  /* 123e0133 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0137 je 0x123e0152 */
  if (C.zf) goto L_123e0152;
  /* 123e0139 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e013b call 0x123d9e90 */
  push32(0x123e0140u); f_123d9e90();
  /* 123e0140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0143 mov edx, dword ptr [0x12402b4c] */
  EDX = (r32((uint32_t)(0x12402b4c)));
  /* 123e0149 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e014c mov dword ptr [0x12402b4c], edx */
  w32((uint32_t)(0x12402b4c), (EDX));
L_123e0152:;
  /* 123e0152 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e0154 jmp 0x123e032b */
  goto L_123e032b;
L_123e0159:;
  /* 123e0159 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e015d jg 0x123e01aa */
  if ((!C.zf&&C.sf==C.of)) goto L_123e01aa;
  /* 123e015f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 123e0165 push eax */
  push32((uint32_t)(EAX));
  /* 123e0166 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e016c push ecx */
  push32((uint32_t)(ECX));
  /* 123e016d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 123e0173 push edx */
  push32((uint32_t)(EDX));
  /* 123e0174 call 0x123d9c10 */
  push32(0x123e0179u); f_123d9c10();
  /* 123e0179 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e017c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 123e0182 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 123e018a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 123e0190 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0191 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e0194 push edx */
  push32((uint32_t)(EDX));
  /* 123e0195 call 0x123e0330 */
  push32(0x123e019au); f_123e0330();
  /* 123e019a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e019d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e019f je 0x123e01aa */
  if (C.zf) goto L_123e01aa;
  /* 123e01a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e01a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e01a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_123e01aa:;
  /* 123e01aa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e01b0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e01b6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 123e01bc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123e01c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e01c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e01c7 je 0x123e01d8 */
  if (C.zf) goto L_123e01d8;
  /* 123e01c9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123e01cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e01d2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_123e01d8:;
  /* 123e01d8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123e01de movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e01e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e01e3 jne 0x123e0021 */
  if (!C.zf) goto L_123e0021;
  /* 123e01e9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e01ed je 0x123e01fc */
  if (C.zf) goto L_123e01fc;
  /* 123e01ef call 0x123e04d0 */
  push32(0x123e01f4u); f_123e04d0();
  /* 123e01f4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 123e01fa jmp 0x123e0206 */
  goto L_123e0206;
L_123e01fc:;
  /* 123e01fc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_123e0206:;
  /* 123e0206 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 123e020c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e020f jmp 0x123e0301 */
  goto L_123e0301;
L_123e0214:;
  /* 123e0214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0217 push edx */
  push32((uint32_t)(EDX));
  /* 123e0218 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e021a push 0 */
  push32((uint32_t)(0x0u));
  /* 123e021c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 123e0222 push eax */
  push32((uint32_t)(EAX));
  /* 123e0223 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e0226 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0227 call 0x123e05d0 */
  push32(0x123e022cu); f_123e05d0();
  /* 123e022c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e022f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e0232 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0236 je 0x123e0301 */
  if (C.zf) goto L_123e0301;
  /* 123e023c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e0243 jmp 0x123e024e */
  goto L_123e024e;
L_123e0245:;
  /* 123e0245 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e0248 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e024b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123e024e:;
  /* 123e024e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0252 jg 0x123e02b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e02b0;
  /* 123e0254 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0258 je 0x123e02ae */
  if (C.zf) goto L_123e02ae;
  /* 123e025a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e025d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e0260 mov ecx, dword ptr [eax + 0x124014dc] */
  ECX = (r32((uint32_t)(EAX + 0x124014dc)));
  /* 123e0266 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0267 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 123e026d push edx */
  push32((uint32_t)(EDX));
  /* 123e026e call 0x123e2080 */
  push32(0x123e0273u); f_123e2080();
  /* 123e0273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0278 je 0x123e02a5 */
  if (C.zf) goto L_123e02a5;
  /* 123e027a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 123e0280 push eax */
  push32((uint32_t)(EAX));
  /* 123e0281 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e0284 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0285 call 0x123e0330 */
  push32(0x123e028au); f_123e0330();
  /* 123e028a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e028d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e028f je 0x123e029c */
  if (C.zf) goto L_123e029c;
  /* 123e0291 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0294 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0297 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123e029a jmp 0x123e02a3 */
  goto L_123e02a3;
L_123e029c:;
  /* 123e029c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_123e02a3:;
  /* 123e02a3 jmp 0x123e02ae */
  goto L_123e02ae;
L_123e02a5:;
  /* 123e02a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e02a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e02ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_123e02ae:;
  /* 123e02ae jmp 0x123e0245 */
  goto L_123e0245;
L_123e02b0:;
  /* 123e02b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e02b4 je 0x123e02db */
  if (C.zf) goto L_123e02db;
  /* 123e02b6 call 0x123e04d0 */
  push32(0x123e02bbu); f_123e04d0();
  /* 123e02bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e02be push 2 */
  push32((uint32_t)(0x2u));
  /* 123e02c0 mov ecx, dword ptr [0x124014dc] */
  ECX = (r32((uint32_t)(0x124014dc)));
  /* 123e02c6 push ecx */
  push32((uint32_t)(ECX));
  /* 123e02c7 call 0x123d6e80 */
  push32(0x123e02ccu); f_123d6e80();
  /* 123e02cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e02cf mov dword ptr [0x124014dc], 0 */
  w32((uint32_t)(0x124014dc), (0x0u));
  /* 123e02d9 jmp 0x123e0301 */
  goto L_123e0301;
L_123e02db:;
  /* 123e02db cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e02df je 0x123e02ee */
  if (C.zf) goto L_123e02ee;
  /* 123e02e1 call 0x123e04d0 */
  push32(0x123e02e6u); f_123e04d0();
  /* 123e02e6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 123e02ec jmp 0x123e02f8 */
  goto L_123e02f8;
L_123e02ee:;
  /* 123e02ee mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_123e02f8:;
  /* 123e02f8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 123e02fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123e0301:;
  /* 123e0301 jmp 0x123e030b */
  goto L_123e030b;
L_123e0303:;
  /* 123e0303 call 0x123e04d0 */
  push32(0x123e0308u); f_123e04d0();
  /* 123e0308 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123e030b:;
  /* 123e030b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e030f je 0x123e0328 */
  if (C.zf) goto L_123e0328;
  /* 123e0311 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123e0313 call 0x123d9e90 */
  push32(0x123e0318u); f_123d9e90();
  /* 123e0318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e031b mov eax, dword ptr [0x12402b4c] */
  EAX = (r32((uint32_t)(0x12402b4c)));
  /* 123e0320 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e0323 mov dword ptr [0x12402b4c], eax */
  w32((uint32_t)(0x12402b4c), (EAX));
L_123e0328:;
  /* 123e0328 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123e032b:;
  /* 123e032b mov esp, ebp */
  ESP = (EBP);
  /* 123e032d pop ebp */
  EBP = (pop32());
  /* 123e032e ret  */
  ESPCHK(0x123dff40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010330 @ 0x123e0330 (403 bytes, 117 insns) */
void f_123e0330(void) {
  FTRACE(0x123e0330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e0330 push ebp */
  push32((uint32_t)(EBP));
  /* 123e0331 mov ebp, esp */
  EBP = (ESP);
  /* 123e0333 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e0339 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e033c push eax */
  push32((uint32_t)(EAX));
  /* 123e033d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 123e0343 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0344 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 123e034a push edx */
  push32((uint32_t)(EDX));
  /* 123e034b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 123e0351 push eax */
  push32((uint32_t)(EAX));
  /* 123e0352 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e0355 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0356 call 0x123e05d0 */
  push32(0x123e035bu); f_123e05d0();
  /* 123e035b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e035e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0360 jne 0x123e0369 */
  if (!C.zf) goto L_123e0369;
  /* 123e0362 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e0364 jmp 0x123e04bf */
  goto L_123e04bf;
L_123e0369:;
  /* 123e0369 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 123e036e push 0x123fe650 */
  push32((uint32_t)(0x123fe650u));
  /* 123e0373 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e0375 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 123e037b push edx */
  push32((uint32_t)(EDX));
  /* 123e037c call 0x123d9220 */
  push32(0x123e0381u); f_123d9220();
  /* 123e0381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0384 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0387 push eax */
  push32((uint32_t)(EAX));
  /* 123e0388 call 0x123d63f0 */
  push32(0x123e038du); f_123d63f0();
  /* 123e038d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0390 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e0393 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0397 jne 0x123e03a0 */
  if (!C.zf) goto L_123e03a0;
  /* 123e0399 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e039b jmp 0x123e04bf */
  goto L_123e04bf;
L_123e03a0:;
  /* 123e03a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e03a3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e03a6 mov ecx, dword ptr [eax + 0x124014dc] */
  ECX = (r32((uint32_t)(EAX + 0x124014dc)));
  /* 123e03ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e03af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e03b2 mov eax, dword ptr [edx*4 + 0x124029c8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x124029c8)));
  /* 123e03b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e03bc push 6 */
  push32((uint32_t)(0x6u));
  /* 123e03be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e03c1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e03c4 add ecx, 0x12402a18 */
  { uint32_t _a=(ECX),_b=(0x12402a18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e03ca push ecx */
  push32((uint32_t)(ECX));
  /* 123e03cb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 123e03ce push edx */
  push32((uint32_t)(EDX));
  /* 123e03cf call 0x123dccd0 */
  push32(0x123e03d4u); f_123dccd0();
  /* 123e03d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e03d7 mov eax, dword ptr [0x124029e0] */
  EAX = (r32((uint32_t)(0x124029e0)));
  /* 123e03dc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123e03df lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 123e03e5 push ecx */
  push32((uint32_t)(ECX));
  /* 123e03e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e03e9 push edx */
  push32((uint32_t)(EDX));
  /* 123e03ea call 0x123d93a0 */
  push32(0x123e03efu); f_123d93a0();
  /* 123e03ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e03f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e03f5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e03f8 mov dword ptr [ecx + 0x124014dc], eax */
  w32((uint32_t)(ECX + 0x124014dc), (EAX));
  /* 123e03fe mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 123e0404 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123e040a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e040d mov dword ptr [eax*4 + 0x124029c8], edx */
  w32((uint32_t)(EAX*4 + 0x124029c8), (EDX));
  /* 123e0414 push 6 */
  push32((uint32_t)(0x6u));
  /* 123e0416 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 123e041c push ecx */
  push32((uint32_t)(ECX));
  /* 123e041d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0420 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e0423 add edx, 0x12402a18 */
  { uint32_t _a=(EDX),_b=(0x12402a18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0429 push edx */
  push32((uint32_t)(EDX));
  /* 123e042a call 0x123dccd0 */
  push32(0x123e042fu); f_123dccd0();
  /* 123e042f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0432 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0436 jne 0x123e0443 */
  if (!C.zf) goto L_123e0443;
  /* 123e0438 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e043e mov dword ptr [0x124029e0], eax */
  w32((uint32_t)(0x124029e0), (EAX));
L_123e0443:;
  /* 123e0443 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0447 jne 0x123e0455 */
  if (!C.zf) goto L_123e0455;
  /* 123e0449 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123e044f mov dword ptr [0x124029e4], ecx */
  w32((uint32_t)(0x124029e4), (ECX));
L_123e0455:;
  /* 123e0455 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0458 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e045b call dword ptr [edx + 0x124014e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x124014e0))), 0x123e0461u);
  /* 123e0461 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0463 je 0x123e049c */
  if (C.zf) goto L_123e049c;
  /* 123e0465 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0468 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e046b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e046e mov dword ptr [eax + 0x124014dc], ecx */
  w32((uint32_t)(EAX + 0x124014dc), (ECX));
  /* 123e0474 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e0476 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0479 push edx */
  push32((uint32_t)(EDX));
  /* 123e047a call 0x123d6e80 */
  push32(0x123e047fu); f_123d6e80();
  /* 123e047f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0482 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0485 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0488 mov dword ptr [eax*4 + 0x124029c8], ecx */
  w32((uint32_t)(EAX*4 + 0x124029c8), (ECX));
  /* 123e048f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e0492 mov dword ptr [0x124029e0], edx */
  w32((uint32_t)(0x124029e0), (EDX));
  /* 123e0498 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e049a jmp 0x123e04bf */
  goto L_123e04bf;
L_123e049c:;
  /* 123e049c cmp dword ptr [ebp - 0xc], 0x124013c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x124013c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e04a3 je 0x123e04b3 */
  if (C.zf) goto L_123e04b3;
  /* 123e04a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e04a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e04aa push eax */
  push32((uint32_t)(EAX));
  /* 123e04ab call 0x123d6e80 */
  push32(0x123e04b0u); f_123d6e80();
  /* 123e04b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e04b3:;
  /* 123e04b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e04b6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e04b9 mov eax, dword ptr [ecx + 0x124014dc] */
  EAX = (r32((uint32_t)(ECX + 0x124014dc)));
L_123e04bf:;
  /* 123e04bf mov esp, ebp */
  ESP = (EBP);
  /* 123e04c1 pop ebp */
  EBP = (pop32());
  /* 123e04c2 ret  */
  ESPCHK(0x123e0330u, _esp0);
  ESP += 4; return;
}

/* FUN_100104d0 @ 0x123e04d0 (256 bytes, 72 insns) */
void f_123e04d0(void) {
  FTRACE(0x123e04d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e04d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e04d1 mov ebp, esp */
  EBP = (ESP);
  /* 123e04d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e04d6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123e04dd cmp dword ptr [0x124014dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124014dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e04e4 jne 0x123e0504 */
  if (!C.zf) goto L_123e0504;
  /* 123e04e6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 123e04eb push 0x123fe650 */
  push32((uint32_t)(0x123fe650u));
  /* 123e04f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e04f2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 123e04f7 call 0x123d63f0 */
  push32(0x123e04fcu); f_123d63f0();
  /* 123e04fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e04ff mov dword ptr [0x124014dc], eax */
  w32((uint32_t)(0x124014dc), (EAX));
L_123e0504:;
  /* 123e0504 mov eax, dword ptr [0x124014dc] */
  EAX = (r32((uint32_t)(0x124014dc)));
  /* 123e0509 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123e050c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123e0513 jmp 0x123e051e */
  goto L_123e051e;
L_123e0515:;
  /* 123e0515 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0518 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e051b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123e051e:;
  /* 123e051e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0521 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e0524 mov eax, dword ptr [edx + 0x124014dc] */
  EAX = (r32((uint32_t)(EDX + 0x124014dc)));
  /* 123e052a push eax */
  push32((uint32_t)(EAX));
  /* 123e052b push 0x123fe65c */
  push32((uint32_t)(0x123fe65cu));
  /* 123e0530 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0533 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e0536 mov edx, dword ptr [ecx + 0x124014d8] */
  EDX = (r32((uint32_t)(ECX + 0x124014d8)));
  /* 123e053c push edx */
  push32((uint32_t)(EDX));
  /* 123e053d push 3 */
  push32((uint32_t)(0x3u));
  /* 123e053f mov eax, dword ptr [0x124014dc] */
  EAX = (r32((uint32_t)(0x124014dc)));
  /* 123e0544 push eax */
  push32((uint32_t)(EAX));
  /* 123e0545 call 0x123e0770 */
  push32(0x123e054au); f_123e0770();
  /* 123e054a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e054d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0551 jge 0x123e0599 */
  if ((C.sf==C.of)) goto L_123e0599;
  /* 123e0553 push 0x123fe648 */
  push32((uint32_t)(0x123fe648u));
  /* 123e0558 mov ecx, dword ptr [0x124014dc] */
  ECX = (r32((uint32_t)(0x124014dc)));
  /* 123e055e push ecx */
  push32((uint32_t)(ECX));
  /* 123e055f call 0x123d93b0 */
  push32(0x123e0564u); f_123d93b0();
  /* 123e0564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0567 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e056a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e056d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e0570 mov eax, dword ptr [edx + 0x124014dc] */
  EAX = (r32((uint32_t)(EDX + 0x124014dc)));
  /* 123e0576 push eax */
  push32((uint32_t)(EAX));
  /* 123e0577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e057a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e057d mov edx, dword ptr [ecx + 0x124014dc] */
  EDX = (r32((uint32_t)(ECX + 0x124014dc)));
  /* 123e0583 push edx */
  push32((uint32_t)(EDX));
  /* 123e0584 call 0x123e2080 */
  push32(0x123e0589u); f_123e2080();
  /* 123e0589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e058c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e058e je 0x123e0597 */
  if (C.zf) goto L_123e0597;
  /* 123e0590 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123e0597:;
  /* 123e0597 jmp 0x123e05c7 */
  goto L_123e05c7;
L_123e0599:;
  /* 123e0599 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e059d jne 0x123e05a6 */
  if (!C.zf) goto L_123e05a6;
  /* 123e059f mov eax, dword ptr [0x124014dc] */
  EAX = (r32((uint32_t)(0x124014dc)));
  /* 123e05a4 jmp 0x123e05cc */
  goto L_123e05cc;
L_123e05a6:;
  /* 123e05a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e05a8 mov eax, dword ptr [0x124014dc] */
  EAX = (r32((uint32_t)(0x124014dc)));
  /* 123e05ad push eax */
  push32((uint32_t)(EAX));
  /* 123e05ae call 0x123d6e80 */
  push32(0x123e05b3u); f_123d6e80();
  /* 123e05b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e05b6 mov dword ptr [0x124014dc], 0 */
  w32((uint32_t)(0x124014dc), (0x0u));
  /* 123e05c0 mov eax, dword ptr [0x124014f4] */
  EAX = (r32((uint32_t)(0x124014f4)));
  /* 123e05c5 jmp 0x123e05cc */
  goto L_123e05cc;
L_123e05c7:;
  /* 123e05c7 jmp 0x123e0515 */
  goto L_123e0515;
L_123e05cc:;
  /* 123e05cc mov esp, ebp */
  ESP = (EBP);
  /* 123e05ce pop ebp */
  EBP = (pop32());
  /* 123e05cf ret  */
  ESPCHK(0x123e04d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100105d0 @ 0x123e05d0 (388 bytes, 115 insns) */
void f_123e05d0(void) {
  FTRACE(0x123e05d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e05d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e05d1 mov ebp, esp */
  EBP = (ESP);
  /* 123e05d3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e05d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e05dd jne 0x123e05e6 */
  if (!C.zf) goto L_123e05e6;
  /* 123e05df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e05e1 jmp 0x123e0750 */
  goto L_123e0750;
L_123e05e6:;
  /* 123e05e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e05e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e05ec cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e05ef jne 0x123e0640 */
  if (!C.zf) goto L_123e0640;
  /* 123e05f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e05f4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 123e05f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e05fa jne 0x123e0640 */
  if (!C.zf) goto L_123e0640;
  /* 123e05fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e05ff mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 123e0602 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e0605 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 123e0609 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e060d je 0x123e0629 */
  if (C.zf) goto L_123e0629;
  /* 123e060f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e0612 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 123e0617 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e061a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 123e0620 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e0623 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_123e0629:;
  /* 123e0629 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e062d je 0x123e0638 */
  if (C.zf) goto L_123e0638;
  /* 123e062f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e0632 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_123e0638:;
  /* 123e0638 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e063b jmp 0x123e0750 */
  goto L_123e0750;
L_123e0640:;
  /* 123e0640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0643 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0644 push 0x12401450 */
  push32((uint32_t)(0x12401450u));
  /* 123e0649 call 0x123e2080 */
  push32(0x123e064eu); f_123e2080();
  /* 123e064e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0651 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0653 je 0x123e0708 */
  if (C.zf) goto L_123e0708;
  /* 123e0659 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e065c push edx */
  push32((uint32_t)(EDX));
  /* 123e065d push 0x124013cc */
  push32((uint32_t)(0x124013ccu));
  /* 123e0662 call 0x123e2080 */
  push32(0x123e0667u); f_123e2080();
  /* 123e0667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e066a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e066c je 0x123e0708 */
  if (C.zf) goto L_123e0708;
  /* 123e0672 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0675 push eax */
  push32((uint32_t)(EAX));
  /* 123e0676 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 123e067c push ecx */
  push32((uint32_t)(ECX));
  /* 123e067d call 0x123e07c0 */
  push32(0x123e0682u); f_123e07c0();
  /* 123e0682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0687 je 0x123e0690 */
  if (C.zf) goto L_123e0690;
  /* 123e0689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e068b jmp 0x123e0750 */
  goto L_123e0750;
L_123e0690:;
  /* 123e0690 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 123e0696 push edx */
  push32((uint32_t)(EDX));
  /* 123e0697 push 0x124029f0 */
  push32((uint32_t)(0x124029f0u));
  /* 123e069c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 123e06a2 push eax */
  push32((uint32_t)(EAX));
  /* 123e06a3 call 0x123e21d0 */
  push32(0x123e06a8u); f_123e21d0();
  /* 123e06a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e06ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e06ad jne 0x123e06b6 */
  if (!C.zf) goto L_123e06b6;
  /* 123e06af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e06b1 jmp 0x123e0750 */
  goto L_123e0750;
L_123e06b6:;
  /* 123e06b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e06b8 mov cx, word ptr [0x124029f4] */
  CX = (r16((uint32_t)(0x124029f4)));
  /* 123e06bf mov dword ptr [0x124029f8], ecx */
  w32((uint32_t)(0x124029f8), (ECX));
  /* 123e06c5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 123e06cb push edx */
  push32((uint32_t)(EDX));
  /* 123e06cc push 0x12401450 */
  push32((uint32_t)(0x12401450u));
  /* 123e06d1 call 0x123e0920 */
  push32(0x123e06d6u); f_123e0920();
  /* 123e06d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e06d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e06dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e06df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e06e1 je 0x123e06f6 */
  if (C.zf) goto L_123e06f6;
  /* 123e06e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e06e6 push edx */
  push32((uint32_t)(EDX));
  /* 123e06e7 push 0x124013cc */
  push32((uint32_t)(0x124013ccu));
  /* 123e06ec call 0x123d93a0 */
  push32(0x123e06f1u); f_123d93a0();
  /* 123e06f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e06f4 jmp 0x123e0708 */
  goto L_123e0708;
L_123e06f6:;
  /* 123e06f6 push 0x12401450 */
  push32((uint32_t)(0x12401450u));
  /* 123e06fb push 0x124013cc */
  push32((uint32_t)(0x124013ccu));
  /* 123e0700 call 0x123d93a0 */
  push32(0x123e0705u); f_123d93a0();
  /* 123e0705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e0708:;
  /* 123e0708 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e070c je 0x123e0721 */
  if (C.zf) goto L_123e0721;
  /* 123e070e push 6 */
  push32((uint32_t)(0x6u));
  /* 123e0710 push 0x124029f0 */
  push32((uint32_t)(0x124029f0u));
  /* 123e0715 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e0718 push eax */
  push32((uint32_t)(EAX));
  /* 123e0719 call 0x123dccd0 */
  push32(0x123e071eu); f_123dccd0();
  /* 123e071e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e0721:;
  /* 123e0721 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0725 je 0x123e073a */
  if (C.zf) goto L_123e073a;
  /* 123e0727 push 4 */
  push32((uint32_t)(0x4u));
  /* 123e0729 push 0x124029f8 */
  push32((uint32_t)(0x124029f8u));
  /* 123e072e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e0731 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0732 call 0x123dccd0 */
  push32(0x123e0737u); f_123dccd0();
  /* 123e0737 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e073a:;
  /* 123e073a push 0x12401450 */
  push32((uint32_t)(0x12401450u));
  /* 123e073f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e0742 push edx */
  push32((uint32_t)(EDX));
  /* 123e0743 call 0x123d93a0 */
  push32(0x123e0748u); f_123d93a0();
  /* 123e0748 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e074b mov eax, 0x12401450 */
  EAX = (0x12401450u);
L_123e0750:;
  /* 123e0750 mov esp, ebp */
  ESP = (EBP);
  /* 123e0752 pop ebp */
  EBP = (pop32());
  /* 123e0753 ret  */
  ESPCHK(0x123e05d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010760 @ 0x123e0760 (7 bytes, 5 insns) */
void f_123e0760(void) {
  FTRACE(0x123e0760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e0760 push ebp */
  push32((uint32_t)(EBP));
  /* 123e0761 mov ebp, esp */
  EBP = (ESP);
  /* 123e0763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e0765 pop ebp */
  EBP = (pop32());
  /* 123e0766 ret  */
  ESPCHK(0x123e0760u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x123e0770 (79 bytes, 28 insns) */
void f_123e0770(void) {
  FTRACE(0x123e0770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e0770 push ebp */
  push32((uint32_t)(EBP));
  /* 123e0771 mov ebp, esp */
  EBP = (ESP);
  /* 123e0773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e0776 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 123e0779 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e077c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123e0783 jmp 0x123e078e */
  goto L_123e078e;
L_123e0785:;
  /* 123e0785 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0788 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e078b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123e078e:;
  /* 123e078e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0791 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0794 jge 0x123e07b4 */
  if ((C.sf==C.of)) goto L_123e07b4;
  /* 123e0796 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0799 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e079c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e079f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e07a2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 123e07a5 push edx */
  push32((uint32_t)(EDX));
  /* 123e07a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e07a9 push eax */
  push32((uint32_t)(EAX));
  /* 123e07aa call 0x123d93b0 */
  push32(0x123e07afu); f_123d93b0();
  /* 123e07af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e07b2 jmp 0x123e0785 */
  goto L_123e0785;
L_123e07b4:;
  /* 123e07b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e07bb mov esp, ebp */
  ESP = (EBP);
  /* 123e07bd pop ebp */
  EBP = (pop32());
  /* 123e07be ret  */
  ESPCHK(0x123e0770u, _esp0);
  ESP += 4; return;
}

/* FUN_100107c0 @ 0x123e07c0 (349 bytes, 122 insns) */
void f_123e07c0(void) {
  FTRACE(0x123e07c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e07c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e07c1 mov ebp, esp */
  EBP = (ESP);
  /* 123e07c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e07c6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 123e07cb push 0 */
  push32((uint32_t)(0x0u));
  /* 123e07cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e07d0 push eax */
  push32((uint32_t)(EAX));
  /* 123e07d1 call 0x123da160 */
  push32(0x123e07d6u); f_123da160();
  /* 123e07d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e07d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e07dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e07df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e07e1 jne 0x123e07ea */
  if (!C.zf) goto L_123e07ea;
  /* 123e07e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e07e5 jmp 0x123e0919 */
  goto L_123e0919;
L_123e07ea:;
  /* 123e07ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e07ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e07f0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e07f3 jne 0x123e0820 */
  if (!C.zf) goto L_123e0820;
  /* 123e07f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e07f8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 123e07fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e07fe je 0x123e0820 */
  if (C.zf) goto L_123e0820;
  /* 123e0800 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e0803 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0806 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0807 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e080a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0810 push edx */
  push32((uint32_t)(EDX));
  /* 123e0811 call 0x123d93a0 */
  push32(0x123e0816u); f_123d93a0();
  /* 123e0816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0819 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e081b jmp 0x123e0919 */
  goto L_123e0919;
L_123e0820:;
  /* 123e0820 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e0827 jmp 0x123e0832 */
  goto L_123e0832;
L_123e0829:;
  /* 123e0829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e082c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e082f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123e0832:;
  /* 123e0832 push 0x123fe660 */
  push32((uint32_t)(0x123fe660u));
  /* 123e0837 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e083a push ecx */
  push32((uint32_t)(ECX));
  /* 123e083b call 0x123e2110 */
  push32(0x123e0840u); f_123e2110();
  /* 123e0840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0843 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e0846 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e084a jne 0x123e0854 */
  if (!C.zf) goto L_123e0854;
  /* 123e084c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e084f jmp 0x123e0919 */
  goto L_123e0919;
L_123e0854:;
  /* 123e0854 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e0857 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e085a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e085c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 123e085f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0863 jne 0x123e088a */
  if (!C.zf) goto L_123e088a;
  /* 123e0865 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0869 jge 0x123e088a */
  if ((C.sf==C.of)) goto L_123e088a;
  /* 123e086b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e086f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0872 je 0x123e088a */
  if (C.zf) goto L_123e088a;
  /* 123e0874 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0877 push edx */
  push32((uint32_t)(EDX));
  /* 123e0878 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e087b push eax */
  push32((uint32_t)(EAX));
  /* 123e087c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e087f push ecx */
  push32((uint32_t)(ECX));
  /* 123e0880 call 0x123d9c10 */
  push32(0x123e0885u); f_123d9c10();
  /* 123e0885 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0888 jmp 0x123e08f0 */
  goto L_123e08f0;
L_123e088a:;
  /* 123e088a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e088e jne 0x123e08b8 */
  if (!C.zf) goto L_123e08b8;
  /* 123e0890 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0894 jge 0x123e08b8 */
  if ((C.sf==C.of)) goto L_123e08b8;
  /* 123e0896 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e089a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e089d je 0x123e08b8 */
  if (C.zf) goto L_123e08b8;
  /* 123e089f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e08a2 push eax */
  push32((uint32_t)(EAX));
  /* 123e08a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e08a6 push ecx */
  push32((uint32_t)(ECX));
  /* 123e08a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e08aa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e08ad push edx */
  push32((uint32_t)(EDX));
  /* 123e08ae call 0x123d9c10 */
  push32(0x123e08b3u); f_123d9c10();
  /* 123e08b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e08b6 jmp 0x123e08f0 */
  goto L_123e08f0;
L_123e08b8:;
  /* 123e08b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e08bc jne 0x123e08eb */
  if (!C.zf) goto L_123e08eb;
  /* 123e08be movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e08c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e08c4 je 0x123e08cf */
  if (C.zf) goto L_123e08cf;
  /* 123e08c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e08ca cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e08cd jne 0x123e08eb */
  if (!C.zf) goto L_123e08eb;
L_123e08cf:;
  /* 123e08cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e08d2 push edx */
  push32((uint32_t)(EDX));
  /* 123e08d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e08d6 push eax */
  push32((uint32_t)(EAX));
  /* 123e08d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e08da add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e08e0 push ecx */
  push32((uint32_t)(ECX));
  /* 123e08e1 call 0x123d9c10 */
  push32(0x123e08e6u); f_123d9c10();
  /* 123e08e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e08e9 jmp 0x123e08f0 */
  goto L_123e08f0;
L_123e08eb:;
  /* 123e08eb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e08ee jmp 0x123e0919 */
  goto L_123e0919;
L_123e08f0:;
  /* 123e08f0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e08f4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e08f7 jne 0x123e08fb */
  if (!C.zf) goto L_123e08fb;
  /* 123e08f9 jmp 0x123e0917 */
  goto L_123e0917;
L_123e08fb:;
  /* 123e08fb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e08ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0901 jne 0x123e0905 */
  if (!C.zf) goto L_123e0905;
  /* 123e0903 jmp 0x123e0917 */
  goto L_123e0917;
L_123e0905:;
  /* 123e0905 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0908 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e090b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 123e090f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 123e0912 jmp 0x123e0829 */
  goto L_123e0829;
L_123e0917:;
  /* 123e0917 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e0919:;
  /* 123e0919 mov esp, ebp */
  ESP = (EBP);
  /* 123e091b pop ebp */
  EBP = (pop32());
  /* 123e091c ret  */
  ESPCHK(0x123e07c0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x123e0920 (101 bytes, 36 insns) */
void f_123e0920(void) {
  FTRACE(0x123e0920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e0920 push ebp */
  push32((uint32_t)(EBP));
  /* 123e0921 mov ebp, esp */
  EBP = (ESP);
  /* 123e0923 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e0926 push eax */
  push32((uint32_t)(EAX));
  /* 123e0927 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e092a push ecx */
  push32((uint32_t)(ECX));
  /* 123e092b call 0x123d93a0 */
  push32(0x123e0930u); f_123d93a0();
  /* 123e0930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0933 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e0936 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 123e093a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e093c je 0x123e0958 */
  if (C.zf) goto L_123e0958;
  /* 123e093e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e0941 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0944 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0945 push 0x123fe668 */
  push32((uint32_t)(0x123fe668u));
  /* 123e094a push 2 */
  push32((uint32_t)(0x2u));
  /* 123e094c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e094f push edx */
  push32((uint32_t)(EDX));
  /* 123e0950 call 0x123e0770 */
  push32(0x123e0955u); f_123e0770();
  /* 123e0955 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e0958:;
  /* 123e0958 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e095b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 123e0962 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e0964 je 0x123e0983 */
  if (C.zf) goto L_123e0983;
  /* 123e0966 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e0969 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e096f push edx */
  push32((uint32_t)(EDX));
  /* 123e0970 push 0x123fe664 */
  push32((uint32_t)(0x123fe664u));
  /* 123e0975 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e0977 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e097a push eax */
  push32((uint32_t)(EAX));
  /* 123e097b call 0x123e0770 */
  push32(0x123e0980u); f_123e0770();
  /* 123e0980 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e0983:;
  /* 123e0983 pop ebp */
  EBP = (pop32());
  /* 123e0984 ret  */
  ESPCHK(0x123e0920u, _esp0);
  ESP += 4; return;
}

/* FUN_10010990 @ 0x123e0990 (130 bytes, 50 insns) */
void f_123e0990(void) {
  FTRACE(0x123e0990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e0990 push ebp */
  push32((uint32_t)(EBP));
  /* 123e0991 mov ebp, esp */
  EBP = (ESP);
  /* 123e0993 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0994 push ebx */
  push32((uint32_t)(EBX));
  /* 123e0995 push esi */
  push32((uint32_t)(ESI));
  /* 123e0996 push edi */
  push32((uint32_t)(EDI));
  /* 123e0997 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123e099e:;
  /* 123e099e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e09a2 jne 0x123e09c2 */
  if (!C.zf) goto L_123e09c2;
  /* 123e09a4 push 0x123fe678 */
  push32((uint32_t)(0x123fe678u));
  /* 123e09a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e09ab push 0x3a */
  push32((uint32_t)(0x3au));
  /* 123e09ad push 0x123fe66c */
  push32((uint32_t)(0x123fe66cu));
  /* 123e09b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e09b4 call 0x123d54b0 */
  push32(0x123e09b9u); f_123d54b0();
  /* 123e09b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e09bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e09bf jne 0x123e09c2 */
  if (!C.zf) goto L_123e09c2;
  /* 123e09c1 int3  */
  x86_unimpl("int3 @ 0x123e09c1");
L_123e09c2:;
  /* 123e09c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e09c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e09c6 jne 0x123e099e */
  if (!C.zf) goto L_123e099e;
  /* 123e09c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e09cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123e09ce and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 123e09d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e09d3 je 0x123e09e1 */
  if (C.zf) goto L_123e09e1;
  /* 123e09d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e09d8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 123e09df jmp 0x123e0a08 */
  goto L_123e0a08;
L_123e09e1:;
  /* 123e09e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e09e4 push ecx */
  push32((uint32_t)(ECX));
  /* 123e09e5 call 0x123df200 */
  push32(0x123e09eau); f_123df200();
  /* 123e09ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e09ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e09f0 push edx */
  push32((uint32_t)(EDX));
  /* 123e09f1 call 0x123e0a20 */
  push32(0x123e09f6u); f_123e0a20();
  /* 123e09f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e09f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e09fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e09ff push eax */
  push32((uint32_t)(EAX));
  /* 123e0a00 call 0x123df270 */
  push32(0x123e0a05u); f_123df270();
  /* 123e0a05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e0a08:;
  /* 123e0a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0a0b pop edi */
  EDI = (pop32());
  /* 123e0a0c pop esi */
  ESI = (pop32());
  /* 123e0a0d pop ebx */
  EBX = (pop32());
  /* 123e0a0e mov esp, ebp */
  ESP = (EBP);
  /* 123e0a10 pop ebp */
  EBP = (pop32());
  /* 123e0a11 ret  */
  ESPCHK(0x123e0990u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a20 @ 0x123e0a20 (190 bytes, 67 insns) */
void f_123e0a20(void) {
  FTRACE(0x123e0a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e0a20 push ebp */
  push32((uint32_t)(EBP));
  /* 123e0a21 mov ebp, esp */
  EBP = (ESP);
  /* 123e0a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e0a26 push ebx */
  push32((uint32_t)(EBX));
  /* 123e0a27 push esi */
  push32((uint32_t)(ESI));
  /* 123e0a28 push edi */
  push32((uint32_t)(EDI));
  /* 123e0a29 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123e0a30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0a33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123e0a36:;
  /* 123e0a36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0a3a jne 0x123e0a5a */
  if (!C.zf) goto L_123e0a5a;
  /* 123e0a3c push 0x123fe518 */
  push32((uint32_t)(0x123fe518u));
  /* 123e0a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e0a43 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 123e0a45 push 0x123fe66c */
  push32((uint32_t)(0x123fe66cu));
  /* 123e0a4a push 2 */
  push32((uint32_t)(0x2u));
  /* 123e0a4c call 0x123d54b0 */
  push32(0x123e0a51u); f_123d54b0();
  /* 123e0a51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0a54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0a57 jne 0x123e0a5a */
  if (!C.zf) goto L_123e0a5a;
  /* 123e0a59 int3  */
  x86_unimpl("int3 @ 0x123e0a59");
L_123e0a5a:;
  /* 123e0a5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0a5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e0a5e jne 0x123e0a36 */
  if (!C.zf) goto L_123e0a36;
  /* 123e0a60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0a63 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 123e0a66 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 123e0a6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0a6d je 0x123e0aca */
  if (C.zf) goto L_123e0aca;
  /* 123e0a6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0a72 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0a73 call 0x123dfd20 */
  push32(0x123e0a78u); f_123dfd20();
  /* 123e0a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0a7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e0a7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0a81 push edx */
  push32((uint32_t)(EDX));
  /* 123e0a82 call 0x123e30a0 */
  push32(0x123e0a87u); f_123e30a0();
  /* 123e0a87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0a8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0a8d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123e0a90 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0a91 call 0x123e2f70 */
  push32(0x123e0a96u); f_123e2f70();
  /* 123e0a96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0a9b jge 0x123e0aa6 */
  if ((C.sf==C.of)) goto L_123e0aa6;
  /* 123e0a9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123e0aa4 jmp 0x123e0aca */
  goto L_123e0aca;
L_123e0aa6:;
  /* 123e0aa6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0aa9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0aad je 0x123e0aca */
  if (C.zf) goto L_123e0aca;
  /* 123e0aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 123e0ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0ab4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123e0ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0ab8 call 0x123d6e80 */
  push32(0x123e0abdu); f_123d6e80();
  /* 123e0abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0ac0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0ac3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_123e0aca:;
  /* 123e0aca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e0acd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 123e0ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0ad7 pop edi */
  EDI = (pop32());
  /* 123e0ad8 pop esi */
  ESI = (pop32());
  /* 123e0ad9 pop ebx */
  EBX = (pop32());
  /* 123e0ada mov esp, ebp */
  ESP = (EBP);
  /* 123e0adc pop ebp */
  EBP = (pop32());
  /* 123e0add ret  */
  ESPCHK(0x123e0a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ae0 @ 0x123e0ae0 (210 bytes, 63 insns) */
void f_123e0ae0(void) {
  FTRACE(0x123e0ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e0ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e0ae1 mov ebp, esp */
  EBP = (ESP);
  /* 123e0ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0ae7 cmp eax, dword ptr [0x124042dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124042dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0aed jae 0x123e0b11 */
  if (!C.cf) goto L_123e0b11;
  /* 123e0aef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0af2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123e0af5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0af8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123e0afb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e0afe mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123e0b05 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 123e0b0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123e0b0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e0b0f jne 0x123e0b24 */
  if (!C.zf) goto L_123e0b24;
L_123e0b11:;
  /* 123e0b11 call 0x123de2c0 */
  push32(0x123e0b16u); f_123de2c0();
  /* 123e0b16 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123e0b1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e0b1f jmp 0x123e0bae */
  goto L_123e0bae;
L_123e0b24:;
  /* 123e0b24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0b27 push edx */
  push32((uint32_t)(EDX));
  /* 123e0b28 call 0x123dfae0 */
  push32(0x123e0b2du); f_123dfae0();
  /* 123e0b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0b30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0b33 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123e0b36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0b39 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123e0b3c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e0b3f mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123e0b46 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 123e0b4b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 123e0b4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0b50 je 0x123e0b8d */
  if (C.zf) goto L_123e0b8d;
  /* 123e0b52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0b55 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0b56 call 0x123df960 */
  push32(0x123e0b5bu); f_123df960();
  /* 123e0b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0b5e push eax */
  push32((uint32_t)(EAX));
  /* 123e0b5f call dword ptr [0x124052bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052bc))), 0x123e0b65u);
  /* 123e0b65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0b67 jne 0x123e0b74 */
  if (!C.zf) goto L_123e0b74;
  /* 123e0b69 call dword ptr [0x1240528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240528c))), 0x123e0b6fu);
  /* 123e0b6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e0b72 jmp 0x123e0b7b */
  goto L_123e0b7b;
L_123e0b74:;
  /* 123e0b74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123e0b7b:;
  /* 123e0b7b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0b7f jne 0x123e0b83 */
  if (!C.zf) goto L_123e0b83;
  /* 123e0b81 jmp 0x123e0b9f */
  goto L_123e0b9f;
L_123e0b83:;
  /* 123e0b83 call 0x123de2d0 */
  push32(0x123e0b88u); f_123de2d0();
  /* 123e0b88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0b8b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123e0b8d:;
  /* 123e0b8d call 0x123de2c0 */
  push32(0x123e0b92u); f_123de2c0();
  /* 123e0b92 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123e0b98 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123e0b9f:;
  /* 123e0b9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0ba2 push eax */
  push32((uint32_t)(EAX));
  /* 123e0ba3 call 0x123dfb70 */
  push32(0x123e0ba8u); f_123dfb70();
  /* 123e0ba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0bab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123e0bae:;
  /* 123e0bae mov esp, ebp */
  ESP = (EBP);
  /* 123e0bb0 pop ebp */
  EBP = (pop32());
  /* 123e0bb1 ret  */
  ESPCHK(0x123e0ae0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x123e0bc0 (219 bytes, 64 insns) */
void f_123e0bc0(void) {
  FTRACE(0x123e0bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e0bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e0bc1 mov ebp, esp */
  EBP = (ESP);
  /* 123e0bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0bc4 cmp dword ptr [0x124029dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0bcb je 0x123e0c61 */
  if (C.zf) goto L_123e0c61;
  /* 123e0bd1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 123e0bd3 push 0x123fe688 */
  push32((uint32_t)(0x123fe688u));
  /* 123e0bd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e0bda push 0xac */
  push32((uint32_t)(0xacu));
  /* 123e0bdf push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0be1 call 0x123d6800 */
  push32(0x123e0be6u); f_123d6800();
  /* 123e0be6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0be9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e0bec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0bf0 jne 0x123e0bfc */
  if (!C.zf) goto L_123e0bfc;
  /* 123e0bf2 mov eax, 1 */
  EAX = (0x1u);
  /* 123e0bf7 jmp 0x123e0c97 */
  goto L_123e0c97;
L_123e0bfc:;
  /* 123e0bfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0bff push eax */
  push32((uint32_t)(EAX));
  /* 123e0c00 call 0x123e0ca0 */
  push32(0x123e0c05u); f_123e0ca0();
  /* 123e0c05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0c08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e0c0a je 0x123e0c2d */
  if (C.zf) goto L_123e0c2d;
  /* 123e0c0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0c0f push ecx */
  push32((uint32_t)(ECX));
  /* 123e0c10 call 0x123e1230 */
  push32(0x123e0c15u); f_123e1230();
  /* 123e0c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0c18 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e0c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0c1d push edx */
  push32((uint32_t)(EDX));
  /* 123e0c1e call 0x123d6e80 */
  push32(0x123e0c23u); f_123d6e80();
  /* 123e0c23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0c26 mov eax, 1 */
  EAX = (0x1u);
  /* 123e0c2b jmp 0x123e0c97 */
  goto L_123e0c97;
L_123e0c2d:;
  /* 123e0c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0c30 mov dword ptr [0x12401c98], eax */
  w32((uint32_t)(0x12401c98), (EAX));
  /* 123e0c35 mov ecx, dword ptr [0x124029fc] */
  ECX = (r32((uint32_t)(0x124029fc)));
  /* 123e0c3b push ecx */
  push32((uint32_t)(ECX));
  /* 123e0c3c call 0x123e1230 */
  push32(0x123e0c41u); f_123e1230();
  /* 123e0c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0c44 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e0c46 mov edx, dword ptr [0x124029fc] */
  EDX = (r32((uint32_t)(0x124029fc)));
  /* 123e0c4c push edx */
  push32((uint32_t)(EDX));
  /* 123e0c4d call 0x123d6e80 */
  push32(0x123e0c52u); f_123d6e80();
  /* 123e0c52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0c55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0c58 mov dword ptr [0x124029fc], eax */
  w32((uint32_t)(0x124029fc), (EAX));
  /* 123e0c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e0c5f jmp 0x123e0c97 */
  goto L_123e0c97;
L_123e0c61:;
  /* 123e0c61 mov dword ptr [0x12401c98], 0x12401ca0 */
  w32((uint32_t)(0x12401c98), (0x12401ca0u));
  /* 123e0c6b mov ecx, dword ptr [0x124029fc] */
  ECX = (r32((uint32_t)(0x124029fc)));
  /* 123e0c71 push ecx */
  push32((uint32_t)(ECX));
  /* 123e0c72 call 0x123e1230 */
  push32(0x123e0c77u); f_123e1230();
  /* 123e0c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0c7a push 2 */
  push32((uint32_t)(0x2u));
  /* 123e0c7c mov edx, dword ptr [0x124029fc] */
  EDX = (r32((uint32_t)(0x124029fc)));
  /* 123e0c82 push edx */
  push32((uint32_t)(EDX));
  /* 123e0c83 call 0x123d6e80 */
  push32(0x123e0c88u); f_123d6e80();
  /* 123e0c88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0c8b mov dword ptr [0x124029fc], 0 */
  w32((uint32_t)(0x124029fc), (0x0u));
  /* 123e0c95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e0c97:;
  /* 123e0c97 mov esp, ebp */
  ESP = (EBP);
  /* 123e0c99 pop ebp */
  EBP = (pop32());
  /* 123e0c9a ret  */
  ESPCHK(0x123e0bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ca0 @ 0x123e0ca0 (1423 bytes, 533 insns) */
void f_123e0ca0(void) {
  FTRACE(0x123e0ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e0ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e0ca1 mov ebp, esp */
  EBP = (ESP);
  /* 123e0ca3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e0ca6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123e0cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e0caf mov ax, word ptr [0x12402a36] */
  AX = (r16((uint32_t)(0x12402a36)));
  /* 123e0cb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e0cb8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0cba mov cx, word ptr [0x12402a38] */
  CX = (r16((uint32_t)(0x12402a38)));
  /* 123e0cc1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e0cc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e0cc8 jne 0x123e0cd2 */
  if (!C.zf) goto L_123e0cd2;
  /* 123e0cca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e0ccd jmp 0x123e122b */
  goto L_123e122b;
L_123e0cd2:;
  /* 123e0cd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0cd5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0cd8 push edx */
  push32((uint32_t)(EDX));
  /* 123e0cd9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 123e0cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0cde push eax */
  push32((uint32_t)(EAX));
  /* 123e0cdf push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0ce1 call 0x123e45b0 */
  push32(0x123e0ce6u); f_123e45b0();
  /* 123e0ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0ce9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0cec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0cee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0cf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0cf4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0cf7 push edx */
  push32((uint32_t)(EDX));
  /* 123e0cf8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 123e0cfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0cfd push eax */
  push32((uint32_t)(EAX));
  /* 123e0cfe push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0d00 call 0x123e45b0 */
  push32(0x123e0d05u); f_123e45b0();
  /* 123e0d05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0d08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0d0b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0d0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0d10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0d13 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0d16 push edx */
  push32((uint32_t)(EDX));
  /* 123e0d17 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 123e0d19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0d1c push eax */
  push32((uint32_t)(EAX));
  /* 123e0d1d push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0d1f call 0x123e45b0 */
  push32(0x123e0d24u); f_123e45b0();
  /* 123e0d24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0d27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0d2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0d2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0d2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0d32 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0d35 push edx */
  push32((uint32_t)(EDX));
  /* 123e0d36 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 123e0d38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0d3b push eax */
  push32((uint32_t)(EAX));
  /* 123e0d3c push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0d3e call 0x123e45b0 */
  push32(0x123e0d43u); f_123e45b0();
  /* 123e0d43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0d46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0d49 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0d4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0d4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0d51 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0d54 push edx */
  push32((uint32_t)(EDX));
  /* 123e0d55 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 123e0d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0d5a push eax */
  push32((uint32_t)(EAX));
  /* 123e0d5b push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0d5d call 0x123e45b0 */
  push32(0x123e0d62u); f_123e45b0();
  /* 123e0d62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0d65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0d68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0d6a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0d6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0d70 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0d73 push edx */
  push32((uint32_t)(EDX));
  /* 123e0d74 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 123e0d76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0d79 push eax */
  push32((uint32_t)(EAX));
  /* 123e0d7a push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0d7c call 0x123e45b0 */
  push32(0x123e0d81u); f_123e45b0();
  /* 123e0d81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0d84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0d87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0d89 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0d8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0d8f push edx */
  push32((uint32_t)(EDX));
  /* 123e0d90 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 123e0d92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0d95 push eax */
  push32((uint32_t)(EAX));
  /* 123e0d96 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0d98 call 0x123e45b0 */
  push32(0x123e0d9du); f_123e45b0();
  /* 123e0d9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0da0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0da3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0da5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0da8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0dab add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0dae push edx */
  push32((uint32_t)(EDX));
  /* 123e0daf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 123e0db1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0db4 push eax */
  push32((uint32_t)(EAX));
  /* 123e0db5 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0db7 call 0x123e45b0 */
  push32(0x123e0dbcu); f_123e45b0();
  /* 123e0dbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0dbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0dc2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0dc4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0dc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0dca add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0dcd push edx */
  push32((uint32_t)(EDX));
  /* 123e0dce push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 123e0dd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0dd3 push eax */
  push32((uint32_t)(EAX));
  /* 123e0dd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0dd6 call 0x123e45b0 */
  push32(0x123e0ddbu); f_123e45b0();
  /* 123e0ddb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0dde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0de1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0de3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0de6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0de9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0dec push edx */
  push32((uint32_t)(EDX));
  /* 123e0ded push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 123e0def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0df2 push eax */
  push32((uint32_t)(EAX));
  /* 123e0df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0df5 call 0x123e45b0 */
  push32(0x123e0dfau); f_123e45b0();
  /* 123e0dfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0dfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0e00 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0e02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0e05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0e08 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0e0b push edx */
  push32((uint32_t)(EDX));
  /* 123e0e0c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 123e0e0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0e11 push eax */
  push32((uint32_t)(EAX));
  /* 123e0e12 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0e14 call 0x123e45b0 */
  push32(0x123e0e19u); f_123e45b0();
  /* 123e0e19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0e1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0e1f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0e21 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0e24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0e27 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0e2a push edx */
  push32((uint32_t)(EDX));
  /* 123e0e2b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 123e0e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0e30 push eax */
  push32((uint32_t)(EAX));
  /* 123e0e31 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0e33 call 0x123e45b0 */
  push32(0x123e0e38u); f_123e45b0();
  /* 123e0e38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0e3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0e3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0e40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0e43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0e46 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0e49 push edx */
  push32((uint32_t)(EDX));
  /* 123e0e4a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 123e0e4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0e4f push eax */
  push32((uint32_t)(EAX));
  /* 123e0e50 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0e52 call 0x123e45b0 */
  push32(0x123e0e57u); f_123e45b0();
  /* 123e0e57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0e5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0e5d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0e5f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0e62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0e65 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0e68 push edx */
  push32((uint32_t)(EDX));
  /* 123e0e69 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 123e0e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0e6e push eax */
  push32((uint32_t)(EAX));
  /* 123e0e6f push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0e71 call 0x123e45b0 */
  push32(0x123e0e76u); f_123e45b0();
  /* 123e0e76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0e79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0e7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0e7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0e81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0e84 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0e87 push edx */
  push32((uint32_t)(EDX));
  /* 123e0e88 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 123e0e8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0e8d push eax */
  push32((uint32_t)(EAX));
  /* 123e0e8e push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0e90 call 0x123e45b0 */
  push32(0x123e0e95u); f_123e45b0();
  /* 123e0e95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0e98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0e9b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0e9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0ea0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0ea3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0ea6 push edx */
  push32((uint32_t)(EDX));
  /* 123e0ea7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 123e0ea9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0eac push eax */
  push32((uint32_t)(EAX));
  /* 123e0ead push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0eaf call 0x123e45b0 */
  push32(0x123e0eb4u); f_123e45b0();
  /* 123e0eb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0eb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0eba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0ebc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0ebf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0ec2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0ec5 push edx */
  push32((uint32_t)(EDX));
  /* 123e0ec6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 123e0ec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0ecb push eax */
  push32((uint32_t)(EAX));
  /* 123e0ecc push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0ece call 0x123e45b0 */
  push32(0x123e0ed3u); f_123e45b0();
  /* 123e0ed3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0ed6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0ed9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0edb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0ee1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0ee4 push edx */
  push32((uint32_t)(EDX));
  /* 123e0ee5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 123e0ee7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0eea push eax */
  push32((uint32_t)(EAX));
  /* 123e0eeb push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0eed call 0x123e45b0 */
  push32(0x123e0ef2u); f_123e45b0();
  /* 123e0ef2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0ef5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0ef8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0efa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0efd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0f00 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f03 push edx */
  push32((uint32_t)(EDX));
  /* 123e0f04 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 123e0f06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0f09 push eax */
  push32((uint32_t)(EAX));
  /* 123e0f0a push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0f0c call 0x123e45b0 */
  push32(0x123e0f11u); f_123e45b0();
  /* 123e0f11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0f17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0f19 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0f1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0f1f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f22 push edx */
  push32((uint32_t)(EDX));
  /* 123e0f23 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 123e0f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0f28 push eax */
  push32((uint32_t)(EAX));
  /* 123e0f29 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0f2b call 0x123e45b0 */
  push32(0x123e0f30u); f_123e45b0();
  /* 123e0f30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0f36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0f38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0f3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0f3e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f41 push edx */
  push32((uint32_t)(EDX));
  /* 123e0f42 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 123e0f44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0f47 push eax */
  push32((uint32_t)(EAX));
  /* 123e0f48 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0f4a call 0x123e45b0 */
  push32(0x123e0f4fu); f_123e45b0();
  /* 123e0f4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f52 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0f55 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0f57 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0f5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0f5d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f60 push edx */
  push32((uint32_t)(EDX));
  /* 123e0f61 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 123e0f63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0f66 push eax */
  push32((uint32_t)(EAX));
  /* 123e0f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0f69 call 0x123e45b0 */
  push32(0x123e0f6eu); f_123e45b0();
  /* 123e0f6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0f74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0f76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0f79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0f7c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f7f push edx */
  push32((uint32_t)(EDX));
  /* 123e0f80 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 123e0f82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0f85 push eax */
  push32((uint32_t)(EAX));
  /* 123e0f86 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0f88 call 0x123e45b0 */
  push32(0x123e0f8du); f_123e45b0();
  /* 123e0f8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0f93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0f95 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0f98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0f9b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0f9e push edx */
  push32((uint32_t)(EDX));
  /* 123e0f9f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 123e0fa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0fa4 push eax */
  push32((uint32_t)(EAX));
  /* 123e0fa5 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0fa7 call 0x123e45b0 */
  push32(0x123e0facu); f_123e45b0();
  /* 123e0fac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0faf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0fb2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0fb4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0fb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0fba add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0fbd push edx */
  push32((uint32_t)(EDX));
  /* 123e0fbe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 123e0fc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0fc3 push eax */
  push32((uint32_t)(EAX));
  /* 123e0fc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0fc6 call 0x123e45b0 */
  push32(0x123e0fcbu); f_123e45b0();
  /* 123e0fcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0fce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0fd1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0fd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0fd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0fd9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0fdc push edx */
  push32((uint32_t)(EDX));
  /* 123e0fdd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 123e0fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e0fe2 push eax */
  push32((uint32_t)(EAX));
  /* 123e0fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e0fe5 call 0x123e45b0 */
  push32(0x123e0feau); f_123e45b0();
  /* 123e0fea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0fed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e0ff0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e0ff2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e0ff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e0ff8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e0ffb push edx */
  push32((uint32_t)(EDX));
  /* 123e0ffc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 123e0ffe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1001 push eax */
  push32((uint32_t)(EAX));
  /* 123e1002 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1004 call 0x123e45b0 */
  push32(0x123e1009u); f_123e45b0();
  /* 123e1009 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e100c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e100f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1011 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e1014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1017 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e101a push edx */
  push32((uint32_t)(EDX));
  /* 123e101b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 123e101d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1020 push eax */
  push32((uint32_t)(EAX));
  /* 123e1021 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1023 call 0x123e45b0 */
  push32(0x123e1028u); f_123e45b0();
  /* 123e1028 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e102b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e102e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1030 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e1033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1036 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1039 push edx */
  push32((uint32_t)(EDX));
  /* 123e103a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 123e103c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e103f push eax */
  push32((uint32_t)(EAX));
  /* 123e1040 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1042 call 0x123e45b0 */
  push32(0x123e1047u); f_123e45b0();
  /* 123e1047 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e104a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e104d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e104f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e1052 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1055 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1058 push edx */
  push32((uint32_t)(EDX));
  /* 123e1059 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 123e105b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e105e push eax */
  push32((uint32_t)(EAX));
  /* 123e105f push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1061 call 0x123e45b0 */
  push32(0x123e1066u); f_123e45b0();
  /* 123e1066 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1069 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e106c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e106e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e1071 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1074 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1077 push edx */
  push32((uint32_t)(EDX));
  /* 123e1078 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 123e107a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e107d push eax */
  push32((uint32_t)(EAX));
  /* 123e107e push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1080 call 0x123e45b0 */
  push32(0x123e1085u); f_123e45b0();
  /* 123e1085 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1088 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e108b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e108d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e1090 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1093 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1096 push edx */
  push32((uint32_t)(EDX));
  /* 123e1097 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 123e1099 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e109c push eax */
  push32((uint32_t)(EAX));
  /* 123e109d push 1 */
  push32((uint32_t)(0x1u));
  /* 123e109f call 0x123e45b0 */
  push32(0x123e10a4u); f_123e45b0();
  /* 123e10a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e10a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e10aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e10ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e10af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e10b2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e10b8 push edx */
  push32((uint32_t)(EDX));
  /* 123e10b9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 123e10bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e10be push eax */
  push32((uint32_t)(EAX));
  /* 123e10bf push 1 */
  push32((uint32_t)(0x1u));
  /* 123e10c1 call 0x123e45b0 */
  push32(0x123e10c6u); f_123e45b0();
  /* 123e10c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e10c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e10cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e10ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e10d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e10d4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e10da push edx */
  push32((uint32_t)(EDX));
  /* 123e10db push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 123e10dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e10e0 push eax */
  push32((uint32_t)(EAX));
  /* 123e10e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e10e3 call 0x123e45b0 */
  push32(0x123e10e8u); f_123e45b0();
  /* 123e10e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e10eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e10ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e10f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e10f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e10f6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e10fc push edx */
  push32((uint32_t)(EDX));
  /* 123e10fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 123e10ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1102 push eax */
  push32((uint32_t)(EAX));
  /* 123e1103 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1105 call 0x123e45b0 */
  push32(0x123e110au); f_123e45b0();
  /* 123e110a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e110d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e1110 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1112 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e1115 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1118 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e111e push edx */
  push32((uint32_t)(EDX));
  /* 123e111f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123e1121 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1124 push eax */
  push32((uint32_t)(EAX));
  /* 123e1125 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1127 call 0x123e45b0 */
  push32(0x123e112cu); f_123e45b0();
  /* 123e112c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e112f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e1132 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1134 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e1137 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e113a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1140 push edx */
  push32((uint32_t)(EDX));
  /* 123e1141 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 123e1143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1146 push eax */
  push32((uint32_t)(EAX));
  /* 123e1147 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1149 call 0x123e45b0 */
  push32(0x123e114eu); f_123e45b0();
  /* 123e114e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1151 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e1154 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1156 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e1159 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e115c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1162 push edx */
  push32((uint32_t)(EDX));
  /* 123e1163 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 123e1165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1168 push eax */
  push32((uint32_t)(EAX));
  /* 123e1169 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e116b call 0x123e45b0 */
  push32(0x123e1170u); f_123e45b0();
  /* 123e1170 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1173 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e1176 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1178 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e117b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e117e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1184 push edx */
  push32((uint32_t)(EDX));
  /* 123e1185 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 123e1187 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e118a push eax */
  push32((uint32_t)(EAX));
  /* 123e118b push 1 */
  push32((uint32_t)(0x1u));
  /* 123e118d call 0x123e45b0 */
  push32(0x123e1192u); f_123e45b0();
  /* 123e1192 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1195 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e1198 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e119a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e119d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e11a0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e11a6 push edx */
  push32((uint32_t)(EDX));
  /* 123e11a7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 123e11a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e11ac push eax */
  push32((uint32_t)(EAX));
  /* 123e11ad push 1 */
  push32((uint32_t)(0x1u));
  /* 123e11af call 0x123e45b0 */
  push32(0x123e11b4u); f_123e45b0();
  /* 123e11b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e11b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e11ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e11bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e11bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e11c2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e11c8 push edx */
  push32((uint32_t)(EDX));
  /* 123e11c9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 123e11cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e11ce push eax */
  push32((uint32_t)(EAX));
  /* 123e11cf push 1 */
  push32((uint32_t)(0x1u));
  /* 123e11d1 call 0x123e45b0 */
  push32(0x123e11d6u); f_123e45b0();
  /* 123e11d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e11d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e11dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e11de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e11e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e11e4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e11ea push edx */
  push32((uint32_t)(EDX));
  /* 123e11eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 123e11ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e11f0 push eax */
  push32((uint32_t)(EAX));
  /* 123e11f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e11f3 call 0x123e45b0 */
  push32(0x123e11f8u); f_123e45b0();
  /* 123e11f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e11fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e11fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1200 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e1203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1206 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e120c push edx */
  push32((uint32_t)(EDX));
  /* 123e120d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 123e1212 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1215 push eax */
  push32((uint32_t)(EAX));
  /* 123e1216 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1218 call 0x123e45b0 */
  push32(0x123e121du); f_123e45b0();
  /* 123e121d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1220 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e1223 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1225 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123e1228 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_123e122b:;
  /* 123e122b mov esp, ebp */
  ESP = (EBP);
  /* 123e122d pop ebp */
  EBP = (pop32());
  /* 123e122e ret  */
  ESPCHK(0x123e0ca0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x123e1230 (779 bytes, 265 insns) */
void f_123e1230(void) {
  FTRACE(0x123e1230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e1230 push ebp */
  push32((uint32_t)(EBP));
  /* 123e1231 mov ebp, esp */
  EBP = (ESP);
  /* 123e1233 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1237 jne 0x123e123e */
  if (!C.zf) goto L_123e123e;
  /* 123e1239 jmp 0x123e1539 */
  goto L_123e1539;
L_123e123e:;
  /* 123e123e push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1243 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123e1246 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1247 call 0x123d6e80 */
  push32(0x123e124cu); f_123d6e80();
  /* 123e124c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e124f push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1254 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123e1257 push eax */
  push32((uint32_t)(EAX));
  /* 123e1258 call 0x123d6e80 */
  push32(0x123e125du); f_123d6e80();
  /* 123e125d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1260 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1262 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1265 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123e1268 push edx */
  push32((uint32_t)(EDX));
  /* 123e1269 call 0x123d6e80 */
  push32(0x123e126eu); f_123d6e80();
  /* 123e126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1271 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1276 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123e1279 push ecx */
  push32((uint32_t)(ECX));
  /* 123e127a call 0x123d6e80 */
  push32(0x123e127fu); f_123d6e80();
  /* 123e127f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1282 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1287 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123e128a push eax */
  push32((uint32_t)(EAX));
  /* 123e128b call 0x123d6e80 */
  push32(0x123e1290u); f_123d6e80();
  /* 123e1290 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1293 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1295 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1298 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123e129b push edx */
  push32((uint32_t)(EDX));
  /* 123e129c call 0x123d6e80 */
  push32(0x123e12a1u); f_123d6e80();
  /* 123e12a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e12a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e12a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e12a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e12ab push ecx */
  push32((uint32_t)(ECX));
  /* 123e12ac call 0x123d6e80 */
  push32(0x123e12b1u); f_123d6e80();
  /* 123e12b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e12b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e12b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e12b9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 123e12bc push eax */
  push32((uint32_t)(EAX));
  /* 123e12bd call 0x123d6e80 */
  push32(0x123e12c2u); f_123d6e80();
  /* 123e12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e12c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e12c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e12ca mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 123e12cd push edx */
  push32((uint32_t)(EDX));
  /* 123e12ce call 0x123d6e80 */
  push32(0x123e12d3u); f_123d6e80();
  /* 123e12d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e12d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e12d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e12db mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 123e12de push ecx */
  push32((uint32_t)(ECX));
  /* 123e12df call 0x123d6e80 */
  push32(0x123e12e4u); f_123d6e80();
  /* 123e12e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e12e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e12e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e12ec mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 123e12ef push eax */
  push32((uint32_t)(EAX));
  /* 123e12f0 call 0x123d6e80 */
  push32(0x123e12f5u); f_123d6e80();
  /* 123e12f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e12f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e12fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e12fd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 123e1300 push edx */
  push32((uint32_t)(EDX));
  /* 123e1301 call 0x123d6e80 */
  push32(0x123e1306u); f_123d6e80();
  /* 123e1306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1309 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e130b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e130e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 123e1311 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1312 call 0x123d6e80 */
  push32(0x123e1317u); f_123d6e80();
  /* 123e1317 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e131a push 2 */
  push32((uint32_t)(0x2u));
  /* 123e131c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e131f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123e1322 push eax */
  push32((uint32_t)(EAX));
  /* 123e1323 call 0x123d6e80 */
  push32(0x123e1328u); f_123d6e80();
  /* 123e1328 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e132b push 2 */
  push32((uint32_t)(0x2u));
  /* 123e132d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1330 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 123e1333 push edx */
  push32((uint32_t)(EDX));
  /* 123e1334 call 0x123d6e80 */
  push32(0x123e1339u); f_123d6e80();
  /* 123e1339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e133c push 2 */
  push32((uint32_t)(0x2u));
  /* 123e133e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1341 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 123e1344 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1345 call 0x123d6e80 */
  push32(0x123e134au); f_123d6e80();
  /* 123e134a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e134d push 2 */
  push32((uint32_t)(0x2u));
  /* 123e134f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1352 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 123e1355 push eax */
  push32((uint32_t)(EAX));
  /* 123e1356 call 0x123d6e80 */
  push32(0x123e135bu); f_123d6e80();
  /* 123e135b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e135e push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1360 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1363 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 123e1366 push edx */
  push32((uint32_t)(EDX));
  /* 123e1367 call 0x123d6e80 */
  push32(0x123e136cu); f_123d6e80();
  /* 123e136c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e136f push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1371 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1374 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 123e1377 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1378 call 0x123d6e80 */
  push32(0x123e137du); f_123d6e80();
  /* 123e137d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1380 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1382 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1385 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 123e1388 push eax */
  push32((uint32_t)(EAX));
  /* 123e1389 call 0x123d6e80 */
  push32(0x123e138eu); f_123d6e80();
  /* 123e138e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1391 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1393 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1396 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 123e1399 push edx */
  push32((uint32_t)(EDX));
  /* 123e139a call 0x123d6e80 */
  push32(0x123e139fu); f_123d6e80();
  /* 123e139f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e13a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e13a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e13a7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 123e13aa push ecx */
  push32((uint32_t)(ECX));
  /* 123e13ab call 0x123d6e80 */
  push32(0x123e13b0u); f_123d6e80();
  /* 123e13b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e13b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e13b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e13b8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 123e13bb push eax */
  push32((uint32_t)(EAX));
  /* 123e13bc call 0x123d6e80 */
  push32(0x123e13c1u); f_123d6e80();
  /* 123e13c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e13c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e13c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e13c9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 123e13cc push edx */
  push32((uint32_t)(EDX));
  /* 123e13cd call 0x123d6e80 */
  push32(0x123e13d2u); f_123d6e80();
  /* 123e13d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e13d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e13d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e13da mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 123e13dd push ecx */
  push32((uint32_t)(ECX));
  /* 123e13de call 0x123d6e80 */
  push32(0x123e13e3u); f_123d6e80();
  /* 123e13e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e13e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e13e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e13eb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 123e13ee push eax */
  push32((uint32_t)(EAX));
  /* 123e13ef call 0x123d6e80 */
  push32(0x123e13f4u); f_123d6e80();
  /* 123e13f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e13f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e13f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e13fc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 123e13ff push edx */
  push32((uint32_t)(EDX));
  /* 123e1400 call 0x123d6e80 */
  push32(0x123e1405u); f_123d6e80();
  /* 123e1405 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1408 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e140a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e140d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 123e1410 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1411 call 0x123d6e80 */
  push32(0x123e1416u); f_123d6e80();
  /* 123e1416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1419 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e141b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e141e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 123e1421 push eax */
  push32((uint32_t)(EAX));
  /* 123e1422 call 0x123d6e80 */
  push32(0x123e1427u); f_123d6e80();
  /* 123e1427 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e142a push 2 */
  push32((uint32_t)(0x2u));
  /* 123e142c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e142f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 123e1432 push edx */
  push32((uint32_t)(EDX));
  /* 123e1433 call 0x123d6e80 */
  push32(0x123e1438u); f_123d6e80();
  /* 123e1438 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e143b push 2 */
  push32((uint32_t)(0x2u));
  /* 123e143d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1440 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 123e1443 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1444 call 0x123d6e80 */
  push32(0x123e1449u); f_123d6e80();
  /* 123e1449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e144c push 2 */
  push32((uint32_t)(0x2u));
  /* 123e144e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1451 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 123e1454 push eax */
  push32((uint32_t)(EAX));
  /* 123e1455 call 0x123d6e80 */
  push32(0x123e145au); f_123d6e80();
  /* 123e145a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e145d push 2 */
  push32((uint32_t)(0x2u));
  /* 123e145f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1462 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 123e1468 push edx */
  push32((uint32_t)(EDX));
  /* 123e1469 call 0x123d6e80 */
  push32(0x123e146eu); f_123d6e80();
  /* 123e146e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1471 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1476 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 123e147c push ecx */
  push32((uint32_t)(ECX));
  /* 123e147d call 0x123d6e80 */
  push32(0x123e1482u); f_123d6e80();
  /* 123e1482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1485 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e148a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 123e1490 push eax */
  push32((uint32_t)(EAX));
  /* 123e1491 call 0x123d6e80 */
  push32(0x123e1496u); f_123d6e80();
  /* 123e1496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1499 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e149b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e149e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 123e14a4 push edx */
  push32((uint32_t)(EDX));
  /* 123e14a5 call 0x123d6e80 */
  push32(0x123e14aau); f_123d6e80();
  /* 123e14aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e14ad push 2 */
  push32((uint32_t)(0x2u));
  /* 123e14af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e14b2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 123e14b8 push ecx */
  push32((uint32_t)(ECX));
  /* 123e14b9 call 0x123d6e80 */
  push32(0x123e14beu); f_123d6e80();
  /* 123e14be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e14c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e14c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e14c6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 123e14cc push eax */
  push32((uint32_t)(EAX));
  /* 123e14cd call 0x123d6e80 */
  push32(0x123e14d2u); f_123d6e80();
  /* 123e14d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e14d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e14d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e14da mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 123e14e0 push edx */
  push32((uint32_t)(EDX));
  /* 123e14e1 call 0x123d6e80 */
  push32(0x123e14e6u); f_123d6e80();
  /* 123e14e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e14e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e14eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e14ee mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 123e14f4 push ecx */
  push32((uint32_t)(ECX));
  /* 123e14f5 call 0x123d6e80 */
  push32(0x123e14fau); f_123d6e80();
  /* 123e14fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e14fd push 2 */
  push32((uint32_t)(0x2u));
  /* 123e14ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1502 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 123e1508 push eax */
  push32((uint32_t)(EAX));
  /* 123e1509 call 0x123d6e80 */
  push32(0x123e150eu); f_123d6e80();
  /* 123e150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1511 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1513 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1516 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 123e151c push edx */
  push32((uint32_t)(EDX));
  /* 123e151d call 0x123d6e80 */
  push32(0x123e1522u); f_123d6e80();
  /* 123e1522 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1525 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1527 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e152a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 123e1530 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1531 call 0x123d6e80 */
  push32(0x123e1536u); f_123d6e80();
  /* 123e1536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e1539:;
  /* 123e1539 pop ebp */
  EBP = (pop32());
  /* 123e153a ret  */
  ESPCHK(0x123e1230u, _esp0);
  ESP += 4; return;
}

/* FUN_10011540 @ 0x123e1540 (678 bytes, 180 insns) */
void f_123e1540(void) {
  FTRACE(0x123e1540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e1540 push ebp */
  push32((uint32_t)(EBP));
  /* 123e1541 mov ebp, esp */
  EBP = (ESP);
  /* 123e1543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e1546 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123e154d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e154f mov ax, word ptr [0x12402a32] */
  AX = (r16((uint32_t)(0x12402a32)));
  /* 123e1555 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e1558 cmp dword ptr [0x124029d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e155f je 0x123e16ba */
  if (C.zf) goto L_123e16ba;
  /* 123e1565 push 0x12402a00 */
  push32((uint32_t)(0x12402a00u));
  /* 123e156a push 0xe */
  push32((uint32_t)(0xeu));
  /* 123e156c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e156f push ecx */
  push32((uint32_t)(ECX));
  /* 123e1570 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1572 call 0x123e45b0 */
  push32(0x123e1577u); f_123e45b0();
  /* 123e1577 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e157a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e157d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123e157f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e1582 push 0x12402a04 */
  push32((uint32_t)(0x12402a04u));
  /* 123e1587 push 0xf */
  push32((uint32_t)(0xfu));
  /* 123e1589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e158c push eax */
  push32((uint32_t)(EAX));
  /* 123e158d push 1 */
  push32((uint32_t)(0x1u));
  /* 123e158f call 0x123e45b0 */
  push32(0x123e1594u); f_123e45b0();
  /* 123e1594 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1597 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e159a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e159c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e159f push 0x12402a08 */
  push32((uint32_t)(0x12402a08u));
  /* 123e15a4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123e15a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e15a9 push edx */
  push32((uint32_t)(EDX));
  /* 123e15aa push 1 */
  push32((uint32_t)(0x1u));
  /* 123e15ac call 0x123e45b0 */
  push32(0x123e15b1u); f_123e45b0();
  /* 123e15b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e15b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e15b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e15b9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e15bc mov edx, dword ptr [0x12402a08] */
  EDX = (r32((uint32_t)(0x12402a08)));
  /* 123e15c2 push edx */
  push32((uint32_t)(EDX));
  /* 123e15c3 call 0x123e17f0 */
  push32(0x123e15c8u); f_123e17f0();
  /* 123e15c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e15cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e15cf je 0x123e1629 */
  if (C.zf) goto L_123e1629;
  /* 123e15d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e15d3 mov eax, dword ptr [0x12402a00] */
  EAX = (r32((uint32_t)(0x12402a00)));
  /* 123e15d8 push eax */
  push32((uint32_t)(EAX));
  /* 123e15d9 call 0x123d6e80 */
  push32(0x123e15deu); f_123d6e80();
  /* 123e15de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e15e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e15e3 mov ecx, dword ptr [0x12402a04] */
  ECX = (r32((uint32_t)(0x12402a04)));
  /* 123e15e9 push ecx */
  push32((uint32_t)(ECX));
  /* 123e15ea call 0x123d6e80 */
  push32(0x123e15efu); f_123d6e80();
  /* 123e15ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e15f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e15f4 mov edx, dword ptr [0x12402a08] */
  EDX = (r32((uint32_t)(0x12402a08)));
  /* 123e15fa push edx */
  push32((uint32_t)(EDX));
  /* 123e15fb call 0x123d6e80 */
  push32(0x123e1600u); f_123d6e80();
  /* 123e1600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1603 mov dword ptr [0x12402a00], 0 */
  w32((uint32_t)(0x12402a00), (0x0u));
  /* 123e160d mov dword ptr [0x12402a04], 0 */
  w32((uint32_t)(0x12402a04), (0x0u));
  /* 123e1617 mov dword ptr [0x12402a08], 0 */
  w32((uint32_t)(0x12402a08), (0x0u));
  /* 123e1621 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e1624 jmp 0x123e17e2 */
  goto L_123e17e2;
L_123e1629:;
  /* 123e1629 mov eax, dword ptr [0x12401d88] */
  EAX = (r32((uint32_t)(0x12401d88)));
  /* 123e162e cmp dword ptr [eax], 0x12401d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12401d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1634 je 0x123e1670 */
  if (C.zf) goto L_123e1670;
  /* 123e1636 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1638 mov ecx, dword ptr [0x12401d88] */
  ECX = (r32((uint32_t)(0x12401d88)));
  /* 123e163e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e1640 push edx */
  push32((uint32_t)(EDX));
  /* 123e1641 call 0x123d6e80 */
  push32(0x123e1646u); f_123d6e80();
  /* 123e1646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1649 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e164b mov eax, dword ptr [0x12401d88] */
  EAX = (r32((uint32_t)(0x12401d88)));
  /* 123e1650 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123e1653 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1654 call 0x123d6e80 */
  push32(0x123e1659u); f_123d6e80();
  /* 123e1659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e165c push 2 */
  push32((uint32_t)(0x2u));
  /* 123e165e mov edx, dword ptr [0x12401d88] */
  EDX = (r32((uint32_t)(0x12401d88)));
  /* 123e1664 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123e1667 push eax */
  push32((uint32_t)(EAX));
  /* 123e1668 call 0x123d6e80 */
  push32(0x123e166du); f_123d6e80();
  /* 123e166d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e1670:;
  /* 123e1670 mov ecx, dword ptr [0x12401d88] */
  ECX = (r32((uint32_t)(0x12401d88)));
  /* 123e1676 mov edx, dword ptr [0x12402a00] */
  EDX = (r32((uint32_t)(0x12402a00)));
  /* 123e167c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123e167e mov eax, dword ptr [0x12401d88] */
  EAX = (r32((uint32_t)(0x12401d88)));
  /* 123e1683 mov ecx, dword ptr [0x12402a04] */
  ECX = (r32((uint32_t)(0x12402a04)));
  /* 123e1689 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 123e168c mov edx, dword ptr [0x12401d88] */
  EDX = (r32((uint32_t)(0x12401d88)));
  /* 123e1692 mov eax, dword ptr [0x12402a08] */
  EAX = (r32((uint32_t)(0x12402a08)));
  /* 123e1697 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123e169a mov ecx, dword ptr [0x12401d88] */
  ECX = (r32((uint32_t)(0x12401d88)));
  /* 123e16a0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e16a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e16a4 mov byte ptr [0x12400ea8], al */
  w8((uint32_t)(0x12400ea8), (AL));
  /* 123e16a9 mov dword ptr [0x12400eac], 1 */
  w32((uint32_t)(0x12400eac), (0x1u));
  /* 123e16b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e16b5 jmp 0x123e17e2 */
  goto L_123e17e2;
L_123e16ba:;
  /* 123e16ba push 2 */
  push32((uint32_t)(0x2u));
  /* 123e16bc mov ecx, dword ptr [0x12402a00] */
  ECX = (r32((uint32_t)(0x12402a00)));
  /* 123e16c2 push ecx */
  push32((uint32_t)(ECX));
  /* 123e16c3 call 0x123d6e80 */
  push32(0x123e16c8u); f_123d6e80();
  /* 123e16c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e16cb push 2 */
  push32((uint32_t)(0x2u));
  /* 123e16cd mov edx, dword ptr [0x12402a04] */
  EDX = (r32((uint32_t)(0x12402a04)));
  /* 123e16d3 push edx */
  push32((uint32_t)(EDX));
  /* 123e16d4 call 0x123d6e80 */
  push32(0x123e16d9u); f_123d6e80();
  /* 123e16d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e16dc push 2 */
  push32((uint32_t)(0x2u));
  /* 123e16de mov eax, dword ptr [0x12402a08] */
  EAX = (r32((uint32_t)(0x12402a08)));
  /* 123e16e3 push eax */
  push32((uint32_t)(EAX));
  /* 123e16e4 call 0x123d6e80 */
  push32(0x123e16e9u); f_123d6e80();
  /* 123e16e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e16ec mov dword ptr [0x12402a00], 0 */
  w32((uint32_t)(0x12402a00), (0x0u));
  /* 123e16f6 mov dword ptr [0x12402a04], 0 */
  w32((uint32_t)(0x12402a04), (0x0u));
  /* 123e1700 mov dword ptr [0x12402a08], 0 */
  w32((uint32_t)(0x12402a08), (0x0u));
  /* 123e170a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 123e170f push 0x123fe694 */
  push32((uint32_t)(0x123fe694u));
  /* 123e1714 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1716 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1718 call 0x123d63f0 */
  push32(0x123e171du); f_123d63f0();
  /* 123e171d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1720 mov ecx, dword ptr [0x12401d88] */
  ECX = (r32((uint32_t)(0x12401d88)));
  /* 123e1726 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123e1728 mov edx, dword ptr [0x12401d88] */
  EDX = (r32((uint32_t)(0x12401d88)));
  /* 123e172e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1731 jne 0x123e173b */
  if (!C.zf) goto L_123e173b;
  /* 123e1733 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e1736 jmp 0x123e17e2 */
  goto L_123e17e2;
L_123e173b:;
  /* 123e173b push 0x123fe664 */
  push32((uint32_t)(0x123fe664u));
  /* 123e1740 mov eax, dword ptr [0x12401d88] */
  EAX = (r32((uint32_t)(0x12401d88)));
  /* 123e1745 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123e1747 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1748 call 0x123d93a0 */
  push32(0x123e174du); f_123d93a0();
  /* 123e174d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1750 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 123e1755 push 0x123fe694 */
  push32((uint32_t)(0x123fe694u));
  /* 123e175a push 2 */
  push32((uint32_t)(0x2u));
  /* 123e175c push 2 */
  push32((uint32_t)(0x2u));
  /* 123e175e call 0x123d63f0 */
  push32(0x123e1763u); f_123d63f0();
  /* 123e1763 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1766 mov edx, dword ptr [0x12401d88] */
  EDX = (r32((uint32_t)(0x12401d88)));
  /* 123e176c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 123e176f mov eax, dword ptr [0x12401d88] */
  EAX = (r32((uint32_t)(0x12401d88)));
  /* 123e1774 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1778 jne 0x123e177f */
  if (!C.zf) goto L_123e177f;
  /* 123e177a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e177d jmp 0x123e17e2 */
  goto L_123e17e2;
L_123e177f:;
  /* 123e177f mov ecx, dword ptr [0x12401d88] */
  ECX = (r32((uint32_t)(0x12401d88)));
  /* 123e1785 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123e1788 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123e178b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 123e1790 push 0x123fe694 */
  push32((uint32_t)(0x123fe694u));
  /* 123e1795 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1797 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1799 call 0x123d63f0 */
  push32(0x123e179eu); f_123d63f0();
  /* 123e179e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e17a1 mov ecx, dword ptr [0x12401d88] */
  ECX = (r32((uint32_t)(0x12401d88)));
  /* 123e17a7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 123e17aa mov edx, dword ptr [0x12401d88] */
  EDX = (r32((uint32_t)(0x12401d88)));
  /* 123e17b0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e17b4 jne 0x123e17bb */
  if (!C.zf) goto L_123e17bb;
  /* 123e17b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e17b9 jmp 0x123e17e2 */
  goto L_123e17e2;
L_123e17bb:;
  /* 123e17bb mov eax, dword ptr [0x12401d88] */
  EAX = (r32((uint32_t)(0x12401d88)));
  /* 123e17c0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123e17c3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 123e17c6 mov edx, dword ptr [0x12401d88] */
  EDX = (r32((uint32_t)(0x12401d88)));
  /* 123e17cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e17ce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e17d0 mov byte ptr [0x12400ea8], cl */
  w8((uint32_t)(0x12400ea8), (CL));
  /* 123e17d6 mov dword ptr [0x12400eac], 1 */
  w32((uint32_t)(0x12400eac), (0x1u));
  /* 123e17e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e17e2:;
  /* 123e17e2 mov esp, ebp */
  ESP = (EBP);
  /* 123e17e4 pop ebp */
  EBP = (pop32());
  /* 123e17e5 ret  */
  ESPCHK(0x123e1540u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x123e17f0 (125 bytes, 49 insns) */
void f_123e17f0(void) {
  FTRACE(0x123e17f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e17f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e17f1 mov ebp, esp */
  EBP = (ESP);
  /* 123e17f3 push ecx */
  push32((uint32_t)(ECX));
L_123e17f4:;
  /* 123e17f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e17f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e17fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e17fc je 0x123e1869 */
  if (C.zf) goto L_123e1869;
  /* 123e17fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1801 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e1804 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1807 jl 0x123e182d */
  if ((C.sf!=C.of)) goto L_123e182d;
  /* 123e1809 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e180c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e180f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1812 jg 0x123e182d */
  if ((!C.zf&&C.sf==C.of)) goto L_123e182d;
  /* 123e1814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1817 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e181a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e181d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1820 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123e1822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1825 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1828 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e182b jmp 0x123e1867 */
  goto L_123e1867;
L_123e182d:;
  /* 123e182d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1830 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e1833 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1836 jne 0x123e185e */
  if (!C.zf) goto L_123e185e;
  /* 123e1838 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e183b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123e183e:;
  /* 123e183e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1844 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 123e1847 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123e1849 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e184c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e184f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e1852 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1855 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e1858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e185a jne 0x123e183e */
  if (!C.zf) goto L_123e183e;
  /* 123e185c jmp 0x123e1867 */
  goto L_123e1867;
L_123e185e:;
  /* 123e185e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1861 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1864 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_123e1867:;
  /* 123e1867 jmp 0x123e17f4 */
  goto L_123e17f4;
L_123e1869:;
  /* 123e1869 mov esp, ebp */
  ESP = (EBP);
  /* 123e186b pop ebp */
  EBP = (pop32());
  /* 123e186c ret  */
  ESPCHK(0x123e17f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011870 @ 0x123e1870 (304 bytes, 85 insns) */
void f_123e1870(void) {
  FTRACE(0x123e1870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e1870 push ebp */
  push32((uint32_t)(EBP));
  /* 123e1871 mov ebp, esp */
  EBP = (ESP);
  /* 123e1873 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1874 cmp dword ptr [0x124029d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e187b je 0x123e193c */
  if (C.zf) goto L_123e193c;
  /* 123e1881 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 123e1883 push 0x123fe6a0 */
  push32((uint32_t)(0x123fe6a0u));
  /* 123e1888 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e188a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 123e188c push 1 */
  push32((uint32_t)(0x1u));
  /* 123e188e call 0x123d6800 */
  push32(0x123e1893u); f_123d6800();
  /* 123e1893 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1896 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e1899 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e189d jne 0x123e18a9 */
  if (!C.zf) goto L_123e18a9;
  /* 123e189f mov eax, 1 */
  EAX = (0x1u);
  /* 123e18a4 jmp 0x123e199c */
  goto L_123e199c;
L_123e18a9:;
  /* 123e18a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e18ac push eax */
  push32((uint32_t)(EAX));
  /* 123e18ad call 0x123e19a0 */
  push32(0x123e18b2u); f_123e19a0();
  /* 123e18b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e18b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e18b7 je 0x123e18dd */
  if (C.zf) goto L_123e18dd;
  /* 123e18b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e18bc push ecx */
  push32((uint32_t)(ECX));
  /* 123e18bd call 0x123e1c30 */
  push32(0x123e18c2u); f_123e1c30();
  /* 123e18c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e18c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e18c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e18ca push edx */
  push32((uint32_t)(EDX));
  /* 123e18cb call 0x123d6e80 */
  push32(0x123e18d0u); f_123d6e80();
  /* 123e18d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e18d3 mov eax, 1 */
  EAX = (0x1u);
  /* 123e18d8 jmp 0x123e199c */
  goto L_123e199c;
L_123e18dd:;
  /* 123e18dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e18e0 mov ecx, dword ptr [0x12401d88] */
  ECX = (r32((uint32_t)(0x12401d88)));
  /* 123e18e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e18e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123e18ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e18ed mov ecx, dword ptr [0x12401d88] */
  ECX = (r32((uint32_t)(0x12401d88)));
  /* 123e18f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123e18f6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123e18f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e18fc mov ecx, dword ptr [0x12401d88] */
  ECX = (r32((uint32_t)(0x12401d88)));
  /* 123e1902 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123e1905 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 123e1908 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e190b mov dword ptr [0x12401d88], eax */
  w32((uint32_t)(0x12401d88), (EAX));
  /* 123e1910 mov ecx, dword ptr [0x12402a0c] */
  ECX = (r32((uint32_t)(0x12402a0c)));
  /* 123e1916 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1917 call 0x123e1c30 */
  push32(0x123e191cu); f_123e1c30();
  /* 123e191c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e191f push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1921 mov edx, dword ptr [0x12402a0c] */
  EDX = (r32((uint32_t)(0x12402a0c)));
  /* 123e1927 push edx */
  push32((uint32_t)(EDX));
  /* 123e1928 call 0x123d6e80 */
  push32(0x123e192du); f_123d6e80();
  /* 123e192d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1930 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1933 mov dword ptr [0x12402a0c], eax */
  w32((uint32_t)(0x12402a0c), (EAX));
  /* 123e1938 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e193a jmp 0x123e199c */
  goto L_123e199c;
L_123e193c:;
  /* 123e193c mov ecx, dword ptr [0x12401d88] */
  ECX = (r32((uint32_t)(0x12401d88)));
  /* 123e1942 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e1944 mov dword ptr [0x12401d58], edx */
  w32((uint32_t)(0x12401d58), (EDX));
  /* 123e194a mov eax, dword ptr [0x12401d88] */
  EAX = (r32((uint32_t)(0x12401d88)));
  /* 123e194f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123e1952 mov dword ptr [0x12401d5c], ecx */
  w32((uint32_t)(0x12401d5c), (ECX));
  /* 123e1958 mov edx, dword ptr [0x12401d88] */
  EDX = (r32((uint32_t)(0x12401d88)));
  /* 123e195e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123e1961 mov dword ptr [0x12401d60], eax */
  w32((uint32_t)(0x12401d60), (EAX));
  /* 123e1966 mov dword ptr [0x12401d88], 0x12401d58 */
  w32((uint32_t)(0x12401d88), (0x12401d58u));
  /* 123e1970 mov ecx, dword ptr [0x12402a0c] */
  ECX = (r32((uint32_t)(0x12402a0c)));
  /* 123e1976 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1977 call 0x123e1c30 */
  push32(0x123e197cu); f_123e1c30();
  /* 123e197c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e197f push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1981 mov edx, dword ptr [0x12402a0c] */
  EDX = (r32((uint32_t)(0x12402a0c)));
  /* 123e1987 push edx */
  push32((uint32_t)(EDX));
  /* 123e1988 call 0x123d6e80 */
  push32(0x123e198du); f_123d6e80();
  /* 123e198d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1990 mov dword ptr [0x12402a0c], 0 */
  w32((uint32_t)(0x12402a0c), (0x0u));
  /* 123e199a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e199c:;
  /* 123e199c mov esp, ebp */
  ESP = (EBP);
  /* 123e199e pop ebp */
  EBP = (pop32());
  /* 123e199f ret  */
  ESPCHK(0x123e1870u, _esp0);
  ESP += 4; return;
}

/* FUN_100119a0 @ 0x123e19a0 (525 bytes, 200 insns) */
void f_123e19a0(void) {
  FTRACE(0x123e19a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e19a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e19a1 mov ebp, esp */
  EBP = (ESP);
  /* 123e19a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e19a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123e19ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e19af mov ax, word ptr [0x12402a2c] */
  AX = (r16((uint32_t)(0x12402a2c)));
  /* 123e19b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e19b8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e19bc jne 0x123e19c6 */
  if (!C.zf) goto L_123e19c6;
  /* 123e19be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e19c1 jmp 0x123e1ba9 */
  goto L_123e1ba9;
L_123e19c6:;
  /* 123e19c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e19c9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e19cc push ecx */
  push32((uint32_t)(ECX));
  /* 123e19cd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 123e19cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e19d2 push edx */
  push32((uint32_t)(EDX));
  /* 123e19d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e19d5 call 0x123e45b0 */
  push32(0x123e19dau); f_123e45b0();
  /* 123e19da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e19dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e19e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e19e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e19e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e19e8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e19eb push edx */
  push32((uint32_t)(EDX));
  /* 123e19ec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 123e19ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e19f1 push eax */
  push32((uint32_t)(EAX));
  /* 123e19f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e19f4 call 0x123e45b0 */
  push32(0x123e19f9u); f_123e45b0();
  /* 123e19f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e19fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e19ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1a01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1a04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1a07 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1a0a push edx */
  push32((uint32_t)(EDX));
  /* 123e1a0b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 123e1a0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1a10 push eax */
  push32((uint32_t)(EAX));
  /* 123e1a11 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1a13 call 0x123e45b0 */
  push32(0x123e1a18u); f_123e45b0();
  /* 123e1a18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1a1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1a1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1a20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1a23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1a26 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1a29 push edx */
  push32((uint32_t)(EDX));
  /* 123e1a2a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 123e1a2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1a2f push eax */
  push32((uint32_t)(EAX));
  /* 123e1a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1a32 call 0x123e45b0 */
  push32(0x123e1a37u); f_123e45b0();
  /* 123e1a37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1a3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1a3d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1a3f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1a42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1a45 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1a48 push edx */
  push32((uint32_t)(EDX));
  /* 123e1a49 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 123e1a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1a4e push eax */
  push32((uint32_t)(EAX));
  /* 123e1a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1a51 call 0x123e45b0 */
  push32(0x123e1a56u); f_123e45b0();
  /* 123e1a56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1a59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1a5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1a5e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1a64 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123e1a67 push eax */
  push32((uint32_t)(EAX));
  /* 123e1a68 call 0x123e1bb0 */
  push32(0x123e1a6du); f_123e1bb0();
  /* 123e1a6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1a70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1a73 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1a76 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1a77 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 123e1a79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1a7c push edx */
  push32((uint32_t)(EDX));
  /* 123e1a7d push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1a7f call 0x123e45b0 */
  push32(0x123e1a84u); f_123e45b0();
  /* 123e1a84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1a87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1a8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1a8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1a8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1a92 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1a95 push edx */
  push32((uint32_t)(EDX));
  /* 123e1a96 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 123e1a98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1a9b push eax */
  push32((uint32_t)(EAX));
  /* 123e1a9c push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1a9e call 0x123e45b0 */
  push32(0x123e1aa3u); f_123e45b0();
  /* 123e1aa3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1aa6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1aa9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1aab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1aae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1ab1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1ab4 push edx */
  push32((uint32_t)(EDX));
  /* 123e1ab5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 123e1ab7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1aba push eax */
  push32((uint32_t)(EAX));
  /* 123e1abb push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1abd call 0x123e45b0 */
  push32(0x123e1ac2u); f_123e45b0();
  /* 123e1ac2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1ac5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1ac8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1aca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1acd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1ad0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1ad3 push edx */
  push32((uint32_t)(EDX));
  /* 123e1ad4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123e1ad6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1ad9 push eax */
  push32((uint32_t)(EAX));
  /* 123e1ada push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1adc call 0x123e45b0 */
  push32(0x123e1ae1u); f_123e45b0();
  /* 123e1ae1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1ae4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1ae7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1ae9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1aec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1aef add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1af2 push edx */
  push32((uint32_t)(EDX));
  /* 123e1af3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 123e1af5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1af8 push eax */
  push32((uint32_t)(EAX));
  /* 123e1af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1afb call 0x123e45b0 */
  push32(0x123e1b00u); f_123e45b0();
  /* 123e1b00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1b06 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1b08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1b0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1b0e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b11 push edx */
  push32((uint32_t)(EDX));
  /* 123e1b12 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 123e1b14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1b17 push eax */
  push32((uint32_t)(EAX));
  /* 123e1b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1b1a call 0x123e45b0 */
  push32(0x123e1b1fu); f_123e45b0();
  /* 123e1b1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1b25 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1b27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1b2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1b2d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b30 push edx */
  push32((uint32_t)(EDX));
  /* 123e1b31 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 123e1b33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1b36 push eax */
  push32((uint32_t)(EAX));
  /* 123e1b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1b39 call 0x123e45b0 */
  push32(0x123e1b3eu); f_123e45b0();
  /* 123e1b3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1b44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1b46 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1b49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1b4c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b4f push edx */
  push32((uint32_t)(EDX));
  /* 123e1b50 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 123e1b52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1b55 push eax */
  push32((uint32_t)(EAX));
  /* 123e1b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1b58 call 0x123e45b0 */
  push32(0x123e1b5du); f_123e45b0();
  /* 123e1b5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1b63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1b65 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1b68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1b6b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b6e push edx */
  push32((uint32_t)(EDX));
  /* 123e1b6f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 123e1b71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1b74 push eax */
  push32((uint32_t)(EAX));
  /* 123e1b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1b77 call 0x123e45b0 */
  push32(0x123e1b7cu); f_123e45b0();
  /* 123e1b7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1b82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1b84 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1b87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1b8a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b8d push edx */
  push32((uint32_t)(EDX));
  /* 123e1b8e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 123e1b90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1b93 push eax */
  push32((uint32_t)(EAX));
  /* 123e1b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1b96 call 0x123e45b0 */
  push32(0x123e1b9bu); f_123e45b0();
  /* 123e1b9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1b9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e1ba1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1ba3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e1ba6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123e1ba9:;
  /* 123e1ba9 mov esp, ebp */
  ESP = (EBP);
  /* 123e1bab pop ebp */
  EBP = (pop32());
  /* 123e1bac ret  */
  ESPCHK(0x123e19a0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x123e1bb0 (125 bytes, 49 insns) */
void f_123e1bb0(void) {
  FTRACE(0x123e1bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e1bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e1bb1 mov ebp, esp */
  EBP = (ESP);
  /* 123e1bb3 push ecx */
  push32((uint32_t)(ECX));
L_123e1bb4:;
  /* 123e1bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1bb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e1bba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e1bbc je 0x123e1c29 */
  if (C.zf) goto L_123e1c29;
  /* 123e1bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1bc1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e1bc4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1bc7 jl 0x123e1bed */
  if ((C.sf!=C.of)) goto L_123e1bed;
  /* 123e1bc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1bcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e1bcf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1bd2 jg 0x123e1bed */
  if ((!C.zf&&C.sf==C.of)) goto L_123e1bed;
  /* 123e1bd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1bd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e1bda sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e1bdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1be0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123e1be2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1be5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1be8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e1beb jmp 0x123e1c27 */
  goto L_123e1c27;
L_123e1bed:;
  /* 123e1bed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1bf0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e1bf3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1bf6 jne 0x123e1c1e */
  if (!C.zf) goto L_123e1c1e;
  /* 123e1bf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1bfb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123e1bfe:;
  /* 123e1bfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1c01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1c04 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 123e1c07 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123e1c09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1c0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1c0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e1c12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e1c15 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e1c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e1c1a jne 0x123e1bfe */
  if (!C.zf) goto L_123e1bfe;
  /* 123e1c1c jmp 0x123e1c27 */
  goto L_123e1c27;
L_123e1c1e:;
  /* 123e1c1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1c21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1c24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_123e1c27:;
  /* 123e1c27 jmp 0x123e1bb4 */
  goto L_123e1bb4;
L_123e1c29:;
  /* 123e1c29 mov esp, ebp */
  ESP = (EBP);
  /* 123e1c2b pop ebp */
  EBP = (pop32());
  /* 123e1c2c ret  */
  ESPCHK(0x123e1bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c30 @ 0x123e1c30 (147 bytes, 52 insns) */
void f_123e1c30(void) {
  FTRACE(0x123e1c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e1c30 push ebp */
  push32((uint32_t)(EBP));
  /* 123e1c31 mov ebp, esp */
  EBP = (ESP);
  /* 123e1c33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1c37 jne 0x123e1c3e */
  if (!C.zf) goto L_123e1c3e;
  /* 123e1c39 jmp 0x123e1cc1 */
  goto L_123e1cc1;
L_123e1c3e:;
  /* 123e1c3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1c41 cmp dword ptr [eax + 0xc], 0x12402a68 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12402a68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1c48 je 0x123e1cc1 */
  if (C.zf) goto L_123e1cc1;
  /* 123e1c4a push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1c4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1c4f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123e1c52 push edx */
  push32((uint32_t)(EDX));
  /* 123e1c53 call 0x123d6e80 */
  push32(0x123e1c58u); f_123d6e80();
  /* 123e1c58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1c5b push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1c5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1c60 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123e1c63 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1c64 call 0x123d6e80 */
  push32(0x123e1c69u); f_123d6e80();
  /* 123e1c69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1c6c push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1c71 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123e1c74 push eax */
  push32((uint32_t)(EAX));
  /* 123e1c75 call 0x123d6e80 */
  push32(0x123e1c7au); f_123d6e80();
  /* 123e1c7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1c7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1c82 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123e1c85 push edx */
  push32((uint32_t)(EDX));
  /* 123e1c86 call 0x123d6e80 */
  push32(0x123e1c8bu); f_123d6e80();
  /* 123e1c8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1c8e push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1c90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1c93 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123e1c96 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1c97 call 0x123d6e80 */
  push32(0x123e1c9cu); f_123d6e80();
  /* 123e1c9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1c9f push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1ca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1ca4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 123e1ca7 push eax */
  push32((uint32_t)(EAX));
  /* 123e1ca8 call 0x123d6e80 */
  push32(0x123e1cadu); f_123d6e80();
  /* 123e1cad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1cb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1cb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e1cb5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 123e1cb8 push edx */
  push32((uint32_t)(EDX));
  /* 123e1cb9 call 0x123d6e80 */
  push32(0x123e1cbeu); f_123d6e80();
  /* 123e1cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e1cc1:;
  /* 123e1cc1 pop ebp */
  EBP = (pop32());
  /* 123e1cc2 ret  */
  ESPCHK(0x123e1c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cd0 @ 0x123e1cd0 (928 bytes, 284 insns) */
void f_123e1cd0(void) {
  FTRACE(0x123e1cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e1cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e1cd1 mov ebp, esp */
  EBP = (ESP);
  /* 123e1cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e1cd6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 123e1cdd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 123e1ce4 cmp dword ptr [0x124029d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1ceb je 0x123e2021 */
  if (C.zf) goto L_123e2021;
  /* 123e1cf1 cmp dword ptr [0x124029e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1cf8 jne 0x123e1d20 */
  if (!C.zf) goto L_123e1d20;
  /* 123e1cfa push 0x124029e0 */
  push32((uint32_t)(0x124029e0u));
  /* 123e1cff push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 123e1d04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e1d06 mov ax, word ptr [0x12402a24] */
  AX = (r16((uint32_t)(0x12402a24)));
  /* 123e1d0c push eax */
  push32((uint32_t)(EAX));
  /* 123e1d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1d0f call 0x123e45b0 */
  push32(0x123e1d14u); f_123e45b0();
  /* 123e1d14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e1d19 je 0x123e1d20 */
  if (C.zf) goto L_123e1d20;
  /* 123e1d1b jmp 0x123e1fe2 */
  goto L_123e1fe2;
L_123e1d20:;
  /* 123e1d20 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 123e1d22 push 0x123fe6ac */
  push32((uint32_t)(0x123fe6acu));
  /* 123e1d27 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1d29 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 123e1d2e call 0x123d63f0 */
  push32(0x123e1d33u); f_123d63f0();
  /* 123e1d33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1d36 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 123e1d39 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 123e1d3b push 0x123fe6ac */
  push32((uint32_t)(0x123fe6acu));
  /* 123e1d40 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1d42 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 123e1d47 call 0x123d63f0 */
  push32(0x123e1d4cu); f_123d63f0();
  /* 123e1d4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1d4f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123e1d52 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 123e1d54 push 0x123fe6ac */
  push32((uint32_t)(0x123fe6acu));
  /* 123e1d59 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1d5b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 123e1d60 call 0x123d63f0 */
  push32(0x123e1d65u); f_123d63f0();
  /* 123e1d65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1d68 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 123e1d6b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 123e1d6d push 0x123fe6ac */
  push32((uint32_t)(0x123fe6acu));
  /* 123e1d72 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1d74 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 123e1d79 call 0x123d63f0 */
  push32(0x123e1d7eu); f_123d63f0();
  /* 123e1d7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1d81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123e1d84 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1d88 je 0x123e1d9c */
  if (C.zf) goto L_123e1d9c;
  /* 123e1d8a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1d8e je 0x123e1d9c */
  if (C.zf) goto L_123e1d9c;
  /* 123e1d90 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1d94 je 0x123e1d9c */
  if (C.zf) goto L_123e1d9c;
  /* 123e1d96 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1d9a jne 0x123e1da1 */
  if (!C.zf) goto L_123e1da1;
L_123e1d9c:;
  /* 123e1d9c jmp 0x123e1fe2 */
  goto L_123e1fe2;
L_123e1da1:;
  /* 123e1da1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123e1da4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123e1da7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123e1dae jmp 0x123e1db9 */
  goto L_123e1db9;
L_123e1db0:;
  /* 123e1db0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e1db3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1db6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_123e1db9:;
  /* 123e1db9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1dc0 jge 0x123e1dd5 */
  if ((C.sf==C.of)) goto L_123e1dd5;
  /* 123e1dc2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1dc5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 123e1dc8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 123e1dca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1dcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1dd0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123e1dd3 jmp 0x123e1db0 */
  goto L_123e1db0;
L_123e1dd5:;
  /* 123e1dd5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 123e1dd8 push eax */
  push32((uint32_t)(EAX));
  /* 123e1dd9 mov ecx, dword ptr [0x124029e0] */
  ECX = (r32((uint32_t)(0x124029e0)));
  /* 123e1ddf push ecx */
  push32((uint32_t)(ECX));
  /* 123e1de0 call dword ptr [0x124052ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052ec))), 0x123e1de6u);
  /* 123e1de6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e1de8 jne 0x123e1def */
  if (!C.zf) goto L_123e1def;
  /* 123e1dea jmp 0x123e1fe2 */
  goto L_123e1fe2;
L_123e1def:;
  /* 123e1def cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1df3 jbe 0x123e1dfa */
  if ((C.cf||C.zf)) goto L_123e1dfa;
  /* 123e1df5 jmp 0x123e1fe2 */
  goto L_123e1fe2;
L_123e1dfa:;
  /* 123e1dfa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e1dfd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123e1e03 mov dword ptr [0x12400ea4], edx */
  w32((uint32_t)(0x12400ea4), (EDX));
  /* 123e1e09 cmp dword ptr [0x12400ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12400ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1e10 jle 0x123e1e69 */
  if ((C.zf||C.sf!=C.of)) goto L_123e1e69;
  /* 123e1e12 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 123e1e15 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123e1e18 jmp 0x123e1e23 */
  goto L_123e1e23;
L_123e1e1a:;
  /* 123e1e1a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1e1d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1e20 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_123e1e23:;
  /* 123e1e23 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1e26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e1e28 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e1e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e1e2c je 0x123e1e69 */
  if (C.zf) goto L_123e1e69;
  /* 123e1e2e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1e31 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e1e33 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 123e1e36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e1e38 je 0x123e1e69 */
  if (C.zf) goto L_123e1e69;
  /* 123e1e3a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1e3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1e3f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e1e41 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123e1e44 jmp 0x123e1e4f */
  goto L_123e1e4f;
L_123e1e46:;
  /* 123e1e46 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e1e49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1e4c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_123e1e4f:;
  /* 123e1e4f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1e52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1e54 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123e1e57 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1e5a jg 0x123e1e67 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e1e67;
  /* 123e1e5c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123e1e5f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1e62 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123e1e65 jmp 0x123e1e46 */
  goto L_123e1e46;
L_123e1e67:;
  /* 123e1e67 jmp 0x123e1e1a */
  goto L_123e1e1a;
L_123e1e69:;
  /* 123e1e69 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1e6f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123e1e72 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1e75 push eax */
  push32((uint32_t)(EAX));
  /* 123e1e76 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123e1e7b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123e1e7e push ecx */
  push32((uint32_t)(ECX));
  /* 123e1e7f push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1e81 call 0x123de620 */
  push32(0x123e1e86u); f_123de620();
  /* 123e1e86 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e1e8b jne 0x123e1e92 */
  if (!C.zf) goto L_123e1e92;
  /* 123e1e8d jmp 0x123e1fe2 */
  goto L_123e1fe2;
L_123e1e92:;
  /* 123e1e92 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123e1e95 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 123e1e9a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e1e9d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123e1ea0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123e1ea7 jmp 0x123e1eb2 */
  goto L_123e1eb2;
L_123e1ea9:;
  /* 123e1ea9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e1eac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1eaf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_123e1eb2:;
  /* 123e1eb2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1eb9 jge 0x123e1ed0 */
  if ((C.sf==C.of)) goto L_123e1ed0;
  /* 123e1ebb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e1ebe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 123e1ec2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 123e1ec5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123e1ec8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1ecb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123e1ece jmp 0x123e1ea9 */
  goto L_123e1ea9;
L_123e1ed0:;
  /* 123e1ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e1ed4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e1ed7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1eda push edx */
  push32((uint32_t)(EDX));
  /* 123e1edb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123e1ee0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e1ee3 push eax */
  push32((uint32_t)(EAX));
  /* 123e1ee4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e1ee6 call 0x123e4850 */
  push32(0x123e1eebu); f_123e4850();
  /* 123e1eeb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1eee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e1ef0 jne 0x123e1ef7 */
  if (!C.zf) goto L_123e1ef7;
  /* 123e1ef2 jmp 0x123e1fe2 */
  goto L_123e1fe2;
L_123e1ef7:;
  /* 123e1ef7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e1efa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 123e1eff cmp dword ptr [0x12400ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12400ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1f06 jle 0x123e1f63 */
  if ((C.zf||C.sf!=C.of)) goto L_123e1f63;
  /* 123e1f08 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 123e1f0b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123e1f0e jmp 0x123e1f19 */
  goto L_123e1f19;
L_123e1f10:;
  /* 123e1f10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1f13 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1f16 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_123e1f19:;
  /* 123e1f19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1f1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123e1f1e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123e1f20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e1f22 je 0x123e1f63 */
  if (C.zf) goto L_123e1f63;
  /* 123e1f24 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1f27 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e1f29 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123e1f2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e1f2e je 0x123e1f63 */
  if (C.zf) goto L_123e1f63;
  /* 123e1f30 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1f33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e1f35 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e1f37 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123e1f3a jmp 0x123e1f45 */
  goto L_123e1f45;
L_123e1f3c:;
  /* 123e1f3c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e1f3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1f42 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_123e1f45:;
  /* 123e1f45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e1f48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e1f4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 123e1f4d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1f50 jg 0x123e1f61 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e1f61;
  /* 123e1f52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123e1f55 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123e1f58 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 123e1f5f jmp 0x123e1f3c */
  goto L_123e1f3c;
L_123e1f61:;
  /* 123e1f61 jmp 0x123e1f10 */
  goto L_123e1f10;
L_123e1f63:;
  /* 123e1f63 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123e1f66 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1f69 mov dword ptr [0x12400c98], eax */
  w32((uint32_t)(0x12400c98), (EAX));
  /* 123e1f6e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e1f71 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1f74 mov dword ptr [0x12400c9c], ecx */
  w32((uint32_t)(0x12400c9c), (ECX));
  /* 123e1f7a cmp dword ptr [0x12402a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1f81 je 0x123e1f94 */
  if (C.zf) goto L_123e1f94;
  /* 123e1f83 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1f85 mov edx, dword ptr [0x12402a10] */
  EDX = (r32((uint32_t)(0x12402a10)));
  /* 123e1f8b push edx */
  push32((uint32_t)(EDX));
  /* 123e1f8c call 0x123d6e80 */
  push32(0x123e1f91u); f_123d6e80();
  /* 123e1f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e1f94:;
  /* 123e1f94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123e1f97 mov dword ptr [0x12402a10], eax */
  w32((uint32_t)(0x12402a10), (EAX));
  /* 123e1f9c cmp dword ptr [0x12402a14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e1fa3 je 0x123e1fb6 */
  if (C.zf) goto L_123e1fb6;
  /* 123e1fa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1fa7 mov ecx, dword ptr [0x12402a14] */
  ECX = (r32((uint32_t)(0x12402a14)));
  /* 123e1fad push ecx */
  push32((uint32_t)(ECX));
  /* 123e1fae call 0x123d6e80 */
  push32(0x123e1fb3u); f_123d6e80();
  /* 123e1fb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e1fb6:;
  /* 123e1fb6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e1fb9 mov dword ptr [0x12402a14], edx */
  w32((uint32_t)(0x12402a14), (EDX));
  /* 123e1fbf push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1fc1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123e1fc4 push eax */
  push32((uint32_t)(EAX));
  /* 123e1fc5 call 0x123d6e80 */
  push32(0x123e1fcau); f_123d6e80();
  /* 123e1fca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1fcd push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1fcf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e1fd2 push ecx */
  push32((uint32_t)(ECX));
  /* 123e1fd3 call 0x123d6e80 */
  push32(0x123e1fd8u); f_123d6e80();
  /* 123e1fd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1fdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e1fdd jmp 0x123e206c */
  goto L_123e206c;
L_123e1fe2:;
  /* 123e1fe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1fe4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123e1fe7 push edx */
  push32((uint32_t)(EDX));
  /* 123e1fe8 call 0x123d6e80 */
  push32(0x123e1fedu); f_123d6e80();
  /* 123e1fed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1ff0 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e1ff2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123e1ff5 push eax */
  push32((uint32_t)(EAX));
  /* 123e1ff6 call 0x123d6e80 */
  push32(0x123e1ffbu); f_123d6e80();
  /* 123e1ffb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e1ffe push 2 */
  push32((uint32_t)(0x2u));
  /* 123e2000 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123e2003 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2004 call 0x123d6e80 */
  push32(0x123e2009u); f_123d6e80();
  /* 123e2009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e200c push 2 */
  push32((uint32_t)(0x2u));
  /* 123e200e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123e2011 push edx */
  push32((uint32_t)(EDX));
  /* 123e2012 call 0x123d6e80 */
  push32(0x123e2017u); f_123d6e80();
  /* 123e2017 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e201a mov eax, 1 */
  EAX = (0x1u);
  /* 123e201f jmp 0x123e206c */
  goto L_123e206c;
L_123e2021:;
  /* 123e2021 mov dword ptr [0x12400c98], 0x12400ca2 */
  w32((uint32_t)(0x12400c98), (0x12400ca2u));
  /* 123e202b mov dword ptr [0x12400c9c], 0x12400ca2 */
  w32((uint32_t)(0x12400c9c), (0x12400ca2u));
  /* 123e2035 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e2037 mov eax, dword ptr [0x12402a10] */
  EAX = (r32((uint32_t)(0x12402a10)));
  /* 123e203c push eax */
  push32((uint32_t)(EAX));
  /* 123e203d call 0x123d6e80 */
  push32(0x123e2042u); f_123d6e80();
  /* 123e2042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2045 push 2 */
  push32((uint32_t)(0x2u));
  /* 123e2047 mov ecx, dword ptr [0x12402a14] */
  ECX = (r32((uint32_t)(0x12402a14)));
  /* 123e204d push ecx */
  push32((uint32_t)(ECX));
  /* 123e204e call 0x123d6e80 */
  push32(0x123e2053u); f_123d6e80();
  /* 123e2053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2056 mov dword ptr [0x12402a10], 0 */
  w32((uint32_t)(0x12402a10), (0x0u));
  /* 123e2060 mov dword ptr [0x12402a14], 0 */
  w32((uint32_t)(0x12402a14), (0x0u));
  /* 123e206a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e206c:;
  /* 123e206c mov esp, ebp */
  ESP = (EBP);
  /* 123e206e pop ebp */
  EBP = (pop32());
  /* 123e206f ret  */
  ESPCHK(0x123e1cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012070 @ 0x123e2070 (7 bytes, 5 insns) */
void f_123e2070(void) {
  FTRACE(0x123e2070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2070 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2071 mov ebp, esp */
  EBP = (ESP);
  /* 123e2073 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e2075 pop ebp */
  EBP = (pop32());
  /* 123e2076 ret  */
  ESPCHK(0x123e2070u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x123e2080 (129 bytes, 56 insns) */
void f_123e2080(void) {
  FTRACE(0x123e2080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2080 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 123e2084 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 123e2088 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 123e208e jne 0x123e20cc */
  if (!C.zf) goto L_123e20cc;
L_123e2090:;
  /* 123e2090 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123e2092 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e2094 jne 0x123e20c4 */
  if (!C.zf) goto L_123e20c4;
  /* 123e2096 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e2098 je 0x123e20c0 */
  if (C.zf) goto L_123e20c0;
  /* 123e209a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e209d jne 0x123e20c4 */
  if (!C.zf) goto L_123e20c4;
  /* 123e209f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 123e20a1 je 0x123e20c0 */
  if (C.zf) goto L_123e20c0;
  /* 123e20a3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 123e20a6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e20a9 jne 0x123e20c4 */
  if (!C.zf) goto L_123e20c4;
  /* 123e20ab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e20ad je 0x123e20c0 */
  if (C.zf) goto L_123e20c0;
  /* 123e20af cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e20b2 jne 0x123e20c4 */
  if (!C.zf) goto L_123e20c4;
  /* 123e20b4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e20b7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e20ba or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 123e20bc jne 0x123e2090 */
  if (!C.zf) goto L_123e2090;
  /* 123e20be mov edi, edi */
  EDI = (EDI);
L_123e20c0:;
  /* 123e20c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e20c2 ret  */
  ESPCHK(0x123e2080u, _esp0);
  ESP += 4; return;
  /* 123e20c3 nop  */
  /* nop */
L_123e20c4:;
  /* 123e20c4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e20c6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123e20c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 123e20c9 ret  */
  ESPCHK(0x123e2080u, _esp0);
  ESP += 4; return;
  /* 123e20ca mov edi, edi */
  EDI = (EDI);
L_123e20cc:;
  /* 123e20cc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 123e20d2 je 0x123e20e8 */
  if (C.zf) goto L_123e20e8;
  /* 123e20d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e20d6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 123e20d7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e20d9 jne 0x123e20c4 */
  if (!C.zf) goto L_123e20c4;
  /* 123e20db inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123e20dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e20de je 0x123e20c0 */
  if (C.zf) goto L_123e20c0;
  /* 123e20e0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 123e20e6 je 0x123e2090 */
  if (C.zf) goto L_123e2090;
L_123e20e8:;
  /* 123e20e8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 123e20eb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e20ee cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e20f0 jne 0x123e20c4 */
  if (!C.zf) goto L_123e20c4;
  /* 123e20f2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e20f4 je 0x123e20c0 */
  if (C.zf) goto L_123e20c0;
  /* 123e20f6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e20f9 jne 0x123e20c4 */
  if (!C.zf) goto L_123e20c4;
  /* 123e20fb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 123e20fd je 0x123e20c0 */
  if (C.zf) goto L_123e20c0;
  /* 123e20ff add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2102 jmp 0x123e2090 */
  goto L_123e2090;
}

/* FUN_10012110 @ 0x123e2110 (62 bytes, 35 insns) */
void f_123e2110(void) {
  FTRACE(0x123e2110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2110 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2111 mov ebp, esp */
  EBP = (ESP);
  /* 123e2113 push esi */
  push32((uint32_t)(ESI));
  /* 123e2114 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e2116 push eax */
  push32((uint32_t)(EAX));
  /* 123e2117 push eax */
  push32((uint32_t)(EAX));
  /* 123e2118 push eax */
  push32((uint32_t)(EAX));
  /* 123e2119 push eax */
  push32((uint32_t)(EAX));
  /* 123e211a push eax */
  push32((uint32_t)(EAX));
  /* 123e211b push eax */
  push32((uint32_t)(EAX));
  /* 123e211c push eax */
  push32((uint32_t)(EAX));
  /* 123e211d push eax */
  push32((uint32_t)(EAX));
  /* 123e211e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e2121 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123e2124:;
  /* 123e2124 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e2126 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e2128 je 0x123e2131 */
  if (C.zf) goto L_123e2131;
  /* 123e212a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 123e212b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x123e212b");
  /* 123e212f jmp 0x123e2124 */
  goto L_123e2124;
L_123e2131:;
  /* 123e2131 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2134 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123e2137 nop  */
  /* nop */
L_123e2138:;
  /* 123e2138 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123e2139 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123e213b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e213d je 0x123e2146 */
  if (C.zf) goto L_123e2146;
  /* 123e213f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123e2140 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x123e2140");
  /* 123e2144 jae 0x123e2138 */
  if (!C.cf) goto L_123e2138;
L_123e2146:;
  /* 123e2146 mov eax, ecx */
  EAX = (ECX);
  /* 123e2148 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e214b pop esi */
  ESI = (pop32());
  /* 123e214c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123e214d ret  */
  ESPCHK(0x123e2110u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x123e2150 (56 bytes, 31 insns) */
void f_123e2150(void) {
  FTRACE(0x123e2150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2150 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2151 mov ebp, esp */
  EBP = (ESP);
  /* 123e2153 push edi */
  push32((uint32_t)(EDI));
  /* 123e2154 push esi */
  push32((uint32_t)(ESI));
  /* 123e2155 push ebx */
  push32((uint32_t)(EBX));
  /* 123e2156 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e2159 jecxz 0x123e2181 */
  x86_unimpl("jecxz @ 0x123e2159");
  /* 123e215b mov ebx, ecx */
  EBX = (ECX);
  /* 123e215d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2160 mov esi, edi */
  ESI = (EDI);
  /* 123e2162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e2164 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 123e2166 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e2168 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e216a mov edi, esi */
  EDI = (ESI);
  /* 123e216c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 123e216f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 123e2171 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 123e2174 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e2176 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123e2179 ja 0x123e217f */
  if ((!C.cf&&!C.zf)) goto L_123e217f;
  /* 123e217b je 0x123e2181 */
  if (C.zf) goto L_123e2181;
  /* 123e217d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123e217e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_123e217f:;
  /* 123e217f not ecx */
  ECX = (~(ECX));
L_123e2181:;
  /* 123e2181 mov eax, ecx */
  EAX = (ECX);
  /* 123e2183 pop ebx */
  EBX = (pop32());
  /* 123e2184 pop esi */
  ESI = (pop32());
  /* 123e2185 pop edi */
  EDI = (pop32());
  /* 123e2186 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123e2187 ret  */
  ESPCHK(0x123e2150u, _esp0);
  ESP += 4; return;
}

/* FUN_10012190 @ 0x123e2190 (58 bytes, 32 insns) */
void f_123e2190(void) {
  FTRACE(0x123e2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2190 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2191 mov ebp, esp */
  EBP = (ESP);
  /* 123e2193 push esi */
  push32((uint32_t)(ESI));
  /* 123e2194 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e2196 push eax */
  push32((uint32_t)(EAX));
  /* 123e2197 push eax */
  push32((uint32_t)(EAX));
  /* 123e2198 push eax */
  push32((uint32_t)(EAX));
  /* 123e2199 push eax */
  push32((uint32_t)(EAX));
  /* 123e219a push eax */
  push32((uint32_t)(EAX));
  /* 123e219b push eax */
  push32((uint32_t)(EAX));
  /* 123e219c push eax */
  push32((uint32_t)(EAX));
  /* 123e219d push eax */
  push32((uint32_t)(EAX));
  /* 123e219e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e21a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123e21a4:;
  /* 123e21a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e21a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e21a8 je 0x123e21b1 */
  if (C.zf) goto L_123e21b1;
  /* 123e21aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 123e21ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x123e21ab");
  /* 123e21af jmp 0x123e21a4 */
  goto L_123e21a4;
L_123e21b1:;
  /* 123e21b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_123e21b4:;
  /* 123e21b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123e21b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123e21b8 je 0x123e21c4 */
  if (C.zf) goto L_123e21c4;
  /* 123e21ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123e21bb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x123e21bb");
  /* 123e21bf jae 0x123e21b4 */
  if (!C.cf) goto L_123e21b4;
  /* 123e21c1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_123e21c4:;
  /* 123e21c4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e21c7 pop esi */
  ESI = (pop32());
  /* 123e21c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123e21c9 ret  */
  ESPCHK(0x123e2190u, _esp0);
  ESP += 4; return;
}

/* FUN_100121d0 @ 0x123e21d0 (512 bytes, 147 insns) */
void f_123e21d0(void) {
  FTRACE(0x123e21d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e21d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e21d1 mov ebp, esp */
  EBP = (ESP);
  /* 123e21d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e21d6 cmp dword ptr [0x12402a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e21dd jne 0x123e2202 */
  if (!C.zf) goto L_123e2202;
  /* 123e21df call 0x123e2ca0 */
  push32(0x123e21e4u); f_123e2ca0();
  /* 123e21e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e21e6 je 0x123e21f2 */
  if (C.zf) goto L_123e21f2;
  /* 123e21e8 mov eax, dword ptr [0x124052b0] */
  EAX = (r32((uint32_t)(0x124052b0)));
  /* 123e21ed mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e21f0 jmp 0x123e21f9 */
  goto L_123e21f9;
L_123e21f2:;
  /* 123e21f2 mov dword ptr [ebp - 8], 0x123e2cf0 */
  w32((uint32_t)(EBP + -0x8), (0x123e2cf0u));
L_123e21f9:;
  /* 123e21f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e21fc mov dword ptr [0x12402a5c], ecx */
  w32((uint32_t)(0x12402a5c), (ECX));
L_123e2202:;
  /* 123e2202 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2206 jne 0x123e2212 */
  if (!C.zf) goto L_123e2212;
  /* 123e2208 call 0x123e2af0 */
  push32(0x123e220du); f_123e2af0();
  /* 123e220d jmp 0x123e22de */
  goto L_123e22de;
L_123e2212:;
  /* 123e2212 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2215 mov dword ptr [0x12402a4c], edx */
  w32((uint32_t)(0x12402a4c), (EDX));
  /* 123e221b cmp dword ptr [0x12402a4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2222 je 0x123e2244 */
  if (C.zf) goto L_123e2244;
  /* 123e2224 mov eax, dword ptr [0x12402a4c] */
  EAX = (r32((uint32_t)(0x12402a4c)));
  /* 123e2229 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e222c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e222e je 0x123e2244 */
  if (C.zf) goto L_123e2244;
  /* 123e2230 push 0x12402a4c */
  push32((uint32_t)(0x12402a4cu));
  /* 123e2235 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 123e2237 push 0x12401a90 */
  push32((uint32_t)(0x12401a90u));
  /* 123e223c call 0x123e23d0 */
  push32(0x123e2241u); f_123e23d0();
  /* 123e2241 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e2244:;
  /* 123e2244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2247 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e224a mov dword ptr [0x12402a50], edx */
  w32((uint32_t)(0x12402a50), (EDX));
  /* 123e2250 cmp dword ptr [0x12402a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2257 je 0x123e2279 */
  if (C.zf) goto L_123e2279;
  /* 123e2259 mov eax, dword ptr [0x12402a50] */
  EAX = (r32((uint32_t)(0x12402a50)));
  /* 123e225e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e2261 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e2263 je 0x123e2279 */
  if (C.zf) goto L_123e2279;
  /* 123e2265 push 0x12402a50 */
  push32((uint32_t)(0x12402a50u));
  /* 123e226a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 123e226c push 0x124019d8 */
  push32((uint32_t)(0x124019d8u));
  /* 123e2271 call 0x123e23d0 */
  push32(0x123e2276u); f_123e23d0();
  /* 123e2276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e2279:;
  /* 123e2279 mov dword ptr [0x12402a54], 0 */
  w32((uint32_t)(0x12402a54), (0x0u));
  /* 123e2283 cmp dword ptr [0x12402a4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e228a je 0x123e22bd */
  if (C.zf) goto L_123e22bd;
  /* 123e228c mov edx, dword ptr [0x12402a4c] */
  EDX = (r32((uint32_t)(0x12402a4c)));
  /* 123e2292 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123e2295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2297 je 0x123e22bd */
  if (C.zf) goto L_123e22bd;
  /* 123e2299 cmp dword ptr [0x12402a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e22a0 je 0x123e22b6 */
  if (C.zf) goto L_123e22b6;
  /* 123e22a2 mov ecx, dword ptr [0x12402a50] */
  ECX = (r32((uint32_t)(0x12402a50)));
  /* 123e22a8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123e22ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e22ad je 0x123e22b6 */
  if (C.zf) goto L_123e22b6;
  /* 123e22af call 0x123e2460 */
  push32(0x123e22b4u); f_123e2460();
  /* 123e22b4 jmp 0x123e22bb */
  goto L_123e22bb;
L_123e22b6:;
  /* 123e22b6 call 0x123e2850 */
  push32(0x123e22bbu); f_123e2850();
L_123e22bb:;
  /* 123e22bb jmp 0x123e22de */
  goto L_123e22de;
L_123e22bd:;
  /* 123e22bd cmp dword ptr [0x12402a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e22c4 je 0x123e22d9 */
  if (C.zf) goto L_123e22d9;
  /* 123e22c6 mov eax, dword ptr [0x12402a50] */
  EAX = (r32((uint32_t)(0x12402a50)));
  /* 123e22cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e22ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e22d0 je 0x123e22d9 */
  if (C.zf) goto L_123e22d9;
  /* 123e22d2 call 0x123e29f0 */
  push32(0x123e22d7u); f_123e29f0();
  /* 123e22d7 jmp 0x123e22de */
  goto L_123e22de;
L_123e22d9:;
  /* 123e22d9 call 0x123e2af0 */
  push32(0x123e22deu); f_123e2af0();
L_123e22de:;
  /* 123e22de cmp dword ptr [0x12402a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e22e5 jne 0x123e22ee */
  if (!C.zf) goto L_123e22ee;
  /* 123e22e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e22e9 jmp 0x123e23cc */
  goto L_123e23cc;
L_123e22ee:;
  /* 123e22ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e22f1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e22f7 push edx */
  push32((uint32_t)(EDX));
  /* 123e22f8 call 0x123e2b20 */
  push32(0x123e22fdu); f_123e2b20();
  /* 123e22fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2300 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e2303 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2307 je 0x123e231c */
  if (C.zf) goto L_123e231c;
  /* 123e2309 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e230c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e2311 push eax */
  push32((uint32_t)(EAX));
  /* 123e2312 call dword ptr [0x124052b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052b4))), 0x123e2318u);
  /* 123e2318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e231a jne 0x123e2323 */
  if (!C.zf) goto L_123e2323;
L_123e231c:;
  /* 123e231c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e231e jmp 0x123e23cc */
  goto L_123e23cc;
L_123e2323:;
  /* 123e2323 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e2325 mov ecx, dword ptr [0x12402a3c] */
  ECX = (r32((uint32_t)(0x12402a3c)));
  /* 123e232b push ecx */
  push32((uint32_t)(ECX));
  /* 123e232c call dword ptr [0x124052c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052c4))), 0x123e2332u);
  /* 123e2332 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2334 jne 0x123e233d */
  if (!C.zf) goto L_123e233d;
  /* 123e2336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e2338 jmp 0x123e23cc */
  goto L_123e23cc;
L_123e233d:;
  /* 123e233d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2341 je 0x123e2368 */
  if (C.zf) goto L_123e2368;
  /* 123e2343 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e2346 mov ax, word ptr [0x12402a3c] */
  AX = (r16((uint32_t)(0x12402a3c)));
  /* 123e234c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 123e234f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e2352 mov dx, word ptr [0x12402a58] */
  DX = (r16((uint32_t)(0x12402a58)));
  /* 123e2359 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 123e235d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e2360 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 123e2364 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_123e2368:;
  /* 123e2368 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e236c je 0x123e23c7 */
  if (C.zf) goto L_123e23c7;
  /* 123e236e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 123e2370 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e2373 push edx */
  push32((uint32_t)(EDX));
  /* 123e2374 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 123e2379 mov eax, dword ptr [0x12402a3c] */
  EAX = (r32((uint32_t)(0x12402a3c)));
  /* 123e237e push eax */
  push32((uint32_t)(EAX));
  /* 123e237f call dword ptr [0x12402a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402a5c))), 0x123e2385u);
  /* 123e2385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2387 jne 0x123e238d */
  if (!C.zf) goto L_123e238d;
  /* 123e2389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e238b jmp 0x123e23cc */
  goto L_123e23cc;
L_123e238d:;
  /* 123e238d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 123e238f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e2392 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2395 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2396 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 123e239b mov edx, dword ptr [0x12402a58] */
  EDX = (r32((uint32_t)(0x12402a58)));
  /* 123e23a1 push edx */
  push32((uint32_t)(EDX));
  /* 123e23a2 call dword ptr [0x12402a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402a5c))), 0x123e23a8u);
  /* 123e23a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e23aa jne 0x123e23b0 */
  if (!C.zf) goto L_123e23b0;
  /* 123e23ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e23ae jmp 0x123e23cc */
  goto L_123e23cc;
L_123e23b0:;
  /* 123e23b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 123e23b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e23b5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e23ba push eax */
  push32((uint32_t)(EAX));
  /* 123e23bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e23be push ecx */
  push32((uint32_t)(ECX));
  /* 123e23bf call 0x123d8f30 */
  push32(0x123e23c4u); f_123d8f30();
  /* 123e23c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e23c7:;
  /* 123e23c7 mov eax, 1 */
  EAX = (0x1u);
L_123e23cc:;
  /* 123e23cc mov esp, ebp */
  ESP = (EBP);
  /* 123e23ce pop ebp */
  EBP = (pop32());
  /* 123e23cf ret  */
  ESPCHK(0x123e21d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123d0 @ 0x123e23d0 (130 bytes, 47 insns) */
void f_123e23d0(void) {
  FTRACE(0x123e23d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e23d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e23d1 mov ebp, esp */
  EBP = (ESP);
  /* 123e23d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e23d6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123e23dd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_123e23e4:;
  /* 123e23e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e23e7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e23ea jg 0x123e244e */
  if ((!C.zf&&C.sf==C.of)) goto L_123e244e;
  /* 123e23ec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e23f0 je 0x123e244e */
  if (C.zf) goto L_123e244e;
  /* 123e23f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e23f5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e23f8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e23f9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e23fb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123e23fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e2400 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e2403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2406 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 123e2409 push eax */
  push32((uint32_t)(EAX));
  /* 123e240a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e240d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123e240f push edx */
  push32((uint32_t)(EDX));
  /* 123e2410 call 0x123e4ac0 */
  push32(0x123e2415u); f_123e4ac0();
  /* 123e2415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2418 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e241b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e241f jne 0x123e2432 */
  if (!C.zf) goto L_123e2432;
  /* 123e2421 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e2424 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2427 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 123e242b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e242e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123e2430 jmp 0x123e244c */
  goto L_123e244c;
L_123e2432:;
  /* 123e2432 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2436 jge 0x123e2443 */
  if ((C.sf==C.of)) goto L_123e2443;
  /* 123e2438 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e243b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e243e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 123e2441 jmp 0x123e244c */
  goto L_123e244c;
L_123e2443:;
  /* 123e2443 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e2446 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2449 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123e244c:;
  /* 123e244c jmp 0x123e23e4 */
  goto L_123e23e4;
L_123e244e:;
  /* 123e244e mov esp, ebp */
  ESP = (EBP);
  /* 123e2450 pop ebp */
  EBP = (pop32());
  /* 123e2451 ret  */
  ESPCHK(0x123e23d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012460 @ 0x123e2460 (186 bytes, 50 insns) */
void f_123e2460(void) {
  FTRACE(0x123e2460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2460 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2461 mov ebp, esp */
  EBP = (ESP);
  /* 123e2463 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2464 mov eax, dword ptr [0x12402a4c] */
  EAX = (r32((uint32_t)(0x12402a4c)));
  /* 123e2469 push eax */
  push32((uint32_t)(EAX));
  /* 123e246a call 0x123d9220 */
  push32(0x123e246fu); f_123d9220();
  /* 123e246f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2472 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e2474 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2477 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 123e247a mov dword ptr [0x12402a48], ecx */
  w32((uint32_t)(0x12402a48), (ECX));
  /* 123e2480 mov edx, dword ptr [0x12402a50] */
  EDX = (r32((uint32_t)(0x12402a50)));
  /* 123e2486 push edx */
  push32((uint32_t)(EDX));
  /* 123e2487 call 0x123d9220 */
  push32(0x123e248cu); f_123d9220();
  /* 123e248c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e248f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e2491 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2494 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 123e2497 mov dword ptr [0x12402a40], ecx */
  w32((uint32_t)(0x12402a40), (ECX));
  /* 123e249d mov dword ptr [0x12402a3c], 0 */
  w32((uint32_t)(0x12402a3c), (0x0u));
  /* 123e24a7 cmp dword ptr [0x12402a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e24ae je 0x123e24b9 */
  if (C.zf) goto L_123e24b9;
  /* 123e24b0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 123e24b7 jmp 0x123e24cb */
  goto L_123e24cb;
L_123e24b9:;
  /* 123e24b9 mov edx, dword ptr [0x12402a4c] */
  EDX = (r32((uint32_t)(0x12402a4c)));
  /* 123e24bf push edx */
  push32((uint32_t)(EDX));
  /* 123e24c0 call 0x123e2f00 */
  push32(0x123e24c5u); f_123e2f00();
  /* 123e24c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e24c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123e24cb:;
  /* 123e24cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e24ce mov dword ptr [0x12402a44], eax */
  w32((uint32_t)(0x12402a44), (EAX));
  /* 123e24d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e24d5 push 0x123e2520 */
  push32((uint32_t)(0x123e2520u));
  /* 123e24da call dword ptr [0x124052b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052b8))), 0x123e24e0u);
  /* 123e24e0 mov ecx, dword ptr [0x12402a54] */
  ECX = (r32((uint32_t)(0x12402a54)));
  /* 123e24e6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 123e24ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e24ee je 0x123e250c */
  if (C.zf) goto L_123e250c;
  /* 123e24f0 mov edx, dword ptr [0x12402a54] */
  EDX = (r32((uint32_t)(0x12402a54)));
  /* 123e24f6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 123e24fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e24fe je 0x123e250c */
  if (C.zf) goto L_123e250c;
  /* 123e2500 mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e2505 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 123e2508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e250a jne 0x123e2516 */
  if (!C.zf) goto L_123e2516;
L_123e250c:;
  /* 123e250c mov dword ptr [0x12402a54], 0 */
  w32((uint32_t)(0x12402a54), (0x0u));
L_123e2516:;
  /* 123e2516 mov esp, ebp */
  ESP = (EBP);
  /* 123e2518 pop ebp */
  EBP = (pop32());
  /* 123e2519 ret  */
  ESPCHK(0x123e2460u, _esp0);
  ESP += 4; return;
}

/* FUN_10012520 @ 0x123e2520 (804 bytes, 220 insns) */
void f_123e2520(void) {
  FTRACE(0x123e2520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2520 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2521 mov ebp, esp */
  EBP = (ESP);
  /* 123e2523 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2529 push eax */
  push32((uint32_t)(EAX));
  /* 123e252a call 0x123e2e80 */
  push32(0x123e252fu); f_123e2e80();
  /* 123e252f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2532 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 123e2535 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123e2537 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123e253a push ecx */
  push32((uint32_t)(ECX));
  /* 123e253b mov edx, dword ptr [0x12402a40] */
  EDX = (r32((uint32_t)(0x12402a40)));
  /* 123e2541 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e2543 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2545 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 123e254b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2551 push edx */
  push32((uint32_t)(EDX));
  /* 123e2552 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2555 push eax */
  push32((uint32_t)(EAX));
  /* 123e2556 call dword ptr [0x12402a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402a5c))), 0x123e255cu);
  /* 123e255c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e255e jne 0x123e2574 */
  if (!C.zf) goto L_123e2574;
  /* 123e2560 mov dword ptr [0x12402a54], 0 */
  w32((uint32_t)(0x12402a54), (0x0u));
  /* 123e256a mov eax, 1 */
  EAX = (0x1u);
  /* 123e256f jmp 0x123e283e */
  goto L_123e283e;
L_123e2574:;
  /* 123e2574 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123e2577 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2578 mov edx, dword ptr [0x12402a50] */
  EDX = (r32((uint32_t)(0x12402a50)));
  /* 123e257e push edx */
  push32((uint32_t)(EDX));
  /* 123e257f call 0x123e4ac0 */
  push32(0x123e2584u); f_123e4ac0();
  /* 123e2584 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2587 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2589 jne 0x123e26af */
  if (!C.zf) goto L_123e26af;
  /* 123e258f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123e2591 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123e2594 push eax */
  push32((uint32_t)(EAX));
  /* 123e2595 mov ecx, dword ptr [0x12402a48] */
  ECX = (r32((uint32_t)(0x12402a48)));
  /* 123e259b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e259d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e259f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 123e25a5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e25ab push ecx */
  push32((uint32_t)(ECX));
  /* 123e25ac mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e25af push edx */
  push32((uint32_t)(EDX));
  /* 123e25b0 call dword ptr [0x12402a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402a5c))), 0x123e25b6u);
  /* 123e25b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e25b8 jne 0x123e25ce */
  if (!C.zf) goto L_123e25ce;
  /* 123e25ba mov dword ptr [0x12402a54], 0 */
  w32((uint32_t)(0x12402a54), (0x0u));
  /* 123e25c4 mov eax, 1 */
  EAX = (0x1u);
  /* 123e25c9 jmp 0x123e283e */
  goto L_123e283e;
L_123e25ce:;
  /* 123e25ce lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123e25d1 push eax */
  push32((uint32_t)(EAX));
  /* 123e25d2 mov ecx, dword ptr [0x12402a4c] */
  ECX = (r32((uint32_t)(0x12402a4c)));
  /* 123e25d8 push ecx */
  push32((uint32_t)(ECX));
  /* 123e25d9 call 0x123e4ac0 */
  push32(0x123e25deu); f_123e4ac0();
  /* 123e25de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e25e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e25e3 jne 0x123e2610 */
  if (!C.zf) goto L_123e2610;
  /* 123e25e5 mov edx, dword ptr [0x12402a54] */
  EDX = (r32((uint32_t)(0x12402a54)));
  /* 123e25eb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 123e25f1 mov dword ptr [0x12402a54], edx */
  w32((uint32_t)(0x12402a54), (EDX));
  /* 123e25f7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e25fa mov dword ptr [0x12402a58], eax */
  w32((uint32_t)(0x12402a58), (EAX));
  /* 123e25ff mov ecx, dword ptr [0x12402a58] */
  ECX = (r32((uint32_t)(0x12402a58)));
  /* 123e2605 mov dword ptr [0x12402a3c], ecx */
  w32((uint32_t)(0x12402a3c), (ECX));
  /* 123e260b jmp 0x123e26af */
  goto L_123e26af;
L_123e2610:;
  /* 123e2610 mov edx, dword ptr [0x12402a54] */
  EDX = (r32((uint32_t)(0x12402a54)));
  /* 123e2616 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 123e2619 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e261b jne 0x123e26af */
  if (!C.zf) goto L_123e26af;
  /* 123e2621 cmp dword ptr [0x12402a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2628 je 0x123e267d */
  if (C.zf) goto L_123e267d;
  /* 123e262a mov eax, dword ptr [0x12402a44] */
  EAX = (r32((uint32_t)(0x12402a44)));
  /* 123e262f push eax */
  push32((uint32_t)(EAX));
  /* 123e2630 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123e2633 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2634 mov edx, dword ptr [0x12402a4c] */
  EDX = (r32((uint32_t)(0x12402a4c)));
  /* 123e263a push edx */
  push32((uint32_t)(EDX));
  /* 123e263b call 0x123e4b90 */
  push32(0x123e2640u); f_123e4b90();
  /* 123e2640 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2645 jne 0x123e267d */
  if (!C.zf) goto L_123e267d;
  /* 123e2647 mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e264c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 123e264e mov dword ptr [0x12402a54], eax */
  w32((uint32_t)(0x12402a54), (EAX));
  /* 123e2653 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2656 mov dword ptr [0x12402a58], ecx */
  w32((uint32_t)(0x12402a58), (ECX));
  /* 123e265c mov edx, dword ptr [0x12402a4c] */
  EDX = (r32((uint32_t)(0x12402a4c)));
  /* 123e2662 push edx */
  push32((uint32_t)(EDX));
  /* 123e2663 call 0x123d9220 */
  push32(0x123e2668u); f_123d9220();
  /* 123e2668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e266b cmp eax, dword ptr [0x12402a44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12402a44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2671 jne 0x123e267b */
  if (!C.zf) goto L_123e267b;
  /* 123e2673 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2676 mov dword ptr [0x12402a3c], eax */
  w32((uint32_t)(0x12402a3c), (EAX));
L_123e267b:;
  /* 123e267b jmp 0x123e26af */
  goto L_123e26af;
L_123e267d:;
  /* 123e267d mov ecx, dword ptr [0x12402a54] */
  ECX = (r32((uint32_t)(0x12402a54)));
  /* 123e2683 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123e2686 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e2688 jne 0x123e26af */
  if (!C.zf) goto L_123e26af;
  /* 123e268a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e268d push edx */
  push32((uint32_t)(EDX));
  /* 123e268e call 0x123e2bc0 */
  push32(0x123e2693u); f_123e2bc0();
  /* 123e2693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2698 je 0x123e26af */
  if (C.zf) goto L_123e26af;
  /* 123e269a mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e269f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 123e26a1 mov dword ptr [0x12402a54], eax */
  w32((uint32_t)(0x12402a54), (EAX));
  /* 123e26a6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e26a9 mov dword ptr [0x12402a58], ecx */
  w32((uint32_t)(0x12402a58), (ECX));
L_123e26af:;
  /* 123e26af mov edx, dword ptr [0x12402a54] */
  EDX = (r32((uint32_t)(0x12402a54)));
  /* 123e26b5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 123e26bb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e26c1 je 0x123e2831 */
  if (C.zf) goto L_123e2831;
  /* 123e26c7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123e26c9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123e26cc push eax */
  push32((uint32_t)(EAX));
  /* 123e26cd mov ecx, dword ptr [0x12402a48] */
  ECX = (r32((uint32_t)(0x12402a48)));
  /* 123e26d3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e26d5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e26d7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 123e26dd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e26e3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e26e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e26e7 push edx */
  push32((uint32_t)(EDX));
  /* 123e26e8 call dword ptr [0x12402a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402a5c))), 0x123e26eeu);
  /* 123e26ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e26f0 jne 0x123e2706 */
  if (!C.zf) goto L_123e2706;
  /* 123e26f2 mov dword ptr [0x12402a54], 0 */
  w32((uint32_t)(0x12402a54), (0x0u));
  /* 123e26fc mov eax, 1 */
  EAX = (0x1u);
  /* 123e2701 jmp 0x123e283e */
  goto L_123e283e;
L_123e2706:;
  /* 123e2706 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123e2709 push eax */
  push32((uint32_t)(EAX));
  /* 123e270a mov ecx, dword ptr [0x12402a4c] */
  ECX = (r32((uint32_t)(0x12402a4c)));
  /* 123e2710 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2711 call 0x123e4ac0 */
  push32(0x123e2716u); f_123e4ac0();
  /* 123e2716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e271b jne 0x123e27d0 */
  if (!C.zf) goto L_123e27d0;
  /* 123e2721 mov edx, dword ptr [0x12402a54] */
  EDX = (r32((uint32_t)(0x12402a54)));
  /* 123e2727 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 123e272a mov dword ptr [0x12402a54], edx */
  w32((uint32_t)(0x12402a54), (EDX));
  /* 123e2730 cmp dword ptr [0x12402a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2737 je 0x123e275a */
  if (C.zf) goto L_123e275a;
  /* 123e2739 mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e273e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 123e2741 mov dword ptr [0x12402a54], eax */
  w32((uint32_t)(0x12402a54), (EAX));
  /* 123e2746 cmp dword ptr [0x12402a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e274d jne 0x123e2758 */
  if (!C.zf) goto L_123e2758;
  /* 123e274f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2752 mov dword ptr [0x12402a3c], ecx */
  w32((uint32_t)(0x12402a3c), (ECX));
L_123e2758:;
  /* 123e2758 jmp 0x123e27ce */
  goto L_123e27ce;
L_123e275a:;
  /* 123e275a cmp dword ptr [0x12402a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2761 je 0x123e27af */
  if (C.zf) goto L_123e27af;
  /* 123e2763 mov edx, dword ptr [0x12402a4c] */
  EDX = (r32((uint32_t)(0x12402a4c)));
  /* 123e2769 push edx */
  push32((uint32_t)(EDX));
  /* 123e276a call 0x123d9220 */
  push32(0x123e276fu); f_123d9220();
  /* 123e276f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2772 cmp eax, dword ptr [0x12402a44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12402a44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2778 jne 0x123e27af */
  if (!C.zf) goto L_123e27af;
  /* 123e277a push 1 */
  push32((uint32_t)(0x1u));
  /* 123e277c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e277f push eax */
  push32((uint32_t)(EAX));
  /* 123e2780 call 0x123e2c10 */
  push32(0x123e2785u); f_123e2c10();
  /* 123e2785 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e278a je 0x123e27ad */
  if (C.zf) goto L_123e27ad;
  /* 123e278c mov ecx, dword ptr [0x12402a54] */
  ECX = (r32((uint32_t)(0x12402a54)));
  /* 123e2792 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 123e2795 mov dword ptr [0x12402a54], ecx */
  w32((uint32_t)(0x12402a54), (ECX));
  /* 123e279b cmp dword ptr [0x12402a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e27a2 jne 0x123e27ad */
  if (!C.zf) goto L_123e27ad;
  /* 123e27a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e27a7 mov dword ptr [0x12402a3c], edx */
  w32((uint32_t)(0x12402a3c), (EDX));
L_123e27ad:;
  /* 123e27ad jmp 0x123e27ce */
  goto L_123e27ce;
L_123e27af:;
  /* 123e27af mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e27b4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 123e27b7 mov dword ptr [0x12402a54], eax */
  w32((uint32_t)(0x12402a54), (EAX));
  /* 123e27bc cmp dword ptr [0x12402a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e27c3 jne 0x123e27ce */
  if (!C.zf) goto L_123e27ce;
  /* 123e27c5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e27c8 mov dword ptr [0x12402a3c], ecx */
  w32((uint32_t)(0x12402a3c), (ECX));
L_123e27ce:;
  /* 123e27ce jmp 0x123e2831 */
  goto L_123e2831;
L_123e27d0:;
  /* 123e27d0 cmp dword ptr [0x12402a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e27d7 jne 0x123e2831 */
  if (!C.zf) goto L_123e2831;
  /* 123e27d9 cmp dword ptr [0x12402a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e27e0 je 0x123e2831 */
  if (C.zf) goto L_123e2831;
  /* 123e27e2 mov edx, dword ptr [0x12402a44] */
  EDX = (r32((uint32_t)(0x12402a44)));
  /* 123e27e8 push edx */
  push32((uint32_t)(EDX));
  /* 123e27e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123e27ec push eax */
  push32((uint32_t)(EAX));
  /* 123e27ed mov ecx, dword ptr [0x12402a4c] */
  ECX = (r32((uint32_t)(0x12402a4c)));
  /* 123e27f3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e27f4 call 0x123e4b90 */
  push32(0x123e27f9u); f_123e4b90();
  /* 123e27f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e27fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e27fe jne 0x123e2831 */
  if (!C.zf) goto L_123e2831;
  /* 123e2800 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e2802 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2805 push edx */
  push32((uint32_t)(EDX));
  /* 123e2806 call 0x123e2c10 */
  push32(0x123e280bu); f_123e2c10();
  /* 123e280b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e280e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2810 je 0x123e2831 */
  if (C.zf) goto L_123e2831;
  /* 123e2812 mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e2817 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 123e281a mov dword ptr [0x12402a54], eax */
  w32((uint32_t)(0x12402a54), (EAX));
  /* 123e281f cmp dword ptr [0x12402a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2826 jne 0x123e2831 */
  if (!C.zf) goto L_123e2831;
  /* 123e2828 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e282b mov dword ptr [0x12402a3c], ecx */
  w32((uint32_t)(0x12402a3c), (ECX));
L_123e2831:;
  /* 123e2831 mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e2836 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123e2839 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e283b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e283d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_123e283e:;
  /* 123e283e mov esp, ebp */
  ESP = (EBP);
  /* 123e2840 pop ebp */
  EBP = (pop32());
  /* 123e2841 ret 4 */
  ESPCHK(0x123e2520u, _esp0);
  ESP += 8; return;
}

/* FUN_10012850 @ 0x123e2850 (116 bytes, 33 insns) */
void f_123e2850(void) {
  FTRACE(0x123e2850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2850 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2851 mov ebp, esp */
  EBP = (ESP);
  /* 123e2853 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2854 mov eax, dword ptr [0x12402a4c] */
  EAX = (r32((uint32_t)(0x12402a4c)));
  /* 123e2859 push eax */
  push32((uint32_t)(EAX));
  /* 123e285a call 0x123d9220 */
  push32(0x123e285fu); f_123d9220();
  /* 123e285f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2862 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e2864 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2867 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 123e286a mov dword ptr [0x12402a48], ecx */
  w32((uint32_t)(0x12402a48), (ECX));
  /* 123e2870 cmp dword ptr [0x12402a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2877 je 0x123e2882 */
  if (C.zf) goto L_123e2882;
  /* 123e2879 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 123e2880 jmp 0x123e2894 */
  goto L_123e2894;
L_123e2882:;
  /* 123e2882 mov edx, dword ptr [0x12402a4c] */
  EDX = (r32((uint32_t)(0x12402a4c)));
  /* 123e2888 push edx */
  push32((uint32_t)(EDX));
  /* 123e2889 call 0x123e2f00 */
  push32(0x123e288eu); f_123e2f00();
  /* 123e288e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2891 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123e2894:;
  /* 123e2894 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e2897 mov dword ptr [0x12402a44], eax */
  w32((uint32_t)(0x12402a44), (EAX));
  /* 123e289c push 1 */
  push32((uint32_t)(0x1u));
  /* 123e289e push 0x123e28d0 */
  push32((uint32_t)(0x123e28d0u));
  /* 123e28a3 call dword ptr [0x124052b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052b8))), 0x123e28a9u);
  /* 123e28a9 mov ecx, dword ptr [0x12402a54] */
  ECX = (r32((uint32_t)(0x12402a54)));
  /* 123e28af and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123e28b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e28b4 jne 0x123e28c0 */
  if (!C.zf) goto L_123e28c0;
  /* 123e28b6 mov dword ptr [0x12402a54], 0 */
  w32((uint32_t)(0x12402a54), (0x0u));
L_123e28c0:;
  /* 123e28c0 mov esp, ebp */
  ESP = (EBP);
  /* 123e28c2 pop ebp */
  EBP = (pop32());
  /* 123e28c3 ret  */
  ESPCHK(0x123e2850u, _esp0);
  ESP += 4; return;
}

/* FUN_100128d0 @ 0x123e28d0 (287 bytes, 86 insns) */
void f_123e28d0(void) {
  FTRACE(0x123e28d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e28d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e28d1 mov ebp, esp */
  EBP = (ESP);
  /* 123e28d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e28d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e28d9 push eax */
  push32((uint32_t)(EAX));
  /* 123e28da call 0x123e2e80 */
  push32(0x123e28dfu); f_123e2e80();
  /* 123e28df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e28e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 123e28e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123e28e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123e28ea push ecx */
  push32((uint32_t)(ECX));
  /* 123e28eb mov edx, dword ptr [0x12402a48] */
  EDX = (r32((uint32_t)(0x12402a48)));
  /* 123e28f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e28f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e28f5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 123e28fb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2901 push edx */
  push32((uint32_t)(EDX));
  /* 123e2902 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2905 push eax */
  push32((uint32_t)(EAX));
  /* 123e2906 call dword ptr [0x12402a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402a5c))), 0x123e290cu);
  /* 123e290c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e290e jne 0x123e2924 */
  if (!C.zf) goto L_123e2924;
  /* 123e2910 mov dword ptr [0x12402a54], 0 */
  w32((uint32_t)(0x12402a54), (0x0u));
  /* 123e291a mov eax, 1 */
  EAX = (0x1u);
  /* 123e291f jmp 0x123e29e9 */
  goto L_123e29e9;
L_123e2924:;
  /* 123e2924 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123e2927 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2928 mov edx, dword ptr [0x12402a4c] */
  EDX = (r32((uint32_t)(0x12402a4c)));
  /* 123e292e push edx */
  push32((uint32_t)(EDX));
  /* 123e292f call 0x123e4ac0 */
  push32(0x123e2934u); f_123e4ac0();
  /* 123e2934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2937 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2939 jne 0x123e2979 */
  if (!C.zf) goto L_123e2979;
  /* 123e293b cmp dword ptr [0x12402a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2942 jne 0x123e2956 */
  if (!C.zf) goto L_123e2956;
  /* 123e2944 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e2946 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2949 push eax */
  push32((uint32_t)(EAX));
  /* 123e294a call 0x123e2c10 */
  push32(0x123e294fu); f_123e2c10();
  /* 123e294f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2954 je 0x123e2977 */
  if (C.zf) goto L_123e2977;
L_123e2956:;
  /* 123e2956 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2959 mov dword ptr [0x12402a58], ecx */
  w32((uint32_t)(0x12402a58), (ECX));
  /* 123e295f mov edx, dword ptr [0x12402a58] */
  EDX = (r32((uint32_t)(0x12402a58)));
  /* 123e2965 mov dword ptr [0x12402a3c], edx */
  w32((uint32_t)(0x12402a3c), (EDX));
  /* 123e296b mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e2970 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 123e2972 mov dword ptr [0x12402a54], eax */
  w32((uint32_t)(0x12402a54), (EAX));
L_123e2977:;
  /* 123e2977 jmp 0x123e29dc */
  goto L_123e29dc;
L_123e2979:;
  /* 123e2979 cmp dword ptr [0x12402a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2980 jne 0x123e29dc */
  if (!C.zf) goto L_123e29dc;
  /* 123e2982 cmp dword ptr [0x12402a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2989 je 0x123e29dc */
  if (C.zf) goto L_123e29dc;
  /* 123e298b mov ecx, dword ptr [0x12402a44] */
  ECX = (r32((uint32_t)(0x12402a44)));
  /* 123e2991 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2992 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 123e2995 push edx */
  push32((uint32_t)(EDX));
  /* 123e2996 mov eax, dword ptr [0x12402a4c] */
  EAX = (r32((uint32_t)(0x12402a4c)));
  /* 123e299b push eax */
  push32((uint32_t)(EAX));
  /* 123e299c call 0x123e4b90 */
  push32(0x123e29a1u); f_123e4b90();
  /* 123e29a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e29a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e29a6 jne 0x123e29dc */
  if (!C.zf) goto L_123e29dc;
  /* 123e29a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e29aa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e29ad push ecx */
  push32((uint32_t)(ECX));
  /* 123e29ae call 0x123e2c10 */
  push32(0x123e29b3u); f_123e2c10();
  /* 123e29b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e29b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e29b8 je 0x123e29dc */
  if (C.zf) goto L_123e29dc;
  /* 123e29ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e29bd mov dword ptr [0x12402a58], edx */
  w32((uint32_t)(0x12402a58), (EDX));
  /* 123e29c3 mov eax, dword ptr [0x12402a58] */
  EAX = (r32((uint32_t)(0x12402a58)));
  /* 123e29c8 mov dword ptr [0x12402a3c], eax */
  w32((uint32_t)(0x12402a3c), (EAX));
  /* 123e29cd mov ecx, dword ptr [0x12402a54] */
  ECX = (r32((uint32_t)(0x12402a54)));
  /* 123e29d3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123e29d6 mov dword ptr [0x12402a54], ecx */
  w32((uint32_t)(0x12402a54), (ECX));
L_123e29dc:;
  /* 123e29dc mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e29e1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123e29e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e29e6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e29e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_123e29e9:;
  /* 123e29e9 mov esp, ebp */
  ESP = (EBP);
  /* 123e29eb pop ebp */
  EBP = (pop32());
  /* 123e29ec ret 4 */
  ESPCHK(0x123e28d0u, _esp0);
  ESP += 8; return;
}

/* FUN_100129f0 @ 0x123e29f0 (69 bytes, 20 insns) */
void f_123e29f0(void) {
  FTRACE(0x123e29f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e29f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e29f1 mov ebp, esp */
  EBP = (ESP);
  /* 123e29f3 mov eax, dword ptr [0x12402a50] */
  EAX = (r32((uint32_t)(0x12402a50)));
  /* 123e29f8 push eax */
  push32((uint32_t)(EAX));
  /* 123e29f9 call 0x123d9220 */
  push32(0x123e29feu); f_123d9220();
  /* 123e29fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2a01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e2a03 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2a06 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 123e2a09 mov dword ptr [0x12402a40], ecx */
  w32((uint32_t)(0x12402a40), (ECX));
  /* 123e2a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 123e2a11 push 0x123e2a40 */
  push32((uint32_t)(0x123e2a40u));
  /* 123e2a16 call dword ptr [0x124052b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052b8))), 0x123e2a1cu);
  /* 123e2a1c mov edx, dword ptr [0x12402a54] */
  EDX = (r32((uint32_t)(0x12402a54)));
  /* 123e2a22 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123e2a25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e2a27 jne 0x123e2a33 */
  if (!C.zf) goto L_123e2a33;
  /* 123e2a29 mov dword ptr [0x12402a54], 0 */
  w32((uint32_t)(0x12402a54), (0x0u));
L_123e2a33:;
  /* 123e2a33 pop ebp */
  EBP = (pop32());
  /* 123e2a34 ret  */
  ESPCHK(0x123e29f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a40 @ 0x123e2a40 (172 bytes, 54 insns) */
void f_123e2a40(void) {
  FTRACE(0x123e2a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2a40 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2a41 mov ebp, esp */
  EBP = (ESP);
  /* 123e2a43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2a49 push eax */
  push32((uint32_t)(EAX));
  /* 123e2a4a call 0x123e2e80 */
  push32(0x123e2a4fu); f_123e2e80();
  /* 123e2a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2a52 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 123e2a55 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123e2a57 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123e2a5a push ecx */
  push32((uint32_t)(ECX));
  /* 123e2a5b mov edx, dword ptr [0x12402a40] */
  EDX = (r32((uint32_t)(0x12402a40)));
  /* 123e2a61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e2a63 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2a65 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 123e2a6b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2a71 push edx */
  push32((uint32_t)(EDX));
  /* 123e2a72 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2a75 push eax */
  push32((uint32_t)(EAX));
  /* 123e2a76 call dword ptr [0x12402a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402a5c))), 0x123e2a7cu);
  /* 123e2a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2a7e jne 0x123e2a91 */
  if (!C.zf) goto L_123e2a91;
  /* 123e2a80 mov dword ptr [0x12402a54], 0 */
  w32((uint32_t)(0x12402a54), (0x0u));
  /* 123e2a8a mov eax, 1 */
  EAX = (0x1u);
  /* 123e2a8f jmp 0x123e2ae6 */
  goto L_123e2ae6;
L_123e2a91:;
  /* 123e2a91 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123e2a94 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2a95 mov edx, dword ptr [0x12402a50] */
  EDX = (r32((uint32_t)(0x12402a50)));
  /* 123e2a9b push edx */
  push32((uint32_t)(EDX));
  /* 123e2a9c call 0x123e4ac0 */
  push32(0x123e2aa1u); f_123e4ac0();
  /* 123e2aa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2aa6 jne 0x123e2ad9 */
  if (!C.zf) goto L_123e2ad9;
  /* 123e2aa8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2aab push eax */
  push32((uint32_t)(EAX));
  /* 123e2aac call 0x123e2bc0 */
  push32(0x123e2ab1u); f_123e2bc0();
  /* 123e2ab1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2ab6 je 0x123e2ad9 */
  if (C.zf) goto L_123e2ad9;
  /* 123e2ab8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123e2abb mov dword ptr [0x12402a58], ecx */
  w32((uint32_t)(0x12402a58), (ECX));
  /* 123e2ac1 mov edx, dword ptr [0x12402a58] */
  EDX = (r32((uint32_t)(0x12402a58)));
  /* 123e2ac7 mov dword ptr [0x12402a3c], edx */
  w32((uint32_t)(0x12402a3c), (EDX));
  /* 123e2acd mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e2ad2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 123e2ad4 mov dword ptr [0x12402a54], eax */
  w32((uint32_t)(0x12402a54), (EAX));
L_123e2ad9:;
  /* 123e2ad9 mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e2ade and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123e2ae1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123e2ae3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2ae5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_123e2ae6:;
  /* 123e2ae6 mov esp, ebp */
  ESP = (EBP);
  /* 123e2ae8 pop ebp */
  EBP = (pop32());
  /* 123e2ae9 ret 4 */
  ESPCHK(0x123e2a40u, _esp0);
  ESP += 8; return;
}

/* FUN_10012af0 @ 0x123e2af0 (43 bytes, 11 insns) */
void f_123e2af0(void) {
  FTRACE(0x123e2af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2af0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2af1 mov ebp, esp */
  EBP = (ESP);
  /* 123e2af3 mov eax, dword ptr [0x12402a54] */
  EAX = (r32((uint32_t)(0x12402a54)));
  /* 123e2af8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 123e2afd mov dword ptr [0x12402a54], eax */
  w32((uint32_t)(0x12402a54), (EAX));
  /* 123e2b02 call dword ptr [0x124052a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052a8))), 0x123e2b08u);
  /* 123e2b08 mov dword ptr [0x12402a58], eax */
  w32((uint32_t)(0x12402a58), (EAX));
  /* 123e2b0d mov ecx, dword ptr [0x12402a58] */
  ECX = (r32((uint32_t)(0x12402a58)));
  /* 123e2b13 mov dword ptr [0x12402a3c], ecx */
  w32((uint32_t)(0x12402a3c), (ECX));
  /* 123e2b19 pop ebp */
  EBP = (pop32());
  /* 123e2b1a ret  */
  ESPCHK(0x123e2af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b20 @ 0x123e2b20 (155 bytes, 57 insns) */
void f_123e2b20(void) {
  FTRACE(0x123e2b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2b20 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2b21 mov ebp, esp */
  EBP = (ESP);
  /* 123e2b23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2b26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2b2a je 0x123e2b4b */
  if (C.zf) goto L_123e2b4b;
  /* 123e2b2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2b2f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123e2b32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e2b34 je 0x123e2b4b */
  if (C.zf) goto L_123e2b4b;
  /* 123e2b36 push 0x123fed3c */
  push32((uint32_t)(0x123fed3cu));
  /* 123e2b3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2b3e push edx */
  push32((uint32_t)(EDX));
  /* 123e2b3f call 0x123e2080 */
  push32(0x123e2b44u); f_123e2080();
  /* 123e2b44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2b47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2b49 jne 0x123e2b73 */
  if (!C.zf) goto L_123e2b73;
L_123e2b4b:;
  /* 123e2b4b push 8 */
  push32((uint32_t)(0x8u));
  /* 123e2b4d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 123e2b50 push eax */
  push32((uint32_t)(EAX));
  /* 123e2b51 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 123e2b56 mov ecx, dword ptr [0x12402a58] */
  ECX = (r32((uint32_t)(0x12402a58)));
  /* 123e2b5c push ecx */
  push32((uint32_t)(ECX));
  /* 123e2b5d call dword ptr [0x12402a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402a5c))), 0x123e2b63u);
  /* 123e2b63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2b65 jne 0x123e2b6b */
  if (!C.zf) goto L_123e2b6b;
  /* 123e2b67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e2b69 jmp 0x123e2bb7 */
  goto L_123e2bb7;
L_123e2b6b:;
  /* 123e2b6b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 123e2b6e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123e2b71 jmp 0x123e2bab */
  goto L_123e2bab;
L_123e2b73:;
  /* 123e2b73 push 0x123fed38 */
  push32((uint32_t)(0x123fed38u));
  /* 123e2b78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2b7b push eax */
  push32((uint32_t)(EAX));
  /* 123e2b7c call 0x123e2080 */
  push32(0x123e2b81u); f_123e2080();
  /* 123e2b81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2b86 jne 0x123e2bab */
  if (!C.zf) goto L_123e2bab;
  /* 123e2b88 push 8 */
  push32((uint32_t)(0x8u));
  /* 123e2b8a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 123e2b8d push ecx */
  push32((uint32_t)(ECX));
  /* 123e2b8e push 0xb */
  push32((uint32_t)(0xbu));
  /* 123e2b90 mov edx, dword ptr [0x12402a58] */
  EDX = (r32((uint32_t)(0x12402a58)));
  /* 123e2b96 push edx */
  push32((uint32_t)(EDX));
  /* 123e2b97 call dword ptr [0x12402a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402a5c))), 0x123e2b9du);
  /* 123e2b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2b9f jne 0x123e2ba5 */
  if (!C.zf) goto L_123e2ba5;
  /* 123e2ba1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e2ba3 jmp 0x123e2bb7 */
  goto L_123e2bb7;
L_123e2ba5:;
  /* 123e2ba5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 123e2ba8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123e2bab:;
  /* 123e2bab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2bae push ecx */
  push32((uint32_t)(ECX));
  /* 123e2baf call 0x123e4ca0 */
  push32(0x123e2bb4u); f_123e4ca0();
  /* 123e2bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123e2bb7:;
  /* 123e2bb7 mov esp, ebp */
  ESP = (EBP);
  /* 123e2bb9 pop ebp */
  EBP = (pop32());
  /* 123e2bba ret  */
  ESPCHK(0x123e2b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bc0 @ 0x123e2bc0 (79 bytes, 26 insns) */
void f_123e2bc0(void) {
  FTRACE(0x123e2bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2bc1 mov ebp, esp */
  EBP = (ESP);
  /* 123e2bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2bc6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 123e2bca mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 123e2bce mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123e2bd5 jmp 0x123e2be0 */
  goto L_123e2be0;
L_123e2bd7:;
  /* 123e2bd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e2bda add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2bdd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123e2be0:;
  /* 123e2be0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2be4 jae 0x123e2c06 */
  if (!C.cf) goto L_123e2c06;
  /* 123e2be6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e2be9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123e2bef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e2bf2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123e2bf4 mov cx, word ptr [eax*2 + 0x124019c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x124019c4)));
  /* 123e2bfc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2bfe jne 0x123e2c04 */
  if (!C.zf) goto L_123e2c04;
  /* 123e2c00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e2c02 jmp 0x123e2c0b */
  goto L_123e2c0b;
L_123e2c04:;
  /* 123e2c04 jmp 0x123e2bd7 */
  goto L_123e2bd7;
L_123e2c06:;
  /* 123e2c06 mov eax, 1 */
  EAX = (0x1u);
L_123e2c0b:;
  /* 123e2c0b mov esp, ebp */
  ESP = (EBP);
  /* 123e2c0d pop ebp */
  EBP = (pop32());
  /* 123e2c0e ret  */
  ESPCHK(0x123e2bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c10 @ 0x123e2c10 (135 bytes, 48 insns) */
void f_123e2c10(void) {
  FTRACE(0x123e2c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2c10 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2c11 mov ebp, esp */
  EBP = (ESP);
  /* 123e2c13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2c16 push esi */
  push32((uint32_t)(ESI));
  /* 123e2c17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2c1a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e2c1f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e2c24 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e2c29 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 123e2c2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e2c31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e2c34 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123e2c36 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 123e2c39 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2c3a push 1 */
  push32((uint32_t)(0x1u));
  /* 123e2c3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e2c3f push edx */
  push32((uint32_t)(EDX));
  /* 123e2c40 call dword ptr [0x12402a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402a5c))), 0x123e2c46u);
  /* 123e2c46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2c48 jne 0x123e2c4e */
  if (!C.zf) goto L_123e2c4e;
  /* 123e2c4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e2c4c jmp 0x123e2c92 */
  goto L_123e2c92;
L_123e2c4e:;
  /* 123e2c4e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 123e2c51 push eax */
  push32((uint32_t)(EAX));
  /* 123e2c52 call 0x123e2e80 */
  push32(0x123e2c57u); f_123e2e80();
  /* 123e2c57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2c5a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2c5d je 0x123e2c8d */
  if (C.zf) goto L_123e2c8d;
  /* 123e2c5f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2c63 je 0x123e2c8d */
  if (C.zf) goto L_123e2c8d;
  /* 123e2c65 mov ecx, dword ptr [0x12402a4c] */
  ECX = (r32((uint32_t)(0x12402a4c)));
  /* 123e2c6b push ecx */
  push32((uint32_t)(ECX));
  /* 123e2c6c call 0x123e2f00 */
  push32(0x123e2c71u); f_123e2f00();
  /* 123e2c71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2c74 mov esi, eax */
  ESI = (EAX);
  /* 123e2c76 mov edx, dword ptr [0x12402a4c] */
  EDX = (r32((uint32_t)(0x12402a4c)));
  /* 123e2c7c push edx */
  push32((uint32_t)(EDX));
  /* 123e2c7d call 0x123d9220 */
  push32(0x123e2c82u); f_123d9220();
  /* 123e2c82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2c85 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2c87 jne 0x123e2c8d */
  if (!C.zf) goto L_123e2c8d;
  /* 123e2c89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e2c8b jmp 0x123e2c92 */
  goto L_123e2c92;
L_123e2c8d:;
  /* 123e2c8d mov eax, 1 */
  EAX = (0x1u);
L_123e2c92:;
  /* 123e2c92 pop esi */
  ESI = (pop32());
  /* 123e2c93 mov esp, ebp */
  ESP = (EBP);
  /* 123e2c95 pop ebp */
  EBP = (pop32());
  /* 123e2c96 ret  */
  ESPCHK(0x123e2c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ca0 @ 0x123e2ca0 (77 bytes, 18 insns) */
void f_123e2ca0(void) {
  FTRACE(0x123e2ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2ca1 mov ebp, esp */
  EBP = (ESP);
  /* 123e2ca3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2ca9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 123e2cb3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 123e2cb9 push eax */
  push32((uint32_t)(EAX));
  /* 123e2cba call dword ptr [0x124052a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052a4))), 0x123e2cc0u);
  /* 123e2cc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e2cc2 je 0x123e2cd9 */
  if (C.zf) goto L_123e2cd9;
  /* 123e2cc4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2ccb jne 0x123e2cd9 */
  if (!C.zf) goto L_123e2cd9;
  /* 123e2ccd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 123e2cd7 jmp 0x123e2ce3 */
  goto L_123e2ce3;
L_123e2cd9:;
  /* 123e2cd9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_123e2ce3:;
  /* 123e2ce3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 123e2ce9 mov esp, ebp */
  ESP = (EBP);
  /* 123e2ceb pop ebp */
  EBP = (pop32());
  /* 123e2cec ret  */
  ESPCHK(0x123e2ca0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x123e2cf0 (388 bytes, 118 insns) */
void f_123e2cf0(void) {
  FTRACE(0x123e2cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2cf1 mov ebp, esp */
  EBP = (ESP);
  /* 123e2cf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2cf6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e2cfd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 123e2d04 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123e2d0b:;
  /* 123e2d0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e2d0e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2d11 jg 0x123e2e58 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e2e58;
  /* 123e2d17 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e2d1a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2d1d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123e2d1e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2d20 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123e2d22 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e2d25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2d28 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e2d2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2d2e cmp edx, dword ptr [ecx + 0x12401520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12401520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2d34 jne 0x123e2e2e */
  if (!C.zf) goto L_123e2e2e;
  /* 123e2d3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e2d3d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123e2d40 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2d44 ja 0x123e2d67 */
  if ((!C.cf&&!C.zf)) goto L_123e2d67;
  /* 123e2d46 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2d4a je 0x123e2dd9 */
  if (C.zf) goto L_123e2dd9;
  /* 123e2d50 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2d54 je 0x123e2d84 */
  if (C.zf) goto L_123e2d84;
  /* 123e2d56 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2d5a je 0x123e2da6 */
  if (C.zf) goto L_123e2da6;
  /* 123e2d5c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2d60 je 0x123e2dc8 */
  if (C.zf) goto L_123e2dc8;
  /* 123e2d62 jmp 0x123e2df8 */
  goto L_123e2df8;
L_123e2d67:;
  /* 123e2d67 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2d6e je 0x123e2d95 */
  if (C.zf) goto L_123e2d95;
  /* 123e2d70 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2d77 je 0x123e2db7 */
  if (C.zf) goto L_123e2db7;
  /* 123e2d79 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2d80 je 0x123e2dea */
  if (C.zf) goto L_123e2dea;
  /* 123e2d82 jmp 0x123e2df8 */
  goto L_123e2df8;
L_123e2d84:;
  /* 123e2d84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2d87 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e2d8a add ecx, 0x12401524 */
  { uint32_t _a=(ECX),_b=(0x12401524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2d90 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e2d93 jmp 0x123e2df8 */
  goto L_123e2df8;
L_123e2d95:;
  /* 123e2d95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2d98 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e2d9b mov eax, dword ptr [edx + 0x1240152c] */
  EAX = (r32((uint32_t)(EDX + 0x1240152c)));
  /* 123e2da1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e2da4 jmp 0x123e2df8 */
  goto L_123e2df8;
L_123e2da6:;
  /* 123e2da6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2da9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e2dac add ecx, 0x12401530 */
  { uint32_t _a=(ECX),_b=(0x12401530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2db2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e2db5 jmp 0x123e2df8 */
  goto L_123e2df8;
L_123e2db7:;
  /* 123e2db7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2dba imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e2dbd mov eax, dword ptr [edx + 0x12401534] */
  EAX = (r32((uint32_t)(EDX + 0x12401534)));
  /* 123e2dc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e2dc6 jmp 0x123e2df8 */
  goto L_123e2df8;
L_123e2dc8:;
  /* 123e2dc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2dcb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e2dce add ecx, 0x12401538 */
  { uint32_t _a=(ECX),_b=(0x12401538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2dd4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e2dd7 jmp 0x123e2df8 */
  goto L_123e2df8;
L_123e2dd9:;
  /* 123e2dd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2ddc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e2ddf add edx, 0x1240153c */
  { uint32_t _a=(EDX),_b=(0x1240153cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2de5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e2de8 jmp 0x123e2df8 */
  goto L_123e2df8;
L_123e2dea:;
  /* 123e2dea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2ded imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e2df0 add eax, 0x12401544 */
  { uint32_t _a=(EAX),_b=(0x12401544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2df5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123e2df8:;
  /* 123e2df8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2dfc je 0x123e2e04 */
  if (C.zf) goto L_123e2e04;
  /* 123e2dfe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2e02 jge 0x123e2e06 */
  if ((C.sf==C.of)) goto L_123e2e06;
L_123e2e04:;
  /* 123e2e04 jmp 0x123e2e58 */
  goto L_123e2e58;
L_123e2e06:;
  /* 123e2e06 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e2e09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2e0c push ecx */
  push32((uint32_t)(ECX));
  /* 123e2e0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e2e10 push edx */
  push32((uint32_t)(EDX));
  /* 123e2e11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e2e14 push eax */
  push32((uint32_t)(EAX));
  /* 123e2e15 call 0x123d9c10 */
  push32(0x123e2e1au); f_123d9c10();
  /* 123e2e1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2e1d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e2e20 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2e23 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 123e2e27 mov eax, 1 */
  EAX = (0x1u);
  /* 123e2e2c jmp 0x123e2e6e */
  goto L_123e2e6e;
L_123e2e2e:;
  /* 123e2e2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2e31 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e2e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2e37 cmp eax, dword ptr [edx + 0x12401520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12401520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2e3d jae 0x123e2e4a */
  if (!C.cf) goto L_123e2e4a;
  /* 123e2e3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2e42 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2e45 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123e2e48 jmp 0x123e2e53 */
  goto L_123e2e53;
L_123e2e4a:;
  /* 123e2e4a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e2e4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2e50 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123e2e53:;
  /* 123e2e53 jmp 0x123e2d0b */
  goto L_123e2d0b;
L_123e2e58:;
  /* 123e2e58 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e2e5b push eax */
  push32((uint32_t)(EAX));
  /* 123e2e5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e2e5f push ecx */
  push32((uint32_t)(ECX));
  /* 123e2e60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e2e63 push edx */
  push32((uint32_t)(EDX));
  /* 123e2e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2e67 push eax */
  push32((uint32_t)(EAX));
  /* 123e2e68 call dword ptr [0x124052b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052b0))), 0x123e2e6eu);
L_123e2e6e:;
  /* 123e2e6e mov esp, ebp */
  ESP = (EBP);
  /* 123e2e70 pop ebp */
  EBP = (pop32());
  /* 123e2e71 ret 0x10 */
  ESPCHK(0x123e2cf0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012e80 @ 0x123e2e80 (118 bytes, 42 insns) */
void f_123e2e80(void) {
  FTRACE(0x123e2e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2e80 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2e81 mov ebp, esp */
  EBP = (ESP);
  /* 123e2e83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2e86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123e2e8d:;
  /* 123e2e8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2e90 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e2e92 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 123e2e95 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e2e99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2e9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2e9f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123e2ea2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e2ea4 je 0x123e2eef */
  if (C.zf) goto L_123e2eef;
  /* 123e2ea6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e2eaa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2ead jl 0x123e2ec2 */
  if ((C.sf!=C.of)) goto L_123e2ec2;
  /* 123e2eaf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e2eb3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2eb6 jg 0x123e2ec2 */
  if ((!C.zf&&C.sf==C.of)) goto L_123e2ec2;
  /* 123e2eb8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 123e2ebb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123e2ebd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 123e2ec0 jmp 0x123e2edc */
  goto L_123e2edc;
L_123e2ec2:;
  /* 123e2ec2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e2ec6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2ec9 jl 0x123e2edc */
  if ((C.sf!=C.of)) goto L_123e2edc;
  /* 123e2ecb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e2ecf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2ed2 jg 0x123e2edc */
  if ((!C.zf&&C.sf==C.of)) goto L_123e2edc;
  /* 123e2ed4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 123e2ed7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123e2ed9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_123e2edc:;
  /* 123e2edc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e2edf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 123e2ee2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123e2ee6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 123e2eea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e2eed jmp 0x123e2e8d */
  goto L_123e2e8d;
L_123e2eef:;
  /* 123e2eef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e2ef2 mov esp, ebp */
  ESP = (EBP);
  /* 123e2ef4 pop ebp */
  EBP = (pop32());
  /* 123e2ef5 ret  */
  ESPCHK(0x123e2e80u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x123e2f00 (101 bytes, 36 insns) */
void f_123e2f00(void) {
  FTRACE(0x123e2f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2f00 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2f01 mov ebp, esp */
  EBP = (ESP);
  /* 123e2f03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e2f06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123e2f0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2f10 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123e2f12 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 123e2f15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2f18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2f1b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_123e2f1e:;
  /* 123e2f1e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 123e2f22 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2f25 jl 0x123e2f30 */
  if ((C.sf!=C.of)) goto L_123e2f30;
  /* 123e2f27 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 123e2f2b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2f2e jle 0x123e2f42 */
  if ((C.zf||C.sf!=C.of)) goto L_123e2f42;
L_123e2f30:;
  /* 123e2f30 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 123e2f34 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2f37 jl 0x123e2f5e */
  if ((C.sf!=C.of)) goto L_123e2f5e;
  /* 123e2f39 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 123e2f3d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2f40 jg 0x123e2f5e */
  if ((!C.zf&&C.sf==C.of)) goto L_123e2f5e;
L_123e2f42:;
  /* 123e2f42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e2f45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2f48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e2f4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2f4e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123e2f50 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 123e2f53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2f56 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2f59 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123e2f5c jmp 0x123e2f1e */
  goto L_123e2f1e;
L_123e2f5e:;
  /* 123e2f5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e2f61 mov esp, ebp */
  ESP = (EBP);
  /* 123e2f63 pop ebp */
  EBP = (pop32());
  /* 123e2f64 ret  */
  ESPCHK(0x123e2f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f70 @ 0x123e2f70 (122 bytes, 39 insns) */
void f_123e2f70(void) {
  FTRACE(0x123e2f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2f70 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2f71 mov ebp, esp */
  EBP = (ESP);
  /* 123e2f73 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2f77 cmp eax, dword ptr [0x124042dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124042dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e2f7d jae 0x123e2fa1 */
  if (!C.cf) goto L_123e2fa1;
  /* 123e2f7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2f82 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123e2f85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2f88 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123e2f8b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e2f8e mov eax, dword ptr [ecx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123e2f95 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 123e2f9a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123e2f9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e2f9f jne 0x123e2fbc */
  if (!C.zf) goto L_123e2fbc;
L_123e2fa1:;
  /* 123e2fa1 call 0x123de2c0 */
  push32(0x123e2fa6u); f_123de2c0();
  /* 123e2fa6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123e2fac call 0x123de2d0 */
  push32(0x123e2fb1u); f_123de2d0();
  /* 123e2fb1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123e2fb7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e2fba jmp 0x123e2fe6 */
  goto L_123e2fe6;
L_123e2fbc:;
  /* 123e2fbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2fbf push edx */
  push32((uint32_t)(EDX));
  /* 123e2fc0 call 0x123dfae0 */
  push32(0x123e2fc5u); f_123dfae0();
  /* 123e2fc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2fc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2fcb push eax */
  push32((uint32_t)(EAX));
  /* 123e2fcc call 0x123e2ff0 */
  push32(0x123e2fd1u); f_123e2ff0();
  /* 123e2fd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2fd4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e2fd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2fda push ecx */
  push32((uint32_t)(ECX));
  /* 123e2fdb call 0x123dfb70 */
  push32(0x123e2fe0u); f_123dfb70();
  /* 123e2fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e2fe3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123e2fe6:;
  /* 123e2fe6 mov esp, ebp */
  ESP = (EBP);
  /* 123e2fe8 pop ebp */
  EBP = (pop32());
  /* 123e2fe9 ret  */
  ESPCHK(0x123e2f70u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x123e2ff0 (170 bytes, 59 insns) */
void f_123e2ff0(void) {
  FTRACE(0x123e2ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e2ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e2ff1 mov ebp, esp */
  EBP = (ESP);
  /* 123e2ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e2ff4 push esi */
  push32((uint32_t)(ESI));
  /* 123e2ff5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e2ff8 push eax */
  push32((uint32_t)(EAX));
  /* 123e2ff9 call 0x123df960 */
  push32(0x123e2ffeu); f_123df960();
  /* 123e2ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3001 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3004 je 0x123e3043 */
  if (C.zf) goto L_123e3043;
  /* 123e3006 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e300a je 0x123e3012 */
  if (C.zf) goto L_123e3012;
  /* 123e300c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3010 jne 0x123e302c */
  if (!C.zf) goto L_123e302c;
L_123e3012:;
  /* 123e3012 push 1 */
  push32((uint32_t)(0x1u));
  /* 123e3014 call 0x123df960 */
  push32(0x123e3019u); f_123df960();
  /* 123e3019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e301c mov esi, eax */
  ESI = (EAX);
  /* 123e301e push 2 */
  push32((uint32_t)(0x2u));
  /* 123e3020 call 0x123df960 */
  push32(0x123e3025u); f_123df960();
  /* 123e3025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3028 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e302a je 0x123e3043 */
  if (C.zf) goto L_123e3043;
L_123e302c:;
  /* 123e302c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e302f push ecx */
  push32((uint32_t)(ECX));
  /* 123e3030 call 0x123df960 */
  push32(0x123e3035u); f_123df960();
  /* 123e3035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3038 push eax */
  push32((uint32_t)(EAX));
  /* 123e3039 call dword ptr [0x124052ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052ac))), 0x123e303fu);
  /* 123e303f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e3041 je 0x123e304c */
  if (C.zf) goto L_123e304c;
L_123e3043:;
  /* 123e3043 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123e304a jmp 0x123e3055 */
  goto L_123e3055;
L_123e304c:;
  /* 123e304c call dword ptr [0x1240528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240528c))), 0x123e3052u);
  /* 123e3052 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123e3055:;
  /* 123e3055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3058 push edx */
  push32((uint32_t)(EDX));
  /* 123e3059 call 0x123df880 */
  push32(0x123e305eu); f_123df880();
  /* 123e305e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3064 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123e3067 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e306a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123e306d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123e3070 mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123e3077 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 123e307c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3080 je 0x123e3093 */
  if (C.zf) goto L_123e3093;
  /* 123e3082 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e3085 push eax */
  push32((uint32_t)(EAX));
  /* 123e3086 call 0x123de220 */
  push32(0x123e308bu); f_123de220();
  /* 123e308b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e308e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123e3091 jmp 0x123e3095 */
  goto L_123e3095;
L_123e3093:;
  /* 123e3093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123e3095:;
  /* 123e3095 pop esi */
  ESI = (pop32());
  /* 123e3096 mov esp, ebp */
  ESP = (EBP);
  /* 123e3098 pop ebp */
  EBP = (pop32());
  /* 123e3099 ret  */
  ESPCHK(0x123e2ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100130a0 @ 0x123e30a0 (146 bytes, 52 insns) */
void f_123e30a0(void) {
  FTRACE(0x123e30a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e30a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e30a1 mov ebp, esp */
  EBP = (ESP);
  /* 123e30a3 push ebx */
  push32((uint32_t)(EBX));
  /* 123e30a4 push esi */
  push32((uint32_t)(ESI));
  /* 123e30a5 push edi */
  push32((uint32_t)(EDI));
L_123e30a6:;
  /* 123e30a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e30aa jne 0x123e30ca */
  if (!C.zf) goto L_123e30ca;
  /* 123e30ac push 0x123fe678 */
  push32((uint32_t)(0x123fe678u));
  /* 123e30b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e30b3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 123e30b5 push 0x123fed40 */
  push32((uint32_t)(0x123fed40u));
  /* 123e30ba push 2 */
  push32((uint32_t)(0x2u));
  /* 123e30bc call 0x123d54b0 */
  push32(0x123e30c1u); f_123d54b0();
  /* 123e30c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e30c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e30c7 jne 0x123e30ca */
  if (!C.zf) goto L_123e30ca;
  /* 123e30c9 int3  */
  x86_unimpl("int3 @ 0x123e30c9");
L_123e30ca:;
  /* 123e30ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123e30cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123e30ce jne 0x123e30a6 */
  if (!C.zf) goto L_123e30a6;
  /* 123e30d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e30d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123e30d6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 123e30dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123e30de je 0x123e312d */
  if (C.zf) goto L_123e312d;
  /* 123e30e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e30e3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123e30e6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 123e30e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123e30eb je 0x123e312d */
  if (C.zf) goto L_123e312d;
  /* 123e30ed push 2 */
  push32((uint32_t)(0x2u));
  /* 123e30ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e30f2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123e30f5 push eax */
  push32((uint32_t)(EAX));
  /* 123e30f6 call 0x123d6e80 */
  push32(0x123e30fbu); f_123d6e80();
  /* 123e30fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e30fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3101 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123e3104 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 123e310a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e310d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 123e3110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3113 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 123e3119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e311c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 123e3123 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3126 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_123e312d:;
  /* 123e312d pop edi */
  EDI = (pop32());
  /* 123e312e pop esi */
  ESI = (pop32());
  /* 123e312f pop ebx */
  EBX = (pop32());
  /* 123e3130 pop ebp */
  EBP = (pop32());
  /* 123e3131 ret  */
  ESPCHK(0x123e30a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013140 @ 0x123e3140 (289 bytes, 97 insns) */
void f_123e3140(void) {
  FTRACE(0x123e3140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e3140 push ebp */
  push32((uint32_t)(EBP));
  /* 123e3141 mov ebp, esp */
  EBP = (ESP);
  /* 123e3143 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3146 push esi */
  push32((uint32_t)(ESI));
  /* 123e3147 mov eax, dword ptr [0x12401c98] */
  EAX = (r32((uint32_t)(0x12401c98)));
  /* 123e314c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e314f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123e3156 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e315d jmp 0x123e3168 */
  goto L_123e3168;
L_123e315f:;
  /* 123e315f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3162 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3165 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123e3168:;
  /* 123e3168 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e316c jae 0x123e31a1 */
  if (!C.cf) goto L_123e31a1;
  /* 123e316e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3171 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3174 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123e3177 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3178 call 0x123d9220 */
  push32(0x123e317du); f_123d9220();
  /* 123e317d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3180 mov esi, eax */
  ESI = (EAX);
  /* 123e3182 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3185 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3188 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 123e318c push ecx */
  push32((uint32_t)(ECX));
  /* 123e318d call 0x123d9220 */
  push32(0x123e3192u); f_123d9220();
  /* 123e3192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3195 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3198 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123e319c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e319f jmp 0x123e315f */
  goto L_123e315f;
L_123e31a1:;
  /* 123e31a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e31a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e31a7 push eax */
  push32((uint32_t)(EAX));
  /* 123e31a8 call 0x123d63d0 */
  push32(0x123e31adu); f_123d63d0();
  /* 123e31ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e31b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e31b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e31b7 je 0x123e3259 */
  if (C.zf) goto L_123e3259;
  /* 123e31bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e31c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123e31c3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e31ca jmp 0x123e31d5 */
  goto L_123e31d5;
L_123e31cc:;
  /* 123e31cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e31cf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e31d2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123e31d5:;
  /* 123e31d5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e31d9 jae 0x123e324a */
  if (!C.cf) goto L_123e324a;
  /* 123e31db mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e31de mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 123e31e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e31e4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e31e7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123e31ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e31ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e31f0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123e31f3 push ecx */
  push32((uint32_t)(ECX));
  /* 123e31f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e31f7 push edx */
  push32((uint32_t)(EDX));
  /* 123e31f8 call 0x123d93a0 */
  push32(0x123e31fdu); f_123d93a0();
  /* 123e31fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3200 push eax */
  push32((uint32_t)(EAX));
  /* 123e3201 call 0x123d9220 */
  push32(0x123e3206u); f_123d9220();
  /* 123e3206 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3209 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e320c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e320e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123e3211 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3214 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 123e3217 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e321a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e321d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123e3220 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3223 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3226 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 123e322a push eax */
  push32((uint32_t)(EAX));
  /* 123e322b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e322e push ecx */
  push32((uint32_t)(ECX));
  /* 123e322f call 0x123d93a0 */
  push32(0x123e3234u); f_123d93a0();
  /* 123e3234 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3237 push eax */
  push32((uint32_t)(EAX));
  /* 123e3238 call 0x123d9220 */
  push32(0x123e323du); f_123d9220();
  /* 123e323d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3240 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3243 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3245 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123e3248 jmp 0x123e31cc */
  goto L_123e31cc;
L_123e324a:;
  /* 123e324a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e324d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123e3250 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3253 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3256 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_123e3259:;
  /* 123e3259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e325c pop esi */
  ESI = (pop32());
  /* 123e325d mov esp, ebp */
  ESP = (EBP);
  /* 123e325f pop ebp */
  EBP = (pop32());
  /* 123e3260 ret  */
  ESPCHK(0x123e3140u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x123e3270 (291 bytes, 97 insns) */
void f_123e3270(void) {
  FTRACE(0x123e3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e3270 push ebp */
  push32((uint32_t)(EBP));
  /* 123e3271 mov ebp, esp */
  EBP = (ESP);
  /* 123e3273 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e3276 push esi */
  push32((uint32_t)(ESI));
  /* 123e3277 mov eax, dword ptr [0x12401c98] */
  EAX = (r32((uint32_t)(0x12401c98)));
  /* 123e327c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e327f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123e3286 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e328d jmp 0x123e3298 */
  goto L_123e3298;
L_123e328f:;
  /* 123e328f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3292 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3295 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123e3298:;
  /* 123e3298 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e329c jae 0x123e32d2 */
  if (!C.cf) goto L_123e32d2;
  /* 123e329e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e32a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e32a4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 123e32a8 push ecx */
  push32((uint32_t)(ECX));
  /* 123e32a9 call 0x123d9220 */
  push32(0x123e32aeu); f_123d9220();
  /* 123e32ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e32b1 mov esi, eax */
  ESI = (EAX);
  /* 123e32b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e32b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e32b9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 123e32bd push ecx */
  push32((uint32_t)(ECX));
  /* 123e32be call 0x123d9220 */
  push32(0x123e32c3u); f_123d9220();
  /* 123e32c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e32c6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e32c9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123e32cd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e32d0 jmp 0x123e328f */
  goto L_123e328f;
L_123e32d2:;
  /* 123e32d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e32d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e32d8 push eax */
  push32((uint32_t)(EAX));
  /* 123e32d9 call 0x123d63d0 */
  push32(0x123e32deu); f_123d63d0();
  /* 123e32de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e32e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e32e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e32e8 je 0x123e338b */
  if (C.zf) goto L_123e338b;
  /* 123e32ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e32f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123e32f4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e32fb jmp 0x123e3306 */
  goto L_123e3306;
L_123e32fd:;
  /* 123e32fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3300 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3303 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123e3306:;
  /* 123e3306 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e330a jae 0x123e337c */
  if (!C.cf) goto L_123e337c;
  /* 123e330c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e330f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 123e3312 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3315 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3318 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123e331b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e331e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3321 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 123e3325 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3326 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3329 push edx */
  push32((uint32_t)(EDX));
  /* 123e332a call 0x123d93a0 */
  push32(0x123e332fu); f_123d93a0();
  /* 123e332f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3332 push eax */
  push32((uint32_t)(EAX));
  /* 123e3333 call 0x123d9220 */
  push32(0x123e3338u); f_123d9220();
  /* 123e3338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e333b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e333e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3340 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123e3343 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3346 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 123e3349 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e334c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e334f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123e3352 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3355 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3358 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 123e335c push eax */
  push32((uint32_t)(EAX));
  /* 123e335d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3360 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3361 call 0x123d93a0 */
  push32(0x123e3366u); f_123d93a0();
  /* 123e3366 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3369 push eax */
  push32((uint32_t)(EAX));
  /* 123e336a call 0x123d9220 */
  push32(0x123e336fu); f_123d9220();
  /* 123e336f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3372 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3375 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3377 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123e337a jmp 0x123e32fd */
  goto L_123e32fd;
L_123e337c:;
  /* 123e337c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e337f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123e3382 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3385 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3388 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_123e338b:;
  /* 123e338b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e338e pop esi */
  ESI = (pop32());
  /* 123e338f mov esp, ebp */
  ESP = (EBP);
  /* 123e3391 pop ebp */
  EBP = (pop32());
  /* 123e3392 ret  */
  ESPCHK(0x123e3270u, _esp0);
  ESP += 4; return;
}

/* FUN_100133a0 @ 0x123e33a0 (878 bytes, 273 insns) */
void f_123e33a0(void) {
  FTRACE(0x123e33a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e33a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123e33a1 mov ebp, esp */
  EBP = (ESP);
  /* 123e33a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123e33a6 push esi */
  push32((uint32_t)(ESI));
  /* 123e33a7 mov eax, dword ptr [0x12401c98] */
  EAX = (r32((uint32_t)(0x12401c98)));
  /* 123e33ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123e33af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123e33b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e33bd jmp 0x123e33c8 */
  goto L_123e33c8;
L_123e33bf:;
  /* 123e33bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e33c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e33c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123e33c8:;
  /* 123e33c8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e33cc jae 0x123e3401 */
  if (!C.cf) goto L_123e3401;
  /* 123e33ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e33d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e33d4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123e33d7 push ecx */
  push32((uint32_t)(ECX));
  /* 123e33d8 call 0x123d9220 */
  push32(0x123e33ddu); f_123d9220();
  /* 123e33dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e33e0 mov esi, eax */
  ESI = (EAX);
  /* 123e33e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e33e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e33e8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 123e33ec push ecx */
  push32((uint32_t)(ECX));
  /* 123e33ed call 0x123d9220 */
  push32(0x123e33f2u); f_123d9220();
  /* 123e33f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e33f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e33f8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123e33fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e33ff jmp 0x123e33bf */
  goto L_123e33bf;
L_123e3401:;
  /* 123e3401 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e3408 jmp 0x123e3413 */
  goto L_123e3413;
L_123e340a:;
  /* 123e340a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e340d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3410 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123e3413:;
  /* 123e3413 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e3417 jae 0x123e344d */
  if (!C.cf) goto L_123e344d;
  /* 123e3419 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e341c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e341f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 123e3423 push eax */
  push32((uint32_t)(EAX));
  /* 123e3424 call 0x123d9220 */
  push32(0x123e3429u); f_123d9220();
  /* 123e3429 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e342c mov esi, eax */
  ESI = (EAX);
  /* 123e342e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3431 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3434 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 123e3438 push eax */
  push32((uint32_t)(EAX));
  /* 123e3439 call 0x123d9220 */
  push32(0x123e343eu); f_123d9220();
  /* 123e343e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3441 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3444 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123e3448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123e344b jmp 0x123e340a */
  goto L_123e340a;
L_123e344d:;
  /* 123e344d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3450 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 123e3456 push eax */
  push32((uint32_t)(EAX));
  /* 123e3457 call 0x123d9220 */
  push32(0x123e345cu); f_123d9220();
  /* 123e345c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e345f mov esi, eax */
  ESI = (EAX);
  /* 123e3461 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3464 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 123e346a push edx */
  push32((uint32_t)(EDX));
  /* 123e346b call 0x123d9220 */
  push32(0x123e3470u); f_123d9220();
  /* 123e3470 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3473 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3476 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123e347a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e347d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3480 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 123e3486 push edx */
  push32((uint32_t)(EDX));
  /* 123e3487 call 0x123d9220 */
  push32(0x123e348cu); f_123d9220();
  /* 123e348c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e348f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e3492 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123e3496 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e3499 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e349c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 123e34a2 push ecx */
  push32((uint32_t)(ECX));
  /* 123e34a3 call 0x123d9220 */
  push32(0x123e34a8u); f_123d9220();
  /* 123e34a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e34ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e34ae lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123e34b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123e34b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e34b8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 123e34be push edx */
  push32((uint32_t)(EDX));
  /* 123e34bf call 0x123d9220 */
  push32(0x123e34c4u); f_123d9220();
  /* 123e34c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e34c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e34ca lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123e34ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123e34d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123e34d4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e34d9 push eax */
  push32((uint32_t)(EAX));
  /* 123e34da call 0x123d63d0 */
  push32(0x123e34dfu); f_123d63d0();
  /* 123e34df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e34e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123e34e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e34e9 je 0x123e3706 */
  if (C.zf) goto L_123e3706;
  /* 123e34ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e34f2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123e34f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e34f8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e34fe mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123e3501 push 0xac */
  push32((uint32_t)(0xacu));
  /* 123e3506 mov eax, dword ptr [0x12401c98] */
  EAX = (r32((uint32_t)(0x12401c98)));
  /* 123e350b push eax */
  push32((uint32_t)(EAX));
  /* 123e350c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e350f push ecx */
  push32((uint32_t)(ECX));
  /* 123e3510 call 0x123dccd0 */
  push32(0x123e3515u); f_123dccd0();
  /* 123e3515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3518 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e351f jmp 0x123e352a */
  goto L_123e352a;
L_123e3521:;
  /* 123e3521 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3524 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3527 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123e352a:;
  /* 123e352a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e352e jae 0x123e359e */
  if (!C.cf) goto L_123e359e;
  /* 123e3530 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3533 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e3536 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3539 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 123e353c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e353f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3542 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 123e3545 push edx */
  push32((uint32_t)(EDX));
  /* 123e3546 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3549 push eax */
  push32((uint32_t)(EAX));
  /* 123e354a call 0x123d93a0 */
  push32(0x123e354fu); f_123d93a0();
  /* 123e354f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3552 push eax */
  push32((uint32_t)(EAX));
  /* 123e3553 call 0x123d9220 */
  push32(0x123e3558u); f_123d9220();
  /* 123e3558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e355b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e355e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123e3562 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123e3565 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3568 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e356b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e356e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 123e3572 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e3575 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3578 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 123e357c push edx */
  push32((uint32_t)(EDX));
  /* 123e357d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3580 push eax */
  push32((uint32_t)(EAX));
  /* 123e3581 call 0x123d93a0 */
  push32(0x123e3586u); f_123d93a0();
  /* 123e3586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3589 push eax */
  push32((uint32_t)(EAX));
  /* 123e358a call 0x123d9220 */
  push32(0x123e358fu); f_123d9220();
  /* 123e358f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3592 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3595 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123e3599 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123e359c jmp 0x123e3521 */
  goto L_123e3521;
L_123e359e:;
  /* 123e359e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123e35a5 jmp 0x123e35b0 */
  goto L_123e35b0;
L_123e35a7:;
  /* 123e35a7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e35aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123e35ad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123e35b0:;
  /* 123e35b0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123e35b4 jae 0x123e3626 */
  if (!C.cf) goto L_123e3626;
  /* 123e35b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e35b9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e35bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e35bf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 123e35c3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e35c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e35c9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 123e35cd push eax */
  push32((uint32_t)(EAX));
  /* 123e35ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e35d1 push ecx */
  push32((uint32_t)(ECX));
  /* 123e35d2 call 0x123d93a0 */
  push32(0x123e35d7u); f_123d93a0();
  /* 123e35d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e35da push eax */
  push32((uint32_t)(EAX));
  /* 123e35db call 0x123d9220 */
  push32(0x123e35e0u); f_123d9220();
  /* 123e35e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e35e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e35e6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123e35ea mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123e35ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e35f0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e35f3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e35f6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 123e35fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123e35fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3600 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 123e3604 push eax */
  push32((uint32_t)(EAX));
  /* 123e3605 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3608 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3609 call 0x123d93a0 */
  push32(0x123e360eu); f_123d93a0();
  /* 123e360e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3611 push eax */
  push32((uint32_t)(EAX));
  /* 123e3612 call 0x123d9220 */
  push32(0x123e3617u); f_123d9220();
  /* 123e3617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e361a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e361d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123e3621 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123e3624 jmp 0x123e35a7 */
  goto L_123e35a7;
L_123e3626:;
  /* 123e3626 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e3629 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e362c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 123e3632 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e3635 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 123e363b push ecx */
  push32((uint32_t)(ECX));
  /* 123e363c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e363f push edx */
  push32((uint32_t)(EDX));
  /* 123e3640 call 0x123d93a0 */
  push32(0x123e3645u); f_123d93a0();
  /* 123e3645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3648 push eax */
  push32((uint32_t)(EAX));
  /* 123e3649 call 0x123d9220 */
  push32(0x123e364eu); f_123d9220();
  /* 123e364e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3651 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3654 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123e3658 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123e365b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e365e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3661 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 123e3667 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e366a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 123e3670 push eax */
  push32((uint32_t)(EAX));
  /* 123e3671 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3674 push ecx */
  push32((uint32_t)(ECX));
  /* 123e3675 call 0x123d93a0 */
  push32(0x123e367au); f_123d93a0();
  /* 123e367a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e367d push eax */
  push32((uint32_t)(EAX));
  /* 123e367e call 0x123d9220 */
  push32(0x123e3683u); f_123d9220();
  /* 123e3683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e3686 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3689 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123e368d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123e3690 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e3693 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3696 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 123e369c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e369f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 123e36a5 push ecx */
  push32((uint32_t)(ECX));
  /* 123e36a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e36a9 push edx */
  push32((uint32_t)(EDX));
  /* 123e36aa call 0x123d93a0 */
  push32(0x123e36afu); f_123d93a0();
  /* 123e36af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e36b2 push eax */
  push32((uint32_t)(EAX));
  /* 123e36b3 call 0x123d9220 */
  push32(0x123e36b8u); f_123d9220();
  /* 123e36b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e36bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e36be lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123e36c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123e36c5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e36c8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e36cb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 123e36d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123e36d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 123e36da push eax */
  push32((uint32_t)(EAX));
  /* 123e36db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e36de push ecx */
  push32((uint32_t)(ECX));
  /* 123e36df call 0x123d93a0 */
  push32(0x123e36e4u); f_123d93a0();
  /* 123e36e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e36e7 push eax */
  push32((uint32_t)(EAX));
  /* 123e36e8 call 0x123d9220 */
  push32(0x123e36edu); f_123d9220();
  /* 123e36ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e36f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e36f3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123e36f7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123e36fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123e36fd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123e3700 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_123e3706:;
  /* 123e3706 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123e3709 pop esi */
  ESI = (pop32());
  /* 123e370a mov esp, ebp */
  ESP = (EBP);
  /* 123e370c pop ebp */
  EBP = (pop32());
  /* 123e370d ret  */
  ESPCHK(0x123e33a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013710 @ 0x123e3710 (31 bytes, 15 insns) */
void f_123e3710(void) {
  FTRACE(0x123e3710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123e3710 push ebp */
  push32((uint32_t)(EBP));
  /* 123e3711 mov ebp, esp */
  EBP = (ESP);
  /* 123e3713 push 0 */
  push32((uint32_t)(0x0u));
  /* 123e3715 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123e3718 push eax */
  push32((uint32_t)(EAX));
  /* 123e3719 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123e371c push ecx */
  push32((uint32_t)(ECX));
  /* 123e371d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123e3720 push edx */
  push32((uint32_t)(EDX));
  /* 123e3721 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123e3724 push eax */
  push32((uint32_t)(EAX));
  /* 123e3725 call 0x123e3730 */
  push32(0x123e372au); f_123e3730();
  /* 123e372a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123e372d pop ebp */
  EBP = (pop32());
  /* 123e372e ret  */
  ESPCHK(0x123e3710u, _esp0);
  ESP += 4; return;
}

