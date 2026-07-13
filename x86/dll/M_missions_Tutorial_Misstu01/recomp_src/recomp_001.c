#include "recomp.h"

/* FUN_100086c0 @ 0x122d86c0 (103 bytes, 38 insns) */
void f_122d86c0(void) {
  FTRACE(0x122d86c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d86c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122d86c1 mov ebp, esp */
  EBP = (ESP);
  /* 122d86c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122d86c4 mov eax, dword ptr [0x122ffa8c] */
  EAX = (r32((uint32_t)(0x122ffa8c)));
  /* 122d86c9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 122d86cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d86ce jne 0x122d86d2 */
  if (!C.zf) goto L_122d86d2;
  /* 122d86d0 jmp 0x122d8723 */
  goto L_122d8723;
L_122d86d2:;
  /* 122d86d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 122d86d4 call 0x122db530 */
  push32(0x122d86d9u); f_122db530();
  /* 122d86d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d86dc mov ecx, dword ptr [0x123017a0] */
  ECX = (r32((uint32_t)(0x123017a0)));
  /* 122d86e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122d86e5 jmp 0x122d86ef */
  goto L_122d86ef;
L_122d86e7:;
  /* 122d86e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d86ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122d86ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122d86ef:;
  /* 122d86ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d86f3 je 0x122d8719 */
  if (C.zf) goto L_122d8719;
  /* 122d86f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d86f8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 122d86fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d8701 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8704 jne 0x122d8717 */
  if (!C.zf) goto L_122d8717;
  /* 122d8706 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d8709 push eax */
  push32((uint32_t)(EAX));
  /* 122d870a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d870d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8710 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8711 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x122d8714u);
  /* 122d8714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d8717:;
  /* 122d8717 jmp 0x122d86e7 */
  goto L_122d86e7;
L_122d8719:;
  /* 122d8719 push 9 */
  push32((uint32_t)(0x9u));
  /* 122d871b call 0x122db5d0 */
  push32(0x122d8720u); f_122db5d0();
  /* 122d8720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d8723:;
  /* 122d8723 mov esp, ebp */
  ESP = (EBP);
  /* 122d8725 pop ebp */
  EBP = (pop32());
  /* 122d8726 ret  */
  ESPCHK(0x122d86c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x122d8730 (75 bytes, 28 insns) */
void f_122d8730(void) {
  FTRACE(0x122d8730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d8730 push ebp */
  push32((uint32_t)(EBP));
  /* 122d8731 mov ebp, esp */
  EBP = (ESP);
  /* 122d8733 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8734 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8738 je 0x122d876d */
  if (C.zf) goto L_122d876d;
  /* 122d873a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d873d push eax */
  push32((uint32_t)(EAX));
  /* 122d873e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8741 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8742 call dword ptr [0x1230426c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230426c))), 0x122d8748u);
  /* 122d8748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d874a jne 0x122d876d */
  if (!C.zf) goto L_122d876d;
  /* 122d874c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8750 je 0x122d8764 */
  if (C.zf) goto L_122d8764;
  /* 122d8752 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d8755 push edx */
  push32((uint32_t)(EDX));
  /* 122d8756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8759 push eax */
  push32((uint32_t)(EAX));
  /* 122d875a call dword ptr [0x12304268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304268))), 0x122d8760u);
  /* 122d8760 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8762 jne 0x122d876d */
  if (!C.zf) goto L_122d876d;
L_122d8764:;
  /* 122d8764 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122d876b jmp 0x122d8774 */
  goto L_122d8774;
L_122d876d:;
  /* 122d876d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122d8774:;
  /* 122d8774 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8777 mov esp, ebp */
  ESP = (EBP);
  /* 122d8779 pop ebp */
  EBP = (pop32());
  /* 122d877a ret  */
  ESPCHK(0x122d8730u, _esp0);
  ESP += 4; return;
}

/* FUN_10008780 @ 0x122d8780 (134 bytes, 50 insns) */
void f_122d8780(void) {
  FTRACE(0x122d8780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d8780 push ebp */
  push32((uint32_t)(EBP));
  /* 122d8781 mov ebp, esp */
  EBP = (ESP);
  /* 122d8783 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8784 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8788 jne 0x122d878e */
  if (!C.zf) goto L_122d878e;
  /* 122d878a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d878c jmp 0x122d8802 */
  goto L_122d8802;
L_122d878e:;
  /* 122d878e push 1 */
  push32((uint32_t)(0x1u));
  /* 122d8790 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 122d8792 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8795 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d8798 push eax */
  push32((uint32_t)(EAX));
  /* 122d8799 call 0x122d8730 */
  push32(0x122d879eu); f_122d8730();
  /* 122d879e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d87a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d87a3 jne 0x122d87a9 */
  if (!C.zf) goto L_122d87a9;
  /* 122d87a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d87a7 jmp 0x122d8802 */
  goto L_122d8802;
L_122d87a9:;
  /* 122d87a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d87ac sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d87af push ecx */
  push32((uint32_t)(ECX));
  /* 122d87b0 call 0x122dbe30 */
  push32(0x122d87b5u); f_122dbe30();
  /* 122d87b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d87b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122d87bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d87bf je 0x122d87d6 */
  if (C.zf) goto L_122d87d6;
  /* 122d87c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d87c4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d87c7 push edx */
  push32((uint32_t)(EDX));
  /* 122d87c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d87cb push eax */
  push32((uint32_t)(EAX));
  /* 122d87cc call 0x122dbe90 */
  push32(0x122d87d1u); f_122dbe90();
  /* 122d87d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d87d4 jmp 0x122d8802 */
  goto L_122d8802;
L_122d87d6:;
  /* 122d87d6 mov ecx, dword ptr [0x12301754] */
  ECX = (r32((uint32_t)(0x12301754)));
  /* 122d87dc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 122d87e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d87e4 je 0x122d87ed */
  if (C.zf) goto L_122d87ed;
  /* 122d87e6 mov eax, 1 */
  EAX = (0x1u);
  /* 122d87eb jmp 0x122d8802 */
  goto L_122d8802;
L_122d87ed:;
  /* 122d87ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d87f0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d87f3 push edx */
  push32((uint32_t)(EDX));
  /* 122d87f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d87f6 mov eax, dword ptr [0x12303104] */
  EAX = (r32((uint32_t)(0x12303104)));
  /* 122d87fb push eax */
  push32((uint32_t)(EAX));
  /* 122d87fc call dword ptr [0x12304270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304270))), 0x122d8802u);
L_122d8802:;
  /* 122d8802 mov esp, ebp */
  ESP = (EBP);
  /* 122d8804 pop ebp */
  EBP = (pop32());
  /* 122d8805 ret  */
  ESPCHK(0x122d8780u, _esp0);
  ESP += 4; return;
}

/* FUN_10008810 @ 0x122d8810 (227 bytes, 80 insns) */
void f_122d8810(void) {
  FTRACE(0x122d8810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d8810 push ebp */
  push32((uint32_t)(EBP));
  /* 122d8811 mov ebp, esp */
  EBP = (ESP);
  /* 122d8813 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8817 push eax */
  push32((uint32_t)(EAX));
  /* 122d8818 call 0x122d8780 */
  push32(0x122d881du); f_122d8780();
  /* 122d881d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8822 jne 0x122d882b */
  if (!C.zf) goto L_122d882b;
  /* 122d8824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d8826 jmp 0x122d88ef */
  goto L_122d88ef;
L_122d882b:;
  /* 122d882b push 9 */
  push32((uint32_t)(0x9u));
  /* 122d882d call 0x122db530 */
  push32(0x122d8832u); f_122db530();
  /* 122d8832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8835 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8838 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d883b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122d883e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8841 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122d8844 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122d8849 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d884c je 0x122d8870 */
  if (C.zf) goto L_122d8870;
  /* 122d884e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8851 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8855 je 0x122d8870 */
  if (C.zf) goto L_122d8870;
  /* 122d8857 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d885a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122d885d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122d8862 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8865 je 0x122d8870 */
  if (C.zf) goto L_122d8870;
  /* 122d8867 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d886a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d886e jne 0x122d88e3 */
  if (!C.zf) goto L_122d88e3;
L_122d8870:;
  /* 122d8870 push 1 */
  push32((uint32_t)(0x1u));
  /* 122d8872 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d8875 push edx */
  push32((uint32_t)(EDX));
  /* 122d8876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8879 push eax */
  push32((uint32_t)(EAX));
  /* 122d887a call 0x122d8730 */
  push32(0x122d887fu); f_122d8730();
  /* 122d887f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8884 je 0x122d88e3 */
  if (C.zf) goto L_122d88e3;
  /* 122d8886 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8889 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 122d888c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d888f jne 0x122d88e3 */
  if (!C.zf) goto L_122d88e3;
  /* 122d8891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8894 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 122d8897 cmp ecx, dword ptr [0x122ffa90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122ffa90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d889d jg 0x122d88e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_122d88e3;
  /* 122d889f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d88a3 je 0x122d88b0 */
  if (C.zf) goto L_122d88b0;
  /* 122d88a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d88a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d88ab mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 122d88ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122d88b0:;
  /* 122d88b0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d88b4 je 0x122d88c1 */
  if (C.zf) goto L_122d88c1;
  /* 122d88b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122d88b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d88bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122d88bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122d88c1:;
  /* 122d88c1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d88c5 je 0x122d88d2 */
  if (C.zf) goto L_122d88d2;
  /* 122d88c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d88ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d88cd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122d88d0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122d88d2:;
  /* 122d88d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 122d88d4 call 0x122db5d0 */
  push32(0x122d88d9u); f_122db5d0();
  /* 122d88d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d88dc mov eax, 1 */
  EAX = (0x1u);
  /* 122d88e1 jmp 0x122d88ef */
  goto L_122d88ef;
L_122d88e3:;
  /* 122d88e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 122d88e5 call 0x122db5d0 */
  push32(0x122d88eau); f_122db5d0();
  /* 122d88ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d88ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122d88ef:;
  /* 122d88ef mov esp, ebp */
  ESP = (EBP);
  /* 122d88f1 pop ebp */
  EBP = (pop32());
  /* 122d88f2 ret  */
  ESPCHK(0x122d8810u, _esp0);
  ESP += 4; return;
}

/* FUN_10008900 @ 0x122d8900 (28 bytes, 11 insns) */
void f_122d8900(void) {
  FTRACE(0x122d8900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d8900 push ebp */
  push32((uint32_t)(EBP));
  /* 122d8901 mov ebp, esp */
  EBP = (ESP);
  /* 122d8903 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8904 mov eax, dword ptr [0x12303110] */
  EAX = (r32((uint32_t)(0x12303110)));
  /* 122d8909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122d890c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d890f mov dword ptr [0x12303110], ecx */
  w32((uint32_t)(0x12303110), (ECX));
  /* 122d8915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8918 mov esp, ebp */
  ESP = (EBP);
  /* 122d891a pop ebp */
  EBP = (pop32());
  /* 122d891b ret  */
  ESPCHK(0x122d8900u, _esp0);
  ESP += 4; return;
}

/* FUN_10008920 @ 0x122d8920 (362 bytes, 116 insns) */
void f_122d8920(void) {
  FTRACE(0x122d8920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d8920 push ebp */
  push32((uint32_t)(EBP));
  /* 122d8921 mov ebp, esp */
  EBP = (ESP);
  /* 122d8923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d8926 push ebx */
  push32((uint32_t)(EBX));
  /* 122d8927 push esi */
  push32((uint32_t)(ESI));
  /* 122d8928 push edi */
  push32((uint32_t)(EDI));
  /* 122d8929 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d892d jne 0x122d895a */
  if (!C.zf) goto L_122d895a;
L_122d892f:;
  /* 122d892f push 0x122fd480 */
  push32((uint32_t)(0x122fd480u));
  /* 122d8934 push 0x122fcf98 */
  push32((uint32_t)(0x122fcf98u));
  /* 122d8939 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d893b push 0 */
  push32((uint32_t)(0x0u));
  /* 122d893d push 0 */
  push32((uint32_t)(0x0u));
  /* 122d893f push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8941 call 0x122d5120 */
  push32(0x122d8946u); f_122d5120();
  /* 122d8946 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8949 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d894c jne 0x122d894f */
  if (!C.zf) goto L_122d894f;
  /* 122d894e int3  */
  x86_unimpl("int3 @ 0x122d894e");
L_122d894f:;
  /* 122d894f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d8951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8953 jne 0x122d892f */
  if (!C.zf) goto L_122d892f;
  /* 122d8955 jmp 0x122d8a83 */
  goto L_122d8a83;
L_122d895a:;
  /* 122d895a push 9 */
  push32((uint32_t)(0x9u));
  /* 122d895c call 0x122db530 */
  push32(0x122d8961u); f_122db530();
  /* 122d8961 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8964 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8967 mov edx, dword ptr [0x123017a0] */
  EDX = (r32((uint32_t)(0x123017a0)));
  /* 122d896d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 122d896f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122d8976 jmp 0x122d8981 */
  goto L_122d8981;
L_122d8978:;
  /* 122d8978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d897b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d897e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122d8981:;
  /* 122d8981 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8985 jge 0x122d89a5 */
  if ((C.sf==C.of)) goto L_122d89a5;
  /* 122d8987 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d898a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d898d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 122d8995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8998 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d899b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 122d89a3 jmp 0x122d8978 */
  goto L_122d8978;
L_122d89a5:;
  /* 122d89a5 mov edx, dword ptr [0x123017a0] */
  EDX = (r32((uint32_t)(0x123017a0)));
  /* 122d89ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122d89ae jmp 0x122d89b8 */
  goto L_122d89b8;
L_122d89b0:;
  /* 122d89b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d89b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122d89b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_122d89b8:;
  /* 122d89b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d89bc je 0x122d8a61 */
  if (C.zf) goto L_122d8a61;
  /* 122d89c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d89c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122d89c8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122d89cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d89cf jl 0x122d8a37 */
  if ((C.sf!=C.of)) goto L_122d8a37;
  /* 122d89d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d89d4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 122d89d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d89dd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d89e0 jge 0x122d8a37 */
  if ((C.sf==C.of)) goto L_122d8a37;
  /* 122d89e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d89e5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122d89e8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122d89ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d89f1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 122d89f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d89f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d89fb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 122d89fe and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d8a04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8a07 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 122d8a0b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d8a0e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122d8a11 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122d8a16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8a19 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 122d8a1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d8a20 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8a23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d8a26 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 122d8a29 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122d8a2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8a31 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 122d8a35 jmp 0x122d8a5c */
  goto L_122d8a5c;
L_122d8a37:;
  /* 122d8a37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d8a3a push edx */
  push32((uint32_t)(EDX));
  /* 122d8a3b push 0x122fd45c */
  push32((uint32_t)(0x122fd45cu));
  /* 122d8a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8a48 call 0x122d5120 */
  push32(0x122d8a4du); f_122d5120();
  /* 122d8a4d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8a50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8a53 jne 0x122d8a56 */
  if (!C.zf) goto L_122d8a56;
  /* 122d8a55 int3  */
  x86_unimpl("int3 @ 0x122d8a55");
L_122d8a56:;
  /* 122d8a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d8a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8a5a jne 0x122d8a37 */
  if (!C.zf) goto L_122d8a37;
L_122d8a5c:;
  /* 122d8a5c jmp 0x122d89b0 */
  goto L_122d89b0;
L_122d8a61:;
  /* 122d8a61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8a64 mov edx, dword ptr [0x123017a8] */
  EDX = (r32((uint32_t)(0x123017a8)));
  /* 122d8a6a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 122d8a6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8a70 mov ecx, dword ptr [0x1230179c] */
  ECX = (r32((uint32_t)(0x1230179c)));
  /* 122d8a76 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 122d8a79 push 9 */
  push32((uint32_t)(0x9u));
  /* 122d8a7b call 0x122db5d0 */
  push32(0x122d8a80u); f_122db5d0();
  /* 122d8a80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d8a83:;
  /* 122d8a83 pop edi */
  EDI = (pop32());
  /* 122d8a84 pop esi */
  ESI = (pop32());
  /* 122d8a85 pop ebx */
  EBX = (pop32());
  /* 122d8a86 mov esp, ebp */
  ESP = (EBP);
  /* 122d8a88 pop ebp */
  EBP = (pop32());
  /* 122d8a89 ret  */
  ESPCHK(0x122d8920u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a90 @ 0x122d8a90 (291 bytes, 95 insns) */
void f_122d8a90(void) {
  FTRACE(0x122d8a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d8a90 push ebp */
  push32((uint32_t)(EBP));
  /* 122d8a91 mov ebp, esp */
  EBP = (ESP);
  /* 122d8a93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d8a96 push ebx */
  push32((uint32_t)(EBX));
  /* 122d8a97 push esi */
  push32((uint32_t)(ESI));
  /* 122d8a98 push edi */
  push32((uint32_t)(EDI));
  /* 122d8a99 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122d8aa0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8aa4 je 0x122d8ab2 */
  if (C.zf) goto L_122d8ab2;
  /* 122d8aa6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8aaa je 0x122d8ab2 */
  if (C.zf) goto L_122d8ab2;
  /* 122d8aac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8ab0 jne 0x122d8ae0 */
  if (!C.zf) goto L_122d8ae0;
L_122d8ab2:;
  /* 122d8ab2 push 0x122fd4a8 */
  push32((uint32_t)(0x122fd4a8u));
  /* 122d8ab7 push 0x122fcf98 */
  push32((uint32_t)(0x122fcf98u));
  /* 122d8abc push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8abe push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8ac4 call 0x122d5120 */
  push32(0x122d8ac9u); f_122d5120();
  /* 122d8ac9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8acc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8acf jne 0x122d8ad2 */
  if (!C.zf) goto L_122d8ad2;
  /* 122d8ad1 int3  */
  x86_unimpl("int3 @ 0x122d8ad1");
L_122d8ad2:;
  /* 122d8ad2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d8ad4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8ad6 jne 0x122d8ab2 */
  if (!C.zf) goto L_122d8ab2;
  /* 122d8ad8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d8adb jmp 0x122d8bac */
  goto L_122d8bac;
L_122d8ae0:;
  /* 122d8ae0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122d8ae7 jmp 0x122d8af2 */
  goto L_122d8af2;
L_122d8ae9:;
  /* 122d8ae9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8aec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8aef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122d8af2:;
  /* 122d8af2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8af6 jge 0x122d8b7c */
  if ((C.sf==C.of)) goto L_122d8b7c;
  /* 122d8afc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8aff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d8b02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8b05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 122d8b08 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 122d8b0c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d8b10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8b13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8b16 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 122d8b1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8b1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d8b20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8b23 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 122d8b26 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 122d8b2a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d8b2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8b31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8b34 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 122d8b38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8b3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8b3e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8b43 jne 0x122d8b52 */
  if (!C.zf) goto L_122d8b52;
  /* 122d8b45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8b48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8b4b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8b50 je 0x122d8b77 */
  if (C.zf) goto L_122d8b77;
L_122d8b52:;
  /* 122d8b52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8b56 je 0x122d8b77 */
  if (C.zf) goto L_122d8b77;
  /* 122d8b58 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8b5c jne 0x122d8b70 */
  if (!C.zf) goto L_122d8b70;
  /* 122d8b5e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8b62 jne 0x122d8b77 */
  if (!C.zf) goto L_122d8b77;
  /* 122d8b64 mov eax, dword ptr [0x122ffa8c] */
  EAX = (r32((uint32_t)(0x122ffa8c)));
  /* 122d8b69 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 122d8b6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8b6e je 0x122d8b77 */
  if (C.zf) goto L_122d8b77;
L_122d8b70:;
  /* 122d8b70 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_122d8b77:;
  /* 122d8b77 jmp 0x122d8ae9 */
  goto L_122d8ae9;
L_122d8b7c:;
  /* 122d8b7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d8b7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d8b82 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 122d8b85 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d8b88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8b8b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 122d8b8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d8b91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d8b94 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 122d8b97 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d8b9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8b9d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 122d8ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8ba3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122d8ba9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_122d8bac:;
  /* 122d8bac pop edi */
  EDI = (pop32());
  /* 122d8bad pop esi */
  ESI = (pop32());
  /* 122d8bae pop ebx */
  EBX = (pop32());
  /* 122d8baf mov esp, ebp */
  ESP = (EBP);
  /* 122d8bb1 pop ebp */
  EBP = (pop32());
  /* 122d8bb2 ret  */
  ESPCHK(0x122d8a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bc0 @ 0x122d8bc0 (697 bytes, 253 insns) */
void f_122d8bc0(void) {
  FTRACE(0x122d8bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d8bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 122d8bc1 mov ebp, esp */
  EBP = (ESP);
  /* 122d8bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d8bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 122d8bc7 push esi */
  push32((uint32_t)(ESI));
  /* 122d8bc8 push edi */
  push32((uint32_t)(EDI));
  /* 122d8bc9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122d8bd0 push 9 */
  push32((uint32_t)(0x9u));
  /* 122d8bd2 call 0x122db530 */
  push32(0x122d8bd7u); f_122db530();
  /* 122d8bd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d8bda:;
  /* 122d8bda push 0x122fd5a0 */
  push32((uint32_t)(0x122fd5a0u));
  /* 122d8bdf push 0x122fcf98 */
  push32((uint32_t)(0x122fcf98u));
  /* 122d8be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8bea push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8bec call 0x122d5120 */
  push32(0x122d8bf1u); f_122d5120();
  /* 122d8bf1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8bf4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8bf7 jne 0x122d8bfa */
  if (!C.zf) goto L_122d8bfa;
  /* 122d8bf9 int3  */
  x86_unimpl("int3 @ 0x122d8bf9");
L_122d8bfa:;
  /* 122d8bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d8bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8bfe jne 0x122d8bda */
  if (!C.zf) goto L_122d8bda;
  /* 122d8c00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8c04 je 0x122d8c0e */
  if (C.zf) goto L_122d8c0e;
  /* 122d8c06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8c09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122d8c0b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122d8c0e:;
  /* 122d8c0e mov eax, dword ptr [0x123017a0] */
  EAX = (r32((uint32_t)(0x123017a0)));
  /* 122d8c13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122d8c16 jmp 0x122d8c20 */
  goto L_122d8c20;
L_122d8c18:;
  /* 122d8c18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8c1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122d8c1d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122d8c20:;
  /* 122d8c20 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8c24 je 0x122d8e42 */
  if (C.zf) goto L_122d8e42;
  /* 122d8c2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8c2d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8c30 je 0x122d8e42 */
  if (C.zf) goto L_122d8e42;
  /* 122d8c36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8c39 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 122d8c3c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d8c42 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8c45 je 0x122d8c74 */
  if (C.zf) goto L_122d8c74;
  /* 122d8c47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8c4a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122d8c4d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122d8c53 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d8c55 je 0x122d8c74 */
  if (C.zf) goto L_122d8c74;
  /* 122d8c57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8c5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122d8c5d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122d8c62 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8c65 jne 0x122d8c79 */
  if (!C.zf) goto L_122d8c79;
  /* 122d8c67 mov ecx, dword ptr [0x122ffa8c] */
  ECX = (r32((uint32_t)(0x122ffa8c)));
  /* 122d8c6d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 122d8c70 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d8c72 jne 0x122d8c79 */
  if (!C.zf) goto L_122d8c79;
L_122d8c74:;
  /* 122d8c74 jmp 0x122d8e3d */
  goto L_122d8e3d;
L_122d8c79:;
  /* 122d8c79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8c7c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8c80 je 0x122d8cf2 */
  if (C.zf) goto L_122d8cf2;
  /* 122d8c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8c84 push 1 */
  push32((uint32_t)(0x1u));
  /* 122d8c86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8c89 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122d8c8c push ecx */
  push32((uint32_t)(ECX));
  /* 122d8c8d call 0x122d8730 */
  push32(0x122d8c92u); f_122d8730();
  /* 122d8c92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8c95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8c97 jne 0x122d8cc3 */
  if (!C.zf) goto L_122d8cc3;
L_122d8c99:;
  /* 122d8c99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8c9c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 122d8c9f push eax */
  push32((uint32_t)(EAX));
  /* 122d8ca0 push 0x122fd58c */
  push32((uint32_t)(0x122fd58cu));
  /* 122d8ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8cab push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8cad call 0x122d5120 */
  push32(0x122d8cb2u); f_122d5120();
  /* 122d8cb2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8cb5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8cb8 jne 0x122d8cbb */
  if (!C.zf) goto L_122d8cbb;
  /* 122d8cba int3  */
  x86_unimpl("int3 @ 0x122d8cba");
L_122d8cbb:;
  /* 122d8cbb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122d8cbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d8cbf jne 0x122d8c99 */
  if (!C.zf) goto L_122d8c99;
  /* 122d8cc1 jmp 0x122d8cf2 */
  goto L_122d8cf2;
L_122d8cc3:;
  /* 122d8cc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8cc6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 122d8cc9 push eax */
  push32((uint32_t)(EAX));
  /* 122d8cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8ccd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122d8cd0 push edx */
  push32((uint32_t)(EDX));
  /* 122d8cd1 push 0x122fd580 */
  push32((uint32_t)(0x122fd580u));
  /* 122d8cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8cda push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8cdc push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8cde call 0x122d5120 */
  push32(0x122d8ce3u); f_122d5120();
  /* 122d8ce3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8ce6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8ce9 jne 0x122d8cec */
  if (!C.zf) goto L_122d8cec;
  /* 122d8ceb int3  */
  x86_unimpl("int3 @ 0x122d8ceb");
L_122d8cec:;
  /* 122d8cec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d8cee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8cf0 jne 0x122d8cc3 */
  if (!C.zf) goto L_122d8cc3;
L_122d8cf2:;
  /* 122d8cf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8cf5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 122d8cf8 push edx */
  push32((uint32_t)(EDX));
  /* 122d8cf9 push 0x122fd578 */
  push32((uint32_t)(0x122fd578u));
  /* 122d8cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8d06 call 0x122d5120 */
  push32(0x122d8d0bu); f_122d5120();
  /* 122d8d0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8d0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8d11 jne 0x122d8d14 */
  if (!C.zf) goto L_122d8d14;
  /* 122d8d13 int3  */
  x86_unimpl("int3 @ 0x122d8d13");
L_122d8d14:;
  /* 122d8d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d8d16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d8d18 jne 0x122d8cf2 */
  if (!C.zf) goto L_122d8cf2;
  /* 122d8d1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8d1d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 122d8d20 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d8d26 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8d29 jne 0x122d8d9c */
  if (!C.zf) goto L_122d8d9c;
L_122d8d2b:;
  /* 122d8d2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8d2e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122d8d31 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8d32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8d35 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122d8d38 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 122d8d3b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122d8d40 push eax */
  push32((uint32_t)(EAX));
  /* 122d8d41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8d44 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8d47 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8d48 push 0x122fd544 */
  push32((uint32_t)(0x122fd544u));
  /* 122d8d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8d55 call 0x122d5120 */
  push32(0x122d8d5au); f_122d5120();
  /* 122d8d5a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8d5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8d60 jne 0x122d8d63 */
  if (!C.zf) goto L_122d8d63;
  /* 122d8d62 int3  */
  x86_unimpl("int3 @ 0x122d8d62");
L_122d8d63:;
  /* 122d8d63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d8d65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d8d67 jne 0x122d8d2b */
  if (!C.zf) goto L_122d8d2b;
  /* 122d8d69 cmp dword ptr [0x12303110], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12303110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8d70 je 0x122d8d8b */
  if (C.zf) goto L_122d8d8b;
  /* 122d8d72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8d75 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122d8d78 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8d79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8d7c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8d7f push edx */
  push32((uint32_t)(EDX));
  /* 122d8d80 call dword ptr [0x12303110] */
  call_ind((uint32_t)(r32((uint32_t)(0x12303110))), 0x122d8d86u);
  /* 122d8d86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8d89 jmp 0x122d8d97 */
  goto L_122d8d97;
L_122d8d8b:;
  /* 122d8d8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8d8e push eax */
  push32((uint32_t)(EAX));
  /* 122d8d8f call 0x122d8e80 */
  push32(0x122d8d94u); f_122d8e80();
  /* 122d8d94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d8d97:;
  /* 122d8d97 jmp 0x122d8e3d */
  goto L_122d8e3d;
L_122d8d9c:;
  /* 122d8d9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8d9f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8da3 jne 0x122d8de2 */
  if (!C.zf) goto L_122d8de2;
L_122d8da5:;
  /* 122d8da5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8da8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122d8dab push eax */
  push32((uint32_t)(EAX));
  /* 122d8dac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8daf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8db2 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8db3 push 0x122fd51c */
  push32((uint32_t)(0x122fd51cu));
  /* 122d8db8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8dba push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8dc0 call 0x122d5120 */
  push32(0x122d8dc5u); f_122d5120();
  /* 122d8dc5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8dc8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8dcb jne 0x122d8dce */
  if (!C.zf) goto L_122d8dce;
  /* 122d8dcd int3  */
  x86_unimpl("int3 @ 0x122d8dcd");
L_122d8dce:;
  /* 122d8dce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d8dd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d8dd2 jne 0x122d8da5 */
  if (!C.zf) goto L_122d8da5;
  /* 122d8dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8dd7 push eax */
  push32((uint32_t)(EAX));
  /* 122d8dd8 call 0x122d8e80 */
  push32(0x122d8dddu); f_122d8e80();
  /* 122d8ddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8de0 jmp 0x122d8e3d */
  goto L_122d8e3d;
L_122d8de2:;
  /* 122d8de2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8de5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 122d8de8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d8dee cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8df1 jne 0x122d8e3d */
  if (!C.zf) goto L_122d8e3d;
L_122d8df3:;
  /* 122d8df3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8df6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122d8df9 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8dfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8dfd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122d8e00 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 122d8e03 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122d8e08 push eax */
  push32((uint32_t)(EAX));
  /* 122d8e09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8e0c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8e0f push ecx */
  push32((uint32_t)(ECX));
  /* 122d8e10 push 0x122fd4e8 */
  push32((uint32_t)(0x122fd4e8u));
  /* 122d8e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8e1d call 0x122d5120 */
  push32(0x122d8e22u); f_122d5120();
  /* 122d8e22 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8e25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8e28 jne 0x122d8e2b */
  if (!C.zf) goto L_122d8e2b;
  /* 122d8e2a int3  */
  x86_unimpl("int3 @ 0x122d8e2a");
L_122d8e2b:;
  /* 122d8e2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d8e2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d8e2f jne 0x122d8df3 */
  if (!C.zf) goto L_122d8df3;
  /* 122d8e31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d8e34 push eax */
  push32((uint32_t)(EAX));
  /* 122d8e35 call 0x122d8e80 */
  push32(0x122d8e3au); f_122d8e80();
  /* 122d8e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d8e3d:;
  /* 122d8e3d jmp 0x122d8c18 */
  goto L_122d8c18;
L_122d8e42:;
  /* 122d8e42 push 9 */
  push32((uint32_t)(0x9u));
  /* 122d8e44 call 0x122db5d0 */
  push32(0x122d8e49u); f_122db5d0();
  /* 122d8e49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d8e4c:;
  /* 122d8e4c push 0x122fd4d0 */
  push32((uint32_t)(0x122fd4d0u));
  /* 122d8e51 push 0x122fcf98 */
  push32((uint32_t)(0x122fcf98u));
  /* 122d8e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8e5e call 0x122d5120 */
  push32(0x122d8e63u); f_122d5120();
  /* 122d8e63 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8e66 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8e69 jne 0x122d8e6c */
  if (!C.zf) goto L_122d8e6c;
  /* 122d8e6b int3  */
  x86_unimpl("int3 @ 0x122d8e6b");
L_122d8e6c:;
  /* 122d8e6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122d8e6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d8e70 jne 0x122d8e4c */
  if (!C.zf) goto L_122d8e4c;
  /* 122d8e72 pop edi */
  EDI = (pop32());
  /* 122d8e73 pop esi */
  ESI = (pop32());
  /* 122d8e74 pop ebx */
  EBX = (pop32());
  /* 122d8e75 mov esp, ebp */
  ESP = (EBP);
  /* 122d8e77 pop ebp */
  EBP = (pop32());
  /* 122d8e78 ret  */
  ESPCHK(0x122d8bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e80 @ 0x122d8e80 (276 bytes, 89 insns) */
void f_122d8e80(void) {
  FTRACE(0x122d8e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d8e80 push ebp */
  push32((uint32_t)(EBP));
  /* 122d8e81 mov ebp, esp */
  EBP = (ESP);
  /* 122d8e83 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d8e86 push ebx */
  push32((uint32_t)(EBX));
  /* 122d8e87 push esi */
  push32((uint32_t)(ESI));
  /* 122d8e88 push edi */
  push32((uint32_t)(EDI));
  /* 122d8e89 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 122d8e90 jmp 0x122d8e9b */
  goto L_122d8e9b;
L_122d8e92:;
  /* 122d8e92 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 122d8e95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8e98 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_122d8e9b:;
  /* 122d8e9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8e9e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8ea2 jge 0x122d8eaf */
  if ((C.sf==C.of)) goto L_122d8eaf;
  /* 122d8ea4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8ea7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122d8eaa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 122d8ead jmp 0x122d8eb6 */
  goto L_122d8eb6;
L_122d8eaf:;
  /* 122d8eaf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_122d8eb6:;
  /* 122d8eb6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 122d8eb9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8ebc jge 0x122d8f5c */
  if ((C.sf==C.of)) goto L_122d8f5c;
  /* 122d8ec2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d8ec5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8ec8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 122d8ecb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 122d8ece cmp dword ptr [0x12300158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12300158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8ed5 jle 0x122d8ef3 */
  if ((C.zf||C.sf!=C.of)) goto L_122d8ef3;
  /* 122d8ed7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 122d8edc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 122d8edf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122d8ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 122d8ee6 call 0x122dda40 */
  push32(0x122d8eebu); f_122dda40();
  /* 122d8eeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8eee mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 122d8ef1 jmp 0x122d8f10 */
  goto L_122d8f10;
L_122d8ef3:;
  /* 122d8ef3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 122d8ef6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d8efc mov eax, dword ptr [0x122ffde8] */
  EAX = (r32((uint32_t)(0x122ffde8)));
  /* 122d8f01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122d8f03 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 122d8f07 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 122d8f0d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_122d8f10:;
  /* 122d8f10 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8f14 je 0x122d8f24 */
  if (C.zf) goto L_122d8f24;
  /* 122d8f16 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 122d8f19 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d8f1f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 122d8f22 jmp 0x122d8f2b */
  goto L_122d8f2b;
L_122d8f24:;
  /* 122d8f24 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_122d8f2b:;
  /* 122d8f2b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 122d8f2e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 122d8f31 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 122d8f35 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 122d8f38 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d8f3e push edx */
  push32((uint32_t)(EDX));
  /* 122d8f3f push 0x122fd5c4 */
  push32((uint32_t)(0x122fd5c4u));
  /* 122d8f44 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 122d8f47 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122d8f4a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 122d8f4e push ecx */
  push32((uint32_t)(ECX));
  /* 122d8f4f call 0x122d4c90 */
  push32(0x122d8f54u); f_122d4c90();
  /* 122d8f54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8f57 jmp 0x122d8e92 */
  goto L_122d8e92;
L_122d8f5c:;
  /* 122d8f5c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 122d8f5f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_122d8f64:;
  /* 122d8f64 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 122d8f67 push eax */
  push32((uint32_t)(EAX));
  /* 122d8f68 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 122d8f6b push ecx */
  push32((uint32_t)(ECX));
  /* 122d8f6c push 0x122fd5b4 */
  push32((uint32_t)(0x122fd5b4u));
  /* 122d8f71 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8f79 call 0x122d5120 */
  push32(0x122d8f7eu); f_122d5120();
  /* 122d8f7e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8f81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8f84 jne 0x122d8f87 */
  if (!C.zf) goto L_122d8f87;
  /* 122d8f86 int3  */
  x86_unimpl("int3 @ 0x122d8f86");
L_122d8f87:;
  /* 122d8f87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d8f89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d8f8b jne 0x122d8f64 */
  if (!C.zf) goto L_122d8f64;
  /* 122d8f8d pop edi */
  EDI = (pop32());
  /* 122d8f8e pop esi */
  ESI = (pop32());
  /* 122d8f8f pop ebx */
  EBX = (pop32());
  /* 122d8f90 mov esp, ebp */
  ESP = (EBP);
  /* 122d8f92 pop ebp */
  EBP = (pop32());
  /* 122d8f93 ret  */
  ESPCHK(0x122d8e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fa0 @ 0x122d8fa0 (116 bytes, 46 insns) */
void f_122d8fa0(void) {
  FTRACE(0x122d8fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d8fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 122d8fa1 mov ebp, esp */
  EBP = (ESP);
  /* 122d8fa3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d8fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 122d8fa7 push esi */
  push32((uint32_t)(ESI));
  /* 122d8fa8 push edi */
  push32((uint32_t)(EDI));
  /* 122d8fa9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 122d8fac push eax */
  push32((uint32_t)(EAX));
  /* 122d8fad call 0x122d8920 */
  push32(0x122d8fb2u); f_122d8920();
  /* 122d8fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8fb5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8fb9 jne 0x122d8fd4 */
  if (!C.zf) goto L_122d8fd4;
  /* 122d8fbb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8fbf jne 0x122d8fd4 */
  if (!C.zf) goto L_122d8fd4;
  /* 122d8fc1 mov ecx, dword ptr [0x122ffa8c] */
  ECX = (r32((uint32_t)(0x122ffa8c)));
  /* 122d8fc7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 122d8fca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d8fcc je 0x122d900b */
  if (C.zf) goto L_122d900b;
  /* 122d8fce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8fd2 je 0x122d900b */
  if (C.zf) goto L_122d900b;
L_122d8fd4:;
  /* 122d8fd4 push 0x122fd5cc */
  push32((uint32_t)(0x122fd5ccu));
  /* 122d8fd9 push 0x122fcf98 */
  push32((uint32_t)(0x122fcf98u));
  /* 122d8fde push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8fe6 call 0x122d5120 */
  push32(0x122d8febu); f_122d5120();
  /* 122d8feb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d8fee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d8ff1 jne 0x122d8ff4 */
  if (!C.zf) goto L_122d8ff4;
  /* 122d8ff3 int3  */
  x86_unimpl("int3 @ 0x122d8ff3");
L_122d8ff4:;
  /* 122d8ff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d8ff6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d8ff8 jne 0x122d8fd4 */
  if (!C.zf) goto L_122d8fd4;
  /* 122d8ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 122d8ffc call 0x122d8bc0 */
  push32(0x122d9001u); f_122d8bc0();
  /* 122d9001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9004 mov eax, 1 */
  EAX = (0x1u);
  /* 122d9009 jmp 0x122d900d */
  goto L_122d900d;
L_122d900b:;
  /* 122d900b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122d900d:;
  /* 122d900d pop edi */
  EDI = (pop32());
  /* 122d900e pop esi */
  ESI = (pop32());
  /* 122d900f pop ebx */
  EBX = (pop32());
  /* 122d9010 mov esp, ebp */
  ESP = (EBP);
  /* 122d9012 pop ebp */
  EBP = (pop32());
  /* 122d9013 ret  */
  ESPCHK(0x122d8fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x122d9020 (197 bytes, 79 insns) */
void f_122d9020(void) {
  FTRACE(0x122d9020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9020 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9021 mov ebp, esp */
  EBP = (ESP);
  /* 122d9023 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9024 push ebx */
  push32((uint32_t)(EBX));
  /* 122d9025 push esi */
  push32((uint32_t)(ESI));
  /* 122d9026 push edi */
  push32((uint32_t)(EDI));
  /* 122d9027 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d902b jne 0x122d9032 */
  if (!C.zf) goto L_122d9032;
  /* 122d902d jmp 0x122d90de */
  goto L_122d90de;
L_122d9032:;
  /* 122d9032 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122d9039 jmp 0x122d9044 */
  goto L_122d9044;
L_122d903b:;
  /* 122d903b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d903e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9041 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122d9044:;
  /* 122d9044 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9048 jge 0x122d908e */
  if ((C.sf==C.of)) goto L_122d908e;
L_122d904a:;
  /* 122d904a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d904d mov edx, dword ptr [ecx*4 + 0x122ffa9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122ffa9c)));
  /* 122d9054 push edx */
  push32((uint32_t)(EDX));
  /* 122d9055 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9058 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d905b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 122d905f push edx */
  push32((uint32_t)(EDX));
  /* 122d9060 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9063 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9066 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 122d906a push edx */
  push32((uint32_t)(EDX));
  /* 122d906b push 0x122fd628 */
  push32((uint32_t)(0x122fd628u));
  /* 122d9070 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9072 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9074 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9076 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9078 call 0x122d5120 */
  push32(0x122d907du); f_122d5120();
  /* 122d907d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9080 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9083 jne 0x122d9086 */
  if (!C.zf) goto L_122d9086;
  /* 122d9085 int3  */
  x86_unimpl("int3 @ 0x122d9085");
L_122d9086:;
  /* 122d9086 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d9088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d908a jne 0x122d904a */
  if (!C.zf) goto L_122d904a;
  /* 122d908c jmp 0x122d903b */
  goto L_122d903b;
L_122d908e:;
  /* 122d908e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9091 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 122d9094 push edx */
  push32((uint32_t)(EDX));
  /* 122d9095 push 0x122fd604 */
  push32((uint32_t)(0x122fd604u));
  /* 122d909a push 0 */
  push32((uint32_t)(0x0u));
  /* 122d909c push 0 */
  push32((uint32_t)(0x0u));
  /* 122d909e push 0 */
  push32((uint32_t)(0x0u));
  /* 122d90a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d90a2 call 0x122d5120 */
  push32(0x122d90a7u); f_122d5120();
  /* 122d90a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d90aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d90ad jne 0x122d90b0 */
  if (!C.zf) goto L_122d90b0;
  /* 122d90af int3  */
  x86_unimpl("int3 @ 0x122d90af");
L_122d90b0:;
  /* 122d90b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d90b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d90b4 jne 0x122d908e */
  if (!C.zf) goto L_122d908e;
L_122d90b6:;
  /* 122d90b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d90b9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 122d90bc push edx */
  push32((uint32_t)(EDX));
  /* 122d90bd push 0x122fd5e4 */
  push32((uint32_t)(0x122fd5e4u));
  /* 122d90c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d90c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d90c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d90c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d90ca call 0x122d5120 */
  push32(0x122d90cfu); f_122d5120();
  /* 122d90cf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d90d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d90d5 jne 0x122d90d8 */
  if (!C.zf) goto L_122d90d8;
  /* 122d90d7 int3  */
  x86_unimpl("int3 @ 0x122d90d7");
L_122d90d8:;
  /* 122d90d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d90da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d90dc jne 0x122d90b6 */
  if (!C.zf) goto L_122d90b6;
L_122d90de:;
  /* 122d90de pop edi */
  EDI = (pop32());
  /* 122d90df pop esi */
  ESI = (pop32());
  /* 122d90e0 pop ebx */
  EBX = (pop32());
  /* 122d90e1 mov esp, ebp */
  ESP = (EBP);
  /* 122d90e3 pop ebp */
  EBP = (pop32());
  /* 122d90e4 ret  */
  ESPCHK(0x122d9020u, _esp0);
  ESP += 4; return;
}

/* FUN_100090f0 @ 0x122d90f0 (329 bytes, 102 insns) */
void f_122d90f0(void) {
  FTRACE(0x122d90f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d90f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122d90f1 mov ebp, esp */
  EBP = (ESP);
  /* 122d90f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d90f6 cmp dword ptr [0x12303270], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12303270))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d90fd jne 0x122d9104 */
  if (!C.zf) goto L_122d9104;
  /* 122d90ff call 0x122de2e0 */
  push32(0x122d9104u); f_122de2e0();
L_122d9104:;
  /* 122d9104 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122d910b mov eax, dword ptr [0x1230173c] */
  EAX = (r32((uint32_t)(0x1230173c)));
  /* 122d9110 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122d9113:;
  /* 122d9113 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9116 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122d9119 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d911b je 0x122d9149 */
  if (C.zf) goto L_122d9149;
  /* 122d911d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9120 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122d9123 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9126 je 0x122d9131 */
  if (C.zf) goto L_122d9131;
  /* 122d9128 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d912b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d912e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122d9131:;
  /* 122d9131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9134 push eax */
  push32((uint32_t)(EAX));
  /* 122d9135 call 0x122d9fb0 */
  push32(0x122d913au); f_122d9fb0();
  /* 122d913a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d913d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9140 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122d9144 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122d9147 jmp 0x122d9113 */
  goto L_122d9113;
L_122d9149:;
  /* 122d9149 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 122d914b push 0x122fd648 */
  push32((uint32_t)(0x122fd648u));
  /* 122d9150 push 2 */
  push32((uint32_t)(0x2u));
  /* 122d9152 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9155 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 122d915c push ecx */
  push32((uint32_t)(ECX));
  /* 122d915d call 0x122d7180 */
  push32(0x122d9162u); f_122d7180();
  /* 122d9162 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9165 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122d9168 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d916b mov dword ptr [0x12301770], edx */
  w32((uint32_t)(0x12301770), (EDX));
  /* 122d9171 cmp dword ptr [0x12301770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9178 jne 0x122d9184 */
  if (!C.zf) goto L_122d9184;
  /* 122d917a push 9 */
  push32((uint32_t)(0x9u));
  /* 122d917c call 0x122d4fd0 */
  push32(0x122d9181u); f_122d4fd0();
  /* 122d9181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d9184:;
  /* 122d9184 mov eax, dword ptr [0x1230173c] */
  EAX = (r32((uint32_t)(0x1230173c)));
  /* 122d9189 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122d918c jmp 0x122d9197 */
  goto L_122d9197;
L_122d918e:;
  /* 122d918e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9191 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9194 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122d9197:;
  /* 122d9197 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d919a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122d919d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d919f je 0x122d9207 */
  if (C.zf) goto L_122d9207;
  /* 122d91a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d91a4 push ecx */
  push32((uint32_t)(ECX));
  /* 122d91a5 call 0x122d9fb0 */
  push32(0x122d91aau); f_122d9fb0();
  /* 122d91aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d91ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d91b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122d91b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d91b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122d91b9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d91bc je 0x122d9205 */
  if (C.zf) goto L_122d9205;
  /* 122d91be push 0x79 */
  push32((uint32_t)(0x79u));
  /* 122d91c0 push 0x122fd648 */
  push32((uint32_t)(0x122fd648u));
  /* 122d91c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122d91c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d91ca push ecx */
  push32((uint32_t)(ECX));
  /* 122d91cb call 0x122d7180 */
  push32(0x122d91d0u); f_122d7180();
  /* 122d91d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d91d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d91d6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122d91d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d91db cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d91de jne 0x122d91ea */
  if (!C.zf) goto L_122d91ea;
  /* 122d91e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 122d91e2 call 0x122d4fd0 */
  push32(0x122d91e7u); f_122d4fd0();
  /* 122d91e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d91ea:;
  /* 122d91ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d91ed push ecx */
  push32((uint32_t)(ECX));
  /* 122d91ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d91f1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122d91f3 push eax */
  push32((uint32_t)(EAX));
  /* 122d91f4 call 0x122da130 */
  push32(0x122d91f9u); f_122da130();
  /* 122d91f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d91fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d91ff add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9202 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_122d9205:;
  /* 122d9205 jmp 0x122d918e */
  goto L_122d918e;
L_122d9207:;
  /* 122d9207 push 2 */
  push32((uint32_t)(0x2u));
  /* 122d9209 mov edx, dword ptr [0x1230173c] */
  EDX = (r32((uint32_t)(0x1230173c)));
  /* 122d920f push edx */
  push32((uint32_t)(EDX));
  /* 122d9210 call 0x122d7c10 */
  push32(0x122d9215u); f_122d7c10();
  /* 122d9215 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9218 mov dword ptr [0x1230173c], 0 */
  w32((uint32_t)(0x1230173c), (0x0u));
  /* 122d9222 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9225 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122d922b mov dword ptr [0x12303260], 1 */
  w32((uint32_t)(0x12303260), (0x1u));
  /* 122d9235 mov esp, ebp */
  ESP = (EBP);
  /* 122d9237 pop ebp */
  EBP = (pop32());
  /* 122d9238 ret  */
  ESPCHK(0x122d90f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009240 @ 0x122d9240 (216 bytes, 69 insns) */
void f_122d9240(void) {
  FTRACE(0x122d9240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9240 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9241 mov ebp, esp */
  EBP = (ESP);
  /* 122d9243 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9246 cmp dword ptr [0x12303270], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12303270))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d924d jne 0x122d9254 */
  if (!C.zf) goto L_122d9254;
  /* 122d924f call 0x122de2e0 */
  push32(0x122d9254u); f_122de2e0();
L_122d9254:;
  /* 122d9254 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 122d9259 push 0x123017ac */
  push32((uint32_t)(0x123017acu));
  /* 122d925e push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9260 call dword ptr [0x12304228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304228))), 0x122d9266u);
  /* 122d9266 mov dword ptr [0x12301780], 0x123017ac */
  w32((uint32_t)(0x12301780), (0x123017acu));
  /* 122d9270 mov eax, dword ptr [0x1230328c] */
  EAX = (r32((uint32_t)(0x1230328c)));
  /* 122d9275 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122d9278 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d927a jne 0x122d9287 */
  if (!C.zf) goto L_122d9287;
  /* 122d927c mov edx, dword ptr [0x12301780] */
  EDX = (r32((uint32_t)(0x12301780)));
  /* 122d9282 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122d9285 jmp 0x122d928f */
  goto L_122d928f;
L_122d9287:;
  /* 122d9287 mov eax, dword ptr [0x1230328c] */
  EAX = (r32((uint32_t)(0x1230328c)));
  /* 122d928c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_122d928f:;
  /* 122d928f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122d9292 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122d9295 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 122d9298 push edx */
  push32((uint32_t)(EDX));
  /* 122d9299 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 122d929c push eax */
  push32((uint32_t)(EAX));
  /* 122d929d push 0 */
  push32((uint32_t)(0x0u));
  /* 122d929f push 0 */
  push32((uint32_t)(0x0u));
  /* 122d92a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d92a4 push ecx */
  push32((uint32_t)(ECX));
  /* 122d92a5 call 0x122d9320 */
  push32(0x122d92aau); f_122d9320();
  /* 122d92aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d92ad push 0x80 */
  push32((uint32_t)(0x80u));
  /* 122d92b2 push 0x122fd654 */
  push32((uint32_t)(0x122fd654u));
  /* 122d92b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122d92b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d92bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d92bf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 122d92c2 push ecx */
  push32((uint32_t)(ECX));
  /* 122d92c3 call 0x122d7180 */
  push32(0x122d92c8u); f_122d7180();
  /* 122d92c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d92cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122d92ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d92d2 jne 0x122d92de */
  if (!C.zf) goto L_122d92de;
  /* 122d92d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 122d92d6 call 0x122d4fd0 */
  push32(0x122d92dbu); f_122d4fd0();
  /* 122d92db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d92de:;
  /* 122d92de lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 122d92e1 push edx */
  push32((uint32_t)(EDX));
  /* 122d92e2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 122d92e5 push eax */
  push32((uint32_t)(EAX));
  /* 122d92e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d92e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d92ec lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 122d92ef push eax */
  push32((uint32_t)(EAX));
  /* 122d92f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d92f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122d92f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d92f7 push edx */
  push32((uint32_t)(EDX));
  /* 122d92f8 call 0x122d9320 */
  push32(0x122d92fdu); f_122d9320();
  /* 122d92fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9300 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9303 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9306 mov dword ptr [0x12301764], eax */
  w32((uint32_t)(0x12301764), (EAX));
  /* 122d930b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d930e mov dword ptr [0x12301768], ecx */
  w32((uint32_t)(0x12301768), (ECX));
  /* 122d9314 mov esp, ebp */
  ESP = (EBP);
  /* 122d9316 pop ebp */
  EBP = (pop32());
  /* 122d9317 ret  */
  ESPCHK(0x122d9240u, _esp0);
  ESP += 4; return;
}

/* FUN_10009320 @ 0x122d9320 (1060 bytes, 360 insns) */
void f_122d9320(void) {
  FTRACE(0x122d9320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9320 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9321 mov ebp, esp */
  EBP = (ESP);
  /* 122d9323 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9326 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d9329 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122d932f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122d9332 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 122d9338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d933b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122d933e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9342 je 0x122d9355 */
  if (C.zf) goto L_122d9355;
  /* 122d9344 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9347 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d934a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122d934c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d934f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9352 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_122d9355:;
  /* 122d9355 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9358 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122d935b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d935e jne 0x122d942d */
  if (!C.zf) goto L_122d942d;
L_122d9364:;
  /* 122d9364 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9367 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d936a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122d936d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9370 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122d9373 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9376 je 0x122d93f2 */
  if (C.zf) goto L_122d93f2;
  /* 122d9378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d937b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122d937e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d9380 je 0x122d93f2 */
  if (C.zf) goto L_122d93f2;
  /* 122d9382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9385 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d9387 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122d9389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d938b mov al, byte ptr [edx + 0x12301c81] */
  AL = (r8((uint32_t)(EDX + 0x12301c81)));
  /* 122d9391 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 122d9394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d9396 je 0x122d93c7 */
  if (C.zf) goto L_122d93c7;
  /* 122d9398 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d939b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122d939d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d93a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d93a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122d93a5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d93a9 je 0x122d93c7 */
  if (C.zf) goto L_122d93c7;
  /* 122d93ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d93ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d93b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122d93b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122d93b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d93b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d93bb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122d93be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d93c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d93c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122d93c7:;
  /* 122d93c7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d93ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122d93cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d93cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d93d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122d93d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d93d8 je 0x122d93ed */
  if (C.zf) goto L_122d93ed;
  /* 122d93da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d93dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d93e0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122d93e2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122d93e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d93e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d93ea mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_122d93ed:;
  /* 122d93ed jmp 0x122d9364 */
  goto L_122d9364;
L_122d93f2:;
  /* 122d93f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d93f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122d93f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d93fa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d93fd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122d93ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9403 je 0x122d9414 */
  if (C.zf) goto L_122d9414;
  /* 122d9405 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9408 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 122d940b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d940e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9411 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_122d9414:;
  /* 122d9414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9417 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122d941a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d941d jne 0x122d9428 */
  if (!C.zf) goto L_122d9428;
  /* 122d941f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9422 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9425 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122d9428:;
  /* 122d9428 jmp 0x122d94fc */
  goto L_122d94fc;
L_122d942d:;
  /* 122d942d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d9430 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122d9432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9435 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d9438 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122d943a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d943e je 0x122d9453 */
  if (C.zf) goto L_122d9453;
  /* 122d9440 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9443 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9446 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122d9448 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122d944a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d944d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9450 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_122d9453:;
  /* 122d9453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9456 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122d9458 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 122d945b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d945e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9461 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122d9464 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9467 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122d946d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d946f mov dl, byte ptr [ecx + 0x12301c81] */
  DL = (r8((uint32_t)(ECX + 0x12301c81)));
  /* 122d9475 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122d9478 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d947a je 0x122d94ab */
  if (C.zf) goto L_122d94ab;
  /* 122d947c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d947f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122d9481 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9484 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d9487 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122d9489 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d948d je 0x122d94a2 */
  if (C.zf) goto L_122d94a2;
  /* 122d948f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9495 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122d9497 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122d9499 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d949c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d949f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_122d94a2:;
  /* 122d94a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d94a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d94a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122d94ab:;
  /* 122d94ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d94ae and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d94b4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d94b7 je 0x122d94d7 */
  if (C.zf) goto L_122d94d7;
  /* 122d94b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d94bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122d94c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d94c3 je 0x122d94d7 */
  if (C.zf) goto L_122d94d7;
  /* 122d94c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d94c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122d94ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d94d1 jne 0x122d942d */
  if (!C.zf) goto L_122d942d;
L_122d94d7:;
  /* 122d94d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d94da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122d94e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d94e2 jne 0x122d94ef */
  if (!C.zf) goto L_122d94ef;
  /* 122d94e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d94e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d94ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122d94ed jmp 0x122d94fc */
  goto L_122d94fc;
L_122d94ef:;
  /* 122d94ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d94f3 je 0x122d94fc */
  if (C.zf) goto L_122d94fc;
  /* 122d94f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d94f8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_122d94fc:;
  /* 122d94fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_122d9503:;
  /* 122d9503 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9506 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122d9509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d950b je 0x122d952e */
  if (C.zf) goto L_122d952e;
L_122d950d:;
  /* 122d950d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9510 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122d9513 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9516 je 0x122d9523 */
  if (C.zf) goto L_122d9523;
  /* 122d9518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d951b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122d951e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9521 jne 0x122d952e */
  if (!C.zf) goto L_122d952e;
L_122d9523:;
  /* 122d9523 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9526 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9529 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122d952c jmp 0x122d950d */
  goto L_122d950d;
L_122d952e:;
  /* 122d952e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9531 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122d9534 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d9536 jne 0x122d953d */
  if (!C.zf) goto L_122d953d;
  /* 122d9538 jmp 0x122d971b */
  goto L_122d971b;
L_122d953d:;
  /* 122d953d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9541 je 0x122d9554 */
  if (C.zf) goto L_122d9554;
  /* 122d9543 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9546 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9549 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122d954b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d954e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9551 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_122d9554:;
  /* 122d9554 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122d9557 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122d9559 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d955c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122d955f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_122d9561:;
  /* 122d9561 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 122d9568 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_122d956f:;
  /* 122d956f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9572 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122d9575 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9578 jne 0x122d958e */
  if (!C.zf) goto L_122d958e;
  /* 122d957a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d957d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9580 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122d9583 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d9586 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9589 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122d958c jmp 0x122d956f */
  goto L_122d956f;
L_122d958e:;
  /* 122d958e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9591 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122d9594 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9597 jne 0x122d95ea */
  if (!C.zf) goto L_122d95ea;
  /* 122d9599 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d959c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d959e mov ecx, 2 */
  ECX = (0x2u);
  /* 122d95a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122d95a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d95a7 jne 0x122d95e2 */
  if (!C.zf) goto L_122d95e2;
  /* 122d95a9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d95ad je 0x122d95cf */
  if (C.zf) goto L_122d95cf;
  /* 122d95af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d95b2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 122d95b6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d95b9 jne 0x122d95c6 */
  if (!C.zf) goto L_122d95c6;
  /* 122d95bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d95be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d95c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122d95c4 jmp 0x122d95cd */
  goto L_122d95cd;
L_122d95c6:;
  /* 122d95c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122d95cd:;
  /* 122d95cd jmp 0x122d95d6 */
  goto L_122d95d6;
L_122d95cf:;
  /* 122d95cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122d95d6:;
  /* 122d95d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d95d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d95dc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 122d95df mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_122d95e2:;
  /* 122d95e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d95e5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122d95e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122d95ea:;
  /* 122d95ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d95ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d95f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d95f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122d95f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d95f8 je 0x122d961e */
  if (C.zf) goto L_122d961e;
  /* 122d95fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d95fe je 0x122d960f */
  if (C.zf) goto L_122d960f;
  /* 122d9600 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9603 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 122d9606 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9609 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d960c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_122d960f:;
  /* 122d960f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d9612 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122d9614 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9617 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d961a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122d961c jmp 0x122d95ea */
  goto L_122d95ea;
L_122d961e:;
  /* 122d961e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9621 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122d9624 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d9626 je 0x122d9644 */
  if (C.zf) goto L_122d9644;
  /* 122d9628 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d962c jne 0x122d9649 */
  if (!C.zf) goto L_122d9649;
  /* 122d962e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9631 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122d9634 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9637 je 0x122d9644 */
  if (C.zf) goto L_122d9644;
  /* 122d9639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d963c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122d963f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9642 jne 0x122d9649 */
  if (!C.zf) goto L_122d9649;
L_122d9644:;
  /* 122d9644 jmp 0x122d96f4 */
  goto L_122d96f4;
L_122d9649:;
  /* 122d9649 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d964d je 0x122d96e6 */
  if (C.zf) goto L_122d96e6;
  /* 122d9653 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9657 je 0x122d96ad */
  if (C.zf) goto L_122d96ad;
  /* 122d9659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d965c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d965e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122d9660 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122d9662 mov cl, byte ptr [eax + 0x12301c81] */
  CL = (r8((uint32_t)(EAX + 0x12301c81)));
  /* 122d9668 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122d966b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d966d je 0x122d9698 */
  if (C.zf) goto L_122d9698;
  /* 122d966f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9672 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9675 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122d9677 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 122d9679 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d967c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d967f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 122d9682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9685 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9688 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122d968b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d968e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122d9690 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9693 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d9696 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122d9698:;
  /* 122d9698 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d969b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d969e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122d96a0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122d96a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d96a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d96a8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122d96ab jmp 0x122d96d9 */
  goto L_122d96d9;
L_122d96ad:;
  /* 122d96ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d96b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d96b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122d96b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122d96b6 mov cl, byte ptr [eax + 0x12301c81] */
  CL = (r8((uint32_t)(EAX + 0x12301c81)));
  /* 122d96bc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122d96bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122d96c1 je 0x122d96d9 */
  if (C.zf) goto L_122d96d9;
  /* 122d96c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d96c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d96c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122d96cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d96cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122d96d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d96d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d96d7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122d96d9:;
  /* 122d96d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d96dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122d96de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d96e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d96e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122d96e6:;
  /* 122d96e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d96e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d96ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122d96ef jmp 0x122d9561 */
  goto L_122d9561;
L_122d96f4:;
  /* 122d96f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d96f8 je 0x122d9709 */
  if (C.zf) goto L_122d9709;
  /* 122d96fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d96fd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 122d9700 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9703 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9706 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_122d9709:;
  /* 122d9709 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d970c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122d970e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9711 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122d9714 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122d9716 jmp 0x122d9503 */
  goto L_122d9503;
L_122d971b:;
  /* 122d971b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d971f je 0x122d9733 */
  if (C.zf) goto L_122d9733;
  /* 122d9721 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9724 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122d972a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d972d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9730 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_122d9733:;
  /* 122d9733 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122d9736 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122d9738 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d973b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122d973e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122d9740 mov esp, ebp */
  ESP = (EBP);
  /* 122d9742 pop ebp */
  EBP = (pop32());
  /* 122d9743 ret  */
  ESPCHK(0x122d9320u, _esp0);
  ESP += 4; return;
}

/* FUN_10009750 @ 0x122d9750 (537 bytes, 173 insns) */
void f_122d9750(void) {
  FTRACE(0x122d9750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9750 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9751 mov ebp, esp */
  EBP = (ESP);
  /* 122d9753 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9756 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 122d975d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 122d9764 cmp dword ptr [0x123018b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123018b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d976b jne 0x122d97aa */
  if (!C.zf) goto L_122d97aa;
  /* 122d976d call dword ptr [0x12304284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304284))), 0x122d9773u);
  /* 122d9773 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122d9776 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d977a je 0x122d9788 */
  if (C.zf) goto L_122d9788;
  /* 122d977c mov dword ptr [0x123018b0], 1 */
  w32((uint32_t)(0x123018b0), (0x1u));
  /* 122d9786 jmp 0x122d97aa */
  goto L_122d97aa;
L_122d9788:;
  /* 122d9788 call dword ptr [0x12304280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304280))), 0x122d978eu);
  /* 122d978e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122d9791 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9795 je 0x122d97a3 */
  if (C.zf) goto L_122d97a3;
  /* 122d9797 mov dword ptr [0x123018b0], 2 */
  w32((uint32_t)(0x123018b0), (0x2u));
  /* 122d97a1 jmp 0x122d97aa */
  goto L_122d97aa;
L_122d97a3:;
  /* 122d97a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d97a5 jmp 0x122d9965 */
  goto L_122d9965;
L_122d97aa:;
  /* 122d97aa cmp dword ptr [0x123018b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123018b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d97b1 jne 0x122d98ae */
  if (!C.zf) goto L_122d98ae;
  /* 122d97b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d97bb jne 0x122d97d3 */
  if (!C.zf) goto L_122d97d3;
  /* 122d97bd call dword ptr [0x12304284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304284))), 0x122d97c3u);
  /* 122d97c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122d97c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d97ca jne 0x122d97d3 */
  if (!C.zf) goto L_122d97d3;
  /* 122d97cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d97ce jmp 0x122d9965 */
  goto L_122d9965;
L_122d97d3:;
  /* 122d97d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122d97d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122d97d9:;
  /* 122d97d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d97dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d97de mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 122d97e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d97e3 je 0x122d9805 */
  if (C.zf) goto L_122d9805;
  /* 122d97e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d97e8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d97eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122d97ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d97f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d97f3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 122d97f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d97f8 jne 0x122d9803 */
  if (!C.zf) goto L_122d9803;
  /* 122d97fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d97fd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9800 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122d9803:;
  /* 122d9803 jmp 0x122d97d9 */
  goto L_122d97d9;
L_122d9805:;
  /* 122d9805 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9808 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d980b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 122d980d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9810 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122d9813 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9815 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9817 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9819 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d981b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d981e push edx */
  push32((uint32_t)(EDX));
  /* 122d981f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122d9822 push eax */
  push32((uint32_t)(EAX));
  /* 122d9823 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9825 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9827 call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122d982du);
  /* 122d982d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122d9830 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9834 je 0x122d9854 */
  if (C.zf) goto L_122d9854;
  /* 122d9836 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 122d9838 push 0x122fd660 */
  push32((uint32_t)(0x122fd660u));
  /* 122d983d push 2 */
  push32((uint32_t)(0x2u));
  /* 122d983f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d9842 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9843 call 0x122d7180 */
  push32(0x122d9848u); f_122d7180();
  /* 122d9848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d984b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122d984e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9852 jne 0x122d9865 */
  if (!C.zf) goto L_122d9865;
L_122d9854:;
  /* 122d9854 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122d9857 push edx */
  push32((uint32_t)(EDX));
  /* 122d9858 call dword ptr [0x12304278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304278))), 0x122d985eu);
  /* 122d985e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d9860 jmp 0x122d9965 */
  goto L_122d9965;
L_122d9865:;
  /* 122d9865 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9867 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9869 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d986c push eax */
  push32((uint32_t)(EAX));
  /* 122d986d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122d9870 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9874 push edx */
  push32((uint32_t)(EDX));
  /* 122d9875 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122d9878 push eax */
  push32((uint32_t)(EAX));
  /* 122d9879 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d987b push 0 */
  push32((uint32_t)(0x0u));
  /* 122d987d call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122d9883u);
  /* 122d9883 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d9885 jne 0x122d989c */
  if (!C.zf) goto L_122d989c;
  /* 122d9887 push 2 */
  push32((uint32_t)(0x2u));
  /* 122d9889 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122d988c push ecx */
  push32((uint32_t)(ECX));
  /* 122d988d call 0x122d7c10 */
  push32(0x122d9892u); f_122d7c10();
  /* 122d9892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9895 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_122d989c:;
  /* 122d989c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122d989f push edx */
  push32((uint32_t)(EDX));
  /* 122d98a0 call dword ptr [0x12304278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304278))), 0x122d98a6u);
  /* 122d98a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122d98a9 jmp 0x122d9965 */
  goto L_122d9965;
L_122d98ae:;
  /* 122d98ae cmp dword ptr [0x123018b0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123018b0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d98b5 jne 0x122d9963 */
  if (!C.zf) goto L_122d9963;
  /* 122d98bb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d98bf jne 0x122d98d7 */
  if (!C.zf) goto L_122d98d7;
  /* 122d98c1 call dword ptr [0x12304280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304280))), 0x122d98c7u);
  /* 122d98c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122d98ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d98ce jne 0x122d98d7 */
  if (!C.zf) goto L_122d98d7;
  /* 122d98d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d98d2 jmp 0x122d9965 */
  goto L_122d9965;
L_122d98d7:;
  /* 122d98d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122d98da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122d98dd:;
  /* 122d98dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d98e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122d98e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d98e5 je 0x122d9905 */
  if (C.zf) goto L_122d9905;
  /* 122d98e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d98ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d98ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122d98f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d98f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122d98f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122d98f8 jne 0x122d9903 */
  if (!C.zf) goto L_122d9903;
  /* 122d98fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d98fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9900 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122d9903:;
  /* 122d9903 jmp 0x122d98dd */
  goto L_122d98dd;
L_122d9905:;
  /* 122d9905 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9908 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d990b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d990e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122d9911 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 122d9916 push 0x122fd660 */
  push32((uint32_t)(0x122fd660u));
  /* 122d991b push 2 */
  push32((uint32_t)(0x2u));
  /* 122d991d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d9920 push edx */
  push32((uint32_t)(EDX));
  /* 122d9921 call 0x122d7180 */
  push32(0x122d9926u); f_122d7180();
  /* 122d9926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9929 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122d992c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9930 jne 0x122d9940 */
  if (!C.zf) goto L_122d9940;
  /* 122d9932 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122d9935 push eax */
  push32((uint32_t)(EAX));
  /* 122d9936 call dword ptr [0x12304274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304274))), 0x122d993cu);
  /* 122d993c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d993e jmp 0x122d9965 */
  goto L_122d9965;
L_122d9940:;
  /* 122d9940 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122d9943 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9944 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122d9947 push edx */
  push32((uint32_t)(EDX));
  /* 122d9948 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d994b push eax */
  push32((uint32_t)(EAX));
  /* 122d994c call 0x122de310 */
  push32(0x122d9951u); f_122de310();
  /* 122d9951 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9954 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122d9957 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9958 call dword ptr [0x12304274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304274))), 0x122d995eu);
  /* 122d995e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9961 jmp 0x122d9965 */
  goto L_122d9965;
L_122d9963:;
  /* 122d9963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122d9965:;
  /* 122d9965 mov esp, ebp */
  ESP = (EBP);
  /* 122d9967 pop ebp */
  EBP = (pop32());
  /* 122d9968 ret  */
  ESPCHK(0x122d9750u, _esp0);
  ESP += 4; return;
}

/* FUN_10009970 @ 0x122d9970 (77 bytes, 25 insns) */
void f_122d9970(void) {
  FTRACE(0x122d9970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9970 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9971 mov ebp, esp */
  EBP = (ESP);
  /* 122d9973 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9975 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 122d997a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d997c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9980 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 122d9983 push eax */
  push32((uint32_t)(EAX));
  /* 122d9984 call dword ptr [0x123041fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123041fc))), 0x122d998au);
  /* 122d998a mov dword ptr [0x12303104], eax */
  w32((uint32_t)(0x12303104), (EAX));
  /* 122d998f cmp dword ptr [0x12303104], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12303104))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9996 jne 0x122d999c */
  if (!C.zf) goto L_122d999c;
  /* 122d9998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d999a jmp 0x122d99bb */
  goto L_122d99bb;
L_122d999c:;
  /* 122d999c call 0x122dbdd0 */
  push32(0x122d99a1u); f_122dbdd0();
  /* 122d99a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d99a3 jne 0x122d99b6 */
  if (!C.zf) goto L_122d99b6;
  /* 122d99a5 mov ecx, dword ptr [0x12303104] */
  ECX = (r32((uint32_t)(0x12303104)));
  /* 122d99ab push ecx */
  push32((uint32_t)(ECX));
  /* 122d99ac call dword ptr [0x123041f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123041f4))), 0x122d99b2u);
  /* 122d99b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122d99b4 jmp 0x122d99bb */
  goto L_122d99bb;
L_122d99b6:;
  /* 122d99b6 mov eax, 1 */
  EAX = (0x1u);
L_122d99bb:;
  /* 122d99bb pop ebp */
  EBP = (pop32());
  /* 122d99bc ret  */
  ESPCHK(0x122d9970u, _esp0);
  ESP += 4; return;
}

/* FUN_100099c0 @ 0x122d99c0 (156 bytes, 48 insns) */
void f_122d99c0(void) {
  FTRACE(0x122d99c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d99c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122d99c1 mov ebp, esp */
  EBP = (ESP);
  /* 122d99c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d99c6 mov eax, dword ptr [0x12301da8] */
  EAX = (r32((uint32_t)(0x12301da8)));
  /* 122d99cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122d99ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122d99d5 jmp 0x122d99e0 */
  goto L_122d99e0;
L_122d99d7:;
  /* 122d99d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d99da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d99dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122d99e0:;
  /* 122d99e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d99e3 cmp edx, dword ptr [0x12301da4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12301da4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d99e9 jge 0x122d9a36 */
  if ((C.sf==C.of)) goto L_122d9a36;
  /* 122d99eb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 122d99f0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 122d99f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d99f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122d99fb push ecx */
  push32((uint32_t)(ECX));
  /* 122d99fc call dword ptr [0x12304294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304294))), 0x122d9a02u);
  /* 122d9a02 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 122d9a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9a09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9a0c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 122d9a0f push eax */
  push32((uint32_t)(EAX));
  /* 122d9a10 call dword ptr [0x12304294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304294))), 0x122d9a16u);
  /* 122d9a16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9a19 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 122d9a1c push edx */
  push32((uint32_t)(EDX));
  /* 122d9a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9a1f mov eax, dword ptr [0x12303104] */
  EAX = (r32((uint32_t)(0x12303104)));
  /* 122d9a24 push eax */
  push32((uint32_t)(EAX));
  /* 122d9a25 call dword ptr [0x12304200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304200))), 0x122d9a2bu);
  /* 122d9a2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9a2e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9a31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122d9a34 jmp 0x122d99d7 */
  goto L_122d99d7;
L_122d9a36:;
  /* 122d9a36 mov edx, dword ptr [0x12301da8] */
  EDX = (r32((uint32_t)(0x12301da8)));
  /* 122d9a3c push edx */
  push32((uint32_t)(EDX));
  /* 122d9a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9a3f mov eax, dword ptr [0x12303104] */
  EAX = (r32((uint32_t)(0x12303104)));
  /* 122d9a44 push eax */
  push32((uint32_t)(EAX));
  /* 122d9a45 call dword ptr [0x12304200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304200))), 0x122d9a4bu);
  /* 122d9a4b mov ecx, dword ptr [0x12303104] */
  ECX = (r32((uint32_t)(0x12303104)));
  /* 122d9a51 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9a52 call dword ptr [0x123041f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123041f4))), 0x122d9a58u);
  /* 122d9a58 mov esp, ebp */
  ESP = (EBP);
  /* 122d9a5a pop ebp */
  EBP = (pop32());
  /* 122d9a5b ret  */
  ESPCHK(0x122d99c0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x122d9a60 (73 bytes, 19 insns) */
void f_122d9a60(void) {
  FTRACE(0x122d9a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9a60 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9a61 mov ebp, esp */
  EBP = (ESP);
  /* 122d9a63 cmp dword ptr [0x12301744], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301744))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9a6a je 0x122d9a7e */
  if (C.zf) goto L_122d9a7e;
  /* 122d9a6c cmp dword ptr [0x12301744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9a73 jne 0x122d9aa7 */
  if (!C.zf) goto L_122d9aa7;
  /* 122d9a75 cmp dword ptr [0x12301748], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301748))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9a7c jne 0x122d9aa7 */
  if (!C.zf) goto L_122d9aa7;
L_122d9a7e:;
  /* 122d9a7e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 122d9a83 call 0x122d9ab0 */
  push32(0x122d9a88u); f_122d9ab0();
  /* 122d9a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9a8b cmp dword ptr [0x123018b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123018b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9a92 je 0x122d9a9a */
  if (C.zf) goto L_122d9a9a;
  /* 122d9a94 call dword ptr [0x123018b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123018b4))), 0x122d9a9au);
L_122d9a9a:;
  /* 122d9a9a push 0xff */
  push32((uint32_t)(0xffu));
  /* 122d9a9f call 0x122d9ab0 */
  push32(0x122d9aa4u); f_122d9ab0();
  /* 122d9aa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d9aa7:;
  /* 122d9aa7 pop ebp */
  EBP = (pop32());
  /* 122d9aa8 ret  */
  ESPCHK(0x122d9a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ab0 @ 0x122d9ab0 (447 bytes, 131 insns) */
void f_122d9ab0(void) {
  FTRACE(0x122d9ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9ab1 mov ebp, esp */
  EBP = (ESP);
  /* 122d9ab3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9ab9 push ebx */
  push32((uint32_t)(EBX));
  /* 122d9aba push esi */
  push32((uint32_t)(ESI));
  /* 122d9abb push edi */
  push32((uint32_t)(EDI));
  /* 122d9abc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122d9ac3 jmp 0x122d9ace */
  goto L_122d9ace;
L_122d9ac5:;
  /* 122d9ac5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9ac8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9acb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122d9ace:;
  /* 122d9ace cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9ad2 jae 0x122d9ae7 */
  if (!C.cf) goto L_122d9ae7;
  /* 122d9ad4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9ad7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9ada cmp edx, dword ptr [ecx*8 + 0x122ffab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x122ffab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9ae1 jne 0x122d9ae5 */
  if (!C.zf) goto L_122d9ae5;
  /* 122d9ae3 jmp 0x122d9ae7 */
  goto L_122d9ae7;
L_122d9ae5:;
  /* 122d9ae5 jmp 0x122d9ac5 */
  goto L_122d9ac5;
L_122d9ae7:;
  /* 122d9ae7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9aea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9aed cmp ecx, dword ptr [eax*8 + 0x122ffab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x122ffab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9af4 jne 0x122d9c68 */
  if (!C.zf) goto L_122d9c68;
  /* 122d9afa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9b01 je 0x122d9b24 */
  if (C.zf) goto L_122d9b24;
  /* 122d9b03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9b06 mov eax, dword ptr [edx*8 + 0x122ffabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x122ffabc)));
  /* 122d9b0d push eax */
  push32((uint32_t)(EAX));
  /* 122d9b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9b14 push 1 */
  push32((uint32_t)(0x1u));
  /* 122d9b16 call 0x122d5120 */
  push32(0x122d9b1bu); f_122d5120();
  /* 122d9b1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9b1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9b21 jne 0x122d9b24 */
  if (!C.zf) goto L_122d9b24;
  /* 122d9b23 int3  */
  x86_unimpl("int3 @ 0x122d9b23");
L_122d9b24:;
  /* 122d9b24 cmp dword ptr [0x12301744], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301744))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9b2b je 0x122d9b3f */
  if (C.zf) goto L_122d9b3f;
  /* 122d9b2d cmp dword ptr [0x12301744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9b34 jne 0x122d9b78 */
  if (!C.zf) goto L_122d9b78;
  /* 122d9b36 cmp dword ptr [0x12301748], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301748))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9b3d jne 0x122d9b78 */
  if (!C.zf) goto L_122d9b78;
L_122d9b3f:;
  /* 122d9b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9b41 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 122d9b44 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9b45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9b48 mov eax, dword ptr [edx*8 + 0x122ffabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x122ffabc)));
  /* 122d9b4f push eax */
  push32((uint32_t)(EAX));
  /* 122d9b50 call 0x122d9fb0 */
  push32(0x122d9b55u); f_122d9fb0();
  /* 122d9b55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9b58 push eax */
  push32((uint32_t)(EAX));
  /* 122d9b59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9b5c mov edx, dword ptr [ecx*8 + 0x122ffabc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x122ffabc)));
  /* 122d9b63 push edx */
  push32((uint32_t)(EDX));
  /* 122d9b64 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 122d9b66 call dword ptr [0x12304210] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304210))), 0x122d9b6cu);
  /* 122d9b6c push eax */
  push32((uint32_t)(EAX));
  /* 122d9b6d call dword ptr [0x12304214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304214))), 0x122d9b73u);
  /* 122d9b73 jmp 0x122d9c68 */
  goto L_122d9c68;
L_122d9b78:;
  /* 122d9b78 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9b7f je 0x122d9c68 */
  if (C.zf) goto L_122d9c68;
  /* 122d9b85 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 122d9b8a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 122d9b90 push eax */
  push32((uint32_t)(EAX));
  /* 122d9b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9b93 call dword ptr [0x12304228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304228))), 0x122d9b99u);
  /* 122d9b99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122d9b9b jne 0x122d9bb1 */
  if (!C.zf) goto L_122d9bb1;
  /* 122d9b9d push 0x122fcde0 */
  push32((uint32_t)(0x122fcde0u));
  /* 122d9ba2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 122d9ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9ba9 call 0x122da130 */
  push32(0x122d9baeu); f_122da130();
  /* 122d9bae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d9bb1:;
  /* 122d9bb1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 122d9bb7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122d9bba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9bbd push eax */
  push32((uint32_t)(EAX));
  /* 122d9bbe call 0x122d9fb0 */
  push32(0x122d9bc3u); f_122d9fb0();
  /* 122d9bc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9bc6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9bc9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9bcc jbe 0x122d9bfa */
  if ((C.cf||C.zf)) goto L_122d9bfa;
  /* 122d9bce lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 122d9bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9bd5 call 0x122d9fb0 */
  push32(0x122d9bdau); f_122d9fb0();
  /* 122d9bda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9bdd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9be0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 122d9be4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122d9be7 push 3 */
  push32((uint32_t)(0x3u));
  /* 122d9be9 push 0x122fcddc */
  push32((uint32_t)(0x122fcddcu));
  /* 122d9bee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9bf1 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9bf2 call 0x122da9a0 */
  push32(0x122d9bf7u); f_122da9a0();
  /* 122d9bf7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d9bfa:;
  /* 122d9bfa push 0x122fd91c */
  push32((uint32_t)(0x122fd91cu));
  /* 122d9bff lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 122d9c05 push edx */
  push32((uint32_t)(EDX));
  /* 122d9c06 call 0x122da130 */
  push32(0x122d9c0bu); f_122da130();
  /* 122d9c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9c0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9c11 push eax */
  push32((uint32_t)(EAX));
  /* 122d9c12 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 122d9c18 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9c19 call 0x122da140 */
  push32(0x122d9c1eu); f_122da140();
  /* 122d9c1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9c21 push 0x122fcd54 */
  push32((uint32_t)(0x122fcd54u));
  /* 122d9c26 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 122d9c2c push edx */
  push32((uint32_t)(EDX));
  /* 122d9c2d call 0x122da140 */
  push32(0x122d9c32u); f_122da140();
  /* 122d9c32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9c35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9c38 mov ecx, dword ptr [eax*8 + 0x122ffabc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x122ffabc)));
  /* 122d9c3f push ecx */
  push32((uint32_t)(ECX));
  /* 122d9c40 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 122d9c46 push edx */
  push32((uint32_t)(EDX));
  /* 122d9c47 call 0x122da140 */
  push32(0x122d9c4cu); f_122da140();
  /* 122d9c4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9c4f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 122d9c54 push 0x122fd8f4 */
  push32((uint32_t)(0x122fd8f4u));
  /* 122d9c59 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 122d9c5f push eax */
  push32((uint32_t)(EAX));
  /* 122d9c60 call 0x122da8e0 */
  push32(0x122d9c65u); f_122da8e0();
  /* 122d9c65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d9c68:;
  /* 122d9c68 pop edi */
  EDI = (pop32());
  /* 122d9c69 pop esi */
  ESI = (pop32());
  /* 122d9c6a pop ebx */
  EBX = (pop32());
  /* 122d9c6b mov esp, ebp */
  ESP = (EBP);
  /* 122d9c6d pop ebp */
  EBP = (pop32());
  /* 122d9c6e ret  */
  ESPCHK(0x122d9ab0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x122d9c70 (80 bytes, 27 insns) */
void f_122d9c70(void) {
  FTRACE(0x122d9c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9c70 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9c71 mov ebp, esp */
  EBP = (ESP);
  /* 122d9c73 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9c74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122d9c7b jmp 0x122d9c86 */
  goto L_122d9c86;
L_122d9c7d:;
  /* 122d9c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9c80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9c83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122d9c86:;
  /* 122d9c86 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9c8a jae 0x122d9c9f */
  if (!C.cf) goto L_122d9c9f;
  /* 122d9c8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9c8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9c92 cmp edx, dword ptr [ecx*8 + 0x122ffab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x122ffab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9c99 jne 0x122d9c9d */
  if (!C.zf) goto L_122d9c9d;
  /* 122d9c9b jmp 0x122d9c9f */
  goto L_122d9c9f;
L_122d9c9d:;
  /* 122d9c9d jmp 0x122d9c7d */
  goto L_122d9c7d;
L_122d9c9f:;
  /* 122d9c9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9ca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9ca5 cmp ecx, dword ptr [eax*8 + 0x122ffab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x122ffab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9cac jne 0x122d9cba */
  if (!C.zf) goto L_122d9cba;
  /* 122d9cae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9cb1 mov eax, dword ptr [edx*8 + 0x122ffabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x122ffabc)));
  /* 122d9cb8 jmp 0x122d9cbc */
  goto L_122d9cbc;
L_122d9cba:;
  /* 122d9cba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122d9cbc:;
  /* 122d9cbc mov esp, ebp */
  ESP = (EBP);
  /* 122d9cbe pop ebp */
  EBP = (pop32());
  /* 122d9cbf ret  */
  ESPCHK(0x122d9c70u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x122d9cc0 (66 bytes, 28 insns) */
void f_122d9cc0(void) {
  FTRACE(0x122d9cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9cc1 mov ebp, esp */
  EBP = (ESP);
  /* 122d9cc3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9cc7 jne 0x122d9ce7 */
  if (!C.zf) goto L_122d9ce7;
  /* 122d9cc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9ccd jge 0x122d9ce7 */
  if ((C.sf==C.of)) goto L_122d9ce7;
  /* 122d9ccf push 1 */
  push32((uint32_t)(0x1u));
  /* 122d9cd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9cd4 push eax */
  push32((uint32_t)(EAX));
  /* 122d9cd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9cd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9cdc push edx */
  push32((uint32_t)(EDX));
  /* 122d9cdd call 0x122d9d10 */
  push32(0x122d9ce2u); f_122d9d10();
  /* 122d9ce2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9ce5 jmp 0x122d9cfd */
  goto L_122d9cfd;
L_122d9ce7:;
  /* 122d9ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9ce9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9cec push eax */
  push32((uint32_t)(EAX));
  /* 122d9ced mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9cf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9cf4 push edx */
  push32((uint32_t)(EDX));
  /* 122d9cf5 call 0x122d9d10 */
  push32(0x122d9cfau); f_122d9d10();
  /* 122d9cfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122d9cfd:;
  /* 122d9cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9d00 pop ebp */
  EBP = (pop32());
  /* 122d9d01 ret  */
  ESPCHK(0x122d9cc0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x122d9d10 (194 bytes, 71 insns) */
void f_122d9d10(void) {
  FTRACE(0x122d9d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9d10 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9d11 mov ebp, esp */
  EBP = (ESP);
  /* 122d9d13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9d16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9d19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122d9d1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9d20 je 0x122d9d39 */
  if (C.zf) goto L_122d9d39;
  /* 122d9d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9d25 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 122d9d28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9d2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9d2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122d9d31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9d34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122d9d36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122d9d39:;
  /* 122d9d39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9d3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_122d9d3f:;
  /* 122d9d3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9d42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d9d44 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122d9d47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122d9d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9d4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d9d4f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122d9d52 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122d9d55 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9d59 jbe 0x122d9d71 */
  if ((C.cf||C.zf)) goto L_122d9d71;
  /* 122d9d5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9d5e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9d61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9d64 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122d9d66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9d69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9d6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122d9d6f jmp 0x122d9d85 */
  goto L_122d9d85;
L_122d9d71:;
  /* 122d9d71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9d74 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9d77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9d7a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122d9d7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9d7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9d82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122d9d85:;
  /* 122d9d85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9d89 ja 0x122d9d3f */
  if ((!C.cf&&!C.zf)) goto L_122d9d3f;
  /* 122d9d8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9d8e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 122d9d91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9d94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9d97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122d9d9a:;
  /* 122d9d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9d9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122d9d9f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 122d9da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9da5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9da8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122d9daa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122d9dac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9daf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 122d9db2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 122d9db4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9db7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9dba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122d9dbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9dc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9dc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122d9dc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9dc9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9dcc jb 0x122d9d9a */
  if (C.cf) goto L_122d9d9a;
  /* 122d9dce mov esp, ebp */
  ESP = (EBP);
  /* 122d9dd0 pop ebp */
  EBP = (pop32());
  /* 122d9dd1 ret  */
  ESPCHK(0x122d9d10u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x122d9de0 (63 bytes, 24 insns) */
void f_122d9de0(void) {
  FTRACE(0x122d9de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9de0 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9de1 mov ebp, esp */
  EBP = (ESP);
  /* 122d9de3 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9de4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9de8 jne 0x122d9df9 */
  if (!C.zf) goto L_122d9df9;
  /* 122d9dea cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9dee jge 0x122d9df9 */
  if ((C.sf==C.of)) goto L_122d9df9;
  /* 122d9df0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122d9df7 jmp 0x122d9e00 */
  goto L_122d9e00;
L_122d9df9:;
  /* 122d9df9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122d9e00:;
  /* 122d9e00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9e03 push eax */
  push32((uint32_t)(EAX));
  /* 122d9e04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9e07 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9e08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9e0b push edx */
  push32((uint32_t)(EDX));
  /* 122d9e0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9e0f push eax */
  push32((uint32_t)(EAX));
  /* 122d9e10 call 0x122d9d10 */
  push32(0x122d9e15u); f_122d9d10();
  /* 122d9e15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9e18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9e1b mov esp, ebp */
  ESP = (EBP);
  /* 122d9e1d pop ebp */
  EBP = (pop32());
  /* 122d9e1e ret  */
  ESPCHK(0x122d9de0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x122d9e20 (30 bytes, 14 insns) */
void f_122d9e20(void) {
  FTRACE(0x122d9e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9e20 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9e21 mov ebp, esp */
  EBP = (ESP);
  /* 122d9e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9e25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9e28 push eax */
  push32((uint32_t)(EAX));
  /* 122d9e29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9e2c push ecx */
  push32((uint32_t)(ECX));
  /* 122d9e2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9e30 push edx */
  push32((uint32_t)(EDX));
  /* 122d9e31 call 0x122d9d10 */
  push32(0x122d9e36u); f_122d9d10();
  /* 122d9e36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9e39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9e3c pop ebp */
  EBP = (pop32());
  /* 122d9e3d ret  */
  ESPCHK(0x122d9e20u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x122d9e40 (72 bytes, 28 insns) */
void f_122d9e40(void) {
  FTRACE(0x122d9e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9e40 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9e41 mov ebp, esp */
  EBP = (ESP);
  /* 122d9e43 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9e44 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9e48 jne 0x122d9e61 */
  if (!C.zf) goto L_122d9e61;
  /* 122d9e4a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9e4e jg 0x122d9e61 */
  if ((!C.zf&&C.sf==C.of)) goto L_122d9e61;
  /* 122d9e50 jl 0x122d9e58 */
  if ((C.sf!=C.of)) goto L_122d9e58;
  /* 122d9e52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9e56 jae 0x122d9e61 */
  if (!C.cf) goto L_122d9e61;
L_122d9e58:;
  /* 122d9e58 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122d9e5f jmp 0x122d9e68 */
  goto L_122d9e68;
L_122d9e61:;
  /* 122d9e61 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122d9e68:;
  /* 122d9e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9e6b push eax */
  push32((uint32_t)(EAX));
  /* 122d9e6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122d9e6f push ecx */
  push32((uint32_t)(ECX));
  /* 122d9e70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9e73 push edx */
  push32((uint32_t)(EDX));
  /* 122d9e74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9e77 push eax */
  push32((uint32_t)(EAX));
  /* 122d9e78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9e7b push ecx */
  push32((uint32_t)(ECX));
  /* 122d9e7c call 0x122d9e90 */
  push32(0x122d9e81u); f_122d9e90();
  /* 122d9e81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9e84 mov esp, ebp */
  ESP = (EBP);
  /* 122d9e86 pop ebp */
  EBP = (pop32());
  /* 122d9e87 ret  */
  ESPCHK(0x122d9e40u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x122d9e90 (242 bytes, 91 insns) */
void f_122d9e90(void) {
  FTRACE(0x122d9e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9e90 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9e91 mov ebp, esp */
  EBP = (ESP);
  /* 122d9e93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9e96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9e99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122d9e9c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9ea0 je 0x122d9ec4 */
  if (C.zf) goto L_122d9ec4;
  /* 122d9ea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9ea5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 122d9ea8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9eab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9eae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122d9eb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9eb4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122d9eb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9eb9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9ebc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122d9ebe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122d9ec1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_122d9ec4:;
  /* 122d9ec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9ec7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122d9eca:;
  /* 122d9eca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122d9ecd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122d9ecf push ecx */
  push32((uint32_t)(ECX));
  /* 122d9ed0 push eax */
  push32((uint32_t)(EAX));
  /* 122d9ed1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9ed4 push edx */
  push32((uint32_t)(EDX));
  /* 122d9ed5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9ed8 push eax */
  push32((uint32_t)(EAX));
  /* 122d9ed9 call 0x122db3d0 */
  push32(0x122d9edeu); f_122db3d0();
  /* 122d9ede mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122d9ee1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122d9ee4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122d9ee6 push edx */
  push32((uint32_t)(EDX));
  /* 122d9ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 122d9ee8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9eeb push eax */
  push32((uint32_t)(EAX));
  /* 122d9eec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9eef push ecx */
  push32((uint32_t)(ECX));
  /* 122d9ef0 call 0x122db360 */
  push32(0x122d9ef5u); f_122db360();
  /* 122d9ef5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122d9ef8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 122d9efb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9eff jbe 0x122d9f17 */
  if ((C.cf||C.zf)) goto L_122d9f17;
  /* 122d9f01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9f04 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9f07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9f0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122d9f0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9f0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9f12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122d9f15 jmp 0x122d9f2b */
  goto L_122d9f2b;
L_122d9f17:;
  /* 122d9f17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122d9f1a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9f20 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122d9f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9f25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9f28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122d9f2b:;
  /* 122d9f2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9f2f ja 0x122d9eca */
  if ((!C.cf&&!C.zf)) goto L_122d9eca;
  /* 122d9f31 jb 0x122d9f39 */
  if (C.cf) goto L_122d9f39;
  /* 122d9f33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9f37 ja 0x122d9eca */
  if ((!C.cf&&!C.zf)) goto L_122d9eca;
L_122d9f39:;
  /* 122d9f39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9f3c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 122d9f3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9f42 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9f45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122d9f48:;
  /* 122d9f48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9f4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122d9f4d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 122d9f50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9f53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9f56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122d9f58 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122d9f5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9f5d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 122d9f60 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 122d9f62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122d9f65 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122d9f68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122d9f6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9f6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9f71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122d9f74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122d9f77 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122d9f7a jb 0x122d9f48 */
  if (C.cf) goto L_122d9f48;
  /* 122d9f7c mov esp, ebp */
  ESP = (EBP);
  /* 122d9f7e pop ebp */
  EBP = (pop32());
  /* 122d9f7f ret 0x14 */
  ESPCHK(0x122d9e90u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x122d9f90 (31 bytes, 15 insns) */
void f_122d9f90(void) {
  FTRACE(0x122d9f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9f90 push ebp */
  push32((uint32_t)(EBP));
  /* 122d9f91 mov ebp, esp */
  EBP = (ESP);
  /* 122d9f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 122d9f95 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122d9f98 push eax */
  push32((uint32_t)(EAX));
  /* 122d9f99 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9f9c push ecx */
  push32((uint32_t)(ECX));
  /* 122d9f9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122d9fa0 push edx */
  push32((uint32_t)(EDX));
  /* 122d9fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122d9fa4 push eax */
  push32((uint32_t)(EAX));
  /* 122d9fa5 call 0x122d9e90 */
  push32(0x122d9faau); f_122d9e90();
  /* 122d9faa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122d9fad pop ebp */
  EBP = (pop32());
  /* 122d9fae ret  */
  ESPCHK(0x122d9f90u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x122d9fb0 (123 bytes, 44 insns) */
void f_122d9fb0(void) {
  FTRACE(0x122d9fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122d9fb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 122d9fb4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122d9fba je 0x122d9fd0 */
  if (C.zf) goto L_122d9fd0;
L_122d9fbc:;
  /* 122d9fbc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 122d9fbe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 122d9fbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122d9fc1 je 0x122da003 */
  if (C.zf) goto L_122da003;
  /* 122d9fc3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122d9fc9 jne 0x122d9fbc */
  if (!C.zf) goto L_122d9fbc;
  /* 122d9fcb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_122d9fd0:;
  /* 122d9fd0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 122d9fd2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 122d9fd7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9fd9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122d9fdc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122d9fde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122d9fe1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 122d9fe6 je 0x122d9fd0 */
  if (C.zf) goto L_122d9fd0;
  /* 122d9fe8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 122d9feb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122d9fed je 0x122da021 */
  if (C.zf) goto L_122da021;
  /* 122d9fef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 122d9ff1 je 0x122da017 */
  if (C.zf) goto L_122da017;
  /* 122d9ff3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 122d9ff8 je 0x122da00d */
  if (C.zf) goto L_122da00d;
  /* 122d9ffa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 122d9fff je 0x122da003 */
  if (C.zf) goto L_122da003;
  /* 122da001 jmp 0x122d9fd0 */
  goto L_122d9fd0;
L_122da003:;
  /* 122da003 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 122da006 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 122da00a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da00c ret  */
  ESPCHK(0x122d9fb0u, _esp0);
  ESP += 4; return;
L_122da00d:;
  /* 122da00d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 122da010 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 122da014 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da016 ret  */
  ESPCHK(0x122d9fb0u, _esp0);
  ESP += 4; return;
L_122da017:;
  /* 122da017 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 122da01a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 122da01e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da020 ret  */
  ESPCHK(0x122d9fb0u, _esp0);
  ESP += 4; return;
L_122da021:;
  /* 122da021 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 122da024 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 122da028 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da02a ret  */
  ESPCHK(0x122d9fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a030 @ 0x122da030 (249 bytes, 93 insns) */
void f_122da030(void) {
  FTRACE(0x122da030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da030 push ebp */
  push32((uint32_t)(EBP));
  /* 122da031 mov ebp, esp */
  EBP = (ESP);
  /* 122da033 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da036 push ebx */
  push32((uint32_t)(EBX));
  /* 122da037 push esi */
  push32((uint32_t)(ESI));
  /* 122da038 push edi */
  push32((uint32_t)(EDI));
  /* 122da039 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 122da03c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122da03f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 122da042 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_122da045:;
  /* 122da045 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da049 jne 0x122da069 */
  if (!C.zf) goto L_122da069;
  /* 122da04b push 0x122fcbd8 */
  push32((uint32_t)(0x122fcbd8u));
  /* 122da050 push 0 */
  push32((uint32_t)(0x0u));
  /* 122da052 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 122da054 push 0x122fcbcc */
  push32((uint32_t)(0x122fcbccu));
  /* 122da059 push 2 */
  push32((uint32_t)(0x2u));
  /* 122da05b call 0x122d5120 */
  push32(0x122da060u); f_122d5120();
  /* 122da060 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da063 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da066 jne 0x122da069 */
  if (!C.zf) goto L_122da069;
  /* 122da068 int3  */
  x86_unimpl("int3 @ 0x122da068");
L_122da069:;
  /* 122da069 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122da06b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122da06d jne 0x122da045 */
  if (!C.zf) goto L_122da045;
L_122da06f:;
  /* 122da06f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da073 jne 0x122da093 */
  if (!C.zf) goto L_122da093;
  /* 122da075 push 0x122fcbbc */
  push32((uint32_t)(0x122fcbbcu));
  /* 122da07a push 0 */
  push32((uint32_t)(0x0u));
  /* 122da07c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 122da07e push 0x122fcbcc */
  push32((uint32_t)(0x122fcbccu));
  /* 122da083 push 2 */
  push32((uint32_t)(0x2u));
  /* 122da085 call 0x122d5120 */
  push32(0x122da08au); f_122d5120();
  /* 122da08a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da08d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da090 jne 0x122da093 */
  if (!C.zf) goto L_122da093;
  /* 122da092 int3  */
  x86_unimpl("int3 @ 0x122da092");
L_122da093:;
  /* 122da093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122da095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122da097 jne 0x122da06f */
  if (!C.zf) goto L_122da06f;
  /* 122da099 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da09c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 122da0a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da0a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122da0a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122da0ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da0af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122da0b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 122da0b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da0b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da0ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 122da0bd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122da0c0 push edx */
  push32((uint32_t)(EDX));
  /* 122da0c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122da0c4 push eax */
  push32((uint32_t)(EAX));
  /* 122da0c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da0c8 push ecx */
  push32((uint32_t)(ECX));
  /* 122da0c9 call 0x122d5a40 */
  push32(0x122da0ceu); f_122d5a40();
  /* 122da0ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da0d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122da0d4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da0d7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122da0da sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da0dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da0e0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 122da0e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da0e6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da0ea jl 0x122da10e */
  if ((C.sf!=C.of)) goto L_122da10e;
  /* 122da0ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da0ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122da0f1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 122da0f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122da0f6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122da0fc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 122da0ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da102 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122da104 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da107 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da10a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122da10c jmp 0x122da11f */
  goto L_122da11f;
L_122da10e:;
  /* 122da10e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da111 push eax */
  push32((uint32_t)(EAX));
  /* 122da112 push 0 */
  push32((uint32_t)(0x0u));
  /* 122da114 call 0x122d57c0 */
  push32(0x122da119u); f_122d57c0();
  /* 122da119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da11c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_122da11f:;
  /* 122da11f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122da122 pop edi */
  EDI = (pop32());
  /* 122da123 pop esi */
  ESI = (pop32());
  /* 122da124 pop ebx */
  EBX = (pop32());
  /* 122da125 mov esp, ebp */
  ESP = (EBP);
  /* 122da127 pop ebp */
  EBP = (pop32());
  /* 122da128 ret  */
  ESPCHK(0x122da030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a130 @ 0x122da130 (7 bytes, 3 insns) */
void f_122da130(void) {
  FTRACE(0x122da130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da130 push edi */
  push32((uint32_t)(EDI));
  /* 122da131 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 122da135 jmp 0x122da1a1 */
  jmp_ind(0x122da1a1u); return;
}

/* FUN_1000a140 @ 0x122da140 (224 bytes, 84 insns) */
void f_122da140(void) {
  FTRACE(0x122da140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da140 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 122da144 push edi */
  push32((uint32_t)(EDI));
  /* 122da145 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122da14b je 0x122da15c */
  if (C.zf) goto L_122da15c;
L_122da14d:;
  /* 122da14d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 122da14f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 122da150 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122da152 je 0x122da18f */
  if (C.zf) goto L_122da18f;
  /* 122da154 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122da15a jne 0x122da14d */
  if (!C.zf) goto L_122da14d;
L_122da15c:;
  /* 122da15c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 122da15e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 122da163 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da165 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122da168 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122da16a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da16d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 122da172 je 0x122da15c */
  if (C.zf) goto L_122da15c;
  /* 122da174 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 122da177 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122da179 je 0x122da19e */
  if (C.zf) goto L_122da19e;
  /* 122da17b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 122da17d je 0x122da199 */
  if (C.zf) goto L_122da199;
  /* 122da17f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 122da184 je 0x122da194 */
  if (C.zf) goto L_122da194;
  /* 122da186 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 122da18b je 0x122da18f */
  if (C.zf) goto L_122da18f;
  /* 122da18d jmp 0x122da15c */
  goto L_122da15c;
L_122da18f:;
  /* 122da18f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 122da192 jmp 0x122da1a1 */
  goto L_122da1a1;
L_122da194:;
  /* 122da194 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 122da197 jmp 0x122da1a1 */
  goto L_122da1a1;
L_122da199:;
  /* 122da199 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 122da19c jmp 0x122da1a1 */
  goto L_122da1a1;
L_122da19e:;
  /* 122da19e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_122da1a1:;
  /* 122da1a1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 122da1a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122da1ab je 0x122da1c6 */
  if (C.zf) goto L_122da1c6;
L_122da1ad:;
  /* 122da1ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122da1af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 122da1b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 122da1b2 je 0x122da218 */
  if (C.zf) goto L_122da218;
  /* 122da1b4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 122da1b6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122da1b7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122da1bd jne 0x122da1ad */
  if (!C.zf) goto L_122da1ad;
  /* 122da1bf jmp 0x122da1c6 */
  goto L_122da1c6;
L_122da1c1:;
  /* 122da1c1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 122da1c3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_122da1c6:;
  /* 122da1c6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 122da1cb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 122da1cd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da1cf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122da1d2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122da1d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122da1d6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da1d9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 122da1de je 0x122da1c1 */
  if (C.zf) goto L_122da1c1;
  /* 122da1e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 122da1e2 je 0x122da218 */
  if (C.zf) goto L_122da218;
  /* 122da1e4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 122da1e6 je 0x122da20f */
  if (C.zf) goto L_122da20f;
  /* 122da1e8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 122da1ee je 0x122da202 */
  if (C.zf) goto L_122da202;
  /* 122da1f0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 122da1f6 je 0x122da1fa */
  if (C.zf) goto L_122da1fa;
  /* 122da1f8 jmp 0x122da1c1 */
  goto L_122da1c1;
L_122da1fa:;
  /* 122da1fa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 122da1fc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122da200 pop edi */
  EDI = (pop32());
  /* 122da201 ret  */
  ESPCHK(0x122da140u, _esp0);
  ESP += 4; return;
L_122da202:;
  /* 122da202 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 122da205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122da209 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 122da20d pop edi */
  EDI = (pop32());
  /* 122da20e ret  */
  ESPCHK(0x122da140u, _esp0);
  ESP += 4; return;
L_122da20f:;
  /* 122da20f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 122da212 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122da216 pop edi */
  EDI = (pop32());
  /* 122da217 ret  */
  ESPCHK(0x122da140u, _esp0);
  ESP += 4; return;
L_122da218:;
  /* 122da218 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 122da21a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122da21e pop edi */
  EDI = (pop32());
  /* 122da21f ret  */
  ESPCHK(0x122da140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a220 @ 0x122da220 (243 bytes, 91 insns) */
void f_122da220(void) {
  FTRACE(0x122da220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da220 push ebp */
  push32((uint32_t)(EBP));
  /* 122da221 mov ebp, esp */
  EBP = (ESP);
  /* 122da223 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da226 push ebx */
  push32((uint32_t)(EBX));
  /* 122da227 push esi */
  push32((uint32_t)(ESI));
  /* 122da228 push edi */
  push32((uint32_t)(EDI));
  /* 122da229 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 122da22c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122da22f:;
  /* 122da22f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da233 jne 0x122da253 */
  if (!C.zf) goto L_122da253;
  /* 122da235 push 0x122fcbd8 */
  push32((uint32_t)(0x122fcbd8u));
  /* 122da23a push 0 */
  push32((uint32_t)(0x0u));
  /* 122da23c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 122da23e push 0x122fd938 */
  push32((uint32_t)(0x122fd938u));
  /* 122da243 push 2 */
  push32((uint32_t)(0x2u));
  /* 122da245 call 0x122d5120 */
  push32(0x122da24au); f_122d5120();
  /* 122da24a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da24d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da250 jne 0x122da253 */
  if (!C.zf) goto L_122da253;
  /* 122da252 int3  */
  x86_unimpl("int3 @ 0x122da252");
L_122da253:;
  /* 122da253 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122da255 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122da257 jne 0x122da22f */
  if (!C.zf) goto L_122da22f;
L_122da259:;
  /* 122da259 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da25d jne 0x122da27d */
  if (!C.zf) goto L_122da27d;
  /* 122da25f push 0x122fcbbc */
  push32((uint32_t)(0x122fcbbcu));
  /* 122da264 push 0 */
  push32((uint32_t)(0x0u));
  /* 122da266 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 122da268 push 0x122fd938 */
  push32((uint32_t)(0x122fd938u));
  /* 122da26d push 2 */
  push32((uint32_t)(0x2u));
  /* 122da26f call 0x122d5120 */
  push32(0x122da274u); f_122d5120();
  /* 122da274 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da27a jne 0x122da27d */
  if (!C.zf) goto L_122da27d;
  /* 122da27c int3  */
  x86_unimpl("int3 @ 0x122da27c");
L_122da27d:;
  /* 122da27d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122da27f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122da281 jne 0x122da259 */
  if (!C.zf) goto L_122da259;
  /* 122da283 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da286 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 122da28d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da290 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122da293 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 122da296 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da299 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122da29c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122da29e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da2a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da2a4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 122da2a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122da2aa push ecx */
  push32((uint32_t)(ECX));
  /* 122da2ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122da2ae push edx */
  push32((uint32_t)(EDX));
  /* 122da2af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da2b2 push eax */
  push32((uint32_t)(EAX));
  /* 122da2b3 call 0x122d5a40 */
  push32(0x122da2b8u); f_122d5a40();
  /* 122da2b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da2bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122da2be mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da2c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122da2c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da2c7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da2ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 122da2cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da2d0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da2d4 jl 0x122da2f8 */
  if ((C.sf!=C.of)) goto L_122da2f8;
  /* 122da2d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da2d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122da2db mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122da2de xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122da2e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122da2e6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 122da2e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da2ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122da2ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da2f1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da2f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122da2f6 jmp 0x122da309 */
  goto L_122da309;
L_122da2f8:;
  /* 122da2f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122da2fb push edx */
  push32((uint32_t)(EDX));
  /* 122da2fc push 0 */
  push32((uint32_t)(0x0u));
  /* 122da2fe call 0x122d57c0 */
  push32(0x122da303u); f_122d57c0();
  /* 122da303 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da306 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_122da309:;
  /* 122da309 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122da30c pop edi */
  EDI = (pop32());
  /* 122da30d pop esi */
  ESI = (pop32());
  /* 122da30e pop ebx */
  EBX = (pop32());
  /* 122da30f mov esp, ebp */
  ESP = (EBP);
  /* 122da311 pop ebp */
  EBP = (pop32());
  /* 122da312 ret  */
  ESPCHK(0x122da220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a320 @ 0x122da320 (47 bytes, 17 insns) */
void f_122da320(void) {
  FTRACE(0x122da320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da320 push ecx */
  push32((uint32_t)(ECX));
  /* 122da321 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da326 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 122da32a jb 0x122da340 */
  if (C.cf) goto L_122da340;
L_122da32c:;
  /* 122da32c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da332 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da337 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 122da339 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da33e jae 0x122da32c */
  if (!C.cf) goto L_122da32c;
L_122da340:;
  /* 122da340 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da342 mov eax, esp */
  EAX = (ESP);
  /* 122da344 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 122da346 mov esp, ecx */
  ESP = (ECX);
  /* 122da348 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122da34a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 122da34d push eax */
  push32((uint32_t)(EAX));
  /* 122da34e ret  */
  ESPCHK(0x122da320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a350 @ 0x122da350 (507 bytes, 151 insns) [1 switch table(s)] */
void f_122da350(void) {
  FTRACE(0x122da350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da350 push ebp */
  push32((uint32_t)(EBP));
  /* 122da351 mov ebp, esp */
  EBP = (ESP);
  /* 122da353 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da356 push esi */
  push32((uint32_t)(ESI));
  /* 122da357 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da35b je 0x122da363 */
  if (C.zf) goto L_122da363;
  /* 122da35d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da361 jne 0x122da368 */
  if (!C.zf) goto L_122da368;
L_122da363:;
  /* 122da363 jmp 0x122da538 */
  goto L_122da538;
L_122da368:;
  /* 122da368 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da36c je 0x122da384 */
  if (C.zf) goto L_122da384;
  /* 122da36e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da372 je 0x122da384 */
  if (C.zf) goto L_122da384;
  /* 122da374 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da378 je 0x122da384 */
  if (C.zf) goto L_122da384;
  /* 122da37a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da37e jne 0x122da461 */
  if (!C.zf) goto L_122da461;
L_122da384:;
  /* 122da384 push 1 */
  push32((uint32_t)(0x1u));
  /* 122da386 call 0x122db530 */
  push32(0x122da38bu); f_122db530();
  /* 122da38b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da38e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da392 je 0x122da39a */
  if (C.zf) goto L_122da39a;
  /* 122da394 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da398 jne 0x122da3df */
  if (!C.zf) goto L_122da3df;
L_122da39a:;
  /* 122da39a cmp dword ptr [0x123018c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123018c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da3a1 jne 0x122da3df */
  if (!C.zf) goto L_122da3df;
  /* 122da3a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122da3a5 push 0x122da580 */
  push32((uint32_t)(0x122da580u));
  /* 122da3aa call dword ptr [0x12304298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304298))), 0x122da3b0u);
  /* 122da3b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da3b3 jne 0x122da3c1 */
  if (!C.zf) goto L_122da3c1;
  /* 122da3b5 mov dword ptr [0x123018c8], 1 */
  w32((uint32_t)(0x123018c8), (0x1u));
  /* 122da3bf jmp 0x122da3df */
  goto L_122da3df;
L_122da3c1:;
  /* 122da3c1 call dword ptr [0x12304250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304250))), 0x122da3c7u);
  /* 122da3c7 mov esi, eax */
  ESI = (EAX);
  /* 122da3c9 call 0x122de700 */
  push32(0x122da3ceu); f_122de700();
  /* 122da3ce mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 122da3d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 122da3d2 call 0x122db5d0 */
  push32(0x122da3d7u); f_122db5d0();
  /* 122da3d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da3da jmp 0x122da538 */
  goto L_122da538;
L_122da3df:;
  /* 122da3df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122da3e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122da3e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122da3e8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da3eb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122da3ee cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da3f2 ja 0x122da452 */
  if ((!C.cf&&!C.zf)) goto L_122da452;
  /* 122da3f4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122da3f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122da3f9 mov dl, byte ptr [eax + 0x122da55f] */
  DL = (r8((uint32_t)(EAX + 0x122da55f)));
  /* 122da3ff jmp dword ptr [edx*4 + 0x122da54b] */
  switch (EDX) {
    case 0: goto L_122da406;
    case 1: goto L_122da440;
    case 2: goto L_122da41a;
    case 3: goto L_122da42d;
    case 4: goto L_122da452;
    default: x86_unimpl("switch@0x122da3ff out of table"); return;
  }
L_122da406:;
  /* 122da406 mov ecx, dword ptr [0x123018b8] */
  ECX = (r32((uint32_t)(0x123018b8)));
  /* 122da40c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122da40f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da412 mov dword ptr [0x123018b8], edx */
  w32((uint32_t)(0x123018b8), (EDX));
  /* 122da418 jmp 0x122da452 */
  goto L_122da452;
L_122da41a:;
  /* 122da41a mov eax, dword ptr [0x123018bc] */
  EAX = (r32((uint32_t)(0x123018bc)));
  /* 122da41f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122da422 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da425 mov dword ptr [0x123018bc], ecx */
  w32((uint32_t)(0x123018bc), (ECX));
  /* 122da42b jmp 0x122da452 */
  goto L_122da452;
L_122da42d:;
  /* 122da42d mov edx, dword ptr [0x123018c0] */
  EDX = (r32((uint32_t)(0x123018c0)));
  /* 122da433 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122da436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da439 mov dword ptr [0x123018c0], eax */
  w32((uint32_t)(0x123018c0), (EAX));
  /* 122da43e jmp 0x122da452 */
  goto L_122da452;
L_122da440:;
  /* 122da440 mov ecx, dword ptr [0x123018c4] */
  ECX = (r32((uint32_t)(0x123018c4)));
  /* 122da446 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122da449 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da44c mov dword ptr [0x123018c4], edx */
  w32((uint32_t)(0x123018c4), (EDX));
L_122da452:;
  /* 122da452 push 1 */
  push32((uint32_t)(0x1u));
  /* 122da454 call 0x122db5d0 */
  push32(0x122da459u); f_122db5d0();
  /* 122da459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da45c jmp 0x122da533 */
  goto L_122da533;
L_122da461:;
  /* 122da461 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da465 je 0x122da478 */
  if (C.zf) goto L_122da478;
  /* 122da467 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da46b je 0x122da478 */
  if (C.zf) goto L_122da478;
  /* 122da46d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da471 je 0x122da478 */
  if (C.zf) goto L_122da478;
  /* 122da473 jmp 0x122da538 */
  goto L_122da538;
L_122da478:;
  /* 122da478 call 0x122d6bc0 */
  push32(0x122da47du); f_122d6bc0();
  /* 122da47d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122da480 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da483 cmp dword ptr [eax + 0x50], 0x123000c0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x123000c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da48a jne 0x122da4d5 */
  if (!C.zf) goto L_122da4d5;
  /* 122da48c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 122da491 push 0x122fd944 */
  push32((uint32_t)(0x122fd944u));
  /* 122da496 push 2 */
  push32((uint32_t)(0x2u));
  /* 122da498 mov ecx, dword ptr [0x12300140] */
  ECX = (r32((uint32_t)(0x12300140)));
  /* 122da49e push ecx */
  push32((uint32_t)(ECX));
  /* 122da49f call 0x122d7180 */
  push32(0x122da4a4u); f_122d7180();
  /* 122da4a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da4a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da4aa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 122da4ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da4b0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da4b4 je 0x122da4d3 */
  if (C.zf) goto L_122da4d3;
  /* 122da4b6 mov ecx, dword ptr [0x12300140] */
  ECX = (r32((uint32_t)(0x12300140)));
  /* 122da4bc push ecx */
  push32((uint32_t)(ECX));
  /* 122da4bd push 0x123000c0 */
  push32((uint32_t)(0x123000c0u));
  /* 122da4c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da4c5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 122da4c8 push eax */
  push32((uint32_t)(EAX));
  /* 122da4c9 call 0x122de310 */
  push32(0x122da4ceu); f_122de310();
  /* 122da4ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da4d1 jmp 0x122da4d5 */
  goto L_122da4d5;
L_122da4d3:;
  /* 122da4d3 jmp 0x122da538 */
  goto L_122da538;
L_122da4d5:;
  /* 122da4d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da4d8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 122da4db push edx */
  push32((uint32_t)(EDX));
  /* 122da4dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122da4df push eax */
  push32((uint32_t)(EAX));
  /* 122da4e0 call 0x122da860 */
  push32(0x122da4e5u); f_122da860();
  /* 122da4e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da4e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122da4eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da4ef jne 0x122da4f3 */
  if (!C.zf) goto L_122da4f3;
  /* 122da4f1 jmp 0x122da538 */
  goto L_122da538;
L_122da4f3:;
  /* 122da4f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da4f6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122da4f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122da4fc:;
  /* 122da4fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da4ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122da502 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da505 jne 0x122da533 */
  if (!C.zf) goto L_122da533;
  /* 122da507 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da50a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da50d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122da510 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da513 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da516 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122da519 mov edx, dword ptr [0x12300144] */
  EDX = (r32((uint32_t)(0x12300144)));
  /* 122da51f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122da522 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da525 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 122da528 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da52a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da52d jb 0x122da531 */
  if (C.cf) goto L_122da531;
  /* 122da52f jmp 0x122da533 */
  goto L_122da533;
L_122da531:;
  /* 122da531 jmp 0x122da4fc */
  goto L_122da4fc;
L_122da533:;
  /* 122da533 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122da536 jmp 0x122da546 */
  goto L_122da546;
L_122da538:;
  /* 122da538 call 0x122de6f0 */
  push32(0x122da53du); f_122de6f0();
  /* 122da53d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 122da543 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_122da546:;
  /* 122da546 pop esi */
  ESI = (pop32());
  /* 122da547 mov esp, ebp */
  ESP = (EBP);
  /* 122da549 pop ebp */
  EBP = (pop32());
  /* 122da54a ret  */
  ESPCHK(0x122da350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a580 @ 0x122da580 (146 bytes, 45 insns) */
void f_122da580(void) {
  FTRACE(0x122da580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da580 push ebp */
  push32((uint32_t)(EBP));
  /* 122da581 mov ebp, esp */
  EBP = (ESP);
  /* 122da583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da586 push 1 */
  push32((uint32_t)(0x1u));
  /* 122da588 call 0x122db530 */
  push32(0x122da58du); f_122db530();
  /* 122da58d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da590 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da594 jne 0x122da5ae */
  if (!C.zf) goto L_122da5ae;
  /* 122da596 mov dword ptr [ebp - 8], 0x123018b8 */
  w32((uint32_t)(EBP + -0x8), (0x123018b8u));
  /* 122da59d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da5a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122da5a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122da5a5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122da5ac jmp 0x122da5c4 */
  goto L_122da5c4;
L_122da5ae:;
  /* 122da5ae mov dword ptr [ebp - 8], 0x123018bc */
  w32((uint32_t)(EBP + -0x8), (0x123018bcu));
  /* 122da5b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da5b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122da5ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122da5bd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_122da5c4:;
  /* 122da5c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da5c8 jne 0x122da5d8 */
  if (!C.zf) goto L_122da5d8;
  /* 122da5ca push 1 */
  push32((uint32_t)(0x1u));
  /* 122da5cc call 0x122db5d0 */
  push32(0x122da5d1u); f_122db5d0();
  /* 122da5d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da5d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122da5d6 jmp 0x122da60c */
  goto L_122da60c;
L_122da5d8:;
  /* 122da5d8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da5dc je 0x122da5fd */
  if (C.zf) goto L_122da5fd;
  /* 122da5de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da5e1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 122da5e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 122da5e9 call 0x122db5d0 */
  push32(0x122da5eeu); f_122db5d0();
  /* 122da5ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da5f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da5f4 push edx */
  push32((uint32_t)(EDX));
  /* 122da5f5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x122da5f8u);
  /* 122da5f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da5fb jmp 0x122da607 */
  goto L_122da607;
L_122da5fd:;
  /* 122da5fd push 1 */
  push32((uint32_t)(0x1u));
  /* 122da5ff call 0x122db5d0 */
  push32(0x122da604u); f_122db5d0();
  /* 122da604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122da607:;
  /* 122da607 mov eax, 1 */
  EAX = (0x1u);
L_122da60c:;
  /* 122da60c mov esp, ebp */
  ESP = (EBP);
  /* 122da60e pop ebp */
  EBP = (pop32());
  /* 122da60f ret 4 */
  ESPCHK(0x122da580u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a620 @ 0x122da620 (522 bytes, 162 insns) [1 switch table(s)] */
void f_122da620(void) {
  FTRACE(0x122da620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da620 push ebp */
  push32((uint32_t)(EBP));
  /* 122da621 mov ebp, esp */
  EBP = (ESP);
  /* 122da623 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da626 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122da62d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122da630 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122da633 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122da636 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da639 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 122da63c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da640 ja 0x122da6ee */
  if ((!C.cf&&!C.zf)) goto L_122da6ee;
  /* 122da646 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122da649 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122da64b mov dl, byte ptr [eax + 0x122da842] */
  DL = (r8((uint32_t)(EAX + 0x122da842)));
  /* 122da651 jmp dword ptr [edx*4 + 0x122da82a] */
  switch (EDX) {
    case 0: goto L_122da658;
    case 1: goto L_122da6c3;
    case 2: goto L_122da6a9;
    case 3: goto L_122da675;
    case 4: goto L_122da68f;
    case 5: goto L_122da6ee;
    default: x86_unimpl("switch@0x122da651 out of table"); return;
  }
L_122da658:;
  /* 122da658 mov dword ptr [ebp - 0x18], 0x123018b8 */
  w32((uint32_t)(EBP + -0x18), (0x123018b8u));
  /* 122da65f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122da662 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122da664 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122da667 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122da66a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da66d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122da670 jmp 0x122da6f6 */
  goto L_122da6f6;
L_122da675:;
  /* 122da675 mov dword ptr [ebp - 0x18], 0x123018bc */
  w32((uint32_t)(EBP + -0x18), (0x123018bcu));
  /* 122da67c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122da67f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122da681 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122da684 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122da687 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da68a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122da68d jmp 0x122da6f6 */
  goto L_122da6f6;
L_122da68f:;
  /* 122da68f mov dword ptr [ebp - 0x18], 0x123018c0 */
  w32((uint32_t)(EBP + -0x18), (0x123018c0u));
  /* 122da696 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122da699 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122da69b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122da69e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122da6a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da6a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122da6a7 jmp 0x122da6f6 */
  goto L_122da6f6;
L_122da6a9:;
  /* 122da6a9 mov dword ptr [ebp - 0x18], 0x123018c4 */
  w32((uint32_t)(EBP + -0x18), (0x123018c4u));
  /* 122da6b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122da6b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122da6b5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122da6b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122da6bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da6be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122da6c1 jmp 0x122da6f6 */
  goto L_122da6f6;
L_122da6c3:;
  /* 122da6c3 call 0x122d6bc0 */
  push32(0x122da6c8u); f_122d6bc0();
  /* 122da6c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122da6cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da6ce mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 122da6d1 push edx */
  push32((uint32_t)(EDX));
  /* 122da6d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122da6d5 push eax */
  push32((uint32_t)(EAX));
  /* 122da6d6 call 0x122da860 */
  push32(0x122da6dbu); f_122da860();
  /* 122da6db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da6de add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da6e1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122da6e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122da6e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122da6e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122da6ec jmp 0x122da6f6 */
  goto L_122da6f6;
L_122da6ee:;
  /* 122da6ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122da6f1 jmp 0x122da826 */
  goto L_122da826;
L_122da6f6:;
  /* 122da6f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da6fa je 0x122da706 */
  if (C.zf) goto L_122da706;
  /* 122da6fc push 1 */
  push32((uint32_t)(0x1u));
  /* 122da6fe call 0x122db530 */
  push32(0x122da703u); f_122db530();
  /* 122da703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122da706:;
  /* 122da706 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da70a jne 0x122da723 */
  if (!C.zf) goto L_122da723;
  /* 122da70c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da710 je 0x122da71c */
  if (C.zf) goto L_122da71c;
  /* 122da712 push 1 */
  push32((uint32_t)(0x1u));
  /* 122da714 call 0x122db5d0 */
  push32(0x122da719u); f_122db5d0();
  /* 122da719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122da71c:;
  /* 122da71c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122da71e jmp 0x122da826 */
  goto L_122da826;
L_122da723:;
  /* 122da723 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da727 jne 0x122da740 */
  if (!C.zf) goto L_122da740;
  /* 122da729 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da72d je 0x122da739 */
  if (C.zf) goto L_122da739;
  /* 122da72f push 1 */
  push32((uint32_t)(0x1u));
  /* 122da731 call 0x122db5d0 */
  push32(0x122da736u); f_122db5d0();
  /* 122da736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122da739:;
  /* 122da739 push 3 */
  push32((uint32_t)(0x3u));
  /* 122da73b call 0x122d6940 */
  push32(0x122da740u); f_122d6940();
L_122da740:;
  /* 122da740 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da744 je 0x122da752 */
  if (C.zf) goto L_122da752;
  /* 122da746 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da74a je 0x122da752 */
  if (C.zf) goto L_122da752;
  /* 122da74c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da750 jne 0x122da77e */
  if (!C.zf) goto L_122da77e;
L_122da752:;
  /* 122da752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da755 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 122da758 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122da75b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da75e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 122da765 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da769 jne 0x122da77e */
  if (!C.zf) goto L_122da77e;
  /* 122da76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da76e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 122da771 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122da774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da777 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_122da77e:;
  /* 122da77e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da782 jne 0x122da7c0 */
  if (!C.zf) goto L_122da7c0;
  /* 122da784 mov eax, dword ptr [0x12300138] */
  EAX = (r32((uint32_t)(0x12300138)));
  /* 122da789 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122da78c jmp 0x122da797 */
  goto L_122da797;
L_122da78e:;
  /* 122da78e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122da791 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da794 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122da797:;
  /* 122da797 mov edx, dword ptr [0x12300138] */
  EDX = (r32((uint32_t)(0x12300138)));
  /* 122da79d add edx, dword ptr [0x1230013c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1230013c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da7a3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da7a6 jge 0x122da7be */
  if ((C.sf==C.of)) goto L_122da7be;
  /* 122da7a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122da7ab imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122da7ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da7b1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 122da7b4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 122da7bc jmp 0x122da78e */
  goto L_122da78e;
L_122da7be:;
  /* 122da7be jmp 0x122da7c9 */
  goto L_122da7c9;
L_122da7c0:;
  /* 122da7c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122da7c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_122da7c9:;
  /* 122da7c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da7cd je 0x122da7d9 */
  if (C.zf) goto L_122da7d9;
  /* 122da7cf push 1 */
  push32((uint32_t)(0x1u));
  /* 122da7d1 call 0x122db5d0 */
  push32(0x122da7d6u); f_122db5d0();
  /* 122da7d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122da7d9:;
  /* 122da7d9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da7dd jne 0x122da7f0 */
  if (!C.zf) goto L_122da7f0;
  /* 122da7df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da7e2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 122da7e5 push edx */
  push32((uint32_t)(EDX));
  /* 122da7e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 122da7e8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x122da7ebu);
  /* 122da7eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122da7ee jmp 0x122da7fa */
  goto L_122da7fa;
L_122da7f0:;
  /* 122da7f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122da7f3 push eax */
  push32((uint32_t)(EAX));
  /* 122da7f4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x122da7f7u);
  /* 122da7f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122da7fa:;
  /* 122da7fa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da7fe je 0x122da80c */
  if (C.zf) goto L_122da80c;
  /* 122da800 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da804 je 0x122da80c */
  if (C.zf) goto L_122da80c;
  /* 122da806 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da80a jne 0x122da824 */
  if (!C.zf) goto L_122da824;
L_122da80c:;
  /* 122da80c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da80f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122da812 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 122da815 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da819 jne 0x122da824 */
  if (!C.zf) goto L_122da824;
  /* 122da81b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da81e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da821 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_122da824:;
  /* 122da824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122da826:;
  /* 122da826 mov esp, ebp */
  ESP = (EBP);
  /* 122da828 pop ebp */
  EBP = (pop32());
  /* 122da829 ret  */
  ESPCHK(0x122da620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a860 @ 0x122da860 (91 bytes, 35 insns) */
void f_122da860(void) {
  FTRACE(0x122da860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da860 push ebp */
  push32((uint32_t)(EBP));
  /* 122da861 mov ebp, esp */
  EBP = (ESP);
  /* 122da863 push ecx */
  push32((uint32_t)(ECX));
  /* 122da864 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da867 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122da86a:;
  /* 122da86a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da86d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122da870 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da873 je 0x122da893 */
  if (C.zf) goto L_122da893;
  /* 122da875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da878 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da87b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122da87e mov ecx, dword ptr [0x12300144] */
  ECX = (r32((uint32_t)(0x12300144)));
  /* 122da884 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122da887 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da88a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da88c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da88f jae 0x122da893 */
  if (!C.cf) goto L_122da893;
  /* 122da891 jmp 0x122da86a */
  goto L_122da86a;
L_122da893:;
  /* 122da893 mov eax, dword ptr [0x12300144] */
  EAX = (r32((uint32_t)(0x12300144)));
  /* 122da898 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122da89b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da89e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da8a0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da8a3 jae 0x122da8b5 */
  if (!C.cf) goto L_122da8b5;
  /* 122da8a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da8a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122da8ab cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da8ae jne 0x122da8b5 */
  if (!C.zf) goto L_122da8b5;
  /* 122da8b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da8b3 jmp 0x122da8b7 */
  goto L_122da8b7;
L_122da8b5:;
  /* 122da8b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122da8b7:;
  /* 122da8b7 mov esp, ebp */
  ESP = (EBP);
  /* 122da8b9 pop ebp */
  EBP = (pop32());
  /* 122da8ba ret  */
  ESPCHK(0x122da860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x122da8c0 (13 bytes, 6 insns) */
void f_122da8c0(void) {
  FTRACE(0x122da8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122da8c1 mov ebp, esp */
  EBP = (ESP);
  /* 122da8c3 call 0x122d6bc0 */
  push32(0x122da8c8u); f_122d6bc0();
  /* 122da8c8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da8cb pop ebp */
  EBP = (pop32());
  /* 122da8cc ret  */
  ESPCHK(0x122da8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8d0 @ 0x122da8d0 (13 bytes, 6 insns) */
void f_122da8d0(void) {
  FTRACE(0x122da8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122da8d1 mov ebp, esp */
  EBP = (ESP);
  /* 122da8d3 call 0x122d6bc0 */
  push32(0x122da8d8u); f_122d6bc0();
  /* 122da8d8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122da8db pop ebp */
  EBP = (pop32());
  /* 122da8dc ret  */
  ESPCHK(0x122da8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8e0 @ 0x122da8e0 (187 bytes, 54 insns) */
void f_122da8e0(void) {
  FTRACE(0x122da8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122da8e1 mov ebp, esp */
  EBP = (ESP);
  /* 122da8e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122da8e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122da8ed cmp dword ptr [0x123018cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123018cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da8f4 jne 0x122da953 */
  if (!C.zf) goto L_122da953;
  /* 122da8f6 push 0x122fccb4 */
  push32((uint32_t)(0x122fccb4u));
  /* 122da8fb call dword ptr [0x12304220] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304220))), 0x122da901u);
  /* 122da901 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122da904 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da908 je 0x122da927 */
  if (C.zf) goto L_122da927;
  /* 122da90a push 0x122fd974 */
  push32((uint32_t)(0x122fd974u));
  /* 122da90f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da912 push eax */
  push32((uint32_t)(EAX));
  /* 122da913 call dword ptr [0x12304288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304288))), 0x122da919u);
  /* 122da919 mov dword ptr [0x123018cc], eax */
  w32((uint32_t)(0x123018cc), (EAX));
  /* 122da91e cmp dword ptr [0x123018cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123018cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da925 jne 0x122da92b */
  if (!C.zf) goto L_122da92b;
L_122da927:;
  /* 122da927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122da929 jmp 0x122da997 */
  goto L_122da997;
L_122da92b:;
  /* 122da92b push 0x122fd964 */
  push32((uint32_t)(0x122fd964u));
  /* 122da930 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da933 push ecx */
  push32((uint32_t)(ECX));
  /* 122da934 call dword ptr [0x12304288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304288))), 0x122da93au);
  /* 122da93a mov dword ptr [0x123018d0], eax */
  w32((uint32_t)(0x123018d0), (EAX));
  /* 122da93f push 0x122fd950 */
  push32((uint32_t)(0x122fd950u));
  /* 122da944 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122da947 push edx */
  push32((uint32_t)(EDX));
  /* 122da948 call dword ptr [0x12304288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304288))), 0x122da94eu);
  /* 122da94e mov dword ptr [0x123018d4], eax */
  w32((uint32_t)(0x123018d4), (EAX));
L_122da953:;
  /* 122da953 cmp dword ptr [0x123018d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123018d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da95a je 0x122da965 */
  if (C.zf) goto L_122da965;
  /* 122da95c call dword ptr [0x123018d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123018d0))), 0x122da962u);
  /* 122da962 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122da965:;
  /* 122da965 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da969 je 0x122da981 */
  if (C.zf) goto L_122da981;
  /* 122da96b cmp dword ptr [0x123018d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123018d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122da972 je 0x122da981 */
  if (C.zf) goto L_122da981;
  /* 122da974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da977 push eax */
  push32((uint32_t)(EAX));
  /* 122da978 call dword ptr [0x123018d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123018d4))), 0x122da97eu);
  /* 122da97e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122da981:;
  /* 122da981 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122da984 push ecx */
  push32((uint32_t)(ECX));
  /* 122da985 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122da988 push edx */
  push32((uint32_t)(EDX));
  /* 122da989 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122da98c push eax */
  push32((uint32_t)(EAX));
  /* 122da98d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122da990 push ecx */
  push32((uint32_t)(ECX));
  /* 122da991 call dword ptr [0x123018cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123018cc))), 0x122da997u);
L_122da997:;
  /* 122da997 mov esp, ebp */
  ESP = (EBP);
  /* 122da999 pop ebp */
  EBP = (pop32());
  /* 122da99a ret  */
  ESPCHK(0x122da8e0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x122da9a0 (254 bytes, 109 insns) */
void f_122da9a0(void) {
  FTRACE(0x122da9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122da9a0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 122da9a4 push edi */
  push32((uint32_t)(EDI));
  /* 122da9a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122da9a7 je 0x122daa23 */
  if (C.zf) goto L_122daa23;
  /* 122da9a9 push esi */
  push32((uint32_t)(ESI));
  /* 122da9aa push ebx */
  push32((uint32_t)(EBX));
  /* 122da9ab mov ebx, ecx */
  EBX = (ECX);
  /* 122da9ad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 122da9b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 122da9b7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 122da9bb jne 0x122da9c4 */
  if (!C.zf) goto L_122da9c4;
  /* 122da9bd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122da9c0 jne 0x122daa31 */
  if (!C.zf) goto L_122daa31;
  /* 122da9c2 jmp 0x122da9e5 */
  goto L_122da9e5;
L_122da9c4:;
  /* 122da9c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122da9c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122da9c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122da9c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122da9ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122da9cb je 0x122da9f2 */
  if (C.zf) goto L_122da9f2;
  /* 122da9cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122da9cf je 0x122da9fa */
  if (C.zf) goto L_122da9fa;
  /* 122da9d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 122da9d7 jne 0x122da9c4 */
  if (!C.zf) goto L_122da9c4;
  /* 122da9d9 mov ebx, ecx */
  EBX = (ECX);
  /* 122da9db shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122da9de jne 0x122daa31 */
  if (!C.zf) goto L_122daa31;
L_122da9e0:;
  /* 122da9e0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 122da9e3 je 0x122da9f2 */
  if (C.zf) goto L_122da9f2;
L_122da9e5:;
  /* 122da9e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122da9e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122da9e8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122da9ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122da9eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122da9ed je 0x122daa1e */
  if (C.zf) goto L_122daa1e;
  /* 122da9ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 122da9f0 jne 0x122da9e5 */
  if (!C.zf) goto L_122da9e5;
L_122da9f2:;
  /* 122da9f2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 122da9f6 pop ebx */
  EBX = (pop32());
  /* 122da9f7 pop esi */
  ESI = (pop32());
  /* 122da9f8 pop edi */
  EDI = (pop32());
  /* 122da9f9 ret  */
  ESPCHK(0x122da9a0u, _esp0);
  ESP += 4; return;
L_122da9fa:;
  /* 122da9fa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 122daa00 je 0x122daa14 */
  if (C.zf) goto L_122daa14;
L_122daa02:;
  /* 122daa02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122daa04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122daa05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122daa06 je 0x122daa96 */
  if (C.zf) goto L_122daa96;
  /* 122daa0c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 122daa12 jne 0x122daa02 */
  if (!C.zf) goto L_122daa02;
L_122daa14:;
  /* 122daa14 mov ebx, ecx */
  EBX = (ECX);
  /* 122daa16 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122daa19 jne 0x122daa87 */
  if (!C.zf) goto L_122daa87;
L_122daa1b:;
  /* 122daa1b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122daa1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_122daa1e:;
  /* 122daa1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 122daa1f jne 0x122daa1b */
  if (!C.zf) goto L_122daa1b;
  /* 122daa21 pop ebx */
  EBX = (pop32());
  /* 122daa22 pop esi */
  ESI = (pop32());
L_122daa23:;
  /* 122daa23 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122daa27 pop edi */
  EDI = (pop32());
  /* 122daa28 ret  */
  ESPCHK(0x122da9a0u, _esp0);
  ESP += 4; return;
L_122daa29:;
  /* 122daa29 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 122daa2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122daa2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122daa2f je 0x122da9e0 */
  if (C.zf) goto L_122da9e0;
L_122daa31:;
  /* 122daa31 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 122daa36 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 122daa38 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122daa3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122daa3d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122daa3f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 122daa41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122daa44 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 122daa49 je 0x122daa29 */
  if (C.zf) goto L_122daa29;
  /* 122daa4b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 122daa4d je 0x122daa7b */
  if (C.zf) goto L_122daa7b;
  /* 122daa4f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 122daa51 je 0x122daa71 */
  if (C.zf) goto L_122daa71;
  /* 122daa53 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 122daa59 je 0x122daa67 */
  if (C.zf) goto L_122daa67;
  /* 122daa5b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 122daa61 jne 0x122daa29 */
  if (!C.zf) goto L_122daa29;
  /* 122daa63 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 122daa65 jmp 0x122daa7f */
  goto L_122daa7f;
L_122daa67:;
  /* 122daa67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122daa6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 122daa6f jmp 0x122daa7f */
  goto L_122daa7f;
L_122daa71:;
  /* 122daa71 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122daa77 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 122daa79 jmp 0x122daa7f */
  goto L_122daa7f;
L_122daa7b:;
  /* 122daa7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122daa7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_122daa7f:;
  /* 122daa7f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122daa82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122daa84 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122daa85 je 0x122daa91 */
  if (C.zf) goto L_122daa91;
L_122daa87:;
  /* 122daa87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122daa89:;
  /* 122daa89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 122daa8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122daa8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122daa8f jne 0x122daa89 */
  if (!C.zf) goto L_122daa89;
L_122daa91:;
  /* 122daa91 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 122daa94 jne 0x122daa1b */
  if (!C.zf) goto L_122daa1b;
L_122daa96:;
  /* 122daa96 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 122daa9a pop ebx */
  EBX = (pop32());
  /* 122daa9b pop esi */
  ESI = (pop32());
  /* 122daa9c pop edi */
  EDI = (pop32());
  /* 122daa9d ret  */
  ESPCHK(0x122da9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aaa0 @ 0x122daaa0 (130 bytes, 43 insns) */
void f_122daaa0(void) {
  FTRACE(0x122daaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122daaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 122daaa1 mov ebp, esp */
  EBP = (ESP);
  /* 122daaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 122daaa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122daaa7 cmp eax, dword ptr [0x1230325c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1230325c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122daaad jae 0x122daad1 */
  if (!C.cf) goto L_122daad1;
  /* 122daaaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122daab2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122daab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122daab8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122daabb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122daabe mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122daac5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122daaca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122daacd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122daacf jne 0x122daaec */
  if (!C.zf) goto L_122daaec;
L_122daad1:;
  /* 122daad1 call 0x122de6f0 */
  push32(0x122daad6u); f_122de6f0();
  /* 122daad6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122daadc call 0x122de700 */
  push32(0x122daae1u); f_122de700();
  /* 122daae1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122daae7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122daaea jmp 0x122dab1e */
  goto L_122dab1e;
L_122daaec:;
  /* 122daaec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122daaef push edx */
  push32((uint32_t)(EDX));
  /* 122daaf0 call 0x122dec20 */
  push32(0x122daaf5u); f_122dec20();
  /* 122daaf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122daaf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122daafb push eax */
  push32((uint32_t)(EAX));
  /* 122daafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122daaff push ecx */
  push32((uint32_t)(ECX));
  /* 122dab00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dab03 push edx */
  push32((uint32_t)(EDX));
  /* 122dab04 call 0x122dab30 */
  push32(0x122dab09u); f_122dab30();
  /* 122dab09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dab0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122dab0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dab12 push eax */
  push32((uint32_t)(EAX));
  /* 122dab13 call 0x122decb0 */
  push32(0x122dab18u); f_122decb0();
  /* 122dab18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dab1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122dab1e:;
  /* 122dab1e mov esp, ebp */
  ESP = (EBP);
  /* 122dab20 pop ebp */
  EBP = (pop32());
  /* 122dab21 ret  */
  ESPCHK(0x122daaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab30 @ 0x122dab30 (178 bytes, 56 insns) */
void f_122dab30(void) {
  FTRACE(0x122dab30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dab30 push ebp */
  push32((uint32_t)(EBP));
  /* 122dab31 mov ebp, esp */
  EBP = (ESP);
  /* 122dab33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dab36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dab39 push eax */
  push32((uint32_t)(EAX));
  /* 122dab3a call 0x122deaa0 */
  push32(0x122dab3fu); f_122deaa0();
  /* 122dab3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dab42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122dab45 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dab49 jne 0x122dab5e */
  if (!C.zf) goto L_122dab5e;
  /* 122dab4b call 0x122de6f0 */
  push32(0x122dab50u); f_122de6f0();
  /* 122dab50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122dab56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122dab59 jmp 0x122dabde */
  goto L_122dabde;
L_122dab5e:;
  /* 122dab5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122dab61 push ecx */
  push32((uint32_t)(ECX));
  /* 122dab62 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dab64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dab67 push edx */
  push32((uint32_t)(EDX));
  /* 122dab68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dab6b push eax */
  push32((uint32_t)(EAX));
  /* 122dab6c call dword ptr [0x1230429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230429c))), 0x122dab72u);
  /* 122dab72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122dab75 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dab79 jne 0x122dab86 */
  if (!C.zf) goto L_122dab86;
  /* 122dab7b call dword ptr [0x12304250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304250))), 0x122dab81u);
  /* 122dab81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122dab84 jmp 0x122dab8d */
  goto L_122dab8d;
L_122dab86:;
  /* 122dab86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122dab8d:;
  /* 122dab8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dab91 je 0x122daba4 */
  if (C.zf) goto L_122daba4;
  /* 122dab93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dab96 push ecx */
  push32((uint32_t)(ECX));
  /* 122dab97 call 0x122de650 */
  push32(0x122dab9cu); f_122de650();
  /* 122dab9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dab9f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122daba2 jmp 0x122dabde */
  goto L_122dabde;
L_122daba4:;
  /* 122daba4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122daba7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 122dabaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dabad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 122dabb0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dabb3 mov ecx, dword ptr [edx*4 + 0x12303120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12303120)));
  /* 122dabba mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 122dabbe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 122dabc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dabc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122dabc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dabca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122dabcd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dabd0 mov eax, dword ptr [eax*4 + 0x12303120] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122dabd7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 122dabdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_122dabde:;
  /* 122dabde mov esp, ebp */
  ESP = (EBP);
  /* 122dabe0 pop ebp */
  EBP = (pop32());
  /* 122dabe1 ret  */
  ESPCHK(0x122dab30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abf0 @ 0x122dabf0 (130 bytes, 43 insns) */
void f_122dabf0(void) {
  FTRACE(0x122dabf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dabf0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dabf1 mov ebp, esp */
  EBP = (ESP);
  /* 122dabf3 push ecx */
  push32((uint32_t)(ECX));
  /* 122dabf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dabf7 cmp eax, dword ptr [0x1230325c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1230325c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dabfd jae 0x122dac21 */
  if (!C.cf) goto L_122dac21;
  /* 122dabff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dac02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122dac05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dac08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122dac0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dac0e mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122dac15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122dac1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122dac1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dac1f jne 0x122dac3c */
  if (!C.zf) goto L_122dac3c;
L_122dac21:;
  /* 122dac21 call 0x122de6f0 */
  push32(0x122dac26u); f_122de6f0();
  /* 122dac26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122dac2c call 0x122de700 */
  push32(0x122dac31u); f_122de700();
  /* 122dac31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122dac37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122dac3a jmp 0x122dac6e */
  goto L_122dac6e;
L_122dac3c:;
  /* 122dac3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dac3f push edx */
  push32((uint32_t)(EDX));
  /* 122dac40 call 0x122dec20 */
  push32(0x122dac45u); f_122dec20();
  /* 122dac45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dac48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122dac4b push eax */
  push32((uint32_t)(EAX));
  /* 122dac4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dac4f push ecx */
  push32((uint32_t)(ECX));
  /* 122dac50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dac53 push edx */
  push32((uint32_t)(EDX));
  /* 122dac54 call 0x122dac80 */
  push32(0x122dac59u); f_122dac80();
  /* 122dac59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dac5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122dac5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dac62 push eax */
  push32((uint32_t)(EAX));
  /* 122dac63 call 0x122decb0 */
  push32(0x122dac68u); f_122decb0();
  /* 122dac68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dac6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122dac6e:;
  /* 122dac6e mov esp, ebp */
  ESP = (EBP);
  /* 122dac70 pop ebp */
  EBP = (pop32());
  /* 122dac71 ret  */
  ESPCHK(0x122dabf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac80 @ 0x122dac80 (627 bytes, 182 insns) */
void f_122dac80(void) {
  FTRACE(0x122dac80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dac80 push ebp */
  push32((uint32_t)(EBP));
  /* 122dac81 mov ebp, esp */
  EBP = (ESP);
  /* 122dac83 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dac89 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122dac90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dac93 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 122dac99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dac9d jne 0x122daca6 */
  if (!C.zf) goto L_122daca6;
  /* 122dac9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122daca1 jmp 0x122daeef */
  goto L_122daeef;
L_122daca6:;
  /* 122daca6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122daca9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122dacac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dacaf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122dacb2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dacb5 mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122dacbc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122dacc1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 122dacc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dacc6 je 0x122dacd8 */
  if (C.zf) goto L_122dacd8;
  /* 122dacc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 122dacca push 0 */
  push32((uint32_t)(0x0u));
  /* 122daccc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122daccf push edx */
  push32((uint32_t)(EDX));
  /* 122dacd0 call 0x122dab30 */
  push32(0x122dacd5u); f_122dab30();
  /* 122dacd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122dacd8:;
  /* 122dacd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dacdb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122dacde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dace1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122dace4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dace7 mov edx, dword ptr [eax*4 + 0x12303120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122dacee movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 122dacf3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 122dacf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dacfa je 0x122dae0c */
  if (C.zf) goto L_122dae0c;
  /* 122dad00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dad03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122dad06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_122dad0d:;
  /* 122dad0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dad10 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dad13 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dad16 jae 0x122dae0a */
  if (!C.cf) goto L_122dae0a;
  /* 122dad1c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 122dad22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122dad25:;
  /* 122dad25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dad28 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 122dad2e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dad30 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dad36 jge 0x122dad97 */
  if ((C.sf==C.of)) goto L_122dad97;
  /* 122dad38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dad3b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dad3e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dad41 jae 0x122dad97 */
  if (!C.cf) goto L_122dad97;
  /* 122dad43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dad46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122dad48 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 122dad4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dad51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dad54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122dad57 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 122dad5e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dad61 jne 0x122dad81 */
  if (!C.zf) goto L_122dad81;
  /* 122dad63 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 122dad69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dad6c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 122dad72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dad75 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 122dad78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dad7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dad7e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_122dad81:;
  /* 122dad81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dad84 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 122dad8a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 122dad8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dad8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dad92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122dad95 jmp 0x122dad25 */
  goto L_122dad25;
L_122dad97:;
  /* 122dad97 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dad99 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 122dad9f push edx */
  push32((uint32_t)(EDX));
  /* 122dada0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dada3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 122dada9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dadab push eax */
  push32((uint32_t)(EAX));
  /* 122dadac lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 122dadb2 push edx */
  push32((uint32_t)(EDX));
  /* 122dadb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dadb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122dadb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dadbc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122dadbf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dadc2 mov edx, dword ptr [eax*4 + 0x12303120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122dadc9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 122dadcc push eax */
  push32((uint32_t)(EAX));
  /* 122dadcd call dword ptr [0x12304214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304214))), 0x122dadd3u);
  /* 122dadd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dadd5 je 0x122dadfa */
  if (C.zf) goto L_122dadfa;
  /* 122dadd7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dadda add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dade0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122dade3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dade6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 122dadec sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dadee cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dadf4 jge 0x122dadf8 */
  if ((C.sf==C.of)) goto L_122dadf8;
  /* 122dadf6 jmp 0x122dae0a */
  goto L_122dae0a;
L_122dadf8:;
  /* 122dadf8 jmp 0x122dae05 */
  goto L_122dae05;
L_122dadfa:;
  /* 122dadfa call dword ptr [0x12304250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304250))), 0x122dae00u);
  /* 122dae00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122dae03 jmp 0x122dae0a */
  goto L_122dae0a;
L_122dae05:;
  /* 122dae05 jmp 0x122dad0d */
  goto L_122dad0d;
L_122dae0a:;
  /* 122dae0a jmp 0x122dae5c */
  goto L_122dae5c;
L_122dae0c:;
  /* 122dae0c push 0 */
  push32((uint32_t)(0x0u));
  /* 122dae0e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 122dae14 push ecx */
  push32((uint32_t)(ECX));
  /* 122dae15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122dae18 push edx */
  push32((uint32_t)(EDX));
  /* 122dae19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dae1c push eax */
  push32((uint32_t)(EAX));
  /* 122dae1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dae20 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122dae23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dae26 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122dae29 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dae2c mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122dae33 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 122dae36 push ecx */
  push32((uint32_t)(ECX));
  /* 122dae37 call dword ptr [0x12304214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304214))), 0x122dae3du);
  /* 122dae3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dae3f je 0x122dae53 */
  if (C.zf) goto L_122dae53;
  /* 122dae41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122dae48 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 122dae4e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122dae51 jmp 0x122dae5c */
  goto L_122dae5c;
L_122dae53:;
  /* 122dae53 call dword ptr [0x12304250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304250))), 0x122dae59u);
  /* 122dae59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122dae5c:;
  /* 122dae5c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dae60 jne 0x122daee6 */
  if (!C.zf) goto L_122daee6;
  /* 122dae66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dae6a je 0x122dae9a */
  if (C.zf) goto L_122dae9a;
  /* 122dae6c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dae70 jne 0x122dae89 */
  if (!C.zf) goto L_122dae89;
  /* 122dae72 call 0x122de6f0 */
  push32(0x122dae77u); f_122de6f0();
  /* 122dae77 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122dae7d call 0x122de700 */
  push32(0x122dae82u); f_122de700();
  /* 122dae82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dae85 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122dae87 jmp 0x122dae95 */
  goto L_122dae95;
L_122dae89:;
  /* 122dae89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dae8c push edx */
  push32((uint32_t)(EDX));
  /* 122dae8d call 0x122de650 */
  push32(0x122dae92u); f_122de650();
  /* 122dae92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122dae95:;
  /* 122dae95 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122dae98 jmp 0x122daeef */
  goto L_122daeef;
L_122dae9a:;
  /* 122dae9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dae9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122daea0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122daea3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122daea6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122daea9 mov edx, dword ptr [eax*4 + 0x12303120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122daeb0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 122daeb5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 122daeb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122daeba je 0x122daecb */
  if (C.zf) goto L_122daecb;
  /* 122daebc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122daebf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122daec2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122daec5 jne 0x122daecb */
  if (!C.zf) goto L_122daecb;
  /* 122daec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122daec9 jmp 0x122daeef */
  goto L_122daeef;
L_122daecb:;
  /* 122daecb call 0x122de6f0 */
  push32(0x122daed0u); f_122de6f0();
  /* 122daed0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 122daed6 call 0x122de700 */
  push32(0x122daedbu); f_122de700();
  /* 122daedb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122daee1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122daee4 jmp 0x122daeef */
  goto L_122daeef;
L_122daee6:;
  /* 122daee6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122daee9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_122daeef:;
  /* 122daeef mov esp, ebp */
  ESP = (EBP);
  /* 122daef1 pop ebp */
  EBP = (pop32());
  /* 122daef2 ret  */
  ESPCHK(0x122dac80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af00 @ 0x122daf00 (199 bytes, 68 insns) */
void f_122daf00(void) {
  FTRACE(0x122daf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122daf00 push ebp */
  push32((uint32_t)(EBP));
  /* 122daf01 mov ebp, esp */
  EBP = (ESP);
  /* 122daf03 push ecx */
  push32((uint32_t)(ECX));
  /* 122daf04 push ebx */
  push32((uint32_t)(EBX));
  /* 122daf05 push esi */
  push32((uint32_t)(ESI));
  /* 122daf06 push edi */
  push32((uint32_t)(EDI));
L_122daf07:;
  /* 122daf07 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122daf0b jne 0x122daf2b */
  if (!C.zf) goto L_122daf2b;
  /* 122daf0d push 0x122fce68 */
  push32((uint32_t)(0x122fce68u));
  /* 122daf12 push 0 */
  push32((uint32_t)(0x0u));
  /* 122daf14 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 122daf16 push 0x122fd980 */
  push32((uint32_t)(0x122fd980u));
  /* 122daf1b push 2 */
  push32((uint32_t)(0x2u));
  /* 122daf1d call 0x122d5120 */
  push32(0x122daf22u); f_122d5120();
  /* 122daf22 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122daf25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122daf28 jne 0x122daf2b */
  if (!C.zf) goto L_122daf2b;
  /* 122daf2a int3  */
  x86_unimpl("int3 @ 0x122daf2a");
L_122daf2b:;
  /* 122daf2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122daf2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122daf2f jne 0x122daf07 */
  if (!C.zf) goto L_122daf07;
  /* 122daf31 mov ecx, dword ptr [0x123018d8] */
  ECX = (r32((uint32_t)(0x123018d8)));
  /* 122daf37 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122daf3a mov dword ptr [0x123018d8], ecx */
  w32((uint32_t)(0x123018d8), (ECX));
  /* 122daf40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122daf43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122daf46 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 122daf48 push 0x122fd980 */
  push32((uint32_t)(0x122fd980u));
  /* 122daf4d push 2 */
  push32((uint32_t)(0x2u));
  /* 122daf4f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 122daf54 call 0x122d7180 */
  push32(0x122daf59u); f_122d7180();
  /* 122daf59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122daf5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122daf5f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 122daf62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122daf65 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122daf69 je 0x122daf86 */
  if (C.zf) goto L_122daf86;
  /* 122daf6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122daf6e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122daf71 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 122daf74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122daf77 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 122daf7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122daf7d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 122daf84 jmp 0x122dafab */
  goto L_122dafab;
L_122daf86:;
  /* 122daf86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122daf89 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122daf8c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122daf8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122daf92 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 122daf95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122daf98 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122daf9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122daf9e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122dafa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dafa4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_122dafab:;
  /* 122dafab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dafae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dafb1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122dafb4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122dafb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dafb9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 122dafc0 pop edi */
  EDI = (pop32());
  /* 122dafc1 pop esi */
  ESI = (pop32());
  /* 122dafc2 pop ebx */
  EBX = (pop32());
  /* 122dafc3 mov esp, ebp */
  ESP = (EBP);
  /* 122dafc5 pop ebp */
  EBP = (pop32());
  /* 122dafc6 ret  */
  ESPCHK(0x122daf00u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x122dafd0 (50 bytes, 17 insns) */
void f_122dafd0(void) {
  FTRACE(0x122dafd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dafd0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dafd1 mov ebp, esp */
  EBP = (ESP);
  /* 122dafd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dafd6 cmp eax, dword ptr [0x1230325c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1230325c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dafdc jb 0x122dafe2 */
  if (C.cf) goto L_122dafe2;
  /* 122dafde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dafe0 jmp 0x122db000 */
  goto L_122db000;
L_122dafe2:;
  /* 122dafe2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dafe5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122dafe8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dafeb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122dafee imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122daff1 mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122daff8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122daffd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_122db000:;
  /* 122db000 pop ebp */
  EBP = (pop32());
  /* 122db001 ret  */
  ESPCHK(0x122dafd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b010 @ 0x122db010 (300 bytes, 80 insns) */
void f_122db010(void) {
  FTRACE(0x122db010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db010 push ebp */
  push32((uint32_t)(EBP));
  /* 122db011 mov ebp, esp */
  EBP = (ESP);
  /* 122db013 push ecx */
  push32((uint32_t)(ECX));
  /* 122db014 cmp dword ptr [0x12303100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12303100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db01b jne 0x122db029 */
  if (!C.zf) goto L_122db029;
  /* 122db01d mov dword ptr [0x12303100], 0x200 */
  w32((uint32_t)(0x12303100), (0x200u));
  /* 122db027 jmp 0x122db03c */
  goto L_122db03c;
L_122db029:;
  /* 122db029 cmp dword ptr [0x12303100], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12303100))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db030 jge 0x122db03c */
  if ((C.sf==C.of)) goto L_122db03c;
  /* 122db032 mov dword ptr [0x12303100], 0x14 */
  w32((uint32_t)(0x12303100), (0x14u));
L_122db03c:;
  /* 122db03c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 122db041 push 0x122fd98c */
  push32((uint32_t)(0x122fd98cu));
  /* 122db046 push 2 */
  push32((uint32_t)(0x2u));
  /* 122db048 push 4 */
  push32((uint32_t)(0x4u));
  /* 122db04a mov eax, dword ptr [0x12303100] */
  EAX = (r32((uint32_t)(0x12303100)));
  /* 122db04f push eax */
  push32((uint32_t)(EAX));
  /* 122db050 call 0x122d7590 */
  push32(0x122db055u); f_122d7590();
  /* 122db055 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db058 mov dword ptr [0x12301dac], eax */
  w32((uint32_t)(0x12301dac), (EAX));
  /* 122db05d cmp dword ptr [0x12301dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db064 jne 0x122db0a5 */
  if (!C.zf) goto L_122db0a5;
  /* 122db066 mov dword ptr [0x12303100], 0x14 */
  w32((uint32_t)(0x12303100), (0x14u));
  /* 122db070 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 122db075 push 0x122fd98c */
  push32((uint32_t)(0x122fd98cu));
  /* 122db07a push 2 */
  push32((uint32_t)(0x2u));
  /* 122db07c push 4 */
  push32((uint32_t)(0x4u));
  /* 122db07e mov ecx, dword ptr [0x12303100] */
  ECX = (r32((uint32_t)(0x12303100)));
  /* 122db084 push ecx */
  push32((uint32_t)(ECX));
  /* 122db085 call 0x122d7590 */
  push32(0x122db08au); f_122d7590();
  /* 122db08a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db08d mov dword ptr [0x12301dac], eax */
  w32((uint32_t)(0x12301dac), (EAX));
  /* 122db092 cmp dword ptr [0x12301dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db099 jne 0x122db0a5 */
  if (!C.zf) goto L_122db0a5;
  /* 122db09b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 122db09d call 0x122d4fd0 */
  push32(0x122db0a2u); f_122d4fd0();
  /* 122db0a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122db0a5:;
  /* 122db0a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122db0ac jmp 0x122db0b7 */
  goto L_122db0b7;
L_122db0ae:;
  /* 122db0ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db0b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db0b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122db0b7:;
  /* 122db0b7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db0bb jge 0x122db0d6 */
  if ((C.sf==C.of)) goto L_122db0d6;
  /* 122db0bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db0c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122db0c3 add eax, 0x122ffb50 */
  { uint32_t _a=(EAX),_b=(0x122ffb50u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db0c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db0cb mov edx, dword ptr [0x12301dac] */
  EDX = (r32((uint32_t)(0x12301dac)));
  /* 122db0d1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 122db0d4 jmp 0x122db0ae */
  goto L_122db0ae;
L_122db0d6:;
  /* 122db0d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122db0dd jmp 0x122db0e8 */
  goto L_122db0e8;
L_122db0df:;
  /* 122db0df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db0e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db0e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122db0e8:;
  /* 122db0e8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db0ec jge 0x122db138 */
  if ((C.sf==C.of)) goto L_122db138;
  /* 122db0ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db0f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122db0f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db0f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122db0fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122db0fd mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122db104 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db108 je 0x122db126 */
  if (C.zf) goto L_122db126;
  /* 122db10a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db10d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122db110 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db113 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122db116 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122db119 mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122db120 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db124 jne 0x122db136 */
  if (!C.zf) goto L_122db136;
L_122db126:;
  /* 122db126 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db129 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122db12c mov dword ptr [ecx + 0x122ffb60], 0xffffffff */
  w32((uint32_t)(ECX + 0x122ffb60), (0xffffffffu));
L_122db136:;
  /* 122db136 jmp 0x122db0df */
  goto L_122db0df;
L_122db138:;
  /* 122db138 mov esp, ebp */
  ESP = (EBP);
  /* 122db13a pop ebp */
  EBP = (pop32());
  /* 122db13b ret  */
  ESPCHK(0x122db010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x122db140 (26 bytes, 9 insns) */
void f_122db140(void) {
  FTRACE(0x122db140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db140 push ebp */
  push32((uint32_t)(EBP));
  /* 122db141 mov ebp, esp */
  EBP = (ESP);
  /* 122db143 call 0x122def20 */
  push32(0x122db148u); f_122def20();
  /* 122db148 movsx eax, byte ptr [0x12301788] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12301788))));
  /* 122db14f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122db151 je 0x122db158 */
  if (C.zf) goto L_122db158;
  /* 122db153 call 0x122dece0 */
  push32(0x122db158u); f_122dece0();
L_122db158:;
  /* 122db158 pop ebp */
  EBP = (pop32());
  /* 122db159 ret  */
  ESPCHK(0x122db140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b160 @ 0x122db160 (61 bytes, 20 insns) */
void f_122db160(void) {
  FTRACE(0x122db160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db160 push ebp */
  push32((uint32_t)(EBP));
  /* 122db161 mov ebp, esp */
  EBP = (ESP);
  /* 122db163 cmp dword ptr [ebp + 8], 0x122ffb50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x122ffb50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db16a jb 0x122db18e */
  if (C.cf) goto L_122db18e;
  /* 122db16c cmp dword ptr [ebp + 8], 0x122ffdb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x122ffdb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db173 ja 0x122db18e */
  if ((!C.cf&&!C.zf)) goto L_122db18e;
  /* 122db175 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db178 sub eax, 0x122ffb50 */
  { uint32_t _a=(EAX),_b=(0x122ffb50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122db17d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122db180 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db183 push eax */
  push32((uint32_t)(EAX));
  /* 122db184 call 0x122db530 */
  push32(0x122db189u); f_122db530();
  /* 122db189 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db18c jmp 0x122db19b */
  goto L_122db19b;
L_122db18e:;
  /* 122db18e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db191 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db194 push ecx */
  push32((uint32_t)(ECX));
  /* 122db195 call dword ptr [0x123042a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a0))), 0x122db19bu);
L_122db19b:;
  /* 122db19b pop ebp */
  EBP = (pop32());
  /* 122db19c ret  */
  ESPCHK(0x122db160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1a0 @ 0x122db1a0 (41 bytes, 16 insns) */
void f_122db1a0(void) {
  FTRACE(0x122db1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122db1a1 mov ebp, esp */
  EBP = (ESP);
  /* 122db1a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db1a7 jge 0x122db1ba */
  if ((C.sf==C.of)) goto L_122db1ba;
  /* 122db1a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db1ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db1af push eax */
  push32((uint32_t)(EAX));
  /* 122db1b0 call 0x122db530 */
  push32(0x122db1b5u); f_122db530();
  /* 122db1b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db1b8 jmp 0x122db1c7 */
  goto L_122db1c7;
L_122db1ba:;
  /* 122db1ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122db1bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db1c0 push ecx */
  push32((uint32_t)(ECX));
  /* 122db1c1 call dword ptr [0x123042a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a0))), 0x122db1c7u);
L_122db1c7:;
  /* 122db1c7 pop ebp */
  EBP = (pop32());
  /* 122db1c8 ret  */
  ESPCHK(0x122db1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1d0 @ 0x122db1d0 (61 bytes, 20 insns) */
void f_122db1d0(void) {
  FTRACE(0x122db1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122db1d1 mov ebp, esp */
  EBP = (ESP);
  /* 122db1d3 cmp dword ptr [ebp + 8], 0x122ffb50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x122ffb50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db1da jb 0x122db1fe */
  if (C.cf) goto L_122db1fe;
  /* 122db1dc cmp dword ptr [ebp + 8], 0x122ffdb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x122ffdb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db1e3 ja 0x122db1fe */
  if ((!C.cf&&!C.zf)) goto L_122db1fe;
  /* 122db1e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db1e8 sub eax, 0x122ffb50 */
  { uint32_t _a=(EAX),_b=(0x122ffb50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122db1ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122db1f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db1f3 push eax */
  push32((uint32_t)(EAX));
  /* 122db1f4 call 0x122db5d0 */
  push32(0x122db1f9u); f_122db5d0();
  /* 122db1f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db1fc jmp 0x122db20b */
  goto L_122db20b;
L_122db1fe:;
  /* 122db1fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db201 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db204 push ecx */
  push32((uint32_t)(ECX));
  /* 122db205 call dword ptr [0x123042a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a4))), 0x122db20bu);
L_122db20b:;
  /* 122db20b pop ebp */
  EBP = (pop32());
  /* 122db20c ret  */
  ESPCHK(0x122db1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x122db210 (41 bytes, 16 insns) */
void f_122db210(void) {
  FTRACE(0x122db210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db210 push ebp */
  push32((uint32_t)(EBP));
  /* 122db211 mov ebp, esp */
  EBP = (ESP);
  /* 122db213 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db217 jge 0x122db22a */
  if ((C.sf==C.of)) goto L_122db22a;
  /* 122db219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db21c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db21f push eax */
  push32((uint32_t)(EAX));
  /* 122db220 call 0x122db5d0 */
  push32(0x122db225u); f_122db5d0();
  /* 122db225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db228 jmp 0x122db237 */
  goto L_122db237;
L_122db22a:;
  /* 122db22a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122db22d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db230 push ecx */
  push32((uint32_t)(ECX));
  /* 122db231 call dword ptr [0x123042a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a4))), 0x122db237u);
L_122db237:;
  /* 122db237 pop ebp */
  EBP = (pop32());
  /* 122db238 ret  */
  ESPCHK(0x122db210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b240 @ 0x122db240 (119 bytes, 34 insns) */
void f_122db240(void) {
  FTRACE(0x122db240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db240 push ebp */
  push32((uint32_t)(EBP));
  /* 122db241 mov ebp, esp */
  EBP = (ESP);
  /* 122db243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122db246 push 0x12301ae4 */
  push32((uint32_t)(0x12301ae4u));
  /* 122db24b call dword ptr [0x12304224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304224))), 0x122db251u);
  /* 122db251 cmp dword ptr [0x12301ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db258 je 0x122db278 */
  if (C.zf) goto L_122db278;
  /* 122db25a push 0x12301ae4 */
  push32((uint32_t)(0x12301ae4u));
  /* 122db25f call dword ptr [0x12304218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304218))), 0x122db265u);
  /* 122db265 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122db267 call 0x122db530 */
  push32(0x122db26cu); f_122db530();
  /* 122db26c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db26f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122db276 jmp 0x122db27f */
  goto L_122db27f;
L_122db278:;
  /* 122db278 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122db27f:;
  /* 122db27f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 122db283 push eax */
  push32((uint32_t)(EAX));
  /* 122db284 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db287 push ecx */
  push32((uint32_t)(ECX));
  /* 122db288 call 0x122db2c0 */
  push32(0x122db28du); f_122db2c0();
  /* 122db28d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db290 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122db293 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db297 je 0x122db2a5 */
  if (C.zf) goto L_122db2a5;
  /* 122db299 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122db29b call 0x122db5d0 */
  push32(0x122db2a0u); f_122db5d0();
  /* 122db2a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db2a3 jmp 0x122db2b0 */
  goto L_122db2b0;
L_122db2a5:;
  /* 122db2a5 push 0x12301ae4 */
  push32((uint32_t)(0x12301ae4u));
  /* 122db2aa call dword ptr [0x12304218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304218))), 0x122db2b0u);
L_122db2b0:;
  /* 122db2b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db2b3 mov esp, ebp */
  ESP = (EBP);
  /* 122db2b5 pop ebp */
  EBP = (pop32());
  /* 122db2b6 ret  */
  ESPCHK(0x122db240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2c0 @ 0x122db2c0 (160 bytes, 50 insns) */
void f_122db2c0(void) {
  FTRACE(0x122db2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122db2c1 mov ebp, esp */
  EBP = (ESP);
  /* 122db2c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122db2c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db2ca jne 0x122db2d3 */
  if (!C.zf) goto L_122db2d3;
  /* 122db2cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122db2ce jmp 0x122db35c */
  goto L_122db35c;
L_122db2d3:;
  /* 122db2d3 cmp dword ptr [0x12301960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db2da jne 0x122db30a */
  if (!C.zf) goto L_122db30a;
  /* 122db2dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122db2df and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122db2e4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db2e9 jle 0x122db2fb */
  if ((C.zf||C.sf!=C.of)) goto L_122db2fb;
  /* 122db2eb call 0x122de6f0 */
  push32(0x122db2f0u); f_122de6f0();
  /* 122db2f0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 122db2f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122db2f9 jmp 0x122db35c */
  goto L_122db35c;
L_122db2fb:;
  /* 122db2fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db2fe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 122db301 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 122db303 mov eax, 1 */
  EAX = (0x1u);
  /* 122db308 jmp 0x122db35c */
  goto L_122db35c;
L_122db30a:;
  /* 122db30a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122db311 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 122db314 push eax */
  push32((uint32_t)(EAX));
  /* 122db315 push 0 */
  push32((uint32_t)(0x0u));
  /* 122db317 mov ecx, dword ptr [0x12300158] */
  ECX = (r32((uint32_t)(0x12300158)));
  /* 122db31d push ecx */
  push32((uint32_t)(ECX));
  /* 122db31e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db321 push edx */
  push32((uint32_t)(EDX));
  /* 122db322 push 1 */
  push32((uint32_t)(0x1u));
  /* 122db324 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 122db327 push eax */
  push32((uint32_t)(EAX));
  /* 122db328 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122db32d mov ecx, dword ptr [0x12301970] */
  ECX = (r32((uint32_t)(0x12301970)));
  /* 122db333 push ecx */
  push32((uint32_t)(ECX));
  /* 122db334 call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122db33au);
  /* 122db33a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122db33d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db341 je 0x122db349 */
  if (C.zf) goto L_122db349;
  /* 122db343 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db347 je 0x122db359 */
  if (C.zf) goto L_122db359;
L_122db349:;
  /* 122db349 call 0x122de6f0 */
  push32(0x122db34eu); f_122de6f0();
  /* 122db34e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 122db354 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122db357 jmp 0x122db35c */
  goto L_122db35c;
L_122db359:;
  /* 122db359 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122db35c:;
  /* 122db35c mov esp, ebp */
  ESP = (EBP);
  /* 122db35e pop ebp */
  EBP = (pop32());
  /* 122db35f ret  */
  ESPCHK(0x122db2c0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x122db360 (104 bytes, 43 insns) */
void f_122db360(void) {
  FTRACE(0x122db360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db360 push ebx */
  push32((uint32_t)(EBX));
  /* 122db361 push esi */
  push32((uint32_t)(ESI));
  /* 122db362 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 122db366 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122db368 jne 0x122db382 */
  if (!C.zf) goto L_122db382;
  /* 122db36a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 122db36e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 122db372 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122db374 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122db376 mov ebx, eax */
  EBX = (EAX);
  /* 122db378 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 122db37c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122db37e mov edx, ebx */
  EDX = (EBX);
  /* 122db380 jmp 0x122db3c3 */
  goto L_122db3c3;
L_122db382:;
  /* 122db382 mov ecx, eax */
  ECX = (EAX);
  /* 122db384 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 122db388 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 122db38c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_122db390:;
  /* 122db390 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 122db392 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 122db394 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 122db396 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 122db398 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122db39a jne 0x122db390 */
  if (!C.zf) goto L_122db390;
  /* 122db39c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122db39e mov esi, eax */
  ESI = (EAX);
  /* 122db3a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122db3a4 mov ecx, eax */
  ECX = (EAX);
  /* 122db3a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 122db3aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122db3ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db3ae jb 0x122db3be */
  if (C.cf) goto L_122db3be;
  /* 122db3b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db3b4 ja 0x122db3be */
  if ((!C.cf&&!C.zf)) goto L_122db3be;
  /* 122db3b6 jb 0x122db3bf */
  if (C.cf) goto L_122db3bf;
  /* 122db3b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db3bc jbe 0x122db3bf */
  if ((C.cf||C.zf)) goto L_122db3bf;
L_122db3be:;
  /* 122db3be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_122db3bf:;
  /* 122db3bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122db3c1 mov eax, esi */
  EAX = (ESI);
L_122db3c3:;
  /* 122db3c3 pop esi */
  ESI = (pop32());
  /* 122db3c4 pop ebx */
  EBX = (pop32());
  /* 122db3c5 ret 0x10 */
  ESPCHK(0x122db360u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x122db3d0 (117 bytes, 44 insns) */
void f_122db3d0(void) {
  FTRACE(0x122db3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db3d0 push ebx */
  push32((uint32_t)(EBX));
  /* 122db3d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 122db3d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122db3d7 jne 0x122db3f1 */
  if (!C.zf) goto L_122db3f1;
  /* 122db3d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 122db3dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 122db3e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122db3e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122db3e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122db3e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122db3eb mov eax, edx */
  EAX = (EDX);
  /* 122db3ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122db3ef jmp 0x122db441 */
  goto L_122db441;
L_122db3f1:;
  /* 122db3f1 mov ecx, eax */
  ECX = (EAX);
  /* 122db3f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 122db3f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 122db3fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_122db3ff:;
  /* 122db3ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 122db401 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 122db403 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 122db405 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 122db407 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122db409 jne 0x122db3ff */
  if (!C.zf) goto L_122db3ff;
  /* 122db40b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122db40d mov ecx, eax */
  ECX = (EAX);
  /* 122db40f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122db413 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 122db414 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122db418 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db41a jb 0x122db42a */
  if (C.cf) goto L_122db42a;
  /* 122db41c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db420 ja 0x122db42a */
  if ((!C.cf&&!C.zf)) goto L_122db42a;
  /* 122db422 jb 0x122db432 */
  if (C.cf) goto L_122db432;
  /* 122db424 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db428 jbe 0x122db432 */
  if ((C.cf||C.zf)) goto L_122db432;
L_122db42a:;
  /* 122db42a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122db42e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_122db432:;
  /* 122db432 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122db436 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122db43a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122db43c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122db43e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_122db441:;
  /* 122db441 pop ebx */
  EBX = (pop32());
  /* 122db442 ret 0x10 */
  ESPCHK(0x122db3d0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b450 @ 0x122db450 (55 bytes, 16 insns) */
void f_122db450(void) {
  FTRACE(0x122db450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db450 push ebp */
  push32((uint32_t)(EBP));
  /* 122db451 mov ebp, esp */
  EBP = (ESP);
  /* 122db453 mov eax, dword ptr [0x12300044] */
  EAX = (r32((uint32_t)(0x12300044)));
  /* 122db458 push eax */
  push32((uint32_t)(EAX));
  /* 122db459 call dword ptr [0x123042a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a8))), 0x122db45fu);
  /* 122db45f mov ecx, dword ptr [0x12300034] */
  ECX = (r32((uint32_t)(0x12300034)));
  /* 122db465 push ecx */
  push32((uint32_t)(ECX));
  /* 122db466 call dword ptr [0x123042a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a8))), 0x122db46cu);
  /* 122db46c mov edx, dword ptr [0x12300024] */
  EDX = (r32((uint32_t)(0x12300024)));
  /* 122db472 push edx */
  push32((uint32_t)(EDX));
  /* 122db473 call dword ptr [0x123042a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a8))), 0x122db479u);
  /* 122db479 mov eax, dword ptr [0x12300004] */
  EAX = (r32((uint32_t)(0x12300004)));
  /* 122db47e push eax */
  push32((uint32_t)(EAX));
  /* 122db47f call dword ptr [0x123042a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a8))), 0x122db485u);
  /* 122db485 pop ebp */
  EBP = (pop32());
  /* 122db486 ret  */
  ESPCHK(0x122db450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b490 @ 0x122db490 (159 bytes, 47 insns) */
void f_122db490(void) {
  FTRACE(0x122db490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db490 push ebp */
  push32((uint32_t)(EBP));
  /* 122db491 mov ebp, esp */
  EBP = (ESP);
  /* 122db493 push ecx */
  push32((uint32_t)(ECX));
  /* 122db494 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122db49b jmp 0x122db4a6 */
  goto L_122db4a6;
L_122db49d:;
  /* 122db49d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db4a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db4a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122db4a6:;
  /* 122db4a6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db4aa jge 0x122db4f9 */
  if ((C.sf==C.of)) goto L_122db4f9;
  /* 122db4ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db4af cmp dword ptr [ecx*4 + 0x12300000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12300000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db4b7 je 0x122db4f7 */
  if (C.zf) goto L_122db4f7;
  /* 122db4b9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db4bd je 0x122db4f7 */
  if (C.zf) goto L_122db4f7;
  /* 122db4bf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db4c3 je 0x122db4f7 */
  if (C.zf) goto L_122db4f7;
  /* 122db4c5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db4c9 je 0x122db4f7 */
  if (C.zf) goto L_122db4f7;
  /* 122db4cb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db4cf je 0x122db4f7 */
  if (C.zf) goto L_122db4f7;
  /* 122db4d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db4d4 mov eax, dword ptr [edx*4 + 0x12300000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12300000)));
  /* 122db4db push eax */
  push32((uint32_t)(EAX));
  /* 122db4dc call dword ptr [0x12304264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304264))), 0x122db4e2u);
  /* 122db4e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 122db4e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db4e7 mov edx, dword ptr [ecx*4 + 0x12300000] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12300000)));
  /* 122db4ee push edx */
  push32((uint32_t)(EDX));
  /* 122db4ef call 0x122d7c10 */
  push32(0x122db4f4u); f_122d7c10();
  /* 122db4f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122db4f7:;
  /* 122db4f7 jmp 0x122db49d */
  goto L_122db49d;
L_122db4f9:;
  /* 122db4f9 mov eax, dword ptr [0x12300024] */
  EAX = (r32((uint32_t)(0x12300024)));
  /* 122db4fe push eax */
  push32((uint32_t)(EAX));
  /* 122db4ff call dword ptr [0x12304264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304264))), 0x122db505u);
  /* 122db505 mov ecx, dword ptr [0x12300034] */
  ECX = (r32((uint32_t)(0x12300034)));
  /* 122db50b push ecx */
  push32((uint32_t)(ECX));
  /* 122db50c call dword ptr [0x12304264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304264))), 0x122db512u);
  /* 122db512 mov edx, dword ptr [0x12300044] */
  EDX = (r32((uint32_t)(0x12300044)));
  /* 122db518 push edx */
  push32((uint32_t)(EDX));
  /* 122db519 call dword ptr [0x12304264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304264))), 0x122db51fu);
  /* 122db51f mov eax, dword ptr [0x12300004] */
  EAX = (r32((uint32_t)(0x12300004)));
  /* 122db524 push eax */
  push32((uint32_t)(EAX));
  /* 122db525 call dword ptr [0x12304264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304264))), 0x122db52bu);
  /* 122db52b mov esp, ebp */
  ESP = (EBP);
  /* 122db52d pop ebp */
  EBP = (pop32());
  /* 122db52e ret  */
  ESPCHK(0x122db490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b530 @ 0x122db530 (151 bytes, 46 insns) */
void f_122db530(void) {
  FTRACE(0x122db530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db530 push ebp */
  push32((uint32_t)(EBP));
  /* 122db531 mov ebp, esp */
  EBP = (ESP);
  /* 122db533 push ecx */
  push32((uint32_t)(ECX));
  /* 122db534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db537 cmp dword ptr [eax*4 + 0x12300000], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12300000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db53f jne 0x122db5b2 */
  if (!C.zf) goto L_122db5b2;
  /* 122db541 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 122db546 push 0x122fd994 */
  push32((uint32_t)(0x122fd994u));
  /* 122db54b push 2 */
  push32((uint32_t)(0x2u));
  /* 122db54d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 122db54f call 0x122d7180 */
  push32(0x122db554u); f_122d7180();
  /* 122db554 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db557 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122db55a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db55e jne 0x122db56a */
  if (!C.zf) goto L_122db56a;
  /* 122db560 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 122db562 call 0x122d4fd0 */
  push32(0x122db567u); f_122d4fd0();
  /* 122db567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122db56a:;
  /* 122db56a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 122db56c call 0x122db530 */
  push32(0x122db571u); f_122db530();
  /* 122db571 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db574 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db577 cmp dword ptr [ecx*4 + 0x12300000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12300000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db57f jne 0x122db59a */
  if (!C.zf) goto L_122db59a;
  /* 122db581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db584 push edx */
  push32((uint32_t)(EDX));
  /* 122db585 call dword ptr [0x123042a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a8))), 0x122db58bu);
  /* 122db58b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db58e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db591 mov dword ptr [eax*4 + 0x12300000], ecx */
  w32((uint32_t)(EAX*4 + 0x12300000), (ECX));
  /* 122db598 jmp 0x122db5a8 */
  goto L_122db5a8;
L_122db59a:;
  /* 122db59a push 2 */
  push32((uint32_t)(0x2u));
  /* 122db59c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db59f push edx */
  push32((uint32_t)(EDX));
  /* 122db5a0 call 0x122d7c10 */
  push32(0x122db5a5u); f_122d7c10();
  /* 122db5a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122db5a8:;
  /* 122db5a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 122db5aa call 0x122db5d0 */
  push32(0x122db5afu); f_122db5d0();
  /* 122db5af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122db5b2:;
  /* 122db5b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db5b5 mov ecx, dword ptr [eax*4 + 0x12300000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12300000)));
  /* 122db5bc push ecx */
  push32((uint32_t)(ECX));
  /* 122db5bd call dword ptr [0x123042a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a0))), 0x122db5c3u);
  /* 122db5c3 mov esp, ebp */
  ESP = (EBP);
  /* 122db5c5 pop ebp */
  EBP = (pop32());
  /* 122db5c6 ret  */
  ESPCHK(0x122db530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5d0 @ 0x122db5d0 (22 bytes, 8 insns) */
void f_122db5d0(void) {
  FTRACE(0x122db5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122db5d1 mov ebp, esp */
  EBP = (ESP);
  /* 122db5d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db5d6 mov ecx, dword ptr [eax*4 + 0x12300000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12300000)));
  /* 122db5dd push ecx */
  push32((uint32_t)(ECX));
  /* 122db5de call dword ptr [0x123042a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a4))), 0x122db5e4u);
  /* 122db5e4 pop ebp */
  EBP = (pop32());
  /* 122db5e5 ret  */
  ESPCHK(0x122db5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5f0 @ 0x122db5f0 (26 bytes, 10 insns) */
void f_122db5f0(void) {
  FTRACE(0x122db5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122db5f1 mov ebp, esp */
  EBP = (ESP);
  /* 122db5f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db5f6 push eax */
  push32((uint32_t)(EAX));
  /* 122db5f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122db5f9 call dword ptr [0x123042ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042ac))), 0x122db5ffu);
  /* 122db5ff push 0xff */
  push32((uint32_t)(0xffu));
  /* 122db604 call dword ptr [0x1230422c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230422c))), 0x122db60au);
  /* 122db60a pop ebp */
  EBP = (pop32());
  /* 122db60b ret  */
  ESPCHK(0x122db5f0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x122db610 (446 bytes, 130 insns) */
void f_122db610(void) {
  FTRACE(0x122db610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db610 push ebp */
  push32((uint32_t)(EBP));
  /* 122db611 mov ebp, esp */
  EBP = (ESP);
  /* 122db613 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122db616 call 0x122d6bc0 */
  push32(0x122db61bu); f_122d6bc0();
  /* 122db61b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122db61e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db621 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 122db624 push ecx */
  push32((uint32_t)(ECX));
  /* 122db625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db628 push edx */
  push32((uint32_t)(EDX));
  /* 122db629 call 0x122db7d0 */
  push32(0x122db62eu); f_122db7d0();
  /* 122db62e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db631 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122db634 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db638 je 0x122db643 */
  if (C.zf) goto L_122db643;
  /* 122db63a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db63d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db641 jne 0x122db652 */
  if (!C.zf) goto L_122db652;
L_122db643:;
  /* 122db643 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122db646 push ecx */
  push32((uint32_t)(ECX));
  /* 122db647 call dword ptr [0x123042b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042b0))), 0x122db64du);
  /* 122db64d jmp 0x122db7ca */
  goto L_122db7ca;
L_122db652:;
  /* 122db652 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db655 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db659 jne 0x122db66f */
  if (!C.zf) goto L_122db66f;
  /* 122db65b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db65e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 122db665 mov eax, 1 */
  EAX = (0x1u);
  /* 122db66a jmp 0x122db7ca */
  goto L_122db7ca;
L_122db66f:;
  /* 122db66f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db672 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db676 jne 0x122db680 */
  if (!C.zf) goto L_122db680;
  /* 122db678 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122db67b jmp 0x122db7ca */
  goto L_122db7ca;
L_122db680:;
  /* 122db680 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db683 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122db686 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122db689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db68c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 122db68f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 122db692 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db695 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122db698 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 122db69b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db69e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db6a2 jne 0x122db7a7 */
  if (!C.zf) goto L_122db7a7;
  /* 122db6a8 mov eax, dword ptr [0x12300138] */
  EAX = (r32((uint32_t)(0x12300138)));
  /* 122db6ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122db6b0 jmp 0x122db6bb */
  goto L_122db6bb;
L_122db6b2:;
  /* 122db6b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122db6b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db6b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_122db6bb:;
  /* 122db6bb mov edx, dword ptr [0x12300138] */
  EDX = (r32((uint32_t)(0x12300138)));
  /* 122db6c1 add edx, dword ptr [0x1230013c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1230013c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db6c7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db6ca jge 0x122db6e2 */
  if ((C.sf==C.of)) goto L_122db6e2;
  /* 122db6cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122db6cf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122db6d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db6d5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 122db6d8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 122db6e0 jmp 0x122db6b2 */
  goto L_122db6b2;
L_122db6e2:;
  /* 122db6e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db6e5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 122db6e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122db6eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db6ee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db6f4 jne 0x122db705 */
  if (!C.zf) goto L_122db705;
  /* 122db6f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db6f9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 122db700 jmp 0x122db78d */
  goto L_122db78d;
L_122db705:;
  /* 122db705 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db708 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db70e jne 0x122db71c */
  if (!C.zf) goto L_122db71c;
  /* 122db710 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db713 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 122db71a jmp 0x122db78d */
  goto L_122db78d;
L_122db71c:;
  /* 122db71c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db71f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db725 jne 0x122db733 */
  if (!C.zf) goto L_122db733;
  /* 122db727 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db72a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 122db731 jmp 0x122db78d */
  goto L_122db78d;
L_122db733:;
  /* 122db733 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db736 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db73c jne 0x122db74a */
  if (!C.zf) goto L_122db74a;
  /* 122db73e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db741 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 122db748 jmp 0x122db78d */
  goto L_122db78d;
L_122db74a:;
  /* 122db74a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db74d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db753 jne 0x122db761 */
  if (!C.zf) goto L_122db761;
  /* 122db755 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db758 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 122db75f jmp 0x122db78d */
  goto L_122db78d;
L_122db761:;
  /* 122db761 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db764 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db76a jne 0x122db778 */
  if (!C.zf) goto L_122db778;
  /* 122db76c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db76f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 122db776 jmp 0x122db78d */
  goto L_122db78d;
L_122db778:;
  /* 122db778 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db77b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db781 jne 0x122db78d */
  if (!C.zf) goto L_122db78d;
  /* 122db783 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db786 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_122db78d:;
  /* 122db78d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db790 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 122db793 push edx */
  push32((uint32_t)(EDX));
  /* 122db794 push 8 */
  push32((uint32_t)(0x8u));
  /* 122db796 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x122db799u);
  /* 122db799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db79c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db79f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122db7a2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 122db7a5 jmp 0x122db7be */
  goto L_122db7be;
L_122db7a7:;
  /* 122db7a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db7aa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 122db7b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122db7b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122db7b7 push ecx */
  push32((uint32_t)(ECX));
  /* 122db7b8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x122db7bbu);
  /* 122db7bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122db7be:;
  /* 122db7be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122db7c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122db7c4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 122db7c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_122db7ca:;
  /* 122db7ca mov esp, ebp */
  ESP = (EBP);
  /* 122db7cc pop ebp */
  EBP = (pop32());
  /* 122db7cd ret  */
  ESPCHK(0x122db610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7d0 @ 0x122db7d0 (89 bytes, 35 insns) */
void f_122db7d0(void) {
  FTRACE(0x122db7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122db7d1 mov ebp, esp */
  EBP = (ESP);
  /* 122db7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 122db7d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122db7d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122db7da:;
  /* 122db7da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db7dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122db7df cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db7e2 je 0x122db802 */
  if (C.zf) goto L_122db802;
  /* 122db7e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db7e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db7ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122db7ed mov ecx, dword ptr [0x12300144] */
  ECX = (r32((uint32_t)(0x12300144)));
  /* 122db7f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122db7f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122db7f9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db7fb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db7fe jae 0x122db802 */
  if (!C.cf) goto L_122db802;
  /* 122db800 jmp 0x122db7da */
  goto L_122db7da;
L_122db802:;
  /* 122db802 mov eax, dword ptr [0x12300144] */
  EAX = (r32((uint32_t)(0x12300144)));
  /* 122db807 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122db80a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122db80d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db80f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db812 jae 0x122db81e */
  if (!C.cf) goto L_122db81e;
  /* 122db814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db817 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122db819 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db81c je 0x122db822 */
  if (C.zf) goto L_122db822;
L_122db81e:;
  /* 122db81e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122db820 jmp 0x122db825 */
  goto L_122db825;
L_122db822:;
  /* 122db822 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122db825:;
  /* 122db825 mov esp, ebp */
  ESP = (EBP);
  /* 122db827 pop ebp */
  EBP = (pop32());
  /* 122db828 ret  */
  ESPCHK(0x122db7d0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x122db830 (48 bytes, 17 insns) */
void f_122db830(void) {
  FTRACE(0x122db830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db830 push ebp */
  push32((uint32_t)(EBP));
  /* 122db831 mov ebp, esp */
  EBP = (ESP);
  /* 122db833 push ecx */
  push32((uint32_t)(ECX));
  /* 122db834 push 9 */
  push32((uint32_t)(0x9u));
  /* 122db836 call 0x122db530 */
  push32(0x122db83bu); f_122db530();
  /* 122db83b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db83e mov eax, dword ptr [0x12301944] */
  EAX = (r32((uint32_t)(0x12301944)));
  /* 122db843 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122db846 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db849 mov dword ptr [0x12301944], ecx */
  w32((uint32_t)(0x12301944), (ECX));
  /* 122db84f push 9 */
  push32((uint32_t)(0x9u));
  /* 122db851 call 0x122db5d0 */
  push32(0x122db856u); f_122db5d0();
  /* 122db856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db85c mov esp, ebp */
  ESP = (EBP);
  /* 122db85e pop ebp */
  EBP = (pop32());
  /* 122db85f ret  */
  ESPCHK(0x122db830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b860 @ 0x122db860 (10 bytes, 5 insns) */
void f_122db860(void) {
  FTRACE(0x122db860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db860 push ebp */
  push32((uint32_t)(EBP));
  /* 122db861 mov ebp, esp */
  EBP = (ESP);
  /* 122db863 mov eax, dword ptr [0x12301944] */
  EAX = (r32((uint32_t)(0x12301944)));
  /* 122db868 pop ebp */
  EBP = (pop32());
  /* 122db869 ret  */
  ESPCHK(0x122db860u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x122db870 (45 bytes, 19 insns) */
void f_122db870(void) {
  FTRACE(0x122db870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db870 push ebp */
  push32((uint32_t)(EBP));
  /* 122db871 mov ebp, esp */
  EBP = (ESP);
  /* 122db873 push ecx */
  push32((uint32_t)(ECX));
  /* 122db874 mov eax, dword ptr [0x12301944] */
  EAX = (r32((uint32_t)(0x12301944)));
  /* 122db879 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122db87c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db880 je 0x122db890 */
  if (C.zf) goto L_122db890;
  /* 122db882 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db885 push ecx */
  push32((uint32_t)(ECX));
  /* 122db886 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x122db889u);
  /* 122db889 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db88c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122db88e jne 0x122db894 */
  if (!C.zf) goto L_122db894;
L_122db890:;
  /* 122db890 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122db892 jmp 0x122db899 */
  goto L_122db899;
L_122db894:;
  /* 122db894 mov eax, 1 */
  EAX = (0x1u);
L_122db899:;
  /* 122db899 mov esp, ebp */
  ESP = (EBP);
  /* 122db89b pop ebp */
  EBP = (pop32());
  /* 122db89c ret  */
  ESPCHK(0x122db870u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x122db8a0 (88 bytes, 40 insns) */
void f_122db8a0(void) {
  FTRACE(0x122db8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db8a0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 122db8a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 122db8a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122db8aa je 0x122db8f3 */
  if (C.zf) goto L_122db8f3;
  /* 122db8ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122db8ae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 122db8b2 push edi */
  push32((uint32_t)(EDI));
  /* 122db8b3 mov edi, ecx */
  EDI = (ECX);
  /* 122db8b5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db8b8 jb 0x122db8e7 */
  if (C.cf) goto L_122db8e7;
  /* 122db8ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122db8bc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 122db8bf je 0x122db8c9 */
  if (C.zf) goto L_122db8c9;
  /* 122db8c1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_122db8c3:;
  /* 122db8c3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122db8c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122db8c6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122db8c7 jne 0x122db8c3 */
  if (!C.zf) goto L_122db8c3;
L_122db8c9:;
  /* 122db8c9 mov ecx, eax */
  ECX = (EAX);
  /* 122db8cb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 122db8ce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db8d0 mov ecx, eax */
  ECX = (EAX);
  /* 122db8d2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 122db8d5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db8d7 mov ecx, edx */
  ECX = (EDX);
  /* 122db8d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 122db8dc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122db8df je 0x122db8e7 */
  if (C.zf) goto L_122db8e7;
  /* 122db8e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 122db8e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122db8e5 je 0x122db8ed */
  if (C.zf) goto L_122db8ed;
L_122db8e7:;
  /* 122db8e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122db8e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122db8ea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 122db8eb jne 0x122db8e7 */
  if (!C.zf) goto L_122db8e7;
L_122db8ed:;
  /* 122db8ed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122db8f1 pop edi */
  EDI = (pop32());
  /* 122db8f2 ret  */
  ESPCHK(0x122db8a0u, _esp0);
  ESP += 4; return;
L_122db8f3:;
  /* 122db8f3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 122db8f7 ret  */
  ESPCHK(0x122db8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b900 @ 0x122db900 (23 bytes, 10 insns) */
void f_122db900(void) {
  FTRACE(0x122db900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db900 push ebp */
  push32((uint32_t)(EBP));
  /* 122db901 mov ebp, esp */
  EBP = (ESP);
  /* 122db903 mov eax, dword ptr [0x12301940] */
  EAX = (r32((uint32_t)(0x12301940)));
  /* 122db908 push eax */
  push32((uint32_t)(EAX));
  /* 122db909 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db90c push ecx */
  push32((uint32_t)(ECX));
  /* 122db90d call 0x122db920 */
  push32(0x122db912u); f_122db920();
  /* 122db912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db915 pop ebp */
  EBP = (pop32());
  /* 122db916 ret  */
  ESPCHK(0x122db900u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x122db920 (87 bytes, 34 insns) */
void f_122db920(void) {
  FTRACE(0x122db920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db920 push ebp */
  push32((uint32_t)(EBP));
  /* 122db921 mov ebp, esp */
  EBP = (ESP);
  /* 122db923 push ecx */
  push32((uint32_t)(ECX));
  /* 122db924 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db928 jbe 0x122db92e */
  if ((C.cf||C.zf)) goto L_122db92e;
  /* 122db92a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122db92c jmp 0x122db973 */
  goto L_122db973;
L_122db92e:;
  /* 122db92e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db932 ja 0x122db945 */
  if ((!C.cf&&!C.zf)) goto L_122db945;
  /* 122db934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db937 push eax */
  push32((uint32_t)(EAX));
  /* 122db938 call 0x122db980 */
  push32(0x122db93du); f_122db980();
  /* 122db93d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db940 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122db943 jmp 0x122db94c */
  goto L_122db94c;
L_122db945:;
  /* 122db945 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122db94c:;
  /* 122db94c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db950 jne 0x122db958 */
  if (!C.zf) goto L_122db958;
  /* 122db952 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db956 jne 0x122db95d */
  if (!C.zf) goto L_122db95d;
L_122db958:;
  /* 122db958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db95b jmp 0x122db973 */
  goto L_122db973;
L_122db95d:;
  /* 122db95d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db960 push ecx */
  push32((uint32_t)(ECX));
  /* 122db961 call 0x122db870 */
  push32(0x122db966u); f_122db870();
  /* 122db966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122db96b jne 0x122db971 */
  if (!C.zf) goto L_122db971;
  /* 122db96d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122db96f jmp 0x122db973 */
  goto L_122db973;
L_122db971:;
  /* 122db971 jmp 0x122db92e */
  goto L_122db92e;
L_122db973:;
  /* 122db973 mov esp, ebp */
  ESP = (EBP);
  /* 122db975 pop ebp */
  EBP = (pop32());
  /* 122db976 ret  */
  ESPCHK(0x122db920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b980 @ 0x122db980 (109 bytes, 37 insns) */
void f_122db980(void) {
  FTRACE(0x122db980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db980 push ebp */
  push32((uint32_t)(EBP));
  /* 122db981 mov ebp, esp */
  EBP = (ESP);
  /* 122db983 push ecx */
  push32((uint32_t)(ECX));
  /* 122db984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db987 cmp eax, dword ptr [0x12300154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12300154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db98d ja 0x122db9bd */
  if ((!C.cf&&!C.zf)) goto L_122db9bd;
  /* 122db98f push 9 */
  push32((uint32_t)(0x9u));
  /* 122db991 call 0x122db530 */
  push32(0x122db996u); f_122db530();
  /* 122db996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db999 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db99c push ecx */
  push32((uint32_t)(ECX));
  /* 122db99d call 0x122dc4c0 */
  push32(0x122db9a2u); f_122dc4c0();
  /* 122db9a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db9a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122db9a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 122db9aa call 0x122db5d0 */
  push32(0x122db9afu); f_122db5d0();
  /* 122db9af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122db9b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db9b6 je 0x122db9bd */
  if (C.zf) goto L_122db9bd;
  /* 122db9b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122db9bb jmp 0x122db9e9 */
  goto L_122db9e9;
L_122db9bd:;
  /* 122db9bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122db9c1 jne 0x122db9ca */
  if (!C.zf) goto L_122db9ca;
  /* 122db9c3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_122db9ca:;
  /* 122db9ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db9cd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122db9d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 122db9d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122db9d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122db9d9 push eax */
  push32((uint32_t)(EAX));
  /* 122db9da push 0 */
  push32((uint32_t)(0x0u));
  /* 122db9dc mov ecx, dword ptr [0x12303104] */
  ECX = (r32((uint32_t)(0x12303104)));
  /* 122db9e2 push ecx */
  push32((uint32_t)(ECX));
  /* 122db9e3 call dword ptr [0x123042b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042b4))), 0x122db9e9u);
L_122db9e9:;
  /* 122db9e9 mov esp, ebp */
  ESP = (EBP);
  /* 122db9eb pop ebp */
  EBP = (pop32());
  /* 122db9ec ret  */
  ESPCHK(0x122db980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9f0 @ 0x122db9f0 (10 bytes, 5 insns) */
void f_122db9f0(void) {
  FTRACE(0x122db9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122db9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122db9f1 mov ebp, esp */
  EBP = (ESP);
  /* 122db9f3 mov eax, 1 */
  EAX = (0x1u);
  /* 122db9f8 pop ebp */
  EBP = (pop32());
  /* 122db9f9 ret  */
  ESPCHK(0x122db9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba00 @ 0x122dba00 (173 bytes, 59 insns) */
void f_122dba00(void) {
  FTRACE(0x122dba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dba00 push ebp */
  push32((uint32_t)(EBP));
  /* 122dba01 mov ebp, esp */
  EBP = (ESP);
  /* 122dba03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dba06 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dba0a jbe 0x122dba13 */
  if ((C.cf||C.zf)) goto L_122dba13;
  /* 122dba0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dba0e jmp 0x122dbaa9 */
  goto L_122dbaa9;
L_122dba13:;
  /* 122dba13 push 9 */
  push32((uint32_t)(0x9u));
  /* 122dba15 call 0x122db530 */
  push32(0x122dba1au); f_122db530();
  /* 122dba1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dba1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dba20 push eax */
  push32((uint32_t)(EAX));
  /* 122dba21 call 0x122dbe30 */
  push32(0x122dba26u); f_122dbe30();
  /* 122dba26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dba29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122dba2c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dba30 je 0x122dba71 */
  if (C.zf) goto L_122dba71;
  /* 122dba32 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122dba39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dba3c cmp ecx, dword ptr [0x12300154] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12300154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dba42 ja 0x122dba62 */
  if ((!C.cf&&!C.zf)) goto L_122dba62;
  /* 122dba44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dba47 push edx */
  push32((uint32_t)(EDX));
  /* 122dba48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dba4b push eax */
  push32((uint32_t)(EAX));
  /* 122dba4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dba4f push ecx */
  push32((uint32_t)(ECX));
  /* 122dba50 call 0x122dcd00 */
  push32(0x122dba55u); f_122dcd00();
  /* 122dba55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dba58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dba5a je 0x122dba62 */
  if (C.zf) goto L_122dba62;
  /* 122dba5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dba5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122dba62:;
  /* 122dba62 push 9 */
  push32((uint32_t)(0x9u));
  /* 122dba64 call 0x122db5d0 */
  push32(0x122dba69u); f_122db5d0();
  /* 122dba69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dba6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dba6f jmp 0x122dbaa9 */
  goto L_122dbaa9;
L_122dba71:;
  /* 122dba71 push 9 */
  push32((uint32_t)(0x9u));
  /* 122dba73 call 0x122db5d0 */
  push32(0x122dba78u); f_122db5d0();
  /* 122dba78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dba7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dba7f jne 0x122dba88 */
  if (!C.zf) goto L_122dba88;
  /* 122dba81 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_122dba88:;
  /* 122dba88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dba8b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dba8e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 122dba90 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 122dba93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dba96 push ecx */
  push32((uint32_t)(ECX));
  /* 122dba97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dba9a push edx */
  push32((uint32_t)(EDX));
  /* 122dba9b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 122dba9d mov eax, dword ptr [0x12303104] */
  EAX = (r32((uint32_t)(0x12303104)));
  /* 122dbaa2 push eax */
  push32((uint32_t)(EAX));
  /* 122dbaa3 call dword ptr [0x123042b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042b8))), 0x122dbaa9u);
L_122dbaa9:;
  /* 122dbaa9 mov esp, ebp */
  ESP = (EBP);
  /* 122dbaab pop ebp */
  EBP = (pop32());
  /* 122dbaac ret  */
  ESPCHK(0x122dba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bab0 @ 0x122dbab0 (490 bytes, 165 insns) */
void f_122dbab0(void) {
  FTRACE(0x122dbab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dbab0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dbab1 mov ebp, esp */
  EBP = (ESP);
  /* 122dbab3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbab6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbaba jne 0x122dbacd */
  if (!C.zf) goto L_122dbacd;
  /* 122dbabc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbabf push eax */
  push32((uint32_t)(EAX));
  /* 122dbac0 call 0x122db900 */
  push32(0x122dbac5u); f_122db900();
  /* 122dbac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbac8 jmp 0x122dbc96 */
  goto L_122dbc96;
L_122dbacd:;
  /* 122dbacd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbad1 jne 0x122dbae6 */
  if (!C.zf) goto L_122dbae6;
  /* 122dbad3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbad6 push ecx */
  push32((uint32_t)(ECX));
  /* 122dbad7 call 0x122dbca0 */
  push32(0x122dbadcu); f_122dbca0();
  /* 122dbadc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbadf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dbae1 jmp 0x122dbc96 */
  goto L_122dbc96;
L_122dbae6:;
  /* 122dbae6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122dbaed cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbaf1 ja 0x122dbc69 */
  if ((!C.cf&&!C.zf)) goto L_122dbc69;
  /* 122dbaf7 push 9 */
  push32((uint32_t)(0x9u));
  /* 122dbaf9 call 0x122db530 */
  push32(0x122dbafeu); f_122db530();
  /* 122dbafe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbb01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbb04 push edx */
  push32((uint32_t)(EDX));
  /* 122dbb05 call 0x122dbe30 */
  push32(0x122dbb0au); f_122dbe30();
  /* 122dbb0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbb0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122dbb10 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbb14 je 0x122dbc2c */
  if (C.zf) goto L_122dbc2c;
  /* 122dbb1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbb1d cmp eax, dword ptr [0x12300154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12300154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbb23 ja 0x122dbba0 */
  if ((!C.cf&&!C.zf)) goto L_122dbba0;
  /* 122dbb25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbb28 push ecx */
  push32((uint32_t)(ECX));
  /* 122dbb29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbb2c push edx */
  push32((uint32_t)(EDX));
  /* 122dbb2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dbb30 push eax */
  push32((uint32_t)(EAX));
  /* 122dbb31 call 0x122dcd00 */
  push32(0x122dbb36u); f_122dcd00();
  /* 122dbb36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbb39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dbb3b je 0x122dbb45 */
  if (C.zf) goto L_122dbb45;
  /* 122dbb3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbb40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122dbb43 jmp 0x122dbba0 */
  goto L_122dbba0;
L_122dbb45:;
  /* 122dbb45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbb48 push edx */
  push32((uint32_t)(EDX));
  /* 122dbb49 call 0x122dc4c0 */
  push32(0x122dbb4eu); f_122dc4c0();
  /* 122dbb4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbb51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122dbb54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbb58 je 0x122dbba0 */
  if (C.zf) goto L_122dbba0;
  /* 122dbb5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbb5d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 122dbb60 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbb63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122dbb66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dbb69 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbb6c jae 0x122dbb76 */
  if (!C.cf) goto L_122dbb76;
  /* 122dbb6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dbb71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122dbb74 jmp 0x122dbb7c */
  goto L_122dbb7c;
L_122dbb76:;
  /* 122dbb76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbb79 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122dbb7c:;
  /* 122dbb7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dbb7f push edx */
  push32((uint32_t)(EDX));
  /* 122dbb80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbb83 push eax */
  push32((uint32_t)(EAX));
  /* 122dbb84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dbb87 push ecx */
  push32((uint32_t)(ECX));
  /* 122dbb88 call 0x122de310 */
  push32(0x122dbb8du); f_122de310();
  /* 122dbb8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbb90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbb93 push edx */
  push32((uint32_t)(EDX));
  /* 122dbb94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dbb97 push eax */
  push32((uint32_t)(EAX));
  /* 122dbb98 call 0x122dbef0 */
  push32(0x122dbb9du); f_122dbef0();
  /* 122dbb9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122dbba0:;
  /* 122dbba0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbba4 jne 0x122dbc20 */
  if (!C.zf) goto L_122dbc20;
  /* 122dbba6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbbaa jne 0x122dbbb3 */
  if (!C.zf) goto L_122dbbb3;
  /* 122dbbac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_122dbbb3:;
  /* 122dbbb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbbb6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbbb9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 122dbbbc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 122dbbbf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbbc2 push edx */
  push32((uint32_t)(EDX));
  /* 122dbbc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dbbc5 mov eax, dword ptr [0x12303104] */
  EAX = (r32((uint32_t)(0x12303104)));
  /* 122dbbca push eax */
  push32((uint32_t)(EAX));
  /* 122dbbcb call dword ptr [0x123042b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042b4))), 0x122dbbd1u);
  /* 122dbbd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122dbbd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbbd8 je 0x122dbc20 */
  if (C.zf) goto L_122dbc20;
  /* 122dbbda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbbdd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 122dbbe0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbbe3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122dbbe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dbbe9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbbec jae 0x122dbbf6 */
  if (!C.cf) goto L_122dbbf6;
  /* 122dbbee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dbbf1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122dbbf4 jmp 0x122dbbfc */
  goto L_122dbbfc;
L_122dbbf6:;
  /* 122dbbf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbbf9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_122dbbfc:;
  /* 122dbbfc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dbbff push eax */
  push32((uint32_t)(EAX));
  /* 122dbc00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbc03 push ecx */
  push32((uint32_t)(ECX));
  /* 122dbc04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dbc07 push edx */
  push32((uint32_t)(EDX));
  /* 122dbc08 call 0x122de310 */
  push32(0x122dbc0du); f_122de310();
  /* 122dbc0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbc10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbc13 push eax */
  push32((uint32_t)(EAX));
  /* 122dbc14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dbc17 push ecx */
  push32((uint32_t)(ECX));
  /* 122dbc18 call 0x122dbef0 */
  push32(0x122dbc1du); f_122dbef0();
  /* 122dbc1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122dbc20:;
  /* 122dbc20 push 9 */
  push32((uint32_t)(0x9u));
  /* 122dbc22 call 0x122db5d0 */
  push32(0x122dbc27u); f_122db5d0();
  /* 122dbc27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbc2a jmp 0x122dbc69 */
  goto L_122dbc69;
L_122dbc2c:;
  /* 122dbc2c push 9 */
  push32((uint32_t)(0x9u));
  /* 122dbc2e call 0x122db5d0 */
  push32(0x122dbc33u); f_122db5d0();
  /* 122dbc33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbc36 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbc3a jne 0x122dbc43 */
  if (!C.zf) goto L_122dbc43;
  /* 122dbc3c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_122dbc43:;
  /* 122dbc43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbc46 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbc49 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 122dbc4c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 122dbc4f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbc52 push eax */
  push32((uint32_t)(EAX));
  /* 122dbc53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbc56 push ecx */
  push32((uint32_t)(ECX));
  /* 122dbc57 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dbc59 mov edx, dword ptr [0x12303104] */
  EDX = (r32((uint32_t)(0x12303104)));
  /* 122dbc5f push edx */
  push32((uint32_t)(EDX));
  /* 122dbc60 call dword ptr [0x123042b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042b8))), 0x122dbc66u);
  /* 122dbc66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122dbc69:;
  /* 122dbc69 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbc6d jne 0x122dbc78 */
  if (!C.zf) goto L_122dbc78;
  /* 122dbc6f cmp dword ptr [0x12301940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbc76 jne 0x122dbc7d */
  if (!C.zf) goto L_122dbc7d;
L_122dbc78:;
  /* 122dbc78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dbc7b jmp 0x122dbc96 */
  goto L_122dbc96;
L_122dbc7d:;
  /* 122dbc7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbc80 push eax */
  push32((uint32_t)(EAX));
  /* 122dbc81 call 0x122db870 */
  push32(0x122dbc86u); f_122db870();
  /* 122dbc86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbc89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dbc8b jne 0x122dbc91 */
  if (!C.zf) goto L_122dbc91;
  /* 122dbc8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dbc8f jmp 0x122dbc96 */
  goto L_122dbc96;
L_122dbc91:;
  /* 122dbc91 jmp 0x122dbae6 */
  goto L_122dbae6;
L_122dbc96:;
  /* 122dbc96 mov esp, ebp */
  ESP = (EBP);
  /* 122dbc98 pop ebp */
  EBP = (pop32());
  /* 122dbc99 ret  */
  ESPCHK(0x122dbab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bca0 @ 0x122dbca0 (104 bytes, 38 insns) */
void f_122dbca0(void) {
  FTRACE(0x122dbca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dbca0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dbca1 mov ebp, esp */
  EBP = (ESP);
  /* 122dbca3 push ecx */
  push32((uint32_t)(ECX));
  /* 122dbca4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbca8 jne 0x122dbcac */
  if (!C.zf) goto L_122dbcac;
  /* 122dbcaa jmp 0x122dbd04 */
  goto L_122dbd04;
L_122dbcac:;
  /* 122dbcac push 9 */
  push32((uint32_t)(0x9u));
  /* 122dbcae call 0x122db530 */
  push32(0x122dbcb3u); f_122db530();
  /* 122dbcb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbcb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbcb9 push eax */
  push32((uint32_t)(EAX));
  /* 122dbcba call 0x122dbe30 */
  push32(0x122dbcbfu); f_122dbe30();
  /* 122dbcbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbcc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122dbcc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbcc9 je 0x122dbce7 */
  if (C.zf) goto L_122dbce7;
  /* 122dbccb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbcce push ecx */
  push32((uint32_t)(ECX));
  /* 122dbccf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dbcd2 push edx */
  push32((uint32_t)(EDX));
  /* 122dbcd3 call 0x122dbef0 */
  push32(0x122dbcd8u); f_122dbef0();
  /* 122dbcd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbcdb push 9 */
  push32((uint32_t)(0x9u));
  /* 122dbcdd call 0x122db5d0 */
  push32(0x122dbce2u); f_122db5d0();
  /* 122dbce2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbce5 jmp 0x122dbd04 */
  goto L_122dbd04;
L_122dbce7:;
  /* 122dbce7 push 9 */
  push32((uint32_t)(0x9u));
  /* 122dbce9 call 0x122db5d0 */
  push32(0x122dbceeu); f_122db5d0();
  /* 122dbcee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbcf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbcf4 push eax */
  push32((uint32_t)(EAX));
  /* 122dbcf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dbcf7 mov ecx, dword ptr [0x12303104] */
  ECX = (r32((uint32_t)(0x12303104)));
  /* 122dbcfd push ecx */
  push32((uint32_t)(ECX));
  /* 122dbcfe call dword ptr [0x12304200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304200))), 0x122dbd04u);
L_122dbd04:;
  /* 122dbd04 mov esp, ebp */
  ESP = (EBP);
  /* 122dbd06 pop ebp */
  EBP = (pop32());
  /* 122dbd07 ret  */
  ESPCHK(0x122dbca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd10 @ 0x122dbd10 (116 bytes, 34 insns) */
void f_122dbd10(void) {
  FTRACE(0x122dbd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dbd10 push ebp */
  push32((uint32_t)(EBP));
  /* 122dbd11 mov ebp, esp */
  EBP = (ESP);
  /* 122dbd13 push ecx */
  push32((uint32_t)(ECX));
  /* 122dbd14 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 122dbd1b push 9 */
  push32((uint32_t)(0x9u));
  /* 122dbd1d call 0x122db530 */
  push32(0x122dbd22u); f_122db530();
  /* 122dbd22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbd25 call 0x122dd420 */
  push32(0x122dbd2au); f_122dd420();
  /* 122dbd2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dbd2c jge 0x122dbd35 */
  if ((C.sf==C.of)) goto L_122dbd35;
  /* 122dbd2e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_122dbd35:;
  /* 122dbd35 push 9 */
  push32((uint32_t)(0x9u));
  /* 122dbd37 call 0x122db5d0 */
  push32(0x122dbd3cu); f_122db5d0();
  /* 122dbd3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbd3f push 0 */
  push32((uint32_t)(0x0u));
  /* 122dbd41 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dbd43 mov eax, dword ptr [0x12303104] */
  EAX = (r32((uint32_t)(0x12303104)));
  /* 122dbd48 push eax */
  push32((uint32_t)(EAX));
  /* 122dbd49 call dword ptr [0x12304270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304270))), 0x122dbd4fu);
  /* 122dbd4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dbd51 jne 0x122dbd7d */
  if (!C.zf) goto L_122dbd7d;
  /* 122dbd53 call dword ptr [0x12304250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304250))), 0x122dbd59u);
  /* 122dbd59 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbd5c jne 0x122dbd76 */
  if (!C.zf) goto L_122dbd76;
  /* 122dbd5e call 0x122de700 */
  push32(0x122dbd63u); f_122de700();
  /* 122dbd63 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 122dbd69 call 0x122de6f0 */
  push32(0x122dbd6eu); f_122de6f0();
  /* 122dbd6e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 122dbd74 jmp 0x122dbd7d */
  goto L_122dbd7d;
L_122dbd76:;
  /* 122dbd76 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_122dbd7d:;
  /* 122dbd7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dbd80 mov esp, ebp */
  ESP = (EBP);
  /* 122dbd82 pop ebp */
  EBP = (pop32());
  /* 122dbd83 ret  */
  ESPCHK(0x122dbd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x122dbd90 (10 bytes, 5 insns) */
void f_122dbd90(void) {
  FTRACE(0x122dbd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dbd90 push ebp */
  push32((uint32_t)(EBP));
  /* 122dbd91 mov ebp, esp */
  EBP = (ESP);
  /* 122dbd93 call 0x122dbd10 */
  push32(0x122dbd98u); f_122dbd10();
  /* 122dbd98 pop ebp */
  EBP = (pop32());
  /* 122dbd99 ret  */
  ESPCHK(0x122dbd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bda0 @ 0x122dbda0 (10 bytes, 5 insns) */
void f_122dbda0(void) {
  FTRACE(0x122dbda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dbda0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dbda1 mov ebp, esp */
  EBP = (ESP);
  /* 122dbda3 mov eax, dword ptr [0x12300154] */
  EAX = (r32((uint32_t)(0x12300154)));
  /* 122dbda8 pop ebp */
  EBP = (pop32());
  /* 122dbda9 ret  */
  ESPCHK(0x122dbda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb0 @ 0x122dbdb0 (31 bytes, 11 insns) */
void f_122dbdb0(void) {
  FTRACE(0x122dbdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dbdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dbdb1 mov ebp, esp */
  EBP = (ESP);
  /* 122dbdb3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbdba jbe 0x122dbdc0 */
  if ((C.cf||C.zf)) goto L_122dbdc0;
  /* 122dbdbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dbdbe jmp 0x122dbdcd */
  goto L_122dbdcd;
L_122dbdc0:;
  /* 122dbdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbdc3 mov dword ptr [0x12300154], eax */
  w32((uint32_t)(0x12300154), (EAX));
  /* 122dbdc8 mov eax, 1 */
  EAX = (0x1u);
L_122dbdcd:;
  /* 122dbdcd pop ebp */
  EBP = (pop32());
  /* 122dbdce ret  */
  ESPCHK(0x122dbdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdd0 @ 0x122dbdd0 (89 bytes, 20 insns) */
void f_122dbdd0(void) {
  FTRACE(0x122dbdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dbdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dbdd1 mov ebp, esp */
  EBP = (ESP);
  /* 122dbdd3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 122dbdd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dbdda mov eax, dword ptr [0x12303104] */
  EAX = (r32((uint32_t)(0x12303104)));
  /* 122dbddf push eax */
  push32((uint32_t)(EAX));
  /* 122dbde0 call dword ptr [0x123042b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042b4))), 0x122dbde6u);
  /* 122dbde6 mov dword ptr [0x12301da8], eax */
  w32((uint32_t)(0x12301da8), (EAX));
  /* 122dbdeb cmp dword ptr [0x12301da8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301da8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbdf2 jne 0x122dbdf8 */
  if (!C.zf) goto L_122dbdf8;
  /* 122dbdf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dbdf6 jmp 0x122dbe27 */
  goto L_122dbe27;
L_122dbdf8:;
  /* 122dbdf8 mov ecx, dword ptr [0x12301da8] */
  ECX = (r32((uint32_t)(0x12301da8)));
  /* 122dbdfe mov dword ptr [0x12301d9c], ecx */
  w32((uint32_t)(0x12301d9c), (ECX));
  /* 122dbe04 mov dword ptr [0x12301da0], 0 */
  w32((uint32_t)(0x12301da0), (0x0u));
  /* 122dbe0e mov dword ptr [0x12301da4], 0 */
  w32((uint32_t)(0x12301da4), (0x0u));
  /* 122dbe18 mov dword ptr [0x12301d88], 0x10 */
  w32((uint32_t)(0x12301d88), (0x10u));
  /* 122dbe22 mov eax, 1 */
  EAX = (0x1u);
L_122dbe27:;
  /* 122dbe27 pop ebp */
  EBP = (pop32());
  /* 122dbe28 ret  */
  ESPCHK(0x122dbdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be30 @ 0x122dbe30 (85 bytes, 29 insns) */
void f_122dbe30(void) {
  FTRACE(0x122dbe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dbe30 push ebp */
  push32((uint32_t)(EBP));
  /* 122dbe31 mov ebp, esp */
  EBP = (ESP);
  /* 122dbe33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbe36 mov eax, dword ptr [0x12301da4] */
  EAX = (r32((uint32_t)(0x12301da4)));
  /* 122dbe3b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dbe3e mov ecx, dword ptr [0x12301da8] */
  ECX = (r32((uint32_t)(0x12301da8)));
  /* 122dbe44 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbe46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122dbe49 mov edx, dword ptr [0x12301da8] */
  EDX = (r32((uint32_t)(0x12301da8)));
  /* 122dbe4f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122dbe52:;
  /* 122dbe52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dbe55 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbe58 jae 0x122dbe7f */
  if (!C.cf) goto L_122dbe7f;
  /* 122dbe5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dbe5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbe60 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbe63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122dbe66 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbe6d jae 0x122dbe74 */
  if (!C.cf) goto L_122dbe74;
  /* 122dbe6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dbe72 jmp 0x122dbe81 */
  goto L_122dbe81;
L_122dbe74:;
  /* 122dbe74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dbe77 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbe7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122dbe7d jmp 0x122dbe52 */
  goto L_122dbe52;
L_122dbe7f:;
  /* 122dbe7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122dbe81:;
  /* 122dbe81 mov esp, ebp */
  ESP = (EBP);
  /* 122dbe83 pop ebp */
  EBP = (pop32());
  /* 122dbe84 ret  */
  ESPCHK(0x122dbe30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be90 @ 0x122dbe90 (95 bytes, 33 insns) */
void f_122dbe90(void) {
  FTRACE(0x122dbe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dbe90 push ebp */
  push32((uint32_t)(EBP));
  /* 122dbe91 mov ebp, esp */
  EBP = (ESP);
  /* 122dbe93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbe96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbe99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbe9c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbe9f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122dbea2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dbea5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 122dbea8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122dbeab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dbeb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dbeb3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dbeb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbeb8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122dbebb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122dbebd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dbebf jne 0x122dbee1 */
  if (!C.zf) goto L_122dbee1;
  /* 122dbec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dbec4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 122dbec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dbec9 jne 0x122dbee1 */
  if (!C.zf) goto L_122dbee1;
  /* 122dbecb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dbece and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 122dbed4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dbed6 je 0x122dbee1 */
  if (C.zf) goto L_122dbee1;
  /* 122dbed8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 122dbedf jmp 0x122dbee8 */
  goto L_122dbee8;
L_122dbee1:;
  /* 122dbee1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_122dbee8:;
  /* 122dbee8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dbeeb mov esp, ebp */
  ESP = (EBP);
  /* 122dbeed pop ebp */
  EBP = (pop32());
  /* 122dbeee ret  */
  ESPCHK(0x122dbe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bef0 @ 0x122dbef0 (1485 bytes, 453 insns) */
void f_122dbef0(void) {
  FTRACE(0x122dbef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dbef0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dbef1 mov ebp, esp */
  EBP = (ESP);
  /* 122dbef3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbef9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dbefc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 122dbeff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbf02 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbf05 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbf08 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122dbf0b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dbf0e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 122dbf11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122dbf14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dbf17 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dbf1d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dbf20 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 122dbf27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122dbf2a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dbf2d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbf30 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122dbf33 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dbf36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122dbf38 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbf3b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 122dbf3e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dbf41 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbf44 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 122dbf47 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dbf4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122dbf4c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122dbf4f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dbf52 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 122dbf55 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122dbf58 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dbf5b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122dbf5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dbf60 jne 0x122dc088 */
  if (!C.zf) goto L_122dc088;
  /* 122dbf66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dbf69 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 122dbf6c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbf6f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 122dbf72 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbf76 jbe 0x122dbf7f */
  if ((C.cf||C.zf)) goto L_122dbf7f;
  /* 122dbf78 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_122dbf7f:;
  /* 122dbf7f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dbf82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dbf85 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dbf88 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbf8b jne 0x122dc061 */
  if (!C.zf) goto L_122dc061;
  /* 122dbf91 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dbf95 jae 0x122dbff6 */
  if (!C.cf) goto L_122dbff6;
  /* 122dbf97 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dbf9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dbf9f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dbfa1 not eax */
  EAX = (~(EAX));
  /* 122dbfa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dbfa6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dbfa9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 122dbfad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122dbfaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dbfb2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dbfb5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 122dbfb9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dbfbc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbfbf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 122dbfc2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dbfc5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dbfc8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbfcb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 122dbfce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dbfd1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dbfd4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122dbfd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dbfda jne 0x122dbff4 */
  if (!C.zf) goto L_122dbff4;
  /* 122dbfdc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dbfe1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dbfe4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dbfe6 not eax */
  EAX = (~(EAX));
  /* 122dbfe8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbfeb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122dbfed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122dbfef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dbff2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122dbff4:;
  /* 122dbff4 jmp 0x122dc061 */
  goto L_122dc061;
L_122dbff6:;
  /* 122dbff6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dbff9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dbffc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc001 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc003 not edx */
  EDX = (~(EDX));
  /* 122dc005 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc008 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc00b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 122dc012 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dc014 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc017 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc01a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 122dc021 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc024 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc027 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122dc02a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dc02d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc030 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc033 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 122dc036 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc039 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc03c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122dc040 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dc042 jne 0x122dc061 */
  if (!C.zf) goto L_122dc061;
  /* 122dc044 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dc047 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc04a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc04f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc051 not edx */
  EDX = (~(EDX));
  /* 122dc053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc056 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dc059 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc05b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc05e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_122dc061:;
  /* 122dc061 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc064 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122dc067 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc06a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122dc06d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 122dc070 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc073 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dc076 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc079 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122dc07c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122dc07f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc082 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc085 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_122dc088:;
  /* 122dc088 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc08b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 122dc08e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc091 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122dc094 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc098 jbe 0x122dc0a1 */
  if ((C.cf||C.zf)) goto L_122dc0a1;
  /* 122dc09a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_122dc0a1:;
  /* 122dc0a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dc0a4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122dc0a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dc0a9 jne 0x122dc205 */
  if (!C.zf) goto L_122dc205;
  /* 122dc0af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc0b2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc0b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 122dc0b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dc0bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 122dc0be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc0c1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 122dc0c4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc0c8 jbe 0x122dc0d1 */
  if ((C.cf||C.zf)) goto L_122dc0d1;
  /* 122dc0ca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_122dc0d1:;
  /* 122dc0d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc0d4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc0d7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 122dc0da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc0dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 122dc0e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc0e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 122dc0e6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc0ea jbe 0x122dc0f3 */
  if ((C.cf||C.zf)) goto L_122dc0f3;
  /* 122dc0ec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_122dc0f3:;
  /* 122dc0f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dc0f6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc0f9 je 0x122dc1ff */
  if (C.zf) goto L_122dc1ff;
  /* 122dc0ff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc102 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc105 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dc108 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc10b jne 0x122dc1e1 */
  if (!C.zf) goto L_122dc1e1;
  /* 122dc111 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc115 jae 0x122dc176 */
  if (!C.cf) goto L_122dc176;
  /* 122dc117 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc11c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dc11f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc121 not edx */
  EDX = (~(EDX));
  /* 122dc123 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc126 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc129 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 122dc12d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dc12f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc132 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc135 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 122dc139 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc13c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc13f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122dc142 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dc145 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc148 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc14b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 122dc14e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc151 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc154 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122dc158 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dc15a jne 0x122dc174 */
  if (!C.zf) goto L_122dc174;
  /* 122dc15c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc161 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dc164 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc166 not edx */
  EDX = (~(EDX));
  /* 122dc168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc16b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122dc16d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc16f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc172 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122dc174:;
  /* 122dc174 jmp 0x122dc1e1 */
  goto L_122dc1e1;
L_122dc176:;
  /* 122dc176 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dc179 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc17c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dc181 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dc183 not eax */
  EAX = (~(EAX));
  /* 122dc185 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc188 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc18b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 122dc192 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc197 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc19a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 122dc1a1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc1a4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc1a7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 122dc1aa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dc1ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc1b0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc1b3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 122dc1b6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc1b9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc1bc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122dc1c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dc1c2 jne 0x122dc1e1 */
  if (!C.zf) goto L_122dc1e1;
  /* 122dc1c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dc1c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc1ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dc1cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dc1d1 not eax */
  EAX = (~(EAX));
  /* 122dc1d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc1d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dc1d9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122dc1db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc1de mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_122dc1e1:;
  /* 122dc1e1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc1e4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122dc1e7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc1ea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dc1ed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 122dc1f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc1f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122dc1f6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc1f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122dc1fc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_122dc1ff:;
  /* 122dc1ff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc202 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_122dc205:;
  /* 122dc205 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dc208 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122dc20b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dc20d jne 0x122dc21b */
  if (!C.zf) goto L_122dc21b;
  /* 122dc20f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dc212 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc215 je 0x122dc32b */
  if (C.zf) goto L_122dc32b;
L_122dc21b:;
  /* 122dc21b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dc21e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dc221 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 122dc224 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 122dc227 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc22a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc22d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dc230 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 122dc233 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc236 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc239 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 122dc23c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc23f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc242 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 122dc245 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc248 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dc24b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc24e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122dc251 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc254 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc257 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dc25a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc25d jne 0x122dc32b */
  if (!C.zf) goto L_122dc32b;
  /* 122dc263 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc267 jae 0x122dc2c4 */
  if (!C.cf) goto L_122dc2c4;
  /* 122dc269 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc26c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc26f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122dc273 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc276 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc279 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122dc27c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 122dc27f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc282 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc285 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 122dc288 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dc28a jne 0x122dc2a2 */
  if (!C.zf) goto L_122dc2a2;
  /* 122dc28c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc291 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dc294 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc299 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122dc29b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc29d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc2a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122dc2a2:;
  /* 122dc2a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dc2a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dc2aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dc2ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc2af mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc2b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 122dc2b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc2b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc2bb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc2be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 122dc2c2 jmp 0x122dc32b */
  goto L_122dc32b;
L_122dc2c4:;
  /* 122dc2c4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc2c7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc2ca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122dc2ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc2d1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc2d4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122dc2d7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 122dc2da mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc2dd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc2e0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 122dc2e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dc2e5 jne 0x122dc302 */
  if (!C.zf) goto L_122dc302;
  /* 122dc2e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dc2ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc2ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc2f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc2f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc2f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dc2fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc2fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc2ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_122dc302:;
  /* 122dc302 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dc305 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc308 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dc30d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dc30f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc312 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc315 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 122dc31c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc31e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc321 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122dc324 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_122dc32b:;
  /* 122dc32b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc32e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc331 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 122dc333 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc336 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc339 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc33c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 122dc33f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dc342 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122dc344 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc347 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dc34a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122dc34c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dc34f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc352 jne 0x122dc4b9 */
  if (!C.zf) goto L_122dc4b9;
  /* 122dc358 cmp dword ptr [0x12301da0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301da0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc35f je 0x122dc4a8 */
  if (C.zf) goto L_122dc4a8;
  /* 122dc365 mov eax, dword ptr [0x12301d98] */
  EAX = (r32((uint32_t)(0x12301d98)));
  /* 122dc36a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 122dc36d mov ecx, dword ptr [0x12301da0] */
  ECX = (r32((uint32_t)(0x12301da0)));
  /* 122dc373 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122dc376 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc378 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 122dc37b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 122dc380 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 122dc385 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc388 push eax */
  push32((uint32_t)(EAX));
  /* 122dc389 call dword ptr [0x12304294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304294))), 0x122dc38fu);
  /* 122dc38f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc394 mov ecx, dword ptr [0x12301d98] */
  ECX = (r32((uint32_t)(0x12301d98)));
  /* 122dc39a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc39c mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dc3a1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122dc3a4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc3a6 mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dc3ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122dc3af mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dc3b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dc3b7 mov edx, dword ptr [0x12301d98] */
  EDX = (r32((uint32_t)(0x12301d98)));
  /* 122dc3bd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 122dc3c8 mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dc3cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dc3d0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 122dc3d3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dc3d6 mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dc3db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dc3de mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 122dc3e1 mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dc3e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122dc3ea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 122dc3ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dc3f0 jne 0x122dc406 */
  if (!C.zf) goto L_122dc406;
  /* 122dc3f2 mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dc3f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122dc3fb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 122dc3fd mov ecx, dword ptr [0x12301da0] */
  ECX = (r32((uint32_t)(0x12301da0)));
  /* 122dc403 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_122dc406:;
  /* 122dc406 mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dc40c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc410 jne 0x122dc4a8 */
  if (!C.zf) goto L_122dc4a8;
  /* 122dc416 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 122dc41b push 0 */
  push32((uint32_t)(0x0u));
  /* 122dc41d mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dc422 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122dc425 push ecx */
  push32((uint32_t)(ECX));
  /* 122dc426 call dword ptr [0x12304294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304294))), 0x122dc42cu);
  /* 122dc42c mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dc432 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122dc435 push eax */
  push32((uint32_t)(EAX));
  /* 122dc436 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dc438 mov ecx, dword ptr [0x12303104] */
  ECX = (r32((uint32_t)(0x12303104)));
  /* 122dc43e push ecx */
  push32((uint32_t)(ECX));
  /* 122dc43f call dword ptr [0x12304200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304200))), 0x122dc445u);
  /* 122dc445 mov edx, dword ptr [0x12301da4] */
  EDX = (r32((uint32_t)(0x12301da4)));
  /* 122dc44b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dc44e mov eax, dword ptr [0x12301da8] */
  EAX = (r32((uint32_t)(0x12301da8)));
  /* 122dc453 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc455 mov ecx, dword ptr [0x12301da0] */
  ECX = (r32((uint32_t)(0x12301da0)));
  /* 122dc45b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc45e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc460 push eax */
  push32((uint32_t)(EAX));
  /* 122dc461 mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dc467 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc46a push edx */
  push32((uint32_t)(EDX));
  /* 122dc46b mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dc470 push eax */
  push32((uint32_t)(EAX));
  /* 122dc471 call 0x122dfad0 */
  push32(0x122dc476u); f_122dfad0();
  /* 122dc476 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc479 mov ecx, dword ptr [0x12301da4] */
  ECX = (r32((uint32_t)(0x12301da4)));
  /* 122dc47f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc482 mov dword ptr [0x12301da4], ecx */
  w32((uint32_t)(0x12301da4), (ECX));
  /* 122dc488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc48b cmp edx, dword ptr [0x12301da0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12301da0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc491 jbe 0x122dc49c */
  if ((C.cf||C.zf)) goto L_122dc49c;
  /* 122dc493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc496 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc499 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122dc49c:;
  /* 122dc49c mov ecx, dword ptr [0x12301da8] */
  ECX = (r32((uint32_t)(0x12301da8)));
  /* 122dc4a2 mov dword ptr [0x12301d9c], ecx */
  w32((uint32_t)(0x12301d9c), (ECX));
L_122dc4a8:;
  /* 122dc4a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc4ab mov dword ptr [0x12301da0], edx */
  w32((uint32_t)(0x12301da0), (EDX));
  /* 122dc4b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc4b4 mov dword ptr [0x12301d98], eax */
  w32((uint32_t)(0x12301d98), (EAX));
L_122dc4b9:;
  /* 122dc4b9 mov esp, ebp */
  ESP = (EBP);
  /* 122dc4bb pop ebp */
  EBP = (pop32());
  /* 122dc4bc ret  */
  ESPCHK(0x122dbef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4c0 @ 0x122dc4c0 (1334 bytes, 427 insns) */
void f_122dc4c0(void) {
  FTRACE(0x122dc4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dc4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dc4c1 mov ebp, esp */
  EBP = (ESP);
  /* 122dc4c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc4c6 push esi */
  push32((uint32_t)(ESI));
  /* 122dc4c7 mov eax, dword ptr [0x12301da4] */
  EAX = (r32((uint32_t)(0x12301da4)));
  /* 122dc4cc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dc4cf mov ecx, dword ptr [0x12301da8] */
  ECX = (r32((uint32_t)(0x12301da8)));
  /* 122dc4d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc4d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 122dc4da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dc4dd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc4e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 122dc4e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 122dc4e6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dc4e9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 122dc4ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc4ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122dc4f2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc4f6 jge 0x122dc50c */
  if ((C.sf==C.of)) goto L_122dc50c;
  /* 122dc4f8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122dc4fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc4fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc500 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 122dc503 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 122dc50a jmp 0x122dc521 */
  goto L_122dc521;
L_122dc50c:;
  /* 122dc50c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122dc513 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc516 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc519 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122dc51c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dc51e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_122dc521:;
  /* 122dc521 mov ecx, dword ptr [0x12301d9c] */
  ECX = (r32((uint32_t)(0x12301d9c)));
  /* 122dc527 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_122dc52a:;
  /* 122dc52a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc52d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc530 jae 0x122dc556 */
  if (!C.cf) goto L_122dc556;
  /* 122dc532 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc535 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dc538 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 122dc53a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc53d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc540 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 122dc543 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc545 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dc547 je 0x122dc54b */
  if (C.zf) goto L_122dc54b;
  /* 122dc549 jmp 0x122dc556 */
  goto L_122dc556;
L_122dc54b:;
  /* 122dc54b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc54e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc551 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 122dc554 jmp 0x122dc52a */
  goto L_122dc52a;
L_122dc556:;
  /* 122dc556 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc559 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc55c jne 0x122dc63d */
  if (!C.zf) goto L_122dc63d;
  /* 122dc562 mov eax, dword ptr [0x12301da8] */
  EAX = (r32((uint32_t)(0x12301da8)));
  /* 122dc567 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_122dc56a:;
  /* 122dc56a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc56d cmp ecx, dword ptr [0x12301d9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12301d9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc573 jae 0x122dc599 */
  if (!C.cf) goto L_122dc599;
  /* 122dc575 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc578 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dc57b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 122dc57d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc580 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc583 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 122dc586 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dc588 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dc58a je 0x122dc58e */
  if (C.zf) goto L_122dc58e;
  /* 122dc58c jmp 0x122dc599 */
  goto L_122dc599;
L_122dc58e:;
  /* 122dc58e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc591 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc594 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122dc597 jmp 0x122dc56a */
  goto L_122dc56a;
L_122dc599:;
  /* 122dc599 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc59c cmp ecx, dword ptr [0x12301d9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12301d9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc5a2 jne 0x122dc63d */
  if (!C.zf) goto L_122dc63d;
L_122dc5a8:;
  /* 122dc5a8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc5ab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc5ae jae 0x122dc5c6 */
  if (!C.cf) goto L_122dc5c6;
  /* 122dc5b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc5b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc5b7 je 0x122dc5bb */
  if (C.zf) goto L_122dc5bb;
  /* 122dc5b9 jmp 0x122dc5c6 */
  goto L_122dc5c6;
L_122dc5bb:;
  /* 122dc5bb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc5be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc5c1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 122dc5c4 jmp 0x122dc5a8 */
  goto L_122dc5a8;
L_122dc5c6:;
  /* 122dc5c6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc5c9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc5cc jne 0x122dc617 */
  if (!C.zf) goto L_122dc617;
  /* 122dc5ce mov eax, dword ptr [0x12301da8] */
  EAX = (r32((uint32_t)(0x12301da8)));
  /* 122dc5d3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_122dc5d6:;
  /* 122dc5d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc5d9 cmp ecx, dword ptr [0x12301d9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12301d9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc5df jae 0x122dc5f7 */
  if (!C.cf) goto L_122dc5f7;
  /* 122dc5e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc5e4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc5e8 je 0x122dc5ec */
  if (C.zf) goto L_122dc5ec;
  /* 122dc5ea jmp 0x122dc5f7 */
  goto L_122dc5f7;
L_122dc5ec:;
  /* 122dc5ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc5ef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc5f2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122dc5f5 jmp 0x122dc5d6 */
  goto L_122dc5d6;
L_122dc5f7:;
  /* 122dc5f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc5fa cmp ecx, dword ptr [0x12301d9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12301d9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc600 jne 0x122dc617 */
  if (!C.zf) goto L_122dc617;
  /* 122dc602 call 0x122dca00 */
  push32(0x122dc607u); f_122dca00();
  /* 122dc607 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122dc60a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc60e jne 0x122dc617 */
  if (!C.zf) goto L_122dc617;
  /* 122dc610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dc612 jmp 0x122dc9f1 */
  goto L_122dc9f1;
L_122dc617:;
  /* 122dc617 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc61a push edx */
  push32((uint32_t)(EDX));
  /* 122dc61b call 0x122dcb10 */
  push32(0x122dc620u); f_122dcb10();
  /* 122dc620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc623 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc626 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 122dc629 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122dc62b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc62e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dc631 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc634 jne 0x122dc63d */
  if (!C.zf) goto L_122dc63d;
  /* 122dc636 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dc638 jmp 0x122dc9f1 */
  goto L_122dc9f1;
L_122dc63d:;
  /* 122dc63d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc640 mov dword ptr [0x12301d9c], edx */
  w32((uint32_t)(0x12301d9c), (EDX));
  /* 122dc646 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc649 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dc64c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 122dc64f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc652 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122dc654 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 122dc657 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc65b je 0x122dc680 */
  if (C.zf) goto L_122dc680;
  /* 122dc65d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc660 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc663 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dc666 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 122dc66a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc66d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc670 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc673 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 122dc67a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 122dc67c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dc67e jne 0x122dc6b5 */
  if (!C.zf) goto L_122dc6b5;
L_122dc680:;
  /* 122dc680 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_122dc687:;
  /* 122dc687 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc68a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc68d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dc690 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 122dc694 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc697 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc69a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc69d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 122dc6a4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 122dc6a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dc6a8 jne 0x122dc6b5 */
  if (!C.zf) goto L_122dc6b5;
  /* 122dc6aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc6ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc6b0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 122dc6b3 jmp 0x122dc687 */
  goto L_122dc687;
L_122dc6b5:;
  /* 122dc6b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc6b8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dc6be mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc6c1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 122dc6c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122dc6cb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122dc6d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc6d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc6d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dc6db and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 122dc6df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122dc6e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc6e6 jne 0x122dc702 */
  if (!C.zf) goto L_122dc702;
  /* 122dc6e8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 122dc6ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc6f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc6f5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 122dc6f8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 122dc6ff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_122dc702:;
  /* 122dc702 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc706 jl 0x122dc71b */
  if ((C.sf!=C.of)) goto L_122dc71b;
  /* 122dc708 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dc70b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122dc70d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122dc710 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc713 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc716 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 122dc719 jmp 0x122dc702 */
  goto L_122dc702;
L_122dc71b:;
  /* 122dc71b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc71e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc721 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 122dc725 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122dc728 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc72b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122dc72d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc730 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122dc733 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dc736 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 122dc739 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc73c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122dc73f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc743 jle 0x122dc74c */
  if ((C.zf||C.sf!=C.of)) goto L_122dc74c;
  /* 122dc745 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_122dc74c:;
  /* 122dc74c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dc74f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc752 je 0x122dc970 */
  if (C.zf) goto L_122dc970;
  /* 122dc758 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc75b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc75e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dc761 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc764 jne 0x122dc83a */
  if (!C.zf) goto L_122dc83a;
  /* 122dc76a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc76e jge 0x122dc7cf */
  if ((C.sf==C.of)) goto L_122dc7cf;
  /* 122dc770 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dc775 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc778 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dc77a not eax */
  EAX = (~(EAX));
  /* 122dc77c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc77f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc782 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 122dc786 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc788 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc78b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc78e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 122dc792 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc795 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc798 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 122dc79b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dc79e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc7a1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc7a4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 122dc7a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc7aa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc7ad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122dc7b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dc7b3 jne 0x122dc7cd */
  if (!C.zf) goto L_122dc7cd;
  /* 122dc7b5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dc7ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc7bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dc7bf not eax */
  EAX = (~(EAX));
  /* 122dc7c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc7c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122dc7c6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122dc7c8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc7cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122dc7cd:;
  /* 122dc7cd jmp 0x122dc83a */
  goto L_122dc83a;
L_122dc7cf:;
  /* 122dc7cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc7d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc7d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc7da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc7dc not edx */
  EDX = (~(EDX));
  /* 122dc7de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc7e1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc7e4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 122dc7eb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dc7ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc7f0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc7f3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 122dc7fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc7fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc800 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122dc803 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dc806 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc809 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc80c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 122dc80f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc812 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc815 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122dc819 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dc81b jne 0x122dc83a */
  if (!C.zf) goto L_122dc83a;
  /* 122dc81d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dc820 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc823 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc828 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc82a not edx */
  EDX = (~(EDX));
  /* 122dc82c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc82f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dc832 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dc834 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc837 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_122dc83a:;
  /* 122dc83a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc83d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122dc840 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc843 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122dc846 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 122dc849 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc84c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dc84f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc852 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122dc855 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122dc858 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc85c je 0x122dc970 */
  if (C.zf) goto L_122dc970;
  /* 122dc862 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dc865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc868 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 122dc86b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122dc86e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc871 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dc874 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dc877 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 122dc87a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc87d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dc880 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122dc883 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dc886 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc889 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 122dc88c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc88f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dc892 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc895 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 122dc898 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc89b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc89e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dc8a1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc8a4 jne 0x122dc970 */
  if (!C.zf) goto L_122dc970;
  /* 122dc8aa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc8ae jge 0x122dc90a */
  if ((C.sf==C.of)) goto L_122dc90a;
  /* 122dc8b0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc8b3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc8b6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122dc8ba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc8bd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc8c0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 122dc8c3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122dc8c5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc8c8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc8cb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 122dc8ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dc8d0 jne 0x122dc8e8 */
  if (!C.zf) goto L_122dc8e8;
  /* 122dc8d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dc8d7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dc8da shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dc8dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc8df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122dc8e1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122dc8e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc8e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122dc8e8:;
  /* 122dc8e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc8ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dc8f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc8f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc8f5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc8f8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 122dc8fc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dc8fe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc901 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc904 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 122dc908 jmp 0x122dc970 */
  goto L_122dc970;
L_122dc90a:;
  /* 122dc90a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc90d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc910 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122dc914 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc917 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc91a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 122dc91d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122dc91f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc922 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc925 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 122dc928 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dc92a jne 0x122dc947 */
  if (!C.zf) goto L_122dc947;
  /* 122dc92c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dc92f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc932 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dc937 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dc939 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc93c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dc93f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122dc941 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc944 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_122dc947:;
  /* 122dc947 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dc94a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dc94d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dc952 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dc954 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc957 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc95a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 122dc961 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dc963 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc966 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc969 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_122dc970:;
  /* 122dc970 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc974 je 0x122dc98a */
  if (C.zf) goto L_122dc98a;
  /* 122dc976 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dc97c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122dc97e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc981 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc984 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dc987 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_122dc98a:;
  /* 122dc98a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc98d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc990 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122dc993 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dc996 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc999 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc99c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122dc99e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dc9a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc9a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc9a7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc9aa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 122dc9ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc9b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122dc9b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc9b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122dc9b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dc9ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dc9bd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122dc9bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dc9c1 jne 0x122dc9e3 */
  if (!C.zf) goto L_122dc9e3;
  /* 122dc9c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dc9c6 cmp eax, dword ptr [0x12301da0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12301da0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc9cc jne 0x122dc9e3 */
  if (!C.zf) goto L_122dc9e3;
  /* 122dc9ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc9d1 cmp ecx, dword ptr [0x12301d98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12301d98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dc9d7 jne 0x122dc9e3 */
  if (!C.zf) goto L_122dc9e3;
  /* 122dc9d9 mov dword ptr [0x12301da0], 0 */
  w32((uint32_t)(0x12301da0), (0x0u));
L_122dc9e3:;
  /* 122dc9e3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 122dc9e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dc9e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122dc9eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dc9ee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_122dc9f1:;
  /* 122dc9f1 pop esi */
  ESI = (pop32());
  /* 122dc9f2 mov esp, ebp */
  ESP = (EBP);
  /* 122dc9f4 pop ebp */
  EBP = (pop32());
  /* 122dc9f5 ret  */
  ESPCHK(0x122dc4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca00 @ 0x122dca00 (271 bytes, 78 insns) */
void f_122dca00(void) {
  FTRACE(0x122dca00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dca00 push ebp */
  push32((uint32_t)(EBP));
  /* 122dca01 mov ebp, esp */
  EBP = (ESP);
  /* 122dca03 push ecx */
  push32((uint32_t)(ECX));
  /* 122dca04 mov eax, dword ptr [0x12301da4] */
  EAX = (r32((uint32_t)(0x12301da4)));
  /* 122dca09 cmp eax, dword ptr [0x12301d88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12301d88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dca0f jne 0x122dca5b */
  if (!C.zf) goto L_122dca5b;
  /* 122dca11 mov ecx, dword ptr [0x12301d88] */
  ECX = (r32((uint32_t)(0x12301d88)));
  /* 122dca17 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dca1a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dca1d push ecx */
  push32((uint32_t)(ECX));
  /* 122dca1e mov edx, dword ptr [0x12301da8] */
  EDX = (r32((uint32_t)(0x12301da8)));
  /* 122dca24 push edx */
  push32((uint32_t)(EDX));
  /* 122dca25 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dca27 mov eax, dword ptr [0x12303104] */
  EAX = (r32((uint32_t)(0x12303104)));
  /* 122dca2c push eax */
  push32((uint32_t)(EAX));
  /* 122dca2d call dword ptr [0x123042b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042b8))), 0x122dca33u);
  /* 122dca33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122dca36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dca3a jne 0x122dca43 */
  if (!C.zf) goto L_122dca43;
  /* 122dca3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dca3e jmp 0x122dcb0b */
  goto L_122dcb0b;
L_122dca43:;
  /* 122dca43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dca46 mov dword ptr [0x12301da8], ecx */
  w32((uint32_t)(0x12301da8), (ECX));
  /* 122dca4c mov edx, dword ptr [0x12301d88] */
  EDX = (r32((uint32_t)(0x12301d88)));
  /* 122dca52 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dca55 mov dword ptr [0x12301d88], edx */
  w32((uint32_t)(0x12301d88), (EDX));
L_122dca5b:;
  /* 122dca5b mov eax, dword ptr [0x12301da4] */
  EAX = (r32((uint32_t)(0x12301da4)));
  /* 122dca60 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dca63 mov ecx, dword ptr [0x12301da8] */
  ECX = (r32((uint32_t)(0x12301da8)));
  /* 122dca69 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dca6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122dca6e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 122dca73 push 8 */
  push32((uint32_t)(0x8u));
  /* 122dca75 mov edx, dword ptr [0x12303104] */
  EDX = (r32((uint32_t)(0x12303104)));
  /* 122dca7b push edx */
  push32((uint32_t)(EDX));
  /* 122dca7c call dword ptr [0x123042b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042b4))), 0x122dca82u);
  /* 122dca82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dca85 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 122dca88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dca8b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dca8f jne 0x122dca95 */
  if (!C.zf) goto L_122dca95;
  /* 122dca91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dca93 jmp 0x122dcb0b */
  goto L_122dcb0b;
L_122dca95:;
  /* 122dca95 push 4 */
  push32((uint32_t)(0x4u));
  /* 122dca97 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 122dca9c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 122dcaa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dcaa3 call dword ptr [0x123042bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042bc))), 0x122dcaa9u);
  /* 122dcaa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcaac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 122dcaaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcab2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcab6 jne 0x122dcad2 */
  if (!C.zf) goto L_122dcad2;
  /* 122dcab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcabb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dcabe push ecx */
  push32((uint32_t)(ECX));
  /* 122dcabf push 0 */
  push32((uint32_t)(0x0u));
  /* 122dcac1 mov edx, dword ptr [0x12303104] */
  EDX = (r32((uint32_t)(0x12303104)));
  /* 122dcac7 push edx */
  push32((uint32_t)(EDX));
  /* 122dcac8 call dword ptr [0x12304200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304200))), 0x122dcaceu);
  /* 122dcace xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dcad0 jmp 0x122dcb0b */
  goto L_122dcb0b;
L_122dcad2:;
  /* 122dcad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcad5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122dcadb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcade mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 122dcae5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcae8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 122dcaef mov eax, dword ptr [0x12301da4] */
  EAX = (r32((uint32_t)(0x12301da4)));
  /* 122dcaf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcaf7 mov dword ptr [0x12301da4], eax */
  w32((uint32_t)(0x12301da4), (EAX));
  /* 122dcafc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcaff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 122dcb02 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 122dcb08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122dcb0b:;
  /* 122dcb0b mov esp, ebp */
  ESP = (EBP);
  /* 122dcb0d pop ebp */
  EBP = (pop32());
  /* 122dcb0e ret  */
  ESPCHK(0x122dca00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb10 @ 0x122dcb10 (494 bytes, 149 insns) */
void f_122dcb10(void) {
  FTRACE(0x122dcb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dcb10 push ebp */
  push32((uint32_t)(EBP));
  /* 122dcb11 mov ebp, esp */
  EBP = (ESP);
  /* 122dcb13 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dcb16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dcb19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dcb1c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 122dcb1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dcb22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122dcb25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122dcb28 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_122dcb2f:;
  /* 122dcb2f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcb33 jl 0x122dcb48 */
  if ((C.sf!=C.of)) goto L_122dcb48;
  /* 122dcb35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dcb38 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 122dcb3a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122dcb3d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dcb40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcb43 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 122dcb46 jmp 0x122dcb2f */
  goto L_122dcb2f;
L_122dcb48:;
  /* 122dcb48 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dcb4b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dcb51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcb54 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 122dcb5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122dcb5e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122dcb65 jmp 0x122dcb70 */
  goto L_122dcb70;
L_122dcb67:;
  /* 122dcb67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dcb6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcb6d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_122dcb70:;
  /* 122dcb70 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcb74 jge 0x122dcb96 */
  if ((C.sf==C.of)) goto L_122dcb96;
  /* 122dcb76 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dcb79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dcb7c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 122dcb7f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122dcb82 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcb85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcb88 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 122dcb8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcb8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcb91 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 122dcb94 jmp 0x122dcb67 */
  goto L_122dcb67;
L_122dcb96:;
  /* 122dcb96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dcb99 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 122dcb9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dcb9f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122dcba2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcba4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122dcba7 push 4 */
  push32((uint32_t)(0x4u));
  /* 122dcba9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 122dcbae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 122dcbb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dcbb6 push edx */
  push32((uint32_t)(EDX));
  /* 122dcbb7 call dword ptr [0x123042bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042bc))), 0x122dcbbdu);
  /* 122dcbbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dcbbf jne 0x122dcbc9 */
  if (!C.zf) goto L_122dcbc9;
  /* 122dcbc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122dcbc4 jmp 0x122dccfa */
  goto L_122dccfa;
L_122dcbc9:;
  /* 122dcbc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dcbcc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcbd1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122dcbd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dcbd7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122dcbda jmp 0x122dcbe8 */
  goto L_122dcbe8;
L_122dcbdc:;
  /* 122dcbdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcbdf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcbe5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122dcbe8:;
  /* 122dcbe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcbeb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcbee ja 0x122dcc4d */
  if ((!C.cf&&!C.zf)) goto L_122dcc4d;
  /* 122dcbf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcbf3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 122dcbfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcbfd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 122dcc07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcc0a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcc0d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122dcc10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcc13 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 122dcc19 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcc1c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcc22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcc25 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 122dcc28 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcc2b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dcc31 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcc34 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122dcc37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcc3a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcc3f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122dcc42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dcc45 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 122dcc4b jmp 0x122dcbdc */
  goto L_122dcbdc;
L_122dcc4d:;
  /* 122dcc4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dcc50 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcc56 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122dcc59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dcc5c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcc5f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dcc62 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 122dcc65 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dcc68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122dcc6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122dcc6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcc71 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dcc74 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 122dcc77 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dcc7a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcc7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dcc80 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 122dcc83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dcc86 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122dcc89 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122dcc8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcc8f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dcc92 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 122dcc95 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dcc98 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcc9b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 122dcca3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dcca6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcca9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 122dccb4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dccb7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 122dccbb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dccbe mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 122dccc1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 122dccc4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dccc7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 122dccca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dcccc jne 0x122dccdd */
  if (!C.zf) goto L_122dccdd;
  /* 122dccce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dccd1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dccd4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 122dccd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dccda mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_122dccdd:;
  /* 122dccdd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dcce2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dcce5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dcce7 not edx */
  EDX = (~(EDX));
  /* 122dcce9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dccec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122dccef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dccf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dccf4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122dccf7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_122dccfa:;
  /* 122dccfa mov esp, ebp */
  ESP = (EBP);
  /* 122dccfc pop ebp */
  EBP = (pop32());
  /* 122dccfd ret  */
  ESPCHK(0x122dcb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd00 @ 0x122dcd00 (1515 bytes, 489 insns) */
void f_122dcd00(void) {
  FTRACE(0x122dcd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dcd00 push ebp */
  push32((uint32_t)(EBP));
  /* 122dcd01 mov ebp, esp */
  EBP = (ESP);
  /* 122dcd03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dcd06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122dcd09 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcd0c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 122dcd0e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122dcd11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dcd14 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 122dcd17 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 122dcd1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dcd1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dcd20 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dcd23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122dcd26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dcd29 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 122dcd2c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122dcd2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcd32 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dcd38 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcd3b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 122dcd42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122dcd45 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dcd48 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dcd4b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122dcd4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dcd51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122dcd53 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dcd56 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 122dcd59 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dcd5c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcd5f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 122dcd62 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcd65 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122dcd67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122dcd6a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dcd6d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcd70 jle 0x122dd026 */
  if ((C.zf||C.sf!=C.of)) goto L_122dd026;
  /* 122dcd76 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dcd79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122dcd7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dcd7e jne 0x122dcd8b */
  if (!C.zf) goto L_122dcd8b;
  /* 122dcd80 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dcd83 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcd86 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcd89 jle 0x122dcd92 */
  if ((C.zf||C.sf!=C.of)) goto L_122dcd92;
L_122dcd8b:;
  /* 122dcd8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dcd8d jmp 0x122dd2e7 */
  goto L_122dd2e7;
L_122dcd92:;
  /* 122dcd92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dcd95 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 122dcd98 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dcd9b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122dcd9e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcda2 jbe 0x122dcdab */
  if ((C.cf||C.zf)) goto L_122dcdab;
  /* 122dcda4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_122dcdab:;
  /* 122dcdab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcdae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcdb1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dcdb4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcdb7 jne 0x122dce8d */
  if (!C.zf) goto L_122dce8d;
  /* 122dcdbd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcdc1 jae 0x122dce22 */
  if (!C.cf) goto L_122dce22;
  /* 122dcdc3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dcdc8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dcdcb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dcdcd not edx */
  EDX = (~(EDX));
  /* 122dcdcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcdd2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcdd5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 122dcdd9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dcddb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcdde mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcde1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 122dcde5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcde8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcdeb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122dcdee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dcdf1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcdf4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcdf7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 122dcdfa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcdfd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dce00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122dce04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dce06 jne 0x122dce20 */
  if (!C.zf) goto L_122dce20;
  /* 122dce08 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dce0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dce10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dce12 not edx */
  EDX = (~(EDX));
  /* 122dce14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dce17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122dce19 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dce1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dce1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122dce20:;
  /* 122dce20 jmp 0x122dce8d */
  goto L_122dce8d;
L_122dce22:;
  /* 122dce22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dce25 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dce28 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dce2d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dce2f not eax */
  EAX = (~(EAX));
  /* 122dce31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dce34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dce37 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 122dce3e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122dce40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dce43 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dce46 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 122dce4d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dce50 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dce53 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 122dce56 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dce59 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dce5c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dce5f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 122dce62 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dce65 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dce68 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122dce6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dce6e jne 0x122dce8d */
  if (!C.zf) goto L_122dce8d;
  /* 122dce70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dce73 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dce76 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dce7b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dce7d not eax */
  EAX = (~(EAX));
  /* 122dce7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dce82 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dce85 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122dce87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dce8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_122dce8d:;
  /* 122dce8d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dce90 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122dce93 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dce96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dce99 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 122dce9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dce9f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122dcea2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcea5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122dcea8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 122dceab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dceae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dceb1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dceb4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122dceb7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcebb jle 0x122dd007 */
  if ((C.zf||C.sf!=C.of)) goto L_122dd007;
  /* 122dcec1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dcec4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcec7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 122dceca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dcecd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 122dced0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dced3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 122dced6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dceda jbe 0x122dcee3 */
  if ((C.cf||C.zf)) goto L_122dcee3;
  /* 122dcedc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_122dcee3:;
  /* 122dcee3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dcee6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dcee9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 122dceec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 122dceef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcef2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcef5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dcef8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 122dcefb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcefe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcf01 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 122dcf04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dcf07 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcf0a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 122dcf0d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcf10 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dcf13 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcf16 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122dcf19 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcf1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcf1f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dcf22 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcf25 jne 0x122dcff3 */
  if (!C.zf) goto L_122dcff3;
  /* 122dcf2b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dcf2f jae 0x122dcf8c */
  if (!C.cf) goto L_122dcf8c;
  /* 122dcf31 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcf34 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcf37 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122dcf3b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcf3e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcf41 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122dcf44 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 122dcf47 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcf4a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcf4d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 122dcf50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dcf52 jne 0x122dcf6a */
  if (!C.zf) goto L_122dcf6a;
  /* 122dcf54 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dcf59 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dcf5c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dcf5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dcf61 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122dcf63 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dcf65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dcf68 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122dcf6a:;
  /* 122dcf6a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dcf6f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dcf72 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dcf74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcf77 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcf7a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 122dcf7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122dcf80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcf83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcf86 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 122dcf8a jmp 0x122dcff3 */
  goto L_122dcff3;
L_122dcf8c:;
  /* 122dcf8c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcf8f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcf92 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122dcf96 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcf99 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcf9c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122dcf9f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 122dcfa2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcfa5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dcfa8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 122dcfab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dcfad jne 0x122dcfca */
  if (!C.zf) goto L_122dcfca;
  /* 122dcfaf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dcfb2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dcfb5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dcfba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dcfbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dcfbf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dcfc2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dcfc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dcfc7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_122dcfca:;
  /* 122dcfca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dcfcd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dcfd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dcfd5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dcfd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcfda mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcfdd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 122dcfe4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122dcfe6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dcfe9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dcfec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_122dcff3:;
  /* 122dcff3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcff6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dcff9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 122dcffb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dcffe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd001 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dd004 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_122dd007:;
  /* 122dd007 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dd00a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd00d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd010 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122dd012 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dd015 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd018 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd01b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd01e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 122dd021 jmp 0x122dd2e2 */
  goto L_122dd2e2;
L_122dd026:;
  /* 122dd026 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dd029 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd02c jge 0x122dd2e2 */
  if ((C.sf==C.of)) goto L_122dd2e2;
  /* 122dd032 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dd035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd038 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd03b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122dd03d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122dd040 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd043 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd046 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd049 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 122dd04c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd04f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd052 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122dd055 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dd058 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd05b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122dd05e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dd061 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 122dd064 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd067 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122dd06a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd06e jbe 0x122dd077 */
  if ((C.cf||C.zf)) goto L_122dd077;
  /* 122dd070 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_122dd077:;
  /* 122dd077 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dd07a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 122dd07d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dd07f jne 0x122dd1c0 */
  if (!C.zf) goto L_122dd1c0;
  /* 122dd085 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dd088 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 122dd08b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd08e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122dd091 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd095 jbe 0x122dd09e */
  if ((C.cf||C.zf)) goto L_122dd09e;
  /* 122dd097 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_122dd09e:;
  /* 122dd09e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dd0a1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dd0a4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dd0a7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd0aa jne 0x122dd180 */
  if (!C.zf) goto L_122dd180;
  /* 122dd0b0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd0b4 jae 0x122dd115 */
  if (!C.cf) goto L_122dd115;
  /* 122dd0b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dd0bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dd0be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dd0c0 not edx */
  EDX = (~(EDX));
  /* 122dd0c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dd0c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd0c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 122dd0cc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dd0ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dd0d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd0d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 122dd0d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd0db add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd0de mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122dd0e1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dd0e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd0e7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd0ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 122dd0ed mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd0f0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd0f3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122dd0f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dd0f9 jne 0x122dd113 */
  if (!C.zf) goto L_122dd113;
  /* 122dd0fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dd100 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dd103 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dd105 not edx */
  EDX = (~(EDX));
  /* 122dd107 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dd10a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122dd10c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dd10e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dd111 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122dd113:;
  /* 122dd113 jmp 0x122dd180 */
  goto L_122dd180;
L_122dd115:;
  /* 122dd115 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dd118 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd11b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dd120 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dd122 not eax */
  EAX = (~(EAX));
  /* 122dd124 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dd127 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd12a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 122dd131 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122dd133 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dd136 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd139 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 122dd140 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd143 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd146 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 122dd149 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dd14c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd14f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd152 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 122dd155 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd158 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd15b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122dd15f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dd161 jne 0x122dd180 */
  if (!C.zf) goto L_122dd180;
  /* 122dd163 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dd166 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd169 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dd16e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dd170 not eax */
  EAX = (~(EAX));
  /* 122dd172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dd175 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dd178 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122dd17a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dd17d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_122dd180:;
  /* 122dd180 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dd183 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122dd186 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dd189 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dd18c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 122dd18f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dd192 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122dd195 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dd198 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122dd19b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 122dd19e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dd1a1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd1a4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122dd1a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dd1aa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 122dd1ad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd1b0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122dd1b3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd1b7 jbe 0x122dd1c0 */
  if ((C.cf||C.zf)) goto L_122dd1c0;
  /* 122dd1b9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_122dd1c0:;
  /* 122dd1c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dd1c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dd1c6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 122dd1c9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 122dd1cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd1cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dd1d2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dd1d5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 122dd1d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd1db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dd1de mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122dd1e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dd1e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd1e7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 122dd1ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd1ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dd1f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd1f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 122dd1f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd1f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd1fc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dd1ff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd202 jne 0x122dd2ce */
  if (!C.zf) goto L_122dd2ce;
  /* 122dd208 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd20c jae 0x122dd268 */
  if (!C.cf) goto L_122dd268;
  /* 122dd20e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd211 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd214 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122dd218 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd21b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd21e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 122dd221 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122dd223 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd226 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd229 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 122dd22c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dd22e jne 0x122dd246 */
  if (!C.zf) goto L_122dd246;
  /* 122dd230 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dd235 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dd238 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dd23a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dd23d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122dd23f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122dd241 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dd244 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122dd246:;
  /* 122dd246 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dd24b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dd24e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dd250 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dd253 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd256 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 122dd25a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dd25c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dd25f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd262 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 122dd266 jmp 0x122dd2ce */
  goto L_122dd2ce;
L_122dd268:;
  /* 122dd268 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd26b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd26e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 122dd272 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd275 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd278 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 122dd27b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122dd27d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd280 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd283 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 122dd286 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dd288 jne 0x122dd2a5 */
  if (!C.zf) goto L_122dd2a5;
  /* 122dd28a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dd28d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd290 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122dd295 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122dd297 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dd29a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dd29d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122dd29f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dd2a2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_122dd2a5:;
  /* 122dd2a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dd2a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd2ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dd2b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dd2b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dd2b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd2b8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 122dd2bf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dd2c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dd2c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122dd2c7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_122dd2ce:;
  /* 122dd2ce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd2d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dd2d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122dd2d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd2d9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd2dc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dd2df mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_122dd2e2:;
  /* 122dd2e2 mov eax, 1 */
  EAX = (0x1u);
L_122dd2e7:;
  /* 122dd2e7 mov esp, ebp */
  ESP = (EBP);
  /* 122dd2e9 pop ebp */
  EBP = (pop32());
  /* 122dd2ea ret  */
  ESPCHK(0x122dcd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2f0 @ 0x122dd2f0 (304 bytes, 79 insns) */
void f_122dd2f0(void) {
  FTRACE(0x122dd2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dd2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dd2f1 mov ebp, esp */
  EBP = (ESP);
  /* 122dd2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122dd2f4 cmp dword ptr [0x12301da0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301da0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd2fb je 0x122dd41c */
  if (C.zf) goto L_122dd41c;
  /* 122dd301 mov eax, dword ptr [0x12301d98] */
  EAX = (r32((uint32_t)(0x12301d98)));
  /* 122dd306 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 122dd309 mov ecx, dword ptr [0x12301da0] */
  ECX = (r32((uint32_t)(0x12301da0)));
  /* 122dd30f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122dd312 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd314 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122dd317 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 122dd31c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 122dd321 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dd324 push eax */
  push32((uint32_t)(EAX));
  /* 122dd325 call dword ptr [0x12304294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304294))), 0x122dd32bu);
  /* 122dd32b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dd330 mov ecx, dword ptr [0x12301d98] */
  ECX = (r32((uint32_t)(0x12301d98)));
  /* 122dd336 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dd338 mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dd33d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122dd340 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122dd342 mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dd348 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122dd34b mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dd350 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dd353 mov edx, dword ptr [0x12301d98] */
  EDX = (r32((uint32_t)(0x12301d98)));
  /* 122dd359 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 122dd364 mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dd369 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dd36c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 122dd36f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122dd372 mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dd377 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dd37a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 122dd37d mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dd383 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122dd386 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 122dd38a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dd38c jne 0x122dd3a2 */
  if (!C.zf) goto L_122dd3a2;
  /* 122dd38e mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dd394 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122dd397 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 122dd399 mov ecx, dword ptr [0x12301da0] */
  ECX = (r32((uint32_t)(0x12301da0)));
  /* 122dd39f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_122dd3a2:;
  /* 122dd3a2 mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dd3a8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd3ac jne 0x122dd412 */
  if (!C.zf) goto L_122dd412;
  /* 122dd3ae cmp dword ptr [0x12301da4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301da4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd3b5 jle 0x122dd412 */
  if ((C.zf||C.sf!=C.of)) goto L_122dd412;
  /* 122dd3b7 mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dd3bc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dd3bf push ecx */
  push32((uint32_t)(ECX));
  /* 122dd3c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dd3c2 mov edx, dword ptr [0x12303104] */
  EDX = (r32((uint32_t)(0x12303104)));
  /* 122dd3c8 push edx */
  push32((uint32_t)(EDX));
  /* 122dd3c9 call dword ptr [0x12304200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304200))), 0x122dd3cfu);
  /* 122dd3cf mov eax, dword ptr [0x12301da4] */
  EAX = (r32((uint32_t)(0x12301da4)));
  /* 122dd3d4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dd3d7 mov ecx, dword ptr [0x12301da8] */
  ECX = (r32((uint32_t)(0x12301da8)));
  /* 122dd3dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd3df mov edx, dword ptr [0x12301da0] */
  EDX = (r32((uint32_t)(0x12301da0)));
  /* 122dd3e5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd3e8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd3ea push ecx */
  push32((uint32_t)(ECX));
  /* 122dd3eb mov eax, dword ptr [0x12301da0] */
  EAX = (r32((uint32_t)(0x12301da0)));
  /* 122dd3f0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd3f3 push eax */
  push32((uint32_t)(EAX));
  /* 122dd3f4 mov ecx, dword ptr [0x12301da0] */
  ECX = (r32((uint32_t)(0x12301da0)));
  /* 122dd3fa push ecx */
  push32((uint32_t)(ECX));
  /* 122dd3fb call 0x122dfad0 */
  push32(0x122dd400u); f_122dfad0();
  /* 122dd400 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd403 mov edx, dword ptr [0x12301da4] */
  EDX = (r32((uint32_t)(0x12301da4)));
  /* 122dd409 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd40c mov dword ptr [0x12301da4], edx */
  w32((uint32_t)(0x12301da4), (EDX));
L_122dd412:;
  /* 122dd412 mov dword ptr [0x12301da0], 0 */
  w32((uint32_t)(0x12301da0), (0x0u));
L_122dd41c:;
  /* 122dd41c mov esp, ebp */
  ESP = (EBP);
  /* 122dd41e pop ebp */
  EBP = (pop32());
  /* 122dd41f ret  */
  ESPCHK(0x122dd2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d420 @ 0x122dd420 (1565 bytes, 343 insns) */
void f_122dd420(void) {
  FTRACE(0x122dd420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dd420 push ebp */
  push32((uint32_t)(EBP));
  /* 122dd421 mov ebp, esp */
  EBP = (ESP);
  /* 122dd423 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd429 mov eax, dword ptr [0x12301da4] */
  EAX = (r32((uint32_t)(0x12301da4)));
  /* 122dd42e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dd431 push eax */
  push32((uint32_t)(EAX));
  /* 122dd432 mov ecx, dword ptr [0x12301da8] */
  ECX = (r32((uint32_t)(0x12301da8)));
  /* 122dd438 push ecx */
  push32((uint32_t)(ECX));
  /* 122dd439 call dword ptr [0x12304268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304268))), 0x122dd43fu);
  /* 122dd43f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dd441 je 0x122dd44b */
  if (C.zf) goto L_122dd44b;
  /* 122dd443 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122dd446 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd44b:;
  /* 122dd44b mov edx, dword ptr [0x12301da8] */
  EDX = (r32((uint32_t)(0x12301da8)));
  /* 122dd451 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 122dd457 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 122dd461 jmp 0x122dd472 */
  goto L_122dd472;
L_122dd463:;
  /* 122dd463 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 122dd469 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd46c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_122dd472:;
  /* 122dd472 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 122dd478 cmp ecx, dword ptr [0x12301da4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12301da4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd47e jge 0x122dda37 */
  if ((C.sf==C.of)) goto L_122dda37;
  /* 122dd484 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 122dd48a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122dd48d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 122dd493 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 122dd498 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 122dd49e push ecx */
  push32((uint32_t)(ECX));
  /* 122dd49f call dword ptr [0x12304268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304268))), 0x122dd4a5u);
  /* 122dd4a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dd4a7 je 0x122dd4b3 */
  if (C.zf) goto L_122dd4b3;
  /* 122dd4a9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 122dd4ae jmp 0x122dda39 */
  goto L_122dda39;
L_122dd4b3:;
  /* 122dd4b3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 122dd4b9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 122dd4bc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 122dd4c2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 122dd4c8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd4ce mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 122dd4d1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 122dd4d7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122dd4da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122dd4dd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 122dd4e7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 122dd4f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122dd4f8 jmp 0x122dd503 */
  goto L_122dd503;
L_122dd4fa:;
  /* 122dd4fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dd4fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd500 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_122dd503:;
  /* 122dd503 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd507 jge 0x122dd9fb */
  if ((C.sf==C.of)) goto L_122dd9fb;
  /* 122dd50d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 122dd517 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 122dd521 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 122dd52b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 122dd535 jmp 0x122dd546 */
  goto L_122dd546;
L_122dd537:;
  /* 122dd537 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 122dd53d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd540 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_122dd546:;
  /* 122dd546 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd54d jge 0x122dd562 */
  if ((C.sf==C.of)) goto L_122dd562;
  /* 122dd54f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 122dd555 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 122dd560 jmp 0x122dd537 */
  goto L_122dd537;
L_122dd562:;
  /* 122dd562 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd566 jl 0x122dd99d */
  if ((C.sf!=C.of)) goto L_122dd99d;
  /* 122dd56c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 122dd571 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 122dd577 push ecx */
  push32((uint32_t)(ECX));
  /* 122dd578 call dword ptr [0x12304268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304268))), 0x122dd57eu);
  /* 122dd57e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dd580 je 0x122dd58c */
  if (C.zf) goto L_122dd58c;
  /* 122dd582 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 122dd587 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd58c:;
  /* 122dd58c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 122dd592 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122dd595 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 122dd59f jmp 0x122dd5b0 */
  goto L_122dd5b0;
L_122dd5a1:;
  /* 122dd5a1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 122dd5a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd5aa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_122dd5b0:;
  /* 122dd5b0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd5b7 jge 0x122dd734 */
  if ((C.sf==C.of)) goto L_122dd734;
  /* 122dd5bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dd5c0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd5c3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 122dd5c9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 122dd5cf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd5d5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 122dd5db mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 122dd5e1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd5e5 jne 0x122dd5f2 */
  if (!C.zf) goto L_122dd5f2;
  /* 122dd5e7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 122dd5ed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd5f0 je 0x122dd5fc */
  if (C.zf) goto L_122dd5fc;
L_122dd5f2:;
  /* 122dd5f2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 122dd5f7 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd5fc:;
  /* 122dd5fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 122dd602 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122dd604 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 122dd60a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 122dd610 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 122dd616 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 122dd61c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 122dd61f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dd621 je 0x122dd659 */
  if (C.zf) goto L_122dd659;
  /* 122dd623 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 122dd629 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd62c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 122dd632 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd63c jle 0x122dd648 */
  if ((C.zf||C.sf!=C.of)) goto L_122dd648;
  /* 122dd63e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 122dd643 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd648:;
  /* 122dd648 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 122dd64e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd651 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 122dd657 jmp 0x122dd69b */
  goto L_122dd69b;
L_122dd659:;
  /* 122dd659 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 122dd65f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 122dd662 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd665 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 122dd66b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd672 jle 0x122dd67e */
  if ((C.zf||C.sf!=C.of)) goto L_122dd67e;
  /* 122dd674 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_122dd67e:;
  /* 122dd67e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 122dd684 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 122dd68b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd68e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 122dd694 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_122dd69b:;
  /* 122dd69b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd6a2 jl 0x122dd6bd */
  if ((C.sf!=C.of)) goto L_122dd6bd;
  /* 122dd6a4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 122dd6aa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 122dd6ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dd6af jne 0x122dd6bd */
  if (!C.zf) goto L_122dd6bd;
  /* 122dd6b1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd6bb jle 0x122dd6c7 */
  if ((C.zf||C.sf!=C.of)) goto L_122dd6c7;
L_122dd6bd:;
  /* 122dd6bd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 122dd6c2 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd6c7:;
  /* 122dd6c7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 122dd6cd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd6d3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 122dd6d6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd6dc je 0x122dd6e8 */
  if (C.zf) goto L_122dd6e8;
  /* 122dd6de mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 122dd6e3 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd6e8:;
  /* 122dd6e8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 122dd6ee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd6f4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 122dd6fa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 122dd700 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd706 jb 0x122dd5fc */
  if (C.cf) goto L_122dd5fc;
  /* 122dd70c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 122dd712 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd718 je 0x122dd724 */
  if (C.zf) goto L_122dd724;
  /* 122dd71a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 122dd71f jmp 0x122dda39 */
  goto L_122dda39;
L_122dd724:;
  /* 122dd724 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dd727 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd72c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122dd72f jmp 0x122dd5a1 */
  goto L_122dd5a1;
L_122dd734:;
  /* 122dd734 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dd737 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122dd739 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd73f je 0x122dd74b */
  if (C.zf) goto L_122dd74b;
  /* 122dd741 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 122dd746 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd74b:;
  /* 122dd74b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dd74e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 122dd754 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 122dd75b jmp 0x122dd766 */
  goto L_122dd766;
L_122dd75d:;
  /* 122dd75d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd760 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd763 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_122dd766:;
  /* 122dd766 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd76a jge 0x122dd99d */
  if ((C.sf==C.of)) goto L_122dd99d;
  /* 122dd770 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 122dd77a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 122dd780 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_122dd786:;
  /* 122dd786 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 122dd78c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122dd78f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 122dd795 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 122dd79b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd7a1 je 0x122dd8ca */
  if (C.zf) goto L_122dd8ca;
  /* 122dd7a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd7aa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 122dd7b0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd7b7 je 0x122dd8ca */
  if (C.zf) goto L_122dd8ca;
  /* 122dd7bd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 122dd7c3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd7c9 jb 0x122dd7de */
  if (C.cf) goto L_122dd7de;
  /* 122dd7cb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 122dd7d1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd7d6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd7dc jb 0x122dd7e8 */
  if (C.cf) goto L_122dd7e8;
L_122dd7de:;
  /* 122dd7de mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 122dd7e3 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd7e8:;
  /* 122dd7e8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 122dd7ee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 122dd7f4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 122dd7fa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 122dd800 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd803 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122dd806 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dd809 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd80e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_122dd814:;
  /* 122dd814 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dd817 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd81d je 0x122dd83e */
  if (C.zf) goto L_122dd83e;
  /* 122dd81f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dd822 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd828 jne 0x122dd82c */
  if (!C.zf) goto L_122dd82c;
  /* 122dd82a jmp 0x122dd83e */
  goto L_122dd83e;
L_122dd82c:;
  /* 122dd82c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dd82f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122dd831 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 122dd834 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dd837 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd839 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122dd83c jmp 0x122dd814 */
  goto L_122dd814;
L_122dd83e:;
  /* 122dd83e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dd841 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd847 jne 0x122dd853 */
  if (!C.zf) goto L_122dd853;
  /* 122dd849 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 122dd84e jmp 0x122dda39 */
  goto L_122dda39;
L_122dd853:;
  /* 122dd853 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 122dd859 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122dd85b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 122dd85e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd861 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 122dd867 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd86e jle 0x122dd87a */
  if ((C.zf||C.sf!=C.of)) goto L_122dd87a;
  /* 122dd870 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_122dd87a:;
  /* 122dd87a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 122dd880 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd883 je 0x122dd88f */
  if (C.zf) goto L_122dd88f;
  /* 122dd885 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 122dd88a jmp 0x122dda39 */
  goto L_122dda39;
L_122dd88f:;
  /* 122dd88f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 122dd895 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122dd898 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd89e je 0x122dd8aa */
  if (C.zf) goto L_122dd8aa;
  /* 122dd8a0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 122dd8a5 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd8aa:;
  /* 122dd8aa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 122dd8b0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 122dd8b6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 122dd8bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd8bf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 122dd8c5 jmp 0x122dd786 */
  goto L_122dd786;
L_122dd8ca:;
  /* 122dd8ca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd8d1 je 0x122dd941 */
  if (C.zf) goto L_122dd941;
  /* 122dd8d3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd8d7 jge 0x122dd90b */
  if ((C.sf==C.of)) goto L_122dd90b;
  /* 122dd8d9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dd8de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd8e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dd8e3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 122dd8e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dd8eb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 122dd8f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dd8f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd8f9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dd8fb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 122dd901 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dd903 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 122dd909 jmp 0x122dd941 */
  goto L_122dd941;
L_122dd90b:;
  /* 122dd90b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd90e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd911 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dd916 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dd918 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 122dd91e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dd920 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 122dd926 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd929 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dd92c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122dd931 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122dd933 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 122dd939 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122dd93b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_122dd941:;
  /* 122dd941 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 122dd947 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122dd94a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd950 jne 0x122dd964 */
  if (!C.zf) goto L_122dd964;
  /* 122dd952 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122dd955 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 122dd95b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd962 je 0x122dd96e */
  if (C.zf) goto L_122dd96e;
L_122dd964:;
  /* 122dd964 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 122dd969 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd96e:;
  /* 122dd96e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 122dd974 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122dd977 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd97d je 0x122dd989 */
  if (C.zf) goto L_122dd989;
  /* 122dd97f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 122dd984 jmp 0x122dda39 */
  goto L_122dda39;
L_122dd989:;
  /* 122dd989 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 122dd98f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd992 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 122dd998 jmp 0x122dd75d */
  goto L_122dd75d;
L_122dd99d:;
  /* 122dd99d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dd9a0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 122dd9a6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 122dd9ac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd9b0 jne 0x122dd9ca */
  if (!C.zf) goto L_122dd9ca;
  /* 122dd9b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dd9b5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 122dd9bb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 122dd9c1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dd9c8 je 0x122dd9d1 */
  if (C.zf) goto L_122dd9d1;
L_122dd9ca:;
  /* 122dd9ca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 122dd9cf jmp 0x122dda39 */
  goto L_122dda39;
L_122dd9d1:;
  /* 122dd9d1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 122dd9d7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd9dd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 122dd9e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122dd9e6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dd9eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122dd9ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dd9f1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 122dd9f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122dd9f6 jmp 0x122dd4fa */
  goto L_122dd4fa;
L_122dd9fb:;
  /* 122dd9fb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 122dda01 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 122dda07 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dda09 jne 0x122dda1c */
  if (!C.zf) goto L_122dda1c;
  /* 122dda0b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 122dda11 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 122dda17 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dda1a je 0x122dda23 */
  if (C.zf) goto L_122dda23;
L_122dda1c:;
  /* 122dda1c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 122dda21 jmp 0x122dda39 */
  goto L_122dda39;
L_122dda23:;
  /* 122dda23 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 122dda29 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dda2c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 122dda32 jmp 0x122dd463 */
  goto L_122dd463;
L_122dda37:;
  /* 122dda37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122dda39:;
  /* 122dda39 mov esp, ebp */
  ESP = (EBP);
  /* 122dda3b pop ebp */
  EBP = (pop32());
  /* 122dda3c ret  */
  ESPCHK(0x122dd420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x122dda40 (183 bytes, 58 insns) */
void f_122dda40(void) {
  FTRACE(0x122dda40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dda40 push ebp */
  push32((uint32_t)(EBP));
  /* 122dda41 mov ebp, esp */
  EBP = (ESP);
  /* 122dda43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dda46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dda49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dda4c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dda51 ja 0x122dda6a */
  if ((!C.cf&&!C.zf)) goto L_122dda6a;
  /* 122dda53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dda56 mov edx, dword ptr [0x122ffde8] */
  EDX = (r32((uint32_t)(0x122ffde8)));
  /* 122dda5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dda5e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 122dda62 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 122dda65 jmp 0x122ddaf3 */
  goto L_122ddaf3;
L_122dda6a:;
  /* 122dda6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dda6d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 122dda70 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122dda76 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122dda7c mov edx, dword ptr [0x122ffde8] */
  EDX = (r32((uint32_t)(0x122ffde8)));
  /* 122dda82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dda84 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 122dda88 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 122dda8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dda8f je 0x122ddab3 */
  if (C.zf) goto L_122ddab3;
  /* 122dda91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dda94 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 122dda97 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122dda9d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 122ddaa0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 122ddaa3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 122ddaa6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 122ddaaa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 122ddab1 jmp 0x122ddac4 */
  goto L_122ddac4;
L_122ddab3:;
  /* 122ddab3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 122ddab6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 122ddab9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 122ddabd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_122ddac4:;
  /* 122ddac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 122ddac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122ddac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122ddaca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 122ddacd push ecx */
  push32((uint32_t)(ECX));
  /* 122ddace mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ddad1 push edx */
  push32((uint32_t)(EDX));
  /* 122ddad2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 122ddad5 push eax */
  push32((uint32_t)(EAX));
  /* 122ddad6 push 1 */
  push32((uint32_t)(0x1u));
  /* 122ddad8 call 0x122dfe10 */
  push32(0x122ddaddu); f_122dfe10();
  /* 122ddadd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122ddae2 jne 0x122ddae8 */
  if (!C.zf) goto L_122ddae8;
  /* 122ddae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122ddae6 jmp 0x122ddaf3 */
  goto L_122ddaf3;
L_122ddae8:;
  /* 122ddae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddaeb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122ddaf0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_122ddaf3:;
  /* 122ddaf3 mov esp, ebp */
  ESP = (EBP);
  /* 122ddaf5 pop ebp */
  EBP = (pop32());
  /* 122ddaf6 ret  */
  ESPCHK(0x122dda40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db00 @ 0x122ddb00 (836 bytes, 238 insns) */
void f_122ddb00(void) {
  FTRACE(0x122ddb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122ddb00 push ebp */
  push32((uint32_t)(EBP));
  /* 122ddb01 mov ebp, esp */
  EBP = (ESP);
  /* 122ddb03 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122ddb06 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122ddb08 call 0x122db530 */
  push32(0x122ddb0du); f_122db530();
  /* 122ddb0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122ddb13 push eax */
  push32((uint32_t)(EAX));
  /* 122ddb14 call 0x122dde50 */
  push32(0x122ddb19u); f_122dde50();
  /* 122ddb19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddb1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122ddb1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122ddb22 cmp ecx, dword ptr [0x12301ae8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12301ae8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddb28 jne 0x122ddb3b */
  if (!C.zf) goto L_122ddb3b;
  /* 122ddb2a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122ddb2c call 0x122db5d0 */
  push32(0x122ddb31u); f_122db5d0();
  /* 122ddb31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddb34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122ddb36 jmp 0x122dde40 */
  goto L_122dde40;
L_122ddb3b:;
  /* 122ddb3b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddb3f jne 0x122ddb5c */
  if (!C.zf) goto L_122ddb5c;
  /* 122ddb41 call 0x122ddf30 */
  push32(0x122ddb46u); f_122ddf30();
  /* 122ddb46 call 0x122ddfb0 */
  push32(0x122ddb4bu); f_122ddfb0();
  /* 122ddb4b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122ddb4d call 0x122db5d0 */
  push32(0x122ddb52u); f_122db5d0();
  /* 122ddb52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddb55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122ddb57 jmp 0x122dde40 */
  goto L_122dde40;
L_122ddb5c:;
  /* 122ddb5c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122ddb63 jmp 0x122ddb6e */
  goto L_122ddb6e;
L_122ddb65:;
  /* 122ddb65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddb68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddb6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122ddb6e:;
  /* 122ddb6e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddb72 jae 0x122ddcbf */
  if (!C.cf) goto L_122ddcbf;
  /* 122ddb78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddb7b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122ddb7e mov ecx, dword ptr [eax + 0x12300170] */
  ECX = (r32((uint32_t)(EAX + 0x12300170)));
  /* 122ddb84 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddb87 jne 0x122ddcba */
  if (!C.zf) goto L_122ddcba;
  /* 122ddb8d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122ddb94 jmp 0x122ddb9f */
  goto L_122ddb9f;
L_122ddb96:;
  /* 122ddb96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddb99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddb9c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_122ddb9f:;
  /* 122ddb9f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddba6 jae 0x122ddbb4 */
  if (!C.cf) goto L_122ddbb4;
  /* 122ddba8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddbab mov byte ptr [eax + 0x12301c80], 0 */
  w8((uint32_t)(EAX + 0x12301c80), (0x0u));
  /* 122ddbb2 jmp 0x122ddb96 */
  goto L_122ddb96;
L_122ddbb4:;
  /* 122ddbb4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122ddbbb jmp 0x122ddbc6 */
  goto L_122ddbc6;
L_122ddbbd:;
  /* 122ddbbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122ddbc0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddbc3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_122ddbc6:;
  /* 122ddbc6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddbca jae 0x122ddc47 */
  if (!C.cf) goto L_122ddc47;
  /* 122ddbcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddbcf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122ddbd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122ddbd5 lea ecx, [edx + eax*8 + 0x12300180] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12300180));
  /* 122ddbdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122ddbdf jmp 0x122ddbea */
  goto L_122ddbea;
L_122ddbe1:;
  /* 122ddbe1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ddbe4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddbe7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122ddbea:;
  /* 122ddbea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ddbed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122ddbef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122ddbf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122ddbf3 je 0x122ddc42 */
  if (C.zf) goto L_122ddc42;
  /* 122ddbf5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ddbf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122ddbfa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 122ddbfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122ddbff je 0x122ddc42 */
  if (C.zf) goto L_122ddc42;
  /* 122ddc01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ddc04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122ddc06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122ddc08 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 122ddc0b jmp 0x122ddc16 */
  goto L_122ddc16;
L_122ddc0d:;
  /* 122ddc0d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddc10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddc13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122ddc16:;
  /* 122ddc16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ddc19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122ddc1b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 122ddc1e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddc21 ja 0x122ddc40 */
  if ((!C.cf&&!C.zf)) goto L_122ddc40;
  /* 122ddc23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddc26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122ddc29 mov dl, byte ptr [eax + 0x12301c81] */
  DL = (r8((uint32_t)(EAX + 0x12301c81)));
  /* 122ddc2f or dl, byte ptr [ecx + 0x12300168] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12300168))); DL = (_r); fl_logic(_r,8); }
  /* 122ddc35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddc38 mov byte ptr [eax + 0x12301c81], dl */
  w8((uint32_t)(EAX + 0x12301c81), (DL));
  /* 122ddc3e jmp 0x122ddc0d */
  goto L_122ddc0d;
L_122ddc40:;
  /* 122ddc40 jmp 0x122ddbe1 */
  goto L_122ddbe1;
L_122ddc42:;
  /* 122ddc42 jmp 0x122ddbbd */
  goto L_122ddbbd;
L_122ddc47:;
  /* 122ddc47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122ddc4a mov dword ptr [0x12301ae8], ecx */
  w32((uint32_t)(0x12301ae8), (ECX));
  /* 122ddc50 mov dword ptr [0x12301b6c], 1 */
  w32((uint32_t)(0x12301b6c), (0x1u));
  /* 122ddc5a mov edx, dword ptr [0x12301ae8] */
  EDX = (r32((uint32_t)(0x12301ae8)));
  /* 122ddc60 push edx */
  push32((uint32_t)(EDX));
  /* 122ddc61 call 0x122ddeb0 */
  push32(0x122ddc66u); f_122ddeb0();
  /* 122ddc66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddc69 mov dword ptr [0x12301d84], eax */
  w32((uint32_t)(0x12301d84), (EAX));
  /* 122ddc6e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122ddc75 jmp 0x122ddc80 */
  goto L_122ddc80;
L_122ddc77:;
  /* 122ddc77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122ddc7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddc7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122ddc80:;
  /* 122ddc80 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddc84 jae 0x122ddca4 */
  if (!C.cf) goto L_122ddca4;
  /* 122ddc86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddc89 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122ddc8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122ddc8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122ddc92 mov cx, word ptr [ecx + eax*2 + 0x12300174] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12300174)));
  /* 122ddc9a mov word ptr [edx*2 + 0x12301b60], cx */
  w16((uint32_t)(EDX*2 + 0x12301b60), (CX));
  /* 122ddca2 jmp 0x122ddc77 */
  goto L_122ddc77;
L_122ddca4:;
  /* 122ddca4 call 0x122ddfb0 */
  push32(0x122ddca9u); f_122ddfb0();
  /* 122ddca9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122ddcab call 0x122db5d0 */
  push32(0x122ddcb0u); f_122db5d0();
  /* 122ddcb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddcb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122ddcb5 jmp 0x122dde40 */
  goto L_122dde40;
L_122ddcba:;
  /* 122ddcba jmp 0x122ddb65 */
  goto L_122ddb65;
L_122ddcbf:;
  /* 122ddcbf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 122ddcc2 push edx */
  push32((uint32_t)(EDX));
  /* 122ddcc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122ddcc6 push eax */
  push32((uint32_t)(EAX));
  /* 122ddcc7 call dword ptr [0x123042c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042c0))), 0x122ddccdu);
  /* 122ddccd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddcd0 jne 0x122dde12 */
  if (!C.zf) goto L_122dde12;
  /* 122ddcd6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122ddcdd jmp 0x122ddce8 */
  goto L_122ddce8;
L_122ddcdf:;
  /* 122ddcdf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddce2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddce5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_122ddce8:;
  /* 122ddce8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddcef jae 0x122ddcfd */
  if (!C.cf) goto L_122ddcfd;
  /* 122ddcf1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddcf4 mov byte ptr [edx + 0x12301c80], 0 */
  w8((uint32_t)(EDX + 0x12301c80), (0x0u));
  /* 122ddcfb jmp 0x122ddcdf */
  goto L_122ddcdf;
L_122ddcfd:;
  /* 122ddcfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122ddd00 mov dword ptr [0x12301ae8], eax */
  w32((uint32_t)(0x12301ae8), (EAX));
  /* 122ddd05 mov dword ptr [0x12301d84], 0 */
  w32((uint32_t)(0x12301d84), (0x0u));
  /* 122ddd0f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddd13 jbe 0x122dddce */
  if ((C.cf||C.zf)) goto L_122dddce;
  /* 122ddd19 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 122ddd1c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 122ddd1f jmp 0x122ddd2a */
  goto L_122ddd2a;
L_122ddd21:;
  /* 122ddd21 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122ddd24 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddd27 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_122ddd2a:;
  /* 122ddd2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122ddd2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122ddd2f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122ddd31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122ddd33 je 0x122ddd7c */
  if (C.zf) goto L_122ddd7c;
  /* 122ddd35 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122ddd38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122ddd3a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 122ddd3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122ddd3f je 0x122ddd7c */
  if (C.zf) goto L_122ddd7c;
  /* 122ddd41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122ddd44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122ddd46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122ddd48 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 122ddd4b jmp 0x122ddd56 */
  goto L_122ddd56;
L_122ddd4d:;
  /* 122ddd4d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddd50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddd53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122ddd56:;
  /* 122ddd56 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122ddd59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122ddd5b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 122ddd5e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddd61 ja 0x122ddd7a */
  if ((!C.cf&&!C.zf)) goto L_122ddd7a;
  /* 122ddd63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddd66 mov cl, byte ptr [eax + 0x12301c81] */
  CL = (r8((uint32_t)(EAX + 0x12301c81)));
  /* 122ddd6c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 122ddd6f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddd72 mov byte ptr [edx + 0x12301c81], cl */
  w8((uint32_t)(EDX + 0x12301c81), (CL));
  /* 122ddd78 jmp 0x122ddd4d */
  goto L_122ddd4d;
L_122ddd7a:;
  /* 122ddd7a jmp 0x122ddd21 */
  goto L_122ddd21;
L_122ddd7c:;
  /* 122ddd7c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 122ddd83 jmp 0x122ddd8e */
  goto L_122ddd8e;
L_122ddd85:;
  /* 122ddd85 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddd88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddd8b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122ddd8e:;
  /* 122ddd8e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddd95 jae 0x122dddae */
  if (!C.cf) goto L_122dddae;
  /* 122ddd97 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddd9a mov dl, byte ptr [ecx + 0x12301c81] */
  DL = (r8((uint32_t)(ECX + 0x12301c81)));
  /* 122ddda0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 122ddda3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122ddda6 mov byte ptr [eax + 0x12301c81], dl */
  w8((uint32_t)(EAX + 0x12301c81), (DL));
  /* 122dddac jmp 0x122ddd85 */
  goto L_122ddd85;
L_122dddae:;
  /* 122dddae mov ecx, dword ptr [0x12301ae8] */
  ECX = (r32((uint32_t)(0x12301ae8)));
  /* 122dddb4 push ecx */
  push32((uint32_t)(ECX));
  /* 122dddb5 call 0x122ddeb0 */
  push32(0x122dddbau); f_122ddeb0();
  /* 122dddba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dddbd mov dword ptr [0x12301d84], eax */
  w32((uint32_t)(0x12301d84), (EAX));
  /* 122dddc2 mov dword ptr [0x12301b6c], 1 */
  w32((uint32_t)(0x12301b6c), (0x1u));
  /* 122dddcc jmp 0x122dddd8 */
  goto L_122dddd8;
L_122dddce:;
  /* 122dddce mov dword ptr [0x12301b6c], 0 */
  w32((uint32_t)(0x12301b6c), (0x0u));
L_122dddd8:;
  /* 122dddd8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122ddddf jmp 0x122dddea */
  goto L_122dddea;
L_122ddde1:;
  /* 122ddde1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122ddde4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddde7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122dddea:;
  /* 122dddea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dddee jae 0x122dddff */
  if (!C.cf) goto L_122dddff;
  /* 122dddf0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dddf3 mov word ptr [eax*2 + 0x12301b60], 0 */
  w16((uint32_t)(EAX*2 + 0x12301b60), (0x0u));
  /* 122dddfd jmp 0x122ddde1 */
  goto L_122ddde1;
L_122dddff:;
  /* 122dddff call 0x122ddfb0 */
  push32(0x122dde04u); f_122ddfb0();
  /* 122dde04 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122dde06 call 0x122db5d0 */
  push32(0x122dde0bu); f_122db5d0();
  /* 122dde0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dde0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dde10 jmp 0x122dde40 */
  goto L_122dde40;
L_122dde12:;
  /* 122dde12 cmp dword ptr [0x12301948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dde19 je 0x122dde33 */
  if (C.zf) goto L_122dde33;
  /* 122dde1b call 0x122ddf30 */
  push32(0x122dde20u); f_122ddf30();
  /* 122dde20 call 0x122ddfb0 */
  push32(0x122dde25u); f_122ddfb0();
  /* 122dde25 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122dde27 call 0x122db5d0 */
  push32(0x122dde2cu); f_122db5d0();
  /* 122dde2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dde2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dde31 jmp 0x122dde40 */
  goto L_122dde40;
L_122dde33:;
  /* 122dde33 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122dde35 call 0x122db5d0 */
  push32(0x122dde3au); f_122db5d0();
  /* 122dde3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dde3d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_122dde40:;
  /* 122dde40 mov esp, ebp */
  ESP = (EBP);
  /* 122dde42 pop ebp */
  EBP = (pop32());
  /* 122dde43 ret  */
  ESPCHK(0x122ddb00u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x122dde50 (89 bytes, 21 insns) */
void f_122dde50(void) {
  FTRACE(0x122dde50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dde50 push ebp */
  push32((uint32_t)(EBP));
  /* 122dde51 mov ebp, esp */
  EBP = (ESP);
  /* 122dde53 mov dword ptr [0x12301948], 0 */
  w32((uint32_t)(0x12301948), (0x0u));
  /* 122dde5d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dde61 jne 0x122dde75 */
  if (!C.zf) goto L_122dde75;
  /* 122dde63 mov dword ptr [0x12301948], 1 */
  w32((uint32_t)(0x12301948), (0x1u));
  /* 122dde6d call dword ptr [0x123042c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042c8))), 0x122dde73u);
  /* 122dde73 jmp 0x122ddea7 */
  goto L_122ddea7;
L_122dde75:;
  /* 122dde75 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dde79 jne 0x122dde8d */
  if (!C.zf) goto L_122dde8d;
  /* 122dde7b mov dword ptr [0x12301948], 1 */
  w32((uint32_t)(0x12301948), (0x1u));
  /* 122dde85 call dword ptr [0x123042c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042c4))), 0x122dde8bu);
  /* 122dde8b jmp 0x122ddea7 */
  goto L_122ddea7;
L_122dde8d:;
  /* 122dde8d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dde91 jne 0x122ddea4 */
  if (!C.zf) goto L_122ddea4;
  /* 122dde93 mov dword ptr [0x12301948], 1 */
  w32((uint32_t)(0x12301948), (0x1u));
  /* 122dde9d mov eax, dword ptr [0x12301970] */
  EAX = (r32((uint32_t)(0x12301970)));
  /* 122ddea2 jmp 0x122ddea7 */
  goto L_122ddea7;
L_122ddea4:;
  /* 122ddea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_122ddea7:;
  /* 122ddea7 pop ebp */
  EBP = (pop32());
  /* 122ddea8 ret  */
  ESPCHK(0x122dde50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000deb0 @ 0x122ddeb0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_122ddeb0(void) {
  FTRACE(0x122ddeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122ddeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 122ddeb1 mov ebp, esp */
  EBP = (ESP);
  /* 122ddeb3 push ecx */
  push32((uint32_t)(ECX));
  /* 122ddeb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122ddeb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122ddeba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddebd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122ddec3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122ddec6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddeca ja 0x122ddefa */
  if ((!C.cf&&!C.zf)) goto L_122ddefa;
  /* 122ddecc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddecf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122dded1 mov dl, byte ptr [eax + 0x122ddf14] */
  DL = (r8((uint32_t)(EAX + 0x122ddf14)));
  /* 122dded7 jmp dword ptr [edx*4 + 0x122ddf00] */
  switch (EDX) {
    case 0: goto L_122ddede;
    case 1: goto L_122ddee5;
    case 2: goto L_122ddeec;
    case 3: goto L_122ddef3;
    case 4: goto L_122ddefa;
    default: x86_unimpl("switch@0x122dded7 out of table"); return;
  }
L_122ddede:;
  /* 122ddede mov eax, 0x411 */
  EAX = (0x411u);
  /* 122ddee3 jmp 0x122ddefc */
  goto L_122ddefc;
L_122ddee5:;
  /* 122ddee5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 122ddeea jmp 0x122ddefc */
  goto L_122ddefc;
L_122ddeec:;
  /* 122ddeec mov eax, 0x412 */
  EAX = (0x412u);
  /* 122ddef1 jmp 0x122ddefc */
  goto L_122ddefc;
L_122ddef3:;
  /* 122ddef3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 122ddef8 jmp 0x122ddefc */
  goto L_122ddefc;
L_122ddefa:;
  /* 122ddefa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122ddefc:;
  /* 122ddefc mov esp, ebp */
  ESP = (EBP);
  /* 122ddefe pop ebp */
  EBP = (pop32());
  /* 122ddeff ret  */
  ESPCHK(0x122ddeb0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x122ddf30 (116 bytes, 29 insns) */
void f_122ddf30(void) {
  FTRACE(0x122ddf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122ddf30 push ebp */
  push32((uint32_t)(EBP));
  /* 122ddf31 mov ebp, esp */
  EBP = (ESP);
  /* 122ddf33 push ecx */
  push32((uint32_t)(ECX));
  /* 122ddf34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122ddf3b jmp 0x122ddf46 */
  goto L_122ddf46;
L_122ddf3d:;
  /* 122ddf3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddf40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddf43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122ddf46:;
  /* 122ddf46 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddf4d jge 0x122ddf5b */
  if ((C.sf==C.of)) goto L_122ddf5b;
  /* 122ddf4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddf52 mov byte ptr [ecx + 0x12301c80], 0 */
  w8((uint32_t)(ECX + 0x12301c80), (0x0u));
  /* 122ddf59 jmp 0x122ddf3d */
  goto L_122ddf3d;
L_122ddf5b:;
  /* 122ddf5b mov dword ptr [0x12301ae8], 0 */
  w32((uint32_t)(0x12301ae8), (0x0u));
  /* 122ddf65 mov dword ptr [0x12301b6c], 0 */
  w32((uint32_t)(0x12301b6c), (0x0u));
  /* 122ddf6f mov dword ptr [0x12301d84], 0 */
  w32((uint32_t)(0x12301d84), (0x0u));
  /* 122ddf79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122ddf80 jmp 0x122ddf8b */
  goto L_122ddf8b;
L_122ddf82:;
  /* 122ddf82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddf85 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddf88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122ddf8b:;
  /* 122ddf8b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddf8f jge 0x122ddfa0 */
  if ((C.sf==C.of)) goto L_122ddfa0;
  /* 122ddf91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ddf94 mov word ptr [eax*2 + 0x12301b60], 0 */
  w16((uint32_t)(EAX*2 + 0x12301b60), (0x0u));
  /* 122ddf9e jmp 0x122ddf82 */
  goto L_122ddf82;
L_122ddfa0:;
  /* 122ddfa0 mov esp, ebp */
  ESP = (EBP);
  /* 122ddfa2 pop ebp */
  EBP = (pop32());
  /* 122ddfa3 ret  */
  ESPCHK(0x122ddf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfb0 @ 0x122ddfb0 (770 bytes, 175 insns) */
void f_122ddfb0(void) {
  FTRACE(0x122ddfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122ddfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 122ddfb1 mov ebp, esp */
  EBP = (ESP);
  /* 122ddfb3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122ddfb9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 122ddfbf push eax */
  push32((uint32_t)(EAX));
  /* 122ddfc0 mov ecx, dword ptr [0x12301ae8] */
  ECX = (r32((uint32_t)(0x12301ae8)));
  /* 122ddfc6 push ecx */
  push32((uint32_t)(ECX));
  /* 122ddfc7 call dword ptr [0x123042c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042c0))), 0x122ddfcdu);
  /* 122ddfcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddfd0 jne 0x122de1e9 */
  if (!C.zf) goto L_122de1e9;
  /* 122ddfd6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 122ddfe0 jmp 0x122ddff1 */
  goto L_122ddff1;
L_122ddfe2:;
  /* 122ddfe2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122ddfe8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ddfeb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_122ddff1:;
  /* 122ddff1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ddffb jae 0x122de012 */
  if (!C.cf) goto L_122de012;
  /* 122ddffd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de003 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 122de009 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 122de010 jmp 0x122ddfe2 */
  goto L_122ddfe2;
L_122de012:;
  /* 122de012 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 122de019 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 122de01f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122de022 jmp 0x122de02d */
  goto L_122de02d;
L_122de024:;
  /* 122de024 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de027 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de02a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122de02d:;
  /* 122de02d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de030 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122de032 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122de034 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122de036 je 0x122de078 */
  if (C.zf) goto L_122de078;
  /* 122de038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de03b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122de03d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122de03f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 122de045 jmp 0x122de056 */
  goto L_122de056;
L_122de047:;
  /* 122de047 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de04d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de050 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_122de056:;
  /* 122de056 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de059 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122de05b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 122de05e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de064 ja 0x122de076 */
  if ((!C.cf&&!C.zf)) goto L_122de076;
  /* 122de066 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de06c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 122de074 jmp 0x122de047 */
  goto L_122de047;
L_122de076:;
  /* 122de076 jmp 0x122de024 */
  goto L_122de024;
L_122de078:;
  /* 122de078 push 0 */
  push32((uint32_t)(0x0u));
  /* 122de07a mov eax, dword ptr [0x12301d84] */
  EAX = (r32((uint32_t)(0x12301d84)));
  /* 122de07f push eax */
  push32((uint32_t)(EAX));
  /* 122de080 mov ecx, dword ptr [0x12301ae8] */
  ECX = (r32((uint32_t)(0x12301ae8)));
  /* 122de086 push ecx */
  push32((uint32_t)(ECX));
  /* 122de087 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 122de08d push edx */
  push32((uint32_t)(EDX));
  /* 122de08e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122de093 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 122de099 push eax */
  push32((uint32_t)(EAX));
  /* 122de09a push 1 */
  push32((uint32_t)(0x1u));
  /* 122de09c call 0x122dfe10 */
  push32(0x122de0a1u); f_122dfe10();
  /* 122de0a1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122de0a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122de0a6 mov ecx, dword ptr [0x12301ae8] */
  ECX = (r32((uint32_t)(0x12301ae8)));
  /* 122de0ac push ecx */
  push32((uint32_t)(ECX));
  /* 122de0ad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122de0b2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 122de0b8 push edx */
  push32((uint32_t)(EDX));
  /* 122de0b9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122de0be lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 122de0c4 push eax */
  push32((uint32_t)(EAX));
  /* 122de0c5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122de0ca mov ecx, dword ptr [0x12301d84] */
  ECX = (r32((uint32_t)(0x12301d84)));
  /* 122de0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 122de0d1 call 0x122dffd0 */
  push32(0x122de0d6u); f_122dffd0();
  /* 122de0d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122de0d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122de0db mov edx, dword ptr [0x12301ae8] */
  EDX = (r32((uint32_t)(0x12301ae8)));
  /* 122de0e1 push edx */
  push32((uint32_t)(EDX));
  /* 122de0e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122de0e7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 122de0ed push eax */
  push32((uint32_t)(EAX));
  /* 122de0ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122de0f3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 122de0f9 push ecx */
  push32((uint32_t)(ECX));
  /* 122de0fa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 122de0ff mov edx, dword ptr [0x12301d84] */
  EDX = (r32((uint32_t)(0x12301d84)));
  /* 122de105 push edx */
  push32((uint32_t)(EDX));
  /* 122de106 call 0x122dffd0 */
  push32(0x122de10bu); f_122dffd0();
  /* 122de10b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122de10e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 122de118 jmp 0x122de129 */
  goto L_122de129;
L_122de11a:;
  /* 122de11a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de120 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de123 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_122de129:;
  /* 122de129 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de133 jae 0x122de1e4 */
  if (!C.cf) goto L_122de1e4;
  /* 122de139 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de13f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122de141 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 122de149 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 122de14c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122de14e je 0x122de186 */
  if (C.zf) goto L_122de186;
  /* 122de150 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de156 mov cl, byte ptr [eax + 0x12301c81] */
  CL = (r8((uint32_t)(EAX + 0x12301c81)));
  /* 122de15c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 122de15f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de165 mov byte ptr [edx + 0x12301c81], cl */
  w8((uint32_t)(EDX + 0x12301c81), (CL));
  /* 122de16b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de171 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de177 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 122de17e mov byte ptr [eax + 0x12301b80], dl */
  w8((uint32_t)(EAX + 0x12301b80), (DL));
  /* 122de184 jmp 0x122de1df */
  goto L_122de1df;
L_122de186:;
  /* 122de186 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de18c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122de18e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 122de196 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 122de199 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122de19b je 0x122de1d2 */
  if (C.zf) goto L_122de1d2;
  /* 122de19d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de1a3 mov al, byte ptr [edx + 0x12301c81] */
  AL = (r8((uint32_t)(EDX + 0x12301c81)));
  /* 122de1a9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 122de1ab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de1b1 mov byte ptr [ecx + 0x12301c81], al */
  w8((uint32_t)(ECX + 0x12301c81), (AL));
  /* 122de1b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de1bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de1c3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 122de1ca mov byte ptr [edx + 0x12301b80], cl */
  w8((uint32_t)(EDX + 0x12301b80), (CL));
  /* 122de1d0 jmp 0x122de1df */
  goto L_122de1df;
L_122de1d2:;
  /* 122de1d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de1d8 mov byte ptr [edx + 0x12301b80], 0 */
  w8((uint32_t)(EDX + 0x12301b80), (0x0u));
L_122de1df:;
  /* 122de1df jmp 0x122de11a */
  goto L_122de11a;
L_122de1e4:;
  /* 122de1e4 jmp 0x122de2ae */
  goto L_122de2ae;
L_122de1e9:;
  /* 122de1e9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 122de1f3 jmp 0x122de204 */
  goto L_122de204;
L_122de1f5:;
  /* 122de1f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de1fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de1fe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_122de204:;
  /* 122de204 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de20e jae 0x122de2ae */
  if (!C.cf) goto L_122de2ae;
  /* 122de214 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de21b jb 0x122de258 */
  if (C.cf) goto L_122de258;
  /* 122de21d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de224 ja 0x122de258 */
  if ((!C.cf&&!C.zf)) goto L_122de258;
  /* 122de226 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de22c mov dl, byte ptr [ecx + 0x12301c81] */
  DL = (r8((uint32_t)(ECX + 0x12301c81)));
  /* 122de232 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 122de235 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de23b mov byte ptr [eax + 0x12301c81], dl */
  w8((uint32_t)(EAX + 0x12301c81), (DL));
  /* 122de241 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de247 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de24a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de250 mov byte ptr [edx + 0x12301b80], cl */
  w8((uint32_t)(EDX + 0x12301b80), (CL));
  /* 122de256 jmp 0x122de2a9 */
  goto L_122de2a9;
L_122de258:;
  /* 122de258 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de25f jb 0x122de29c */
  if (C.cf) goto L_122de29c;
  /* 122de261 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de268 ja 0x122de29c */
  if ((!C.cf&&!C.zf)) goto L_122de29c;
  /* 122de26a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de270 mov cl, byte ptr [eax + 0x12301c81] */
  CL = (r8((uint32_t)(EAX + 0x12301c81)));
  /* 122de276 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 122de279 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de27f mov byte ptr [edx + 0x12301c81], cl */
  w8((uint32_t)(EDX + 0x12301c81), (CL));
  /* 122de285 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de28b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122de28e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de294 mov byte ptr [ecx + 0x12301b80], al */
  w8((uint32_t)(ECX + 0x12301b80), (AL));
  /* 122de29a jmp 0x122de2a9 */
  goto L_122de2a9;
L_122de29c:;
  /* 122de29c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 122de2a2 mov byte ptr [edx + 0x12301b80], 0 */
  w8((uint32_t)(EDX + 0x12301b80), (0x0u));
L_122de2a9:;
  /* 122de2a9 jmp 0x122de1f5 */
  goto L_122de1f5;
L_122de2ae:;
  /* 122de2ae mov esp, ebp */
  ESP = (EBP);
  /* 122de2b0 pop ebp */
  EBP = (pop32());
  /* 122de2b1 ret  */
  ESPCHK(0x122ddfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2c0 @ 0x122de2c0 (23 bytes, 9 insns) */
void f_122de2c0(void) {
  FTRACE(0x122de2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122de2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122de2c1 mov ebp, esp */
  EBP = (ESP);
  /* 122de2c3 cmp dword ptr [0x12301b6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301b6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de2ca je 0x122de2d3 */
  if (C.zf) goto L_122de2d3;
  /* 122de2cc mov eax, dword ptr [0x12301ae8] */
  EAX = (r32((uint32_t)(0x12301ae8)));
  /* 122de2d1 jmp 0x122de2d5 */
  goto L_122de2d5;
L_122de2d3:;
  /* 122de2d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122de2d5:;
  /* 122de2d5 pop ebp */
  EBP = (pop32());
  /* 122de2d6 ret  */
  ESPCHK(0x122de2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2e0 @ 0x122de2e0 (34 bytes, 10 insns) */
void f_122de2e0(void) {
  FTRACE(0x122de2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122de2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122de2e1 mov ebp, esp */
  EBP = (ESP);
  /* 122de2e3 cmp dword ptr [0x12303270], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12303270))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de2ea jne 0x122de300 */
  if (!C.zf) goto L_122de300;
  /* 122de2ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 122de2ee call 0x122ddb00 */
  push32(0x122de2f3u); f_122ddb00();
  /* 122de2f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122de2f6 mov dword ptr [0x12303270], 1 */
  w32((uint32_t)(0x12303270), (0x1u));
L_122de300:;
  /* 122de300 pop ebp */
  EBP = (pop32());
  /* 122de301 ret  */
  ESPCHK(0x122de2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e310 @ 0x122de310 (664 bytes, 261 insns) [15 switch table(s)] */
void f_122de310(void) {
  FTRACE(0x122de310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122de310 push ebp */
  push32((uint32_t)(EBP));
  /* 122de311 mov ebp, esp */
  EBP = (ESP);
  /* 122de313 push edi */
  push32((uint32_t)(EDI));
  /* 122de314 push esi */
  push32((uint32_t)(ESI));
  /* 122de315 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 122de318 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122de31b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 122de31e mov eax, ecx */
  EAX = (ECX);
  /* 122de320 mov edx, ecx */
  EDX = (ECX);
  /* 122de322 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de324 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de326 jbe 0x122de330 */
  if ((C.cf||C.zf)) goto L_122de330;
  /* 122de328 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de32a jb 0x122de4a8 */
  if (C.cf) goto L_122de4a8;
L_122de330:;
  /* 122de330 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 122de336 jne 0x122de34c */
  if (!C.zf) goto L_122de34c;
  /* 122de338 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122de33b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 122de33e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de341 jb 0x122de36c */
  if (C.cf) goto L_122de36c;
  /* 122de343 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122de345 jmp dword ptr [edx*4 + 0x122de458] */
  switch (EDX) {
    case 0: goto L_122de468;
    case 1: goto L_122de470;
    case 2: goto L_122de47c;
    case 3: goto L_122de490;
    default: x86_unimpl("switch@0x122de345 out of table"); return;
  }
L_122de34c:;
  /* 122de34c mov eax, edi */
  EAX = (EDI);
  /* 122de34e mov edx, 3 */
  EDX = (0x3u);
  /* 122de353 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122de356 jb 0x122de364 */
  if (C.cf) goto L_122de364;
  /* 122de358 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 122de35b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de35d jmp dword ptr [eax*4 + 0x122de370] */
  switch (EAX) {
    case 1: goto L_122de380;
    case 2: goto L_122de3ac;
    case 3: goto L_122de3d0;
    default: x86_unimpl("switch@0x122de35d out of table"); return;
  }
L_122de364:;
  /* 122de364 jmp dword ptr [ecx*4 + 0x122de468] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x122de468)))); return;
  /* 122de36b nop  */
  /* nop */
L_122de36c:;
  /* 122de36c jmp dword ptr [ecx*4 + 0x122de3ec] */
  switch (ECX) {
    case 0: goto L_122de44f;
    case 1: goto L_122de43c;
    case 2: goto L_122de434;
    case 3: goto L_122de42c;
    case 4: goto L_122de424;
    case 5: goto L_122de41c;
    case 6: goto L_122de414;
    case 7: goto L_122de40c;
    default: x86_unimpl("switch@0x122de36c out of table"); return;
  }
  /* 122de373 nop  */
  /* nop */
L_122de380:;
  /* 122de380 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122de382 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122de384 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122de386 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122de389 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122de38c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122de38f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122de392 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122de395 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122de398 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122de39b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de39e jb 0x122de36c */
  if (C.cf) goto L_122de36c;
  /* 122de3a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122de3a2 jmp dword ptr [edx*4 + 0x122de458] */
  switch (EDX) {
    case 0: goto L_122de468;
    case 1: goto L_122de470;
    case 2: goto L_122de47c;
    case 3: goto L_122de490;
    default: x86_unimpl("switch@0x122de3a2 out of table"); return;
  }
  /* 122de3a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122de3ac:;
  /* 122de3ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122de3ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122de3b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122de3b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122de3b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122de3b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122de3bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122de3be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122de3c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de3c4 jb 0x122de36c */
  if (C.cf) goto L_122de36c;
  /* 122de3c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122de3c8 jmp dword ptr [edx*4 + 0x122de458] */
  switch (EDX) {
    case 0: goto L_122de468;
    case 1: goto L_122de470;
    case 2: goto L_122de47c;
    case 3: goto L_122de490;
    default: x86_unimpl("switch@0x122de3c8 out of table"); return;
  }
  /* 122de3cf nop  */
  /* nop */
L_122de3d0:;
  /* 122de3d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122de3d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122de3d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122de3d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122de3d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122de3da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122de3db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de3de jb 0x122de36c */
  if (C.cf) goto L_122de36c;
  /* 122de3e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122de3e2 jmp dword ptr [edx*4 + 0x122de458] */
  switch (EDX) {
    case 0: goto L_122de468;
    case 1: goto L_122de470;
    case 2: goto L_122de47c;
    case 3: goto L_122de490;
    default: x86_unimpl("switch@0x122de3e2 out of table"); return;
  }
  /* 122de3e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122de40c:;
  /* 122de40c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 122de410 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_122de414:;
  /* 122de414 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 122de418 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_122de41c:;
  /* 122de41c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 122de420 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_122de424:;
  /* 122de424 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 122de428 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_122de42c:;
  /* 122de42c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 122de430 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_122de434:;
  /* 122de434 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 122de438 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_122de43c:;
  /* 122de43c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 122de440 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 122de444 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 122de44b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122de44d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_122de44f:;
  /* 122de44f jmp dword ptr [edx*4 + 0x122de458] */
  switch (EDX) {
    case 0: goto L_122de468;
    case 1: goto L_122de470;
    case 2: goto L_122de47c;
    case 3: goto L_122de490;
    default: x86_unimpl("switch@0x122de44f out of table"); return;
  }
  /* 122de456 mov edi, edi */
  EDI = (EDI);
L_122de468:;
  /* 122de468 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de46b pop esi */
  ESI = (pop32());
  /* 122de46c pop edi */
  EDI = (pop32());
  /* 122de46d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122de46e ret  */
  ESPCHK(0x122de310u, _esp0);
  ESP += 4; return;
  /* 122de46f nop  */
  /* nop */
L_122de470:;
  /* 122de470 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122de472 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122de474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de477 pop esi */
  ESI = (pop32());
  /* 122de478 pop edi */
  EDI = (pop32());
  /* 122de479 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122de47a ret  */
  ESPCHK(0x122de310u, _esp0);
  ESP += 4; return;
  /* 122de47b nop  */
  /* nop */
L_122de47c:;
  /* 122de47c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122de47e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122de480 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122de483 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122de486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de489 pop esi */
  ESI = (pop32());
  /* 122de48a pop edi */
  EDI = (pop32());
  /* 122de48b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122de48c ret  */
  ESPCHK(0x122de310u, _esp0);
  ESP += 4; return;
  /* 122de48d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122de490:;
  /* 122de490 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122de492 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122de494 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122de497 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122de49a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122de49d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122de4a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de4a3 pop esi */
  ESI = (pop32());
  /* 122de4a4 pop edi */
  EDI = (pop32());
  /* 122de4a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122de4a6 ret  */
  ESPCHK(0x122de310u, _esp0);
  ESP += 4; return;
  /* 122de4a7 nop  */
  /* nop */
L_122de4a8:;
  /* 122de4a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 122de4ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 122de4b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 122de4b6 jne 0x122de4dc */
  if (!C.zf) goto L_122de4dc;
  /* 122de4b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122de4bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 122de4be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de4c1 jb 0x122de4d0 */
  if (C.cf) goto L_122de4d0;
  /* 122de4c3 std  */
  C.df=1;
  /* 122de4c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122de4c6 cld  */
  C.df=0;
  /* 122de4c7 jmp dword ptr [edx*4 + 0x122de5f0] */
  switch (EDX) {
    case 0: goto L_122de600;
    case 1: goto L_122de608;
    case 2: goto L_122de618;
    case 3: goto L_122de62c;
    default: x86_unimpl("switch@0x122de4c7 out of table"); return;
  }
  /* 122de4ce mov edi, edi */
  EDI = (EDI);
L_122de4d0:;
  /* 122de4d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122de4d2 jmp dword ptr [ecx*4 + 0x122de5a0] */
  switch (ECX) {
    case 0: goto L_122de5e7;
    default: x86_unimpl("switch@0x122de4d2 out of table"); return;
  }
  /* 122de4d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122de4dc:;
  /* 122de4dc mov eax, edi */
  EAX = (EDI);
  /* 122de4de mov edx, 3 */
  EDX = (0x3u);
  /* 122de4e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de4e6 jb 0x122de4f4 */
  if (C.cf) goto L_122de4f4;
  /* 122de4e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 122de4eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122de4ed jmp dword ptr [eax*4 + 0x122de4f8] */
  switch (EAX) {
    case 1: goto L_122de508;
    case 2: goto L_122de528;
    case 3: goto L_122de550;
    default: x86_unimpl("switch@0x122de4ed out of table"); return;
  }
L_122de4f4:;
  /* 122de4f4 jmp dword ptr [ecx*4 + 0x122de5f0] */
  switch (ECX) {
    case 0: goto L_122de600;
    case 1: goto L_122de608;
    case 2: goto L_122de618;
    case 3: goto L_122de62c;
    default: x86_unimpl("switch@0x122de4f4 out of table"); return;
  }
  /* 122de4fb nop  */
  /* nop */
L_122de508:;
  /* 122de508 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122de50b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122de50d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122de510 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 122de511 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122de514 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 122de515 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de518 jb 0x122de4d0 */
  if (C.cf) goto L_122de4d0;
  /* 122de51a std  */
  C.df=1;
  /* 122de51b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122de51d cld  */
  C.df=0;
  /* 122de51e jmp dword ptr [edx*4 + 0x122de5f0] */
  switch (EDX) {
    case 0: goto L_122de600;
    case 1: goto L_122de608;
    case 2: goto L_122de618;
    case 3: goto L_122de62c;
    default: x86_unimpl("switch@0x122de51e out of table"); return;
  }
  /* 122de525 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122de528:;
  /* 122de528 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122de52b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122de52d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122de530 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122de533 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122de536 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122de539 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 122de53c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 122de53f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de542 jb 0x122de4d0 */
  if (C.cf) goto L_122de4d0;
  /* 122de544 std  */
  C.df=1;
  /* 122de545 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122de547 cld  */
  C.df=0;
  /* 122de548 jmp dword ptr [edx*4 + 0x122de5f0] */
  switch (EDX) {
    case 0: goto L_122de600;
    case 1: goto L_122de608;
    case 2: goto L_122de618;
    case 3: goto L_122de62c;
    default: x86_unimpl("switch@0x122de548 out of table"); return;
  }
  /* 122de54f nop  */
  /* nop */
L_122de550:;
  /* 122de550 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122de553 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122de555 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122de558 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122de55b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122de55e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122de561 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122de564 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122de567 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 122de56a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 122de56d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de570 jb 0x122de4d0 */
  if (C.cf) goto L_122de4d0;
  /* 122de576 std  */
  C.df=1;
  /* 122de577 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122de579 cld  */
  C.df=0;
  /* 122de57a jmp dword ptr [edx*4 + 0x122de5f0] */
  switch (EDX) {
    case 0: goto L_122de600;
    case 1: goto L_122de608;
    case 2: goto L_122de618;
    case 3: goto L_122de62c;
    default: x86_unimpl("switch@0x122de57a out of table"); return;
  }
  /* 122de581 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 122de584 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 122de585 in eax, 0x2d */
  x86_unimpl("in @ 0x122de585");
  /* 122de587 adc ch, byte ptr [ebp - 0x1a4bedd3] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBP + -0x1a4bedd3))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 122de58e sub eax, 0x2de5bc12 */
  { uint32_t _a=(EAX),_b=(0x2de5bc12u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122de593 adc al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122de595 in eax, 0x2d */
  x86_unimpl("in @ 0x122de595");
  /* 122de597 adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 122de599 in eax, 0x2d */
  x86_unimpl("in @ 0x122de599");
  /* 122de59b adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 122de59d in eax, 0x2d */
  x86_unimpl("in @ 0x122de59d");
  /* 122de5a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 122de5a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 122de5ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 122de5b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 122de5b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 122de5b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 122de5bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 122de5c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 122de5c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 122de5c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 122de5cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 122de5d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 122de5d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 122de5d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 122de5dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 122de5e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122de5e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_122de5e7:;
  /* 122de5e7 jmp dword ptr [edx*4 + 0x122de5f0] */
  switch (EDX) {
    case 0: goto L_122de600;
    case 1: goto L_122de608;
    case 2: goto L_122de618;
    case 3: goto L_122de62c;
    default: x86_unimpl("switch@0x122de5e7 out of table"); return;
  }
  /* 122de5ee mov edi, edi */
  EDI = (EDI);
L_122de600:;
  /* 122de600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de603 pop esi */
  ESI = (pop32());
  /* 122de604 pop edi */
  EDI = (pop32());
  /* 122de605 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122de606 ret  */
  ESPCHK(0x122de310u, _esp0);
  ESP += 4; return;
  /* 122de607 nop  */
  /* nop */
L_122de608:;
  /* 122de608 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122de60b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122de60e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de611 pop esi */
  ESI = (pop32());
  /* 122de612 pop edi */
  EDI = (pop32());
  /* 122de613 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122de614 ret  */
  ESPCHK(0x122de310u, _esp0);
  ESP += 4; return;
  /* 122de615 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122de618:;
  /* 122de618 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122de61b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122de61e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122de621 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122de624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de627 pop esi */
  ESI = (pop32());
  /* 122de628 pop edi */
  EDI = (pop32());
  /* 122de629 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122de62a ret  */
  ESPCHK(0x122de310u, _esp0);
  ESP += 4; return;
  /* 122de62b nop  */
  /* nop */
L_122de62c:;
  /* 122de62c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122de62f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122de632 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122de635 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122de638 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122de63b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122de63e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de641 pop esi */
  ESI = (pop32());
  /* 122de642 pop edi */
  EDI = (pop32());
  /* 122de643 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122de644 ret  */
  ESPCHK(0x122de310u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x122de650 (145 bytes, 42 insns) */
void f_122de650(void) {
  FTRACE(0x122de650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122de650 push ebp */
  push32((uint32_t)(EBP));
  /* 122de651 mov ebp, esp */
  EBP = (ESP);
  /* 122de653 push ecx */
  push32((uint32_t)(ECX));
  /* 122de654 call 0x122de700 */
  push32(0x122de659u); f_122de700();
  /* 122de659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de65c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122de65e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122de665 jmp 0x122de670 */
  goto L_122de670;
L_122de667:;
  /* 122de667 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de66a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de66d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122de670:;
  /* 122de670 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de674 jae 0x122de69a */
  if (!C.cf) goto L_122de69a;
  /* 122de676 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de67c cmp ecx, dword ptr [eax*8 + 0x12300260] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12300260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de683 jne 0x122de698 */
  if (!C.zf) goto L_122de698;
  /* 122de685 call 0x122de6f0 */
  push32(0x122de68au); f_122de6f0();
  /* 122de68a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de68d mov ecx, dword ptr [edx*8 + 0x12300264] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12300264)));
  /* 122de694 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122de696 jmp 0x122de6dd */
  goto L_122de6dd;
L_122de698:;
  /* 122de698 jmp 0x122de667 */
  goto L_122de667;
L_122de69a:;
  /* 122de69a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de69e jb 0x122de6b3 */
  if (C.cf) goto L_122de6b3;
  /* 122de6a0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de6a4 ja 0x122de6b3 */
  if ((!C.cf&&!C.zf)) goto L_122de6b3;
  /* 122de6a6 call 0x122de6f0 */
  push32(0x122de6abu); f_122de6f0();
  /* 122de6ab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 122de6b1 jmp 0x122de6dd */
  goto L_122de6dd;
L_122de6b3:;
  /* 122de6b3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de6ba jb 0x122de6d2 */
  if (C.cf) goto L_122de6d2;
  /* 122de6bc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de6c3 ja 0x122de6d2 */
  if ((!C.cf&&!C.zf)) goto L_122de6d2;
  /* 122de6c5 call 0x122de6f0 */
  push32(0x122de6cau); f_122de6f0();
  /* 122de6ca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 122de6d0 jmp 0x122de6dd */
  goto L_122de6dd;
L_122de6d2:;
  /* 122de6d2 call 0x122de6f0 */
  push32(0x122de6d7u); f_122de6f0();
  /* 122de6d7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_122de6dd:;
  /* 122de6dd mov esp, ebp */
  ESP = (EBP);
  /* 122de6df pop ebp */
  EBP = (pop32());
  /* 122de6e0 ret  */
  ESPCHK(0x122de650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6f0 @ 0x122de6f0 (13 bytes, 6 insns) */
void f_122de6f0(void) {
  FTRACE(0x122de6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122de6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122de6f1 mov ebp, esp */
  EBP = (ESP);
  /* 122de6f3 call 0x122d6bc0 */
  push32(0x122de6f8u); f_122d6bc0();
  /* 122de6f8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de6fb pop ebp */
  EBP = (pop32());
  /* 122de6fc ret  */
  ESPCHK(0x122de6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x122de700 (13 bytes, 6 insns) */
void f_122de700(void) {
  FTRACE(0x122de700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122de700 push ebp */
  push32((uint32_t)(EBP));
  /* 122de701 mov ebp, esp */
  EBP = (ESP);
  /* 122de703 call 0x122d6bc0 */
  push32(0x122de708u); f_122d6bc0();
  /* 122de708 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de70b pop ebp */
  EBP = (pop32());
  /* 122de70c ret  */
  ESPCHK(0x122de700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e710 @ 0x122de710 (482 bytes, 138 insns) */
void f_122de710(void) {
  FTRACE(0x122de710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122de710 push ebp */
  push32((uint32_t)(EBP));
  /* 122de711 mov ebp, esp */
  EBP = (ESP);
  /* 122de713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122de716 push esi */
  push32((uint32_t)(ESI));
  /* 122de717 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 122de71e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 122de720 call 0x122db530 */
  push32(0x122de725u); f_122db530();
  /* 122de725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122de728 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122de72f jmp 0x122de73a */
  goto L_122de73a;
L_122de731:;
  /* 122de731 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122de734 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de737 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122de73a:;
  /* 122de73a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de73e jge 0x122de8e0 */
  if ((C.sf==C.of)) goto L_122de8e0;
  /* 122de744 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122de747 cmp dword ptr [ecx*4 + 0x12303120], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12303120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de74f je 0x122de846 */
  if (C.zf) goto L_122de846;
  /* 122de755 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122de758 mov eax, dword ptr [edx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12303120)));
  /* 122de75f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122de762 jmp 0x122de76d */
  goto L_122de76d;
L_122de764:;
  /* 122de764 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de767 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de76a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122de76d:;
  /* 122de76d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122de770 mov eax, dword ptr [edx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12303120)));
  /* 122de777 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de77c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de77f jae 0x122de836 */
  if (!C.cf) goto L_122de836;
  /* 122de785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de788 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122de78c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 122de78f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122de791 jne 0x122de831 */
  if (!C.zf) goto L_122de831;
  /* 122de797 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de79a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de79e jne 0x122de7d9 */
  if (!C.zf) goto L_122de7d9;
  /* 122de7a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 122de7a2 call 0x122db530 */
  push32(0x122de7a7u); f_122db530();
  /* 122de7a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122de7aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de7ad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de7b1 jne 0x122de7cf */
  if (!C.zf) goto L_122de7cf;
  /* 122de7b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de7b6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de7b9 push edx */
  push32((uint32_t)(EDX));
  /* 122de7ba call dword ptr [0x123042a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a8))), 0x122de7c0u);
  /* 122de7c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de7c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122de7c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de7c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de7cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_122de7cf:;
  /* 122de7cf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 122de7d1 call 0x122db5d0 */
  push32(0x122de7d6u); f_122db5d0();
  /* 122de7d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122de7d9:;
  /* 122de7d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de7dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de7df push eax */
  push32((uint32_t)(EAX));
  /* 122de7e0 call dword ptr [0x123042a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a0))), 0x122de7e6u);
  /* 122de7e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de7e9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122de7ed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 122de7f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122de7f2 je 0x122de806 */
  if (C.zf) goto L_122de806;
  /* 122de7f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de7f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de7fa push eax */
  push32((uint32_t)(EAX));
  /* 122de7fb call dword ptr [0x123042a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a4))), 0x122de801u);
  /* 122de801 jmp 0x122de764 */
  goto L_122de764;
L_122de806:;
  /* 122de806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de809 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 122de80f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122de812 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122de815 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122de818 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de81b sub eax, dword ptr [edx*4 + 0x12303120] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12303120))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122de822 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122de823 mov esi, 0x24 */
  ESI = (0x24u);
  /* 122de828 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122de82a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de82c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122de82f jmp 0x122de836 */
  goto L_122de836;
L_122de831:;
  /* 122de831 jmp 0x122de764 */
  goto L_122de764;
L_122de836:;
  /* 122de836 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de83a je 0x122de841 */
  if (C.zf) goto L_122de841;
  /* 122de83c jmp 0x122de8e0 */
  goto L_122de8e0;
L_122de841:;
  /* 122de841 jmp 0x122de8db */
  goto L_122de8db;
L_122de846:;
  /* 122de846 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 122de848 push 0x122fd99c */
  push32((uint32_t)(0x122fd99cu));
  /* 122de84d push 2 */
  push32((uint32_t)(0x2u));
  /* 122de84f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 122de854 call 0x122d7180 */
  push32(0x122de859u); f_122d7180();
  /* 122de859 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122de85c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122de85f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de863 je 0x122de8d9 */
  if (C.zf) goto L_122de8d9;
  /* 122de865 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122de868 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de86b mov dword ptr [eax*4 + 0x12303120], ecx */
  w32((uint32_t)(EAX*4 + 0x12303120), (ECX));
  /* 122de872 mov edx, dword ptr [0x1230325c] */
  EDX = (r32((uint32_t)(0x1230325c)));
  /* 122de878 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de87b mov dword ptr [0x1230325c], edx */
  w32((uint32_t)(0x1230325c), (EDX));
  /* 122de881 jmp 0x122de88c */
  goto L_122de88c;
L_122de883:;
  /* 122de883 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de886 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de889 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122de88c:;
  /* 122de88c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122de88f mov edx, dword ptr [ecx*4 + 0x12303120] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122de896 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122de89c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de89f jae 0x122de8c4 */
  if (!C.cf) goto L_122de8c4;
  /* 122de8a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de8a4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 122de8a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de8ab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 122de8b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de8b4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 122de8b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122de8bb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 122de8c2 jmp 0x122de883 */
  goto L_122de883;
L_122de8c4:;
  /* 122de8c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122de8c7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122de8ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122de8cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122de8d0 push edx */
  push32((uint32_t)(EDX));
  /* 122de8d1 call 0x122dec20 */
  push32(0x122de8d6u); f_122dec20();
  /* 122de8d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122de8d9:;
  /* 122de8d9 jmp 0x122de8e0 */
  goto L_122de8e0;
L_122de8db:;
  /* 122de8db jmp 0x122de731 */
  goto L_122de731;
L_122de8e0:;
  /* 122de8e0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 122de8e2 call 0x122db5d0 */
  push32(0x122de8e7u); f_122db5d0();
  /* 122de8e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122de8ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122de8ed pop esi */
  ESI = (pop32());
  /* 122de8ee mov esp, ebp */
  ESP = (EBP);
  /* 122de8f0 pop ebp */
  EBP = (pop32());
  /* 122de8f1 ret  */
  ESPCHK(0x122de710u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x122de900 (183 bytes, 57 insns) */
void f_122de900(void) {
  FTRACE(0x122de900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122de900 push ebp */
  push32((uint32_t)(EBP));
  /* 122de901 mov ebp, esp */
  EBP = (ESP);
  /* 122de903 push ecx */
  push32((uint32_t)(ECX));
  /* 122de904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de907 cmp eax, dword ptr [0x1230325c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1230325c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de90d jae 0x122de99a */
  if (!C.cf) goto L_122de99a;
  /* 122de913 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de916 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122de919 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de91c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122de91f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122de922 mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122de929 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de92d jne 0x122de99a */
  if (!C.zf) goto L_122de99a;
  /* 122de92f cmp dword ptr [0x12301748], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301748))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de936 jne 0x122de97a */
  if (!C.zf) goto L_122de97a;
  /* 122de938 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de93b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122de93e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de942 je 0x122de952 */
  if (C.zf) goto L_122de952;
  /* 122de944 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de948 je 0x122de960 */
  if (C.zf) goto L_122de960;
  /* 122de94a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de94e je 0x122de96e */
  if (C.zf) goto L_122de96e;
  /* 122de950 jmp 0x122de97a */
  goto L_122de97a;
L_122de952:;
  /* 122de952 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122de955 push edx */
  push32((uint32_t)(EDX));
  /* 122de956 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 122de958 call dword ptr [0x123042cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042cc))), 0x122de95eu);
  /* 122de95e jmp 0x122de97a */
  goto L_122de97a;
L_122de960:;
  /* 122de960 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122de963 push eax */
  push32((uint32_t)(EAX));
  /* 122de964 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 122de966 call dword ptr [0x123042cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042cc))), 0x122de96cu);
  /* 122de96c jmp 0x122de97a */
  goto L_122de97a;
L_122de96e:;
  /* 122de96e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122de971 push ecx */
  push32((uint32_t)(ECX));
  /* 122de972 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 122de974 call dword ptr [0x123042cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042cc))), 0x122de97au);
L_122de97a:;
  /* 122de97a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de97d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 122de980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de983 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 122de986 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122de989 mov ecx, dword ptr [edx*4 + 0x12303120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12303120)));
  /* 122de990 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122de993 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 122de996 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122de998 jmp 0x122de9b3 */
  goto L_122de9b3;
L_122de99a:;
  /* 122de99a call 0x122de6f0 */
  push32(0x122de99fu); f_122de6f0();
  /* 122de99f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122de9a5 call 0x122de700 */
  push32(0x122de9aau); f_122de700();
  /* 122de9aa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122de9b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_122de9b3:;
  /* 122de9b3 mov esp, ebp */
  ESP = (EBP);
  /* 122de9b5 pop ebp */
  EBP = (pop32());
  /* 122de9b6 ret  */
  ESPCHK(0x122de900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9c0 @ 0x122de9c0 (216 bytes, 63 insns) */
void f_122de9c0(void) {
  FTRACE(0x122de9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122de9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122de9c1 mov ebp, esp */
  EBP = (ESP);
  /* 122de9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122de9c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de9c7 cmp eax, dword ptr [0x1230325c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1230325c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122de9cd jae 0x122dea7b */
  if (!C.cf) goto L_122dea7b;
  /* 122de9d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de9d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122de9d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de9dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122de9df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122de9e2 mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122de9e9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122de9ee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122de9f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122de9f3 je 0x122dea7b */
  if (C.zf) goto L_122dea7b;
  /* 122de9f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122de9fc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 122de9ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dea02 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 122dea05 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dea08 mov ecx, dword ptr [edx*4 + 0x12303120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12303120)));
  /* 122dea0f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dea13 je 0x122dea7b */
  if (C.zf) goto L_122dea7b;
  /* 122dea15 cmp dword ptr [0x12301748], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301748))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dea1c jne 0x122dea5a */
  if (!C.zf) goto L_122dea5a;
  /* 122dea1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dea21 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122dea24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dea28 je 0x122dea38 */
  if (C.zf) goto L_122dea38;
  /* 122dea2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dea2e je 0x122dea44 */
  if (C.zf) goto L_122dea44;
  /* 122dea30 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dea34 je 0x122dea50 */
  if (C.zf) goto L_122dea50;
  /* 122dea36 jmp 0x122dea5a */
  goto L_122dea5a;
L_122dea38:;
  /* 122dea38 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dea3a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 122dea3c call dword ptr [0x123042cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042cc))), 0x122dea42u);
  /* 122dea42 jmp 0x122dea5a */
  goto L_122dea5a;
L_122dea44:;
  /* 122dea44 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dea46 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 122dea48 call dword ptr [0x123042cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042cc))), 0x122dea4eu);
  /* 122dea4e jmp 0x122dea5a */
  goto L_122dea5a;
L_122dea50:;
  /* 122dea50 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dea52 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 122dea54 call dword ptr [0x123042cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042cc))), 0x122dea5au);
L_122dea5a:;
  /* 122dea5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dea5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122dea60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dea63 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122dea66 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dea69 mov edx, dword ptr [eax*4 + 0x12303120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122dea70 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 122dea77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dea79 jmp 0x122dea94 */
  goto L_122dea94;
L_122dea7b:;
  /* 122dea7b call 0x122de6f0 */
  push32(0x122dea80u); f_122de6f0();
  /* 122dea80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122dea86 call 0x122de700 */
  push32(0x122dea8bu); f_122de700();
  /* 122dea8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122dea91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_122dea94:;
  /* 122dea94 mov esp, ebp */
  ESP = (EBP);
  /* 122dea96 pop ebp */
  EBP = (pop32());
  /* 122dea97 ret  */
  ESPCHK(0x122de9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x122deaa0 (102 bytes, 30 insns) */
void f_122deaa0(void) {
  FTRACE(0x122deaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122deaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 122deaa1 mov ebp, esp */
  EBP = (ESP);
  /* 122deaa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122deaa6 cmp eax, dword ptr [0x1230325c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1230325c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122deaac jae 0x122deaeb */
  if (!C.cf) goto L_122deaeb;
  /* 122deaae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122deab1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122deab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122deab7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122deaba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122deabd mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122deac4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122deac9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122deacc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122deace je 0x122deaeb */
  if (C.zf) goto L_122deaeb;
  /* 122dead0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dead3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 122dead6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dead9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 122deadc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122deadf mov ecx, dword ptr [edx*4 + 0x12303120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12303120)));
  /* 122deae6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 122deae9 jmp 0x122deb04 */
  goto L_122deb04;
L_122deaeb:;
  /* 122deaeb call 0x122de6f0 */
  push32(0x122deaf0u); f_122de6f0();
  /* 122deaf0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122deaf6 call 0x122de700 */
  push32(0x122deafbu); f_122de700();
  /* 122deafb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122deb01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_122deb04:;
  /* 122deb04 pop ebp */
  EBP = (pop32());
  /* 122deb05 ret  */
  ESPCHK(0x122deaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb10 @ 0x122deb10 (260 bytes, 83 insns) */
void f_122deb10(void) {
  FTRACE(0x122deb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122deb10 push ebp */
  push32((uint32_t)(EBP));
  /* 122deb11 mov ebp, esp */
  EBP = (ESP);
  /* 122deb13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122deb16 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 122deb1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122deb1d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 122deb20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122deb22 je 0x122deb2d */
  if (C.zf) goto L_122deb2d;
  /* 122deb24 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 122deb27 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 122deb2a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_122deb2d:;
  /* 122deb2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122deb30 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 122deb36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122deb38 je 0x122deb42 */
  if (C.zf) goto L_122deb42;
  /* 122deb3a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 122deb3d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 122deb3f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_122deb42:;
  /* 122deb42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122deb45 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 122deb4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122deb4d je 0x122deb58 */
  if (C.zf) goto L_122deb58;
  /* 122deb4f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 122deb52 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 122deb55 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_122deb58:;
  /* 122deb58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122deb5b push eax */
  push32((uint32_t)(EAX));
  /* 122deb5c call dword ptr [0x1230425c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230425c))), 0x122deb62u);
  /* 122deb62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122deb65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122deb69 jne 0x122deb82 */
  if (!C.zf) goto L_122deb82;
  /* 122deb6b call dword ptr [0x12304250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304250))), 0x122deb71u);
  /* 122deb71 push eax */
  push32((uint32_t)(EAX));
  /* 122deb72 call 0x122de650 */
  push32(0x122deb77u); f_122de650();
  /* 122deb77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122deb7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122deb7d jmp 0x122dec10 */
  goto L_122dec10;
L_122deb82:;
  /* 122deb82 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122deb86 jne 0x122deb93 */
  if (!C.zf) goto L_122deb93;
  /* 122deb88 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 122deb8b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 122deb8e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 122deb91 jmp 0x122deba2 */
  goto L_122deba2;
L_122deb93:;
  /* 122deb93 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122deb97 jne 0x122deba2 */
  if (!C.zf) goto L_122deba2;
  /* 122deb99 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 122deb9c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 122deb9f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_122deba2:;
  /* 122deba2 call 0x122de710 */
  push32(0x122deba7u); f_122de710();
  /* 122deba7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122debaa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122debae jne 0x122debcb */
  if (!C.zf) goto L_122debcb;
  /* 122debb0 call 0x122de6f0 */
  push32(0x122debb5u); f_122de6f0();
  /* 122debb5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 122debbb call 0x122de700 */
  push32(0x122debc0u); f_122de700();
  /* 122debc0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122debc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122debc9 jmp 0x122dec10 */
  goto L_122dec10;
L_122debcb:;
  /* 122debcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122debce push eax */
  push32((uint32_t)(EAX));
  /* 122debcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122debd2 push ecx */
  push32((uint32_t)(ECX));
  /* 122debd3 call 0x122de900 */
  push32(0x122debd8u); f_122de900();
  /* 122debd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122debdb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 122debde or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 122debe1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 122debe4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122debe7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122debea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122debed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122debf0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122debf3 mov edx, dword ptr [eax*4 + 0x12303120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122debfa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 122debfd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 122dec01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dec04 push ecx */
  push32((uint32_t)(ECX));
  /* 122dec05 call 0x122decb0 */
  push32(0x122dec0au); f_122decb0();
  /* 122dec0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dec0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_122dec10:;
  /* 122dec10 mov esp, ebp */
  ESP = (EBP);
  /* 122dec12 pop ebp */
  EBP = (pop32());
  /* 122dec13 ret  */
  ESPCHK(0x122deb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec20 @ 0x122dec20 (134 bytes, 44 insns) */
void f_122dec20(void) {
  FTRACE(0x122dec20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dec20 push ebp */
  push32((uint32_t)(EBP));
  /* 122dec21 mov ebp, esp */
  EBP = (ESP);
  /* 122dec23 push ecx */
  push32((uint32_t)(ECX));
  /* 122dec24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dec27 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122dec2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dec2d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122dec30 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dec33 mov edx, dword ptr [eax*4 + 0x12303120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122dec3a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dec3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122dec3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dec42 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dec46 jne 0x122dec81 */
  if (!C.zf) goto L_122dec81;
  /* 122dec48 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 122dec4a call 0x122db530 */
  push32(0x122dec4fu); f_122db530();
  /* 122dec4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dec52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dec55 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dec59 jne 0x122dec77 */
  if (!C.zf) goto L_122dec77;
  /* 122dec5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dec5e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dec61 push edx */
  push32((uint32_t)(EDX));
  /* 122dec62 call dword ptr [0x123042a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a8))), 0x122dec68u);
  /* 122dec68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dec6b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122dec6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dec71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dec74 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_122dec77:;
  /* 122dec77 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 122dec79 call 0x122db5d0 */
  push32(0x122dec7eu); f_122db5d0();
  /* 122dec7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122dec81:;
  /* 122dec81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dec84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122dec87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dec8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122dec8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122dec90 mov edx, dword ptr [eax*4 + 0x12303120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122dec97 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 122dec9b push eax */
  push32((uint32_t)(EAX));
  /* 122dec9c call dword ptr [0x123042a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a0))), 0x122deca2u);
  /* 122deca2 mov esp, ebp */
  ESP = (EBP);
  /* 122deca4 pop ebp */
  EBP = (pop32());
  /* 122deca5 ret  */
  ESPCHK(0x122dec20u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x122decb0 (38 bytes, 13 insns) */
void f_122decb0(void) {
  FTRACE(0x122decb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122decb0 push ebp */
  push32((uint32_t)(EBP));
  /* 122decb1 mov ebp, esp */
  EBP = (ESP);
  /* 122decb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122decb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122decb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122decbc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122decbf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122decc2 mov edx, dword ptr [eax*4 + 0x12303120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122decc9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 122deccd push eax */
  push32((uint32_t)(EAX));
  /* 122decce call dword ptr [0x123042a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042a4))), 0x122decd4u);
  /* 122decd4 pop ebp */
  EBP = (pop32());
  /* 122decd5 ret  */
  ESPCHK(0x122decb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ece0 @ 0x122dece0 (218 bytes, 63 insns) */
void f_122dece0(void) {
  FTRACE(0x122dece0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dece0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dece1 mov ebp, esp */
  EBP = (ESP);
  /* 122dece3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dece6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122deced push 2 */
  push32((uint32_t)(0x2u));
  /* 122decef call 0x122db530 */
  push32(0x122decf4u); f_122db530();
  /* 122decf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122decf7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 122decfe jmp 0x122ded09 */
  goto L_122ded09;
L_122ded00:;
  /* 122ded00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ded03 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ded06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122ded09:;
  /* 122ded09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ded0c cmp ecx, dword ptr [0x12303100] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12303100))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ded12 jge 0x122deda9 */
  if ((C.sf==C.of)) goto L_122deda9;
  /* 122ded18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ded1b mov eax, dword ptr [0x12301dac] */
  EAX = (r32((uint32_t)(0x12301dac)));
  /* 122ded20 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ded24 je 0x122deda4 */
  if (C.zf) goto L_122deda4;
  /* 122ded26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ded29 mov edx, dword ptr [0x12301dac] */
  EDX = (r32((uint32_t)(0x12301dac)));
  /* 122ded2f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 122ded32 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122ded35 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 122ded3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122ded3d je 0x122ded61 */
  if (C.zf) goto L_122ded61;
  /* 122ded3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ded42 mov eax, dword ptr [0x12301dac] */
  EAX = (r32((uint32_t)(0x12301dac)));
  /* 122ded47 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122ded4a push ecx */
  push32((uint32_t)(ECX));
  /* 122ded4b call 0x122e0330 */
  push32(0x122ded50u); f_122e0330();
  /* 122ded50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122ded53 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ded56 je 0x122ded61 */
  if (C.zf) goto L_122ded61;
  /* 122ded58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122ded5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ded5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122ded61:;
  /* 122ded61 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122ded65 jl 0x122deda4 */
  if ((C.sf!=C.of)) goto L_122deda4;
  /* 122ded67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ded6a mov ecx, dword ptr [0x12301dac] */
  ECX = (r32((uint32_t)(0x12301dac)));
  /* 122ded70 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 122ded73 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122ded76 push edx */
  push32((uint32_t)(EDX));
  /* 122ded77 call dword ptr [0x12304264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304264))), 0x122ded7du);
  /* 122ded7d push 2 */
  push32((uint32_t)(0x2u));
  /* 122ded7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ded82 mov ecx, dword ptr [0x12301dac] */
  ECX = (r32((uint32_t)(0x12301dac)));
  /* 122ded88 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 122ded8b push edx */
  push32((uint32_t)(EDX));
  /* 122ded8c call 0x122d7c10 */
  push32(0x122ded91u); f_122d7c10();
  /* 122ded91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122ded94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122ded97 mov ecx, dword ptr [0x12301dac] */
  ECX = (r32((uint32_t)(0x12301dac)));
  /* 122ded9d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_122deda4:;
  /* 122deda4 jmp 0x122ded00 */
  goto L_122ded00;
L_122deda9:;
  /* 122deda9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122dedab call 0x122db5d0 */
  push32(0x122dedb0u); f_122db5d0();
  /* 122dedb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dedb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122dedb6 mov esp, ebp */
  ESP = (EBP);
  /* 122dedb8 pop ebp */
  EBP = (pop32());
  /* 122dedb9 ret  */
  ESPCHK(0x122dece0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edc0 @ 0x122dedc0 (68 bytes, 26 insns) */
void f_122dedc0(void) {
  FTRACE(0x122dedc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dedc0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dedc1 mov ebp, esp */
  EBP = (ESP);
  /* 122dedc3 push ecx */
  push32((uint32_t)(ECX));
  /* 122dedc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dedc8 jne 0x122dedd6 */
  if (!C.zf) goto L_122dedd6;
  /* 122dedca push 0 */
  push32((uint32_t)(0x0u));
  /* 122dedcc call 0x122def30 */
  push32(0x122dedd1u); f_122def30();
  /* 122dedd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dedd4 jmp 0x122dee00 */
  goto L_122dee00;
L_122dedd6:;
  /* 122dedd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dedd9 push eax */
  push32((uint32_t)(EAX));
  /* 122dedda call 0x122db160 */
  push32(0x122deddfu); f_122db160();
  /* 122deddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dede2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dede5 push ecx */
  push32((uint32_t)(ECX));
  /* 122dede6 call 0x122dee10 */
  push32(0x122dedebu); f_122dee10();
  /* 122dedeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dedee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122dedf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dedf4 push edx */
  push32((uint32_t)(EDX));
  /* 122dedf5 call 0x122db1d0 */
  push32(0x122dedfau); f_122db1d0();
  /* 122dedfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dedfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122dee00:;
  /* 122dee00 mov esp, ebp */
  ESP = (EBP);
  /* 122dee02 pop ebp */
  EBP = (pop32());
  /* 122dee03 ret  */
  ESPCHK(0x122dedc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee10 @ 0x122dee10 (65 bytes, 26 insns) */
void f_122dee10(void) {
  FTRACE(0x122dee10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dee10 push ebp */
  push32((uint32_t)(EBP));
  /* 122dee11 mov ebp, esp */
  EBP = (ESP);
  /* 122dee13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dee16 push eax */
  push32((uint32_t)(EAX));
  /* 122dee17 call 0x122dee60 */
  push32(0x122dee1cu); f_122dee60();
  /* 122dee1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dee1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dee21 je 0x122dee28 */
  if (C.zf) goto L_122dee28;
  /* 122dee23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122dee26 jmp 0x122dee4f */
  goto L_122dee4f;
L_122dee28:;
  /* 122dee28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dee2b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122dee2e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 122dee34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122dee36 je 0x122dee4d */
  if (C.zf) goto L_122dee4d;
  /* 122dee38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dee3b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122dee3e push ecx */
  push32((uint32_t)(ECX));
  /* 122dee3f call 0x122e0480 */
  push32(0x122dee44u); f_122e0480();
  /* 122dee44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dee47 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122dee49 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dee4b jmp 0x122dee4f */
  goto L_122dee4f;
L_122dee4d:;
  /* 122dee4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122dee4f:;
  /* 122dee4f pop ebp */
  EBP = (pop32());
  /* 122dee50 ret  */
  ESPCHK(0x122dee10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee60 @ 0x122dee60 (183 bytes, 62 insns) */
void f_122dee60(void) {
  FTRACE(0x122dee60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dee60 push ebp */
  push32((uint32_t)(EBP));
  /* 122dee61 mov ebp, esp */
  EBP = (ESP);
  /* 122dee63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dee66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122dee6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dee70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122dee73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dee76 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122dee79 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 122dee7c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dee7f jne 0x122deefb */
  if (!C.zf) goto L_122deefb;
  /* 122dee81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dee84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122dee87 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 122dee8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dee8f je 0x122deefb */
  if (C.zf) goto L_122deefb;
  /* 122dee91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dee94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122dee97 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 122dee99 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dee9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122dee9f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122deea3 jle 0x122deefb */
  if ((C.zf||C.sf!=C.of)) goto L_122deefb;
  /* 122deea5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122deea8 push edx */
  push32((uint32_t)(EDX));
  /* 122deea9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122deeac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122deeaf push ecx */
  push32((uint32_t)(ECX));
  /* 122deeb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122deeb3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122deeb6 push eax */
  push32((uint32_t)(EAX));
  /* 122deeb7 call 0x122dabf0 */
  push32(0x122deebcu); f_122dabf0();
  /* 122deebc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122deebf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122deec2 jne 0x122deee5 */
  if (!C.zf) goto L_122deee5;
  /* 122deec4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122deec7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122deeca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 122deed0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122deed2 je 0x122deee3 */
  if (C.zf) goto L_122deee3;
  /* 122deed4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122deed7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122deeda and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 122deedd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122deee0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_122deee3:;
  /* 122deee3 jmp 0x122deefb */
  goto L_122deefb;
L_122deee5:;
  /* 122deee5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122deee8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122deeeb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 122deeee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122deef1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 122deef4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122deefb:;
  /* 122deefb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122deefe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122def01 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122def04 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122def06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122def09 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 122def10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122def13 mov esp, ebp */
  ESP = (EBP);
  /* 122def15 pop ebp */
  EBP = (pop32());
  /* 122def16 ret  */
  ESPCHK(0x122dee60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef20 @ 0x122def20 (15 bytes, 7 insns) */
void f_122def20(void) {
  FTRACE(0x122def20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122def20 push ebp */
  push32((uint32_t)(EBP));
  /* 122def21 mov ebp, esp */
  EBP = (ESP);
  /* 122def23 push 1 */
  push32((uint32_t)(0x1u));
  /* 122def25 call 0x122def30 */
  push32(0x122def2au); f_122def30();
  /* 122def2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122def2d pop ebp */
  EBP = (pop32());
  /* 122def2e ret  */
  ESPCHK(0x122def20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef30 @ 0x122def30 (319 bytes, 94 insns) */
void f_122def30(void) {
  FTRACE(0x122def30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122def30 push ebp */
  push32((uint32_t)(EBP));
  /* 122def31 mov ebp, esp */
  EBP = (ESP);
  /* 122def33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122def36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122def3d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122def44 push 2 */
  push32((uint32_t)(0x2u));
  /* 122def46 call 0x122db530 */
  push32(0x122def4bu); f_122db530();
  /* 122def4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122def4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122def55 jmp 0x122def60 */
  goto L_122def60;
L_122def57:;
  /* 122def57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122def5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122def5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122def60:;
  /* 122def60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122def63 cmp ecx, dword ptr [0x12303100] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12303100))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122def69 jge 0x122df053 */
  if ((C.sf==C.of)) goto L_122df053;
  /* 122def6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122def72 mov eax, dword ptr [0x12301dac] */
  EAX = (r32((uint32_t)(0x12301dac)));
  /* 122def77 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122def7b je 0x122df04e */
  if (C.zf) goto L_122df04e;
  /* 122def81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122def84 mov edx, dword ptr [0x12301dac] */
  EDX = (r32((uint32_t)(0x12301dac)));
  /* 122def8a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 122def8d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122def90 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 122def96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122def98 je 0x122df04e */
  if (C.zf) goto L_122df04e;
  /* 122def9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122defa1 mov eax, dword ptr [0x12301dac] */
  EAX = (r32((uint32_t)(0x12301dac)));
  /* 122defa6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122defa9 push ecx */
  push32((uint32_t)(ECX));
  /* 122defaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122defad push edx */
  push32((uint32_t)(EDX));
  /* 122defae call 0x122db1a0 */
  push32(0x122defb3u); f_122db1a0();
  /* 122defb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122defb6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122defb9 mov ecx, dword ptr [0x12301dac] */
  ECX = (r32((uint32_t)(0x12301dac)));
  /* 122defbf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 122defc2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 122defc5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 122defca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122defcc je 0x122df035 */
  if (C.zf) goto L_122df035;
  /* 122defce cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122defd2 jne 0x122deff9 */
  if (!C.zf) goto L_122deff9;
  /* 122defd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122defd7 mov edx, dword ptr [0x12301dac] */
  EDX = (r32((uint32_t)(0x12301dac)));
  /* 122defdd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 122defe0 push eax */
  push32((uint32_t)(EAX));
  /* 122defe1 call 0x122dee10 */
  push32(0x122defe6u); f_122dee10();
  /* 122defe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122defe9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122defec je 0x122deff7 */
  if (C.zf) goto L_122deff7;
  /* 122defee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122deff1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122deff4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122deff7:;
  /* 122deff7 jmp 0x122df035 */
  goto L_122df035;
L_122deff9:;
  /* 122deff9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122deffd jne 0x122df035 */
  if (!C.zf) goto L_122df035;
  /* 122defff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df002 mov eax, dword ptr [0x12301dac] */
  EAX = (r32((uint32_t)(0x12301dac)));
  /* 122df007 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122df00a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122df00d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 122df010 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122df012 je 0x122df035 */
  if (C.zf) goto L_122df035;
  /* 122df014 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df017 mov ecx, dword ptr [0x12301dac] */
  ECX = (r32((uint32_t)(0x12301dac)));
  /* 122df01d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 122df020 push edx */
  push32((uint32_t)(EDX));
  /* 122df021 call 0x122dee10 */
  push32(0x122df026u); f_122dee10();
  /* 122df026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df029 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df02c jne 0x122df035 */
  if (!C.zf) goto L_122df035;
  /* 122df02e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_122df035:;
  /* 122df035 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df038 mov ecx, dword ptr [0x12301dac] */
  ECX = (r32((uint32_t)(0x12301dac)));
  /* 122df03e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 122df041 push edx */
  push32((uint32_t)(EDX));
  /* 122df042 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df045 push eax */
  push32((uint32_t)(EAX));
  /* 122df046 call 0x122db210 */
  push32(0x122df04bu); f_122db210();
  /* 122df04b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122df04e:;
  /* 122df04e jmp 0x122def57 */
  goto L_122def57;
L_122df053:;
  /* 122df053 push 2 */
  push32((uint32_t)(0x2u));
  /* 122df055 call 0x122db5d0 */
  push32(0x122df05au); f_122db5d0();
  /* 122df05a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df05d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df061 jne 0x122df068 */
  if (!C.zf) goto L_122df068;
  /* 122df063 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122df066 jmp 0x122df06b */
  goto L_122df06b;
L_122df068:;
  /* 122df068 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_122df06b:;
  /* 122df06b mov esp, ebp */
  ESP = (EBP);
  /* 122df06d pop ebp */
  EBP = (pop32());
  /* 122df06e ret  */
  ESPCHK(0x122def30u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x122df070 (15 bytes, 7 insns) */
void f_122df070(void) {
  FTRACE(0x122df070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122df070 push ebp */
  push32((uint32_t)(EBP));
  /* 122df071 mov ebp, esp */
  EBP = (ESP);
  /* 122df073 push 2 */
  push32((uint32_t)(0x2u));
  /* 122df075 call 0x122d4fd0 */
  push32(0x122df07au); f_122d4fd0();
  /* 122df07a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df07d pop ebp */
  EBP = (pop32());
  /* 122df07e ret  */
  ESPCHK(0x122df070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f080 @ 0x122df080 (1007 bytes, 269 insns) */
void f_122df080(void) {
  FTRACE(0x122df080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122df080 push ebp */
  push32((uint32_t)(EBP));
  /* 122df081 mov ebp, esp */
  EBP = (ESP);
  /* 122df083 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122df089 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df08d jl 0x122df095 */
  if ((C.sf!=C.of)) goto L_122df095;
  /* 122df08f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df093 jle 0x122df09c */
  if ((C.zf||C.sf!=C.of)) goto L_122df09c;
L_122df095:;
  /* 122df095 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df097 jmp 0x122df46b */
  goto L_122df46b;
L_122df09c:;
  /* 122df09c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122df09e call 0x122db530 */
  push32(0x122df0a3u); f_122db530();
  /* 122df0a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df0a6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122df0ad mov eax, dword ptr [0x12301ad4] */
  EAX = (r32((uint32_t)(0x12301ad4)));
  /* 122df0b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df0b5 mov dword ptr [0x12301ad4], eax */
  w32((uint32_t)(0x12301ad4), (EAX));
L_122df0ba:;
  /* 122df0ba cmp dword ptr [0x12301ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df0c1 je 0x122df0cd */
  if (C.zf) goto L_122df0cd;
  /* 122df0c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122df0c5 call dword ptr [0x123042d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042d0))), 0x122df0cbu);
  /* 122df0cb jmp 0x122df0ba */
  goto L_122df0ba;
L_122df0cd:;
  /* 122df0cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df0d1 je 0x122df111 */
  if (C.zf) goto L_122df111;
  /* 122df0d3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df0d7 je 0x122df0f1 */
  if (C.zf) goto L_122df0f1;
  /* 122df0d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df0dc push ecx */
  push32((uint32_t)(ECX));
  /* 122df0dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df0e0 push edx */
  push32((uint32_t)(EDX));
  /* 122df0e1 call 0x122df470 */
  push32(0x122df0e6u); f_122df470();
  /* 122df0e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df0e9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 122df0ef jmp 0x122df103 */
  goto L_122df103;
L_122df0f1:;
  /* 122df0f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df0f4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df0f7 mov ecx, dword ptr [eax + 0x123004dc] */
  ECX = (r32((uint32_t)(EAX + 0x123004dc)));
  /* 122df0fd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_122df103:;
  /* 122df103 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 122df109 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122df10c jmp 0x122df44b */
  goto L_122df44b;
L_122df111:;
  /* 122df111 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 122df118 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122df11f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df123 je 0x122df443 */
  if (C.zf) goto L_122df443;
  /* 122df129 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df12c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122df12f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df132 jne 0x122df354 */
  if (!C.zf) goto L_122df354;
  /* 122df138 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df13b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 122df13f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df142 jne 0x122df354 */
  if (!C.zf) goto L_122df354;
  /* 122df148 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df14b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 122df14f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df152 jne 0x122df354 */
  if (!C.zf) goto L_122df354;
  /* 122df158 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df15b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_122df161:;
  /* 122df161 push 0x122fd9ec */
  push32((uint32_t)(0x122fd9ecu));
  /* 122df166 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122df16c push ecx */
  push32((uint32_t)(ECX));
  /* 122df16d call 0x122e1b30 */
  push32(0x122df172u); f_122e1b30();
  /* 122df172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df175 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 122df17b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df182 je 0x122df1ad */
  if (C.zf) goto L_122df1ad;
  /* 122df184 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122df18a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122df190 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 122df196 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df19d je 0x122df1ad */
  if (C.zf) goto L_122df1ad;
  /* 122df19f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122df1a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122df1a8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df1ab jne 0x122df1d3 */
  if (!C.zf) goto L_122df1d3;
L_122df1ad:;
  /* 122df1ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df1b1 je 0x122df1cc */
  if (C.zf) goto L_122df1cc;
  /* 122df1b3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122df1b5 call 0x122db5d0 */
  push32(0x122df1bau); f_122db5d0();
  /* 122df1ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df1bd mov edx, dword ptr [0x12301ad4] */
  EDX = (r32((uint32_t)(0x12301ad4)));
  /* 122df1c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122df1c6 mov dword ptr [0x12301ad4], edx */
  w32((uint32_t)(0x12301ad4), (EDX));
L_122df1cc:;
  /* 122df1cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df1ce jmp 0x122df46b */
  goto L_122df46b;
L_122df1d3:;
  /* 122df1d3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 122df1da jmp 0x122df1e5 */
  goto L_122df1e5;
L_122df1dc:;
  /* 122df1dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122df1df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df1e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122df1e5:;
  /* 122df1e5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df1e9 jg 0x122df233 */
  if ((!C.zf&&C.sf==C.of)) goto L_122df233;
  /* 122df1eb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 122df1f1 push ecx */
  push32((uint32_t)(ECX));
  /* 122df1f2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122df1f8 push edx */
  push32((uint32_t)(EDX));
  /* 122df1f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122df1fc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df1ff mov ecx, dword ptr [eax + 0x123004d8] */
  ECX = (r32((uint32_t)(EAX + 0x123004d8)));
  /* 122df205 push ecx */
  push32((uint32_t)(ECX));
  /* 122df206 call 0x122e1af0 */
  push32(0x122df20bu); f_122e1af0();
  /* 122df20b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df20e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df210 jne 0x122df231 */
  if (!C.zf) goto L_122df231;
  /* 122df212 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122df215 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df218 mov eax, dword ptr [edx + 0x123004d8] */
  EAX = (r32((uint32_t)(EDX + 0x123004d8)));
  /* 122df21e push eax */
  push32((uint32_t)(EAX));
  /* 122df21f call 0x122d9fb0 */
  push32(0x122df224u); f_122d9fb0();
  /* 122df224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df227 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df22d jne 0x122df231 */
  if (!C.zf) goto L_122df231;
  /* 122df22f jmp 0x122df233 */
  goto L_122df233;
L_122df231:;
  /* 122df231 jmp 0x122df1dc */
  goto L_122df1dc;
L_122df233:;
  /* 122df233 push 0x122fd9e8 */
  push32((uint32_t)(0x122fd9e8u));
  /* 122df238 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122df23e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df241 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 122df247 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122df24d push edx */
  push32((uint32_t)(EDX));
  /* 122df24e call 0x122e1ab0 */
  push32(0x122df253u); f_122e1ab0();
  /* 122df253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df256 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 122df25c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df263 jne 0x122df299 */
  if (!C.zf) goto L_122df299;
  /* 122df265 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122df26b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122df26e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df271 je 0x122df299 */
  if (C.zf) goto L_122df299;
  /* 122df273 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df277 je 0x122df292 */
  if (C.zf) goto L_122df292;
  /* 122df279 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122df27b call 0x122db5d0 */
  push32(0x122df280u); f_122db5d0();
  /* 122df280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df283 mov edx, dword ptr [0x12301ad4] */
  EDX = (r32((uint32_t)(0x12301ad4)));
  /* 122df289 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122df28c mov dword ptr [0x12301ad4], edx */
  w32((uint32_t)(0x12301ad4), (EDX));
L_122df292:;
  /* 122df292 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df294 jmp 0x122df46b */
  goto L_122df46b;
L_122df299:;
  /* 122df299 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df29d jg 0x122df2ea */
  if ((!C.zf&&C.sf==C.of)) goto L_122df2ea;
  /* 122df29f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 122df2a5 push eax */
  push32((uint32_t)(EAX));
  /* 122df2a6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122df2ac push ecx */
  push32((uint32_t)(ECX));
  /* 122df2ad lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 122df2b3 push edx */
  push32((uint32_t)(EDX));
  /* 122df2b4 call 0x122da9a0 */
  push32(0x122df2b9u); f_122da9a0();
  /* 122df2b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df2bc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 122df2c2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 122df2ca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 122df2d0 push ecx */
  push32((uint32_t)(ECX));
  /* 122df2d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122df2d4 push edx */
  push32((uint32_t)(EDX));
  /* 122df2d5 call 0x122df470 */
  push32(0x122df2dau); f_122df470();
  /* 122df2da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df2dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df2df je 0x122df2ea */
  if (C.zf) goto L_122df2ea;
  /* 122df2e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df2e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df2e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122df2ea:;
  /* 122df2ea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122df2f0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df2f6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 122df2fc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122df302 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122df305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df307 je 0x122df318 */
  if (C.zf) goto L_122df318;
  /* 122df309 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122df30f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df312 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_122df318:;
  /* 122df318 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122df31e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122df321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df323 jne 0x122df161 */
  if (!C.zf) goto L_122df161;
  /* 122df329 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df32d je 0x122df33c */
  if (C.zf) goto L_122df33c;
  /* 122df32f call 0x122df610 */
  push32(0x122df334u); f_122df610();
  /* 122df334 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 122df33a jmp 0x122df346 */
  goto L_122df346;
L_122df33c:;
  /* 122df33c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_122df346:;
  /* 122df346 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 122df34c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122df34f jmp 0x122df441 */
  goto L_122df441;
L_122df354:;
  /* 122df354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df357 push edx */
  push32((uint32_t)(EDX));
  /* 122df358 push 0 */
  push32((uint32_t)(0x0u));
  /* 122df35a push 0 */
  push32((uint32_t)(0x0u));
  /* 122df35c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 122df362 push eax */
  push32((uint32_t)(EAX));
  /* 122df363 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df366 push ecx */
  push32((uint32_t)(ECX));
  /* 122df367 call 0x122df710 */
  push32(0x122df36cu); f_122df710();
  /* 122df36c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df36f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122df372 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df376 je 0x122df441 */
  if (C.zf) goto L_122df441;
  /* 122df37c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122df383 jmp 0x122df38e */
  goto L_122df38e;
L_122df385:;
  /* 122df385 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122df388 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df38b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122df38e:;
  /* 122df38e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df392 jg 0x122df3f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_122df3f0;
  /* 122df394 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df398 je 0x122df3ee */
  if (C.zf) goto L_122df3ee;
  /* 122df39a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122df39d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df3a0 mov ecx, dword ptr [eax + 0x123004dc] */
  ECX = (r32((uint32_t)(EAX + 0x123004dc)));
  /* 122df3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 122df3a7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 122df3ad push edx */
  push32((uint32_t)(EDX));
  /* 122df3ae call 0x122e1a20 */
  push32(0x122df3b3u); f_122e1a20();
  /* 122df3b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df3b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df3b8 je 0x122df3e5 */
  if (C.zf) goto L_122df3e5;
  /* 122df3ba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 122df3c0 push eax */
  push32((uint32_t)(EAX));
  /* 122df3c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122df3c4 push ecx */
  push32((uint32_t)(ECX));
  /* 122df3c5 call 0x122df470 */
  push32(0x122df3cau); f_122df470();
  /* 122df3ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df3cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df3cf je 0x122df3dc */
  if (C.zf) goto L_122df3dc;
  /* 122df3d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df3d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df3d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122df3da jmp 0x122df3e3 */
  goto L_122df3e3;
L_122df3dc:;
  /* 122df3dc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_122df3e3:;
  /* 122df3e3 jmp 0x122df3ee */
  goto L_122df3ee;
L_122df3e5:;
  /* 122df3e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df3e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df3eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122df3ee:;
  /* 122df3ee jmp 0x122df385 */
  goto L_122df385;
L_122df3f0:;
  /* 122df3f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df3f4 je 0x122df41b */
  if (C.zf) goto L_122df41b;
  /* 122df3f6 call 0x122df610 */
  push32(0x122df3fbu); f_122df610();
  /* 122df3fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122df3fe push 2 */
  push32((uint32_t)(0x2u));
  /* 122df400 mov ecx, dword ptr [0x123004dc] */
  ECX = (r32((uint32_t)(0x123004dc)));
  /* 122df406 push ecx */
  push32((uint32_t)(ECX));
  /* 122df407 call 0x122d7c10 */
  push32(0x122df40cu); f_122d7c10();
  /* 122df40c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df40f mov dword ptr [0x123004dc], 0 */
  w32((uint32_t)(0x123004dc), (0x0u));
  /* 122df419 jmp 0x122df441 */
  goto L_122df441;
L_122df41b:;
  /* 122df41b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df41f je 0x122df42e */
  if (C.zf) goto L_122df42e;
  /* 122df421 call 0x122df610 */
  push32(0x122df426u); f_122df610();
  /* 122df426 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 122df42c jmp 0x122df438 */
  goto L_122df438;
L_122df42e:;
  /* 122df42e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_122df438:;
  /* 122df438 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 122df43e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122df441:;
  /* 122df441 jmp 0x122df44b */
  goto L_122df44b;
L_122df443:;
  /* 122df443 call 0x122df610 */
  push32(0x122df448u); f_122df610();
  /* 122df448 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122df44b:;
  /* 122df44b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df44f je 0x122df468 */
  if (C.zf) goto L_122df468;
  /* 122df451 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122df453 call 0x122db5d0 */
  push32(0x122df458u); f_122db5d0();
  /* 122df458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df45b mov eax, dword ptr [0x12301ad4] */
  EAX = (r32((uint32_t)(0x12301ad4)));
  /* 122df460 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122df463 mov dword ptr [0x12301ad4], eax */
  w32((uint32_t)(0x12301ad4), (EAX));
L_122df468:;
  /* 122df468 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_122df46b:;
  /* 122df46b mov esp, ebp */
  ESP = (EBP);
  /* 122df46d pop ebp */
  EBP = (pop32());
  /* 122df46e ret  */
  ESPCHK(0x122df080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f470 @ 0x122df470 (403 bytes, 117 insns) */
void f_122df470(void) {
  FTRACE(0x122df470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122df470 push ebp */
  push32((uint32_t)(EBP));
  /* 122df471 mov ebp, esp */
  EBP = (ESP);
  /* 122df473 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122df479 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df47c push eax */
  push32((uint32_t)(EAX));
  /* 122df47d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 122df483 push ecx */
  push32((uint32_t)(ECX));
  /* 122df484 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 122df48a push edx */
  push32((uint32_t)(EDX));
  /* 122df48b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 122df491 push eax */
  push32((uint32_t)(EAX));
  /* 122df492 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df495 push ecx */
  push32((uint32_t)(ECX));
  /* 122df496 call 0x122df710 */
  push32(0x122df49bu); f_122df710();
  /* 122df49b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df49e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df4a0 jne 0x122df4a9 */
  if (!C.zf) goto L_122df4a9;
  /* 122df4a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df4a4 jmp 0x122df5ff */
  goto L_122df5ff;
L_122df4a9:;
  /* 122df4a9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 122df4ae push 0x122fd9f0 */
  push32((uint32_t)(0x122fd9f0u));
  /* 122df4b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 122df4b5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 122df4bb push edx */
  push32((uint32_t)(EDX));
  /* 122df4bc call 0x122d9fb0 */
  push32(0x122df4c1u); f_122d9fb0();
  /* 122df4c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df4c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df4c7 push eax */
  push32((uint32_t)(EAX));
  /* 122df4c8 call 0x122d7180 */
  push32(0x122df4cdu); f_122d7180();
  /* 122df4cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df4d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122df4d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df4d7 jne 0x122df4e0 */
  if (!C.zf) goto L_122df4e0;
  /* 122df4d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df4db jmp 0x122df5ff */
  goto L_122df5ff;
L_122df4e0:;
  /* 122df4e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df4e3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df4e6 mov ecx, dword ptr [eax + 0x123004dc] */
  ECX = (r32((uint32_t)(EAX + 0x123004dc)));
  /* 122df4ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122df4ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df4f2 mov eax, dword ptr [edx*4 + 0x12301958] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12301958)));
  /* 122df4f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122df4fc push 6 */
  push32((uint32_t)(0x6u));
  /* 122df4fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df501 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df504 add ecx, 0x1230199c */
  { uint32_t _a=(ECX),_b=(0x1230199cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df50a push ecx */
  push32((uint32_t)(ECX));
  /* 122df50b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 122df50e push edx */
  push32((uint32_t)(EDX));
  /* 122df50f call 0x122de310 */
  push32(0x122df514u); f_122de310();
  /* 122df514 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df517 mov eax, dword ptr [0x12301970] */
  EAX = (r32((uint32_t)(0x12301970)));
  /* 122df51c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122df51f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 122df525 push ecx */
  push32((uint32_t)(ECX));
  /* 122df526 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122df529 push edx */
  push32((uint32_t)(EDX));
  /* 122df52a call 0x122da130 */
  push32(0x122df52fu); f_122da130();
  /* 122df52f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df532 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df535 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df538 mov dword ptr [ecx + 0x123004dc], eax */
  w32((uint32_t)(ECX + 0x123004dc), (EAX));
  /* 122df53e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 122df544 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122df54a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df54d mov dword ptr [eax*4 + 0x12301958], edx */
  w32((uint32_t)(EAX*4 + 0x12301958), (EDX));
  /* 122df554 push 6 */
  push32((uint32_t)(0x6u));
  /* 122df556 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 122df55c push ecx */
  push32((uint32_t)(ECX));
  /* 122df55d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df560 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df563 add edx, 0x1230199c */
  { uint32_t _a=(EDX),_b=(0x1230199cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df569 push edx */
  push32((uint32_t)(EDX));
  /* 122df56a call 0x122de310 */
  push32(0x122df56fu); f_122de310();
  /* 122df56f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df572 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df576 jne 0x122df583 */
  if (!C.zf) goto L_122df583;
  /* 122df578 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122df57e mov dword ptr [0x12301970], eax */
  w32((uint32_t)(0x12301970), (EAX));
L_122df583:;
  /* 122df583 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df587 jne 0x122df595 */
  if (!C.zf) goto L_122df595;
  /* 122df589 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122df58f mov dword ptr [0x12301974], ecx */
  w32((uint32_t)(0x12301974), (ECX));
L_122df595:;
  /* 122df595 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df598 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df59b call dword ptr [edx + 0x123004e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x123004e0))), 0x122df5a1u);
  /* 122df5a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df5a3 je 0x122df5dc */
  if (C.zf) goto L_122df5dc;
  /* 122df5a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df5a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df5ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df5ae mov dword ptr [eax + 0x123004dc], ecx */
  w32((uint32_t)(EAX + 0x123004dc), (ECX));
  /* 122df5b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 122df5b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122df5b9 push edx */
  push32((uint32_t)(EDX));
  /* 122df5ba call 0x122d7c10 */
  push32(0x122df5bfu); f_122d7c10();
  /* 122df5bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df5c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df5c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122df5c8 mov dword ptr [eax*4 + 0x12301958], ecx */
  w32((uint32_t)(EAX*4 + 0x12301958), (ECX));
  /* 122df5cf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122df5d2 mov dword ptr [0x12301970], edx */
  w32((uint32_t)(0x12301970), (EDX));
  /* 122df5d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df5da jmp 0x122df5ff */
  goto L_122df5ff;
L_122df5dc:;
  /* 122df5dc cmp dword ptr [ebp - 0xc], 0x123003c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x123003c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df5e3 je 0x122df5f3 */
  if (C.zf) goto L_122df5f3;
  /* 122df5e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122df5e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df5ea push eax */
  push32((uint32_t)(EAX));
  /* 122df5eb call 0x122d7c10 */
  push32(0x122df5f0u); f_122d7c10();
  /* 122df5f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122df5f3:;
  /* 122df5f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df5f6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df5f9 mov eax, dword ptr [ecx + 0x123004dc] */
  EAX = (r32((uint32_t)(ECX + 0x123004dc)));
L_122df5ff:;
  /* 122df5ff mov esp, ebp */
  ESP = (EBP);
  /* 122df601 pop ebp */
  EBP = (pop32());
  /* 122df602 ret  */
  ESPCHK(0x122df470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f610 @ 0x122df610 (256 bytes, 72 insns) */
void f_122df610(void) {
  FTRACE(0x122df610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122df610 push ebp */
  push32((uint32_t)(EBP));
  /* 122df611 mov ebp, esp */
  EBP = (ESP);
  /* 122df613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122df616 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 122df61d cmp dword ptr [0x123004dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123004dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df624 jne 0x122df644 */
  if (!C.zf) goto L_122df644;
  /* 122df626 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 122df62b push 0x122fd9f0 */
  push32((uint32_t)(0x122fd9f0u));
  /* 122df630 push 2 */
  push32((uint32_t)(0x2u));
  /* 122df632 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 122df637 call 0x122d7180 */
  push32(0x122df63cu); f_122d7180();
  /* 122df63c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df63f mov dword ptr [0x123004dc], eax */
  w32((uint32_t)(0x123004dc), (EAX));
L_122df644:;
  /* 122df644 mov eax, dword ptr [0x123004dc] */
  EAX = (r32((uint32_t)(0x123004dc)));
  /* 122df649 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122df64c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122df653 jmp 0x122df65e */
  goto L_122df65e;
L_122df655:;
  /* 122df655 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122df658 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df65b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122df65e:;
  /* 122df65e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122df661 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df664 mov eax, dword ptr [edx + 0x123004dc] */
  EAX = (r32((uint32_t)(EDX + 0x123004dc)));
  /* 122df66a push eax */
  push32((uint32_t)(EAX));
  /* 122df66b push 0x122fd9fc */
  push32((uint32_t)(0x122fd9fcu));
  /* 122df670 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122df673 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df676 mov edx, dword ptr [ecx + 0x123004d8] */
  EDX = (r32((uint32_t)(ECX + 0x123004d8)));
  /* 122df67c push edx */
  push32((uint32_t)(EDX));
  /* 122df67d push 3 */
  push32((uint32_t)(0x3u));
  /* 122df67f mov eax, dword ptr [0x123004dc] */
  EAX = (r32((uint32_t)(0x123004dc)));
  /* 122df684 push eax */
  push32((uint32_t)(EAX));
  /* 122df685 call 0x122df8b0 */
  push32(0x122df68au); f_122df8b0();
  /* 122df68a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df68d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df691 jge 0x122df6d9 */
  if ((C.sf==C.of)) goto L_122df6d9;
  /* 122df693 push 0x122fd9e8 */
  push32((uint32_t)(0x122fd9e8u));
  /* 122df698 mov ecx, dword ptr [0x123004dc] */
  ECX = (r32((uint32_t)(0x123004dc)));
  /* 122df69e push ecx */
  push32((uint32_t)(ECX));
  /* 122df69f call 0x122da140 */
  push32(0x122df6a4u); f_122da140();
  /* 122df6a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df6a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122df6aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df6ad imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df6b0 mov eax, dword ptr [edx + 0x123004dc] */
  EAX = (r32((uint32_t)(EDX + 0x123004dc)));
  /* 122df6b6 push eax */
  push32((uint32_t)(EAX));
  /* 122df6b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122df6ba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122df6bd mov edx, dword ptr [ecx + 0x123004dc] */
  EDX = (r32((uint32_t)(ECX + 0x123004dc)));
  /* 122df6c3 push edx */
  push32((uint32_t)(EDX));
  /* 122df6c4 call 0x122e1a20 */
  push32(0x122df6c9u); f_122e1a20();
  /* 122df6c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df6cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df6ce je 0x122df6d7 */
  if (C.zf) goto L_122df6d7;
  /* 122df6d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122df6d7:;
  /* 122df6d7 jmp 0x122df707 */
  goto L_122df707;
L_122df6d9:;
  /* 122df6d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df6dd jne 0x122df6e6 */
  if (!C.zf) goto L_122df6e6;
  /* 122df6df mov eax, dword ptr [0x123004dc] */
  EAX = (r32((uint32_t)(0x123004dc)));
  /* 122df6e4 jmp 0x122df70c */
  goto L_122df70c;
L_122df6e6:;
  /* 122df6e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122df6e8 mov eax, dword ptr [0x123004dc] */
  EAX = (r32((uint32_t)(0x123004dc)));
  /* 122df6ed push eax */
  push32((uint32_t)(EAX));
  /* 122df6ee call 0x122d7c10 */
  push32(0x122df6f3u); f_122d7c10();
  /* 122df6f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df6f6 mov dword ptr [0x123004dc], 0 */
  w32((uint32_t)(0x123004dc), (0x0u));
  /* 122df700 mov eax, dword ptr [0x123004f4] */
  EAX = (r32((uint32_t)(0x123004f4)));
  /* 122df705 jmp 0x122df70c */
  goto L_122df70c;
L_122df707:;
  /* 122df707 jmp 0x122df655 */
  goto L_122df655;
L_122df70c:;
  /* 122df70c mov esp, ebp */
  ESP = (EBP);
  /* 122df70e pop ebp */
  EBP = (pop32());
  /* 122df70f ret  */
  ESPCHK(0x122df610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f710 @ 0x122df710 (388 bytes, 115 insns) */
void f_122df710(void) {
  FTRACE(0x122df710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122df710 push ebp */
  push32((uint32_t)(EBP));
  /* 122df711 mov ebp, esp */
  EBP = (ESP);
  /* 122df713 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122df719 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df71d jne 0x122df726 */
  if (!C.zf) goto L_122df726;
  /* 122df71f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df721 jmp 0x122df890 */
  goto L_122df890;
L_122df726:;
  /* 122df726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df729 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122df72c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df72f jne 0x122df780 */
  if (!C.zf) goto L_122df780;
  /* 122df731 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df734 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 122df738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df73a jne 0x122df780 */
  if (!C.zf) goto L_122df780;
  /* 122df73c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df73f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 122df742 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df745 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 122df749 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df74d je 0x122df769 */
  if (C.zf) goto L_122df769;
  /* 122df74f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122df752 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 122df757 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122df75a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 122df760 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122df763 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_122df769:;
  /* 122df769 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df76d je 0x122df778 */
  if (C.zf) goto L_122df778;
  /* 122df76f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122df772 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_122df778:;
  /* 122df778 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df77b jmp 0x122df890 */
  goto L_122df890;
L_122df780:;
  /* 122df780 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df783 push ecx */
  push32((uint32_t)(ECX));
  /* 122df784 push 0x12300450 */
  push32((uint32_t)(0x12300450u));
  /* 122df789 call 0x122e1a20 */
  push32(0x122df78eu); f_122e1a20();
  /* 122df78e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df791 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df793 je 0x122df848 */
  if (C.zf) goto L_122df848;
  /* 122df799 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df79c push edx */
  push32((uint32_t)(EDX));
  /* 122df79d push 0x123003cc */
  push32((uint32_t)(0x123003ccu));
  /* 122df7a2 call 0x122e1a20 */
  push32(0x122df7a7u); f_122e1a20();
  /* 122df7a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df7aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df7ac je 0x122df848 */
  if (C.zf) goto L_122df848;
  /* 122df7b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df7b5 push eax */
  push32((uint32_t)(EAX));
  /* 122df7b6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 122df7bc push ecx */
  push32((uint32_t)(ECX));
  /* 122df7bd call 0x122df900 */
  push32(0x122df7c2u); f_122df900();
  /* 122df7c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df7c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df7c7 je 0x122df7d0 */
  if (C.zf) goto L_122df7d0;
  /* 122df7c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df7cb jmp 0x122df890 */
  goto L_122df890;
L_122df7d0:;
  /* 122df7d0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 122df7d6 push edx */
  push32((uint32_t)(EDX));
  /* 122df7d7 push 0x1230194c */
  push32((uint32_t)(0x1230194cu));
  /* 122df7dc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 122df7e2 push eax */
  push32((uint32_t)(EAX));
  /* 122df7e3 call 0x122e1b70 */
  push32(0x122df7e8u); f_122e1b70();
  /* 122df7e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df7eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df7ed jne 0x122df7f6 */
  if (!C.zf) goto L_122df7f6;
  /* 122df7ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df7f1 jmp 0x122df890 */
  goto L_122df890;
L_122df7f6:;
  /* 122df7f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122df7f8 mov cx, word ptr [0x12301950] */
  CX = (r16((uint32_t)(0x12301950)));
  /* 122df7ff mov dword ptr [0x12301954], ecx */
  w32((uint32_t)(0x12301954), (ECX));
  /* 122df805 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 122df80b push edx */
  push32((uint32_t)(EDX));
  /* 122df80c push 0x12300450 */
  push32((uint32_t)(0x12300450u));
  /* 122df811 call 0x122dfa60 */
  push32(0x122df816u); f_122dfa60();
  /* 122df816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df819 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df81c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122df81f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122df821 je 0x122df836 */
  if (C.zf) goto L_122df836;
  /* 122df823 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df826 push edx */
  push32((uint32_t)(EDX));
  /* 122df827 push 0x123003cc */
  push32((uint32_t)(0x123003ccu));
  /* 122df82c call 0x122da130 */
  push32(0x122df831u); f_122da130();
  /* 122df831 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df834 jmp 0x122df848 */
  goto L_122df848;
L_122df836:;
  /* 122df836 push 0x12300450 */
  push32((uint32_t)(0x12300450u));
  /* 122df83b push 0x123003cc */
  push32((uint32_t)(0x123003ccu));
  /* 122df840 call 0x122da130 */
  push32(0x122df845u); f_122da130();
  /* 122df845 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122df848:;
  /* 122df848 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df84c je 0x122df861 */
  if (C.zf) goto L_122df861;
  /* 122df84e push 6 */
  push32((uint32_t)(0x6u));
  /* 122df850 push 0x1230194c */
  push32((uint32_t)(0x1230194cu));
  /* 122df855 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122df858 push eax */
  push32((uint32_t)(EAX));
  /* 122df859 call 0x122de310 */
  push32(0x122df85eu); f_122de310();
  /* 122df85e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122df861:;
  /* 122df861 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df865 je 0x122df87a */
  if (C.zf) goto L_122df87a;
  /* 122df867 push 4 */
  push32((uint32_t)(0x4u));
  /* 122df869 push 0x12301954 */
  push32((uint32_t)(0x12301954u));
  /* 122df86e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122df871 push ecx */
  push32((uint32_t)(ECX));
  /* 122df872 call 0x122de310 */
  push32(0x122df877u); f_122de310();
  /* 122df877 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122df87a:;
  /* 122df87a push 0x12300450 */
  push32((uint32_t)(0x12300450u));
  /* 122df87f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df882 push edx */
  push32((uint32_t)(EDX));
  /* 122df883 call 0x122da130 */
  push32(0x122df888u); f_122da130();
  /* 122df888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df88b mov eax, 0x12300450 */
  EAX = (0x12300450u);
L_122df890:;
  /* 122df890 mov esp, ebp */
  ESP = (EBP);
  /* 122df892 pop ebp */
  EBP = (pop32());
  /* 122df893 ret  */
  ESPCHK(0x122df710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8a0 @ 0x122df8a0 (7 bytes, 5 insns) */
void f_122df8a0(void) {
  FTRACE(0x122df8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122df8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122df8a1 mov ebp, esp */
  EBP = (ESP);
  /* 122df8a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df8a5 pop ebp */
  EBP = (pop32());
  /* 122df8a6 ret  */
  ESPCHK(0x122df8a0u, _esp0);
  ESP += 4; return;
}

