#include "recomp.h"

/* FUN_100076b0 @ 0x106e76b0 (490 bytes, 165 insns) */
void f_106e76b0(void) {
  FTRACE(0x106e76b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e76b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e76b1 mov ebp, esp */
  EBP = (ESP);
  /* 106e76b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e76b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e76ba jne 0x106e76cd */
  if (!C.zf) goto L_106e76cd;
  /* 106e76bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e76bf push eax */
  push32((uint32_t)(EAX));
  /* 106e76c0 call 0x106e7500 */
  push32(0x106e76c5u); f_106e7500();
  /* 106e76c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e76c8 jmp 0x106e7896 */
  goto L_106e7896;
L_106e76cd:;
  /* 106e76cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e76d1 jne 0x106e76e6 */
  if (!C.zf) goto L_106e76e6;
  /* 106e76d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e76d6 push ecx */
  push32((uint32_t)(ECX));
  /* 106e76d7 call 0x106e78a0 */
  push32(0x106e76dcu); f_106e78a0();
  /* 106e76dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e76df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e76e1 jmp 0x106e7896 */
  goto L_106e7896;
L_106e76e6:;
  /* 106e76e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106e76ed cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e76f1 ja 0x106e7869 */
  if ((!C.cf&&!C.zf)) goto L_106e7869;
  /* 106e76f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e76f9 call 0x106e7130 */
  push32(0x106e76feu); f_106e7130();
  /* 106e76fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7701 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7704 push edx */
  push32((uint32_t)(EDX));
  /* 106e7705 call 0x106e7a30 */
  push32(0x106e770au); f_106e7a30();
  /* 106e770a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e770d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e7710 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7714 je 0x106e782c */
  if (C.zf) goto L_106e782c;
  /* 106e771a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e771d cmp eax, dword ptr [0x1070dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7723 ja 0x106e77a0 */
  if ((!C.cf&&!C.zf)) goto L_106e77a0;
  /* 106e7725 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7728 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7729 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e772c push edx */
  push32((uint32_t)(EDX));
  /* 106e772d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e7730 push eax */
  push32((uint32_t)(EAX));
  /* 106e7731 call 0x106e8900 */
  push32(0x106e7736u); f_106e8900();
  /* 106e7736 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e773b je 0x106e7745 */
  if (C.zf) goto L_106e7745;
  /* 106e773d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7740 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106e7743 jmp 0x106e77a0 */
  goto L_106e77a0;
L_106e7745:;
  /* 106e7745 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7748 push edx */
  push32((uint32_t)(EDX));
  /* 106e7749 call 0x106e80c0 */
  push32(0x106e774eu); f_106e80c0();
  /* 106e774e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7751 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e7754 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7758 je 0x106e77a0 */
  if (C.zf) goto L_106e77a0;
  /* 106e775a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e775d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 106e7760 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7763 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e7766 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7769 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e776c jae 0x106e7776 */
  if (!C.cf) goto L_106e7776;
  /* 106e776e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7771 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106e7774 jmp 0x106e777c */
  goto L_106e777c;
L_106e7776:;
  /* 106e7776 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7779 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106e777c:;
  /* 106e777c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e777f push edx */
  push32((uint32_t)(EDX));
  /* 106e7780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7783 push eax */
  push32((uint32_t)(EAX));
  /* 106e7784 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7787 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7788 call 0x106ea010 */
  push32(0x106e778du); f_106ea010();
  /* 106e778d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7790 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7793 push edx */
  push32((uint32_t)(EDX));
  /* 106e7794 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e7797 push eax */
  push32((uint32_t)(EAX));
  /* 106e7798 call 0x106e7af0 */
  push32(0x106e779du); f_106e7af0();
  /* 106e779d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e77a0:;
  /* 106e77a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e77a4 jne 0x106e7820 */
  if (!C.zf) goto L_106e7820;
  /* 106e77a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e77aa jne 0x106e77b3 */
  if (!C.zf) goto L_106e77b3;
  /* 106e77ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_106e77b3:;
  /* 106e77b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e77b6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e77b9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 106e77bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 106e77bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e77c2 push edx */
  push32((uint32_t)(EDX));
  /* 106e77c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e77c5 mov eax, dword ptr [0x10710e6c] */
  EAX = (r32((uint32_t)(0x10710e6c)));
  /* 106e77ca push eax */
  push32((uint32_t)(EAX));
  /* 106e77cb call dword ptr [0x10712368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712368))), 0x106e77d1u);
  /* 106e77d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e77d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e77d8 je 0x106e7820 */
  if (C.zf) goto L_106e7820;
  /* 106e77da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e77dd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 106e77e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e77e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e77e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e77e9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e77ec jae 0x106e77f6 */
  if (!C.cf) goto L_106e77f6;
  /* 106e77ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e77f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106e77f4 jmp 0x106e77fc */
  goto L_106e77fc;
L_106e77f6:;
  /* 106e77f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e77f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_106e77fc:;
  /* 106e77fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e77ff push eax */
  push32((uint32_t)(EAX));
  /* 106e7800 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7803 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7804 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7807 push edx */
  push32((uint32_t)(EDX));
  /* 106e7808 call 0x106ea010 */
  push32(0x106e780du); f_106ea010();
  /* 106e780d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7813 push eax */
  push32((uint32_t)(EAX));
  /* 106e7814 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e7817 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7818 call 0x106e7af0 */
  push32(0x106e781du); f_106e7af0();
  /* 106e781d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e7820:;
  /* 106e7820 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e7822 call 0x106e71d0 */
  push32(0x106e7827u); f_106e71d0();
  /* 106e7827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e782a jmp 0x106e7869 */
  goto L_106e7869;
L_106e782c:;
  /* 106e782c push 9 */
  push32((uint32_t)(0x9u));
  /* 106e782e call 0x106e71d0 */
  push32(0x106e7833u); f_106e71d0();
  /* 106e7833 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7836 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e783a jne 0x106e7843 */
  if (!C.zf) goto L_106e7843;
  /* 106e783c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_106e7843:;
  /* 106e7843 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7846 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7849 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 106e784c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 106e784f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7852 push eax */
  push32((uint32_t)(EAX));
  /* 106e7853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7856 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7857 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e7859 mov edx, dword ptr [0x10710e6c] */
  EDX = (r32((uint32_t)(0x10710e6c)));
  /* 106e785f push edx */
  push32((uint32_t)(EDX));
  /* 106e7860 call dword ptr [0x1071236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071236c))), 0x106e7866u);
  /* 106e7866 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106e7869:;
  /* 106e7869 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e786d jne 0x106e7878 */
  if (!C.zf) goto L_106e7878;
  /* 106e786f cmp dword ptr [0x1070f6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7876 jne 0x106e787d */
  if (!C.zf) goto L_106e787d;
L_106e7878:;
  /* 106e7878 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e787b jmp 0x106e7896 */
  goto L_106e7896;
L_106e787d:;
  /* 106e787d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7880 push eax */
  push32((uint32_t)(EAX));
  /* 106e7881 call 0x106e7470 */
  push32(0x106e7886u); f_106e7470();
  /* 106e7886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7889 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e788b jne 0x106e7891 */
  if (!C.zf) goto L_106e7891;
  /* 106e788d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e788f jmp 0x106e7896 */
  goto L_106e7896;
L_106e7891:;
  /* 106e7891 jmp 0x106e76e6 */
  goto L_106e76e6;
L_106e7896:;
  /* 106e7896 mov esp, ebp */
  ESP = (EBP);
  /* 106e7898 pop ebp */
  EBP = (pop32());
  /* 106e7899 ret  */
  ESPCHK(0x106e76b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078a0 @ 0x106e78a0 (104 bytes, 38 insns) */
void f_106e78a0(void) {
  FTRACE(0x106e78a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e78a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e78a1 mov ebp, esp */
  EBP = (ESP);
  /* 106e78a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e78a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e78a8 jne 0x106e78ac */
  if (!C.zf) goto L_106e78ac;
  /* 106e78aa jmp 0x106e7904 */
  goto L_106e7904;
L_106e78ac:;
  /* 106e78ac push 9 */
  push32((uint32_t)(0x9u));
  /* 106e78ae call 0x106e7130 */
  push32(0x106e78b3u); f_106e7130();
  /* 106e78b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e78b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e78b9 push eax */
  push32((uint32_t)(EAX));
  /* 106e78ba call 0x106e7a30 */
  push32(0x106e78bfu); f_106e7a30();
  /* 106e78bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e78c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e78c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e78c9 je 0x106e78e7 */
  if (C.zf) goto L_106e78e7;
  /* 106e78cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e78ce push ecx */
  push32((uint32_t)(ECX));
  /* 106e78cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e78d2 push edx */
  push32((uint32_t)(EDX));
  /* 106e78d3 call 0x106e7af0 */
  push32(0x106e78d8u); f_106e7af0();
  /* 106e78d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e78db push 9 */
  push32((uint32_t)(0x9u));
  /* 106e78dd call 0x106e71d0 */
  push32(0x106e78e2u); f_106e71d0();
  /* 106e78e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e78e5 jmp 0x106e7904 */
  goto L_106e7904;
L_106e78e7:;
  /* 106e78e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e78e9 call 0x106e71d0 */
  push32(0x106e78eeu); f_106e71d0();
  /* 106e78ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e78f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e78f4 push eax */
  push32((uint32_t)(EAX));
  /* 106e78f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e78f7 mov ecx, dword ptr [0x10710e6c] */
  ECX = (r32((uint32_t)(0x10710e6c)));
  /* 106e78fd push ecx */
  push32((uint32_t)(ECX));
  /* 106e78fe call dword ptr [0x1071231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071231c))), 0x106e7904u);
L_106e7904:;
  /* 106e7904 mov esp, ebp */
  ESP = (EBP);
  /* 106e7906 pop ebp */
  EBP = (pop32());
  /* 106e7907 ret  */
  ESPCHK(0x106e78a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007910 @ 0x106e7910 (116 bytes, 34 insns) */
void f_106e7910(void) {
  FTRACE(0x106e7910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7910 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7911 mov ebp, esp */
  EBP = (ESP);
  /* 106e7913 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7914 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 106e791b push 9 */
  push32((uint32_t)(0x9u));
  /* 106e791d call 0x106e7130 */
  push32(0x106e7922u); f_106e7130();
  /* 106e7922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7925 call 0x106e9020 */
  push32(0x106e792au); f_106e9020();
  /* 106e792a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e792c jge 0x106e7935 */
  if ((C.sf==C.of)) goto L_106e7935;
  /* 106e792e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_106e7935:;
  /* 106e7935 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e7937 call 0x106e71d0 */
  push32(0x106e793cu); f_106e71d0();
  /* 106e793c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e793f push 0 */
  push32((uint32_t)(0x0u));
  /* 106e7941 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e7943 mov eax, dword ptr [0x10710e6c] */
  EAX = (r32((uint32_t)(0x10710e6c)));
  /* 106e7948 push eax */
  push32((uint32_t)(EAX));
  /* 106e7949 call dword ptr [0x1071232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071232c))), 0x106e794fu);
  /* 106e794f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e7951 jne 0x106e797d */
  if (!C.zf) goto L_106e797d;
  /* 106e7953 call dword ptr [0x1071230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071230c))), 0x106e7959u);
  /* 106e7959 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e795c jne 0x106e7976 */
  if (!C.zf) goto L_106e7976;
  /* 106e795e call 0x106eb610 */
  push32(0x106e7963u); f_106eb610();
  /* 106e7963 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 106e7969 call 0x106eb600 */
  push32(0x106e796eu); f_106eb600();
  /* 106e796e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 106e7974 jmp 0x106e797d */
  goto L_106e797d;
L_106e7976:;
  /* 106e7976 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_106e797d:;
  /* 106e797d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7980 mov esp, ebp */
  ESP = (EBP);
  /* 106e7982 pop ebp */
  EBP = (pop32());
  /* 106e7983 ret  */
  ESPCHK(0x106e7910u, _esp0);
  ESP += 4; return;
}

/* FUN_10007990 @ 0x106e7990 (10 bytes, 5 insns) */
void f_106e7990(void) {
  FTRACE(0x106e7990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7990 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7991 mov ebp, esp */
  EBP = (ESP);
  /* 106e7993 call 0x106e7910 */
  push32(0x106e7998u); f_106e7910();
  /* 106e7998 pop ebp */
  EBP = (pop32());
  /* 106e7999 ret  */
  ESPCHK(0x106e7990u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a0 @ 0x106e79a0 (10 bytes, 5 insns) */
void f_106e79a0(void) {
  FTRACE(0x106e79a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e79a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e79a1 mov ebp, esp */
  EBP = (ESP);
  /* 106e79a3 mov eax, dword ptr [0x1070dc94] */
  EAX = (r32((uint32_t)(0x1070dc94)));
  /* 106e79a8 pop ebp */
  EBP = (pop32());
  /* 106e79a9 ret  */
  ESPCHK(0x106e79a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079b0 @ 0x106e79b0 (31 bytes, 11 insns) */
void f_106e79b0(void) {
  FTRACE(0x106e79b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e79b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e79b1 mov ebp, esp */
  EBP = (ESP);
  /* 106e79b3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e79ba jbe 0x106e79c0 */
  if ((C.cf||C.zf)) goto L_106e79c0;
  /* 106e79bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e79be jmp 0x106e79cd */
  goto L_106e79cd;
L_106e79c0:;
  /* 106e79c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e79c3 mov dword ptr [0x1070dc94], eax */
  w32((uint32_t)(0x1070dc94), (EAX));
  /* 106e79c8 mov eax, 1 */
  EAX = (0x1u);
L_106e79cd:;
  /* 106e79cd pop ebp */
  EBP = (pop32());
  /* 106e79ce ret  */
  ESPCHK(0x106e79b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d0 @ 0x106e79d0 (89 bytes, 20 insns) */
void f_106e79d0(void) {
  FTRACE(0x106e79d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e79d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e79d1 mov ebp, esp */
  EBP = (ESP);
  /* 106e79d3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 106e79d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e79da mov eax, dword ptr [0x10710e6c] */
  EAX = (r32((uint32_t)(0x10710e6c)));
  /* 106e79df push eax */
  push32((uint32_t)(EAX));
  /* 106e79e0 call dword ptr [0x10712368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712368))), 0x106e79e6u);
  /* 106e79e6 mov dword ptr [0x10710e68], eax */
  w32((uint32_t)(0x10710e68), (EAX));
  /* 106e79eb cmp dword ptr [0x10710e68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710e68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e79f2 jne 0x106e79f8 */
  if (!C.zf) goto L_106e79f8;
  /* 106e79f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e79f6 jmp 0x106e7a27 */
  goto L_106e7a27;
L_106e79f8:;
  /* 106e79f8 mov ecx, dword ptr [0x10710e68] */
  ECX = (r32((uint32_t)(0x10710e68)));
  /* 106e79fe mov dword ptr [0x10710e5c], ecx */
  w32((uint32_t)(0x10710e5c), (ECX));
  /* 106e7a04 mov dword ptr [0x10710e60], 0 */
  w32((uint32_t)(0x10710e60), (0x0u));
  /* 106e7a0e mov dword ptr [0x10710e64], 0 */
  w32((uint32_t)(0x10710e64), (0x0u));
  /* 106e7a18 mov dword ptr [0x10710e48], 0x10 */
  w32((uint32_t)(0x10710e48), (0x10u));
  /* 106e7a22 mov eax, 1 */
  EAX = (0x1u);
L_106e7a27:;
  /* 106e7a27 pop ebp */
  EBP = (pop32());
  /* 106e7a28 ret  */
  ESPCHK(0x106e79d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a30 @ 0x106e7a30 (85 bytes, 29 insns) */
void f_106e7a30(void) {
  FTRACE(0x106e7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7a31 mov ebp, esp */
  EBP = (ESP);
  /* 106e7a33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7a36 mov eax, dword ptr [0x10710e64] */
  EAX = (r32((uint32_t)(0x10710e64)));
  /* 106e7a3b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e7a3e mov ecx, dword ptr [0x10710e68] */
  ECX = (r32((uint32_t)(0x10710e68)));
  /* 106e7a44 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7a46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106e7a49 mov edx, dword ptr [0x10710e68] */
  EDX = (r32((uint32_t)(0x10710e68)));
  /* 106e7a4f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106e7a52:;
  /* 106e7a52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7a55 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7a58 jae 0x106e7a7f */
  if (!C.cf) goto L_106e7a7f;
  /* 106e7a5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7a5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7a60 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7a63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e7a66 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7a6d jae 0x106e7a74 */
  if (!C.cf) goto L_106e7a74;
  /* 106e7a6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7a72 jmp 0x106e7a81 */
  goto L_106e7a81;
L_106e7a74:;
  /* 106e7a74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7a77 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7a7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e7a7d jmp 0x106e7a52 */
  goto L_106e7a52;
L_106e7a7f:;
  /* 106e7a7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e7a81:;
  /* 106e7a81 mov esp, ebp */
  ESP = (EBP);
  /* 106e7a83 pop ebp */
  EBP = (pop32());
  /* 106e7a84 ret  */
  ESPCHK(0x106e7a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a90 @ 0x106e7a90 (95 bytes, 33 insns) */
void f_106e7a90(void) {
  FTRACE(0x106e7a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7a90 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7a91 mov ebp, esp */
  EBP = (ESP);
  /* 106e7a93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7a99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7a9c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7a9f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106e7aa2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7aa5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 106e7aa8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e7aab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e7ab0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7ab3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e7ab5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7ab8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106e7abb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106e7abd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e7abf jne 0x106e7ae1 */
  if (!C.zf) goto L_106e7ae1;
  /* 106e7ac1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7ac4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 106e7ac7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e7ac9 jne 0x106e7ae1 */
  if (!C.zf) goto L_106e7ae1;
  /* 106e7acb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7ace and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e7ad4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e7ad6 je 0x106e7ae1 */
  if (C.zf) goto L_106e7ae1;
  /* 106e7ad8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 106e7adf jmp 0x106e7ae8 */
  goto L_106e7ae8;
L_106e7ae1:;
  /* 106e7ae1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_106e7ae8:;
  /* 106e7ae8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e7aeb mov esp, ebp */
  ESP = (EBP);
  /* 106e7aed pop ebp */
  EBP = (pop32());
  /* 106e7aee ret  */
  ESPCHK(0x106e7a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x106e7af0 (1485 bytes, 453 insns) */
void f_106e7af0(void) {
  FTRACE(0x106e7af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7af0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7af1 mov ebp, esp */
  EBP = (ESP);
  /* 106e7af3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7af6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7af9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e7afc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 106e7aff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7b02 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7b05 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7b08 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106e7b0b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e7b0e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 106e7b11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e7b14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7b17 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e7b1d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7b20 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 106e7b27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106e7b2a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7b2d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7b30 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106e7b33 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7b36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e7b38 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7b3b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 106e7b3e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7b41 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7b44 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 106e7b47 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e7b4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e7b4c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106e7b4f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7b52 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 106e7b55 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e7b58 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e7b5b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106e7b5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e7b60 jne 0x106e7c88 */
  if (!C.zf) goto L_106e7c88;
  /* 106e7b66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e7b69 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106e7b6c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7b6f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106e7b72 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7b76 jbe 0x106e7b7f */
  if ((C.cf||C.zf)) goto L_106e7b7f;
  /* 106e7b78 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_106e7b7f:;
  /* 106e7b7f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e7b82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e7b85 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e7b88 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7b8b jne 0x106e7c61 */
  if (!C.zf) goto L_106e7c61;
  /* 106e7b91 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7b95 jae 0x106e7bf6 */
  if (!C.cf) goto L_106e7bf6;
  /* 106e7b97 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e7b9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e7b9f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e7ba1 not eax */
  EAX = (~(EAX));
  /* 106e7ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7ba6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7ba9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 106e7bad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106e7baf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7bb2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7bb5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 106e7bb9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7bbc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7bbf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106e7bc2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e7bc5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7bc8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7bcb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106e7bce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7bd1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7bd4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106e7bd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e7bda jne 0x106e7bf4 */
  if (!C.zf) goto L_106e7bf4;
  /* 106e7bdc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e7be1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e7be4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e7be6 not eax */
  EAX = (~(EAX));
  /* 106e7be8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7beb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e7bed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106e7bef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7bf2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106e7bf4:;
  /* 106e7bf4 jmp 0x106e7c61 */
  goto L_106e7c61;
L_106e7bf6:;
  /* 106e7bf6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e7bf9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7bfc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e7c01 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e7c03 not edx */
  EDX = (~(EDX));
  /* 106e7c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7c08 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7c0b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 106e7c12 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e7c14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7c17 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7c1a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 106e7c21 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7c24 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7c27 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e7c2a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e7c2d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7c30 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7c33 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106e7c36 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7c39 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7c3c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106e7c40 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e7c42 jne 0x106e7c61 */
  if (!C.zf) goto L_106e7c61;
  /* 106e7c44 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e7c47 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7c4a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e7c4f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e7c51 not edx */
  EDX = (~(EDX));
  /* 106e7c53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7c56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e7c59 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e7c5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7c5e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106e7c61:;
  /* 106e7c61 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e7c64 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106e7c67 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e7c6a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e7c6d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106e7c70 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e7c73 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e7c76 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e7c79 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106e7c7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106e7c7f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e7c82 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7c85 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_106e7c88:;
  /* 106e7c88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e7c8b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106e7c8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7c91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106e7c94 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7c98 jbe 0x106e7ca1 */
  if ((C.cf||C.zf)) goto L_106e7ca1;
  /* 106e7c9a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_106e7ca1:;
  /* 106e7ca1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e7ca4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106e7ca7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e7ca9 jne 0x106e7e05 */
  if (!C.zf) goto L_106e7e05;
  /* 106e7caf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7cb2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7cb5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 106e7cb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e7cbb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106e7cbe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7cc1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 106e7cc4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7cc8 jbe 0x106e7cd1 */
  if ((C.cf||C.zf)) goto L_106e7cd1;
  /* 106e7cca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_106e7cd1:;
  /* 106e7cd1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e7cd4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7cd7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 106e7cda mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e7cdd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106e7ce0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7ce3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106e7ce6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7cea jbe 0x106e7cf3 */
  if ((C.cf||C.zf)) goto L_106e7cf3;
  /* 106e7cec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_106e7cf3:;
  /* 106e7cf3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e7cf6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7cf9 je 0x106e7dff */
  if (C.zf) goto L_106e7dff;
  /* 106e7cff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 106e7d02 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106e7d05 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e7d08 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7d0b jne 0x106e7de1 */
  if (!C.zf) goto L_106e7de1;
  /* 106e7d11 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7d15 jae 0x106e7d76 */
  if (!C.cf) goto L_106e7d76;
  /* 106e7d17 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e7d1c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e7d1f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e7d21 not edx */
  EDX = (~(EDX));
  /* 106e7d23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7d26 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7d29 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106e7d2d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e7d2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7d32 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7d35 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106e7d39 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7d3c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7d3f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e7d42 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e7d45 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7d48 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7d4b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106e7d4e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7d51 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7d54 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106e7d58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e7d5a jne 0x106e7d74 */
  if (!C.zf) goto L_106e7d74;
  /* 106e7d5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e7d61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e7d64 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e7d66 not edx */
  EDX = (~(EDX));
  /* 106e7d68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7d6b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e7d6d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e7d6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7d72 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106e7d74:;
  /* 106e7d74 jmp 0x106e7de1 */
  goto L_106e7de1;
L_106e7d76:;
  /* 106e7d76 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e7d79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7d7c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e7d81 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e7d83 not eax */
  EAX = (~(EAX));
  /* 106e7d85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7d88 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7d8b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106e7d92 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106e7d94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7d97 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7d9a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 106e7da1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7da4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7da7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106e7daa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e7dad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7db0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7db3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106e7db6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7db9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7dbc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106e7dc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e7dc2 jne 0x106e7de1 */
  if (!C.zf) goto L_106e7de1;
  /* 106e7dc4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e7dc7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7dca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e7dcf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e7dd1 not eax */
  EAX = (~(EAX));
  /* 106e7dd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7dd6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e7dd9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106e7ddb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7dde mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106e7de1:;
  /* 106e7de1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 106e7de4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106e7de7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 106e7dea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e7ded mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106e7df0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106e7df3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e7df6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 106e7df9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106e7dfc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_106e7dff:;
  /* 106e7dff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 106e7e02 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_106e7e05:;
  /* 106e7e05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e7e08 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106e7e0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e7e0d jne 0x106e7e1b */
  if (!C.zf) goto L_106e7e1b;
  /* 106e7e0f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e7e12 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7e15 je 0x106e7f2b */
  if (C.zf) goto L_106e7f2b;
L_106e7e1b:;
  /* 106e7e1b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e7e1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7e21 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 106e7e24 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106e7e27 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7e2a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e7e2d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e7e30 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106e7e33 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7e36 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e7e39 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 106e7e3c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e7e3f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7e42 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 106e7e45 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7e48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e7e4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7e4e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106e7e51 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7e54 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7e57 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e7e5a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7e5d jne 0x106e7f2b */
  if (!C.zf) goto L_106e7f2b;
  /* 106e7e63 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7e67 jae 0x106e7ec4 */
  if (!C.cf) goto L_106e7ec4;
  /* 106e7e69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7e6c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7e6f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106e7e73 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7e76 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7e79 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e7e7c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106e7e7f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7e82 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7e85 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 106e7e88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e7e8a jne 0x106e7ea2 */
  if (!C.zf) goto L_106e7ea2;
  /* 106e7e8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e7e91 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e7e94 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e7e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7e99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e7e9b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e7e9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7ea0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106e7ea2:;
  /* 106e7ea2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e7ea7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e7eaa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e7eac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7eaf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7eb2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 106e7eb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106e7eb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7ebb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7ebe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 106e7ec2 jmp 0x106e7f2b */
  goto L_106e7f2b;
L_106e7ec4:;
  /* 106e7ec4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7ec7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7eca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106e7ece mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7ed1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7ed4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e7ed7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106e7eda mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7edd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7ee0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 106e7ee3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e7ee5 jne 0x106e7f02 */
  if (!C.zf) goto L_106e7f02;
  /* 106e7ee7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e7eea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7eed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e7ef2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e7ef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7ef7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e7efa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e7efc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7eff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106e7f02:;
  /* 106e7f02 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e7f05 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7f08 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e7f0d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e7f0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7f12 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7f15 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106e7f1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106e7f1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7f21 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106e7f24 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_106e7f2b:;
  /* 106e7f2b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7f2e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e7f31 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106e7f33 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e7f36 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7f39 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e7f3c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 106e7f3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7f42 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e7f44 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7f47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7f4a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106e7f4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7f4f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7f52 jne 0x106e80b9 */
  if (!C.zf) goto L_106e80b9;
  /* 106e7f58 cmp dword ptr [0x10710e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7f5f je 0x106e80a8 */
  if (C.zf) goto L_106e80a8;
  /* 106e7f65 mov eax, dword ptr [0x10710e58] */
  EAX = (r32((uint32_t)(0x10710e58)));
  /* 106e7f6a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 106e7f6d mov ecx, dword ptr [0x10710e60] */
  ECX = (r32((uint32_t)(0x10710e60)));
  /* 106e7f73 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106e7f76 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7f78 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106e7f7b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 106e7f80 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106e7f85 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e7f88 push eax */
  push32((uint32_t)(EAX));
  /* 106e7f89 call dword ptr [0x10712350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712350))), 0x106e7f8fu);
  /* 106e7f8f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e7f94 mov ecx, dword ptr [0x10710e58] */
  ECX = (r32((uint32_t)(0x10710e58)));
  /* 106e7f9a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e7f9c mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e7fa1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106e7fa4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e7fa6 mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e7fac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106e7faf mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e7fb4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e7fb7 mov edx, dword ptr [0x10710e58] */
  EDX = (r32((uint32_t)(0x10710e58)));
  /* 106e7fbd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 106e7fc8 mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e7fcd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e7fd0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 106e7fd3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e7fd6 mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e7fdb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e7fde mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 106e7fe1 mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e7fe7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e7fea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 106e7fee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e7ff0 jne 0x106e8006 */
  if (!C.zf) goto L_106e8006;
  /* 106e7ff2 mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e7ff8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e7ffb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 106e7ffd mov ecx, dword ptr [0x10710e60] */
  ECX = (r32((uint32_t)(0x10710e60)));
  /* 106e8003 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_106e8006:;
  /* 106e8006 mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e800c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8010 jne 0x106e80a8 */
  if (!C.zf) goto L_106e80a8;
  /* 106e8016 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106e801b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e801d mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e8022 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106e8025 push ecx */
  push32((uint32_t)(ECX));
  /* 106e8026 call dword ptr [0x10712350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712350))), 0x106e802cu);
  /* 106e802c mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e8032 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e8035 push eax */
  push32((uint32_t)(EAX));
  /* 106e8036 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e8038 mov ecx, dword ptr [0x10710e6c] */
  ECX = (r32((uint32_t)(0x10710e6c)));
  /* 106e803e push ecx */
  push32((uint32_t)(ECX));
  /* 106e803f call dword ptr [0x1071231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071231c))), 0x106e8045u);
  /* 106e8045 mov edx, dword ptr [0x10710e64] */
  EDX = (r32((uint32_t)(0x10710e64)));
  /* 106e804b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e804e mov eax, dword ptr [0x10710e68] */
  EAX = (r32((uint32_t)(0x10710e68)));
  /* 106e8053 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8055 mov ecx, dword ptr [0x10710e60] */
  ECX = (r32((uint32_t)(0x10710e60)));
  /* 106e805b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e805e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8060 push eax */
  push32((uint32_t)(EAX));
  /* 106e8061 mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e8067 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e806a push edx */
  push32((uint32_t)(EDX));
  /* 106e806b mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e8070 push eax */
  push32((uint32_t)(EAX));
  /* 106e8071 call 0x106eb620 */
  push32(0x106e8076u); f_106eb620();
  /* 106e8076 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8079 mov ecx, dword ptr [0x10710e64] */
  ECX = (r32((uint32_t)(0x10710e64)));
  /* 106e807f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8082 mov dword ptr [0x10710e64], ecx */
  w32((uint32_t)(0x10710e64), (ECX));
  /* 106e8088 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e808b cmp edx, dword ptr [0x10710e60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10710e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8091 jbe 0x106e809c */
  if ((C.cf||C.zf)) goto L_106e809c;
  /* 106e8093 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8096 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8099 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106e809c:;
  /* 106e809c mov ecx, dword ptr [0x10710e68] */
  ECX = (r32((uint32_t)(0x10710e68)));
  /* 106e80a2 mov dword ptr [0x10710e5c], ecx */
  w32((uint32_t)(0x10710e5c), (ECX));
L_106e80a8:;
  /* 106e80a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e80ab mov dword ptr [0x10710e60], edx */
  w32((uint32_t)(0x10710e60), (EDX));
  /* 106e80b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e80b4 mov dword ptr [0x10710e58], eax */
  w32((uint32_t)(0x10710e58), (EAX));
L_106e80b9:;
  /* 106e80b9 mov esp, ebp */
  ESP = (EBP);
  /* 106e80bb pop ebp */
  EBP = (pop32());
  /* 106e80bc ret  */
  ESPCHK(0x106e7af0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080c0 @ 0x106e80c0 (1334 bytes, 427 insns) */
void f_106e80c0(void) {
  FTRACE(0x106e80c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e80c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e80c1 mov ebp, esp */
  EBP = (ESP);
  /* 106e80c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e80c6 push esi */
  push32((uint32_t)(ESI));
  /* 106e80c7 mov eax, dword ptr [0x10710e64] */
  EAX = (r32((uint32_t)(0x10710e64)));
  /* 106e80cc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e80cf mov ecx, dword ptr [0x10710e68] */
  ECX = (r32((uint32_t)(0x10710e68)));
  /* 106e80d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e80d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106e80da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e80dd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e80e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 106e80e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106e80e6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e80e9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106e80ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e80ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106e80f2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e80f6 jge 0x106e810c */
  if ((C.sf==C.of)) goto L_106e810c;
  /* 106e80f8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e80fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e80fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e8100 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106e8103 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 106e810a jmp 0x106e8121 */
  goto L_106e8121;
L_106e810c:;
  /* 106e810c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106e8113 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8116 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8119 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e811c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e811e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_106e8121:;
  /* 106e8121 mov ecx, dword ptr [0x10710e5c] */
  ECX = (r32((uint32_t)(0x10710e5c)));
  /* 106e8127 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_106e812a:;
  /* 106e812a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e812d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8130 jae 0x106e8156 */
  if (!C.cf) goto L_106e8156;
  /* 106e8132 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8135 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e8138 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 106e813a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e813d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 106e8140 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 106e8143 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8145 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e8147 je 0x106e814b */
  if (C.zf) goto L_106e814b;
  /* 106e8149 jmp 0x106e8156 */
  goto L_106e8156;
L_106e814b:;
  /* 106e814b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e814e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8151 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106e8154 jmp 0x106e812a */
  goto L_106e812a;
L_106e8156:;
  /* 106e8156 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8159 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e815c jne 0x106e823d */
  if (!C.zf) goto L_106e823d;
  /* 106e8162 mov eax, dword ptr [0x10710e68] */
  EAX = (r32((uint32_t)(0x10710e68)));
  /* 106e8167 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_106e816a:;
  /* 106e816a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e816d cmp ecx, dword ptr [0x10710e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10710e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8173 jae 0x106e8199 */
  if (!C.cf) goto L_106e8199;
  /* 106e8175 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8178 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e817b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 106e817d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8180 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106e8183 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 106e8186 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e8188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e818a je 0x106e818e */
  if (C.zf) goto L_106e818e;
  /* 106e818c jmp 0x106e8199 */
  goto L_106e8199;
L_106e818e:;
  /* 106e818e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8191 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8194 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e8197 jmp 0x106e816a */
  goto L_106e816a;
L_106e8199:;
  /* 106e8199 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e819c cmp ecx, dword ptr [0x10710e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10710e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e81a2 jne 0x106e823d */
  if (!C.zf) goto L_106e823d;
L_106e81a8:;
  /* 106e81a8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e81ab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e81ae jae 0x106e81c6 */
  if (!C.cf) goto L_106e81c6;
  /* 106e81b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e81b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e81b7 je 0x106e81bb */
  if (C.zf) goto L_106e81bb;
  /* 106e81b9 jmp 0x106e81c6 */
  goto L_106e81c6;
L_106e81bb:;
  /* 106e81bb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e81be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e81c1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106e81c4 jmp 0x106e81a8 */
  goto L_106e81a8;
L_106e81c6:;
  /* 106e81c6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e81c9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e81cc jne 0x106e8217 */
  if (!C.zf) goto L_106e8217;
  /* 106e81ce mov eax, dword ptr [0x10710e68] */
  EAX = (r32((uint32_t)(0x10710e68)));
  /* 106e81d3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_106e81d6:;
  /* 106e81d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e81d9 cmp ecx, dword ptr [0x10710e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10710e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e81df jae 0x106e81f7 */
  if (!C.cf) goto L_106e81f7;
  /* 106e81e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e81e4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e81e8 je 0x106e81ec */
  if (C.zf) goto L_106e81ec;
  /* 106e81ea jmp 0x106e81f7 */
  goto L_106e81f7;
L_106e81ec:;
  /* 106e81ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e81ef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e81f2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e81f5 jmp 0x106e81d6 */
  goto L_106e81d6;
L_106e81f7:;
  /* 106e81f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e81fa cmp ecx, dword ptr [0x10710e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10710e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8200 jne 0x106e8217 */
  if (!C.zf) goto L_106e8217;
  /* 106e8202 call 0x106e8600 */
  push32(0x106e8207u); f_106e8600();
  /* 106e8207 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e820a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e820e jne 0x106e8217 */
  if (!C.zf) goto L_106e8217;
  /* 106e8210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e8212 jmp 0x106e85f1 */
  goto L_106e85f1;
L_106e8217:;
  /* 106e8217 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e821a push edx */
  push32((uint32_t)(EDX));
  /* 106e821b call 0x106e8710 */
  push32(0x106e8220u); f_106e8710();
  /* 106e8220 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8223 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8226 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106e8229 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106e822b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e822e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e8231 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8234 jne 0x106e823d */
  if (!C.zf) goto L_106e823d;
  /* 106e8236 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e8238 jmp 0x106e85f1 */
  goto L_106e85f1;
L_106e823d:;
  /* 106e823d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8240 mov dword ptr [0x10710e5c], edx */
  w32((uint32_t)(0x10710e5c), (EDX));
  /* 106e8246 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8249 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e824c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 106e824f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8252 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e8254 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 106e8257 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e825b je 0x106e8280 */
  if (C.zf) goto L_106e8280;
  /* 106e825d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8260 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8263 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e8266 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 106e826a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e826d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8270 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 106e8273 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 106e827a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 106e827c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e827e jne 0x106e82b5 */
  if (!C.zf) goto L_106e82b5;
L_106e8280:;
  /* 106e8280 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_106e8287:;
  /* 106e8287 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e828a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e828d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e8290 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 106e8294 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8297 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e829a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 106e829d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 106e82a4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 106e82a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e82a8 jne 0x106e82b5 */
  if (!C.zf) goto L_106e82b5;
  /* 106e82aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e82ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e82b0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 106e82b3 jmp 0x106e8287 */
  goto L_106e8287;
L_106e82b5:;
  /* 106e82b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e82b8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e82be mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e82c1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 106e82c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e82cb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106e82d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e82d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e82d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e82db and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 106e82df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106e82e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e82e6 jne 0x106e8302 */
  if (!C.zf) goto L_106e8302;
  /* 106e82e8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 106e82ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e82f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e82f5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106e82f8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 106e82ff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_106e8302:;
  /* 106e8302 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8306 jl 0x106e831b */
  if ((C.sf!=C.of)) goto L_106e831b;
  /* 106e8308 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e830b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106e830d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106e8310 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8313 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8316 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106e8319 jmp 0x106e8302 */
  goto L_106e8302;
L_106e831b:;
  /* 106e831b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e831e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8321 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 106e8325 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106e8328 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e832b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e832d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8330 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e8333 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e8336 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106e8339 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e833c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106e833f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8343 jle 0x106e834c */
  if ((C.zf||C.sf!=C.of)) goto L_106e834c;
  /* 106e8345 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_106e834c:;
  /* 106e834c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e834f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8352 je 0x106e8570 */
  if (C.zf) goto L_106e8570;
  /* 106e8358 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e835b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e835e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e8361 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8364 jne 0x106e843a */
  if (!C.zf) goto L_106e843a;
  /* 106e836a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e836e jge 0x106e83cf */
  if ((C.sf==C.of)) goto L_106e83cf;
  /* 106e8370 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e8375 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8378 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e837a not eax */
  EAX = (~(EAX));
  /* 106e837c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e837f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8382 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 106e8386 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8388 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e838b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e838e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 106e8392 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8395 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8398 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106e839b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e839e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e83a1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e83a4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106e83a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e83aa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e83ad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106e83b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e83b3 jne 0x106e83cd */
  if (!C.zf) goto L_106e83cd;
  /* 106e83b5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e83ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e83bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e83bf not eax */
  EAX = (~(EAX));
  /* 106e83c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e83c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e83c6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106e83c8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e83cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106e83cd:;
  /* 106e83cd jmp 0x106e843a */
  goto L_106e843a;
L_106e83cf:;
  /* 106e83cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e83d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e83d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e83da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e83dc not edx */
  EDX = (~(EDX));
  /* 106e83de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e83e1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e83e4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 106e83eb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e83ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e83f0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e83f3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 106e83fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e83fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8400 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e8403 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e8406 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8409 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e840c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106e840f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8412 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8415 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106e8419 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e841b jne 0x106e843a */
  if (!C.zf) goto L_106e843a;
  /* 106e841d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8420 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8423 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e8428 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e842a not edx */
  EDX = (~(EDX));
  /* 106e842c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e842f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e8432 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8434 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8437 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106e843a:;
  /* 106e843a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e843d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106e8440 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8443 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e8446 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106e8449 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e844c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e844f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8452 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106e8455 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106e8458 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e845c je 0x106e8570 */
  if (C.zf) goto L_106e8570;
  /* 106e8462 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8465 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8468 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 106e846b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106e846e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8471 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e8474 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e8477 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106e847a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e847d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e8480 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106e8483 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e8486 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8489 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 106e848c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e848f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e8492 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8495 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106e8498 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e849b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e849e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e84a1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e84a4 jne 0x106e8570 */
  if (!C.zf) goto L_106e8570;
  /* 106e84aa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e84ae jge 0x106e850a */
  if ((C.sf==C.of)) goto L_106e850a;
  /* 106e84b0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e84b3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e84b6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106e84ba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e84bd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e84c0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106e84c3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106e84c5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e84c8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e84cb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 106e84ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e84d0 jne 0x106e84e8 */
  if (!C.zf) goto L_106e84e8;
  /* 106e84d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e84d7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e84da shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e84dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e84df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e84e1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106e84e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e84e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106e84e8:;
  /* 106e84e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e84ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e84f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e84f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e84f5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e84f8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106e84fc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e84fe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8501 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8504 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106e8508 jmp 0x106e8570 */
  goto L_106e8570;
L_106e850a:;
  /* 106e850a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e850d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8510 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106e8514 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8517 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e851a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106e851d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106e851f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8522 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8525 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 106e8528 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e852a jne 0x106e8547 */
  if (!C.zf) goto L_106e8547;
  /* 106e852c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e852f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8532 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e8537 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e8539 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e853c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e853f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106e8541 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8544 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106e8547:;
  /* 106e8547 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e854a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e854d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e8552 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e8554 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8557 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e855a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 106e8561 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e8563 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8566 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e8569 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_106e8570:;
  /* 106e8570 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8574 je 0x106e858a */
  if (C.zf) goto L_106e858a;
  /* 106e8576 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e857c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106e857e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8581 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8584 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e8587 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_106e858a:;
  /* 106e858a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e858d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8590 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106e8593 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8596 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8599 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e859c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106e859e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e85a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e85a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e85a7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e85aa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 106e85ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e85b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e85b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e85b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e85b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e85ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e85bd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106e85bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e85c1 jne 0x106e85e3 */
  if (!C.zf) goto L_106e85e3;
  /* 106e85c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e85c6 cmp eax, dword ptr [0x10710e60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10710e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e85cc jne 0x106e85e3 */
  if (!C.zf) goto L_106e85e3;
  /* 106e85ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e85d1 cmp ecx, dword ptr [0x10710e58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10710e58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e85d7 jne 0x106e85e3 */
  if (!C.zf) goto L_106e85e3;
  /* 106e85d9 mov dword ptr [0x10710e60], 0 */
  w32((uint32_t)(0x10710e60), (0x0u));
L_106e85e3:;
  /* 106e85e3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106e85e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e85e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106e85eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e85ee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_106e85f1:;
  /* 106e85f1 pop esi */
  ESI = (pop32());
  /* 106e85f2 mov esp, ebp */
  ESP = (EBP);
  /* 106e85f4 pop ebp */
  EBP = (pop32());
  /* 106e85f5 ret  */
  ESPCHK(0x106e80c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008600 @ 0x106e8600 (271 bytes, 78 insns) */
void f_106e8600(void) {
  FTRACE(0x106e8600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e8600 push ebp */
  push32((uint32_t)(EBP));
  /* 106e8601 mov ebp, esp */
  EBP = (ESP);
  /* 106e8603 push ecx */
  push32((uint32_t)(ECX));
  /* 106e8604 mov eax, dword ptr [0x10710e64] */
  EAX = (r32((uint32_t)(0x10710e64)));
  /* 106e8609 cmp eax, dword ptr [0x10710e48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10710e48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e860f jne 0x106e865b */
  if (!C.zf) goto L_106e865b;
  /* 106e8611 mov ecx, dword ptr [0x10710e48] */
  ECX = (r32((uint32_t)(0x10710e48)));
  /* 106e8617 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e861a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e861d push ecx */
  push32((uint32_t)(ECX));
  /* 106e861e mov edx, dword ptr [0x10710e68] */
  EDX = (r32((uint32_t)(0x10710e68)));
  /* 106e8624 push edx */
  push32((uint32_t)(EDX));
  /* 106e8625 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e8627 mov eax, dword ptr [0x10710e6c] */
  EAX = (r32((uint32_t)(0x10710e6c)));
  /* 106e862c push eax */
  push32((uint32_t)(EAX));
  /* 106e862d call dword ptr [0x1071236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071236c))), 0x106e8633u);
  /* 106e8633 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e8636 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e863a jne 0x106e8643 */
  if (!C.zf) goto L_106e8643;
  /* 106e863c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e863e jmp 0x106e870b */
  goto L_106e870b;
L_106e8643:;
  /* 106e8643 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8646 mov dword ptr [0x10710e68], ecx */
  w32((uint32_t)(0x10710e68), (ECX));
  /* 106e864c mov edx, dword ptr [0x10710e48] */
  EDX = (r32((uint32_t)(0x10710e48)));
  /* 106e8652 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8655 mov dword ptr [0x10710e48], edx */
  w32((uint32_t)(0x10710e48), (EDX));
L_106e865b:;
  /* 106e865b mov eax, dword ptr [0x10710e64] */
  EAX = (r32((uint32_t)(0x10710e64)));
  /* 106e8660 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e8663 mov ecx, dword ptr [0x10710e68] */
  ECX = (r32((uint32_t)(0x10710e68)));
  /* 106e8669 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e866b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e866e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 106e8673 push 8 */
  push32((uint32_t)(0x8u));
  /* 106e8675 mov edx, dword ptr [0x10710e6c] */
  EDX = (r32((uint32_t)(0x10710e6c)));
  /* 106e867b push edx */
  push32((uint32_t)(EDX));
  /* 106e867c call dword ptr [0x10712368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712368))), 0x106e8682u);
  /* 106e8682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8685 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 106e8688 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e868b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e868f jne 0x106e8695 */
  if (!C.zf) goto L_106e8695;
  /* 106e8691 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e8693 jmp 0x106e870b */
  goto L_106e870b;
L_106e8695:;
  /* 106e8695 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e8697 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 106e869c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 106e86a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e86a3 call dword ptr [0x10712370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712370))), 0x106e86a9u);
  /* 106e86a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e86ac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 106e86af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e86b2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e86b6 jne 0x106e86d2 */
  if (!C.zf) goto L_106e86d2;
  /* 106e86b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e86bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e86be push ecx */
  push32((uint32_t)(ECX));
  /* 106e86bf push 0 */
  push32((uint32_t)(0x0u));
  /* 106e86c1 mov edx, dword ptr [0x10710e6c] */
  EDX = (r32((uint32_t)(0x10710e6c)));
  /* 106e86c7 push edx */
  push32((uint32_t)(EDX));
  /* 106e86c8 call dword ptr [0x1071231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071231c))), 0x106e86ceu);
  /* 106e86ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e86d0 jmp 0x106e870b */
  goto L_106e870b;
L_106e86d2:;
  /* 106e86d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e86d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106e86db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e86de mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106e86e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e86e8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 106e86ef mov eax, dword ptr [0x10710e64] */
  EAX = (r32((uint32_t)(0x10710e64)));
  /* 106e86f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e86f7 mov dword ptr [0x10710e64], eax */
  w32((uint32_t)(0x10710e64), (EAX));
  /* 106e86fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e86ff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106e8702 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 106e8708 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106e870b:;
  /* 106e870b mov esp, ebp */
  ESP = (EBP);
  /* 106e870d pop ebp */
  EBP = (pop32());
  /* 106e870e ret  */
  ESPCHK(0x106e8600u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x106e8710 (494 bytes, 149 insns) */
void f_106e8710(void) {
  FTRACE(0x106e8710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e8710 push ebp */
  push32((uint32_t)(EBP));
  /* 106e8711 mov ebp, esp */
  EBP = (ESP);
  /* 106e8713 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8719 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e871c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106e871f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8722 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106e8725 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e8728 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_106e872f:;
  /* 106e872f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8733 jl 0x106e8748 */
  if ((C.sf!=C.of)) goto L_106e8748;
  /* 106e8735 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e8738 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106e873a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106e873d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8740 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8743 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106e8746 jmp 0x106e872f */
  goto L_106e872f;
L_106e8748:;
  /* 106e8748 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e874b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e8751 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8754 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 106e875b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106e875e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106e8765 jmp 0x106e8770 */
  goto L_106e8770;
L_106e8767:;
  /* 106e8767 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e876a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e876d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_106e8770:;
  /* 106e8770 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8774 jge 0x106e8796 */
  if ((C.sf==C.of)) goto L_106e8796;
  /* 106e8776 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8779 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e877c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 106e877f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e8782 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8785 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8788 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106e878b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e878e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8791 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 106e8794 jmp 0x106e8767 */
  goto L_106e8767;
L_106e8796:;
  /* 106e8796 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8799 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 106e879c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e879f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106e87a2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e87a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106e87a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e87a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106e87ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106e87b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e87b6 push edx */
  push32((uint32_t)(EDX));
  /* 106e87b7 call dword ptr [0x10712370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712370))), 0x106e87bdu);
  /* 106e87bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e87bf jne 0x106e87c9 */
  if (!C.zf) goto L_106e87c9;
  /* 106e87c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e87c4 jmp 0x106e88fa */
  goto L_106e88fa;
L_106e87c9:;
  /* 106e87c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e87cc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e87d1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106e87d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e87d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e87da jmp 0x106e87e8 */
  goto L_106e87e8;
L_106e87dc:;
  /* 106e87dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e87df add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e87e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106e87e8:;
  /* 106e87e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e87eb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e87ee ja 0x106e884d */
  if ((!C.cf&&!C.zf)) goto L_106e884d;
  /* 106e87f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e87f3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 106e87fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e87fd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 106e8807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e880a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e880d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e8810 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8813 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 106e8819 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e881c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8822 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8825 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106e8828 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e882b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8831 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8834 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106e8837 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e883a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e883f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106e8842 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e8845 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 106e884b jmp 0x106e87dc */
  goto L_106e87dc;
L_106e884d:;
  /* 106e884d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e8850 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8856 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106e8859 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e885c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e885f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8862 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106e8865 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8868 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e886b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e886e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8871 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8874 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106e8877 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e887a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e887d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8880 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 106e8883 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8886 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106e8889 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e888c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e888f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8892 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 106e8895 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8898 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e889b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 106e88a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e88a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e88a9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 106e88b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e88b7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 106e88bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e88be mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 106e88c1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106e88c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e88c7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 106e88ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e88cc jne 0x106e88dd */
  if (!C.zf) goto L_106e88dd;
  /* 106e88ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e88d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e88d4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106e88d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e88da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106e88dd:;
  /* 106e88dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e88e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e88e5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e88e7 not edx */
  EDX = (~(EDX));
  /* 106e88e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e88ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106e88ef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e88f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e88f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106e88f7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_106e88fa:;
  /* 106e88fa mov esp, ebp */
  ESP = (EBP);
  /* 106e88fc pop ebp */
  EBP = (pop32());
  /* 106e88fd ret  */
  ESPCHK(0x106e8710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008900 @ 0x106e8900 (1515 bytes, 489 insns) */
void f_106e8900(void) {
  FTRACE(0x106e8900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e8900 push ebp */
  push32((uint32_t)(EBP));
  /* 106e8901 mov ebp, esp */
  EBP = (ESP);
  /* 106e8903 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8906 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e8909 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e890c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 106e890e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106e8911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8914 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106e8917 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 106e891a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e891d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e8920 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8923 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106e8926 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e8929 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 106e892c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e892f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8932 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e8938 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e893b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 106e8942 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106e8945 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e8948 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e894b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106e894e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8951 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e8953 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8956 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106e8959 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e895c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e895f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 106e8962 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8965 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e8967 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106e896a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e896d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8970 jle 0x106e8c26 */
  if ((C.zf||C.sf!=C.of)) goto L_106e8c26;
  /* 106e8976 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8979 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106e897c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e897e jne 0x106e898b */
  if (!C.zf) goto L_106e898b;
  /* 106e8980 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8983 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8986 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8989 jle 0x106e8992 */
  if ((C.zf||C.sf!=C.of)) goto L_106e8992;
L_106e898b:;
  /* 106e898b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e898d jmp 0x106e8ee7 */
  goto L_106e8ee7;
L_106e8992:;
  /* 106e8992 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8995 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106e8998 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e899b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106e899e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e89a2 jbe 0x106e89ab */
  if ((C.cf||C.zf)) goto L_106e89ab;
  /* 106e89a4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_106e89ab:;
  /* 106e89ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e89ae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e89b1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e89b4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e89b7 jne 0x106e8a8d */
  if (!C.zf) goto L_106e8a8d;
  /* 106e89bd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e89c1 jae 0x106e8a22 */
  if (!C.cf) goto L_106e8a22;
  /* 106e89c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e89c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e89cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e89cd not edx */
  EDX = (~(EDX));
  /* 106e89cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e89d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e89d5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106e89d9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e89db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e89de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e89e1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106e89e5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e89e8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e89eb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e89ee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e89f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e89f4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e89f7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106e89fa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e89fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8a00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106e8a04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e8a06 jne 0x106e8a20 */
  if (!C.zf) goto L_106e8a20;
  /* 106e8a08 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e8a0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8a10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e8a12 not edx */
  EDX = (~(EDX));
  /* 106e8a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8a17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e8a19 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8a1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8a1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106e8a20:;
  /* 106e8a20 jmp 0x106e8a8d */
  goto L_106e8a8d;
L_106e8a22:;
  /* 106e8a22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8a25 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8a28 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e8a2d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e8a2f not eax */
  EAX = (~(EAX));
  /* 106e8a31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8a34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8a37 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106e8a3e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8a40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8a43 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8a46 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 106e8a4d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8a50 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8a53 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106e8a56 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e8a59 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8a5c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8a5f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106e8a62 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8a65 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8a68 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106e8a6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e8a6e jne 0x106e8a8d */
  if (!C.zf) goto L_106e8a8d;
  /* 106e8a70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8a73 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8a76 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e8a7b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e8a7d not eax */
  EAX = (~(EAX));
  /* 106e8a7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8a82 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e8a85 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106e8a87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8a8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106e8a8d:;
  /* 106e8a8d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8a90 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106e8a93 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8a96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e8a99 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106e8a9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8a9f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e8aa2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8aa5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106e8aa8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 106e8aab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8aae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8ab1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8ab4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106e8ab7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8abb jle 0x106e8c07 */
  if ((C.zf||C.sf!=C.of)) goto L_106e8c07;
  /* 106e8ac1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8ac4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8ac7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106e8aca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8acd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106e8ad0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8ad3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106e8ad6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8ada jbe 0x106e8ae3 */
  if ((C.cf||C.zf)) goto L_106e8ae3;
  /* 106e8adc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_106e8ae3:;
  /* 106e8ae3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8ae6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e8ae9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 106e8aec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106e8aef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8af2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8af5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e8af8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106e8afb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8afe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8b01 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 106e8b04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8b07 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8b0a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 106e8b0d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8b10 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e8b13 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8b16 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106e8b19 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8b1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8b1f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e8b22 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8b25 jne 0x106e8bf3 */
  if (!C.zf) goto L_106e8bf3;
  /* 106e8b2b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8b2f jae 0x106e8b8c */
  if (!C.cf) goto L_106e8b8c;
  /* 106e8b31 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8b34 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8b37 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106e8b3b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8b3e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8b41 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e8b44 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106e8b47 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8b4a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8b4d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 106e8b50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e8b52 jne 0x106e8b6a */
  if (!C.zf) goto L_106e8b6a;
  /* 106e8b54 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e8b59 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8b5c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e8b5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8b61 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e8b63 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8b65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8b68 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106e8b6a:;
  /* 106e8b6a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e8b6f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8b72 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e8b74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8b77 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8b7a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 106e8b7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8b80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8b83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8b86 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 106e8b8a jmp 0x106e8bf3 */
  goto L_106e8bf3;
L_106e8b8c:;
  /* 106e8b8c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8b8f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8b92 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106e8b96 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8b99 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8b9c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e8b9f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106e8ba2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8ba5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8ba8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 106e8bab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e8bad jne 0x106e8bca */
  if (!C.zf) goto L_106e8bca;
  /* 106e8baf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8bb2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8bb5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e8bba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e8bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8bbf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e8bc2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8bc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8bc7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106e8bca:;
  /* 106e8bca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8bcd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8bd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e8bd5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e8bd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8bda mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8bdd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106e8be4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8be6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8be9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8bec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_106e8bf3:;
  /* 106e8bf3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8bf6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8bf9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106e8bfb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8bfe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8c01 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8c04 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_106e8c07:;
  /* 106e8c07 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e8c0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8c0d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8c10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106e8c12 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e8c15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8c18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8c1b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8c1e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 106e8c21 jmp 0x106e8ee2 */
  goto L_106e8ee2;
L_106e8c26:;
  /* 106e8c26 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e8c29 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8c2c jge 0x106e8ee2 */
  if ((C.sf==C.of)) goto L_106e8ee2;
  /* 106e8c32 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e8c35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8c38 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8c3b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106e8c3d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106e8c40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8c43 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8c46 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8c49 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 106e8c4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8c4f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8c52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106e8c55 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8c58 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8c5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106e8c5e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8c61 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106e8c64 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8c67 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106e8c6a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8c6e jbe 0x106e8c77 */
  if ((C.cf||C.zf)) goto L_106e8c77;
  /* 106e8c70 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_106e8c77:;
  /* 106e8c77 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8c7a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106e8c7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e8c7f jne 0x106e8dc0 */
  if (!C.zf) goto L_106e8dc0;
  /* 106e8c85 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e8c88 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106e8c8b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8c8e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106e8c91 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8c95 jbe 0x106e8c9e */
  if ((C.cf||C.zf)) goto L_106e8c9e;
  /* 106e8c97 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_106e8c9e:;
  /* 106e8c9e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8ca1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8ca4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e8ca7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8caa jne 0x106e8d80 */
  if (!C.zf) goto L_106e8d80;
  /* 106e8cb0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8cb4 jae 0x106e8d15 */
  if (!C.cf) goto L_106e8d15;
  /* 106e8cb6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e8cbb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8cbe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e8cc0 not edx */
  EDX = (~(EDX));
  /* 106e8cc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8cc5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8cc8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106e8ccc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e8cce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8cd1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8cd4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106e8cd8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8cdb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8cde mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e8ce1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e8ce4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8ce7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8cea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106e8ced mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8cf0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8cf3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106e8cf7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e8cf9 jne 0x106e8d13 */
  if (!C.zf) goto L_106e8d13;
  /* 106e8cfb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e8d00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8d03 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e8d05 not edx */
  EDX = (~(EDX));
  /* 106e8d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8d0a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e8d0c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8d0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8d11 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106e8d13:;
  /* 106e8d13 jmp 0x106e8d80 */
  goto L_106e8d80;
L_106e8d15:;
  /* 106e8d15 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8d18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8d1b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e8d20 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e8d22 not eax */
  EAX = (~(EAX));
  /* 106e8d24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8d27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8d2a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106e8d31 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8d33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8d36 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8d39 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 106e8d40 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8d43 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8d46 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106e8d49 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e8d4c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8d4f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8d52 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106e8d55 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8d58 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8d5b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106e8d5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e8d61 jne 0x106e8d80 */
  if (!C.zf) goto L_106e8d80;
  /* 106e8d63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e8d66 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8d69 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e8d6e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e8d70 not eax */
  EAX = (~(EAX));
  /* 106e8d72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8d75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e8d78 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106e8d7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8d7d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106e8d80:;
  /* 106e8d80 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8d83 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106e8d86 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8d89 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e8d8c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106e8d8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8d92 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e8d95 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e8d98 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106e8d9b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 106e8d9e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8da1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8da4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106e8da7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8daa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106e8dad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8db0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106e8db3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8db7 jbe 0x106e8dc0 */
  if ((C.cf||C.zf)) goto L_106e8dc0;
  /* 106e8db9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_106e8dc0:;
  /* 106e8dc0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e8dc3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e8dc6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 106e8dc9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106e8dcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8dcf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8dd2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e8dd5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106e8dd8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8ddb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8dde mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106e8de1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e8de4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8de7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 106e8dea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8ded mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e8df0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8df3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106e8df6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8df9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8dfc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e8dff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8e02 jne 0x106e8ece */
  if (!C.zf) goto L_106e8ece;
  /* 106e8e08 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8e0c jae 0x106e8e68 */
  if (!C.cf) goto L_106e8e68;
  /* 106e8e0e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8e11 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8e14 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106e8e18 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8e1b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8e1e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106e8e21 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106e8e23 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8e26 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8e29 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 106e8e2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e8e2e jne 0x106e8e46 */
  if (!C.zf) goto L_106e8e46;
  /* 106e8e30 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e8e35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e8e38 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e8e3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8e3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e8e3f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106e8e41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8e44 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106e8e46:;
  /* 106e8e46 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e8e4b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e8e4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e8e50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8e53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8e56 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106e8e5a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e8e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8e5f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8e62 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106e8e66 jmp 0x106e8ece */
  goto L_106e8ece;
L_106e8e68:;
  /* 106e8e68 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8e6b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8e6e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106e8e72 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8e75 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8e78 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106e8e7b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106e8e7d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8e80 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8e83 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 106e8e86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e8e88 jne 0x106e8ea5 */
  if (!C.zf) goto L_106e8ea5;
  /* 106e8e8a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e8e8d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8e90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106e8e95 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106e8e97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8e9a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e8e9d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106e8e9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e8ea2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106e8ea5:;
  /* 106e8ea5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e8ea8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8eab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e8eb0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e8eb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8eb5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8eb8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 106e8ebf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e8ec1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8ec4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106e8ec7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_106e8ece:;
  /* 106e8ece mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8ed1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8ed4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106e8ed6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e8ed9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8edc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e8edf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_106e8ee2:;
  /* 106e8ee2 mov eax, 1 */
  EAX = (0x1u);
L_106e8ee7:;
  /* 106e8ee7 mov esp, ebp */
  ESP = (EBP);
  /* 106e8ee9 pop ebp */
  EBP = (pop32());
  /* 106e8eea ret  */
  ESPCHK(0x106e8900u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x106e8ef0 (304 bytes, 79 insns) */
void f_106e8ef0(void) {
  FTRACE(0x106e8ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e8ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e8ef1 mov ebp, esp */
  EBP = (ESP);
  /* 106e8ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e8ef4 cmp dword ptr [0x10710e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8efb je 0x106e901c */
  if (C.zf) goto L_106e901c;
  /* 106e8f01 mov eax, dword ptr [0x10710e58] */
  EAX = (r32((uint32_t)(0x10710e58)));
  /* 106e8f06 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 106e8f09 mov ecx, dword ptr [0x10710e60] */
  ECX = (r32((uint32_t)(0x10710e60)));
  /* 106e8f0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106e8f12 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8f14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e8f17 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 106e8f1c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106e8f21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e8f24 push eax */
  push32((uint32_t)(EAX));
  /* 106e8f25 call dword ptr [0x10712350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712350))), 0x106e8f2bu);
  /* 106e8f2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e8f30 mov ecx, dword ptr [0x10710e58] */
  ECX = (r32((uint32_t)(0x10710e58)));
  /* 106e8f36 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e8f38 mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e8f3d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106e8f40 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106e8f42 mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e8f48 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106e8f4b mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e8f50 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e8f53 mov edx, dword ptr [0x10710e58] */
  EDX = (r32((uint32_t)(0x10710e58)));
  /* 106e8f59 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 106e8f64 mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e8f69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e8f6c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 106e8f6f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106e8f72 mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e8f77 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e8f7a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 106e8f7d mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e8f83 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e8f86 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 106e8f8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e8f8c jne 0x106e8fa2 */
  if (!C.zf) goto L_106e8fa2;
  /* 106e8f8e mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e8f94 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e8f97 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 106e8f99 mov ecx, dword ptr [0x10710e60] */
  ECX = (r32((uint32_t)(0x10710e60)));
  /* 106e8f9f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_106e8fa2:;
  /* 106e8fa2 mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e8fa8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8fac jne 0x106e9012 */
  if (!C.zf) goto L_106e9012;
  /* 106e8fae cmp dword ptr [0x10710e64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10710e64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e8fb5 jle 0x106e9012 */
  if ((C.zf||C.sf!=C.of)) goto L_106e9012;
  /* 106e8fb7 mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e8fbc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e8fbf push ecx */
  push32((uint32_t)(ECX));
  /* 106e8fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e8fc2 mov edx, dword ptr [0x10710e6c] */
  EDX = (r32((uint32_t)(0x10710e6c)));
  /* 106e8fc8 push edx */
  push32((uint32_t)(EDX));
  /* 106e8fc9 call dword ptr [0x1071231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071231c))), 0x106e8fcfu);
  /* 106e8fcf mov eax, dword ptr [0x10710e64] */
  EAX = (r32((uint32_t)(0x10710e64)));
  /* 106e8fd4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e8fd7 mov ecx, dword ptr [0x10710e68] */
  ECX = (r32((uint32_t)(0x10710e68)));
  /* 106e8fdd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8fdf mov edx, dword ptr [0x10710e60] */
  EDX = (r32((uint32_t)(0x10710e60)));
  /* 106e8fe5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8fe8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e8fea push ecx */
  push32((uint32_t)(ECX));
  /* 106e8feb mov eax, dword ptr [0x10710e60] */
  EAX = (r32((uint32_t)(0x10710e60)));
  /* 106e8ff0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e8ff3 push eax */
  push32((uint32_t)(EAX));
  /* 106e8ff4 mov ecx, dword ptr [0x10710e60] */
  ECX = (r32((uint32_t)(0x10710e60)));
  /* 106e8ffa push ecx */
  push32((uint32_t)(ECX));
  /* 106e8ffb call 0x106eb620 */
  push32(0x106e9000u); f_106eb620();
  /* 106e9000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9003 mov edx, dword ptr [0x10710e64] */
  EDX = (r32((uint32_t)(0x10710e64)));
  /* 106e9009 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e900c mov dword ptr [0x10710e64], edx */
  w32((uint32_t)(0x10710e64), (EDX));
L_106e9012:;
  /* 106e9012 mov dword ptr [0x10710e60], 0 */
  w32((uint32_t)(0x10710e60), (0x0u));
L_106e901c:;
  /* 106e901c mov esp, ebp */
  ESP = (EBP);
  /* 106e901e pop ebp */
  EBP = (pop32());
  /* 106e901f ret  */
  ESPCHK(0x106e8ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x106e9020 (1565 bytes, 343 insns) */
void f_106e9020(void) {
  FTRACE(0x106e9020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e9020 push ebp */
  push32((uint32_t)(EBP));
  /* 106e9021 mov ebp, esp */
  EBP = (ESP);
  /* 106e9023 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e9029 mov eax, dword ptr [0x10710e64] */
  EAX = (r32((uint32_t)(0x10710e64)));
  /* 106e902e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e9031 push eax */
  push32((uint32_t)(EAX));
  /* 106e9032 mov ecx, dword ptr [0x10710e68] */
  ECX = (r32((uint32_t)(0x10710e68)));
  /* 106e9038 push ecx */
  push32((uint32_t)(ECX));
  /* 106e9039 call dword ptr [0x10712324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712324))), 0x106e903fu);
  /* 106e903f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e9041 je 0x106e904b */
  if (C.zf) goto L_106e904b;
  /* 106e9043 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e9046 jmp 0x106e9639 */
  goto L_106e9639;
L_106e904b:;
  /* 106e904b mov edx, dword ptr [0x10710e68] */
  EDX = (r32((uint32_t)(0x10710e68)));
  /* 106e9051 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 106e9057 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 106e9061 jmp 0x106e9072 */
  goto L_106e9072;
L_106e9063:;
  /* 106e9063 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 106e9069 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e906c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_106e9072:;
  /* 106e9072 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 106e9078 cmp ecx, dword ptr [0x10710e64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10710e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e907e jge 0x106e9637 */
  if ((C.sf==C.of)) goto L_106e9637;
  /* 106e9084 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106e908a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e908d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 106e9093 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 106e9098 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 106e909e push ecx */
  push32((uint32_t)(ECX));
  /* 106e909f call dword ptr [0x10712324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712324))), 0x106e90a5u);
  /* 106e90a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e90a7 je 0x106e90b3 */
  if (C.zf) goto L_106e90b3;
  /* 106e90a9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 106e90ae jmp 0x106e9639 */
  goto L_106e9639;
L_106e90b3:;
  /* 106e90b3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106e90b9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106e90bc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 106e90c2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 106e90c8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e90ce mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106e90d1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106e90d7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106e90da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e90dd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 106e90e7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 106e90f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106e90f8 jmp 0x106e9103 */
  goto L_106e9103;
L_106e90fa:;
  /* 106e90fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e90fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9100 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106e9103:;
  /* 106e9103 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9107 jge 0x106e95fb */
  if ((C.sf==C.of)) goto L_106e95fb;
  /* 106e910d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 106e9117 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 106e9121 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 106e912b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 106e9135 jmp 0x106e9146 */
  goto L_106e9146;
L_106e9137:;
  /* 106e9137 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106e913d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9140 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_106e9146:;
  /* 106e9146 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e914d jge 0x106e9162 */
  if ((C.sf==C.of)) goto L_106e9162;
  /* 106e914f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106e9155 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 106e9160 jmp 0x106e9137 */
  goto L_106e9137;
L_106e9162:;
  /* 106e9162 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9166 jl 0x106e959d */
  if ((C.sf!=C.of)) goto L_106e959d;
  /* 106e916c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106e9171 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 106e9177 push ecx */
  push32((uint32_t)(ECX));
  /* 106e9178 call dword ptr [0x10712324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712324))), 0x106e917eu);
  /* 106e917e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e9180 je 0x106e918c */
  if (C.zf) goto L_106e918c;
  /* 106e9182 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 106e9187 jmp 0x106e9639 */
  goto L_106e9639;
L_106e918c:;
  /* 106e918c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 106e9192 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106e9195 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 106e919f jmp 0x106e91b0 */
  goto L_106e91b0;
L_106e91a1:;
  /* 106e91a1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 106e91a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e91aa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_106e91b0:;
  /* 106e91b0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e91b7 jge 0x106e9334 */
  if ((C.sf==C.of)) goto L_106e9334;
  /* 106e91bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e91c0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e91c3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 106e91c9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 106e91cf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e91d5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 106e91db mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 106e91e1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e91e5 jne 0x106e91f2 */
  if (!C.zf) goto L_106e91f2;
  /* 106e91e7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 106e91ed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e91f0 je 0x106e91fc */
  if (C.zf) goto L_106e91fc;
L_106e91f2:;
  /* 106e91f2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 106e91f7 jmp 0x106e9639 */
  goto L_106e9639;
L_106e91fc:;
  /* 106e91fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 106e9202 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e9204 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 106e920a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 106e9210 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 106e9216 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 106e921c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106e921f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e9221 je 0x106e9259 */
  if (C.zf) goto L_106e9259;
  /* 106e9223 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 106e9229 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e922c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 106e9232 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e923c jle 0x106e9248 */
  if ((C.zf||C.sf!=C.of)) goto L_106e9248;
  /* 106e923e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 106e9243 jmp 0x106e9639 */
  goto L_106e9639;
L_106e9248:;
  /* 106e9248 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 106e924e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9251 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 106e9257 jmp 0x106e929b */
  goto L_106e929b;
L_106e9259:;
  /* 106e9259 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 106e925f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106e9262 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e9265 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 106e926b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9272 jle 0x106e927e */
  if ((C.zf||C.sf!=C.of)) goto L_106e927e;
  /* 106e9274 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_106e927e:;
  /* 106e927e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106e9284 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 106e928b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e928e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106e9294 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_106e929b:;
  /* 106e929b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e92a2 jl 0x106e92bd */
  if ((C.sf!=C.of)) goto L_106e92bd;
  /* 106e92a4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 106e92aa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 106e92ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e92af jne 0x106e92bd */
  if (!C.zf) goto L_106e92bd;
  /* 106e92b1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e92bb jle 0x106e92c7 */
  if ((C.zf||C.sf!=C.of)) goto L_106e92c7;
L_106e92bd:;
  /* 106e92bd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 106e92c2 jmp 0x106e9639 */
  goto L_106e9639;
L_106e92c7:;
  /* 106e92c7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 106e92cd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e92d3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 106e92d6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e92dc je 0x106e92e8 */
  if (C.zf) goto L_106e92e8;
  /* 106e92de mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 106e92e3 jmp 0x106e9639 */
  goto L_106e9639;
L_106e92e8:;
  /* 106e92e8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 106e92ee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e92f4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 106e92fa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 106e9300 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9306 jb 0x106e91fc */
  if (C.cf) goto L_106e91fc;
  /* 106e930c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 106e9312 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9318 je 0x106e9324 */
  if (C.zf) goto L_106e9324;
  /* 106e931a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 106e931f jmp 0x106e9639 */
  goto L_106e9639;
L_106e9324:;
  /* 106e9324 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e9327 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e932c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e932f jmp 0x106e91a1 */
  goto L_106e91a1;
L_106e9334:;
  /* 106e9334 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e9337 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e9339 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e933f je 0x106e934b */
  if (C.zf) goto L_106e934b;
  /* 106e9341 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 106e9346 jmp 0x106e9639 */
  goto L_106e9639;
L_106e934b:;
  /* 106e934b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e934e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 106e9354 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 106e935b jmp 0x106e9366 */
  goto L_106e9366;
L_106e935d:;
  /* 106e935d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e9360 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9363 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_106e9366:;
  /* 106e9366 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e936a jge 0x106e959d */
  if ((C.sf==C.of)) goto L_106e959d;
  /* 106e9370 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 106e937a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 106e9380 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_106e9386:;
  /* 106e9386 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 106e938c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e938f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 106e9395 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106e939b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e93a1 je 0x106e94ca */
  if (C.zf) goto L_106e94ca;
  /* 106e93a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e93aa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 106e93b0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e93b7 je 0x106e94ca */
  if (C.zf) goto L_106e94ca;
  /* 106e93bd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106e93c3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e93c9 jb 0x106e93de */
  if (C.cf) goto L_106e93de;
  /* 106e93cb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 106e93d1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e93d6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e93dc jb 0x106e93e8 */
  if (C.cf) goto L_106e93e8;
L_106e93de:;
  /* 106e93de mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 106e93e3 jmp 0x106e9639 */
  goto L_106e9639;
L_106e93e8:;
  /* 106e93e8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106e93ee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 106e93f4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 106e93fa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 106e9400 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9403 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106e9406 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e9409 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e940e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_106e9414:;
  /* 106e9414 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e9417 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e941d je 0x106e943e */
  if (C.zf) goto L_106e943e;
  /* 106e941f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e9422 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9428 jne 0x106e942c */
  if (!C.zf) goto L_106e942c;
  /* 106e942a jmp 0x106e943e */
  goto L_106e943e;
L_106e942c:;
  /* 106e942c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e942f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e9431 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 106e9434 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e9437 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9439 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106e943c jmp 0x106e9414 */
  goto L_106e9414;
L_106e943e:;
  /* 106e943e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e9441 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9447 jne 0x106e9453 */
  if (!C.zf) goto L_106e9453;
  /* 106e9449 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 106e944e jmp 0x106e9639 */
  goto L_106e9639;
L_106e9453:;
  /* 106e9453 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106e9459 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e945b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106e945e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e9461 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 106e9467 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e946e jle 0x106e947a */
  if ((C.zf||C.sf!=C.of)) goto L_106e947a;
  /* 106e9470 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_106e947a:;
  /* 106e947a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106e9480 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9483 je 0x106e948f */
  if (C.zf) goto L_106e948f;
  /* 106e9485 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 106e948a jmp 0x106e9639 */
  goto L_106e9639;
L_106e948f:;
  /* 106e948f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106e9495 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106e9498 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e949e je 0x106e94aa */
  if (C.zf) goto L_106e94aa;
  /* 106e94a0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 106e94a5 jmp 0x106e9639 */
  goto L_106e9639;
L_106e94aa:;
  /* 106e94aa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106e94b0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 106e94b6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 106e94bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e94bf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 106e94c5 jmp 0x106e9386 */
  goto L_106e9386;
L_106e94ca:;
  /* 106e94ca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e94d1 je 0x106e9541 */
  if (C.zf) goto L_106e9541;
  /* 106e94d3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e94d7 jge 0x106e950b */
  if ((C.sf==C.of)) goto L_106e950b;
  /* 106e94d9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e94de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e94e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e94e3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 106e94e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e94eb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 106e94f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e94f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e94f9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e94fb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 106e9501 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e9503 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 106e9509 jmp 0x106e9541 */
  goto L_106e9541;
L_106e950b:;
  /* 106e950b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e950e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e9511 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e9516 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e9518 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 106e951e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e9520 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 106e9526 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e9529 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e952c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106e9531 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106e9533 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 106e9539 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e953b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_106e9541:;
  /* 106e9541 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 106e9547 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e954a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9550 jne 0x106e9564 */
  if (!C.zf) goto L_106e9564;
  /* 106e9552 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e9555 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 106e955b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9562 je 0x106e956e */
  if (C.zf) goto L_106e956e;
L_106e9564:;
  /* 106e9564 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 106e9569 jmp 0x106e9639 */
  goto L_106e9639;
L_106e956e:;
  /* 106e956e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 106e9574 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106e9577 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e957d je 0x106e9589 */
  if (C.zf) goto L_106e9589;
  /* 106e957f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 106e9584 jmp 0x106e9639 */
  goto L_106e9639;
L_106e9589:;
  /* 106e9589 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 106e958f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9592 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 106e9598 jmp 0x106e935d */
  goto L_106e935d;
L_106e959d:;
  /* 106e959d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e95a0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 106e95a6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 106e95ac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e95b0 jne 0x106e95ca */
  if (!C.zf) goto L_106e95ca;
  /* 106e95b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e95b5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 106e95bb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 106e95c1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e95c8 je 0x106e95d1 */
  if (C.zf) goto L_106e95d1;
L_106e95ca:;
  /* 106e95ca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 106e95cf jmp 0x106e9639 */
  goto L_106e9639;
L_106e95d1:;
  /* 106e95d1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 106e95d7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e95dd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 106e95e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e95e6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e95eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e95ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e95f1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106e95f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e95f6 jmp 0x106e90fa */
  goto L_106e90fa;
L_106e95fb:;
  /* 106e95fb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106e9601 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 106e9607 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9609 jne 0x106e961c */
  if (!C.zf) goto L_106e961c;
  /* 106e960b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106e9611 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 106e9617 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e961a je 0x106e9623 */
  if (C.zf) goto L_106e9623;
L_106e961c:;
  /* 106e961c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 106e9621 jmp 0x106e9639 */
  goto L_106e9639;
L_106e9623:;
  /* 106e9623 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106e9629 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e962c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 106e9632 jmp 0x106e9063 */
  goto L_106e9063;
L_106e9637:;
  /* 106e9637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e9639:;
  /* 106e9639 mov esp, ebp */
  ESP = (EBP);
  /* 106e963b pop ebp */
  EBP = (pop32());
  /* 106e963c ret  */
  ESPCHK(0x106e9020u, _esp0);
  ESP += 4; return;
}

/* FUN_10009640 @ 0x106e9640 (250 bytes, 92 insns) */
void f_106e9640(void) {
  FTRACE(0x106e9640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e9640 push ebp */
  push32((uint32_t)(EBP));
  /* 106e9641 mov ebp, esp */
  EBP = (ESP);
  /* 106e9643 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e9646 push ebx */
  push32((uint32_t)(EBX));
  /* 106e9647 push esi */
  push32((uint32_t)(ESI));
  /* 106e9648 push edi */
  push32((uint32_t)(EDI));
  /* 106e9649 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 106e964c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106e964f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 106e9652 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_106e9655:;
  /* 106e9655 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9659 jne 0x106e9679 */
  if (!C.zf) goto L_106e9679;
  /* 106e965b push 0x1070ae90 */
  push32((uint32_t)(0x1070ae90u));
  /* 106e9660 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e9662 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 106e9664 push 0x1070ae84 */
  push32((uint32_t)(0x1070ae84u));
  /* 106e9669 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e966b call 0x106e27f0 */
  push32(0x106e9670u); f_106e27f0();
  /* 106e9670 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9673 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9676 jne 0x106e9679 */
  if (!C.zf) goto L_106e9679;
  /* 106e9678 int3  */
  x86_unimpl("int3 @ 0x106e9678");
L_106e9679:;
  /* 106e9679 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e967b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e967d jne 0x106e9655 */
  if (!C.zf) goto L_106e9655;
L_106e967f:;
  /* 106e967f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9683 jne 0x106e96a3 */
  if (!C.zf) goto L_106e96a3;
  /* 106e9685 push 0x1070ae74 */
  push32((uint32_t)(0x1070ae74u));
  /* 106e968a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e968c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 106e968e push 0x1070ae84 */
  push32((uint32_t)(0x1070ae84u));
  /* 106e9693 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e9695 call 0x106e27f0 */
  push32(0x106e969au); f_106e27f0();
  /* 106e969a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e969d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e96a0 jne 0x106e96a3 */
  if (!C.zf) goto L_106e96a3;
  /* 106e96a2 int3  */
  x86_unimpl("int3 @ 0x106e96a2");
L_106e96a3:;
  /* 106e96a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e96a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e96a7 jne 0x106e967f */
  if (!C.zf) goto L_106e967f;
  /* 106e96a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e96ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 106e96b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e96b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e96b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106e96bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e96bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e96c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106e96c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e96c7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 106e96ce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e96d1 push ecx */
  push32((uint32_t)(ECX));
  /* 106e96d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e96d5 push edx */
  push32((uint32_t)(EDX));
  /* 106e96d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e96d9 push eax */
  push32((uint32_t)(EAX));
  /* 106e96da call 0x106ea6c0 */
  push32(0x106e96dfu); f_106ea6c0();
  /* 106e96df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e96e2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106e96e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e96e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e96eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e96ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e96f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106e96f4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e96f7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e96fb jl 0x106e971f */
  if ((C.sf!=C.of)) goto L_106e971f;
  /* 106e96fd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9700 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e9702 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106e9705 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e9707 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e970d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 106e9710 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9713 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e9715 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9718 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e971b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106e971d jmp 0x106e9730 */
  goto L_106e9730;
L_106e971f:;
  /* 106e971f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9722 push edx */
  push32((uint32_t)(EDX));
  /* 106e9723 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e9725 call 0x106ea440 */
  push32(0x106e972au); f_106ea440();
  /* 106e972a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e972d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_106e9730:;
  /* 106e9730 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e9733 pop edi */
  EDI = (pop32());
  /* 106e9734 pop esi */
  ESI = (pop32());
  /* 106e9735 pop ebx */
  EBX = (pop32());
  /* 106e9736 mov esp, ebp */
  ESP = (EBP);
  /* 106e9738 pop ebp */
  EBP = (pop32());
  /* 106e9739 ret  */
  ESPCHK(0x106e9640u, _esp0);
  ESP += 4; return;
}

/* FUN_10009740 @ 0x106e9740 (183 bytes, 58 insns) */
void f_106e9740(void) {
  FTRACE(0x106e9740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e9740 push ebp */
  push32((uint32_t)(EBP));
  /* 106e9741 mov ebp, esp */
  EBP = (ESP);
  /* 106e9743 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e9746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e9749 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e974c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9751 ja 0x106e976a */
  if ((!C.cf&&!C.zf)) goto L_106e976a;
  /* 106e9753 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e9756 mov edx, dword ptr [0x1070dc98] */
  EDX = (r32((uint32_t)(0x1070dc98)));
  /* 106e975c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e975e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 106e9762 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 106e9765 jmp 0x106e97f3 */
  goto L_106e97f3;
L_106e976a:;
  /* 106e976a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e976d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 106e9770 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e9776 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e977c mov edx, dword ptr [0x1070dc98] */
  EDX = (r32((uint32_t)(0x1070dc98)));
  /* 106e9782 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e9784 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 106e9788 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 106e978d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e978f je 0x106e97b3 */
  if (C.zf) goto L_106e97b3;
  /* 106e9791 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e9794 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 106e9797 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e979d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 106e97a0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 106e97a3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 106e97a6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 106e97aa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 106e97b1 jmp 0x106e97c4 */
  goto L_106e97c4;
L_106e97b3:;
  /* 106e97b3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 106e97b6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 106e97b9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 106e97bd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_106e97c4:;
  /* 106e97c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e97c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e97c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e97ca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 106e97cd push ecx */
  push32((uint32_t)(ECX));
  /* 106e97ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e97d1 push edx */
  push32((uint32_t)(EDX));
  /* 106e97d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 106e97d5 push eax */
  push32((uint32_t)(EAX));
  /* 106e97d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e97d8 call 0x106eb960 */
  push32(0x106e97ddu); f_106eb960();
  /* 106e97dd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e97e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e97e2 jne 0x106e97e8 */
  if (!C.zf) goto L_106e97e8;
  /* 106e97e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e97e6 jmp 0x106e97f3 */
  goto L_106e97f3;
L_106e97e8:;
  /* 106e97e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e97eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e97f0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_106e97f3:;
  /* 106e97f3 mov esp, ebp */
  ESP = (EBP);
  /* 106e97f5 pop ebp */
  EBP = (pop32());
  /* 106e97f6 ret  */
  ESPCHK(0x106e9740u, _esp0);
  ESP += 4; return;
}

/* FUN_10009800 @ 0x106e9800 (836 bytes, 238 insns) */
void f_106e9800(void) {
  FTRACE(0x106e9800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e9800 push ebp */
  push32((uint32_t)(EBP));
  /* 106e9801 mov ebp, esp */
  EBP = (ESP);
  /* 106e9803 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e9806 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106e9808 call 0x106e7130 */
  push32(0x106e980du); f_106e7130();
  /* 106e980d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e9813 push eax */
  push32((uint32_t)(EAX));
  /* 106e9814 call 0x106e9b50 */
  push32(0x106e9819u); f_106e9b50();
  /* 106e9819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e981c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106e981f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e9822 cmp ecx, dword ptr [0x10710ba4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10710ba4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9828 jne 0x106e983b */
  if (!C.zf) goto L_106e983b;
  /* 106e982a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106e982c call 0x106e71d0 */
  push32(0x106e9831u); f_106e71d0();
  /* 106e9831 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e9836 jmp 0x106e9b40 */
  goto L_106e9b40;
L_106e983b:;
  /* 106e983b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e983f jne 0x106e985c */
  if (!C.zf) goto L_106e985c;
  /* 106e9841 call 0x106e9c30 */
  push32(0x106e9846u); f_106e9c30();
  /* 106e9846 call 0x106e9cb0 */
  push32(0x106e984bu); f_106e9cb0();
  /* 106e984b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106e984d call 0x106e71d0 */
  push32(0x106e9852u); f_106e71d0();
  /* 106e9852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9855 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e9857 jmp 0x106e9b40 */
  goto L_106e9b40;
L_106e985c:;
  /* 106e985c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e9863 jmp 0x106e986e */
  goto L_106e986e;
L_106e9865:;
  /* 106e9865 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9868 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e986b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106e986e:;
  /* 106e986e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9872 jae 0x106e99bf */
  if (!C.cf) goto L_106e99bf;
  /* 106e9878 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e987b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e987e mov ecx, dword ptr [eax + 0x1070deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1070deb8)));
  /* 106e9884 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9887 jne 0x106e99ba */
  if (!C.zf) goto L_106e99ba;
  /* 106e988d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106e9894 jmp 0x106e989f */
  goto L_106e989f;
L_106e9896:;
  /* 106e9896 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9899 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e989c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_106e989f:;
  /* 106e989f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e98a6 jae 0x106e98b4 */
  if (!C.cf) goto L_106e98b4;
  /* 106e98a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e98ab mov byte ptr [eax + 0x10710d40], 0 */
  w8((uint32_t)(EAX + 0x10710d40), (0x0u));
  /* 106e98b2 jmp 0x106e9896 */
  goto L_106e9896;
L_106e98b4:;
  /* 106e98b4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106e98bb jmp 0x106e98c6 */
  goto L_106e98c6;
L_106e98bd:;
  /* 106e98bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e98c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e98c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106e98c6:;
  /* 106e98c6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e98ca jae 0x106e9947 */
  if (!C.cf) goto L_106e9947;
  /* 106e98cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e98cf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e98d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e98d5 lea ecx, [edx + eax*8 + 0x1070dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1070dec8));
  /* 106e98dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106e98df jmp 0x106e98ea */
  goto L_106e98ea;
L_106e98e1:;
  /* 106e98e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e98e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e98e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106e98ea:;
  /* 106e98ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e98ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e98ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106e98f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e98f3 je 0x106e9942 */
  if (C.zf) goto L_106e9942;
  /* 106e98f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e98f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e98fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106e98fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e98ff je 0x106e9942 */
  if (C.zf) goto L_106e9942;
  /* 106e9901 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e9904 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e9906 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e9908 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106e990b jmp 0x106e9916 */
  goto L_106e9916;
L_106e990d:;
  /* 106e990d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9910 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9913 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106e9916:;
  /* 106e9916 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e9919 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e991b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 106e991e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9921 ja 0x106e9940 */
  if ((!C.cf&&!C.zf)) goto L_106e9940;
  /* 106e9923 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9926 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e9929 mov dl, byte ptr [eax + 0x10710d41] */
  DL = (r8((uint32_t)(EAX + 0x10710d41)));
  /* 106e992f or dl, byte ptr [ecx + 0x1070deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1070deb0))); DL = (_r); fl_logic(_r,8); }
  /* 106e9935 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9938 mov byte ptr [eax + 0x10710d41], dl */
  w8((uint32_t)(EAX + 0x10710d41), (DL));
  /* 106e993e jmp 0x106e990d */
  goto L_106e990d;
L_106e9940:;
  /* 106e9940 jmp 0x106e98e1 */
  goto L_106e98e1;
L_106e9942:;
  /* 106e9942 jmp 0x106e98bd */
  goto L_106e98bd;
L_106e9947:;
  /* 106e9947 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e994a mov dword ptr [0x10710ba4], ecx */
  w32((uint32_t)(0x10710ba4), (ECX));
  /* 106e9950 mov dword ptr [0x10710c2c], 1 */
  w32((uint32_t)(0x10710c2c), (0x1u));
  /* 106e995a mov edx, dword ptr [0x10710ba4] */
  EDX = (r32((uint32_t)(0x10710ba4)));
  /* 106e9960 push edx */
  push32((uint32_t)(EDX));
  /* 106e9961 call 0x106e9bb0 */
  push32(0x106e9966u); f_106e9bb0();
  /* 106e9966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9969 mov dword ptr [0x10710e44], eax */
  w32((uint32_t)(0x10710e44), (EAX));
  /* 106e996e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106e9975 jmp 0x106e9980 */
  goto L_106e9980;
L_106e9977:;
  /* 106e9977 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e997a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e997d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106e9980:;
  /* 106e9980 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9984 jae 0x106e99a4 */
  if (!C.cf) goto L_106e99a4;
  /* 106e9986 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9989 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e998c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e998f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e9992 mov cx, word ptr [ecx + eax*2 + 0x1070debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1070debc)));
  /* 106e999a mov word ptr [edx*2 + 0x10710c20], cx */
  w16((uint32_t)(EDX*2 + 0x10710c20), (CX));
  /* 106e99a2 jmp 0x106e9977 */
  goto L_106e9977;
L_106e99a4:;
  /* 106e99a4 call 0x106e9cb0 */
  push32(0x106e99a9u); f_106e9cb0();
  /* 106e99a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106e99ab call 0x106e71d0 */
  push32(0x106e99b0u); f_106e71d0();
  /* 106e99b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e99b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e99b5 jmp 0x106e9b40 */
  goto L_106e9b40;
L_106e99ba:;
  /* 106e99ba jmp 0x106e9865 */
  goto L_106e9865;
L_106e99bf:;
  /* 106e99bf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 106e99c2 push edx */
  push32((uint32_t)(EDX));
  /* 106e99c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e99c6 push eax */
  push32((uint32_t)(EAX));
  /* 106e99c7 call dword ptr [0x10712374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712374))), 0x106e99cdu);
  /* 106e99cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e99d0 jne 0x106e9b12 */
  if (!C.zf) goto L_106e9b12;
  /* 106e99d6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106e99dd jmp 0x106e99e8 */
  goto L_106e99e8;
L_106e99df:;
  /* 106e99df mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e99e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e99e5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_106e99e8:;
  /* 106e99e8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e99ef jae 0x106e99fd */
  if (!C.cf) goto L_106e99fd;
  /* 106e99f1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e99f4 mov byte ptr [edx + 0x10710d40], 0 */
  w8((uint32_t)(EDX + 0x10710d40), (0x0u));
  /* 106e99fb jmp 0x106e99df */
  goto L_106e99df;
L_106e99fd:;
  /* 106e99fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e9a00 mov dword ptr [0x10710ba4], eax */
  w32((uint32_t)(0x10710ba4), (EAX));
  /* 106e9a05 mov dword ptr [0x10710e44], 0 */
  w32((uint32_t)(0x10710e44), (0x0u));
  /* 106e9a0f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9a13 jbe 0x106e9ace */
  if ((C.cf||C.zf)) goto L_106e9ace;
  /* 106e9a19 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 106e9a1c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 106e9a1f jmp 0x106e9a2a */
  goto L_106e9a2a;
L_106e9a21:;
  /* 106e9a21 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e9a24 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9a27 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_106e9a2a:;
  /* 106e9a2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e9a2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e9a2f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106e9a31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e9a33 je 0x106e9a7c */
  if (C.zf) goto L_106e9a7c;
  /* 106e9a35 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e9a38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e9a3a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106e9a3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e9a3f je 0x106e9a7c */
  if (C.zf) goto L_106e9a7c;
  /* 106e9a41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e9a44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e9a46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e9a48 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106e9a4b jmp 0x106e9a56 */
  goto L_106e9a56;
L_106e9a4d:;
  /* 106e9a4d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9a50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9a53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106e9a56:;
  /* 106e9a56 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e9a59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e9a5b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 106e9a5e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9a61 ja 0x106e9a7a */
  if ((!C.cf&&!C.zf)) goto L_106e9a7a;
  /* 106e9a63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9a66 mov cl, byte ptr [eax + 0x10710d41] */
  CL = (r8((uint32_t)(EAX + 0x10710d41)));
  /* 106e9a6c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 106e9a6f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9a72 mov byte ptr [edx + 0x10710d41], cl */
  w8((uint32_t)(EDX + 0x10710d41), (CL));
  /* 106e9a78 jmp 0x106e9a4d */
  goto L_106e9a4d;
L_106e9a7a:;
  /* 106e9a7a jmp 0x106e9a21 */
  goto L_106e9a21;
L_106e9a7c:;
  /* 106e9a7c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 106e9a83 jmp 0x106e9a8e */
  goto L_106e9a8e;
L_106e9a85:;
  /* 106e9a85 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9a88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9a8b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106e9a8e:;
  /* 106e9a8e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9a95 jae 0x106e9aae */
  if (!C.cf) goto L_106e9aae;
  /* 106e9a97 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9a9a mov dl, byte ptr [ecx + 0x10710d41] */
  DL = (r8((uint32_t)(ECX + 0x10710d41)));
  /* 106e9aa0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 106e9aa3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e9aa6 mov byte ptr [eax + 0x10710d41], dl */
  w8((uint32_t)(EAX + 0x10710d41), (DL));
  /* 106e9aac jmp 0x106e9a85 */
  goto L_106e9a85;
L_106e9aae:;
  /* 106e9aae mov ecx, dword ptr [0x10710ba4] */
  ECX = (r32((uint32_t)(0x10710ba4)));
  /* 106e9ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 106e9ab5 call 0x106e9bb0 */
  push32(0x106e9abau); f_106e9bb0();
  /* 106e9aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9abd mov dword ptr [0x10710e44], eax */
  w32((uint32_t)(0x10710e44), (EAX));
  /* 106e9ac2 mov dword ptr [0x10710c2c], 1 */
  w32((uint32_t)(0x10710c2c), (0x1u));
  /* 106e9acc jmp 0x106e9ad8 */
  goto L_106e9ad8;
L_106e9ace:;
  /* 106e9ace mov dword ptr [0x10710c2c], 0 */
  w32((uint32_t)(0x10710c2c), (0x0u));
L_106e9ad8:;
  /* 106e9ad8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106e9adf jmp 0x106e9aea */
  goto L_106e9aea;
L_106e9ae1:;
  /* 106e9ae1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e9ae4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9ae7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106e9aea:;
  /* 106e9aea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9aee jae 0x106e9aff */
  if (!C.cf) goto L_106e9aff;
  /* 106e9af0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e9af3 mov word ptr [eax*2 + 0x10710c20], 0 */
  w16((uint32_t)(EAX*2 + 0x10710c20), (0x0u));
  /* 106e9afd jmp 0x106e9ae1 */
  goto L_106e9ae1;
L_106e9aff:;
  /* 106e9aff call 0x106e9cb0 */
  push32(0x106e9b04u); f_106e9cb0();
  /* 106e9b04 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106e9b06 call 0x106e71d0 */
  push32(0x106e9b0bu); f_106e71d0();
  /* 106e9b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9b0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e9b10 jmp 0x106e9b40 */
  goto L_106e9b40;
L_106e9b12:;
  /* 106e9b12 cmp dword ptr [0x1070f6b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9b19 je 0x106e9b33 */
  if (C.zf) goto L_106e9b33;
  /* 106e9b1b call 0x106e9c30 */
  push32(0x106e9b20u); f_106e9c30();
  /* 106e9b20 call 0x106e9cb0 */
  push32(0x106e9b25u); f_106e9cb0();
  /* 106e9b25 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106e9b27 call 0x106e71d0 */
  push32(0x106e9b2cu); f_106e71d0();
  /* 106e9b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e9b31 jmp 0x106e9b40 */
  goto L_106e9b40;
L_106e9b33:;
  /* 106e9b33 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106e9b35 call 0x106e71d0 */
  push32(0x106e9b3au); f_106e71d0();
  /* 106e9b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9b3d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106e9b40:;
  /* 106e9b40 mov esp, ebp */
  ESP = (EBP);
  /* 106e9b42 pop ebp */
  EBP = (pop32());
  /* 106e9b43 ret  */
  ESPCHK(0x106e9800u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x106e9b50 (89 bytes, 21 insns) */
void f_106e9b50(void) {
  FTRACE(0x106e9b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e9b50 push ebp */
  push32((uint32_t)(EBP));
  /* 106e9b51 mov ebp, esp */
  EBP = (ESP);
  /* 106e9b53 mov dword ptr [0x1070f6b0], 0 */
  w32((uint32_t)(0x1070f6b0), (0x0u));
  /* 106e9b5d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9b61 jne 0x106e9b75 */
  if (!C.zf) goto L_106e9b75;
  /* 106e9b63 mov dword ptr [0x1070f6b0], 1 */
  w32((uint32_t)(0x1070f6b0), (0x1u));
  /* 106e9b6d call dword ptr [0x10712318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712318))), 0x106e9b73u);
  /* 106e9b73 jmp 0x106e9ba7 */
  goto L_106e9ba7;
L_106e9b75:;
  /* 106e9b75 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9b79 jne 0x106e9b8d */
  if (!C.zf) goto L_106e9b8d;
  /* 106e9b7b mov dword ptr [0x1070f6b0], 1 */
  w32((uint32_t)(0x1070f6b0), (0x1u));
  /* 106e9b85 call dword ptr [0x10712378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712378))), 0x106e9b8bu);
  /* 106e9b8b jmp 0x106e9ba7 */
  goto L_106e9ba7;
L_106e9b8d:;
  /* 106e9b8d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9b91 jne 0x106e9ba4 */
  if (!C.zf) goto L_106e9ba4;
  /* 106e9b93 mov dword ptr [0x1070f6b0], 1 */
  w32((uint32_t)(0x1070f6b0), (0x1u));
  /* 106e9b9d mov eax, dword ptr [0x1070f6d0] */
  EAX = (r32((uint32_t)(0x1070f6d0)));
  /* 106e9ba2 jmp 0x106e9ba7 */
  goto L_106e9ba7;
L_106e9ba4:;
  /* 106e9ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_106e9ba7:;
  /* 106e9ba7 pop ebp */
  EBP = (pop32());
  /* 106e9ba8 ret  */
  ESPCHK(0x106e9b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bb0 @ 0x106e9bb0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_106e9bb0(void) {
  FTRACE(0x106e9bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e9bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e9bb1 mov ebp, esp */
  EBP = (ESP);
  /* 106e9bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e9bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e9bb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e9bba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9bbd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e9bc3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e9bc6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9bca ja 0x106e9bfa */
  if ((!C.cf&&!C.zf)) goto L_106e9bfa;
  /* 106e9bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9bcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e9bd1 mov dl, byte ptr [eax + 0x106e9c14] */
  DL = (r8((uint32_t)(EAX + 0x106e9c14)));
  /* 106e9bd7 jmp dword ptr [edx*4 + 0x106e9c00] */
  switch (EDX) {
    case 0: goto L_106e9bde;
    case 1: goto L_106e9be5;
    case 2: goto L_106e9bec;
    case 3: goto L_106e9bf3;
    case 4: goto L_106e9bfa;
    default: x86_unimpl("switch@0x106e9bd7 out of table"); return;
  }
L_106e9bde:;
  /* 106e9bde mov eax, 0x411 */
  EAX = (0x411u);
  /* 106e9be3 jmp 0x106e9bfc */
  goto L_106e9bfc;
L_106e9be5:;
  /* 106e9be5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 106e9bea jmp 0x106e9bfc */
  goto L_106e9bfc;
L_106e9bec:;
  /* 106e9bec mov eax, 0x412 */
  EAX = (0x412u);
  /* 106e9bf1 jmp 0x106e9bfc */
  goto L_106e9bfc;
L_106e9bf3:;
  /* 106e9bf3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 106e9bf8 jmp 0x106e9bfc */
  goto L_106e9bfc;
L_106e9bfa:;
  /* 106e9bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e9bfc:;
  /* 106e9bfc mov esp, ebp */
  ESP = (EBP);
  /* 106e9bfe pop ebp */
  EBP = (pop32());
  /* 106e9bff ret  */
  ESPCHK(0x106e9bb0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x106e9c30 (116 bytes, 29 insns) */
void f_106e9c30(void) {
  FTRACE(0x106e9c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e9c30 push ebp */
  push32((uint32_t)(EBP));
  /* 106e9c31 mov ebp, esp */
  EBP = (ESP);
  /* 106e9c33 push ecx */
  push32((uint32_t)(ECX));
  /* 106e9c34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e9c3b jmp 0x106e9c46 */
  goto L_106e9c46;
L_106e9c3d:;
  /* 106e9c3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9c40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9c43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e9c46:;
  /* 106e9c46 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9c4d jge 0x106e9c5b */
  if ((C.sf==C.of)) goto L_106e9c5b;
  /* 106e9c4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9c52 mov byte ptr [ecx + 0x10710d40], 0 */
  w8((uint32_t)(ECX + 0x10710d40), (0x0u));
  /* 106e9c59 jmp 0x106e9c3d */
  goto L_106e9c3d;
L_106e9c5b:;
  /* 106e9c5b mov dword ptr [0x10710ba4], 0 */
  w32((uint32_t)(0x10710ba4), (0x0u));
  /* 106e9c65 mov dword ptr [0x10710c2c], 0 */
  w32((uint32_t)(0x10710c2c), (0x0u));
  /* 106e9c6f mov dword ptr [0x10710e44], 0 */
  w32((uint32_t)(0x10710e44), (0x0u));
  /* 106e9c79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e9c80 jmp 0x106e9c8b */
  goto L_106e9c8b;
L_106e9c82:;
  /* 106e9c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9c85 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9c88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106e9c8b:;
  /* 106e9c8b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9c8f jge 0x106e9ca0 */
  if ((C.sf==C.of)) goto L_106e9ca0;
  /* 106e9c91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9c94 mov word ptr [eax*2 + 0x10710c20], 0 */
  w16((uint32_t)(EAX*2 + 0x10710c20), (0x0u));
  /* 106e9c9e jmp 0x106e9c82 */
  goto L_106e9c82;
L_106e9ca0:;
  /* 106e9ca0 mov esp, ebp */
  ESP = (EBP);
  /* 106e9ca2 pop ebp */
  EBP = (pop32());
  /* 106e9ca3 ret  */
  ESPCHK(0x106e9c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cb0 @ 0x106e9cb0 (770 bytes, 175 insns) */
void f_106e9cb0(void) {
  FTRACE(0x106e9cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e9cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e9cb1 mov ebp, esp */
  EBP = (ESP);
  /* 106e9cb3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e9cb9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 106e9cbf push eax */
  push32((uint32_t)(EAX));
  /* 106e9cc0 mov ecx, dword ptr [0x10710ba4] */
  ECX = (r32((uint32_t)(0x10710ba4)));
  /* 106e9cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 106e9cc7 call dword ptr [0x10712374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712374))), 0x106e9ccdu);
  /* 106e9ccd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9cd0 jne 0x106e9ee9 */
  if (!C.zf) goto L_106e9ee9;
  /* 106e9cd6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 106e9ce0 jmp 0x106e9cf1 */
  goto L_106e9cf1;
L_106e9ce2:;
  /* 106e9ce2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9ce8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9ceb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_106e9cf1:;
  /* 106e9cf1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9cfb jae 0x106e9d12 */
  if (!C.cf) goto L_106e9d12;
  /* 106e9cfd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9d03 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 106e9d09 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 106e9d10 jmp 0x106e9ce2 */
  goto L_106e9ce2;
L_106e9d12:;
  /* 106e9d12 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 106e9d19 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 106e9d1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e9d22 jmp 0x106e9d2d */
  goto L_106e9d2d;
L_106e9d24:;
  /* 106e9d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9d27 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9d2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e9d2d:;
  /* 106e9d2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9d30 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e9d32 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e9d34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e9d36 je 0x106e9d78 */
  if (C.zf) goto L_106e9d78;
  /* 106e9d38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9d3b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e9d3d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106e9d3f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 106e9d45 jmp 0x106e9d56 */
  goto L_106e9d56;
L_106e9d47:;
  /* 106e9d47 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9d4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9d50 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_106e9d56:;
  /* 106e9d56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e9d59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e9d5b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106e9d5e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9d64 ja 0x106e9d76 */
  if ((!C.cf&&!C.zf)) goto L_106e9d76;
  /* 106e9d66 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9d6c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 106e9d74 jmp 0x106e9d47 */
  goto L_106e9d47;
L_106e9d76:;
  /* 106e9d76 jmp 0x106e9d24 */
  goto L_106e9d24;
L_106e9d78:;
  /* 106e9d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e9d7a mov eax, dword ptr [0x10710e44] */
  EAX = (r32((uint32_t)(0x10710e44)));
  /* 106e9d7f push eax */
  push32((uint32_t)(EAX));
  /* 106e9d80 mov ecx, dword ptr [0x10710ba4] */
  ECX = (r32((uint32_t)(0x10710ba4)));
  /* 106e9d86 push ecx */
  push32((uint32_t)(ECX));
  /* 106e9d87 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 106e9d8d push edx */
  push32((uint32_t)(EDX));
  /* 106e9d8e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106e9d93 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 106e9d99 push eax */
  push32((uint32_t)(EAX));
  /* 106e9d9a push 1 */
  push32((uint32_t)(0x1u));
  /* 106e9d9c call 0x106eb960 */
  push32(0x106e9da1u); f_106eb960();
  /* 106e9da1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e9da6 mov ecx, dword ptr [0x10710ba4] */
  ECX = (r32((uint32_t)(0x10710ba4)));
  /* 106e9dac push ecx */
  push32((uint32_t)(ECX));
  /* 106e9dad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106e9db2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 106e9db8 push edx */
  push32((uint32_t)(EDX));
  /* 106e9db9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106e9dbe lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 106e9dc4 push eax */
  push32((uint32_t)(EAX));
  /* 106e9dc5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106e9dca mov ecx, dword ptr [0x10710e44] */
  ECX = (r32((uint32_t)(0x10710e44)));
  /* 106e9dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 106e9dd1 call 0x106ebb20 */
  push32(0x106e9dd6u); f_106ebb20();
  /* 106e9dd6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e9ddb mov edx, dword ptr [0x10710ba4] */
  EDX = (r32((uint32_t)(0x10710ba4)));
  /* 106e9de1 push edx */
  push32((uint32_t)(EDX));
  /* 106e9de2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106e9de7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 106e9ded push eax */
  push32((uint32_t)(EAX));
  /* 106e9dee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106e9df3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 106e9df9 push ecx */
  push32((uint32_t)(ECX));
  /* 106e9dfa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 106e9dff mov edx, dword ptr [0x10710e44] */
  EDX = (r32((uint32_t)(0x10710e44)));
  /* 106e9e05 push edx */
  push32((uint32_t)(EDX));
  /* 106e9e06 call 0x106ebb20 */
  push32(0x106e9e0bu); f_106ebb20();
  /* 106e9e0b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9e0e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 106e9e18 jmp 0x106e9e29 */
  goto L_106e9e29;
L_106e9e1a:;
  /* 106e9e1a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9e20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9e23 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_106e9e29:;
  /* 106e9e29 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9e33 jae 0x106e9ee4 */
  if (!C.cf) goto L_106e9ee4;
  /* 106e9e39 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9e3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e9e41 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 106e9e49 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106e9e4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e9e4e je 0x106e9e86 */
  if (C.zf) goto L_106e9e86;
  /* 106e9e50 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9e56 mov cl, byte ptr [eax + 0x10710d41] */
  CL = (r8((uint32_t)(EAX + 0x10710d41)));
  /* 106e9e5c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 106e9e5f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9e65 mov byte ptr [edx + 0x10710d41], cl */
  w8((uint32_t)(EDX + 0x10710d41), (CL));
  /* 106e9e6b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9e71 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9e77 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 106e9e7e mov byte ptr [eax + 0x10710c40], dl */
  w8((uint32_t)(EAX + 0x10710c40), (DL));
  /* 106e9e84 jmp 0x106e9edf */
  goto L_106e9edf;
L_106e9e86:;
  /* 106e9e86 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9e8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e9e8e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 106e9e96 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 106e9e99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e9e9b je 0x106e9ed2 */
  if (C.zf) goto L_106e9ed2;
  /* 106e9e9d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9ea3 mov al, byte ptr [edx + 0x10710d41] */
  AL = (r8((uint32_t)(EDX + 0x10710d41)));
  /* 106e9ea9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 106e9eab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9eb1 mov byte ptr [ecx + 0x10710d41], al */
  w8((uint32_t)(ECX + 0x10710d41), (AL));
  /* 106e9eb7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9ebd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9ec3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 106e9eca mov byte ptr [edx + 0x10710c40], cl */
  w8((uint32_t)(EDX + 0x10710c40), (CL));
  /* 106e9ed0 jmp 0x106e9edf */
  goto L_106e9edf;
L_106e9ed2:;
  /* 106e9ed2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9ed8 mov byte ptr [edx + 0x10710c40], 0 */
  w8((uint32_t)(EDX + 0x10710c40), (0x0u));
L_106e9edf:;
  /* 106e9edf jmp 0x106e9e1a */
  goto L_106e9e1a;
L_106e9ee4:;
  /* 106e9ee4 jmp 0x106e9fae */
  goto L_106e9fae;
L_106e9ee9:;
  /* 106e9ee9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 106e9ef3 jmp 0x106e9f04 */
  goto L_106e9f04;
L_106e9ef5:;
  /* 106e9ef5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9efb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9efe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_106e9f04:;
  /* 106e9f04 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9f0e jae 0x106e9fae */
  if (!C.cf) goto L_106e9fae;
  /* 106e9f14 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9f1b jb 0x106e9f58 */
  if (C.cf) goto L_106e9f58;
  /* 106e9f1d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9f24 ja 0x106e9f58 */
  if ((!C.cf&&!C.zf)) goto L_106e9f58;
  /* 106e9f26 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9f2c mov dl, byte ptr [ecx + 0x10710d41] */
  DL = (r8((uint32_t)(ECX + 0x10710d41)));
  /* 106e9f32 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 106e9f35 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9f3b mov byte ptr [eax + 0x10710d41], dl */
  w8((uint32_t)(EAX + 0x10710d41), (DL));
  /* 106e9f41 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9f47 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9f4a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9f50 mov byte ptr [edx + 0x10710c40], cl */
  w8((uint32_t)(EDX + 0x10710c40), (CL));
  /* 106e9f56 jmp 0x106e9fa9 */
  goto L_106e9fa9;
L_106e9f58:;
  /* 106e9f58 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9f5f jb 0x106e9f9c */
  if (C.cf) goto L_106e9f9c;
  /* 106e9f61 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9f68 ja 0x106e9f9c */
  if ((!C.cf&&!C.zf)) goto L_106e9f9c;
  /* 106e9f6a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9f70 mov cl, byte ptr [eax + 0x10710d41] */
  CL = (r8((uint32_t)(EAX + 0x10710d41)));
  /* 106e9f76 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 106e9f79 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9f7f mov byte ptr [edx + 0x10710d41], cl */
  w8((uint32_t)(EDX + 0x10710d41), (CL));
  /* 106e9f85 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9f8b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e9f8e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9f94 mov byte ptr [ecx + 0x10710c40], al */
  w8((uint32_t)(ECX + 0x10710c40), (AL));
  /* 106e9f9a jmp 0x106e9fa9 */
  goto L_106e9fa9;
L_106e9f9c:;
  /* 106e9f9c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106e9fa2 mov byte ptr [edx + 0x10710c40], 0 */
  w8((uint32_t)(EDX + 0x10710c40), (0x0u));
L_106e9fa9:;
  /* 106e9fa9 jmp 0x106e9ef5 */
  goto L_106e9ef5;
L_106e9fae:;
  /* 106e9fae mov esp, ebp */
  ESP = (EBP);
  /* 106e9fb0 pop ebp */
  EBP = (pop32());
  /* 106e9fb1 ret  */
  ESPCHK(0x106e9cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fc0 @ 0x106e9fc0 (23 bytes, 9 insns) */
void f_106e9fc0(void) {
  FTRACE(0x106e9fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e9fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e9fc1 mov ebp, esp */
  EBP = (ESP);
  /* 106e9fc3 cmp dword ptr [0x10710c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9fca je 0x106e9fd3 */
  if (C.zf) goto L_106e9fd3;
  /* 106e9fcc mov eax, dword ptr [0x10710ba4] */
  EAX = (r32((uint32_t)(0x10710ba4)));
  /* 106e9fd1 jmp 0x106e9fd5 */
  goto L_106e9fd5;
L_106e9fd3:;
  /* 106e9fd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e9fd5:;
  /* 106e9fd5 pop ebp */
  EBP = (pop32());
  /* 106e9fd6 ret  */
  ESPCHK(0x106e9fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fe0 @ 0x106e9fe0 (34 bytes, 10 insns) */
void f_106e9fe0(void) {
  FTRACE(0x106e9fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e9fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e9fe1 mov ebp, esp */
  EBP = (ESP);
  /* 106e9fe3 cmp dword ptr [0x10710ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e9fea jne 0x106ea000 */
  if (!C.zf) goto L_106ea000;
  /* 106e9fec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 106e9fee call 0x106e9800 */
  push32(0x106e9ff3u); f_106e9800();
  /* 106e9ff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e9ff6 mov dword ptr [0x10710ff0], 1 */
  w32((uint32_t)(0x10710ff0), (0x1u));
L_106ea000:;
  /* 106ea000 pop ebp */
  EBP = (pop32());
  /* 106ea001 ret  */
  ESPCHK(0x106e9fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a010 @ 0x106ea010 (664 bytes, 261 insns) [15 switch table(s)] */
void f_106ea010(void) {
  FTRACE(0x106ea010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ea010 push ebp */
  push32((uint32_t)(EBP));
  /* 106ea011 mov ebp, esp */
  EBP = (ESP);
  /* 106ea013 push edi */
  push32((uint32_t)(EDI));
  /* 106ea014 push esi */
  push32((uint32_t)(ESI));
  /* 106ea015 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106ea018 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ea01b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea01e mov eax, ecx */
  EAX = (ECX);
  /* 106ea020 mov edx, ecx */
  EDX = (ECX);
  /* 106ea022 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea024 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea026 jbe 0x106ea030 */
  if ((C.cf||C.zf)) goto L_106ea030;
  /* 106ea028 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea02a jb 0x106ea1a8 */
  if (C.cf) goto L_106ea1a8;
L_106ea030:;
  /* 106ea030 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106ea036 jne 0x106ea04c */
  if (!C.zf) goto L_106ea04c;
  /* 106ea038 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ea03b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106ea03e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea041 jb 0x106ea06c */
  if (C.cf) goto L_106ea06c;
  /* 106ea043 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ea045 jmp dword ptr [edx*4 + 0x106ea158] */
  switch (EDX) {
    case 0: goto L_106ea168;
    case 1: goto L_106ea170;
    case 2: goto L_106ea17c;
    case 3: goto L_106ea190;
    default: x86_unimpl("switch@0x106ea045 out of table"); return;
  }
L_106ea04c:;
  /* 106ea04c mov eax, edi */
  EAX = (EDI);
  /* 106ea04e mov edx, 3 */
  EDX = (0x3u);
  /* 106ea053 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea056 jb 0x106ea064 */
  if (C.cf) goto L_106ea064;
  /* 106ea058 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106ea05b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea05d jmp dword ptr [eax*4 + 0x106ea070] */
  switch (EAX) {
    case 1: goto L_106ea080;
    case 2: goto L_106ea0ac;
    case 3: goto L_106ea0d0;
    default: x86_unimpl("switch@0x106ea05d out of table"); return;
  }
L_106ea064:;
  /* 106ea064 jmp dword ptr [ecx*4 + 0x106ea168] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x106ea168)))); return;
  /* 106ea06b nop  */
  /* nop */
L_106ea06c:;
  /* 106ea06c jmp dword ptr [ecx*4 + 0x106ea0ec] */
  switch (ECX) {
    case 0: goto L_106ea14f;
    case 1: goto L_106ea13c;
    case 2: goto L_106ea134;
    case 3: goto L_106ea12c;
    case 4: goto L_106ea124;
    case 5: goto L_106ea11c;
    case 6: goto L_106ea114;
    case 7: goto L_106ea10c;
    default: x86_unimpl("switch@0x106ea06c out of table"); return;
  }
  /* 106ea073 nop  */
  /* nop */
L_106ea080:;
  /* 106ea080 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ea082 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ea084 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ea086 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ea089 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ea08c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ea08f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ea092 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ea095 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea098 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea09b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea09e jb 0x106ea06c */
  if (C.cf) goto L_106ea06c;
  /* 106ea0a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ea0a2 jmp dword ptr [edx*4 + 0x106ea158] */
  switch (EDX) {
    case 0: goto L_106ea168;
    case 1: goto L_106ea170;
    case 2: goto L_106ea17c;
    case 3: goto L_106ea190;
    default: x86_unimpl("switch@0x106ea0a2 out of table"); return;
  }
  /* 106ea0a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ea0ac:;
  /* 106ea0ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ea0ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ea0b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ea0b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ea0b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ea0b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ea0bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea0be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea0c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea0c4 jb 0x106ea06c */
  if (C.cf) goto L_106ea06c;
  /* 106ea0c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ea0c8 jmp dword ptr [edx*4 + 0x106ea158] */
  switch (EDX) {
    case 0: goto L_106ea168;
    case 1: goto L_106ea170;
    case 2: goto L_106ea17c;
    case 3: goto L_106ea190;
    default: x86_unimpl("switch@0x106ea0c8 out of table"); return;
  }
  /* 106ea0cf nop  */
  /* nop */
L_106ea0d0:;
  /* 106ea0d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ea0d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ea0d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ea0d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106ea0d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ea0da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106ea0db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea0de jb 0x106ea06c */
  if (C.cf) goto L_106ea06c;
  /* 106ea0e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ea0e2 jmp dword ptr [edx*4 + 0x106ea158] */
  switch (EDX) {
    case 0: goto L_106ea168;
    case 1: goto L_106ea170;
    case 2: goto L_106ea17c;
    case 3: goto L_106ea190;
    default: x86_unimpl("switch@0x106ea0e2 out of table"); return;
  }
  /* 106ea0e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ea10c:;
  /* 106ea10c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 106ea110 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_106ea114:;
  /* 106ea114 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 106ea118 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_106ea11c:;
  /* 106ea11c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 106ea120 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_106ea124:;
  /* 106ea124 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 106ea128 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_106ea12c:;
  /* 106ea12c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 106ea130 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_106ea134:;
  /* 106ea134 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 106ea138 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_106ea13c:;
  /* 106ea13c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 106ea140 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 106ea144 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 106ea14b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea14d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106ea14f:;
  /* 106ea14f jmp dword ptr [edx*4 + 0x106ea158] */
  switch (EDX) {
    case 0: goto L_106ea168;
    case 1: goto L_106ea170;
    case 2: goto L_106ea17c;
    case 3: goto L_106ea190;
    default: x86_unimpl("switch@0x106ea14f out of table"); return;
  }
  /* 106ea156 mov edi, edi */
  EDI = (EDI);
L_106ea168:;
  /* 106ea168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea16b pop esi */
  ESI = (pop32());
  /* 106ea16c pop edi */
  EDI = (pop32());
  /* 106ea16d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ea16e ret  */
  ESPCHK(0x106ea010u, _esp0);
  ESP += 4; return;
  /* 106ea16f nop  */
  /* nop */
L_106ea170:;
  /* 106ea170 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ea172 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ea174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea177 pop esi */
  ESI = (pop32());
  /* 106ea178 pop edi */
  EDI = (pop32());
  /* 106ea179 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ea17a ret  */
  ESPCHK(0x106ea010u, _esp0);
  ESP += 4; return;
  /* 106ea17b nop  */
  /* nop */
L_106ea17c:;
  /* 106ea17c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ea17e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ea180 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ea183 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ea186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea189 pop esi */
  ESI = (pop32());
  /* 106ea18a pop edi */
  EDI = (pop32());
  /* 106ea18b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ea18c ret  */
  ESPCHK(0x106ea010u, _esp0);
  ESP += 4; return;
  /* 106ea18d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ea190:;
  /* 106ea190 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ea192 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ea194 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ea197 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ea19a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ea19d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ea1a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea1a3 pop esi */
  ESI = (pop32());
  /* 106ea1a4 pop edi */
  EDI = (pop32());
  /* 106ea1a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ea1a6 ret  */
  ESPCHK(0x106ea010u, _esp0);
  ESP += 4; return;
  /* 106ea1a7 nop  */
  /* nop */
L_106ea1a8:;
  /* 106ea1a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 106ea1ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 106ea1b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106ea1b6 jne 0x106ea1dc */
  if (!C.zf) goto L_106ea1dc;
  /* 106ea1b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ea1bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106ea1be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea1c1 jb 0x106ea1d0 */
  if (C.cf) goto L_106ea1d0;
  /* 106ea1c3 std  */
  C.df=1;
  /* 106ea1c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ea1c6 cld  */
  C.df=0;
  /* 106ea1c7 jmp dword ptr [edx*4 + 0x106ea2f0] */
  switch (EDX) {
    case 0: goto L_106ea300;
    case 1: goto L_106ea308;
    case 2: goto L_106ea318;
    case 3: goto L_106ea32c;
    default: x86_unimpl("switch@0x106ea1c7 out of table"); return;
  }
  /* 106ea1ce mov edi, edi */
  EDI = (EDI);
L_106ea1d0:;
  /* 106ea1d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ea1d2 jmp dword ptr [ecx*4 + 0x106ea2a0] */
  switch (ECX) {
    case 0: goto L_106ea2e7;
    default: x86_unimpl("switch@0x106ea1d2 out of table"); return;
  }
  /* 106ea1d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ea1dc:;
  /* 106ea1dc mov eax, edi */
  EAX = (EDI);
  /* 106ea1de mov edx, 3 */
  EDX = (0x3u);
  /* 106ea1e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea1e6 jb 0x106ea1f4 */
  if (C.cf) goto L_106ea1f4;
  /* 106ea1e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106ea1eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea1ed jmp dword ptr [eax*4 + 0x106ea1f8] */
  switch (EAX) {
    case 1: goto L_106ea208;
    case 2: goto L_106ea228;
    case 3: goto L_106ea250;
    default: x86_unimpl("switch@0x106ea1ed out of table"); return;
  }
L_106ea1f4:;
  /* 106ea1f4 jmp dword ptr [ecx*4 + 0x106ea2f0] */
  switch (ECX) {
    case 0: goto L_106ea300;
    case 1: goto L_106ea308;
    case 2: goto L_106ea318;
    case 3: goto L_106ea32c;
    default: x86_unimpl("switch@0x106ea1f4 out of table"); return;
  }
  /* 106ea1fb nop  */
  /* nop */
L_106ea208:;
  /* 106ea208 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ea20b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ea20d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ea210 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 106ea211 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ea214 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 106ea215 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea218 jb 0x106ea1d0 */
  if (C.cf) goto L_106ea1d0;
  /* 106ea21a std  */
  C.df=1;
  /* 106ea21b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ea21d cld  */
  C.df=0;
  /* 106ea21e jmp dword ptr [edx*4 + 0x106ea2f0] */
  switch (EDX) {
    case 0: goto L_106ea300;
    case 1: goto L_106ea308;
    case 2: goto L_106ea318;
    case 3: goto L_106ea32c;
    default: x86_unimpl("switch@0x106ea21e out of table"); return;
  }
  /* 106ea225 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ea228:;
  /* 106ea228 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ea22b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ea22d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ea230 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ea233 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ea236 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ea239 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea23c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea23f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea242 jb 0x106ea1d0 */
  if (C.cf) goto L_106ea1d0;
  /* 106ea244 std  */
  C.df=1;
  /* 106ea245 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ea247 cld  */
  C.df=0;
  /* 106ea248 jmp dword ptr [edx*4 + 0x106ea2f0] */
  switch (EDX) {
    case 0: goto L_106ea300;
    case 1: goto L_106ea308;
    case 2: goto L_106ea318;
    case 3: goto L_106ea32c;
    default: x86_unimpl("switch@0x106ea248 out of table"); return;
  }
  /* 106ea24f nop  */
  /* nop */
L_106ea250:;
  /* 106ea250 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ea253 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ea255 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ea258 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ea25b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ea25e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ea261 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ea264 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ea267 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea26a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea26d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea270 jb 0x106ea1d0 */
  if (C.cf) goto L_106ea1d0;
  /* 106ea276 std  */
  C.df=1;
  /* 106ea277 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ea279 cld  */
  C.df=0;
  /* 106ea27a jmp dword ptr [edx*4 + 0x106ea2f0] */
  switch (EDX) {
    case 0: goto L_106ea300;
    case 1: goto L_106ea308;
    case 2: goto L_106ea318;
    case 3: goto L_106ea32c;
    default: x86_unimpl("switch@0x106ea27a out of table"); return;
  }
  /* 106ea281 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 106ea284 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 106ea285 mov byte ptr [0xa2ac106e], al */
  w8((uint32_t)(0xa2ac106e), (AL));
  /* 106ea28a outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x106ea28a");
  /* 106ea28b adc byte ptr [edx - 0x5d43ef92], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + -0x5d43ef92))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + -0x5d43ef92), (_r)); fl_add(_a,_b,_r,8); }
  /* 106ea292 outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x106ea292");
  /* 106ea293 adc ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 106ea295 mov byte ptr [0xa2cc106e], al */
  w8((uint32_t)(0xa2cc106e), (AL));
  /* 106ea29a outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x106ea29a");
  /* 106ea29b adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 106ea29e outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x106ea29e");
  /* 106ea2a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 106ea2a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 106ea2ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 106ea2b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 106ea2b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 106ea2b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 106ea2bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 106ea2c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 106ea2c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 106ea2c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 106ea2cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 106ea2d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 106ea2d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 106ea2d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 106ea2dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 106ea2e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea2e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106ea2e7:;
  /* 106ea2e7 jmp dword ptr [edx*4 + 0x106ea2f0] */
  switch (EDX) {
    case 0: goto L_106ea300;
    case 1: goto L_106ea308;
    case 2: goto L_106ea318;
    case 3: goto L_106ea32c;
    default: x86_unimpl("switch@0x106ea2e7 out of table"); return;
  }
  /* 106ea2ee mov edi, edi */
  EDI = (EDI);
L_106ea300:;
  /* 106ea300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea303 pop esi */
  ESI = (pop32());
  /* 106ea304 pop edi */
  EDI = (pop32());
  /* 106ea305 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ea306 ret  */
  ESPCHK(0x106ea010u, _esp0);
  ESP += 4; return;
  /* 106ea307 nop  */
  /* nop */
L_106ea308:;
  /* 106ea308 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ea30b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ea30e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea311 pop esi */
  ESI = (pop32());
  /* 106ea312 pop edi */
  EDI = (pop32());
  /* 106ea313 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ea314 ret  */
  ESPCHK(0x106ea010u, _esp0);
  ESP += 4; return;
  /* 106ea315 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ea318:;
  /* 106ea318 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ea31b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ea31e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ea321 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ea324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea327 pop esi */
  ESI = (pop32());
  /* 106ea328 pop edi */
  EDI = (pop32());
  /* 106ea329 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ea32a ret  */
  ESPCHK(0x106ea010u, _esp0);
  ESP += 4; return;
  /* 106ea32b nop  */
  /* nop */
L_106ea32c:;
  /* 106ea32c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ea32f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ea332 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ea335 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ea338 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ea33b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ea33e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea341 pop esi */
  ESI = (pop32());
  /* 106ea342 pop edi */
  EDI = (pop32());
  /* 106ea343 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ea344 ret  */
  ESPCHK(0x106ea010u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x106ea350 (104 bytes, 43 insns) */
void f_106ea350(void) {
  FTRACE(0x106ea350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ea350 push ebx */
  push32((uint32_t)(EBX));
  /* 106ea351 push esi */
  push32((uint32_t)(ESI));
  /* 106ea352 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 106ea356 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ea358 jne 0x106ea372 */
  if (!C.zf) goto L_106ea372;
  /* 106ea35a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 106ea35e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 106ea362 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106ea364 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106ea366 mov ebx, eax */
  EBX = (EAX);
  /* 106ea368 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 106ea36c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106ea36e mov edx, ebx */
  EDX = (EBX);
  /* 106ea370 jmp 0x106ea3b3 */
  goto L_106ea3b3;
L_106ea372:;
  /* 106ea372 mov ecx, eax */
  ECX = (EAX);
  /* 106ea374 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 106ea378 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 106ea37c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_106ea380:;
  /* 106ea380 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106ea382 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 106ea384 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106ea386 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 106ea388 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ea38a jne 0x106ea380 */
  if (!C.zf) goto L_106ea380;
  /* 106ea38c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106ea38e mov esi, eax */
  ESI = (EAX);
  /* 106ea390 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106ea394 mov ecx, eax */
  ECX = (EAX);
  /* 106ea396 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 106ea39a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106ea39c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea39e jb 0x106ea3ae */
  if (C.cf) goto L_106ea3ae;
  /* 106ea3a0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea3a4 ja 0x106ea3ae */
  if ((!C.cf&&!C.zf)) goto L_106ea3ae;
  /* 106ea3a6 jb 0x106ea3af */
  if (C.cf) goto L_106ea3af;
  /* 106ea3a8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea3ac jbe 0x106ea3af */
  if ((C.cf||C.zf)) goto L_106ea3af;
L_106ea3ae:;
  /* 106ea3ae dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_106ea3af:;
  /* 106ea3af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106ea3b1 mov eax, esi */
  EAX = (ESI);
L_106ea3b3:;
  /* 106ea3b3 pop esi */
  ESI = (pop32());
  /* 106ea3b4 pop ebx */
  EBX = (pop32());
  /* 106ea3b5 ret 0x10 */
  ESPCHK(0x106ea350u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x106ea3c0 (117 bytes, 44 insns) */
void f_106ea3c0(void) {
  FTRACE(0x106ea3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ea3c0 push ebx */
  push32((uint32_t)(EBX));
  /* 106ea3c1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 106ea3c5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ea3c7 jne 0x106ea3e1 */
  if (!C.zf) goto L_106ea3e1;
  /* 106ea3c9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 106ea3cd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 106ea3d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106ea3d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106ea3d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106ea3d9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106ea3db mov eax, edx */
  EAX = (EDX);
  /* 106ea3dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106ea3df jmp 0x106ea431 */
  goto L_106ea431;
L_106ea3e1:;
  /* 106ea3e1 mov ecx, eax */
  ECX = (EAX);
  /* 106ea3e3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 106ea3e7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 106ea3eb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_106ea3ef:;
  /* 106ea3ef shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106ea3f1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 106ea3f3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106ea3f5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 106ea3f7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ea3f9 jne 0x106ea3ef */
  if (!C.zf) goto L_106ea3ef;
  /* 106ea3fb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106ea3fd mov ecx, eax */
  ECX = (EAX);
  /* 106ea3ff mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106ea403 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 106ea404 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106ea408 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea40a jb 0x106ea41a */
  if (C.cf) goto L_106ea41a;
  /* 106ea40c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea410 ja 0x106ea41a */
  if ((!C.cf&&!C.zf)) goto L_106ea41a;
  /* 106ea412 jb 0x106ea422 */
  if (C.cf) goto L_106ea422;
  /* 106ea414 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea418 jbe 0x106ea422 */
  if ((C.cf||C.zf)) goto L_106ea422;
L_106ea41a:;
  /* 106ea41a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea41e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_106ea422:;
  /* 106ea422 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea426 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea42a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ea42c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ea42e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_106ea431:;
  /* 106ea431 pop ebx */
  EBX = (pop32());
  /* 106ea432 ret 0x10 */
  ESPCHK(0x106ea3c0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a440 @ 0x106ea440 (628 bytes, 214 insns) */
void f_106ea440(void) {
  FTRACE(0x106ea440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ea440 push ebp */
  push32((uint32_t)(EBP));
  /* 106ea441 mov ebp, esp */
  EBP = (ESP);
  /* 106ea443 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea446 push ebx */
  push32((uint32_t)(EBX));
  /* 106ea447 push esi */
  push32((uint32_t)(ESI));
  /* 106ea448 push edi */
  push32((uint32_t)(EDI));
L_106ea449:;
  /* 106ea449 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea44d jne 0x106ea46d */
  if (!C.zf) goto L_106ea46d;
  /* 106ea44f push 0x1070af3c */
  push32((uint32_t)(0x1070af3cu));
  /* 106ea454 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ea456 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 106ea458 push 0x1070af30 */
  push32((uint32_t)(0x1070af30u));
  /* 106ea45d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ea45f call 0x106e27f0 */
  push32(0x106ea464u); f_106e27f0();
  /* 106ea464 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea467 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea46a jne 0x106ea46d */
  if (!C.zf) goto L_106ea46d;
  /* 106ea46c int3  */
  x86_unimpl("int3 @ 0x106ea46c");
L_106ea46d:;
  /* 106ea46d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ea46f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ea471 jne 0x106ea449 */
  if (!C.zf) goto L_106ea449;
  /* 106ea473 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ea476 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ea479 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea47c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106ea47f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106ea482 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea485 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ea488 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 106ea48e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ea490 je 0x106ea49f */
  if (C.zf) goto L_106ea49f;
  /* 106ea492 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea495 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106ea498 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 106ea49b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ea49d je 0x106ea4b5 */
  if (C.zf) goto L_106ea4b5;
L_106ea49f:;
  /* 106ea49f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea4a2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106ea4a5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 106ea4a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea4aa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 106ea4ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ea4b0 jmp 0x106ea6ad */
  goto L_106ea6ad;
L_106ea4b5:;
  /* 106ea4b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea4b8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106ea4bb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106ea4be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ea4c0 je 0x106ea50c */
  if (C.zf) goto L_106ea50c;
  /* 106ea4c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea4c5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106ea4cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea4cf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106ea4d2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 106ea4d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ea4d7 je 0x106ea4f5 */
  if (C.zf) goto L_106ea4f5;
  /* 106ea4d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea4dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea4df mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106ea4e2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106ea4e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea4e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ea4ea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 106ea4ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea4f0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106ea4f3 jmp 0x106ea50c */
  goto L_106ea50c;
L_106ea4f5:;
  /* 106ea4f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea4f8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ea4fb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 106ea4fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea501 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106ea504 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ea507 jmp 0x106ea6ad */
  goto L_106ea6ad;
L_106ea50c:;
  /* 106ea50c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea50f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ea512 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 106ea515 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea518 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106ea51b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea51e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ea521 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 106ea524 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea527 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106ea52a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea52d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106ea534 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ea53b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea53e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106ea541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea544 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106ea547 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 106ea54d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ea54f jne 0x106ea57f */
  if (!C.zf) goto L_106ea57f;
  /* 106ea551 cmp dword ptr [ebp - 8], 0x1070e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1070e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea558 je 0x106ea563 */
  if (C.zf) goto L_106ea563;
  /* 106ea55a cmp dword ptr [ebp - 8], 0x1070e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1070e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea561 jne 0x106ea573 */
  if (!C.zf) goto L_106ea573;
L_106ea563:;
  /* 106ea563 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ea566 push edx */
  push32((uint32_t)(EDX));
  /* 106ea567 call 0x106ec3b0 */
  push32(0x106ea56cu); f_106ec3b0();
  /* 106ea56c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea56f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ea571 jne 0x106ea57f */
  if (!C.zf) goto L_106ea57f;
L_106ea573:;
  /* 106ea573 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea576 push eax */
  push32((uint32_t)(EAX));
  /* 106ea577 call 0x106ec2e0 */
  push32(0x106ea57cu); f_106ec2e0();
  /* 106ea57c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ea57f:;
  /* 106ea57f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea582 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ea585 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 106ea58b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ea58d je 0x106ea66b */
  if (C.zf) goto L_106ea66b;
L_106ea593:;
  /* 106ea593 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea596 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea599 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 106ea59b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea59e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ea5a0 jge 0x106ea5c3 */
  if ((C.sf==C.of)) goto L_106ea5c3;
  /* 106ea5a2 push 0x1070aef0 */
  push32((uint32_t)(0x1070aef0u));
  /* 106ea5a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ea5a9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 106ea5ae push 0x1070af30 */
  push32((uint32_t)(0x1070af30u));
  /* 106ea5b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ea5b5 call 0x106e27f0 */
  push32(0x106ea5bau); f_106e27f0();
  /* 106ea5ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea5bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea5c0 jne 0x106ea5c3 */
  if (!C.zf) goto L_106ea5c3;
  /* 106ea5c2 int3  */
  x86_unimpl("int3 @ 0x106ea5c2");
L_106ea5c3:;
  /* 106ea5c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ea5c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ea5c7 jne 0x106ea593 */
  if (!C.zf) goto L_106ea593;
  /* 106ea5c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea5cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea5cf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106ea5d1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea5d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ea5d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea5da mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106ea5dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea5e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea5e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106ea5e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea5e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106ea5eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea5ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea5f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106ea5f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea5f8 jle 0x106ea616 */
  if ((C.zf||C.sf!=C.of)) goto L_106ea616;
  /* 106ea5fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea5fd push ecx */
  push32((uint32_t)(ECX));
  /* 106ea5fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea601 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106ea604 push eax */
  push32((uint32_t)(EAX));
  /* 106ea605 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ea608 push ecx */
  push32((uint32_t)(ECX));
  /* 106ea609 call 0x106ebfd0 */
  push32(0x106ea60eu); f_106ebfd0();
  /* 106ea60e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea611 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106ea614 jmp 0x106ea65e */
  goto L_106ea65e;
L_106ea616:;
  /* 106ea616 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea61a je 0x106ea639 */
  if (C.zf) goto L_106ea639;
  /* 106ea61c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ea61f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106ea622 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ea625 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106ea628 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ea62b mov ecx, dword ptr [edx*4 + 0x10710ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10710ea0)));
  /* 106ea632 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea634 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106ea637 jmp 0x106ea640 */
  goto L_106ea640;
L_106ea639:;
  /* 106ea639 mov dword ptr [ebp - 0x14], 0x1070da60 */
  w32((uint32_t)(EBP + -0x14), (0x1070da60u));
L_106ea640:;
  /* 106ea640 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106ea643 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 106ea647 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106ea64a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ea64c je 0x106ea65e */
  if (C.zf) goto L_106ea65e;
  /* 106ea64e push 2 */
  push32((uint32_t)(0x2u));
  /* 106ea650 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ea652 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ea655 push ecx */
  push32((uint32_t)(ECX));
  /* 106ea656 call 0x106ebe80 */
  push32(0x106ea65bu); f_106ebe80();
  /* 106ea65b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ea65e:;
  /* 106ea65e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea661 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106ea664 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 106ea667 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 106ea669 jmp 0x106ea689 */
  goto L_106ea689;
L_106ea66b:;
  /* 106ea66b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106ea672 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea675 push edx */
  push32((uint32_t)(EDX));
  /* 106ea676 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 106ea679 push eax */
  push32((uint32_t)(EAX));
  /* 106ea67a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ea67d push ecx */
  push32((uint32_t)(ECX));
  /* 106ea67e call 0x106ebfd0 */
  push32(0x106ea683u); f_106ebfd0();
  /* 106ea683 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea686 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106ea689:;
  /* 106ea689 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ea68c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea68f je 0x106ea6a5 */
  if (C.zf) goto L_106ea6a5;
  /* 106ea691 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea694 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106ea697 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 106ea69a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea69d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 106ea6a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ea6a3 jmp 0x106ea6ad */
  goto L_106ea6ad;
L_106ea6a5:;
  /* 106ea6a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea6a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_106ea6ad:;
  /* 106ea6ad pop edi */
  EDI = (pop32());
  /* 106ea6ae pop esi */
  ESI = (pop32());
  /* 106ea6af pop ebx */
  EBX = (pop32());
  /* 106ea6b0 mov esp, ebp */
  ESP = (EBP);
  /* 106ea6b2 pop ebp */
  EBP = (pop32());
  /* 106ea6b3 ret  */
  ESPCHK(0x106ea440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6c0 @ 0x106ea6c0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_106ea6c0(void) {
  FTRACE(0x106ea6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ea6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ea6c1 mov ebp, esp */
  EBP = (ESP);
  /* 106ea6c3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea6c9 push ebx */
  push32((uint32_t)(EBX));
  /* 106ea6ca push esi */
  push32((uint32_t)(ESI));
  /* 106ea6cb push edi */
  push32((uint32_t)(EDI));
  /* 106ea6cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106ea6d3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 106ea6dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_106ea6e4:;
  /* 106ea6e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ea6e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106ea6e9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 106ea6ec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea6f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ea6f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea6f6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 106ea6f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ea6fb je 0x106eb2d7 */
  if (C.zf) goto L_106eb2d7;
  /* 106ea701 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea708 jl 0x106eb2d7 */
  if ((C.sf!=C.of)) goto L_106eb2d7;
  /* 106ea70e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea712 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea715 jl 0x106ea736 */
  if ((C.sf!=C.of)) goto L_106ea736;
  /* 106ea717 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea71b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea71e jg 0x106ea736 */
  if ((!C.zf&&C.sf==C.of)) goto L_106ea736;
  /* 106ea720 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea724 movsx ecx, byte ptr [eax + 0x1070af28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1070af28))));
  /* 106ea72b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 106ea72e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 106ea734 jmp 0x106ea740 */
  goto L_106ea740;
L_106ea736:;
  /* 106ea736 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_106ea740:;
  /* 106ea740 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 106ea746 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106ea749 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ea74c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ea74f movsx edx, byte ptr [ecx + eax*8 + 0x1070af48] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1070af48))));
  /* 106ea757 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106ea75a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106ea75d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ea760 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 106ea766 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea76d ja 0x106eb2d2 */
  if ((!C.cf&&!C.zf)) goto L_106eb2d2;
  /* 106ea773 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 106ea779 jmp dword ptr [ecx*4 + 0x106eb2e4] */
  switch (ECX) {
    case 0: goto L_106ea780;
    case 1: goto L_106ea81a;
    case 2: goto L_106ea85c;
    case 3: goto L_106ea8cb;
    case 4: goto L_106ea923;
    case 5: goto L_106ea932;
    case 6: goto L_106ea97e;
    case 7: goto L_106eaa11;
    case 8: goto L_106ea8a8;
    case 9: goto L_106ea8b3;
    case 10: goto L_106ea89e;
    case 11: goto L_106ea893;
    case 12: goto L_106ea8be;
    case 13: goto L_106ea8c6;
    default: x86_unimpl("switch@0x106ea779 out of table"); return;
  }
L_106ea780:;
  /* 106ea780 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 106ea787 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ea78a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106ea790 mov eax, dword ptr [0x1070dc98] */
  EAX = (r32((uint32_t)(0x1070dc98)));
  /* 106ea795 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ea797 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 106ea79b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 106ea7a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ea7a3 je 0x106ea7fd */
  if (C.zf) goto L_106ea7fd;
  /* 106ea7a5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 106ea7ab push edx */
  push32((uint32_t)(EDX));
  /* 106ea7ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea7af push eax */
  push32((uint32_t)(EAX));
  /* 106ea7b0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea7b4 push ecx */
  push32((uint32_t)(ECX));
  /* 106ea7b5 call 0x106eb3f0 */
  push32(0x106ea7bau); f_106eb3f0();
  /* 106ea7ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea7bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ea7c0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106ea7c2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 106ea7c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ea7c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea7cb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_106ea7ce:;
  /* 106ea7ce movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea7d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ea7d4 jne 0x106ea7f7 */
  if (!C.zf) goto L_106ea7f7;
  /* 106ea7d6 push 0x1070afc8 */
  push32((uint32_t)(0x1070afc8u));
  /* 106ea7db push 0 */
  push32((uint32_t)(0x0u));
  /* 106ea7dd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 106ea7e2 push 0x1070afbc */
  push32((uint32_t)(0x1070afbcu));
  /* 106ea7e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ea7e9 call 0x106e27f0 */
  push32(0x106ea7eeu); f_106e27f0();
  /* 106ea7ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea7f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea7f4 jne 0x106ea7f7 */
  if (!C.zf) goto L_106ea7f7;
  /* 106ea7f6 int3  */
  x86_unimpl("int3 @ 0x106ea7f6");
L_106ea7f7:;
  /* 106ea7f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ea7f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ea7fb jne 0x106ea7ce */
  if (!C.zf) goto L_106ea7ce;
L_106ea7fd:;
  /* 106ea7fd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 106ea803 push ecx */
  push32((uint32_t)(ECX));
  /* 106ea804 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ea807 push edx */
  push32((uint32_t)(EDX));
  /* 106ea808 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea80c push eax */
  push32((uint32_t)(EAX));
  /* 106ea80d call 0x106eb3f0 */
  push32(0x106ea812u); f_106eb3f0();
  /* 106ea812 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea815 jmp 0x106eb2d2 */
  goto L_106eb2d2;
L_106ea81a:;
  /* 106ea81a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106ea821 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ea824 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 106ea82a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 106ea830 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 106ea836 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 106ea83c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106ea83f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ea846 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 106ea850 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 106ea857 jmp 0x106eb2d2 */
  goto L_106eb2d2;
L_106ea85c:;
  /* 106ea85c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea860 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 106ea866 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 106ea86c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea86f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 106ea875 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea87c ja 0x106ea8c6 */
  if ((!C.cf&&!C.zf)) goto L_106ea8c6;
  /* 106ea87e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 106ea884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ea886 mov al, byte ptr [ecx + 0x106eb31c] */
  AL = (r8((uint32_t)(ECX + 0x106eb31c)));
  /* 106ea88c jmp dword ptr [eax*4 + 0x106eb304] */
  switch (EAX) {
    case 0: goto L_106ea8a8;
    case 1: goto L_106ea8b3;
    case 2: goto L_106ea89e;
    case 3: goto L_106ea893;
    case 4: goto L_106ea8be;
    case 5: goto L_106ea8c6;
    default: x86_unimpl("switch@0x106ea88c out of table"); return;
  }
L_106ea893:;
  /* 106ea893 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea896 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106ea899 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106ea89c jmp 0x106ea8c6 */
  goto L_106ea8c6;
L_106ea89e:;
  /* 106ea89e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea8a1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 106ea8a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ea8a6 jmp 0x106ea8c6 */
  goto L_106ea8c6;
L_106ea8a8:;
  /* 106ea8a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea8ab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 106ea8ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106ea8b1 jmp 0x106ea8c6 */
  goto L_106ea8c6;
L_106ea8b3:;
  /* 106ea8b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea8b6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 106ea8b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106ea8bc jmp 0x106ea8c6 */
  goto L_106ea8c6;
L_106ea8be:;
  /* 106ea8be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea8c1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 106ea8c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106ea8c6:;
  /* 106ea8c6 jmp 0x106eb2d2 */
  goto L_106eb2d2;
L_106ea8cb:;
  /* 106ea8cb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea8cf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea8d2 jne 0x106ea907 */
  if (!C.zf) goto L_106ea907;
  /* 106ea8d4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 106ea8d7 push edx */
  push32((uint32_t)(EDX));
  /* 106ea8d8 call 0x106eb500 */
  push32(0x106ea8ddu); f_106eb500();
  /* 106ea8dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea8e0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 106ea8e6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea8ed jge 0x106ea905 */
  if ((C.sf==C.of)) goto L_106ea905;
  /* 106ea8ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea8f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 106ea8f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ea8f7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 106ea8fd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ea8ff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_106ea905:;
  /* 106ea905 jmp 0x106ea91e */
  goto L_106ea91e;
L_106ea907:;
  /* 106ea907 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 106ea90d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ea910 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea914 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 106ea918 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_106ea91e:;
  /* 106ea91e jmp 0x106eb2d2 */
  goto L_106eb2d2;
L_106ea923:;
  /* 106ea923 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 106ea92d jmp 0x106eb2d2 */
  goto L_106eb2d2;
L_106ea932:;
  /* 106ea932 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea936 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea939 jne 0x106ea962 */
  if (!C.zf) goto L_106ea962;
  /* 106ea93b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 106ea93e push eax */
  push32((uint32_t)(EAX));
  /* 106ea93f call 0x106eb500 */
  push32(0x106ea944u); f_106eb500();
  /* 106ea944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea947 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 106ea94d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea954 jge 0x106ea960 */
  if ((C.sf==C.of)) goto L_106ea960;
  /* 106ea956 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_106ea960:;
  /* 106ea960 jmp 0x106ea979 */
  goto L_106ea979;
L_106ea962:;
  /* 106ea962 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 106ea968 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ea96b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea96f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 106ea973 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_106ea979:;
  /* 106ea979 jmp 0x106eb2d2 */
  goto L_106eb2d2;
L_106ea97e:;
  /* 106ea97e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ea982 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 106ea988 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 106ea98e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ea991 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 106ea997 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea99e ja 0x106eaa0c */
  if ((!C.cf&&!C.zf)) goto L_106eaa0c;
  /* 106ea9a0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 106ea9a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ea9a8 mov al, byte ptr [ecx + 0x106eb341] */
  AL = (r8((uint32_t)(ECX + 0x106eb341)));
  /* 106ea9ae jmp dword ptr [eax*4 + 0x106eb32d] */
  switch (EAX) {
    case 0: goto L_106ea9c0;
    case 1: goto L_106ea9f9;
    case 2: goto L_106ea9b5;
    case 3: goto L_106eaa03;
    case 4: goto L_106eaa0c;
    default: x86_unimpl("switch@0x106ea9ae out of table"); return;
  }
L_106ea9b5:;
  /* 106ea9b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea9b8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 106ea9bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106ea9be jmp 0x106eaa0c */
  goto L_106eaa0c;
L_106ea9c0:;
  /* 106ea9c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ea9c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ea9c6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea9c9 jne 0x106ea9eb */
  if (!C.zf) goto L_106ea9eb;
  /* 106ea9cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ea9ce movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106ea9d2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ea9d5 jne 0x106ea9eb */
  if (!C.zf) goto L_106ea9eb;
  /* 106ea9d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ea9da add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ea9dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 106ea9e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea9e3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 106ea9e6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106ea9e9 jmp 0x106ea9f7 */
  goto L_106ea9f7;
L_106ea9eb:;
  /* 106ea9eb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 106ea9f2 jmp 0x106ea780 */
  goto L_106ea780;
L_106ea9f7:;
  /* 106ea9f7 jmp 0x106eaa0c */
  goto L_106eaa0c;
L_106ea9f9:;
  /* 106ea9f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ea9fc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 106ea9fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106eaa01 jmp 0x106eaa0c */
  goto L_106eaa0c;
L_106eaa03:;
  /* 106eaa03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eaa06 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 106eaa09 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106eaa0c:;
  /* 106eaa0c jmp 0x106eb2d2 */
  goto L_106eb2d2;
L_106eaa11:;
  /* 106eaa11 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106eaa15 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 106eaa1b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 106eaa21 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eaa24 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 106eaa2a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eaa31 ja 0x106eb0f7 */
  if ((!C.cf&&!C.zf)) goto L_106eb0f7;
  /* 106eaa37 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 106eaa3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106eaa3f mov cl, byte ptr [edx + 0x106eb3ac] */
  CL = (r8((uint32_t)(EDX + 0x106eb3ac)));
  /* 106eaa45 jmp dword ptr [ecx*4 + 0x106eb370] */
  switch (ECX) {
    case 0: goto L_106eaa4c;
    case 1: goto L_106eace0;
    case 2: goto L_106eab70;
    case 3: goto L_106eae19;
    case 4: goto L_106eaadb;
    case 5: goto L_106eaa61;
    case 6: goto L_106eadeb;
    case 7: goto L_106eacf0;
    case 8: goto L_106eac95;
    case 9: goto L_106eae65;
    case 10: goto L_106eae0f;
    case 11: goto L_106eab86;
    case 12: goto L_106eae03;
    case 13: goto L_106eae25;
    case 14: goto L_106eb0f7;
    default: x86_unimpl("switch@0x106eaa45 out of table"); return;
  }
L_106eaa4c:;
  /* 106eaa4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eaa4f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 106eaa54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eaa56 jne 0x106eaa61 */
  if (!C.zf) goto L_106eaa61;
  /* 106eaa58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eaa5b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 106eaa5e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106eaa61:;
  /* 106eaa61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eaa64 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 106eaa6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eaa6c je 0x106eaaa7 */
  if (C.zf) goto L_106eaaa7;
  /* 106eaa6e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 106eaa71 push eax */
  push32((uint32_t)(EAX));
  /* 106eaa72 call 0x106eb540 */
  push32(0x106eaa77u); f_106eb540();
  /* 106eaa77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eaa7a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 106eaa7e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 106eaa82 push ecx */
  push32((uint32_t)(ECX));
  /* 106eaa83 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 106eaa89 push edx */
  push32((uint32_t)(EDX));
  /* 106eaa8a call 0x106ec620 */
  push32(0x106eaa8fu); f_106ec620();
  /* 106eaa8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eaa92 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106eaa95 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eaa99 jge 0x106eaaa5 */
  if ((C.sf==C.of)) goto L_106eaaa5;
  /* 106eaa9b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_106eaaa5:;
  /* 106eaaa5 jmp 0x106eaacd */
  goto L_106eaacd;
L_106eaaa7:;
  /* 106eaaa7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 106eaaaa push eax */
  push32((uint32_t)(EAX));
  /* 106eaaab call 0x106eb500 */
  push32(0x106eaab0u); f_106eb500();
  /* 106eaab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eaab3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 106eaaba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 106eaac0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 106eaac6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_106eaacd:;
  /* 106eaacd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 106eaad3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106eaad6 jmp 0x106eb0f7 */
  goto L_106eb0f7;
L_106eaadb:;
  /* 106eaadb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 106eaade push eax */
  push32((uint32_t)(EAX));
  /* 106eaadf call 0x106eb500 */
  push32(0x106eaae4u); f_106eb500();
  /* 106eaae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eaae7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 106eaaed cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eaaf4 je 0x106eab02 */
  if (C.zf) goto L_106eab02;
  /* 106eaaf6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 106eaafc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eab00 jne 0x106eab1c */
  if (!C.zf) goto L_106eab1c;
L_106eab02:;
  /* 106eab02 mov edx, dword ptr [0x1070dfb0] */
  EDX = (r32((uint32_t)(0x1070dfb0)));
  /* 106eab08 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106eab0b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eab0e push eax */
  push32((uint32_t)(EAX));
  /* 106eab0f call 0x106e6560 */
  push32(0x106eab14u); f_106e6560();
  /* 106eab14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eab17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106eab1a jmp 0x106eab6b */
  goto L_106eab6b;
L_106eab1c:;
  /* 106eab1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eab1f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 106eab25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106eab27 je 0x106eab4c */
  if (C.zf) goto L_106eab4c;
  /* 106eab29 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 106eab2f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106eab32 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106eab35 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 106eab3b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 106eab3e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106eab40 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106eab43 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 106eab4a jmp 0x106eab6b */
  goto L_106eab6b;
L_106eab4c:;
  /* 106eab4c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 106eab53 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 106eab59 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106eab5c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106eab5f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 106eab65 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 106eab68 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106eab6b:;
  /* 106eab6b jmp 0x106eb0f7 */
  goto L_106eb0f7;
L_106eab70:;
  /* 106eab70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eab73 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 106eab79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106eab7b jne 0x106eab86 */
  if (!C.zf) goto L_106eab86;
  /* 106eab7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eab80 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 106eab83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106eab86:;
  /* 106eab86 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eab8d jne 0x106eab9b */
  if (!C.zf) goto L_106eab9b;
  /* 106eab8f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 106eab99 jmp 0x106eaba7 */
  goto L_106eaba7;
L_106eab9b:;
  /* 106eab9b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 106eaba1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_106eaba7:;
  /* 106eaba7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 106eabad mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 106eabb3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 106eabb6 push edx */
  push32((uint32_t)(EDX));
  /* 106eabb7 call 0x106eb500 */
  push32(0x106eabbcu); f_106eb500();
  /* 106eabbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eabbf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106eabc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eabc5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 106eabca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eabcc je 0x106eac36 */
  if (C.zf) goto L_106eac36;
  /* 106eabce cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eabd2 jne 0x106eabdd */
  if (!C.zf) goto L_106eabdd;
  /* 106eabd4 mov ecx, dword ptr [0x1070dfb4] */
  ECX = (r32((uint32_t)(0x1070dfb4)));
  /* 106eabda mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_106eabdd:;
  /* 106eabdd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 106eabe4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eabe7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_106eabed:;
  /* 106eabed mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 106eabf3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 106eabf9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eabfc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 106eac02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eac04 je 0x106eac26 */
  if (C.zf) goto L_106eac26;
  /* 106eac06 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 106eac0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106eac0e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 106eac11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eac13 je 0x106eac26 */
  if (C.zf) goto L_106eac26;
  /* 106eac15 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 106eac1b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eac1e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 106eac24 jmp 0x106eabed */
  goto L_106eabed;
L_106eac26:;
  /* 106eac26 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 106eac2c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eac2f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106eac31 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106eac34 jmp 0x106eac90 */
  goto L_106eac90;
L_106eac36:;
  /* 106eac36 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eac3a jne 0x106eac44 */
  if (!C.zf) goto L_106eac44;
  /* 106eac3c mov eax, dword ptr [0x1070dfb0] */
  EAX = (r32((uint32_t)(0x1070dfb0)));
  /* 106eac41 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_106eac44:;
  /* 106eac44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eac47 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_106eac4d:;
  /* 106eac4d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 106eac53 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 106eac59 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eac5c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 106eac62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eac64 je 0x106eac84 */
  if (C.zf) goto L_106eac84;
  /* 106eac66 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 106eac6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106eac6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eac71 je 0x106eac84 */
  if (C.zf) goto L_106eac84;
  /* 106eac73 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 106eac79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eac7c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 106eac82 jmp 0x106eac4d */
  goto L_106eac4d;
L_106eac84:;
  /* 106eac84 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 106eac8a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eac8d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_106eac90:;
  /* 106eac90 jmp 0x106eb0f7 */
  goto L_106eb0f7;
L_106eac95:;
  /* 106eac95 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 106eac98 push edx */
  push32((uint32_t)(EDX));
  /* 106eac99 call 0x106eb500 */
  push32(0x106eac9eu); f_106eb500();
  /* 106eac9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eaca1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 106eaca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eacaa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106eacad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eacaf je 0x106eacc3 */
  if (C.zf) goto L_106eacc3;
  /* 106eacb1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 106eacb7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 106eacbe mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 106eacc1 jmp 0x106eacd1 */
  goto L_106eacd1;
L_106eacc3:;
  /* 106eacc3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 106eacc9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 106eaccf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_106eacd1:;
  /* 106eacd1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 106eacdb jmp 0x106eb0f7 */
  goto L_106eb0f7;
L_106eace0:;
  /* 106eace0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 106eace7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 106eacea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 106eaced mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_106eacf0:;
  /* 106eacf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eacf3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 106eacf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106eacf8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 106eacfe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106ead01 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ead08 jge 0x106ead16 */
  if ((C.sf==C.of)) goto L_106ead16;
  /* 106ead0a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 106ead14 jmp 0x106ead32 */
  goto L_106ead32;
L_106ead16:;
  /* 106ead16 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ead1d jne 0x106ead32 */
  if (!C.zf) goto L_106ead32;
  /* 106ead1f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ead23 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ead26 jne 0x106ead32 */
  if (!C.zf) goto L_106ead32;
  /* 106ead28 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_106ead32:;
  /* 106ead32 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ead35 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ead38 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 106ead3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ead3e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ead41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106ead43 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106ead46 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 106ead4c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 106ead52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ead55 push ecx */
  push32((uint32_t)(ECX));
  /* 106ead56 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 106ead5c push edx */
  push32((uint32_t)(EDX));
  /* 106ead5d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ead61 push eax */
  push32((uint32_t)(EAX));
  /* 106ead62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ead65 push ecx */
  push32((uint32_t)(ECX));
  /* 106ead66 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 106ead6c push edx */
  push32((uint32_t)(EDX));
  /* 106ead6d call dword ptr [0x1070e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070e3a0))), 0x106ead73u);
  /* 106ead73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ead76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ead79 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 106ead7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ead80 je 0x106ead98 */
  if (C.zf) goto L_106ead98;
  /* 106ead82 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ead89 jne 0x106ead98 */
  if (!C.zf) goto L_106ead98;
  /* 106ead8b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ead8e push ecx */
  push32((uint32_t)(ECX));
  /* 106ead8f call dword ptr [0x1070e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070e3ac))), 0x106ead95u);
  /* 106ead95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ead98:;
  /* 106ead98 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106ead9c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ead9f jne 0x106eadba */
  if (!C.zf) goto L_106eadba;
  /* 106eada1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eada4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 106eada9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eadab jne 0x106eadba */
  if (!C.zf) goto L_106eadba;
  /* 106eadad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eadb0 push ecx */
  push32((uint32_t)(ECX));
  /* 106eadb1 call dword ptr [0x1070e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070e3a4))), 0x106eadb7u);
  /* 106eadb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106eadba:;
  /* 106eadba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eadbd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106eadc0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eadc3 jne 0x106eadd7 */
  if (!C.zf) goto L_106eadd7;
  /* 106eadc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eadc8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 106eadcb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106eadce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eadd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eadd4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_106eadd7:;
  /* 106eadd7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eadda push eax */
  push32((uint32_t)(EAX));
  /* 106eaddb call 0x106e6560 */
  push32(0x106eade0u); f_106e6560();
  /* 106eade0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eade3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106eade6 jmp 0x106eb0f7 */
  goto L_106eb0f7;
L_106eadeb:;
  /* 106eadeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eadee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 106eadf1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106eadf4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 106eadfe jmp 0x106eae85 */
  goto L_106eae85;
L_106eae03:;
  /* 106eae03 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 106eae0d jmp 0x106eae85 */
  goto L_106eae85;
L_106eae0f:;
  /* 106eae0f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_106eae19:;
  /* 106eae19 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 106eae23 jmp 0x106eae2f */
  goto L_106eae2f;
L_106eae25:;
  /* 106eae25 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_106eae2f:;
  /* 106eae2f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 106eae39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eae3c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 106eae42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eae44 je 0x106eae63 */
  if (C.zf) goto L_106eae63;
  /* 106eae46 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 106eae4d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 106eae53 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eae56 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 106eae5c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_106eae63:;
  /* 106eae63 jmp 0x106eae85 */
  goto L_106eae85;
L_106eae65:;
  /* 106eae65 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 106eae6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eae72 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 106eae78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106eae7a je 0x106eae85 */
  if (C.zf) goto L_106eae85;
  /* 106eae7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eae7f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 106eae82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106eae85:;
  /* 106eae85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eae88 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 106eae8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eae8f je 0x106eaeae */
  if (C.zf) goto L_106eaeae;
  /* 106eae91 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 106eae94 push ecx */
  push32((uint32_t)(ECX));
  /* 106eae95 call 0x106eb520 */
  push32(0x106eae9au); f_106eb520();
  /* 106eae9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eae9d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 106eaea3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 106eaea9 jmp 0x106eaf3f */
  goto L_106eaf3f;
L_106eaeae:;
  /* 106eaeae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eaeb1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 106eaeb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eaeb6 je 0x106eaf00 */
  if (C.zf) goto L_106eaf00;
  /* 106eaeb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eaebb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 106eaebe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eaec0 je 0x106eaee0 */
  if (C.zf) goto L_106eaee0;
  /* 106eaec2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 106eaec5 push ecx */
  push32((uint32_t)(ECX));
  /* 106eaec6 call 0x106eb500 */
  push32(0x106eaecbu); f_106eb500();
  /* 106eaecb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eaece movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 106eaed1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106eaed2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 106eaed8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 106eaede jmp 0x106eaefe */
  goto L_106eaefe;
L_106eaee0:;
  /* 106eaee0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 106eaee3 push edx */
  push32((uint32_t)(EDX));
  /* 106eaee4 call 0x106eb500 */
  push32(0x106eaee9u); f_106eb500();
  /* 106eaee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eaeec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106eaef1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106eaef2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 106eaef8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_106eaefe:;
  /* 106eaefe jmp 0x106eaf3f */
  goto L_106eaf3f;
L_106eaf00:;
  /* 106eaf00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eaf03 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 106eaf06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eaf08 je 0x106eaf25 */
  if (C.zf) goto L_106eaf25;
  /* 106eaf0a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 106eaf0d push ecx */
  push32((uint32_t)(ECX));
  /* 106eaf0e call 0x106eb500 */
  push32(0x106eaf13u); f_106eb500();
  /* 106eaf13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eaf16 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106eaf17 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 106eaf1d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 106eaf23 jmp 0x106eaf3f */
  goto L_106eaf3f;
L_106eaf25:;
  /* 106eaf25 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 106eaf28 push edx */
  push32((uint32_t)(EDX));
  /* 106eaf29 call 0x106eb500 */
  push32(0x106eaf2eu); f_106eb500();
  /* 106eaf2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eaf31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106eaf33 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 106eaf39 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_106eaf3f:;
  /* 106eaf3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eaf42 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 106eaf45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eaf47 je 0x106eaf87 */
  if (C.zf) goto L_106eaf87;
  /* 106eaf49 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eaf50 jg 0x106eaf87 */
  if ((!C.zf&&C.sf==C.of)) goto L_106eaf87;
  /* 106eaf52 jl 0x106eaf5d */
  if ((C.sf!=C.of)) goto L_106eaf5d;
  /* 106eaf54 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eaf5b jae 0x106eaf87 */
  if (!C.cf) goto L_106eaf87;
L_106eaf5d:;
  /* 106eaf5d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 106eaf63 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106eaf65 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 106eaf6b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eaf6e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106eaf70 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 106eaf76 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 106eaf7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eaf7f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 106eaf82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106eaf85 jmp 0x106eaf9f */
  goto L_106eaf9f;
L_106eaf87:;
  /* 106eaf87 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 106eaf8d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 106eaf93 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 106eaf99 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_106eaf9f:;
  /* 106eaf9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eafa2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106eafa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eafaa jne 0x106eafc7 */
  if (!C.zf) goto L_106eafc7;
  /* 106eafac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 106eafb2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 106eafb8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 106eafbb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 106eafc1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_106eafc7:;
  /* 106eafc7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eafce jge 0x106eafdc */
  if ((C.sf==C.of)) goto L_106eafdc;
  /* 106eafd0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 106eafda jmp 0x106eafe5 */
  goto L_106eafe5;
L_106eafdc:;
  /* 106eafdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eafdf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 106eafe2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106eafe5:;
  /* 106eafe5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 106eafeb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 106eaff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eaff3 jne 0x106eaffc */
  if (!C.zf) goto L_106eaffc;
  /* 106eaff5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106eaffc:;
  /* 106eaffc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 106eafff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_106eb002:;
  /* 106eb002 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 106eb008 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 106eb00e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb011 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 106eb017 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eb019 jg 0x106eb02f */
  if ((!C.zf&&C.sf==C.of)) goto L_106eb02f;
  /* 106eb01b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 106eb021 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 106eb027 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106eb029 je 0x106eb0b0 */
  if (C.zf) goto L_106eb0b0;
L_106eb02f:;
  /* 106eb02f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 106eb035 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106eb036 push edx */
  push32((uint32_t)(EDX));
  /* 106eb037 push eax */
  push32((uint32_t)(EAX));
  /* 106eb038 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 106eb03e push edx */
  push32((uint32_t)(EDX));
  /* 106eb03f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 106eb045 push eax */
  push32((uint32_t)(EAX));
  /* 106eb046 call 0x106ea3c0 */
  push32(0x106eb04bu); f_106ea3c0();
  /* 106eb04b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb04e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 106eb054 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 106eb05a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106eb05b push edx */
  push32((uint32_t)(EDX));
  /* 106eb05c push eax */
  push32((uint32_t)(EAX));
  /* 106eb05d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 106eb063 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb064 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 106eb06a push edx */
  push32((uint32_t)(EDX));
  /* 106eb06b call 0x106ea350 */
  push32(0x106eb070u); f_106ea350();
  /* 106eb070 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 106eb076 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 106eb07c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb083 jle 0x106eb097 */
  if ((C.zf||C.sf!=C.of)) goto L_106eb097;
  /* 106eb085 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 106eb08b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb091 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_106eb097:;
  /* 106eb097 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eb09a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 106eb0a0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 106eb0a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eb0a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb0a8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106eb0ab jmp 0x106eb002 */
  goto L_106eb002;
L_106eb0b0:;
  /* 106eb0b0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 106eb0b3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb0b6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106eb0b9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eb0bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb0bf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106eb0c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb0c5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 106eb0ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eb0cc je 0x106eb0f7 */
  if (C.zf) goto L_106eb0f7;
  /* 106eb0ce mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eb0d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106eb0d4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb0d7 jne 0x106eb0df */
  if (!C.zf) goto L_106eb0df;
  /* 106eb0d9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb0dd jne 0x106eb0f7 */
  if (!C.zf) goto L_106eb0f7;
L_106eb0df:;
  /* 106eb0df mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eb0e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb0e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106eb0e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eb0eb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 106eb0ee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106eb0f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb0f4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_106eb0f7:;
  /* 106eb0f7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb0fe jne 0x106eb2d2 */
  if (!C.zf) goto L_106eb2d2;
  /* 106eb104 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb107 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 106eb10a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eb10c je 0x106eb15d */
  if (C.zf) goto L_106eb15d;
  /* 106eb10e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb111 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 106eb117 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106eb119 je 0x106eb12b */
  if (C.zf) goto L_106eb12b;
  /* 106eb11b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 106eb122 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 106eb129 jmp 0x106eb15d */
  goto L_106eb15d;
L_106eb12b:;
  /* 106eb12b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb12e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106eb131 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eb133 je 0x106eb145 */
  if (C.zf) goto L_106eb145;
  /* 106eb135 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 106eb13c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 106eb143 jmp 0x106eb15d */
  goto L_106eb15d;
L_106eb145:;
  /* 106eb145 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb148 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 106eb14b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eb14d je 0x106eb15d */
  if (C.zf) goto L_106eb15d;
  /* 106eb14f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 106eb156 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_106eb15d:;
  /* 106eb15d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 106eb163 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb166 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb169 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 106eb16f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb172 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 106eb175 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eb177 jne 0x106eb195 */
  if (!C.zf) goto L_106eb195;
  /* 106eb179 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 106eb17f push eax */
  push32((uint32_t)(EAX));
  /* 106eb180 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb183 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb184 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 106eb18a push edx */
  push32((uint32_t)(EDX));
  /* 106eb18b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106eb18d call 0x106eb470 */
  push32(0x106eb192u); f_106eb470();
  /* 106eb192 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106eb195:;
  /* 106eb195 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 106eb19b push eax */
  push32((uint32_t)(EAX));
  /* 106eb19c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb19f push ecx */
  push32((uint32_t)(ECX));
  /* 106eb1a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106eb1a3 push edx */
  push32((uint32_t)(EDX));
  /* 106eb1a4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 106eb1aa push eax */
  push32((uint32_t)(EAX));
  /* 106eb1ab call 0x106eb4b0 */
  push32(0x106eb1b0u); f_106eb4b0();
  /* 106eb1b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb1b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb1b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 106eb1b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106eb1bb je 0x106eb1e3 */
  if (C.zf) goto L_106eb1e3;
  /* 106eb1bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb1c0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106eb1c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eb1c5 jne 0x106eb1e3 */
  if (!C.zf) goto L_106eb1e3;
  /* 106eb1c7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 106eb1cd push eax */
  push32((uint32_t)(EAX));
  /* 106eb1ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb1d1 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb1d2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 106eb1d8 push edx */
  push32((uint32_t)(EDX));
  /* 106eb1d9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 106eb1db call 0x106eb470 */
  push32(0x106eb1e0u); f_106eb470();
  /* 106eb1e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106eb1e3:;
  /* 106eb1e3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb1e7 je 0x106eb291 */
  if (C.zf) goto L_106eb291;
  /* 106eb1ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb1f1 jle 0x106eb291 */
  if ((C.zf||C.sf!=C.of)) goto L_106eb291;
  /* 106eb1f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eb1fa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 106eb200 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106eb203 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_106eb209:;
  /* 106eb209 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 106eb20f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 106eb215 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb218 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 106eb21e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eb220 je 0x106eb28f */
  if (C.zf) goto L_106eb28f;
  /* 106eb222 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 106eb228 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 106eb22b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 106eb232 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 106eb239 push eax */
  push32((uint32_t)(EAX));
  /* 106eb23a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 106eb240 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb241 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 106eb247 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb24a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 106eb250 call 0x106ec620 */
  push32(0x106eb255u); f_106ec620();
  /* 106eb255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb258 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 106eb25e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb265 jg 0x106eb269 */
  if ((!C.zf&&C.sf==C.of)) goto L_106eb269;
  /* 106eb267 jmp 0x106eb28f */
  goto L_106eb28f;
L_106eb269:;
  /* 106eb269 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 106eb26f push eax */
  push32((uint32_t)(EAX));
  /* 106eb270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb273 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb274 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 106eb27a push edx */
  push32((uint32_t)(EDX));
  /* 106eb27b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 106eb281 push eax */
  push32((uint32_t)(EAX));
  /* 106eb282 call 0x106eb4b0 */
  push32(0x106eb287u); f_106eb4b0();
  /* 106eb287 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb28a jmp 0x106eb209 */
  goto L_106eb209;
L_106eb28f:;
  /* 106eb28f jmp 0x106eb2ac */
  goto L_106eb2ac;
L_106eb291:;
  /* 106eb291 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 106eb297 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb298 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb29b push edx */
  push32((uint32_t)(EDX));
  /* 106eb29c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106eb29f push eax */
  push32((uint32_t)(EAX));
  /* 106eb2a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eb2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb2a4 call 0x106eb4b0 */
  push32(0x106eb2a9u); f_106eb4b0();
  /* 106eb2a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106eb2ac:;
  /* 106eb2ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb2af and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106eb2b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106eb2b4 je 0x106eb2d2 */
  if (C.zf) goto L_106eb2d2;
  /* 106eb2b6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 106eb2bc push eax */
  push32((uint32_t)(EAX));
  /* 106eb2bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb2c0 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb2c1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 106eb2c7 push edx */
  push32((uint32_t)(EDX));
  /* 106eb2c8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106eb2ca call 0x106eb470 */
  push32(0x106eb2cfu); f_106eb470();
  /* 106eb2cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106eb2d2:;
  /* 106eb2d2 jmp 0x106ea6e4 */
  goto L_106ea6e4;
L_106eb2d7:;
  /* 106eb2d7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 106eb2dd pop edi */
  EDI = (pop32());
  /* 106eb2de pop esi */
  ESI = (pop32());
  /* 106eb2df pop ebx */
  EBX = (pop32());
  /* 106eb2e0 mov esp, ebp */
  ESP = (EBP);
  /* 106eb2e2 pop ebp */
  EBP = (pop32());
  /* 106eb2e3 ret  */
  ESPCHK(0x106ea6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3f0 @ 0x106eb3f0 (119 bytes, 44 insns) */
void f_106eb3f0(void) {
  FTRACE(0x106eb3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb3f1 mov ebp, esp */
  EBP = (ESP);
  /* 106eb3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb3f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb3f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106eb3fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb3fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb400 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106eb403 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb406 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb40a jl 0x106eb432 */
  if ((C.sf!=C.of)) goto L_106eb432;
  /* 106eb40c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb40f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106eb411 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 106eb414 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 106eb416 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 106eb41a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106eb420 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106eb423 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb426 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106eb428 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb42b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb42e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106eb430 jmp 0x106eb445 */
  goto L_106eb445;
L_106eb432:;
  /* 106eb432 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb435 push edx */
  push32((uint32_t)(EDX));
  /* 106eb436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb439 push eax */
  push32((uint32_t)(EAX));
  /* 106eb43a call 0x106ea440 */
  push32(0x106eb43fu); f_106ea440();
  /* 106eb43f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb442 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106eb445:;
  /* 106eb445 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb449 jne 0x106eb456 */
  if (!C.zf) goto L_106eb456;
  /* 106eb44b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106eb44e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 106eb454 jmp 0x106eb463 */
  goto L_106eb463;
L_106eb456:;
  /* 106eb456 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106eb459 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106eb45b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb45e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106eb461 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_106eb463:;
  /* 106eb463 mov esp, ebp */
  ESP = (EBP);
  /* 106eb465 pop ebp */
  EBP = (pop32());
  /* 106eb466 ret  */
  ESPCHK(0x106eb3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b470 @ 0x106eb470 (53 bytes, 23 insns) */
void f_106eb470(void) {
  FTRACE(0x106eb470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb470 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb471 mov ebp, esp */
  EBP = (ESP);
L_106eb473:;
  /* 106eb473 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb476 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb479 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb47c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 106eb47f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eb481 jle 0x106eb4a3 */
  if ((C.zf||C.sf!=C.of)) goto L_106eb4a3;
  /* 106eb483 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106eb486 push edx */
  push32((uint32_t)(EDX));
  /* 106eb487 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106eb48a push eax */
  push32((uint32_t)(EAX));
  /* 106eb48b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb48e push ecx */
  push32((uint32_t)(ECX));
  /* 106eb48f call 0x106eb3f0 */
  push32(0x106eb494u); f_106eb3f0();
  /* 106eb494 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb497 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106eb49a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb49d jne 0x106eb4a1 */
  if (!C.zf) goto L_106eb4a1;
  /* 106eb49f jmp 0x106eb4a3 */
  goto L_106eb4a3;
L_106eb4a1:;
  /* 106eb4a1 jmp 0x106eb473 */
  goto L_106eb473;
L_106eb4a3:;
  /* 106eb4a3 pop ebp */
  EBP = (pop32());
  /* 106eb4a4 ret  */
  ESPCHK(0x106eb470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4b0 @ 0x106eb4b0 (74 bytes, 31 insns) */
void f_106eb4b0(void) {
  FTRACE(0x106eb4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb4b1 mov ebp, esp */
  EBP = (ESP);
  /* 106eb4b3 push ecx */
  push32((uint32_t)(ECX));
L_106eb4b4:;
  /* 106eb4b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb4b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb4ba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb4bd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 106eb4c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eb4c2 jle 0x106eb4f6 */
  if ((C.zf||C.sf!=C.of)) goto L_106eb4f6;
  /* 106eb4c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106eb4c7 push edx */
  push32((uint32_t)(EDX));
  /* 106eb4c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106eb4cb push eax */
  push32((uint32_t)(EAX));
  /* 106eb4cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb4cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106eb4d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106eb4d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb4d8 push eax */
  push32((uint32_t)(EAX));
  /* 106eb4d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb4dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb4df mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106eb4e2 call 0x106eb3f0 */
  push32(0x106eb4e7u); f_106eb3f0();
  /* 106eb4e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb4ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106eb4ed cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb4f0 jne 0x106eb4f4 */
  if (!C.zf) goto L_106eb4f4;
  /* 106eb4f2 jmp 0x106eb4f6 */
  goto L_106eb4f6;
L_106eb4f4:;
  /* 106eb4f4 jmp 0x106eb4b4 */
  goto L_106eb4b4;
L_106eb4f6:;
  /* 106eb4f6 mov esp, ebp */
  ESP = (EBP);
  /* 106eb4f8 pop ebp */
  EBP = (pop32());
  /* 106eb4f9 ret  */
  ESPCHK(0x106eb4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b500 @ 0x106eb500 (26 bytes, 12 insns) */
void f_106eb500(void) {
  FTRACE(0x106eb500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb500 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb501 mov ebp, esp */
  EBP = (ESP);
  /* 106eb503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb506 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106eb508 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb50b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb50e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106eb510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb513 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106eb515 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 106eb518 pop ebp */
  EBP = (pop32());
  /* 106eb519 ret  */
  ESPCHK(0x106eb500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b520 @ 0x106eb520 (31 bytes, 14 insns) */
void f_106eb520(void) {
  FTRACE(0x106eb520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb520 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb521 mov ebp, esp */
  EBP = (ESP);
  /* 106eb523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb526 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106eb528 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb52b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb52e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106eb530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb533 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106eb535 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb538 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106eb53a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106eb53d pop ebp */
  EBP = (pop32());
  /* 106eb53e ret  */
  ESPCHK(0x106eb520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b540 @ 0x106eb540 (27 bytes, 12 insns) */
void f_106eb540(void) {
  FTRACE(0x106eb540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb540 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb541 mov ebp, esp */
  EBP = (ESP);
  /* 106eb543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb546 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106eb548 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb54b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb54e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106eb550 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb553 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106eb555 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 106eb559 pop ebp */
  EBP = (pop32());
  /* 106eb55a ret  */
  ESPCHK(0x106eb540u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x106eb560 (145 bytes, 42 insns) */
void f_106eb560(void) {
  FTRACE(0x106eb560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb560 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb561 mov ebp, esp */
  EBP = (ESP);
  /* 106eb563 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb564 call 0x106eb610 */
  push32(0x106eb569u); f_106eb610();
  /* 106eb569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb56c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106eb56e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106eb575 jmp 0x106eb580 */
  goto L_106eb580;
L_106eb577:;
  /* 106eb577 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb57a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb57d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106eb580:;
  /* 106eb580 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb584 jae 0x106eb5aa */
  if (!C.cf) goto L_106eb5aa;
  /* 106eb586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb589 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb58c cmp ecx, dword ptr [eax*8 + 0x1070dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1070dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb593 jne 0x106eb5a8 */
  if (!C.zf) goto L_106eb5a8;
  /* 106eb595 call 0x106eb600 */
  push32(0x106eb59au); f_106eb600();
  /* 106eb59a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eb59d mov ecx, dword ptr [edx*8 + 0x1070dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1070dfbc)));
  /* 106eb5a4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106eb5a6 jmp 0x106eb5ed */
  goto L_106eb5ed;
L_106eb5a8:;
  /* 106eb5a8 jmp 0x106eb577 */
  goto L_106eb577;
L_106eb5aa:;
  /* 106eb5aa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb5ae jb 0x106eb5c3 */
  if (C.cf) goto L_106eb5c3;
  /* 106eb5b0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb5b4 ja 0x106eb5c3 */
  if ((!C.cf&&!C.zf)) goto L_106eb5c3;
  /* 106eb5b6 call 0x106eb600 */
  push32(0x106eb5bbu); f_106eb600();
  /* 106eb5bb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 106eb5c1 jmp 0x106eb5ed */
  goto L_106eb5ed;
L_106eb5c3:;
  /* 106eb5c3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb5ca jb 0x106eb5e2 */
  if (C.cf) goto L_106eb5e2;
  /* 106eb5cc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb5d3 ja 0x106eb5e2 */
  if ((!C.cf&&!C.zf)) goto L_106eb5e2;
  /* 106eb5d5 call 0x106eb600 */
  push32(0x106eb5dau); f_106eb600();
  /* 106eb5da mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 106eb5e0 jmp 0x106eb5ed */
  goto L_106eb5ed;
L_106eb5e2:;
  /* 106eb5e2 call 0x106eb600 */
  push32(0x106eb5e7u); f_106eb600();
  /* 106eb5e7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_106eb5ed:;
  /* 106eb5ed mov esp, ebp */
  ESP = (EBP);
  /* 106eb5ef pop ebp */
  EBP = (pop32());
  /* 106eb5f0 ret  */
  ESPCHK(0x106eb560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b600 @ 0x106eb600 (13 bytes, 6 insns) */
void f_106eb600(void) {
  FTRACE(0x106eb600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb600 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb601 mov ebp, esp */
  EBP = (ESP);
  /* 106eb603 call 0x106e3170 */
  push32(0x106eb608u); f_106e3170();
  /* 106eb608 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb60b pop ebp */
  EBP = (pop32());
  /* 106eb60c ret  */
  ESPCHK(0x106eb600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b610 @ 0x106eb610 (13 bytes, 6 insns) */
void f_106eb610(void) {
  FTRACE(0x106eb610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb610 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb611 mov ebp, esp */
  EBP = (ESP);
  /* 106eb613 call 0x106e3170 */
  push32(0x106eb618u); f_106e3170();
  /* 106eb618 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb61b pop ebp */
  EBP = (pop32());
  /* 106eb61c ret  */
  ESPCHK(0x106eb610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b620 @ 0x106eb620 (664 bytes, 261 insns) [15 switch table(s)] */
void f_106eb620(void) {
  FTRACE(0x106eb620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb620 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb621 mov ebp, esp */
  EBP = (ESP);
  /* 106eb623 push edi */
  push32((uint32_t)(EDI));
  /* 106eb624 push esi */
  push32((uint32_t)(ESI));
  /* 106eb625 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106eb628 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106eb62b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb62e mov eax, ecx */
  EAX = (ECX);
  /* 106eb630 mov edx, ecx */
  EDX = (ECX);
  /* 106eb632 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb634 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb636 jbe 0x106eb640 */
  if ((C.cf||C.zf)) goto L_106eb640;
  /* 106eb638 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb63a jb 0x106eb7b8 */
  if (C.cf) goto L_106eb7b8;
L_106eb640:;
  /* 106eb640 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106eb646 jne 0x106eb65c */
  if (!C.zf) goto L_106eb65c;
  /* 106eb648 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106eb64b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106eb64e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb651 jb 0x106eb67c */
  if (C.cf) goto L_106eb67c;
  /* 106eb653 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106eb655 jmp dword ptr [edx*4 + 0x106eb768] */
  switch (EDX) {
    case 0: goto L_106eb778;
    case 1: goto L_106eb780;
    case 2: goto L_106eb78c;
    case 3: goto L_106eb7a0;
    default: x86_unimpl("switch@0x106eb655 out of table"); return;
  }
L_106eb65c:;
  /* 106eb65c mov eax, edi */
  EAX = (EDI);
  /* 106eb65e mov edx, 3 */
  EDX = (0x3u);
  /* 106eb663 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb666 jb 0x106eb674 */
  if (C.cf) goto L_106eb674;
  /* 106eb668 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106eb66b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb66d jmp dword ptr [eax*4 + 0x106eb680] */
  switch (EAX) {
    case 1: goto L_106eb690;
    case 2: goto L_106eb6bc;
    case 3: goto L_106eb6e0;
    default: x86_unimpl("switch@0x106eb66d out of table"); return;
  }
L_106eb674:;
  /* 106eb674 jmp dword ptr [ecx*4 + 0x106eb778] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x106eb778)))); return;
  /* 106eb67b nop  */
  /* nop */
L_106eb67c:;
  /* 106eb67c jmp dword ptr [ecx*4 + 0x106eb6fc] */
  switch (ECX) {
    case 0: goto L_106eb75f;
    case 1: goto L_106eb74c;
    case 2: goto L_106eb744;
    case 3: goto L_106eb73c;
    case 4: goto L_106eb734;
    case 5: goto L_106eb72c;
    case 6: goto L_106eb724;
    case 7: goto L_106eb71c;
    default: x86_unimpl("switch@0x106eb67c out of table"); return;
  }
  /* 106eb683 nop  */
  /* nop */
L_106eb690:;
  /* 106eb690 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106eb692 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106eb694 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106eb696 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106eb699 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106eb69c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106eb69f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106eb6a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106eb6a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb6a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb6ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb6ae jb 0x106eb67c */
  if (C.cf) goto L_106eb67c;
  /* 106eb6b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106eb6b2 jmp dword ptr [edx*4 + 0x106eb768] */
  switch (EDX) {
    case 0: goto L_106eb778;
    case 1: goto L_106eb780;
    case 2: goto L_106eb78c;
    case 3: goto L_106eb7a0;
    default: x86_unimpl("switch@0x106eb6b2 out of table"); return;
  }
  /* 106eb6b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106eb6bc:;
  /* 106eb6bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106eb6be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106eb6c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106eb6c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106eb6c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106eb6c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106eb6cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb6ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb6d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb6d4 jb 0x106eb67c */
  if (C.cf) goto L_106eb67c;
  /* 106eb6d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106eb6d8 jmp dword ptr [edx*4 + 0x106eb768] */
  switch (EDX) {
    case 0: goto L_106eb778;
    case 1: goto L_106eb780;
    case 2: goto L_106eb78c;
    case 3: goto L_106eb7a0;
    default: x86_unimpl("switch@0x106eb6d8 out of table"); return;
  }
  /* 106eb6df nop  */
  /* nop */
L_106eb6e0:;
  /* 106eb6e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106eb6e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106eb6e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106eb6e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106eb6e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106eb6ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106eb6eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb6ee jb 0x106eb67c */
  if (C.cf) goto L_106eb67c;
  /* 106eb6f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106eb6f2 jmp dword ptr [edx*4 + 0x106eb768] */
  switch (EDX) {
    case 0: goto L_106eb778;
    case 1: goto L_106eb780;
    case 2: goto L_106eb78c;
    case 3: goto L_106eb7a0;
    default: x86_unimpl("switch@0x106eb6f2 out of table"); return;
  }
  /* 106eb6f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106eb71c:;
  /* 106eb71c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 106eb720 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_106eb724:;
  /* 106eb724 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 106eb728 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_106eb72c:;
  /* 106eb72c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 106eb730 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_106eb734:;
  /* 106eb734 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 106eb738 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_106eb73c:;
  /* 106eb73c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 106eb740 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_106eb744:;
  /* 106eb744 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 106eb748 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_106eb74c:;
  /* 106eb74c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 106eb750 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 106eb754 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 106eb75b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb75d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106eb75f:;
  /* 106eb75f jmp dword ptr [edx*4 + 0x106eb768] */
  switch (EDX) {
    case 0: goto L_106eb778;
    case 1: goto L_106eb780;
    case 2: goto L_106eb78c;
    case 3: goto L_106eb7a0;
    default: x86_unimpl("switch@0x106eb75f out of table"); return;
  }
  /* 106eb766 mov edi, edi */
  EDI = (EDI);
L_106eb778:;
  /* 106eb778 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb77b pop esi */
  ESI = (pop32());
  /* 106eb77c pop edi */
  EDI = (pop32());
  /* 106eb77d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106eb77e ret  */
  ESPCHK(0x106eb620u, _esp0);
  ESP += 4; return;
  /* 106eb77f nop  */
  /* nop */
L_106eb780:;
  /* 106eb780 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106eb782 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106eb784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb787 pop esi */
  ESI = (pop32());
  /* 106eb788 pop edi */
  EDI = (pop32());
  /* 106eb789 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106eb78a ret  */
  ESPCHK(0x106eb620u, _esp0);
  ESP += 4; return;
  /* 106eb78b nop  */
  /* nop */
L_106eb78c:;
  /* 106eb78c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106eb78e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106eb790 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106eb793 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106eb796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb799 pop esi */
  ESI = (pop32());
  /* 106eb79a pop edi */
  EDI = (pop32());
  /* 106eb79b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106eb79c ret  */
  ESPCHK(0x106eb620u, _esp0);
  ESP += 4; return;
  /* 106eb79d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106eb7a0:;
  /* 106eb7a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106eb7a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106eb7a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106eb7a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106eb7aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106eb7ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106eb7b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb7b3 pop esi */
  ESI = (pop32());
  /* 106eb7b4 pop edi */
  EDI = (pop32());
  /* 106eb7b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106eb7b6 ret  */
  ESPCHK(0x106eb620u, _esp0);
  ESP += 4; return;
  /* 106eb7b7 nop  */
  /* nop */
L_106eb7b8:;
  /* 106eb7b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 106eb7bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 106eb7c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106eb7c6 jne 0x106eb7ec */
  if (!C.zf) goto L_106eb7ec;
  /* 106eb7c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106eb7cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106eb7ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb7d1 jb 0x106eb7e0 */
  if (C.cf) goto L_106eb7e0;
  /* 106eb7d3 std  */
  C.df=1;
  /* 106eb7d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106eb7d6 cld  */
  C.df=0;
  /* 106eb7d7 jmp dword ptr [edx*4 + 0x106eb900] */
  switch (EDX) {
    case 0: goto L_106eb910;
    case 1: goto L_106eb918;
    case 2: goto L_106eb928;
    case 3: goto L_106eb93c;
    default: x86_unimpl("switch@0x106eb7d7 out of table"); return;
  }
  /* 106eb7de mov edi, edi */
  EDI = (EDI);
L_106eb7e0:;
  /* 106eb7e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106eb7e2 jmp dword ptr [ecx*4 + 0x106eb8b0] */
  switch (ECX) {
    case 0: goto L_106eb8f7;
    default: x86_unimpl("switch@0x106eb7e2 out of table"); return;
  }
  /* 106eb7e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106eb7ec:;
  /* 106eb7ec mov eax, edi */
  EAX = (EDI);
  /* 106eb7ee mov edx, 3 */
  EDX = (0x3u);
  /* 106eb7f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb7f6 jb 0x106eb804 */
  if (C.cf) goto L_106eb804;
  /* 106eb7f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106eb7fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb7fd jmp dword ptr [eax*4 + 0x106eb808] */
  switch (EAX) {
    case 1: goto L_106eb818;
    case 2: goto L_106eb838;
    case 3: goto L_106eb860;
    default: x86_unimpl("switch@0x106eb7fd out of table"); return;
  }
L_106eb804:;
  /* 106eb804 jmp dword ptr [ecx*4 + 0x106eb900] */
  switch (ECX) {
    case 0: goto L_106eb910;
    case 1: goto L_106eb918;
    case 2: goto L_106eb928;
    case 3: goto L_106eb93c;
    default: x86_unimpl("switch@0x106eb804 out of table"); return;
  }
  /* 106eb80b nop  */
  /* nop */
L_106eb818:;
  /* 106eb818 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106eb81b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106eb81d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106eb820 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 106eb821 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106eb824 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 106eb825 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb828 jb 0x106eb7e0 */
  if (C.cf) goto L_106eb7e0;
  /* 106eb82a std  */
  C.df=1;
  /* 106eb82b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106eb82d cld  */
  C.df=0;
  /* 106eb82e jmp dword ptr [edx*4 + 0x106eb900] */
  switch (EDX) {
    case 0: goto L_106eb910;
    case 1: goto L_106eb918;
    case 2: goto L_106eb928;
    case 3: goto L_106eb93c;
    default: x86_unimpl("switch@0x106eb82e out of table"); return;
  }
  /* 106eb835 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106eb838:;
  /* 106eb838 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106eb83b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106eb83d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106eb840 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106eb843 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106eb846 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106eb849 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb84c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb84f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb852 jb 0x106eb7e0 */
  if (C.cf) goto L_106eb7e0;
  /* 106eb854 std  */
  C.df=1;
  /* 106eb855 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106eb857 cld  */
  C.df=0;
  /* 106eb858 jmp dword ptr [edx*4 + 0x106eb900] */
  switch (EDX) {
    case 0: goto L_106eb910;
    case 1: goto L_106eb918;
    case 2: goto L_106eb928;
    case 3: goto L_106eb93c;
    default: x86_unimpl("switch@0x106eb858 out of table"); return;
  }
  /* 106eb85f nop  */
  /* nop */
L_106eb860:;
  /* 106eb860 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106eb863 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106eb865 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106eb868 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106eb86b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106eb86e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106eb871 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106eb874 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106eb877 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb87a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eb87d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb880 jb 0x106eb7e0 */
  if (C.cf) goto L_106eb7e0;
  /* 106eb886 std  */
  C.df=1;
  /* 106eb887 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106eb889 cld  */
  C.df=0;
  /* 106eb88a jmp dword ptr [edx*4 + 0x106eb900] */
  switch (EDX) {
    case 0: goto L_106eb910;
    case 1: goto L_106eb918;
    case 2: goto L_106eb928;
    case 3: goto L_106eb93c;
    default: x86_unimpl("switch@0x106eb88a out of table"); return;
  }
  /* 106eb891 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 106eb894 mov ah, 0xb8 */
  AH = (0xb8u);
  /* 106eb896 outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x106eb896");
  /* 106eb897 adc byte ptr [eax + edi*4 - 0x473bef92], bh */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*4 + -0x473bef92))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EDI*4 + -0x473bef92), (_r)); fl_add(_a,_b,_r,8); }
  /* 106eb89e outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x106eb89e");
  /* 106eb89f adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 106eb8a1 mov eax, 0xb8d4106e */
  EAX = (0xb8d4106eu);
  /* 106eb8a6 outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x106eb8a6");
  /* 106eb8a7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 106eb8a9 mov eax, 0xb8e4106e */
  EAX = (0xb8e4106eu);
  /* 106eb8ae outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x106eb8ae");
  /* 106eb8b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 106eb8b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 106eb8bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 106eb8c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 106eb8c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 106eb8c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 106eb8cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 106eb8d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 106eb8d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 106eb8d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 106eb8dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 106eb8e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 106eb8e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 106eb8e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 106eb8ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 106eb8f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb8f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106eb8f7:;
  /* 106eb8f7 jmp dword ptr [edx*4 + 0x106eb900] */
  switch (EDX) {
    case 0: goto L_106eb910;
    case 1: goto L_106eb918;
    case 2: goto L_106eb928;
    case 3: goto L_106eb93c;
    default: x86_unimpl("switch@0x106eb8f7 out of table"); return;
  }
  /* 106eb8fe mov edi, edi */
  EDI = (EDI);
L_106eb910:;
  /* 106eb910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb913 pop esi */
  ESI = (pop32());
  /* 106eb914 pop edi */
  EDI = (pop32());
  /* 106eb915 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106eb916 ret  */
  ESPCHK(0x106eb620u, _esp0);
  ESP += 4; return;
  /* 106eb917 nop  */
  /* nop */
L_106eb918:;
  /* 106eb918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106eb91b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106eb91e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb921 pop esi */
  ESI = (pop32());
  /* 106eb922 pop edi */
  EDI = (pop32());
  /* 106eb923 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106eb924 ret  */
  ESPCHK(0x106eb620u, _esp0);
  ESP += 4; return;
  /* 106eb925 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106eb928:;
  /* 106eb928 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106eb92b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106eb92e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106eb931 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106eb934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb937 pop esi */
  ESI = (pop32());
  /* 106eb938 pop edi */
  EDI = (pop32());
  /* 106eb939 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106eb93a ret  */
  ESPCHK(0x106eb620u, _esp0);
  ESP += 4; return;
  /* 106eb93b nop  */
  /* nop */
L_106eb93c:;
  /* 106eb93c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106eb93f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106eb942 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106eb945 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106eb948 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106eb94b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106eb94e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eb951 pop esi */
  ESI = (pop32());
  /* 106eb952 pop edi */
  EDI = (pop32());
  /* 106eb953 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106eb954 ret  */
  ESPCHK(0x106eb620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b960 @ 0x106eb960 (421 bytes, 148 insns) */
void f_106eb960(void) {
  FTRACE(0x106eb960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eb960 push ebp */
  push32((uint32_t)(EBP));
  /* 106eb961 mov ebp, esp */
  EBP = (ESP);
  /* 106eb963 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106eb965 push 0x1070afe0 */
  push32((uint32_t)(0x1070afe0u));
  /* 106eb96a push 0x106ec838 */
  push32((uint32_t)(0x106ec838u));
  /* 106eb96f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106eb975 push eax */
  push32((uint32_t)(EAX));
  /* 106eb976 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106eb97d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eb980 push ebx */
  push32((uint32_t)(EBX));
  /* 106eb981 push esi */
  push32((uint32_t)(ESI));
  /* 106eb982 push edi */
  push32((uint32_t)(EDI));
  /* 106eb983 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106eb986 cmp dword ptr [0x1070f6b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb98d jne 0x106eb9de */
  if (!C.zf) goto L_106eb9de;
  /* 106eb98f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 106eb992 push eax */
  push32((uint32_t)(EAX));
  /* 106eb993 push 1 */
  push32((uint32_t)(0x1u));
  /* 106eb995 push 0x1070afdc */
  push32((uint32_t)(0x1070afdcu));
  /* 106eb99a push 1 */
  push32((uint32_t)(0x1u));
  /* 106eb99c call dword ptr [0x107122b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b0))), 0x106eb9a2u);
  /* 106eb9a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eb9a4 je 0x106eb9b2 */
  if (C.zf) goto L_106eb9b2;
  /* 106eb9a6 mov dword ptr [0x1070f6b4], 1 */
  w32((uint32_t)(0x1070f6b4), (0x1u));
  /* 106eb9b0 jmp 0x106eb9de */
  goto L_106eb9de;
L_106eb9b2:;
  /* 106eb9b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 106eb9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 106eb9b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106eb9b8 push 0x1070afd8 */
  push32((uint32_t)(0x1070afd8u));
  /* 106eb9bd push 1 */
  push32((uint32_t)(0x1u));
  /* 106eb9bf push 0 */
  push32((uint32_t)(0x0u));
  /* 106eb9c1 call dword ptr [0x107122b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b4))), 0x106eb9c7u);
  /* 106eb9c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eb9c9 je 0x106eb9d7 */
  if (C.zf) goto L_106eb9d7;
  /* 106eb9cb mov dword ptr [0x1070f6b4], 2 */
  w32((uint32_t)(0x1070f6b4), (0x2u));
  /* 106eb9d5 jmp 0x106eb9de */
  goto L_106eb9de;
L_106eb9d7:;
  /* 106eb9d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106eb9d9 jmp 0x106ebb08 */
  goto L_106ebb08;
L_106eb9de:;
  /* 106eb9de cmp dword ptr [0x1070f6b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb9e5 jne 0x106eba15 */
  if (!C.zf) goto L_106eba15;
  /* 106eb9e7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eb9eb jne 0x106eb9f6 */
  if (!C.zf) goto L_106eb9f6;
  /* 106eb9ed mov edx, dword ptr [0x1070f6c0] */
  EDX = (r32((uint32_t)(0x1070f6c0)));
  /* 106eb9f3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_106eb9f6:;
  /* 106eb9f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106eb9f9 push eax */
  push32((uint32_t)(EAX));
  /* 106eb9fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106eb9fd push ecx */
  push32((uint32_t)(ECX));
  /* 106eb9fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eba01 push edx */
  push32((uint32_t)(EDX));
  /* 106eba02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eba05 push eax */
  push32((uint32_t)(EAX));
  /* 106eba06 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106eba09 push ecx */
  push32((uint32_t)(ECX));
  /* 106eba0a call dword ptr [0x107122b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b4))), 0x106eba10u);
  /* 106eba10 jmp 0x106ebb08 */
  goto L_106ebb08;
L_106eba15:;
  /* 106eba15 cmp dword ptr [0x1070f6b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eba1c jne 0x106ebb06 */
  if (!C.zf) goto L_106ebb06;
  /* 106eba22 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eba26 jne 0x106eba31 */
  if (!C.zf) goto L_106eba31;
  /* 106eba28 mov edx, dword ptr [0x1070f6d0] */
  EDX = (r32((uint32_t)(0x1070f6d0)));
  /* 106eba2e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_106eba31:;
  /* 106eba31 push 0 */
  push32((uint32_t)(0x0u));
  /* 106eba33 push 0 */
  push32((uint32_t)(0x0u));
  /* 106eba35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106eba38 push eax */
  push32((uint32_t)(EAX));
  /* 106eba39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eba3c push ecx */
  push32((uint32_t)(ECX));
  /* 106eba3d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 106eba40 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106eba42 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eba44 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 106eba47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eba4a push edx */
  push32((uint32_t)(EDX));
  /* 106eba4b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106eba4e push eax */
  push32((uint32_t)(EAX));
  /* 106eba4f call dword ptr [0x107122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b8))), 0x106eba55u);
  /* 106eba55 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106eba58 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eba5c jne 0x106eba65 */
  if (!C.zf) goto L_106eba65;
  /* 106eba5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106eba60 jmp 0x106ebb08 */
  goto L_106ebb08;
L_106eba65:;
  /* 106eba65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106eba6c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eba6f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106eba71 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eba74 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106eba76 call 0x106e68d0 */
  push32(0x106eba7bu); f_106e68d0();
  /* 106eba7b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 106eba7e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106eba81 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106eba84 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106eba87 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106eba8a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106eba8c push edx */
  push32((uint32_t)(EDX));
  /* 106eba8d push 0 */
  push32((uint32_t)(0x0u));
  /* 106eba8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106eba92 push eax */
  push32((uint32_t)(EAX));
  /* 106eba93 call 0x106e74a0 */
  push32(0x106eba98u); f_106e74a0();
  /* 106eba98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eba9b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106ebaa2 jmp 0x106ebabb */
  goto L_106ebabb;
  /* 106ebaa4 mov eax, 1 */
  EAX = (0x1u);
  /* 106ebaa9 ret  */
  ESPCHK(0x106eb960u, _esp0);
  ESP += 4; return;
  /* 106ebaaa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106ebaad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106ebab4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106ebabb:;
  /* 106ebabb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebabf jne 0x106ebac5 */
  if (!C.zf) goto L_106ebac5;
  /* 106ebac1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebac3 jmp 0x106ebb08 */
  goto L_106ebb08;
L_106ebac5:;
  /* 106ebac5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ebac8 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebac9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ebacc push edx */
  push32((uint32_t)(EDX));
  /* 106ebacd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ebad0 push eax */
  push32((uint32_t)(EAX));
  /* 106ebad1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ebad4 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebad5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ebad7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106ebada push edx */
  push32((uint32_t)(EDX));
  /* 106ebadb call dword ptr [0x107122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b8))), 0x106ebae1u);
  /* 106ebae1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106ebae4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebae8 jne 0x106ebaee */
  if (!C.zf) goto L_106ebaee;
  /* 106ebaea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebaec jmp 0x106ebb08 */
  goto L_106ebb08;
L_106ebaee:;
  /* 106ebaee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ebaf1 push eax */
  push32((uint32_t)(EAX));
  /* 106ebaf2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ebaf5 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebaf6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ebaf9 push edx */
  push32((uint32_t)(EDX));
  /* 106ebafa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebafd push eax */
  push32((uint32_t)(EAX));
  /* 106ebafe call dword ptr [0x107122b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b0))), 0x106ebb04u);
  /* 106ebb04 jmp 0x106ebb08 */
  goto L_106ebb08;
L_106ebb06:;
  /* 106ebb06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106ebb08:;
  /* 106ebb08 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 106ebb0b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ebb0e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106ebb15 pop edi */
  EDI = (pop32());
  /* 106ebb16 pop esi */
  ESI = (pop32());
  /* 106ebb17 pop ebx */
  EBX = (pop32());
  /* 106ebb18 mov esp, ebp */
  ESP = (EBP);
  /* 106ebb1a pop ebp */
  EBP = (pop32());
  /* 106ebb1b ret  */
  ESPCHK(0x106eb960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb20 @ 0x106ebb20 (727 bytes, 263 insns) */
void f_106ebb20(void) {
  FTRACE(0x106ebb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ebb20 push ebp */
  push32((uint32_t)(EBP));
  /* 106ebb21 mov ebp, esp */
  EBP = (ESP);
  /* 106ebb23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106ebb25 push 0x1070aff0 */
  push32((uint32_t)(0x1070aff0u));
  /* 106ebb2a push 0x106ec838 */
  push32((uint32_t)(0x106ec838u));
  /* 106ebb2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106ebb35 push eax */
  push32((uint32_t)(EAX));
  /* 106ebb36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106ebb3d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebb40 push ebx */
  push32((uint32_t)(EBX));
  /* 106ebb41 push esi */
  push32((uint32_t)(ESI));
  /* 106ebb42 push edi */
  push32((uint32_t)(EDI));
  /* 106ebb43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106ebb46 cmp dword ptr [0x1070f6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebb4d jne 0x106ebba6 */
  if (!C.zf) goto L_106ebba6;
  /* 106ebb4f push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebb51 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebb53 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ebb55 push 0x1070afdc */
  push32((uint32_t)(0x1070afdcu));
  /* 106ebb5a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106ebb5f push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebb61 call dword ptr [0x107122a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122a8))), 0x106ebb67u);
  /* 106ebb67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ebb69 je 0x106ebb77 */
  if (C.zf) goto L_106ebb77;
  /* 106ebb6b mov dword ptr [0x1070f6d8], 1 */
  w32((uint32_t)(0x1070f6d8), (0x1u));
  /* 106ebb75 jmp 0x106ebba6 */
  goto L_106ebba6;
L_106ebb77:;
  /* 106ebb77 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebb79 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebb7b push 1 */
  push32((uint32_t)(0x1u));
  /* 106ebb7d push 0x1070afd8 */
  push32((uint32_t)(0x1070afd8u));
  /* 106ebb82 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106ebb87 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebb89 call dword ptr [0x107122ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122ac))), 0x106ebb8fu);
  /* 106ebb8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ebb91 je 0x106ebb9f */
  if (C.zf) goto L_106ebb9f;
  /* 106ebb93 mov dword ptr [0x1070f6d8], 2 */
  w32((uint32_t)(0x1070f6d8), (0x2u));
  /* 106ebb9d jmp 0x106ebba6 */
  goto L_106ebba6;
L_106ebb9f:;
  /* 106ebb9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebba1 jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebba6:;
  /* 106ebba6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebbaa jle 0x106ebbbf */
  if ((C.zf||C.sf!=C.of)) goto L_106ebbbf;
  /* 106ebbac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ebbaf push eax */
  push32((uint32_t)(EAX));
  /* 106ebbb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ebbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebbb4 call 0x106ebe30 */
  push32(0x106ebbb9u); f_106ebe30();
  /* 106ebbb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebbbc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_106ebbbf:;
  /* 106ebbbf cmp dword ptr [0x1070f6d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebbc6 jne 0x106ebbeb */
  if (!C.zf) goto L_106ebbeb;
  /* 106ebbc8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106ebbcb push edx */
  push32((uint32_t)(EDX));
  /* 106ebbcc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106ebbcf push eax */
  push32((uint32_t)(EAX));
  /* 106ebbd0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ebbd3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebbd4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ebbd7 push edx */
  push32((uint32_t)(EDX));
  /* 106ebbd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ebbdb push eax */
  push32((uint32_t)(EAX));
  /* 106ebbdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebbdf push ecx */
  push32((uint32_t)(ECX));
  /* 106ebbe0 call dword ptr [0x107122ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122ac))), 0x106ebbe6u);
  /* 106ebbe6 jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebbeb:;
  /* 106ebbeb cmp dword ptr [0x1070f6d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebbf2 jne 0x106ebe0f */
  if (!C.zf) goto L_106ebe0f;
  /* 106ebbf8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebbfc jne 0x106ebc07 */
  if (!C.zf) goto L_106ebc07;
  /* 106ebbfe mov edx, dword ptr [0x1070f6d0] */
  EDX = (r32((uint32_t)(0x1070f6d0)));
  /* 106ebc04 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_106ebc07:;
  /* 106ebc07 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebc09 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebc0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ebc0e push eax */
  push32((uint32_t)(EAX));
  /* 106ebc0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ebc12 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebc13 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 106ebc16 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ebc18 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ebc1a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 106ebc1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebc20 push edx */
  push32((uint32_t)(EDX));
  /* 106ebc21 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106ebc24 push eax */
  push32((uint32_t)(EAX));
  /* 106ebc25 call dword ptr [0x107122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b8))), 0x106ebc2bu);
  /* 106ebc2b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106ebc2e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebc32 jne 0x106ebc3b */
  if (!C.zf) goto L_106ebc3b;
  /* 106ebc34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebc36 jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebc3b:;
  /* 106ebc3b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ebc42 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ebc45 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106ebc47 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebc4a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106ebc4c call 0x106e68d0 */
  push32(0x106ebc51u); f_106e68d0();
  /* 106ebc51 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 106ebc54 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106ebc57 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106ebc5a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106ebc5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106ebc64 jmp 0x106ebc7d */
  goto L_106ebc7d;
  /* 106ebc66 mov eax, 1 */
  EAX = (0x1u);
  /* 106ebc6b ret  */
  ESPCHK(0x106ebb20u, _esp0);
  ESP += 4; return;
  /* 106ebc6c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106ebc6f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106ebc76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106ebc7d:;
  /* 106ebc7d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebc81 jne 0x106ebc8a */
  if (!C.zf) goto L_106ebc8a;
  /* 106ebc83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebc85 jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebc8a:;
  /* 106ebc8a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ebc8d push edx */
  push32((uint32_t)(EDX));
  /* 106ebc8e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ebc91 push eax */
  push32((uint32_t)(EAX));
  /* 106ebc92 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ebc95 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebc96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ebc99 push edx */
  push32((uint32_t)(EDX));
  /* 106ebc9a push 1 */
  push32((uint32_t)(0x1u));
  /* 106ebc9c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106ebc9f push eax */
  push32((uint32_t)(EAX));
  /* 106ebca0 call dword ptr [0x107122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122b8))), 0x106ebca6u);
  /* 106ebca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ebca8 jne 0x106ebcb1 */
  if (!C.zf) goto L_106ebcb1;
  /* 106ebcaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebcac jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebcb1:;
  /* 106ebcb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebcb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebcb5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ebcb8 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebcb9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ebcbc push edx */
  push32((uint32_t)(EDX));
  /* 106ebcbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ebcc0 push eax */
  push32((uint32_t)(EAX));
  /* 106ebcc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebcc4 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebcc5 call dword ptr [0x107122a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122a8))), 0x106ebccbu);
  /* 106ebccb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106ebcce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebcd2 jne 0x106ebcdb */
  if (!C.zf) goto L_106ebcdb;
  /* 106ebcd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebcd6 jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebcdb:;
  /* 106ebcdb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ebcde and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 106ebce4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ebce6 je 0x106ebd2b */
  if (C.zf) goto L_106ebd2b;
  /* 106ebce8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebcec je 0x106ebd26 */
  if (C.zf) goto L_106ebd26;
  /* 106ebcee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ebcf1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebcf4 jle 0x106ebcfd */
  if ((C.zf||C.sf!=C.of)) goto L_106ebcfd;
  /* 106ebcf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebcf8 jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebcfd:;
  /* 106ebcfd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106ebd00 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebd01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106ebd04 push edx */
  push32((uint32_t)(EDX));
  /* 106ebd05 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ebd08 push eax */
  push32((uint32_t)(EAX));
  /* 106ebd09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ebd0c push ecx */
  push32((uint32_t)(ECX));
  /* 106ebd0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ebd10 push edx */
  push32((uint32_t)(EDX));
  /* 106ebd11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebd14 push eax */
  push32((uint32_t)(EAX));
  /* 106ebd15 call dword ptr [0x107122a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122a8))), 0x106ebd1bu);
  /* 106ebd1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ebd1d jne 0x106ebd26 */
  if (!C.zf) goto L_106ebd26;
  /* 106ebd1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebd21 jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebd26:;
  /* 106ebd26 jmp 0x106ebe0a */
  goto L_106ebe0a;
L_106ebd2b:;
  /* 106ebd2b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ebd2e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106ebd31 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106ebd38 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ebd3b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106ebd3d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebd40 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106ebd42 call 0x106e68d0 */
  push32(0x106ebd47u); f_106e68d0();
  /* 106ebd47 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 106ebd4a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106ebd4d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106ebd50 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106ebd53 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106ebd5a jmp 0x106ebd73 */
  goto L_106ebd73;
  /* 106ebd5c mov eax, 1 */
  EAX = (0x1u);
  /* 106ebd61 ret  */
  ESPCHK(0x106ebb20u, _esp0);
  ESP += 4; return;
  /* 106ebd62 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106ebd65 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106ebd6c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106ebd73:;
  /* 106ebd73 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebd77 jne 0x106ebd80 */
  if (!C.zf) goto L_106ebd80;
  /* 106ebd79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebd7b jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebd80:;
  /* 106ebd80 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ebd83 push eax */
  push32((uint32_t)(EAX));
  /* 106ebd84 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ebd87 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebd88 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ebd8b push edx */
  push32((uint32_t)(EDX));
  /* 106ebd8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ebd8f push eax */
  push32((uint32_t)(EAX));
  /* 106ebd90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ebd93 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebd94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebd97 push edx */
  push32((uint32_t)(EDX));
  /* 106ebd98 call dword ptr [0x107122a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122a8))), 0x106ebd9eu);
  /* 106ebd9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ebda0 jne 0x106ebda6 */
  if (!C.zf) goto L_106ebda6;
  /* 106ebda2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebda4 jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebda6:;
  /* 106ebda6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebdaa jne 0x106ebdda */
  if (!C.zf) goto L_106ebdda;
  /* 106ebdac push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebdae push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebdb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebdb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebdb4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ebdb7 push eax */
  push32((uint32_t)(EAX));
  /* 106ebdb8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ebdbb push ecx */
  push32((uint32_t)(ECX));
  /* 106ebdbc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106ebdc1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 106ebdc4 push edx */
  push32((uint32_t)(EDX));
  /* 106ebdc5 call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106ebdcbu);
  /* 106ebdcb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106ebdce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebdd2 jne 0x106ebdd8 */
  if (!C.zf) goto L_106ebdd8;
  /* 106ebdd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebdd6 jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebdd8:;
  /* 106ebdd8 jmp 0x106ebe0a */
  goto L_106ebe0a;
L_106ebdda:;
  /* 106ebdda push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebddc push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebdde mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106ebde1 push eax */
  push32((uint32_t)(EAX));
  /* 106ebde2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106ebde5 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebde6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ebde9 push edx */
  push32((uint32_t)(EDX));
  /* 106ebdea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ebded push eax */
  push32((uint32_t)(EAX));
  /* 106ebdee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106ebdf3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 106ebdf6 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebdf7 call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106ebdfdu);
  /* 106ebdfd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106ebe00 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebe04 jne 0x106ebe0a */
  if (!C.zf) goto L_106ebe0a;
  /* 106ebe06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ebe08 jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebe0a:;
  /* 106ebe0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ebe0d jmp 0x106ebe11 */
  goto L_106ebe11;
L_106ebe0f:;
  /* 106ebe0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106ebe11:;
  /* 106ebe11 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 106ebe14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ebe17 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106ebe1e pop edi */
  EDI = (pop32());
  /* 106ebe1f pop esi */
  ESI = (pop32());
  /* 106ebe20 pop ebx */
  EBX = (pop32());
  /* 106ebe21 mov esp, ebp */
  ESP = (EBP);
  /* 106ebe23 pop ebp */
  EBP = (pop32());
  /* 106ebe24 ret  */
  ESPCHK(0x106ebb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be30 @ 0x106ebe30 (80 bytes, 32 insns) */
void f_106ebe30(void) {
  FTRACE(0x106ebe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ebe30 push ebp */
  push32((uint32_t)(EBP));
  /* 106ebe31 mov ebp, esp */
  EBP = (ESP);
  /* 106ebe33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ebe36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ebe39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ebe3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebe3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106ebe42:;
  /* 106ebe42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ebe45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ebe48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ebe4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ebe4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ebe50 je 0x106ebe67 */
  if (C.zf) goto L_106ebe67;
  /* 106ebe52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ebe55 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106ebe58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ebe5a je 0x106ebe67 */
  if (C.zf) goto L_106ebe67;
  /* 106ebe5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ebe5f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebe62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ebe65 jmp 0x106ebe42 */
  goto L_106ebe42;
L_106ebe67:;
  /* 106ebe67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ebe6a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106ebe6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ebe6f jne 0x106ebe79 */
  if (!C.zf) goto L_106ebe79;
  /* 106ebe71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ebe74 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ebe77 jmp 0x106ebe7c */
  goto L_106ebe7c;
L_106ebe79:;
  /* 106ebe79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_106ebe7c:;
  /* 106ebe7c mov esp, ebp */
  ESP = (EBP);
  /* 106ebe7e pop ebp */
  EBP = (pop32());
  /* 106ebe7f ret  */
  ESPCHK(0x106ebe30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x106ebe80 (130 bytes, 43 insns) */
void f_106ebe80(void) {
  FTRACE(0x106ebe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ebe80 push ebp */
  push32((uint32_t)(EBP));
  /* 106ebe81 mov ebp, esp */
  EBP = (ESP);
  /* 106ebe83 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebe84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebe87 cmp eax, dword ptr [0x10710fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10710fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebe8d jae 0x106ebeb1 */
  if (!C.cf) goto L_106ebeb1;
  /* 106ebe8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebe92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ebe95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebe98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ebe9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ebe9e mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106ebea5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106ebeaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106ebead test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ebeaf jne 0x106ebecc */
  if (!C.zf) goto L_106ebecc;
L_106ebeb1:;
  /* 106ebeb1 call 0x106eb600 */
  push32(0x106ebeb6u); f_106eb600();
  /* 106ebeb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ebebc call 0x106eb610 */
  push32(0x106ebec1u); f_106eb610();
  /* 106ebec1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ebec7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ebeca jmp 0x106ebefe */
  goto L_106ebefe;
L_106ebecc:;
  /* 106ebecc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebecf push edx */
  push32((uint32_t)(EDX));
  /* 106ebed0 call 0x106ece20 */
  push32(0x106ebed5u); f_106ece20();
  /* 106ebed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebed8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ebedb push eax */
  push32((uint32_t)(EAX));
  /* 106ebedc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ebedf push ecx */
  push32((uint32_t)(ECX));
  /* 106ebee0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebee3 push edx */
  push32((uint32_t)(EDX));
  /* 106ebee4 call 0x106ebf10 */
  push32(0x106ebee9u); f_106ebf10();
  /* 106ebee9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebeec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ebeef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebef2 push eax */
  push32((uint32_t)(EAX));
  /* 106ebef3 call 0x106eceb0 */
  push32(0x106ebef8u); f_106eceb0();
  /* 106ebef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebefb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106ebefe:;
  /* 106ebefe mov esp, ebp */
  ESP = (EBP);
  /* 106ebf00 pop ebp */
  EBP = (pop32());
  /* 106ebf01 ret  */
  ESPCHK(0x106ebe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf10 @ 0x106ebf10 (178 bytes, 56 insns) */
void f_106ebf10(void) {
  FTRACE(0x106ebf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ebf10 push ebp */
  push32((uint32_t)(EBP));
  /* 106ebf11 mov ebp, esp */
  EBP = (ESP);
  /* 106ebf13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ebf16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebf19 push eax */
  push32((uint32_t)(EAX));
  /* 106ebf1a call 0x106ecca0 */
  push32(0x106ebf1fu); f_106ecca0();
  /* 106ebf1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebf22 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106ebf25 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebf29 jne 0x106ebf3e */
  if (!C.zf) goto L_106ebf3e;
  /* 106ebf2b call 0x106eb600 */
  push32(0x106ebf30u); f_106eb600();
  /* 106ebf30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ebf36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ebf39 jmp 0x106ebfbe */
  goto L_106ebfbe;
L_106ebf3e:;
  /* 106ebf3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ebf41 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebf42 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ebf44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ebf47 push edx */
  push32((uint32_t)(EDX));
  /* 106ebf48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ebf4b push eax */
  push32((uint32_t)(EAX));
  /* 106ebf4c call dword ptr [0x107122a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122a4))), 0x106ebf52u);
  /* 106ebf52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ebf55 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebf59 jne 0x106ebf66 */
  if (!C.zf) goto L_106ebf66;
  /* 106ebf5b call dword ptr [0x1071230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071230c))), 0x106ebf61u);
  /* 106ebf61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ebf64 jmp 0x106ebf6d */
  goto L_106ebf6d;
L_106ebf66:;
  /* 106ebf66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106ebf6d:;
  /* 106ebf6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebf71 je 0x106ebf84 */
  if (C.zf) goto L_106ebf84;
  /* 106ebf73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ebf76 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebf77 call 0x106eb560 */
  push32(0x106ebf7cu); f_106eb560();
  /* 106ebf7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ebf7f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ebf82 jmp 0x106ebfbe */
  goto L_106ebfbe;
L_106ebf84:;
  /* 106ebf84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebf87 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106ebf8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebf8d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106ebf90 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ebf93 mov ecx, dword ptr [edx*4 + 0x10710ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10710ea0)));
  /* 106ebf9a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 106ebf9e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 106ebfa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebfa4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ebfa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebfaa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ebfad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ebfb0 mov eax, dword ptr [eax*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106ebfb7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 106ebfbb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106ebfbe:;
  /* 106ebfbe mov esp, ebp */
  ESP = (EBP);
  /* 106ebfc0 pop ebp */
  EBP = (pop32());
  /* 106ebfc1 ret  */
  ESPCHK(0x106ebf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfd0 @ 0x106ebfd0 (130 bytes, 43 insns) */
void f_106ebfd0(void) {
  FTRACE(0x106ebfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ebfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ebfd1 mov ebp, esp */
  EBP = (ESP);
  /* 106ebfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ebfd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebfd7 cmp eax, dword ptr [0x10710fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10710fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ebfdd jae 0x106ec001 */
  if (!C.cf) goto L_106ec001;
  /* 106ebfdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebfe2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ebfe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ebfe8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ebfeb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ebfee mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106ebff5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106ebffa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106ebffd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ebfff jne 0x106ec01c */
  if (!C.zf) goto L_106ec01c;
L_106ec001:;
  /* 106ec001 call 0x106eb600 */
  push32(0x106ec006u); f_106eb600();
  /* 106ec006 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ec00c call 0x106eb610 */
  push32(0x106ec011u); f_106eb610();
  /* 106ec011 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ec017 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ec01a jmp 0x106ec04e */
  goto L_106ec04e;
L_106ec01c:;
  /* 106ec01c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec01f push edx */
  push32((uint32_t)(EDX));
  /* 106ec020 call 0x106ece20 */
  push32(0x106ec025u); f_106ece20();
  /* 106ec025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec028 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ec02b push eax */
  push32((uint32_t)(EAX));
  /* 106ec02c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ec02f push ecx */
  push32((uint32_t)(ECX));
  /* 106ec030 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec033 push edx */
  push32((uint32_t)(EDX));
  /* 106ec034 call 0x106ec060 */
  push32(0x106ec039u); f_106ec060();
  /* 106ec039 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec03c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ec03f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec042 push eax */
  push32((uint32_t)(EAX));
  /* 106ec043 call 0x106eceb0 */
  push32(0x106ec048u); f_106eceb0();
  /* 106ec048 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec04b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106ec04e:;
  /* 106ec04e mov esp, ebp */
  ESP = (EBP);
  /* 106ec050 pop ebp */
  EBP = (pop32());
  /* 106ec051 ret  */
  ESPCHK(0x106ebfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c060 @ 0x106ec060 (627 bytes, 182 insns) */
void f_106ec060(void) {
  FTRACE(0x106ec060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec060 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec061 mov ebp, esp */
  EBP = (ESP);
  /* 106ec063 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec069 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106ec070 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ec073 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 106ec079 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec07d jne 0x106ec086 */
  if (!C.zf) goto L_106ec086;
  /* 106ec07f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ec081 jmp 0x106ec2cf */
  goto L_106ec2cf;
L_106ec086:;
  /* 106ec086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec089 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ec08c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec08f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ec092 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ec095 mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106ec09c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106ec0a1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 106ec0a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ec0a6 je 0x106ec0b8 */
  if (C.zf) goto L_106ec0b8;
  /* 106ec0a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ec0aa push 0 */
  push32((uint32_t)(0x0u));
  /* 106ec0ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec0af push edx */
  push32((uint32_t)(EDX));
  /* 106ec0b0 call 0x106ebf10 */
  push32(0x106ec0b5u); f_106ebf10();
  /* 106ec0b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ec0b8:;
  /* 106ec0b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec0bb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ec0be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec0c1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ec0c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ec0c7 mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106ec0ce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 106ec0d3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 106ec0d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ec0da je 0x106ec1ec */
  if (C.zf) goto L_106ec1ec;
  /* 106ec0e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ec0e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106ec0e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_106ec0ed:;
  /* 106ec0ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec0f0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec0f3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec0f6 jae 0x106ec1ea */
  if (!C.cf) goto L_106ec1ea;
  /* 106ec0fc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 106ec102 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106ec105:;
  /* 106ec105 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ec108 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 106ec10e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec110 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec116 jge 0x106ec177 */
  if ((C.sf==C.of)) goto L_106ec177;
  /* 106ec118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec11b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec11e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec121 jae 0x106ec177 */
  if (!C.cf) goto L_106ec177;
  /* 106ec123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec126 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106ec128 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 106ec12e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec131 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec134 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ec137 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 106ec13e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec141 jne 0x106ec161 */
  if (!C.zf) goto L_106ec161;
  /* 106ec143 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 106ec149 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec14c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 106ec152 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ec155 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 106ec158 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ec15b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec15e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106ec161:;
  /* 106ec161 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ec164 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 106ec16a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 106ec16c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ec16f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec172 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ec175 jmp 0x106ec105 */
  goto L_106ec105;
L_106ec177:;
  /* 106ec177 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ec179 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 106ec17f push edx */
  push32((uint32_t)(EDX));
  /* 106ec180 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ec183 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 106ec189 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec18b push eax */
  push32((uint32_t)(EAX));
  /* 106ec18c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 106ec192 push edx */
  push32((uint32_t)(EDX));
  /* 106ec193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec196 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ec199 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec19c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ec19f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ec1a2 mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106ec1a9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 106ec1ac push eax */
  push32((uint32_t)(EAX));
  /* 106ec1ad call dword ptr [0x107122cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122cc))), 0x106ec1b3u);
  /* 106ec1b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ec1b5 je 0x106ec1da */
  if (C.zf) goto L_106ec1da;
  /* 106ec1b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ec1ba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec1c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106ec1c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ec1c6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 106ec1cc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec1ce cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec1d4 jge 0x106ec1d8 */
  if ((C.sf==C.of)) goto L_106ec1d8;
  /* 106ec1d6 jmp 0x106ec1ea */
  goto L_106ec1ea;
L_106ec1d8:;
  /* 106ec1d8 jmp 0x106ec1e5 */
  goto L_106ec1e5;
L_106ec1da:;
  /* 106ec1da call dword ptr [0x1071230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071230c))), 0x106ec1e0u);
  /* 106ec1e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106ec1e3 jmp 0x106ec1ea */
  goto L_106ec1ea;
L_106ec1e5:;
  /* 106ec1e5 jmp 0x106ec0ed */
  goto L_106ec0ed;
L_106ec1ea:;
  /* 106ec1ea jmp 0x106ec23c */
  goto L_106ec23c;
L_106ec1ec:;
  /* 106ec1ec push 0 */
  push32((uint32_t)(0x0u));
  /* 106ec1ee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 106ec1f4 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec1f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ec1f8 push edx */
  push32((uint32_t)(EDX));
  /* 106ec1f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ec1fc push eax */
  push32((uint32_t)(EAX));
  /* 106ec1fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec200 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ec203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec206 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ec209 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ec20c mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106ec213 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 106ec216 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec217 call dword ptr [0x107122cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122cc))), 0x106ec21du);
  /* 106ec21d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ec21f je 0x106ec233 */
  if (C.zf) goto L_106ec233;
  /* 106ec221 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106ec228 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 106ec22e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106ec231 jmp 0x106ec23c */
  goto L_106ec23c;
L_106ec233:;
  /* 106ec233 call dword ptr [0x1071230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071230c))), 0x106ec239u);
  /* 106ec239 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106ec23c:;
  /* 106ec23c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec240 jne 0x106ec2c6 */
  if (!C.zf) goto L_106ec2c6;
  /* 106ec246 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec24a je 0x106ec27a */
  if (C.zf) goto L_106ec27a;
  /* 106ec24c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec250 jne 0x106ec269 */
  if (!C.zf) goto L_106ec269;
  /* 106ec252 call 0x106eb600 */
  push32(0x106ec257u); f_106eb600();
  /* 106ec257 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ec25d call 0x106eb610 */
  push32(0x106ec262u); f_106eb610();
  /* 106ec262 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ec265 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106ec267 jmp 0x106ec275 */
  goto L_106ec275;
L_106ec269:;
  /* 106ec269 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ec26c push edx */
  push32((uint32_t)(EDX));
  /* 106ec26d call 0x106eb560 */
  push32(0x106ec272u); f_106eb560();
  /* 106ec272 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ec275:;
  /* 106ec275 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ec278 jmp 0x106ec2cf */
  goto L_106ec2cf;
L_106ec27a:;
  /* 106ec27a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec27d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ec280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec283 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ec286 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ec289 mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106ec290 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 106ec295 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 106ec298 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ec29a je 0x106ec2ab */
  if (C.zf) goto L_106ec2ab;
  /* 106ec29c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ec29f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106ec2a2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec2a5 jne 0x106ec2ab */
  if (!C.zf) goto L_106ec2ab;
  /* 106ec2a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ec2a9 jmp 0x106ec2cf */
  goto L_106ec2cf;
L_106ec2ab:;
  /* 106ec2ab call 0x106eb600 */
  push32(0x106ec2b0u); f_106eb600();
  /* 106ec2b0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 106ec2b6 call 0x106eb610 */
  push32(0x106ec2bbu); f_106eb610();
  /* 106ec2bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ec2c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ec2c4 jmp 0x106ec2cf */
  goto L_106ec2cf;
L_106ec2c6:;
  /* 106ec2c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ec2c9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_106ec2cf:;
  /* 106ec2cf mov esp, ebp */
  ESP = (EBP);
  /* 106ec2d1 pop ebp */
  EBP = (pop32());
  /* 106ec2d2 ret  */
  ESPCHK(0x106ec060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2e0 @ 0x106ec2e0 (199 bytes, 68 insns) */
void f_106ec2e0(void) {
  FTRACE(0x106ec2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec2e1 mov ebp, esp */
  EBP = (ESP);
  /* 106ec2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec2e4 push ebx */
  push32((uint32_t)(EBX));
  /* 106ec2e5 push esi */
  push32((uint32_t)(ESI));
  /* 106ec2e6 push edi */
  push32((uint32_t)(EDI));
L_106ec2e7:;
  /* 106ec2e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec2eb jne 0x106ec30b */
  if (!C.zf) goto L_106ec30b;
  /* 106ec2ed push 0x1070af3c */
  push32((uint32_t)(0x1070af3cu));
  /* 106ec2f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ec2f4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 106ec2f6 push 0x1070b008 */
  push32((uint32_t)(0x1070b008u));
  /* 106ec2fb push 2 */
  push32((uint32_t)(0x2u));
  /* 106ec2fd call 0x106e27f0 */
  push32(0x106ec302u); f_106e27f0();
  /* 106ec302 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec305 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec308 jne 0x106ec30b */
  if (!C.zf) goto L_106ec30b;
  /* 106ec30a int3  */
  x86_unimpl("int3 @ 0x106ec30a");
L_106ec30b:;
  /* 106ec30b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ec30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ec30f jne 0x106ec2e7 */
  if (!C.zf) goto L_106ec2e7;
  /* 106ec311 mov ecx, dword ptr [0x1070f6dc] */
  ECX = (r32((uint32_t)(0x1070f6dc)));
  /* 106ec317 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec31a mov dword ptr [0x1070f6dc], ecx */
  w32((uint32_t)(0x1070f6dc), (ECX));
  /* 106ec320 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec323 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106ec326 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 106ec328 push 0x1070b008 */
  push32((uint32_t)(0x1070b008u));
  /* 106ec32d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ec32f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106ec334 call 0x106e3730 */
  push32(0x106ec339u); f_106e3730();
  /* 106ec339 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec33c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec33f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 106ec342 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec345 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec349 je 0x106ec366 */
  if (C.zf) goto L_106ec366;
  /* 106ec34b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec34e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106ec351 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 106ec354 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec357 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 106ec35a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec35d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 106ec364 jmp 0x106ec38b */
  goto L_106ec38b;
L_106ec366:;
  /* 106ec366 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec369 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ec36c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106ec36f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec372 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106ec375 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec378 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec37b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec37e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106ec381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec384 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_106ec38b:;
  /* 106ec38b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec38e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec391 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106ec394 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106ec396 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec399 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106ec3a0 pop edi */
  EDI = (pop32());
  /* 106ec3a1 pop esi */
  ESI = (pop32());
  /* 106ec3a2 pop ebx */
  EBX = (pop32());
  /* 106ec3a3 mov esp, ebp */
  ESP = (EBP);
  /* 106ec3a5 pop ebp */
  EBP = (pop32());
  /* 106ec3a6 ret  */
  ESPCHK(0x106ec2e0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x106ec3b0 (50 bytes, 17 insns) */
void f_106ec3b0(void) {
  FTRACE(0x106ec3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec3b1 mov ebp, esp */
  EBP = (ESP);
  /* 106ec3b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec3b6 cmp eax, dword ptr [0x10710fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10710fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec3bc jb 0x106ec3c2 */
  if (C.cf) goto L_106ec3c2;
  /* 106ec3be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ec3c0 jmp 0x106ec3e0 */
  goto L_106ec3e0;
L_106ec3c2:;
  /* 106ec3c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec3c5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ec3c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec3cb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ec3ce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ec3d1 mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106ec3d8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106ec3dd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_106ec3e0:;
  /* 106ec3e0 pop ebp */
  EBP = (pop32());
  /* 106ec3e1 ret  */
  ESPCHK(0x106ec3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3f0 @ 0x106ec3f0 (300 bytes, 80 insns) */
void f_106ec3f0(void) {
  FTRACE(0x106ec3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec3f1 mov ebp, esp */
  EBP = (ESP);
  /* 106ec3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec3f4 cmp dword ptr [0x10710ba0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710ba0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec3fb jne 0x106ec409 */
  if (!C.zf) goto L_106ec409;
  /* 106ec3fd mov dword ptr [0x10710ba0], 0x200 */
  w32((uint32_t)(0x10710ba0), (0x200u));
  /* 106ec407 jmp 0x106ec41c */
  goto L_106ec41c;
L_106ec409:;
  /* 106ec409 cmp dword ptr [0x10710ba0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10710ba0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec410 jge 0x106ec41c */
  if ((C.sf==C.of)) goto L_106ec41c;
  /* 106ec412 mov dword ptr [0x10710ba0], 0x14 */
  w32((uint32_t)(0x10710ba0), (0x14u));
L_106ec41c:;
  /* 106ec41c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 106ec421 push 0x1070b014 */
  push32((uint32_t)(0x1070b014u));
  /* 106ec426 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ec428 push 4 */
  push32((uint32_t)(0x4u));
  /* 106ec42a mov eax, dword ptr [0x10710ba0] */
  EAX = (r32((uint32_t)(0x10710ba0)));
  /* 106ec42f push eax */
  push32((uint32_t)(EAX));
  /* 106ec430 call 0x106e3b40 */
  push32(0x106ec435u); f_106e3b40();
  /* 106ec435 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec438 mov dword ptr [0x1070f850], eax */
  w32((uint32_t)(0x1070f850), (EAX));
  /* 106ec43d cmp dword ptr [0x1070f850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec444 jne 0x106ec485 */
  if (!C.zf) goto L_106ec485;
  /* 106ec446 mov dword ptr [0x10710ba0], 0x14 */
  w32((uint32_t)(0x10710ba0), (0x14u));
  /* 106ec450 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 106ec455 push 0x1070b014 */
  push32((uint32_t)(0x1070b014u));
  /* 106ec45a push 2 */
  push32((uint32_t)(0x2u));
  /* 106ec45c push 4 */
  push32((uint32_t)(0x4u));
  /* 106ec45e mov ecx, dword ptr [0x10710ba0] */
  ECX = (r32((uint32_t)(0x10710ba0)));
  /* 106ec464 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec465 call 0x106e3b40 */
  push32(0x106ec46au); f_106e3b40();
  /* 106ec46a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec46d mov dword ptr [0x1070f850], eax */
  w32((uint32_t)(0x1070f850), (EAX));
  /* 106ec472 cmp dword ptr [0x1070f850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec479 jne 0x106ec485 */
  if (!C.zf) goto L_106ec485;
  /* 106ec47b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 106ec47d call 0x106e26a0 */
  push32(0x106ec482u); f_106e26a0();
  /* 106ec482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ec485:;
  /* 106ec485 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ec48c jmp 0x106ec497 */
  goto L_106ec497;
L_106ec48e:;
  /* 106ec48e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec491 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec494 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106ec497:;
  /* 106ec497 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec49b jge 0x106ec4b6 */
  if ((C.sf==C.of)) goto L_106ec4b6;
  /* 106ec49d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec4a0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ec4a3 add eax, 0x1070e120 */
  { uint32_t _a=(EAX),_b=(0x1070e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec4a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec4ab mov edx, dword ptr [0x1070f850] */
  EDX = (r32((uint32_t)(0x1070f850)));
  /* 106ec4b1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 106ec4b4 jmp 0x106ec48e */
  goto L_106ec48e;
L_106ec4b6:;
  /* 106ec4b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ec4bd jmp 0x106ec4c8 */
  goto L_106ec4c8;
L_106ec4bf:;
  /* 106ec4bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec4c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec4c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106ec4c8:;
  /* 106ec4c8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec4cc jge 0x106ec518 */
  if ((C.sf==C.of)) goto L_106ec518;
  /* 106ec4ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec4d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ec4d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec4d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ec4da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ec4dd mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106ec4e4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec4e8 je 0x106ec506 */
  if (C.zf) goto L_106ec506;
  /* 106ec4ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec4ed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ec4f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec4f3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ec4f6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ec4f9 mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106ec500 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec504 jne 0x106ec516 */
  if (!C.zf) goto L_106ec516;
L_106ec506:;
  /* 106ec506 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec509 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ec50c mov dword ptr [ecx + 0x1070e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1070e130), (0xffffffffu));
L_106ec516:;
  /* 106ec516 jmp 0x106ec4bf */
  goto L_106ec4bf;
L_106ec518:;
  /* 106ec518 mov esp, ebp */
  ESP = (EBP);
  /* 106ec51a pop ebp */
  EBP = (pop32());
  /* 106ec51b ret  */
  ESPCHK(0x106ec3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c520 @ 0x106ec520 (26 bytes, 9 insns) */
void f_106ec520(void) {
  FTRACE(0x106ec520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec520 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec521 mov ebp, esp */
  EBP = (ESP);
  /* 106ec523 call 0x106ed120 */
  push32(0x106ec528u); f_106ed120();
  /* 106ec528 movsx eax, byte ptr [0x1070f4f4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1070f4f4))));
  /* 106ec52f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ec531 je 0x106ec538 */
  if (C.zf) goto L_106ec538;
  /* 106ec533 call 0x106ecee0 */
  push32(0x106ec538u); f_106ecee0();
L_106ec538:;
  /* 106ec538 pop ebp */
  EBP = (pop32());
  /* 106ec539 ret  */
  ESPCHK(0x106ec520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c540 @ 0x106ec540 (61 bytes, 20 insns) */
void f_106ec540(void) {
  FTRACE(0x106ec540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec540 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec541 mov ebp, esp */
  EBP = (ESP);
  /* 106ec543 cmp dword ptr [ebp + 8], 0x1070e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1070e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec54a jb 0x106ec56e */
  if (C.cf) goto L_106ec56e;
  /* 106ec54c cmp dword ptr [ebp + 8], 0x1070e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1070e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec553 ja 0x106ec56e */
  if ((!C.cf&&!C.zf)) goto L_106ec56e;
  /* 106ec555 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec558 sub eax, 0x1070e120 */
  { uint32_t _a=(EAX),_b=(0x1070e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec55d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ec560 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec563 push eax */
  push32((uint32_t)(EAX));
  /* 106ec564 call 0x106e7130 */
  push32(0x106ec569u); f_106e7130();
  /* 106ec569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec56c jmp 0x106ec57b */
  goto L_106ec57b;
L_106ec56e:;
  /* 106ec56e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec571 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec574 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec575 call dword ptr [0x1071235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071235c))), 0x106ec57bu);
L_106ec57b:;
  /* 106ec57b pop ebp */
  EBP = (pop32());
  /* 106ec57c ret  */
  ESPCHK(0x106ec540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c580 @ 0x106ec580 (41 bytes, 16 insns) */
void f_106ec580(void) {
  FTRACE(0x106ec580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec580 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec581 mov ebp, esp */
  EBP = (ESP);
  /* 106ec583 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec587 jge 0x106ec59a */
  if ((C.sf==C.of)) goto L_106ec59a;
  /* 106ec589 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec58c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec58f push eax */
  push32((uint32_t)(EAX));
  /* 106ec590 call 0x106e7130 */
  push32(0x106ec595u); f_106e7130();
  /* 106ec595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec598 jmp 0x106ec5a7 */
  goto L_106ec5a7;
L_106ec59a:;
  /* 106ec59a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ec59d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec5a0 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec5a1 call dword ptr [0x1071235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071235c))), 0x106ec5a7u);
L_106ec5a7:;
  /* 106ec5a7 pop ebp */
  EBP = (pop32());
  /* 106ec5a8 ret  */
  ESPCHK(0x106ec580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5b0 @ 0x106ec5b0 (61 bytes, 20 insns) */
void f_106ec5b0(void) {
  FTRACE(0x106ec5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec5b1 mov ebp, esp */
  EBP = (ESP);
  /* 106ec5b3 cmp dword ptr [ebp + 8], 0x1070e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1070e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec5ba jb 0x106ec5de */
  if (C.cf) goto L_106ec5de;
  /* 106ec5bc cmp dword ptr [ebp + 8], 0x1070e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1070e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec5c3 ja 0x106ec5de */
  if ((!C.cf&&!C.zf)) goto L_106ec5de;
  /* 106ec5c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec5c8 sub eax, 0x1070e120 */
  { uint32_t _a=(EAX),_b=(0x1070e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec5cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ec5d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec5d3 push eax */
  push32((uint32_t)(EAX));
  /* 106ec5d4 call 0x106e71d0 */
  push32(0x106ec5d9u); f_106e71d0();
  /* 106ec5d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec5dc jmp 0x106ec5eb */
  goto L_106ec5eb;
L_106ec5de:;
  /* 106ec5de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec5e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec5e4 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec5e5 call dword ptr [0x10712360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712360))), 0x106ec5ebu);
L_106ec5eb:;
  /* 106ec5eb pop ebp */
  EBP = (pop32());
  /* 106ec5ec ret  */
  ESPCHK(0x106ec5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5f0 @ 0x106ec5f0 (41 bytes, 16 insns) */
void f_106ec5f0(void) {
  FTRACE(0x106ec5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec5f1 mov ebp, esp */
  EBP = (ESP);
  /* 106ec5f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec5f7 jge 0x106ec60a */
  if ((C.sf==C.of)) goto L_106ec60a;
  /* 106ec5f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec5fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec5ff push eax */
  push32((uint32_t)(EAX));
  /* 106ec600 call 0x106e71d0 */
  push32(0x106ec605u); f_106e71d0();
  /* 106ec605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec608 jmp 0x106ec617 */
  goto L_106ec617;
L_106ec60a:;
  /* 106ec60a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ec60d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec610 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec611 call dword ptr [0x10712360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712360))), 0x106ec617u);
L_106ec617:;
  /* 106ec617 pop ebp */
  EBP = (pop32());
  /* 106ec618 ret  */
  ESPCHK(0x106ec5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c620 @ 0x106ec620 (119 bytes, 34 insns) */
void f_106ec620(void) {
  FTRACE(0x106ec620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec620 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec621 mov ebp, esp */
  EBP = (ESP);
  /* 106ec623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec626 push 0x1070f84c */
  push32((uint32_t)(0x1070f84cu));
  /* 106ec62b call dword ptr [0x107122e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122e0))), 0x106ec631u);
  /* 106ec631 cmp dword ptr [0x1070f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec638 je 0x106ec658 */
  if (C.zf) goto L_106ec658;
  /* 106ec63a push 0x1070f84c */
  push32((uint32_t)(0x1070f84cu));
  /* 106ec63f call dword ptr [0x107122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d0))), 0x106ec645u);
  /* 106ec645 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ec647 call 0x106e7130 */
  push32(0x106ec64cu); f_106e7130();
  /* 106ec64c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec64f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106ec656 jmp 0x106ec65f */
  goto L_106ec65f;
L_106ec658:;
  /* 106ec658 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106ec65f:;
  /* 106ec65f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 106ec663 push eax */
  push32((uint32_t)(EAX));
  /* 106ec664 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec667 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec668 call 0x106ec6a0 */
  push32(0x106ec66du); f_106ec6a0();
  /* 106ec66d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec670 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ec673 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec677 je 0x106ec685 */
  if (C.zf) goto L_106ec685;
  /* 106ec679 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ec67b call 0x106e71d0 */
  push32(0x106ec680u); f_106e71d0();
  /* 106ec680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec683 jmp 0x106ec690 */
  goto L_106ec690;
L_106ec685:;
  /* 106ec685 push 0x1070f84c */
  push32((uint32_t)(0x1070f84cu));
  /* 106ec68a call dword ptr [0x107122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d0))), 0x106ec690u);
L_106ec690:;
  /* 106ec690 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ec693 mov esp, ebp */
  ESP = (EBP);
  /* 106ec695 pop ebp */
  EBP = (pop32());
  /* 106ec696 ret  */
  ESPCHK(0x106ec620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6a0 @ 0x106ec6a0 (160 bytes, 50 insns) */
void f_106ec6a0(void) {
  FTRACE(0x106ec6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec6a1 mov ebp, esp */
  EBP = (ESP);
  /* 106ec6a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec6a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec6aa jne 0x106ec6b3 */
  if (!C.zf) goto L_106ec6b3;
  /* 106ec6ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ec6ae jmp 0x106ec73c */
  goto L_106ec73c;
L_106ec6b3:;
  /* 106ec6b3 cmp dword ptr [0x1070f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec6ba jne 0x106ec6ea */
  if (!C.zf) goto L_106ec6ea;
  /* 106ec6bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ec6bf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ec6c4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec6c9 jle 0x106ec6db */
  if ((C.zf||C.sf!=C.of)) goto L_106ec6db;
  /* 106ec6cb call 0x106eb600 */
  push32(0x106ec6d0u); f_106eb600();
  /* 106ec6d0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 106ec6d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ec6d9 jmp 0x106ec73c */
  goto L_106ec73c;
L_106ec6db:;
  /* 106ec6db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec6de mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 106ec6e1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 106ec6e3 mov eax, 1 */
  EAX = (0x1u);
  /* 106ec6e8 jmp 0x106ec73c */
  goto L_106ec73c;
L_106ec6ea:;
  /* 106ec6ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106ec6f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 106ec6f4 push eax */
  push32((uint32_t)(EAX));
  /* 106ec6f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ec6f7 mov ecx, dword ptr [0x1070dea4] */
  ECX = (r32((uint32_t)(0x1070dea4)));
  /* 106ec6fd push ecx */
  push32((uint32_t)(ECX));
  /* 106ec6fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec701 push edx */
  push32((uint32_t)(EDX));
  /* 106ec702 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ec704 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 106ec707 push eax */
  push32((uint32_t)(EAX));
  /* 106ec708 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106ec70d mov ecx, dword ptr [0x1070f6d0] */
  ECX = (r32((uint32_t)(0x1070f6d0)));
  /* 106ec713 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec714 call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106ec71au);
  /* 106ec71a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ec71d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec721 je 0x106ec729 */
  if (C.zf) goto L_106ec729;
  /* 106ec723 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec727 je 0x106ec739 */
  if (C.zf) goto L_106ec739;
L_106ec729:;
  /* 106ec729 call 0x106eb600 */
  push32(0x106ec72eu); f_106eb600();
  /* 106ec72e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 106ec734 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ec737 jmp 0x106ec73c */
  goto L_106ec73c;
L_106ec739:;
  /* 106ec739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106ec73c:;
  /* 106ec73c mov esp, ebp */
  ESP = (EBP);
  /* 106ec73e pop ebp */
  EBP = (pop32());
  /* 106ec73f ret  */
  ESPCHK(0x106ec6a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x106ec740 (32 bytes, 18 insns) */
void f_106ec740(void) {
  FTRACE(0x106ec740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec740 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec741 mov ebp, esp */
  EBP = (ESP);
  /* 106ec743 push ebx */
  push32((uint32_t)(EBX));
  /* 106ec744 push esi */
  push32((uint32_t)(ESI));
  /* 106ec745 push edi */
  push32((uint32_t)(EDI));
  /* 106ec746 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec747 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ec749 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ec74b push 0x106ec758 */
  push32((uint32_t)(0x106ec758u));
  /* 106ec750 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 106ec753 call 0x106f3e8c */
  push32(0x106ec758u); f_106f3e8c();
  /* 106ec758 pop ebp */
  EBP = (pop32());
  /* 106ec759 pop edi */
  EDI = (pop32());
  /* 106ec75a pop esi */
  ESI = (pop32());
  /* 106ec75b pop ebx */
  EBX = (pop32());
  /* 106ec75c mov esp, ebp */
  ESP = (EBP);
  /* 106ec75e pop ebp */
  EBP = (pop32());
  /* 106ec75f ret  */
  ESPCHK(0x106ec740u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x106ec782 (104 bytes, 33 insns) */
void f_106ec782(void) {
  FTRACE(0x106ec782u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec782 push ebx */
  push32((uint32_t)(EBX));
  /* 106ec783 push esi */
  push32((uint32_t)(ESI));
  /* 106ec784 push edi */
  push32((uint32_t)(EDI));
  /* 106ec785 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 106ec789 push eax */
  push32((uint32_t)(EAX));
  /* 106ec78a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 106ec78c push 0x106ec760 */
  push32((uint32_t)(0x106ec760u));
  /* 106ec791 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 106ec798 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_106ec79f:;
  /* 106ec79f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 106ec7a3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 106ec7a6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 106ec7a9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec7ac je 0x106ec7dc */
  if (C.zf) goto L_106ec7dc;
  /* 106ec7ae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec7b2 je 0x106ec7dc */
  if (C.zf) goto L_106ec7dc;
  /* 106ec7b4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 106ec7b7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 106ec7ba mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 106ec7be mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 106ec7c1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec7c6 jne 0x106ec7da */
  if (!C.zf) goto L_106ec7da;
  /* 106ec7c8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 106ec7cd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 106ec7d1 call 0x106ec816 */
  push32(0x106ec7d6u); f_106ec816();
  /* 106ec7d6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x106ec7dau);
L_106ec7da:;
  /* 106ec7da jmp 0x106ec79f */
  goto L_106ec79f;
L_106ec7dc:;
  /* 106ec7dc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 106ec7e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec7e6 pop edi */
  EDI = (pop32());
  /* 106ec7e7 pop esi */
  ESI = (pop32());
  /* 106ec7e8 pop ebx */
  EBX = (pop32());
  /* 106ec7e9 ret  */
  ESPCHK(0x106ec782u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c816 @ 0x106ec816 (24 bytes, 10 insns) */
void f_106ec816(void) {
  FTRACE(0x106ec816u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec816 push ebx */
  push32((uint32_t)(EBX));
  /* 106ec817 push ecx */
  push32((uint32_t)(ECX));
  /* 106ec818 mov ebx, 0x1070e3b8 */
  EBX = (0x1070e3b8u);
  /* 106ec81d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ec820 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 106ec823 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 106ec826 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 106ec829 pop ecx */
  ECX = (pop32());
  /* 106ec82a pop ebx */
  EBX = (pop32());
  /* 106ec82b ret 4 */
  ESPCHK(0x106ec816u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c8f5 @ 0x106ec8f5 (27 bytes, 11 insns) */
void f_106ec8f5(void) {
  FTRACE(0x106ec8f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec8f5 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec8f6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 106ec8fa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 106ec8fc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106ec8ff push eax */
  push32((uint32_t)(EAX));
  /* 106ec900 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 106ec903 push eax */
  push32((uint32_t)(EAX));
  /* 106ec904 call 0x106ec782 */
  push32(0x106ec909u); f_106ec782();
  /* 106ec909 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec90c pop ebp */
  EBP = (pop32());
  /* 106ec90d ret 4 */
  ESPCHK(0x106ec8f5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c910 @ 0x106ec910 (482 bytes, 138 insns) */
void f_106ec910(void) {
  FTRACE(0x106ec910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ec910 push ebp */
  push32((uint32_t)(EBP));
  /* 106ec911 mov ebp, esp */
  EBP = (ESP);
  /* 106ec913 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ec916 push esi */
  push32((uint32_t)(ESI));
  /* 106ec917 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 106ec91e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 106ec920 call 0x106e7130 */
  push32(0x106ec925u); f_106e7130();
  /* 106ec925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec928 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106ec92f jmp 0x106ec93a */
  goto L_106ec93a;
L_106ec931:;
  /* 106ec931 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ec934 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec937 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106ec93a:;
  /* 106ec93a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec93e jge 0x106ecae0 */
  if ((C.sf==C.of)) goto L_106ecae0;
  /* 106ec944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ec947 cmp dword ptr [ecx*4 + 0x10710ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10710ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec94f je 0x106eca46 */
  if (C.zf) goto L_106eca46;
  /* 106ec955 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ec958 mov eax, dword ptr [edx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10710ea0)));
  /* 106ec95f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ec962 jmp 0x106ec96d */
  goto L_106ec96d;
L_106ec964:;
  /* 106ec964 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec967 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec96a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106ec96d:;
  /* 106ec96d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ec970 mov eax, dword ptr [edx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10710ea0)));
  /* 106ec977 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec97c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec97f jae 0x106eca36 */
  if (!C.cf) goto L_106eca36;
  /* 106ec985 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec988 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106ec98c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106ec98f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ec991 jne 0x106eca31 */
  if (!C.zf) goto L_106eca31;
  /* 106ec997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec99a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec99e jne 0x106ec9d9 */
  if (!C.zf) goto L_106ec9d9;
  /* 106ec9a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106ec9a2 call 0x106e7130 */
  push32(0x106ec9a7u); f_106e7130();
  /* 106ec9a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec9aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec9ad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ec9b1 jne 0x106ec9cf */
  if (!C.zf) goto L_106ec9cf;
  /* 106ec9b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec9b6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec9b9 push edx */
  push32((uint32_t)(EDX));
  /* 106ec9ba call dword ptr [0x10712358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712358))), 0x106ec9c0u);
  /* 106ec9c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec9c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106ec9c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec9c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec9cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_106ec9cf:;
  /* 106ec9cf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106ec9d1 call 0x106e71d0 */
  push32(0x106ec9d6u); f_106e71d0();
  /* 106ec9d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ec9d9:;
  /* 106ec9d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec9dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec9df push eax */
  push32((uint32_t)(EAX));
  /* 106ec9e0 call dword ptr [0x1071235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071235c))), 0x106ec9e6u);
  /* 106ec9e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec9e9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106ec9ed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106ec9f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ec9f2 je 0x106eca06 */
  if (C.zf) goto L_106eca06;
  /* 106ec9f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ec9f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ec9fa push eax */
  push32((uint32_t)(EAX));
  /* 106ec9fb call dword ptr [0x10712360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712360))), 0x106eca01u);
  /* 106eca01 jmp 0x106ec964 */
  goto L_106ec964;
L_106eca06:;
  /* 106eca06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eca09 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 106eca0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106eca12 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106eca15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106eca18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eca1b sub eax, dword ptr [edx*4 + 0x10710ea0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10710ea0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eca22 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106eca23 mov esi, 0x24 */
  ESI = (0x24u);
  /* 106eca28 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106eca2a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eca2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eca2f jmp 0x106eca36 */
  goto L_106eca36;
L_106eca31:;
  /* 106eca31 jmp 0x106ec964 */
  goto L_106ec964;
L_106eca36:;
  /* 106eca36 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eca3a je 0x106eca41 */
  if (C.zf) goto L_106eca41;
  /* 106eca3c jmp 0x106ecae0 */
  goto L_106ecae0;
L_106eca41:;
  /* 106eca41 jmp 0x106ecadb */
  goto L_106ecadb;
L_106eca46:;
  /* 106eca46 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 106eca48 push 0x1070b01c */
  push32((uint32_t)(0x1070b01cu));
  /* 106eca4d push 2 */
  push32((uint32_t)(0x2u));
  /* 106eca4f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 106eca54 call 0x106e3730 */
  push32(0x106eca59u); f_106e3730();
  /* 106eca59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eca5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106eca5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eca63 je 0x106ecad9 */
  if (C.zf) goto L_106ecad9;
  /* 106eca65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106eca68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eca6b mov dword ptr [eax*4 + 0x10710ea0], ecx */
  w32((uint32_t)(EAX*4 + 0x10710ea0), (ECX));
  /* 106eca72 mov edx, dword ptr [0x10710fdc] */
  EDX = (r32((uint32_t)(0x10710fdc)));
  /* 106eca78 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eca7b mov dword ptr [0x10710fdc], edx */
  w32((uint32_t)(0x10710fdc), (EDX));
  /* 106eca81 jmp 0x106eca8c */
  goto L_106eca8c;
L_106eca83:;
  /* 106eca83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eca86 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eca89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106eca8c:;
  /* 106eca8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106eca8f mov edx, dword ptr [ecx*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106eca96 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eca9c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eca9f jae 0x106ecac4 */
  if (!C.cf) goto L_106ecac4;
  /* 106ecaa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ecaa4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 106ecaa8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ecaab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 106ecab1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ecab4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 106ecab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ecabb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 106ecac2 jmp 0x106eca83 */
  goto L_106eca83;
L_106ecac4:;
  /* 106ecac4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ecac7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ecaca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ecacd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecad0 push edx */
  push32((uint32_t)(EDX));
  /* 106ecad1 call 0x106ece20 */
  push32(0x106ecad6u); f_106ece20();
  /* 106ecad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ecad9:;
  /* 106ecad9 jmp 0x106ecae0 */
  goto L_106ecae0;
L_106ecadb:;
  /* 106ecadb jmp 0x106ec931 */
  goto L_106ec931;
L_106ecae0:;
  /* 106ecae0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 106ecae2 call 0x106e71d0 */
  push32(0x106ecae7u); f_106e71d0();
  /* 106ecae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecaea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecaed pop esi */
  ESI = (pop32());
  /* 106ecaee mov esp, ebp */
  ESP = (EBP);
  /* 106ecaf0 pop ebp */
  EBP = (pop32());
  /* 106ecaf1 ret  */
  ESPCHK(0x106ec910u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x106ecb00 (183 bytes, 57 insns) */
void f_106ecb00(void) {
  FTRACE(0x106ecb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ecb00 push ebp */
  push32((uint32_t)(EBP));
  /* 106ecb01 mov ebp, esp */
  EBP = (ESP);
  /* 106ecb03 push ecx */
  push32((uint32_t)(ECX));
  /* 106ecb04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecb07 cmp eax, dword ptr [0x10710fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10710fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecb0d jae 0x106ecb9a */
  if (!C.cf) goto L_106ecb9a;
  /* 106ecb13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecb16 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ecb19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecb1c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ecb1f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ecb22 mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106ecb29 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecb2d jne 0x106ecb9a */
  if (!C.zf) goto L_106ecb9a;
  /* 106ecb2f cmp dword ptr [0x1070f4b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecb36 jne 0x106ecb7a */
  if (!C.zf) goto L_106ecb7a;
  /* 106ecb38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecb3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106ecb3e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecb42 je 0x106ecb52 */
  if (C.zf) goto L_106ecb52;
  /* 106ecb44 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecb48 je 0x106ecb60 */
  if (C.zf) goto L_106ecb60;
  /* 106ecb4a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecb4e je 0x106ecb6e */
  if (C.zf) goto L_106ecb6e;
  /* 106ecb50 jmp 0x106ecb7a */
  goto L_106ecb7a;
L_106ecb52:;
  /* 106ecb52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ecb55 push edx */
  push32((uint32_t)(EDX));
  /* 106ecb56 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 106ecb58 call dword ptr [0x1071229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071229c))), 0x106ecb5eu);
  /* 106ecb5e jmp 0x106ecb7a */
  goto L_106ecb7a;
L_106ecb60:;
  /* 106ecb60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ecb63 push eax */
  push32((uint32_t)(EAX));
  /* 106ecb64 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 106ecb66 call dword ptr [0x1071229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071229c))), 0x106ecb6cu);
  /* 106ecb6c jmp 0x106ecb7a */
  goto L_106ecb7a;
L_106ecb6e:;
  /* 106ecb6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ecb71 push ecx */
  push32((uint32_t)(ECX));
  /* 106ecb72 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 106ecb74 call dword ptr [0x1071229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071229c))), 0x106ecb7au);
L_106ecb7a:;
  /* 106ecb7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecb7d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106ecb80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecb83 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106ecb86 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ecb89 mov ecx, dword ptr [edx*4 + 0x10710ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10710ea0)));
  /* 106ecb90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ecb93 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 106ecb96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ecb98 jmp 0x106ecbb3 */
  goto L_106ecbb3;
L_106ecb9a:;
  /* 106ecb9a call 0x106eb600 */
  push32(0x106ecb9fu); f_106eb600();
  /* 106ecb9f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ecba5 call 0x106eb610 */
  push32(0x106ecbaau); f_106eb610();
  /* 106ecbaa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ecbb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106ecbb3:;
  /* 106ecbb3 mov esp, ebp */
  ESP = (EBP);
  /* 106ecbb5 pop ebp */
  EBP = (pop32());
  /* 106ecbb6 ret  */
  ESPCHK(0x106ecb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbc0 @ 0x106ecbc0 (216 bytes, 63 insns) */
void f_106ecbc0(void) {
  FTRACE(0x106ecbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ecbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ecbc1 mov ebp, esp */
  EBP = (ESP);
  /* 106ecbc3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ecbc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecbc7 cmp eax, dword ptr [0x10710fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10710fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecbcd jae 0x106ecc7b */
  if (!C.cf) goto L_106ecc7b;
  /* 106ecbd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecbd6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ecbd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecbdc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ecbdf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ecbe2 mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106ecbe9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106ecbee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106ecbf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ecbf3 je 0x106ecc7b */
  if (C.zf) goto L_106ecc7b;
  /* 106ecbf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecbfc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106ecbff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecc02 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106ecc05 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ecc08 mov ecx, dword ptr [edx*4 + 0x10710ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10710ea0)));
  /* 106ecc0f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecc13 je 0x106ecc7b */
  if (C.zf) goto L_106ecc7b;
  /* 106ecc15 cmp dword ptr [0x1070f4b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecc1c jne 0x106ecc5a */
  if (!C.zf) goto L_106ecc5a;
  /* 106ecc1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecc21 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106ecc24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecc28 je 0x106ecc38 */
  if (C.zf) goto L_106ecc38;
  /* 106ecc2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecc2e je 0x106ecc44 */
  if (C.zf) goto L_106ecc44;
  /* 106ecc30 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecc34 je 0x106ecc50 */
  if (C.zf) goto L_106ecc50;
  /* 106ecc36 jmp 0x106ecc5a */
  goto L_106ecc5a;
L_106ecc38:;
  /* 106ecc38 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ecc3a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 106ecc3c call dword ptr [0x1071229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071229c))), 0x106ecc42u);
  /* 106ecc42 jmp 0x106ecc5a */
  goto L_106ecc5a;
L_106ecc44:;
  /* 106ecc44 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ecc46 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 106ecc48 call dword ptr [0x1071229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071229c))), 0x106ecc4eu);
  /* 106ecc4e jmp 0x106ecc5a */
  goto L_106ecc5a;
L_106ecc50:;
  /* 106ecc50 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ecc52 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 106ecc54 call dword ptr [0x1071229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071229c))), 0x106ecc5au);
L_106ecc5a:;
  /* 106ecc5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecc5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ecc60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecc63 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ecc66 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ecc69 mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106ecc70 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 106ecc77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ecc79 jmp 0x106ecc94 */
  goto L_106ecc94;
L_106ecc7b:;
  /* 106ecc7b call 0x106eb600 */
  push32(0x106ecc80u); f_106eb600();
  /* 106ecc80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ecc86 call 0x106eb610 */
  push32(0x106ecc8bu); f_106eb610();
  /* 106ecc8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ecc91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106ecc94:;
  /* 106ecc94 mov esp, ebp */
  ESP = (EBP);
  /* 106ecc96 pop ebp */
  EBP = (pop32());
  /* 106ecc97 ret  */
  ESPCHK(0x106ecbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cca0 @ 0x106ecca0 (102 bytes, 30 insns) */
void f_106ecca0(void) {
  FTRACE(0x106ecca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ecca0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ecca1 mov ebp, esp */
  EBP = (ESP);
  /* 106ecca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecca6 cmp eax, dword ptr [0x10710fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10710fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eccac jae 0x106ecceb */
  if (!C.cf) goto L_106ecceb;
  /* 106eccae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eccb1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106eccb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eccb7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106eccba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106eccbd mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106eccc4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106eccc9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106ecccc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106eccce je 0x106ecceb */
  if (C.zf) goto L_106ecceb;
  /* 106eccd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eccd3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106eccd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eccd9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106eccdc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106eccdf mov ecx, dword ptr [edx*4 + 0x10710ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10710ea0)));
  /* 106ecce6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 106ecce9 jmp 0x106ecd04 */
  goto L_106ecd04;
L_106ecceb:;
  /* 106ecceb call 0x106eb600 */
  push32(0x106eccf0u); f_106eb600();
  /* 106eccf0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106eccf6 call 0x106eb610 */
  push32(0x106eccfbu); f_106eb610();
  /* 106eccfb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ecd01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106ecd04:;
  /* 106ecd04 pop ebp */
  EBP = (pop32());
  /* 106ecd05 ret  */
  ESPCHK(0x106ecca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd10 @ 0x106ecd10 (260 bytes, 83 insns) */
void f_106ecd10(void) {
  FTRACE(0x106ecd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ecd10 push ebp */
  push32((uint32_t)(EBP));
  /* 106ecd11 mov ebp, esp */
  EBP = (ESP);
  /* 106ecd13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ecd16 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 106ecd1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ecd1d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 106ecd20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ecd22 je 0x106ecd2d */
  if (C.zf) goto L_106ecd2d;
  /* 106ecd24 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ecd27 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 106ecd2a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_106ecd2d:;
  /* 106ecd2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ecd30 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 106ecd36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ecd38 je 0x106ecd42 */
  if (C.zf) goto L_106ecd42;
  /* 106ecd3a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ecd3d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 106ecd3f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_106ecd42:;
  /* 106ecd42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ecd45 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 106ecd4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ecd4d je 0x106ecd58 */
  if (C.zf) goto L_106ecd58;
  /* 106ecd4f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ecd52 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 106ecd55 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_106ecd58:;
  /* 106ecd58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecd5b push eax */
  push32((uint32_t)(EAX));
  /* 106ecd5c call dword ptr [0x10712260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712260))), 0x106ecd62u);
  /* 106ecd62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ecd65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecd69 jne 0x106ecd82 */
  if (!C.zf) goto L_106ecd82;
  /* 106ecd6b call dword ptr [0x1071230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071230c))), 0x106ecd71u);
  /* 106ecd71 push eax */
  push32((uint32_t)(EAX));
  /* 106ecd72 call 0x106eb560 */
  push32(0x106ecd77u); f_106eb560();
  /* 106ecd77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecd7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ecd7d jmp 0x106ece10 */
  goto L_106ece10;
L_106ecd82:;
  /* 106ecd82 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecd86 jne 0x106ecd93 */
  if (!C.zf) goto L_106ecd93;
  /* 106ecd88 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ecd8b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 106ecd8e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 106ecd91 jmp 0x106ecda2 */
  goto L_106ecda2;
L_106ecd93:;
  /* 106ecd93 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecd97 jne 0x106ecda2 */
  if (!C.zf) goto L_106ecda2;
  /* 106ecd99 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ecd9c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 106ecd9f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_106ecda2:;
  /* 106ecda2 call 0x106ec910 */
  push32(0x106ecda7u); f_106ec910();
  /* 106ecda7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ecdaa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecdae jne 0x106ecdcb */
  if (!C.zf) goto L_106ecdcb;
  /* 106ecdb0 call 0x106eb600 */
  push32(0x106ecdb5u); f_106eb600();
  /* 106ecdb5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 106ecdbb call 0x106eb610 */
  push32(0x106ecdc0u); f_106eb610();
  /* 106ecdc0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ecdc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ecdc9 jmp 0x106ece10 */
  goto L_106ece10;
L_106ecdcb:;
  /* 106ecdcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecdce push eax */
  push32((uint32_t)(EAX));
  /* 106ecdcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecdd2 push ecx */
  push32((uint32_t)(ECX));
  /* 106ecdd3 call 0x106ecb00 */
  push32(0x106ecdd8u); f_106ecb00();
  /* 106ecdd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecddb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ecdde or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 106ecde1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 106ecde4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecde7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ecdea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecded and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ecdf0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ecdf3 mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106ecdfa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ecdfd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 106ece01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ece04 push ecx */
  push32((uint32_t)(ECX));
  /* 106ece05 call 0x106eceb0 */
  push32(0x106ece0au); f_106eceb0();
  /* 106ece0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ece0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106ece10:;
  /* 106ece10 mov esp, ebp */
  ESP = (EBP);
  /* 106ece12 pop ebp */
  EBP = (pop32());
  /* 106ece13 ret  */
  ESPCHK(0x106ecd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce20 @ 0x106ece20 (134 bytes, 44 insns) */
void f_106ece20(void) {
  FTRACE(0x106ece20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ece20 push ebp */
  push32((uint32_t)(EBP));
  /* 106ece21 mov ebp, esp */
  EBP = (ESP);
  /* 106ece23 push ecx */
  push32((uint32_t)(ECX));
  /* 106ece24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ece27 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ece2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ece2d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ece30 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ece33 mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106ece3a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ece3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106ece3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ece42 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ece46 jne 0x106ece81 */
  if (!C.zf) goto L_106ece81;
  /* 106ece48 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106ece4a call 0x106e7130 */
  push32(0x106ece4fu); f_106e7130();
  /* 106ece4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ece52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ece55 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ece59 jne 0x106ece77 */
  if (!C.zf) goto L_106ece77;
  /* 106ece5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ece5e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ece61 push edx */
  push32((uint32_t)(EDX));
  /* 106ece62 call dword ptr [0x10712358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712358))), 0x106ece68u);
  /* 106ece68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ece6b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106ece6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ece71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ece74 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_106ece77:;
  /* 106ece77 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106ece79 call 0x106e71d0 */
  push32(0x106ece7eu); f_106e71d0();
  /* 106ece7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ece81:;
  /* 106ece81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ece84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ece87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ece8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ece8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ece90 mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106ece97 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 106ece9b push eax */
  push32((uint32_t)(EAX));
  /* 106ece9c call dword ptr [0x1071235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071235c))), 0x106ecea2u);
  /* 106ecea2 mov esp, ebp */
  ESP = (EBP);
  /* 106ecea4 pop ebp */
  EBP = (pop32());
  /* 106ecea5 ret  */
  ESPCHK(0x106ece20u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x106eceb0 (38 bytes, 13 insns) */
void f_106eceb0(void) {
  FTRACE(0x106eceb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eceb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106eceb1 mov ebp, esp */
  EBP = (ESP);
  /* 106eceb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eceb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106eceb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecebc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ecebf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ecec2 mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106ecec9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 106ececd push eax */
  push32((uint32_t)(EAX));
  /* 106ecece call dword ptr [0x10712360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712360))), 0x106eced4u);
  /* 106eced4 pop ebp */
  EBP = (pop32());
  /* 106eced5 ret  */
  ESPCHK(0x106eceb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cee0 @ 0x106ecee0 (218 bytes, 63 insns) */
void f_106ecee0(void) {
  FTRACE(0x106ecee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ecee0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ecee1 mov ebp, esp */
  EBP = (ESP);
  /* 106ecee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ecee6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106eceed push 2 */
  push32((uint32_t)(0x2u));
  /* 106eceef call 0x106e7130 */
  push32(0x106ecef4u); f_106e7130();
  /* 106ecef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecef7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 106ecefe jmp 0x106ecf09 */
  goto L_106ecf09;
L_106ecf00:;
  /* 106ecf00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecf03 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecf06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106ecf09:;
  /* 106ecf09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecf0c cmp ecx, dword ptr [0x10710ba0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10710ba0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecf12 jge 0x106ecfa9 */
  if ((C.sf==C.of)) goto L_106ecfa9;
  /* 106ecf18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecf1b mov eax, dword ptr [0x1070f850] */
  EAX = (r32((uint32_t)(0x1070f850)));
  /* 106ecf20 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecf24 je 0x106ecfa4 */
  if (C.zf) goto L_106ecfa4;
  /* 106ecf26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecf29 mov edx, dword ptr [0x1070f850] */
  EDX = (r32((uint32_t)(0x1070f850)));
  /* 106ecf2f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 106ecf32 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106ecf35 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 106ecf3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ecf3d je 0x106ecf61 */
  if (C.zf) goto L_106ecf61;
  /* 106ecf3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecf42 mov eax, dword ptr [0x1070f850] */
  EAX = (r32((uint32_t)(0x1070f850)));
  /* 106ecf47 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106ecf4a push ecx */
  push32((uint32_t)(ECX));
  /* 106ecf4b call 0x106edcd0 */
  push32(0x106ecf50u); f_106edcd0();
  /* 106ecf50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecf53 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecf56 je 0x106ecf61 */
  if (C.zf) goto L_106ecf61;
  /* 106ecf58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ecf5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecf5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106ecf61:;
  /* 106ecf61 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecf65 jl 0x106ecfa4 */
  if ((C.sf!=C.of)) goto L_106ecfa4;
  /* 106ecf67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecf6a mov ecx, dword ptr [0x1070f850] */
  ECX = (r32((uint32_t)(0x1070f850)));
  /* 106ecf70 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106ecf73 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecf76 push edx */
  push32((uint32_t)(EDX));
  /* 106ecf77 call dword ptr [0x10712320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712320))), 0x106ecf7du);
  /* 106ecf7d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ecf7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecf82 mov ecx, dword ptr [0x1070f850] */
  ECX = (r32((uint32_t)(0x1070f850)));
  /* 106ecf88 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106ecf8b push edx */
  push32((uint32_t)(EDX));
  /* 106ecf8c call 0x106e41c0 */
  push32(0x106ecf91u); f_106e41c0();
  /* 106ecf91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecf94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ecf97 mov ecx, dword ptr [0x1070f850] */
  ECX = (r32((uint32_t)(0x1070f850)));
  /* 106ecf9d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_106ecfa4:;
  /* 106ecfa4 jmp 0x106ecf00 */
  goto L_106ecf00;
L_106ecfa9:;
  /* 106ecfa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ecfab call 0x106e71d0 */
  push32(0x106ecfb0u); f_106e71d0();
  /* 106ecfb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecfb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ecfb6 mov esp, ebp */
  ESP = (EBP);
  /* 106ecfb8 pop ebp */
  EBP = (pop32());
  /* 106ecfb9 ret  */
  ESPCHK(0x106ecee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfc0 @ 0x106ecfc0 (68 bytes, 26 insns) */
void f_106ecfc0(void) {
  FTRACE(0x106ecfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ecfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ecfc1 mov ebp, esp */
  EBP = (ESP);
  /* 106ecfc3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ecfc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ecfc8 jne 0x106ecfd6 */
  if (!C.zf) goto L_106ecfd6;
  /* 106ecfca push 0 */
  push32((uint32_t)(0x0u));
  /* 106ecfcc call 0x106ed130 */
  push32(0x106ecfd1u); f_106ed130();
  /* 106ecfd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecfd4 jmp 0x106ed000 */
  goto L_106ed000;
L_106ecfd6:;
  /* 106ecfd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecfd9 push eax */
  push32((uint32_t)(EAX));
  /* 106ecfda call 0x106ec540 */
  push32(0x106ecfdfu); f_106ec540();
  /* 106ecfdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecfe2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecfe5 push ecx */
  push32((uint32_t)(ECX));
  /* 106ecfe6 call 0x106ed010 */
  push32(0x106ecfebu); f_106ed010();
  /* 106ecfeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecfee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ecff1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ecff4 push edx */
  push32((uint32_t)(EDX));
  /* 106ecff5 call 0x106ec5b0 */
  push32(0x106ecffau); f_106ec5b0();
  /* 106ecffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ecffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106ed000:;
  /* 106ed000 mov esp, ebp */
  ESP = (EBP);
  /* 106ed002 pop ebp */
  EBP = (pop32());
  /* 106ed003 ret  */
  ESPCHK(0x106ecfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d010 @ 0x106ed010 (65 bytes, 26 insns) */
void f_106ed010(void) {
  FTRACE(0x106ed010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ed010 push ebp */
  push32((uint32_t)(EBP));
  /* 106ed011 mov ebp, esp */
  EBP = (ESP);
  /* 106ed013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed016 push eax */
  push32((uint32_t)(EAX));
  /* 106ed017 call 0x106ed060 */
  push32(0x106ed01cu); f_106ed060();
  /* 106ed01c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed01f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed021 je 0x106ed028 */
  if (C.zf) goto L_106ed028;
  /* 106ed023 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ed026 jmp 0x106ed04f */
  goto L_106ed04f;
L_106ed028:;
  /* 106ed028 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed02b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ed02e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 106ed034 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ed036 je 0x106ed04d */
  if (C.zf) goto L_106ed04d;
  /* 106ed038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed03b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106ed03e push ecx */
  push32((uint32_t)(ECX));
  /* 106ed03f call 0x106ede20 */
  push32(0x106ed044u); f_106ede20();
  /* 106ed044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed047 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ed049 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed04b jmp 0x106ed04f */
  goto L_106ed04f;
L_106ed04d:;
  /* 106ed04d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106ed04f:;
  /* 106ed04f pop ebp */
  EBP = (pop32());
  /* 106ed050 ret  */
  ESPCHK(0x106ed010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d060 @ 0x106ed060 (183 bytes, 62 insns) */
void f_106ed060(void) {
  FTRACE(0x106ed060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ed060 push ebp */
  push32((uint32_t)(EBP));
  /* 106ed061 mov ebp, esp */
  EBP = (ESP);
  /* 106ed063 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed066 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ed06d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed070 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ed073 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed076 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ed079 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106ed07c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed07f jne 0x106ed0fb */
  if (!C.zf) goto L_106ed0fb;
  /* 106ed081 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed084 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106ed087 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 106ed08d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ed08f je 0x106ed0fb */
  if (C.zf) goto L_106ed0fb;
  /* 106ed091 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed094 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed097 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 106ed099 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed09c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ed09f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed0a3 jle 0x106ed0fb */
  if ((C.zf||C.sf!=C.of)) goto L_106ed0fb;
  /* 106ed0a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed0a8 push edx */
  push32((uint32_t)(EDX));
  /* 106ed0a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed0ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106ed0af push ecx */
  push32((uint32_t)(ECX));
  /* 106ed0b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed0b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106ed0b6 push eax */
  push32((uint32_t)(EAX));
  /* 106ed0b7 call 0x106ebfd0 */
  push32(0x106ed0bcu); f_106ebfd0();
  /* 106ed0bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed0bf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed0c2 jne 0x106ed0e5 */
  if (!C.zf) goto L_106ed0e5;
  /* 106ed0c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed0c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ed0ca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 106ed0d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ed0d2 je 0x106ed0e3 */
  if (C.zf) goto L_106ed0e3;
  /* 106ed0d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed0d7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106ed0da and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 106ed0dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed0e0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_106ed0e3:;
  /* 106ed0e3 jmp 0x106ed0fb */
  goto L_106ed0fb;
L_106ed0e5:;
  /* 106ed0e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed0e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106ed0eb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 106ed0ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed0f1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 106ed0f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106ed0fb:;
  /* 106ed0fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed0fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed101 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106ed104 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106ed106 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed109 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 106ed110 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ed113 mov esp, ebp */
  ESP = (EBP);
  /* 106ed115 pop ebp */
  EBP = (pop32());
  /* 106ed116 ret  */
  ESPCHK(0x106ed060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d120 @ 0x106ed120 (15 bytes, 7 insns) */
void f_106ed120(void) {
  FTRACE(0x106ed120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ed120 push ebp */
  push32((uint32_t)(EBP));
  /* 106ed121 mov ebp, esp */
  EBP = (ESP);
  /* 106ed123 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ed125 call 0x106ed130 */
  push32(0x106ed12au); f_106ed130();
  /* 106ed12a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed12d pop ebp */
  EBP = (pop32());
  /* 106ed12e ret  */
  ESPCHK(0x106ed120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d130 @ 0x106ed130 (319 bytes, 94 insns) */
void f_106ed130(void) {
  FTRACE(0x106ed130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ed130 push ebp */
  push32((uint32_t)(EBP));
  /* 106ed131 mov ebp, esp */
  EBP = (ESP);
  /* 106ed133 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed136 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ed13d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106ed144 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ed146 call 0x106e7130 */
  push32(0x106ed14bu); f_106e7130();
  /* 106ed14b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed14e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106ed155 jmp 0x106ed160 */
  goto L_106ed160;
L_106ed157:;
  /* 106ed157 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed15a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed15d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106ed160:;
  /* 106ed160 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed163 cmp ecx, dword ptr [0x10710ba0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10710ba0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed169 jge 0x106ed253 */
  if ((C.sf==C.of)) goto L_106ed253;
  /* 106ed16f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed172 mov eax, dword ptr [0x1070f850] */
  EAX = (r32((uint32_t)(0x1070f850)));
  /* 106ed177 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed17b je 0x106ed24e */
  if (C.zf) goto L_106ed24e;
  /* 106ed181 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed184 mov edx, dword ptr [0x1070f850] */
  EDX = (r32((uint32_t)(0x1070f850)));
  /* 106ed18a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 106ed18d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106ed190 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 106ed196 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ed198 je 0x106ed24e */
  if (C.zf) goto L_106ed24e;
  /* 106ed19e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed1a1 mov eax, dword ptr [0x1070f850] */
  EAX = (r32((uint32_t)(0x1070f850)));
  /* 106ed1a6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106ed1a9 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed1aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed1ad push edx */
  push32((uint32_t)(EDX));
  /* 106ed1ae call 0x106ec580 */
  push32(0x106ed1b3u); f_106ec580();
  /* 106ed1b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed1b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed1b9 mov ecx, dword ptr [0x1070f850] */
  ECX = (r32((uint32_t)(0x1070f850)));
  /* 106ed1bf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106ed1c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106ed1c5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 106ed1ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed1cc je 0x106ed235 */
  if (C.zf) goto L_106ed235;
  /* 106ed1ce cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed1d2 jne 0x106ed1f9 */
  if (!C.zf) goto L_106ed1f9;
  /* 106ed1d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed1d7 mov edx, dword ptr [0x1070f850] */
  EDX = (r32((uint32_t)(0x1070f850)));
  /* 106ed1dd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 106ed1e0 push eax */
  push32((uint32_t)(EAX));
  /* 106ed1e1 call 0x106ed010 */
  push32(0x106ed1e6u); f_106ed010();
  /* 106ed1e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed1e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed1ec je 0x106ed1f7 */
  if (C.zf) goto L_106ed1f7;
  /* 106ed1ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ed1f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed1f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106ed1f7:;
  /* 106ed1f7 jmp 0x106ed235 */
  goto L_106ed235;
L_106ed1f9:;
  /* 106ed1f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed1fd jne 0x106ed235 */
  if (!C.zf) goto L_106ed235;
  /* 106ed1ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed202 mov eax, dword ptr [0x1070f850] */
  EAX = (r32((uint32_t)(0x1070f850)));
  /* 106ed207 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106ed20a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ed20d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 106ed210 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ed212 je 0x106ed235 */
  if (C.zf) goto L_106ed235;
  /* 106ed214 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed217 mov ecx, dword ptr [0x1070f850] */
  ECX = (r32((uint32_t)(0x1070f850)));
  /* 106ed21d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106ed220 push edx */
  push32((uint32_t)(EDX));
  /* 106ed221 call 0x106ed010 */
  push32(0x106ed226u); f_106ed010();
  /* 106ed226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed229 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed22c jne 0x106ed235 */
  if (!C.zf) goto L_106ed235;
  /* 106ed22e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_106ed235:;
  /* 106ed235 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed238 mov ecx, dword ptr [0x1070f850] */
  ECX = (r32((uint32_t)(0x1070f850)));
  /* 106ed23e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106ed241 push edx */
  push32((uint32_t)(EDX));
  /* 106ed242 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed245 push eax */
  push32((uint32_t)(EAX));
  /* 106ed246 call 0x106ec5f0 */
  push32(0x106ed24bu); f_106ec5f0();
  /* 106ed24b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ed24e:;
  /* 106ed24e jmp 0x106ed157 */
  goto L_106ed157;
L_106ed253:;
  /* 106ed253 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ed255 call 0x106e71d0 */
  push32(0x106ed25au); f_106e71d0();
  /* 106ed25a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed25d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed261 jne 0x106ed268 */
  if (!C.zf) goto L_106ed268;
  /* 106ed263 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ed266 jmp 0x106ed26b */
  goto L_106ed26b;
L_106ed268:;
  /* 106ed268 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106ed26b:;
  /* 106ed26b mov esp, ebp */
  ESP = (EBP);
  /* 106ed26d pop ebp */
  EBP = (pop32());
  /* 106ed26e ret  */
  ESPCHK(0x106ed130u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x106ed270 (15 bytes, 7 insns) */
void f_106ed270(void) {
  FTRACE(0x106ed270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ed270 push ebp */
  push32((uint32_t)(EBP));
  /* 106ed271 mov ebp, esp */
  EBP = (ESP);
  /* 106ed273 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ed275 call 0x106e26a0 */
  push32(0x106ed27au); f_106e26a0();
  /* 106ed27a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed27d pop ebp */
  EBP = (pop32());
  /* 106ed27e ret  */
  ESPCHK(0x106ed270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d280 @ 0x106ed280 (1007 bytes, 269 insns) */
void f_106ed280(void) {
  FTRACE(0x106ed280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ed280 push ebp */
  push32((uint32_t)(EBP));
  /* 106ed281 mov ebp, esp */
  EBP = (ESP);
  /* 106ed283 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed289 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed28d jl 0x106ed295 */
  if ((C.sf!=C.of)) goto L_106ed295;
  /* 106ed28f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed293 jle 0x106ed29c */
  if ((C.zf||C.sf!=C.of)) goto L_106ed29c;
L_106ed295:;
  /* 106ed295 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ed297 jmp 0x106ed66b */
  goto L_106ed66b;
L_106ed29c:;
  /* 106ed29c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ed29e call 0x106e7130 */
  push32(0x106ed2a3u); f_106e7130();
  /* 106ed2a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed2a6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106ed2ad mov eax, dword ptr [0x1070f83c] */
  EAX = (r32((uint32_t)(0x1070f83c)));
  /* 106ed2b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed2b5 mov dword ptr [0x1070f83c], eax */
  w32((uint32_t)(0x1070f83c), (EAX));
L_106ed2ba:;
  /* 106ed2ba cmp dword ptr [0x1070f84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed2c1 je 0x106ed2cd */
  if (C.zf) goto L_106ed2cd;
  /* 106ed2c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ed2c5 call dword ptr [0x10712298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712298))), 0x106ed2cbu);
  /* 106ed2cb jmp 0x106ed2ba */
  goto L_106ed2ba;
L_106ed2cd:;
  /* 106ed2cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed2d1 je 0x106ed311 */
  if (C.zf) goto L_106ed311;
  /* 106ed2d3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed2d7 je 0x106ed2f1 */
  if (C.zf) goto L_106ed2f1;
  /* 106ed2d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ed2dc push ecx */
  push32((uint32_t)(ECX));
  /* 106ed2dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed2e0 push edx */
  push32((uint32_t)(EDX));
  /* 106ed2e1 call 0x106ed670 */
  push32(0x106ed2e6u); f_106ed670();
  /* 106ed2e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed2e9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 106ed2ef jmp 0x106ed303 */
  goto L_106ed303;
L_106ed2f1:;
  /* 106ed2f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed2f4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed2f7 mov ecx, dword ptr [eax + 0x1070e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1070e4dc)));
  /* 106ed2fd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_106ed303:;
  /* 106ed303 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 106ed309 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106ed30c jmp 0x106ed64b */
  goto L_106ed64b;
L_106ed311:;
  /* 106ed311 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 106ed318 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106ed31f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed323 je 0x106ed643 */
  if (C.zf) goto L_106ed643;
  /* 106ed329 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ed32c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ed32f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed332 jne 0x106ed554 */
  if (!C.zf) goto L_106ed554;
  /* 106ed338 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ed33b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106ed33f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed342 jne 0x106ed554 */
  if (!C.zf) goto L_106ed554;
  /* 106ed348 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ed34b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 106ed34f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed352 jne 0x106ed554 */
  if (!C.zf) goto L_106ed554;
  /* 106ed358 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ed35b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_106ed361:;
  /* 106ed361 push 0x1070b06c */
  push32((uint32_t)(0x1070b06cu));
  /* 106ed366 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106ed36c push ecx */
  push32((uint32_t)(ECX));
  /* 106ed36d call 0x106ef4d0 */
  push32(0x106ed372u); f_106ef4d0();
  /* 106ed372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed375 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 106ed37b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed382 je 0x106ed3ad */
  if (C.zf) goto L_106ed3ad;
  /* 106ed384 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ed38a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed390 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 106ed396 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed39d je 0x106ed3ad */
  if (C.zf) goto L_106ed3ad;
  /* 106ed39f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ed3a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ed3a8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed3ab jne 0x106ed3d3 */
  if (!C.zf) goto L_106ed3d3;
L_106ed3ad:;
  /* 106ed3ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed3b1 je 0x106ed3cc */
  if (C.zf) goto L_106ed3cc;
  /* 106ed3b3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ed3b5 call 0x106e71d0 */
  push32(0x106ed3bau); f_106e71d0();
  /* 106ed3ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed3bd mov edx, dword ptr [0x1070f83c] */
  EDX = (r32((uint32_t)(0x1070f83c)));
  /* 106ed3c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed3c6 mov dword ptr [0x1070f83c], edx */
  w32((uint32_t)(0x1070f83c), (EDX));
L_106ed3cc:;
  /* 106ed3cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ed3ce jmp 0x106ed66b */
  goto L_106ed66b;
L_106ed3d3:;
  /* 106ed3d3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 106ed3da jmp 0x106ed3e5 */
  goto L_106ed3e5;
L_106ed3dc:;
  /* 106ed3dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ed3df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed3e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106ed3e5:;
  /* 106ed3e5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed3e9 jg 0x106ed433 */
  if ((!C.zf&&C.sf==C.of)) goto L_106ed433;
  /* 106ed3eb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 106ed3f1 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed3f2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106ed3f8 push edx */
  push32((uint32_t)(EDX));
  /* 106ed3f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ed3fc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed3ff mov ecx, dword ptr [eax + 0x1070e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1070e4d8)));
  /* 106ed405 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed406 call 0x106ef490 */
  push32(0x106ed40bu); f_106ef490();
  /* 106ed40b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed410 jne 0x106ed431 */
  if (!C.zf) goto L_106ed431;
  /* 106ed412 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ed415 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed418 mov eax, dword ptr [edx + 0x1070e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1070e4d8)));
  /* 106ed41e push eax */
  push32((uint32_t)(EAX));
  /* 106ed41f call 0x106e6560 */
  push32(0x106ed424u); f_106e6560();
  /* 106ed424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed427 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed42d jne 0x106ed431 */
  if (!C.zf) goto L_106ed431;
  /* 106ed42f jmp 0x106ed433 */
  goto L_106ed433;
L_106ed431:;
  /* 106ed431 jmp 0x106ed3dc */
  goto L_106ed3dc;
L_106ed433:;
  /* 106ed433 push 0x1070b068 */
  push32((uint32_t)(0x1070b068u));
  /* 106ed438 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ed43e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed441 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 106ed447 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ed44d push edx */
  push32((uint32_t)(EDX));
  /* 106ed44e call 0x106ef450 */
  push32(0x106ed453u); f_106ef450();
  /* 106ed453 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed456 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 106ed45c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed463 jne 0x106ed499 */
  if (!C.zf) goto L_106ed499;
  /* 106ed465 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ed46b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ed46e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed471 je 0x106ed499 */
  if (C.zf) goto L_106ed499;
  /* 106ed473 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed477 je 0x106ed492 */
  if (C.zf) goto L_106ed492;
  /* 106ed479 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ed47b call 0x106e71d0 */
  push32(0x106ed480u); f_106e71d0();
  /* 106ed480 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed483 mov edx, dword ptr [0x1070f83c] */
  EDX = (r32((uint32_t)(0x1070f83c)));
  /* 106ed489 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed48c mov dword ptr [0x1070f83c], edx */
  w32((uint32_t)(0x1070f83c), (EDX));
L_106ed492:;
  /* 106ed492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ed494 jmp 0x106ed66b */
  goto L_106ed66b;
L_106ed499:;
  /* 106ed499 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed49d jg 0x106ed4ea */
  if ((!C.zf&&C.sf==C.of)) goto L_106ed4ea;
  /* 106ed49f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 106ed4a5 push eax */
  push32((uint32_t)(EAX));
  /* 106ed4a6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ed4ac push ecx */
  push32((uint32_t)(ECX));
  /* 106ed4ad lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 106ed4b3 push edx */
  push32((uint32_t)(EDX));
  /* 106ed4b4 call 0x106e6f50 */
  push32(0x106ed4b9u); f_106e6f50();
  /* 106ed4b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed4bc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 106ed4c2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 106ed4ca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 106ed4d0 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed4d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ed4d4 push edx */
  push32((uint32_t)(EDX));
  /* 106ed4d5 call 0x106ed670 */
  push32(0x106ed4dau); f_106ed670();
  /* 106ed4da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed4dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed4df je 0x106ed4ea */
  if (C.zf) goto L_106ed4ea;
  /* 106ed4e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed4e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed4e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106ed4ea:;
  /* 106ed4ea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ed4f0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed4f6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 106ed4fc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106ed502 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106ed505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed507 je 0x106ed518 */
  if (C.zf) goto L_106ed518;
  /* 106ed509 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106ed50f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed512 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_106ed518:;
  /* 106ed518 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106ed51e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106ed521 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed523 jne 0x106ed361 */
  if (!C.zf) goto L_106ed361;
  /* 106ed529 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed52d je 0x106ed53c */
  if (C.zf) goto L_106ed53c;
  /* 106ed52f call 0x106ed810 */
  push32(0x106ed534u); f_106ed810();
  /* 106ed534 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 106ed53a jmp 0x106ed546 */
  goto L_106ed546;
L_106ed53c:;
  /* 106ed53c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_106ed546:;
  /* 106ed546 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 106ed54c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ed54f jmp 0x106ed641 */
  goto L_106ed641;
L_106ed554:;
  /* 106ed554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed557 push edx */
  push32((uint32_t)(EDX));
  /* 106ed558 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ed55a push 0 */
  push32((uint32_t)(0x0u));
  /* 106ed55c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 106ed562 push eax */
  push32((uint32_t)(EAX));
  /* 106ed563 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ed566 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed567 call 0x106ed910 */
  push32(0x106ed56cu); f_106ed910();
  /* 106ed56c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed56f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ed572 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed576 je 0x106ed641 */
  if (C.zf) goto L_106ed641;
  /* 106ed57c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106ed583 jmp 0x106ed58e */
  goto L_106ed58e;
L_106ed585:;
  /* 106ed585 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ed588 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed58b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106ed58e:;
  /* 106ed58e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed592 jg 0x106ed5f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_106ed5f0;
  /* 106ed594 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed598 je 0x106ed5ee */
  if (C.zf) goto L_106ed5ee;
  /* 106ed59a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ed59d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed5a0 mov ecx, dword ptr [eax + 0x1070e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1070e4dc)));
  /* 106ed5a6 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed5a7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 106ed5ad push edx */
  push32((uint32_t)(EDX));
  /* 106ed5ae call 0x106ef3c0 */
  push32(0x106ed5b3u); f_106ef3c0();
  /* 106ed5b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed5b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed5b8 je 0x106ed5e5 */
  if (C.zf) goto L_106ed5e5;
  /* 106ed5ba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 106ed5c0 push eax */
  push32((uint32_t)(EAX));
  /* 106ed5c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ed5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed5c5 call 0x106ed670 */
  push32(0x106ed5cau); f_106ed670();
  /* 106ed5ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed5cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed5cf je 0x106ed5dc */
  if (C.zf) goto L_106ed5dc;
  /* 106ed5d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed5d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed5d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106ed5da jmp 0x106ed5e3 */
  goto L_106ed5e3;
L_106ed5dc:;
  /* 106ed5dc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_106ed5e3:;
  /* 106ed5e3 jmp 0x106ed5ee */
  goto L_106ed5ee;
L_106ed5e5:;
  /* 106ed5e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed5e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed5eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106ed5ee:;
  /* 106ed5ee jmp 0x106ed585 */
  goto L_106ed585;
L_106ed5f0:;
  /* 106ed5f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed5f4 je 0x106ed61b */
  if (C.zf) goto L_106ed61b;
  /* 106ed5f6 call 0x106ed810 */
  push32(0x106ed5fbu); f_106ed810();
  /* 106ed5fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ed5fe push 2 */
  push32((uint32_t)(0x2u));
  /* 106ed600 mov ecx, dword ptr [0x1070e4dc] */
  ECX = (r32((uint32_t)(0x1070e4dc)));
  /* 106ed606 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed607 call 0x106e41c0 */
  push32(0x106ed60cu); f_106e41c0();
  /* 106ed60c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed60f mov dword ptr [0x1070e4dc], 0 */
  w32((uint32_t)(0x1070e4dc), (0x0u));
  /* 106ed619 jmp 0x106ed641 */
  goto L_106ed641;
L_106ed61b:;
  /* 106ed61b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed61f je 0x106ed62e */
  if (C.zf) goto L_106ed62e;
  /* 106ed621 call 0x106ed810 */
  push32(0x106ed626u); f_106ed810();
  /* 106ed626 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 106ed62c jmp 0x106ed638 */
  goto L_106ed638;
L_106ed62e:;
  /* 106ed62e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_106ed638:;
  /* 106ed638 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 106ed63e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106ed641:;
  /* 106ed641 jmp 0x106ed64b */
  goto L_106ed64b;
L_106ed643:;
  /* 106ed643 call 0x106ed810 */
  push32(0x106ed648u); f_106ed810();
  /* 106ed648 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106ed64b:;
  /* 106ed64b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed64f je 0x106ed668 */
  if (C.zf) goto L_106ed668;
  /* 106ed651 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ed653 call 0x106e71d0 */
  push32(0x106ed658u); f_106e71d0();
  /* 106ed658 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed65b mov eax, dword ptr [0x1070f83c] */
  EAX = (r32((uint32_t)(0x1070f83c)));
  /* 106ed660 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed663 mov dword ptr [0x1070f83c], eax */
  w32((uint32_t)(0x1070f83c), (EAX));
L_106ed668:;
  /* 106ed668 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106ed66b:;
  /* 106ed66b mov esp, ebp */
  ESP = (EBP);
  /* 106ed66d pop ebp */
  EBP = (pop32());
  /* 106ed66e ret  */
  ESPCHK(0x106ed280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d670 @ 0x106ed670 (403 bytes, 117 insns) */
void f_106ed670(void) {
  FTRACE(0x106ed670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ed670 push ebp */
  push32((uint32_t)(EBP));
  /* 106ed671 mov ebp, esp */
  EBP = (ESP);
  /* 106ed673 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed679 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed67c push eax */
  push32((uint32_t)(EAX));
  /* 106ed67d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 106ed683 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed684 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 106ed68a push edx */
  push32((uint32_t)(EDX));
  /* 106ed68b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 106ed691 push eax */
  push32((uint32_t)(EAX));
  /* 106ed692 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ed695 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed696 call 0x106ed910 */
  push32(0x106ed69bu); f_106ed910();
  /* 106ed69b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed69e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed6a0 jne 0x106ed6a9 */
  if (!C.zf) goto L_106ed6a9;
  /* 106ed6a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ed6a4 jmp 0x106ed7ff */
  goto L_106ed7ff;
L_106ed6a9:;
  /* 106ed6a9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 106ed6ae push 0x1070b070 */
  push32((uint32_t)(0x1070b070u));
  /* 106ed6b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ed6b5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 106ed6bb push edx */
  push32((uint32_t)(EDX));
  /* 106ed6bc call 0x106e6560 */
  push32(0x106ed6c1u); f_106e6560();
  /* 106ed6c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed6c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed6c7 push eax */
  push32((uint32_t)(EAX));
  /* 106ed6c8 call 0x106e3730 */
  push32(0x106ed6cdu); f_106e3730();
  /* 106ed6cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed6d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ed6d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed6d7 jne 0x106ed6e0 */
  if (!C.zf) goto L_106ed6e0;
  /* 106ed6d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ed6db jmp 0x106ed7ff */
  goto L_106ed7ff;
L_106ed6e0:;
  /* 106ed6e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed6e3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed6e6 mov ecx, dword ptr [eax + 0x1070e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1070e4dc)));
  /* 106ed6ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ed6ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed6f2 mov eax, dword ptr [edx*4 + 0x1070f6b8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1070f6b8)));
  /* 106ed6f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ed6fc push 6 */
  push32((uint32_t)(0x6u));
  /* 106ed6fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed701 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed704 add ecx, 0x1070f708 */
  { uint32_t _a=(ECX),_b=(0x1070f708u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed70a push ecx */
  push32((uint32_t)(ECX));
  /* 106ed70b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 106ed70e push edx */
  push32((uint32_t)(EDX));
  /* 106ed70f call 0x106ea010 */
  push32(0x106ed714u); f_106ea010();
  /* 106ed714 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed717 mov eax, dword ptr [0x1070f6d0] */
  EAX = (r32((uint32_t)(0x1070f6d0)));
  /* 106ed71c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106ed71f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 106ed725 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed726 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed729 push edx */
  push32((uint32_t)(EDX));
  /* 106ed72a call 0x106e66e0 */
  push32(0x106ed72fu); f_106e66e0();
  /* 106ed72f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed732 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed735 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed738 mov dword ptr [ecx + 0x1070e4dc], eax */
  w32((uint32_t)(ECX + 0x1070e4dc), (EAX));
  /* 106ed73e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 106ed744 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106ed74a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed74d mov dword ptr [eax*4 + 0x1070f6b8], edx */
  w32((uint32_t)(EAX*4 + 0x1070f6b8), (EDX));
  /* 106ed754 push 6 */
  push32((uint32_t)(0x6u));
  /* 106ed756 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 106ed75c push ecx */
  push32((uint32_t)(ECX));
  /* 106ed75d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed760 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed763 add edx, 0x1070f708 */
  { uint32_t _a=(EDX),_b=(0x1070f708u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed769 push edx */
  push32((uint32_t)(EDX));
  /* 106ed76a call 0x106ea010 */
  push32(0x106ed76fu); f_106ea010();
  /* 106ed76f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed772 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed776 jne 0x106ed783 */
  if (!C.zf) goto L_106ed783;
  /* 106ed778 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ed77e mov dword ptr [0x1070f6d0], eax */
  w32((uint32_t)(0x1070f6d0), (EAX));
L_106ed783:;
  /* 106ed783 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed787 jne 0x106ed795 */
  if (!C.zf) goto L_106ed795;
  /* 106ed789 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ed78f mov dword ptr [0x1070f6d4], ecx */
  w32((uint32_t)(0x1070f6d4), (ECX));
L_106ed795:;
  /* 106ed795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed798 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed79b call dword ptr [edx + 0x1070e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1070e4e0))), 0x106ed7a1u);
  /* 106ed7a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed7a3 je 0x106ed7dc */
  if (C.zf) goto L_106ed7dc;
  /* 106ed7a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed7a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed7ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed7ae mov dword ptr [eax + 0x1070e4dc], ecx */
  w32((uint32_t)(EAX + 0x1070e4dc), (ECX));
  /* 106ed7b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ed7b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ed7b9 push edx */
  push32((uint32_t)(EDX));
  /* 106ed7ba call 0x106e41c0 */
  push32(0x106ed7bfu); f_106e41c0();
  /* 106ed7bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed7c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed7c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ed7c8 mov dword ptr [eax*4 + 0x1070f6b8], ecx */
  w32((uint32_t)(EAX*4 + 0x1070f6b8), (ECX));
  /* 106ed7cf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ed7d2 mov dword ptr [0x1070f6d0], edx */
  w32((uint32_t)(0x1070f6d0), (EDX));
  /* 106ed7d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ed7da jmp 0x106ed7ff */
  goto L_106ed7ff;
L_106ed7dc:;
  /* 106ed7dc cmp dword ptr [ebp - 0xc], 0x1070e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1070e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed7e3 je 0x106ed7f3 */
  if (C.zf) goto L_106ed7f3;
  /* 106ed7e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ed7e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ed7ea push eax */
  push32((uint32_t)(EAX));
  /* 106ed7eb call 0x106e41c0 */
  push32(0x106ed7f0u); f_106e41c0();
  /* 106ed7f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ed7f3:;
  /* 106ed7f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed7f6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed7f9 mov eax, dword ptr [ecx + 0x1070e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1070e4dc)));
L_106ed7ff:;
  /* 106ed7ff mov esp, ebp */
  ESP = (EBP);
  /* 106ed801 pop ebp */
  EBP = (pop32());
  /* 106ed802 ret  */
  ESPCHK(0x106ed670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d810 @ 0x106ed810 (256 bytes, 72 insns) */
void f_106ed810(void) {
  FTRACE(0x106ed810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ed810 push ebp */
  push32((uint32_t)(EBP));
  /* 106ed811 mov ebp, esp */
  EBP = (ESP);
  /* 106ed813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed816 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 106ed81d cmp dword ptr [0x1070e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed824 jne 0x106ed844 */
  if (!C.zf) goto L_106ed844;
  /* 106ed826 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 106ed82b push 0x1070b070 */
  push32((uint32_t)(0x1070b070u));
  /* 106ed830 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ed832 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 106ed837 call 0x106e3730 */
  push32(0x106ed83cu); f_106e3730();
  /* 106ed83c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed83f mov dword ptr [0x1070e4dc], eax */
  w32((uint32_t)(0x1070e4dc), (EAX));
L_106ed844:;
  /* 106ed844 mov eax, dword ptr [0x1070e4dc] */
  EAX = (r32((uint32_t)(0x1070e4dc)));
  /* 106ed849 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106ed84c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106ed853 jmp 0x106ed85e */
  goto L_106ed85e;
L_106ed855:;
  /* 106ed855 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ed858 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed85b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106ed85e:;
  /* 106ed85e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ed861 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed864 mov eax, dword ptr [edx + 0x1070e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1070e4dc)));
  /* 106ed86a push eax */
  push32((uint32_t)(EAX));
  /* 106ed86b push 0x1070b07c */
  push32((uint32_t)(0x1070b07cu));
  /* 106ed870 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ed873 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed876 mov edx, dword ptr [ecx + 0x1070e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1070e4d8)));
  /* 106ed87c push edx */
  push32((uint32_t)(EDX));
  /* 106ed87d push 3 */
  push32((uint32_t)(0x3u));
  /* 106ed87f mov eax, dword ptr [0x1070e4dc] */
  EAX = (r32((uint32_t)(0x1070e4dc)));
  /* 106ed884 push eax */
  push32((uint32_t)(EAX));
  /* 106ed885 call 0x106edab0 */
  push32(0x106ed88au); f_106edab0();
  /* 106ed88a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed88d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed891 jge 0x106ed8d9 */
  if ((C.sf==C.of)) goto L_106ed8d9;
  /* 106ed893 push 0x1070b068 */
  push32((uint32_t)(0x1070b068u));
  /* 106ed898 mov ecx, dword ptr [0x1070e4dc] */
  ECX = (r32((uint32_t)(0x1070e4dc)));
  /* 106ed89e push ecx */
  push32((uint32_t)(ECX));
  /* 106ed89f call 0x106e66f0 */
  push32(0x106ed8a4u); f_106e66f0();
  /* 106ed8a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed8a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ed8aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed8ad imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed8b0 mov eax, dword ptr [edx + 0x1070e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1070e4dc)));
  /* 106ed8b6 push eax */
  push32((uint32_t)(EAX));
  /* 106ed8b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ed8ba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ed8bd mov edx, dword ptr [ecx + 0x1070e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1070e4dc)));
  /* 106ed8c3 push edx */
  push32((uint32_t)(EDX));
  /* 106ed8c4 call 0x106ef3c0 */
  push32(0x106ed8c9u); f_106ef3c0();
  /* 106ed8c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed8cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed8ce je 0x106ed8d7 */
  if (C.zf) goto L_106ed8d7;
  /* 106ed8d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106ed8d7:;
  /* 106ed8d7 jmp 0x106ed907 */
  goto L_106ed907;
L_106ed8d9:;
  /* 106ed8d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed8dd jne 0x106ed8e6 */
  if (!C.zf) goto L_106ed8e6;
  /* 106ed8df mov eax, dword ptr [0x1070e4dc] */
  EAX = (r32((uint32_t)(0x1070e4dc)));
  /* 106ed8e4 jmp 0x106ed90c */
  goto L_106ed90c;
L_106ed8e6:;
  /* 106ed8e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ed8e8 mov eax, dword ptr [0x1070e4dc] */
  EAX = (r32((uint32_t)(0x1070e4dc)));
  /* 106ed8ed push eax */
  push32((uint32_t)(EAX));
  /* 106ed8ee call 0x106e41c0 */
  push32(0x106ed8f3u); f_106e41c0();
  /* 106ed8f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed8f6 mov dword ptr [0x1070e4dc], 0 */
  w32((uint32_t)(0x1070e4dc), (0x0u));
  /* 106ed900 mov eax, dword ptr [0x1070e4f4] */
  EAX = (r32((uint32_t)(0x1070e4f4)));
  /* 106ed905 jmp 0x106ed90c */
  goto L_106ed90c;
L_106ed907:;
  /* 106ed907 jmp 0x106ed855 */
  goto L_106ed855;
L_106ed90c:;
  /* 106ed90c mov esp, ebp */
  ESP = (EBP);
  /* 106ed90e pop ebp */
  EBP = (pop32());
  /* 106ed90f ret  */
  ESPCHK(0x106ed810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x106ed910 (388 bytes, 115 insns) */
void f_106ed910(void) {
  FTRACE(0x106ed910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ed910 push ebp */
  push32((uint32_t)(EBP));
  /* 106ed911 mov ebp, esp */
  EBP = (ESP);
  /* 106ed913 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ed919 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed91d jne 0x106ed926 */
  if (!C.zf) goto L_106ed926;
  /* 106ed91f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ed921 jmp 0x106eda90 */
  goto L_106eda90;
L_106ed926:;
  /* 106ed926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed929 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ed92c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed92f jne 0x106ed980 */
  if (!C.zf) goto L_106ed980;
  /* 106ed931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed934 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106ed938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed93a jne 0x106ed980 */
  if (!C.zf) goto L_106ed980;
  /* 106ed93c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ed93f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 106ed942 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ed945 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 106ed949 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed94d je 0x106ed969 */
  if (C.zf) goto L_106ed969;
  /* 106ed94f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ed952 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 106ed957 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ed95a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 106ed960 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ed963 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_106ed969:;
  /* 106ed969 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ed96d je 0x106ed978 */
  if (C.zf) goto L_106ed978;
  /* 106ed96f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ed972 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_106ed978:;
  /* 106ed978 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ed97b jmp 0x106eda90 */
  goto L_106eda90;
L_106ed980:;
  /* 106ed980 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed983 push ecx */
  push32((uint32_t)(ECX));
  /* 106ed984 push 0x1070e450 */
  push32((uint32_t)(0x1070e450u));
  /* 106ed989 call 0x106ef3c0 */
  push32(0x106ed98eu); f_106ef3c0();
  /* 106ed98e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed991 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed993 je 0x106eda48 */
  if (C.zf) goto L_106eda48;
  /* 106ed999 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed99c push edx */
  push32((uint32_t)(EDX));
  /* 106ed99d push 0x1070e3cc */
  push32((uint32_t)(0x1070e3ccu));
  /* 106ed9a2 call 0x106ef3c0 */
  push32(0x106ed9a7u); f_106ef3c0();
  /* 106ed9a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed9aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed9ac je 0x106eda48 */
  if (C.zf) goto L_106eda48;
  /* 106ed9b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ed9b5 push eax */
  push32((uint32_t)(EAX));
  /* 106ed9b6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 106ed9bc push ecx */
  push32((uint32_t)(ECX));
  /* 106ed9bd call 0x106edb00 */
  push32(0x106ed9c2u); f_106edb00();
  /* 106ed9c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed9c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed9c7 je 0x106ed9d0 */
  if (C.zf) goto L_106ed9d0;
  /* 106ed9c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ed9cb jmp 0x106eda90 */
  goto L_106eda90;
L_106ed9d0:;
  /* 106ed9d0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 106ed9d6 push edx */
  push32((uint32_t)(EDX));
  /* 106ed9d7 push 0x1070f6e0 */
  push32((uint32_t)(0x1070f6e0u));
  /* 106ed9dc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 106ed9e2 push eax */
  push32((uint32_t)(EAX));
  /* 106ed9e3 call 0x106ef510 */
  push32(0x106ed9e8u); f_106ef510();
  /* 106ed9e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ed9eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ed9ed jne 0x106ed9f6 */
  if (!C.zf) goto L_106ed9f6;
  /* 106ed9ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ed9f1 jmp 0x106eda90 */
  goto L_106eda90;
L_106ed9f6:;
  /* 106ed9f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ed9f8 mov cx, word ptr [0x1070f6e4] */
  CX = (r16((uint32_t)(0x1070f6e4)));
  /* 106ed9ff mov dword ptr [0x1070f6e8], ecx */
  w32((uint32_t)(0x1070f6e8), (ECX));
  /* 106eda05 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 106eda0b push edx */
  push32((uint32_t)(EDX));
  /* 106eda0c push 0x1070e450 */
  push32((uint32_t)(0x1070e450u));
  /* 106eda11 call 0x106edc60 */
  push32(0x106eda16u); f_106edc60();
  /* 106eda16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eda19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eda1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106eda1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106eda21 je 0x106eda36 */
  if (C.zf) goto L_106eda36;
  /* 106eda23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eda26 push edx */
  push32((uint32_t)(EDX));
  /* 106eda27 push 0x1070e3cc */
  push32((uint32_t)(0x1070e3ccu));
  /* 106eda2c call 0x106e66e0 */
  push32(0x106eda31u); f_106e66e0();
  /* 106eda31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eda34 jmp 0x106eda48 */
  goto L_106eda48;
L_106eda36:;
  /* 106eda36 push 0x1070e450 */
  push32((uint32_t)(0x1070e450u));
  /* 106eda3b push 0x1070e3cc */
  push32((uint32_t)(0x1070e3ccu));
  /* 106eda40 call 0x106e66e0 */
  push32(0x106eda45u); f_106e66e0();
  /* 106eda45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106eda48:;
  /* 106eda48 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eda4c je 0x106eda61 */
  if (C.zf) goto L_106eda61;
  /* 106eda4e push 6 */
  push32((uint32_t)(0x6u));
  /* 106eda50 push 0x1070f6e0 */
  push32((uint32_t)(0x1070f6e0u));
  /* 106eda55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106eda58 push eax */
  push32((uint32_t)(EAX));
  /* 106eda59 call 0x106ea010 */
  push32(0x106eda5eu); f_106ea010();
  /* 106eda5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106eda61:;
  /* 106eda61 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eda65 je 0x106eda7a */
  if (C.zf) goto L_106eda7a;
  /* 106eda67 push 4 */
  push32((uint32_t)(0x4u));
  /* 106eda69 push 0x1070f6e8 */
  push32((uint32_t)(0x1070f6e8u));
  /* 106eda6e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106eda71 push ecx */
  push32((uint32_t)(ECX));
  /* 106eda72 call 0x106ea010 */
  push32(0x106eda77u); f_106ea010();
  /* 106eda77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106eda7a:;
  /* 106eda7a push 0x1070e450 */
  push32((uint32_t)(0x1070e450u));
  /* 106eda7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106eda82 push edx */
  push32((uint32_t)(EDX));
  /* 106eda83 call 0x106e66e0 */
  push32(0x106eda88u); f_106e66e0();
  /* 106eda88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eda8b mov eax, 0x1070e450 */
  EAX = (0x1070e450u);
L_106eda90:;
  /* 106eda90 mov esp, ebp */
  ESP = (EBP);
  /* 106eda92 pop ebp */
  EBP = (pop32());
  /* 106eda93 ret  */
  ESPCHK(0x106ed910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daa0 @ 0x106edaa0 (7 bytes, 5 insns) */
void f_106edaa0(void) {
  FTRACE(0x106edaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106edaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 106edaa1 mov ebp, esp */
  EBP = (ESP);
  /* 106edaa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106edaa5 pop ebp */
  EBP = (pop32());
  /* 106edaa6 ret  */
  ESPCHK(0x106edaa0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x106edab0 (79 bytes, 28 insns) */
void f_106edab0(void) {
  FTRACE(0x106edab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106edab0 push ebp */
  push32((uint32_t)(EBP));
  /* 106edab1 mov ebp, esp */
  EBP = (ESP);
  /* 106edab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106edab6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 106edab9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106edabc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106edac3 jmp 0x106edace */
  goto L_106edace;
L_106edac5:;
  /* 106edac5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106edac8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106edacb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106edace:;
  /* 106edace mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106edad1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edad4 jge 0x106edaf4 */
  if ((C.sf==C.of)) goto L_106edaf4;
  /* 106edad6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106edad9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106edadc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106edadf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106edae2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 106edae5 push edx */
  push32((uint32_t)(EDX));
  /* 106edae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edae9 push eax */
  push32((uint32_t)(EAX));
  /* 106edaea call 0x106e66f0 */
  push32(0x106edaefu); f_106e66f0();
  /* 106edaef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edaf2 jmp 0x106edac5 */
  goto L_106edac5;
L_106edaf4:;
  /* 106edaf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106edafb mov esp, ebp */
  ESP = (EBP);
  /* 106edafd pop ebp */
  EBP = (pop32());
  /* 106edafe ret  */
  ESPCHK(0x106edab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db00 @ 0x106edb00 (349 bytes, 122 insns) */
void f_106edb00(void) {
  FTRACE(0x106edb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106edb00 push ebp */
  push32((uint32_t)(EBP));
  /* 106edb01 mov ebp, esp */
  EBP = (ESP);
  /* 106edb03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106edb06 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 106edb0b push 0 */
  push32((uint32_t)(0x0u));
  /* 106edb0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edb10 push eax */
  push32((uint32_t)(EAX));
  /* 106edb11 call 0x106e74a0 */
  push32(0x106edb16u); f_106e74a0();
  /* 106edb16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edb19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edb1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106edb1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106edb21 jne 0x106edb2a */
  if (!C.zf) goto L_106edb2a;
  /* 106edb23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106edb25 jmp 0x106edc59 */
  goto L_106edc59;
L_106edb2a:;
  /* 106edb2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edb2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106edb30 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edb33 jne 0x106edb60 */
  if (!C.zf) goto L_106edb60;
  /* 106edb35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edb38 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106edb3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106edb3e je 0x106edb60 */
  if (C.zf) goto L_106edb60;
  /* 106edb40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edb43 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106edb46 push ecx */
  push32((uint32_t)(ECX));
  /* 106edb47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edb4a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106edb50 push edx */
  push32((uint32_t)(EDX));
  /* 106edb51 call 0x106e66e0 */
  push32(0x106edb56u); f_106e66e0();
  /* 106edb56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edb59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106edb5b jmp 0x106edc59 */
  goto L_106edc59;
L_106edb60:;
  /* 106edb60 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106edb67 jmp 0x106edb72 */
  goto L_106edb72;
L_106edb69:;
  /* 106edb69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106edb6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106edb6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106edb72:;
  /* 106edb72 push 0x1070b080 */
  push32((uint32_t)(0x1070b080u));
  /* 106edb77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edb7a push ecx */
  push32((uint32_t)(ECX));
  /* 106edb7b call 0x106ef450 */
  push32(0x106edb80u); f_106ef450();
  /* 106edb80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edb83 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106edb86 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edb8a jne 0x106edb94 */
  if (!C.zf) goto L_106edb94;
  /* 106edb8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106edb8f jmp 0x106edc59 */
  goto L_106edc59;
L_106edb94:;
  /* 106edb94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edb97 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106edb9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106edb9c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 106edb9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edba3 jne 0x106edbca */
  if (!C.zf) goto L_106edbca;
  /* 106edba5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edba9 jge 0x106edbca */
  if ((C.sf==C.of)) goto L_106edbca;
  /* 106edbab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106edbaf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edbb2 je 0x106edbca */
  if (C.zf) goto L_106edbca;
  /* 106edbb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106edbb7 push edx */
  push32((uint32_t)(EDX));
  /* 106edbb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edbbb push eax */
  push32((uint32_t)(EAX));
  /* 106edbbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edbbf push ecx */
  push32((uint32_t)(ECX));
  /* 106edbc0 call 0x106e6f50 */
  push32(0x106edbc5u); f_106e6f50();
  /* 106edbc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edbc8 jmp 0x106edc30 */
  goto L_106edc30;
L_106edbca:;
  /* 106edbca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edbce jne 0x106edbf8 */
  if (!C.zf) goto L_106edbf8;
  /* 106edbd0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edbd4 jge 0x106edbf8 */
  if ((C.sf==C.of)) goto L_106edbf8;
  /* 106edbd6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106edbda cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edbdd je 0x106edbf8 */
  if (C.zf) goto L_106edbf8;
  /* 106edbdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106edbe2 push eax */
  push32((uint32_t)(EAX));
  /* 106edbe3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edbe6 push ecx */
  push32((uint32_t)(ECX));
  /* 106edbe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edbea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106edbed push edx */
  push32((uint32_t)(EDX));
  /* 106edbee call 0x106e6f50 */
  push32(0x106edbf3u); f_106e6f50();
  /* 106edbf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edbf6 jmp 0x106edc30 */
  goto L_106edc30;
L_106edbf8:;
  /* 106edbf8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edbfc jne 0x106edc2b */
  if (!C.zf) goto L_106edc2b;
  /* 106edbfe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106edc02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106edc04 je 0x106edc0f */
  if (C.zf) goto L_106edc0f;
  /* 106edc06 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106edc0a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edc0d jne 0x106edc2b */
  if (!C.zf) goto L_106edc2b;
L_106edc0f:;
  /* 106edc0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106edc12 push edx */
  push32((uint32_t)(EDX));
  /* 106edc13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edc16 push eax */
  push32((uint32_t)(EAX));
  /* 106edc17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edc1a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106edc20 push ecx */
  push32((uint32_t)(ECX));
  /* 106edc21 call 0x106e6f50 */
  push32(0x106edc26u); f_106e6f50();
  /* 106edc26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edc29 jmp 0x106edc30 */
  goto L_106edc30;
L_106edc2b:;
  /* 106edc2b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106edc2e jmp 0x106edc59 */
  goto L_106edc59;
L_106edc30:;
  /* 106edc30 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106edc34 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edc37 jne 0x106edc3b */
  if (!C.zf) goto L_106edc3b;
  /* 106edc39 jmp 0x106edc57 */
  goto L_106edc57;
L_106edc3b:;
  /* 106edc3b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106edc3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106edc41 jne 0x106edc45 */
  if (!C.zf) goto L_106edc45;
  /* 106edc43 jmp 0x106edc57 */
  goto L_106edc57;
L_106edc45:;
  /* 106edc45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106edc48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edc4b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 106edc4f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 106edc52 jmp 0x106edb69 */
  goto L_106edb69;
L_106edc57:;
  /* 106edc57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106edc59:;
  /* 106edc59 mov esp, ebp */
  ESP = (EBP);
  /* 106edc5b pop ebp */
  EBP = (pop32());
  /* 106edc5c ret  */
  ESPCHK(0x106edb00u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x106edc60 (101 bytes, 36 insns) */
void f_106edc60(void) {
  FTRACE(0x106edc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106edc60 push ebp */
  push32((uint32_t)(EBP));
  /* 106edc61 mov ebp, esp */
  EBP = (ESP);
  /* 106edc63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edc66 push eax */
  push32((uint32_t)(EAX));
  /* 106edc67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edc6a push ecx */
  push32((uint32_t)(ECX));
  /* 106edc6b call 0x106e66e0 */
  push32(0x106edc70u); f_106e66e0();
  /* 106edc70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edc73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edc76 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 106edc7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106edc7c je 0x106edc98 */
  if (C.zf) goto L_106edc98;
  /* 106edc7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edc81 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106edc84 push ecx */
  push32((uint32_t)(ECX));
  /* 106edc85 push 0x1070b088 */
  push32((uint32_t)(0x1070b088u));
  /* 106edc8a push 2 */
  push32((uint32_t)(0x2u));
  /* 106edc8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edc8f push edx */
  push32((uint32_t)(EDX));
  /* 106edc90 call 0x106edab0 */
  push32(0x106edc95u); f_106edab0();
  /* 106edc95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106edc98:;
  /* 106edc98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edc9b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 106edca2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106edca4 je 0x106edcc3 */
  if (C.zf) goto L_106edcc3;
  /* 106edca6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106edca9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106edcaf push edx */
  push32((uint32_t)(EDX));
  /* 106edcb0 push 0x1070b084 */
  push32((uint32_t)(0x1070b084u));
  /* 106edcb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106edcb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edcba push eax */
  push32((uint32_t)(EAX));
  /* 106edcbb call 0x106edab0 */
  push32(0x106edcc0u); f_106edab0();
  /* 106edcc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106edcc3:;
  /* 106edcc3 pop ebp */
  EBP = (pop32());
  /* 106edcc4 ret  */
  ESPCHK(0x106edc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcd0 @ 0x106edcd0 (130 bytes, 50 insns) */
void f_106edcd0(void) {
  FTRACE(0x106edcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106edcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 106edcd1 mov ebp, esp */
  EBP = (ESP);
  /* 106edcd3 push ecx */
  push32((uint32_t)(ECX));
  /* 106edcd4 push ebx */
  push32((uint32_t)(EBX));
  /* 106edcd5 push esi */
  push32((uint32_t)(ESI));
  /* 106edcd6 push edi */
  push32((uint32_t)(EDI));
  /* 106edcd7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106edcde:;
  /* 106edcde cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edce2 jne 0x106edd02 */
  if (!C.zf) goto L_106edd02;
  /* 106edce4 push 0x1070b098 */
  push32((uint32_t)(0x1070b098u));
  /* 106edce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106edceb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 106edced push 0x1070b08c */
  push32((uint32_t)(0x1070b08cu));
  /* 106edcf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106edcf4 call 0x106e27f0 */
  push32(0x106edcf9u); f_106e27f0();
  /* 106edcf9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edcfc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edcff jne 0x106edd02 */
  if (!C.zf) goto L_106edd02;
  /* 106edd01 int3  */
  x86_unimpl("int3 @ 0x106edd01");
L_106edd02:;
  /* 106edd02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106edd04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106edd06 jne 0x106edcde */
  if (!C.zf) goto L_106edcde;
  /* 106edd08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edd0b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106edd0e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 106edd11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106edd13 je 0x106edd21 */
  if (C.zf) goto L_106edd21;
  /* 106edd15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edd18 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 106edd1f jmp 0x106edd48 */
  goto L_106edd48;
L_106edd21:;
  /* 106edd21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edd24 push ecx */
  push32((uint32_t)(ECX));
  /* 106edd25 call 0x106ec540 */
  push32(0x106edd2au); f_106ec540();
  /* 106edd2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edd2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edd30 push edx */
  push32((uint32_t)(EDX));
  /* 106edd31 call 0x106edd60 */
  push32(0x106edd36u); f_106edd60();
  /* 106edd36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edd39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106edd3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edd3f push eax */
  push32((uint32_t)(EAX));
  /* 106edd40 call 0x106ec5b0 */
  push32(0x106edd45u); f_106ec5b0();
  /* 106edd45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106edd48:;
  /* 106edd48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106edd4b pop edi */
  EDI = (pop32());
  /* 106edd4c pop esi */
  ESI = (pop32());
  /* 106edd4d pop ebx */
  EBX = (pop32());
  /* 106edd4e mov esp, ebp */
  ESP = (EBP);
  /* 106edd50 pop ebp */
  EBP = (pop32());
  /* 106edd51 ret  */
  ESPCHK(0x106edcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd60 @ 0x106edd60 (190 bytes, 67 insns) */
void f_106edd60(void) {
  FTRACE(0x106edd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106edd60 push ebp */
  push32((uint32_t)(EBP));
  /* 106edd61 mov ebp, esp */
  EBP = (ESP);
  /* 106edd63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106edd66 push ebx */
  push32((uint32_t)(EBX));
  /* 106edd67 push esi */
  push32((uint32_t)(ESI));
  /* 106edd68 push edi */
  push32((uint32_t)(EDI));
  /* 106edd69 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106edd70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edd73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106edd76:;
  /* 106edd76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edd7a jne 0x106edd9a */
  if (!C.zf) goto L_106edd9a;
  /* 106edd7c push 0x1070af3c */
  push32((uint32_t)(0x1070af3cu));
  /* 106edd81 push 0 */
  push32((uint32_t)(0x0u));
  /* 106edd83 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 106edd85 push 0x1070b08c */
  push32((uint32_t)(0x1070b08cu));
  /* 106edd8a push 2 */
  push32((uint32_t)(0x2u));
  /* 106edd8c call 0x106e27f0 */
  push32(0x106edd91u); f_106e27f0();
  /* 106edd91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edd94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edd97 jne 0x106edd9a */
  if (!C.zf) goto L_106edd9a;
  /* 106edd99 int3  */
  x86_unimpl("int3 @ 0x106edd99");
L_106edd9a:;
  /* 106edd9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106edd9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106edd9e jne 0x106edd76 */
  if (!C.zf) goto L_106edd76;
  /* 106edda0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106edda3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106edda6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 106eddab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eddad je 0x106ede0a */
  if (C.zf) goto L_106ede0a;
  /* 106eddaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eddb2 push ecx */
  push32((uint32_t)(ECX));
  /* 106eddb3 call 0x106ed060 */
  push32(0x106eddb8u); f_106ed060();
  /* 106eddb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eddbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106eddbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eddc1 push edx */
  push32((uint32_t)(EDX));
  /* 106eddc2 call 0x106f03e0 */
  push32(0x106eddc7u); f_106f03e0();
  /* 106eddc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eddca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eddcd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106eddd0 push ecx */
  push32((uint32_t)(ECX));
  /* 106eddd1 call 0x106f02b0 */
  push32(0x106eddd6u); f_106f02b0();
  /* 106eddd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eddd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106edddb jge 0x106edde6 */
  if ((C.sf==C.of)) goto L_106edde6;
  /* 106edddd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106edde4 jmp 0x106ede0a */
  goto L_106ede0a;
L_106edde6:;
  /* 106edde6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106edde9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edded je 0x106ede0a */
  if (C.zf) goto L_106ede0a;
  /* 106eddef push 2 */
  push32((uint32_t)(0x2u));
  /* 106eddf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eddf4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106eddf7 push ecx */
  push32((uint32_t)(ECX));
  /* 106eddf8 call 0x106e41c0 */
  push32(0x106eddfdu); f_106e41c0();
  /* 106eddfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ede00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ede03 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_106ede0a:;
  /* 106ede0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ede0d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 106ede14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ede17 pop edi */
  EDI = (pop32());
  /* 106ede18 pop esi */
  ESI = (pop32());
  /* 106ede19 pop ebx */
  EBX = (pop32());
  /* 106ede1a mov esp, ebp */
  ESP = (EBP);
  /* 106ede1c pop ebp */
  EBP = (pop32());
  /* 106ede1d ret  */
  ESPCHK(0x106edd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de20 @ 0x106ede20 (210 bytes, 63 insns) */
void f_106ede20(void) {
  FTRACE(0x106ede20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ede20 push ebp */
  push32((uint32_t)(EBP));
  /* 106ede21 mov ebp, esp */
  EBP = (ESP);
  /* 106ede23 push ecx */
  push32((uint32_t)(ECX));
  /* 106ede24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ede27 cmp eax, dword ptr [0x10710fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10710fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ede2d jae 0x106ede51 */
  if (!C.cf) goto L_106ede51;
  /* 106ede2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ede32 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ede35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ede38 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ede3b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ede3e mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106ede45 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106ede4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106ede4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ede4f jne 0x106ede64 */
  if (!C.zf) goto L_106ede64;
L_106ede51:;
  /* 106ede51 call 0x106eb600 */
  push32(0x106ede56u); f_106eb600();
  /* 106ede56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ede5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ede5f jmp 0x106edeee */
  goto L_106edeee;
L_106ede64:;
  /* 106ede64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ede67 push edx */
  push32((uint32_t)(EDX));
  /* 106ede68 call 0x106ece20 */
  push32(0x106ede6du); f_106ece20();
  /* 106ede6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ede70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ede73 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ede76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ede79 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ede7c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ede7f mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106ede86 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 106ede8b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106ede8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ede90 je 0x106edecd */
  if (C.zf) goto L_106edecd;
  /* 106ede92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ede95 push ecx */
  push32((uint32_t)(ECX));
  /* 106ede96 call 0x106ecca0 */
  push32(0x106ede9bu); f_106ecca0();
  /* 106ede9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ede9e push eax */
  push32((uint32_t)(EAX));
  /* 106ede9f call dword ptr [0x10712294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712294))), 0x106edea5u);
  /* 106edea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106edea7 jne 0x106edeb4 */
  if (!C.zf) goto L_106edeb4;
  /* 106edea9 call dword ptr [0x1071230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071230c))), 0x106edeafu);
  /* 106edeaf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106edeb2 jmp 0x106edebb */
  goto L_106edebb;
L_106edeb4:;
  /* 106edeb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106edebb:;
  /* 106edebb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edebf jne 0x106edec3 */
  if (!C.zf) goto L_106edec3;
  /* 106edec1 jmp 0x106ededf */
  goto L_106ededf;
L_106edec3:;
  /* 106edec3 call 0x106eb610 */
  push32(0x106edec8u); f_106eb610();
  /* 106edec8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106edecb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106edecd:;
  /* 106edecd call 0x106eb600 */
  push32(0x106eded2u); f_106eb600();
  /* 106eded2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106eded8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106ededf:;
  /* 106ededf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106edee2 push eax */
  push32((uint32_t)(EAX));
  /* 106edee3 call 0x106eceb0 */
  push32(0x106edee8u); f_106eceb0();
  /* 106edee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edeeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106edeee:;
  /* 106edeee mov esp, ebp */
  ESP = (EBP);
  /* 106edef0 pop ebp */
  EBP = (pop32());
  /* 106edef1 ret  */
  ESPCHK(0x106ede20u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x106edf00 (219 bytes, 64 insns) */
void f_106edf00(void) {
  FTRACE(0x106edf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106edf00 push ebp */
  push32((uint32_t)(EBP));
  /* 106edf01 mov ebp, esp */
  EBP = (ESP);
  /* 106edf03 push ecx */
  push32((uint32_t)(ECX));
  /* 106edf04 cmp dword ptr [0x1070f6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edf0b je 0x106edfa1 */
  if (C.zf) goto L_106edfa1;
  /* 106edf11 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 106edf13 push 0x1070b0a8 */
  push32((uint32_t)(0x1070b0a8u));
  /* 106edf18 push 2 */
  push32((uint32_t)(0x2u));
  /* 106edf1a push 0xac */
  push32((uint32_t)(0xacu));
  /* 106edf1f push 1 */
  push32((uint32_t)(0x1u));
  /* 106edf21 call 0x106e3b40 */
  push32(0x106edf26u); f_106e3b40();
  /* 106edf26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edf29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106edf2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106edf30 jne 0x106edf3c */
  if (!C.zf) goto L_106edf3c;
  /* 106edf32 mov eax, 1 */
  EAX = (0x1u);
  /* 106edf37 jmp 0x106edfd7 */
  goto L_106edfd7;
L_106edf3c:;
  /* 106edf3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106edf3f push eax */
  push32((uint32_t)(EAX));
  /* 106edf40 call 0x106edfe0 */
  push32(0x106edf45u); f_106edfe0();
  /* 106edf45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edf48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106edf4a je 0x106edf6d */
  if (C.zf) goto L_106edf6d;
  /* 106edf4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106edf4f push ecx */
  push32((uint32_t)(ECX));
  /* 106edf50 call 0x106ee570 */
  push32(0x106edf55u); f_106ee570();
  /* 106edf55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edf58 push 2 */
  push32((uint32_t)(0x2u));
  /* 106edf5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106edf5d push edx */
  push32((uint32_t)(EDX));
  /* 106edf5e call 0x106e41c0 */
  push32(0x106edf63u); f_106e41c0();
  /* 106edf63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edf66 mov eax, 1 */
  EAX = (0x1u);
  /* 106edf6b jmp 0x106edfd7 */
  goto L_106edfd7;
L_106edf6d:;
  /* 106edf6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106edf70 mov dword ptr [0x1070ec98], eax */
  w32((uint32_t)(0x1070ec98), (EAX));
  /* 106edf75 mov ecx, dword ptr [0x1070f6ec] */
  ECX = (r32((uint32_t)(0x1070f6ec)));
  /* 106edf7b push ecx */
  push32((uint32_t)(ECX));
  /* 106edf7c call 0x106ee570 */
  push32(0x106edf81u); f_106ee570();
  /* 106edf81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edf84 push 2 */
  push32((uint32_t)(0x2u));
  /* 106edf86 mov edx, dword ptr [0x1070f6ec] */
  EDX = (r32((uint32_t)(0x1070f6ec)));
  /* 106edf8c push edx */
  push32((uint32_t)(EDX));
  /* 106edf8d call 0x106e41c0 */
  push32(0x106edf92u); f_106e41c0();
  /* 106edf92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edf95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106edf98 mov dword ptr [0x1070f6ec], eax */
  w32((uint32_t)(0x1070f6ec), (EAX));
  /* 106edf9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106edf9f jmp 0x106edfd7 */
  goto L_106edfd7;
L_106edfa1:;
  /* 106edfa1 mov dword ptr [0x1070ec98], 0x1070eca0 */
  w32((uint32_t)(0x1070ec98), (0x1070eca0u));
  /* 106edfab mov ecx, dword ptr [0x1070f6ec] */
  ECX = (r32((uint32_t)(0x1070f6ec)));
  /* 106edfb1 push ecx */
  push32((uint32_t)(ECX));
  /* 106edfb2 call 0x106ee570 */
  push32(0x106edfb7u); f_106ee570();
  /* 106edfb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edfba push 2 */
  push32((uint32_t)(0x2u));
  /* 106edfbc mov edx, dword ptr [0x1070f6ec] */
  EDX = (r32((uint32_t)(0x1070f6ec)));
  /* 106edfc2 push edx */
  push32((uint32_t)(EDX));
  /* 106edfc3 call 0x106e41c0 */
  push32(0x106edfc8u); f_106e41c0();
  /* 106edfc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106edfcb mov dword ptr [0x1070f6ec], 0 */
  w32((uint32_t)(0x1070f6ec), (0x0u));
  /* 106edfd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106edfd7:;
  /* 106edfd7 mov esp, ebp */
  ESP = (EBP);
  /* 106edfd9 pop ebp */
  EBP = (pop32());
  /* 106edfda ret  */
  ESPCHK(0x106edf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfe0 @ 0x106edfe0 (1423 bytes, 533 insns) */
void f_106edfe0(void) {
  FTRACE(0x106edfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106edfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 106edfe1 mov ebp, esp */
  EBP = (ESP);
  /* 106edfe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106edfe6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106edfed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106edfef mov ax, word ptr [0x1070f726] */
  AX = (r16((uint32_t)(0x1070f726)));
  /* 106edff5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106edff8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106edffa mov cx, word ptr [0x1070f728] */
  CX = (r16((uint32_t)(0x1070f728)));
  /* 106ee001 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ee004 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ee008 jne 0x106ee012 */
  if (!C.zf) goto L_106ee012;
  /* 106ee00a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ee00d jmp 0x106ee56b */
  goto L_106ee56b;
L_106ee012:;
  /* 106ee012 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee015 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee018 push edx */
  push32((uint32_t)(EDX));
  /* 106ee019 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 106ee01b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee01e push eax */
  push32((uint32_t)(EAX));
  /* 106ee01f push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee021 call 0x106f18f0 */
  push32(0x106ee026u); f_106f18f0();
  /* 106ee026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee029 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee02c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee02e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee034 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee037 push edx */
  push32((uint32_t)(EDX));
  /* 106ee038 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 106ee03a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee03d push eax */
  push32((uint32_t)(EAX));
  /* 106ee03e push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee040 call 0x106f18f0 */
  push32(0x106ee045u); f_106f18f0();
  /* 106ee045 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee048 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee04b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee04d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee050 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee053 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee056 push edx */
  push32((uint32_t)(EDX));
  /* 106ee057 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 106ee059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee05c push eax */
  push32((uint32_t)(EAX));
  /* 106ee05d push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee05f call 0x106f18f0 */
  push32(0x106ee064u); f_106f18f0();
  /* 106ee064 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee067 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee06a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee06c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee06f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee072 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee075 push edx */
  push32((uint32_t)(EDX));
  /* 106ee076 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 106ee078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee07b push eax */
  push32((uint32_t)(EAX));
  /* 106ee07c push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee07e call 0x106f18f0 */
  push32(0x106ee083u); f_106f18f0();
  /* 106ee083 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee086 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee089 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee08b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee08e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee091 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee094 push edx */
  push32((uint32_t)(EDX));
  /* 106ee095 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 106ee097 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee09a push eax */
  push32((uint32_t)(EAX));
  /* 106ee09b push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee09d call 0x106f18f0 */
  push32(0x106ee0a2u); f_106f18f0();
  /* 106ee0a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee0a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee0a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee0aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee0ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee0b0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee0b3 push edx */
  push32((uint32_t)(EDX));
  /* 106ee0b4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 106ee0b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee0b9 push eax */
  push32((uint32_t)(EAX));
  /* 106ee0ba push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee0bc call 0x106f18f0 */
  push32(0x106ee0c1u); f_106f18f0();
  /* 106ee0c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee0c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee0c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee0c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee0cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee0cf push edx */
  push32((uint32_t)(EDX));
  /* 106ee0d0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 106ee0d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee0d5 push eax */
  push32((uint32_t)(EAX));
  /* 106ee0d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee0d8 call 0x106f18f0 */
  push32(0x106ee0ddu); f_106f18f0();
  /* 106ee0dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee0e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee0e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee0e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee0e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee0eb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee0ee push edx */
  push32((uint32_t)(EDX));
  /* 106ee0ef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 106ee0f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee0f4 push eax */
  push32((uint32_t)(EAX));
  /* 106ee0f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee0f7 call 0x106f18f0 */
  push32(0x106ee0fcu); f_106f18f0();
  /* 106ee0fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee0ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee102 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee104 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee107 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee10a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee10d push edx */
  push32((uint32_t)(EDX));
  /* 106ee10e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 106ee110 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee113 push eax */
  push32((uint32_t)(EAX));
  /* 106ee114 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee116 call 0x106f18f0 */
  push32(0x106ee11bu); f_106f18f0();
  /* 106ee11b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee11e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee121 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee123 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee126 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee129 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee12c push edx */
  push32((uint32_t)(EDX));
  /* 106ee12d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 106ee12f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee132 push eax */
  push32((uint32_t)(EAX));
  /* 106ee133 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee135 call 0x106f18f0 */
  push32(0x106ee13au); f_106f18f0();
  /* 106ee13a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee13d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee140 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee142 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee148 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee14b push edx */
  push32((uint32_t)(EDX));
  /* 106ee14c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 106ee14e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee151 push eax */
  push32((uint32_t)(EAX));
  /* 106ee152 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee154 call 0x106f18f0 */
  push32(0x106ee159u); f_106f18f0();
  /* 106ee159 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee15c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee15f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee161 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee167 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee16a push edx */
  push32((uint32_t)(EDX));
  /* 106ee16b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 106ee16d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee170 push eax */
  push32((uint32_t)(EAX));
  /* 106ee171 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee173 call 0x106f18f0 */
  push32(0x106ee178u); f_106f18f0();
  /* 106ee178 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee17b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee17e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee180 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee183 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee186 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee189 push edx */
  push32((uint32_t)(EDX));
  /* 106ee18a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 106ee18c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee18f push eax */
  push32((uint32_t)(EAX));
  /* 106ee190 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee192 call 0x106f18f0 */
  push32(0x106ee197u); f_106f18f0();
  /* 106ee197 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee19a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee19d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee19f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee1a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee1a5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee1a8 push edx */
  push32((uint32_t)(EDX));
  /* 106ee1a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 106ee1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee1ae push eax */
  push32((uint32_t)(EAX));
  /* 106ee1af push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee1b1 call 0x106f18f0 */
  push32(0x106ee1b6u); f_106f18f0();
  /* 106ee1b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee1b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee1bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee1be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee1c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee1c4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee1c7 push edx */
  push32((uint32_t)(EDX));
  /* 106ee1c8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 106ee1ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee1cd push eax */
  push32((uint32_t)(EAX));
  /* 106ee1ce push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee1d0 call 0x106f18f0 */
  push32(0x106ee1d5u); f_106f18f0();
  /* 106ee1d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee1d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee1db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee1dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee1e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee1e3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee1e6 push edx */
  push32((uint32_t)(EDX));
  /* 106ee1e7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 106ee1e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee1ec push eax */
  push32((uint32_t)(EAX));
  /* 106ee1ed push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee1ef call 0x106f18f0 */
  push32(0x106ee1f4u); f_106f18f0();
  /* 106ee1f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee1f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee1fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee1fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee1ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee202 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee205 push edx */
  push32((uint32_t)(EDX));
  /* 106ee206 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 106ee208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee20b push eax */
  push32((uint32_t)(EAX));
  /* 106ee20c push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee20e call 0x106f18f0 */
  push32(0x106ee213u); f_106f18f0();
  /* 106ee213 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee216 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee219 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee21b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee21e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee221 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee224 push edx */
  push32((uint32_t)(EDX));
  /* 106ee225 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 106ee227 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee22a push eax */
  push32((uint32_t)(EAX));
  /* 106ee22b push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee22d call 0x106f18f0 */
  push32(0x106ee232u); f_106f18f0();
  /* 106ee232 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee235 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee238 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee23a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee23d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee240 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee243 push edx */
  push32((uint32_t)(EDX));
  /* 106ee244 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 106ee246 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee249 push eax */
  push32((uint32_t)(EAX));
  /* 106ee24a push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee24c call 0x106f18f0 */
  push32(0x106ee251u); f_106f18f0();
  /* 106ee251 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee254 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee257 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee259 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee25c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee25f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee262 push edx */
  push32((uint32_t)(EDX));
  /* 106ee263 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 106ee265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee268 push eax */
  push32((uint32_t)(EAX));
  /* 106ee269 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee26b call 0x106f18f0 */
  push32(0x106ee270u); f_106f18f0();
  /* 106ee270 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee273 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee276 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee278 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee27b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee27e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee281 push edx */
  push32((uint32_t)(EDX));
  /* 106ee282 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 106ee284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee287 push eax */
  push32((uint32_t)(EAX));
  /* 106ee288 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee28a call 0x106f18f0 */
  push32(0x106ee28fu); f_106f18f0();
  /* 106ee28f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee292 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee295 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee297 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee29a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee29d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee2a0 push edx */
  push32((uint32_t)(EDX));
  /* 106ee2a1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 106ee2a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee2a6 push eax */
  push32((uint32_t)(EAX));
  /* 106ee2a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee2a9 call 0x106f18f0 */
  push32(0x106ee2aeu); f_106f18f0();
  /* 106ee2ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee2b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee2b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee2b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee2b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee2bc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee2bf push edx */
  push32((uint32_t)(EDX));
  /* 106ee2c0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 106ee2c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee2c5 push eax */
  push32((uint32_t)(EAX));
  /* 106ee2c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee2c8 call 0x106f18f0 */
  push32(0x106ee2cdu); f_106f18f0();
  /* 106ee2cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee2d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee2d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee2d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee2d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee2db add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee2de push edx */
  push32((uint32_t)(EDX));
  /* 106ee2df push 0x4d */
  push32((uint32_t)(0x4du));
  /* 106ee2e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee2e4 push eax */
  push32((uint32_t)(EAX));
  /* 106ee2e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee2e7 call 0x106f18f0 */
  push32(0x106ee2ecu); f_106f18f0();
  /* 106ee2ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee2ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee2f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee2f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee2f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee2fa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee2fd push edx */
  push32((uint32_t)(EDX));
  /* 106ee2fe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 106ee300 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee303 push eax */
  push32((uint32_t)(EAX));
  /* 106ee304 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee306 call 0x106f18f0 */
  push32(0x106ee30bu); f_106f18f0();
  /* 106ee30b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee30e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee311 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee313 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee316 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee319 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee31c push edx */
  push32((uint32_t)(EDX));
  /* 106ee31d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 106ee31f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee322 push eax */
  push32((uint32_t)(EAX));
  /* 106ee323 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee325 call 0x106f18f0 */
  push32(0x106ee32au); f_106f18f0();
  /* 106ee32a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee32d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee330 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee332 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee335 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee338 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee33b push edx */
  push32((uint32_t)(EDX));
  /* 106ee33c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 106ee33e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee341 push eax */
  push32((uint32_t)(EAX));
  /* 106ee342 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee344 call 0x106f18f0 */
  push32(0x106ee349u); f_106f18f0();
  /* 106ee349 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee34c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee34f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee351 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee357 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee35a push edx */
  push32((uint32_t)(EDX));
  /* 106ee35b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 106ee35d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee360 push eax */
  push32((uint32_t)(EAX));
  /* 106ee361 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee363 call 0x106f18f0 */
  push32(0x106ee368u); f_106f18f0();
  /* 106ee368 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee36b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee36e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee370 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee373 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee376 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee379 push edx */
  push32((uint32_t)(EDX));
  /* 106ee37a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 106ee37c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee37f push eax */
  push32((uint32_t)(EAX));
  /* 106ee380 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee382 call 0x106f18f0 */
  push32(0x106ee387u); f_106f18f0();
  /* 106ee387 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee38a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee38d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee38f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee392 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee395 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee398 push edx */
  push32((uint32_t)(EDX));
  /* 106ee399 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 106ee39b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee39e push eax */
  push32((uint32_t)(EAX));
  /* 106ee39f push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee3a1 call 0x106f18f0 */
  push32(0x106ee3a6u); f_106f18f0();
  /* 106ee3a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee3a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee3ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee3ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee3b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee3b4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee3b7 push edx */
  push32((uint32_t)(EDX));
  /* 106ee3b8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 106ee3ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee3bd push eax */
  push32((uint32_t)(EAX));
  /* 106ee3be push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee3c0 call 0x106f18f0 */
  push32(0x106ee3c5u); f_106f18f0();
  /* 106ee3c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee3c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee3cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee3cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee3d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee3d3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee3d6 push edx */
  push32((uint32_t)(EDX));
  /* 106ee3d7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 106ee3d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee3dc push eax */
  push32((uint32_t)(EAX));
  /* 106ee3dd push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee3df call 0x106f18f0 */
  push32(0x106ee3e4u); f_106f18f0();
  /* 106ee3e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee3e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee3ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee3ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee3ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee3f2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee3f8 push edx */
  push32((uint32_t)(EDX));
  /* 106ee3f9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 106ee3fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee3fe push eax */
  push32((uint32_t)(EAX));
  /* 106ee3ff push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee401 call 0x106f18f0 */
  push32(0x106ee406u); f_106f18f0();
  /* 106ee406 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee409 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee40c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee40e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee411 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee414 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee41a push edx */
  push32((uint32_t)(EDX));
  /* 106ee41b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 106ee41d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee420 push eax */
  push32((uint32_t)(EAX));
  /* 106ee421 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee423 call 0x106f18f0 */
  push32(0x106ee428u); f_106f18f0();
  /* 106ee428 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee42b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee42e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee430 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee433 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee436 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee43c push edx */
  push32((uint32_t)(EDX));
  /* 106ee43d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 106ee43f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee442 push eax */
  push32((uint32_t)(EAX));
  /* 106ee443 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee445 call 0x106f18f0 */
  push32(0x106ee44au); f_106f18f0();
  /* 106ee44a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee44d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee450 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee452 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee455 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee458 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee45e push edx */
  push32((uint32_t)(EDX));
  /* 106ee45f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 106ee461 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee464 push eax */
  push32((uint32_t)(EAX));
  /* 106ee465 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee467 call 0x106f18f0 */
  push32(0x106ee46cu); f_106f18f0();
  /* 106ee46c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee46f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee472 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee474 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee477 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee47a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee480 push edx */
  push32((uint32_t)(EDX));
  /* 106ee481 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 106ee483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee486 push eax */
  push32((uint32_t)(EAX));
  /* 106ee487 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee489 call 0x106f18f0 */
  push32(0x106ee48eu); f_106f18f0();
  /* 106ee48e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee491 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee494 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee496 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee499 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee49c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee4a2 push edx */
  push32((uint32_t)(EDX));
  /* 106ee4a3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 106ee4a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee4a8 push eax */
  push32((uint32_t)(EAX));
  /* 106ee4a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee4ab call 0x106f18f0 */
  push32(0x106ee4b0u); f_106f18f0();
  /* 106ee4b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee4b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee4b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee4b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee4bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee4be add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee4c4 push edx */
  push32((uint32_t)(EDX));
  /* 106ee4c5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 106ee4c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee4ca push eax */
  push32((uint32_t)(EAX));
  /* 106ee4cb push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee4cd call 0x106f18f0 */
  push32(0x106ee4d2u); f_106f18f0();
  /* 106ee4d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee4d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee4d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee4da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee4dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee4e0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee4e6 push edx */
  push32((uint32_t)(EDX));
  /* 106ee4e7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 106ee4e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee4ec push eax */
  push32((uint32_t)(EAX));
  /* 106ee4ed push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee4ef call 0x106f18f0 */
  push32(0x106ee4f4u); f_106f18f0();
  /* 106ee4f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee4f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee4fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee4fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee4ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee502 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee508 push edx */
  push32((uint32_t)(EDX));
  /* 106ee509 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 106ee50b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ee50e push eax */
  push32((uint32_t)(EAX));
  /* 106ee50f push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee511 call 0x106f18f0 */
  push32(0x106ee516u); f_106f18f0();
  /* 106ee516 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee519 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee51c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee51e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee521 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee524 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee52a push edx */
  push32((uint32_t)(EDX));
  /* 106ee52b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106ee52d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ee530 push eax */
  push32((uint32_t)(EAX));
  /* 106ee531 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee533 call 0x106f18f0 */
  push32(0x106ee538u); f_106f18f0();
  /* 106ee538 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee53b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee53e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee543 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee546 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee54c push edx */
  push32((uint32_t)(EDX));
  /* 106ee54d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 106ee552 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ee555 push eax */
  push32((uint32_t)(EAX));
  /* 106ee556 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee558 call 0x106f18f0 */
  push32(0x106ee55du); f_106f18f0();
  /* 106ee55d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee560 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ee563 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee565 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ee568 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_106ee56b:;
  /* 106ee56b mov esp, ebp */
  ESP = (EBP);
  /* 106ee56d pop ebp */
  EBP = (pop32());
  /* 106ee56e ret  */
  ESPCHK(0x106edfe0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x106ee570 (779 bytes, 265 insns) */
void f_106ee570(void) {
  FTRACE(0x106ee570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ee570 push ebp */
  push32((uint32_t)(EBP));
  /* 106ee571 mov ebp, esp */
  EBP = (ESP);
  /* 106ee573 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ee577 jne 0x106ee57e */
  if (!C.zf) goto L_106ee57e;
  /* 106ee579 jmp 0x106ee879 */
  goto L_106ee879;
L_106ee57e:;
  /* 106ee57e push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee583 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106ee586 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee587 call 0x106e41c0 */
  push32(0x106ee58cu); f_106e41c0();
  /* 106ee58c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee58f push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee591 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee594 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106ee597 push eax */
  push32((uint32_t)(EAX));
  /* 106ee598 call 0x106e41c0 */
  push32(0x106ee59du); f_106e41c0();
  /* 106ee59d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee5a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee5a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee5a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ee5a8 push edx */
  push32((uint32_t)(EDX));
  /* 106ee5a9 call 0x106e41c0 */
  push32(0x106ee5aeu); f_106e41c0();
  /* 106ee5ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee5b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee5b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee5b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106ee5b9 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee5ba call 0x106e41c0 */
  push32(0x106ee5bfu); f_106e41c0();
  /* 106ee5bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee5c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee5c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee5c7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106ee5ca push eax */
  push32((uint32_t)(EAX));
  /* 106ee5cb call 0x106e41c0 */
  push32(0x106ee5d0u); f_106e41c0();
  /* 106ee5d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee5d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee5d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee5d8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106ee5db push edx */
  push32((uint32_t)(EDX));
  /* 106ee5dc call 0x106e41c0 */
  push32(0x106ee5e1u); f_106e41c0();
  /* 106ee5e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee5e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee5e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee5e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106ee5eb push ecx */
  push32((uint32_t)(ECX));
  /* 106ee5ec call 0x106e41c0 */
  push32(0x106ee5f1u); f_106e41c0();
  /* 106ee5f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee5f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee5f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee5f9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 106ee5fc push eax */
  push32((uint32_t)(EAX));
  /* 106ee5fd call 0x106e41c0 */
  push32(0x106ee602u); f_106e41c0();
  /* 106ee602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee605 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee607 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee60a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 106ee60d push edx */
  push32((uint32_t)(EDX));
  /* 106ee60e call 0x106e41c0 */
  push32(0x106ee613u); f_106e41c0();
  /* 106ee613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee616 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee618 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee61b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 106ee61e push ecx */
  push32((uint32_t)(ECX));
  /* 106ee61f call 0x106e41c0 */
  push32(0x106ee624u); f_106e41c0();
  /* 106ee624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee627 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee629 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee62c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 106ee62f push eax */
  push32((uint32_t)(EAX));
  /* 106ee630 call 0x106e41c0 */
  push32(0x106ee635u); f_106e41c0();
  /* 106ee635 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee638 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee63a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee63d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 106ee640 push edx */
  push32((uint32_t)(EDX));
  /* 106ee641 call 0x106e41c0 */
  push32(0x106ee646u); f_106e41c0();
  /* 106ee646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee649 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee64b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee64e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 106ee651 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee652 call 0x106e41c0 */
  push32(0x106ee657u); f_106e41c0();
  /* 106ee657 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee65a push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee65c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee65f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106ee662 push eax */
  push32((uint32_t)(EAX));
  /* 106ee663 call 0x106e41c0 */
  push32(0x106ee668u); f_106e41c0();
  /* 106ee668 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee66b push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee66d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee670 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 106ee673 push edx */
  push32((uint32_t)(EDX));
  /* 106ee674 call 0x106e41c0 */
  push32(0x106ee679u); f_106e41c0();
  /* 106ee679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee67c push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee67e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee681 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 106ee684 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee685 call 0x106e41c0 */
  push32(0x106ee68au); f_106e41c0();
  /* 106ee68a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee68d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee68f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee692 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 106ee695 push eax */
  push32((uint32_t)(EAX));
  /* 106ee696 call 0x106e41c0 */
  push32(0x106ee69bu); f_106e41c0();
  /* 106ee69b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee69e push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee6a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee6a3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 106ee6a6 push edx */
  push32((uint32_t)(EDX));
  /* 106ee6a7 call 0x106e41c0 */
  push32(0x106ee6acu); f_106e41c0();
  /* 106ee6ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee6af push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee6b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee6b4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 106ee6b7 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee6b8 call 0x106e41c0 */
  push32(0x106ee6bdu); f_106e41c0();
  /* 106ee6bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee6c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee6c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee6c5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 106ee6c8 push eax */
  push32((uint32_t)(EAX));
  /* 106ee6c9 call 0x106e41c0 */
  push32(0x106ee6ceu); f_106e41c0();
  /* 106ee6ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee6d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee6d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee6d6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106ee6d9 push edx */
  push32((uint32_t)(EDX));
  /* 106ee6da call 0x106e41c0 */
  push32(0x106ee6dfu); f_106e41c0();
  /* 106ee6df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee6e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee6e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee6e7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 106ee6ea push ecx */
  push32((uint32_t)(ECX));
  /* 106ee6eb call 0x106e41c0 */
  push32(0x106ee6f0u); f_106e41c0();
  /* 106ee6f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee6f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee6f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee6f8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 106ee6fb push eax */
  push32((uint32_t)(EAX));
  /* 106ee6fc call 0x106e41c0 */
  push32(0x106ee701u); f_106e41c0();
  /* 106ee701 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee704 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee706 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee709 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 106ee70c push edx */
  push32((uint32_t)(EDX));
  /* 106ee70d call 0x106e41c0 */
  push32(0x106ee712u); f_106e41c0();
  /* 106ee712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee715 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee717 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee71a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 106ee71d push ecx */
  push32((uint32_t)(ECX));
  /* 106ee71e call 0x106e41c0 */
  push32(0x106ee723u); f_106e41c0();
  /* 106ee723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee726 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee72b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 106ee72e push eax */
  push32((uint32_t)(EAX));
  /* 106ee72f call 0x106e41c0 */
  push32(0x106ee734u); f_106e41c0();
  /* 106ee734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee737 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee739 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee73c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 106ee73f push edx */
  push32((uint32_t)(EDX));
  /* 106ee740 call 0x106e41c0 */
  push32(0x106ee745u); f_106e41c0();
  /* 106ee745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee748 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee74a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee74d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 106ee750 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee751 call 0x106e41c0 */
  push32(0x106ee756u); f_106e41c0();
  /* 106ee756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee759 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee75b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee75e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 106ee761 push eax */
  push32((uint32_t)(EAX));
  /* 106ee762 call 0x106e41c0 */
  push32(0x106ee767u); f_106e41c0();
  /* 106ee767 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee76a push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee76c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee76f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 106ee772 push edx */
  push32((uint32_t)(EDX));
  /* 106ee773 call 0x106e41c0 */
  push32(0x106ee778u); f_106e41c0();
  /* 106ee778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee77b push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee77d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee780 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 106ee783 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee784 call 0x106e41c0 */
  push32(0x106ee789u); f_106e41c0();
  /* 106ee789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee78c push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee78e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee791 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 106ee794 push eax */
  push32((uint32_t)(EAX));
  /* 106ee795 call 0x106e41c0 */
  push32(0x106ee79au); f_106e41c0();
  /* 106ee79a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee79d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee79f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee7a2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 106ee7a8 push edx */
  push32((uint32_t)(EDX));
  /* 106ee7a9 call 0x106e41c0 */
  push32(0x106ee7aeu); f_106e41c0();
  /* 106ee7ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee7b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee7b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee7b6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 106ee7bc push ecx */
  push32((uint32_t)(ECX));
  /* 106ee7bd call 0x106e41c0 */
  push32(0x106ee7c2u); f_106e41c0();
  /* 106ee7c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee7c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee7c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee7ca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 106ee7d0 push eax */
  push32((uint32_t)(EAX));
  /* 106ee7d1 call 0x106e41c0 */
  push32(0x106ee7d6u); f_106e41c0();
  /* 106ee7d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee7d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee7db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee7de mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 106ee7e4 push edx */
  push32((uint32_t)(EDX));
  /* 106ee7e5 call 0x106e41c0 */
  push32(0x106ee7eau); f_106e41c0();
  /* 106ee7ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee7ed push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee7ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee7f2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 106ee7f8 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee7f9 call 0x106e41c0 */
  push32(0x106ee7feu); f_106e41c0();
  /* 106ee7fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee801 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee803 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee806 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 106ee80c push eax */
  push32((uint32_t)(EAX));
  /* 106ee80d call 0x106e41c0 */
  push32(0x106ee812u); f_106e41c0();
  /* 106ee812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee815 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee817 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee81a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 106ee820 push edx */
  push32((uint32_t)(EDX));
  /* 106ee821 call 0x106e41c0 */
  push32(0x106ee826u); f_106e41c0();
  /* 106ee826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee829 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee82b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee82e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 106ee834 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee835 call 0x106e41c0 */
  push32(0x106ee83au); f_106e41c0();
  /* 106ee83a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee83d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee83f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee842 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 106ee848 push eax */
  push32((uint32_t)(EAX));
  /* 106ee849 call 0x106e41c0 */
  push32(0x106ee84eu); f_106e41c0();
  /* 106ee84e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee851 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee856 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 106ee85c push edx */
  push32((uint32_t)(EDX));
  /* 106ee85d call 0x106e41c0 */
  push32(0x106ee862u); f_106e41c0();
  /* 106ee862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee865 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee867 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ee86a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 106ee870 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee871 call 0x106e41c0 */
  push32(0x106ee876u); f_106e41c0();
  /* 106ee876 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ee879:;
  /* 106ee879 pop ebp */
  EBP = (pop32());
  /* 106ee87a ret  */
  ESPCHK(0x106ee570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e880 @ 0x106ee880 (678 bytes, 180 insns) */
void f_106ee880(void) {
  FTRACE(0x106ee880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ee880 push ebp */
  push32((uint32_t)(EBP));
  /* 106ee881 mov ebp, esp */
  EBP = (ESP);
  /* 106ee883 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ee886 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106ee88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ee88f mov ax, word ptr [0x1070f722] */
  AX = (r16((uint32_t)(0x1070f722)));
  /* 106ee895 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ee898 cmp dword ptr [0x1070f6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ee89f je 0x106ee9fa */
  if (C.zf) goto L_106ee9fa;
  /* 106ee8a5 push 0x1070f6f0 */
  push32((uint32_t)(0x1070f6f0u));
  /* 106ee8aa push 0xe */
  push32((uint32_t)(0xeu));
  /* 106ee8ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee8af push ecx */
  push32((uint32_t)(ECX));
  /* 106ee8b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee8b2 call 0x106f18f0 */
  push32(0x106ee8b7u); f_106f18f0();
  /* 106ee8b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee8ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ee8bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106ee8bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106ee8c2 push 0x1070f6f4 */
  push32((uint32_t)(0x1070f6f4u));
  /* 106ee8c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 106ee8c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee8cc push eax */
  push32((uint32_t)(EAX));
  /* 106ee8cd push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee8cf call 0x106f18f0 */
  push32(0x106ee8d4u); f_106f18f0();
  /* 106ee8d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee8d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ee8da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee8dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ee8df push 0x1070f6f8 */
  push32((uint32_t)(0x1070f6f8u));
  /* 106ee8e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106ee8e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ee8e9 push edx */
  push32((uint32_t)(EDX));
  /* 106ee8ea push 1 */
  push32((uint32_t)(0x1u));
  /* 106ee8ec call 0x106f18f0 */
  push32(0x106ee8f1u); f_106f18f0();
  /* 106ee8f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee8f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ee8f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ee8f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ee8fc mov edx, dword ptr [0x1070f6f8] */
  EDX = (r32((uint32_t)(0x1070f6f8)));
  /* 106ee902 push edx */
  push32((uint32_t)(EDX));
  /* 106ee903 call 0x106eeb30 */
  push32(0x106ee908u); f_106eeb30();
  /* 106ee908 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee90b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ee90f je 0x106ee969 */
  if (C.zf) goto L_106ee969;
  /* 106ee911 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee913 mov eax, dword ptr [0x1070f6f0] */
  EAX = (r32((uint32_t)(0x1070f6f0)));
  /* 106ee918 push eax */
  push32((uint32_t)(EAX));
  /* 106ee919 call 0x106e41c0 */
  push32(0x106ee91eu); f_106e41c0();
  /* 106ee91e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee921 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee923 mov ecx, dword ptr [0x1070f6f4] */
  ECX = (r32((uint32_t)(0x1070f6f4)));
  /* 106ee929 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee92a call 0x106e41c0 */
  push32(0x106ee92fu); f_106e41c0();
  /* 106ee92f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee932 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee934 mov edx, dword ptr [0x1070f6f8] */
  EDX = (r32((uint32_t)(0x1070f6f8)));
  /* 106ee93a push edx */
  push32((uint32_t)(EDX));
  /* 106ee93b call 0x106e41c0 */
  push32(0x106ee940u); f_106e41c0();
  /* 106ee940 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee943 mov dword ptr [0x1070f6f0], 0 */
  w32((uint32_t)(0x1070f6f0), (0x0u));
  /* 106ee94d mov dword ptr [0x1070f6f4], 0 */
  w32((uint32_t)(0x1070f6f4), (0x0u));
  /* 106ee957 mov dword ptr [0x1070f6f8], 0 */
  w32((uint32_t)(0x1070f6f8), (0x0u));
  /* 106ee961 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ee964 jmp 0x106eeb22 */
  goto L_106eeb22;
L_106ee969:;
  /* 106ee969 mov eax, dword ptr [0x1070ed88] */
  EAX = (r32((uint32_t)(0x1070ed88)));
  /* 106ee96e cmp dword ptr [eax], 0x1070ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1070ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ee974 je 0x106ee9b0 */
  if (C.zf) goto L_106ee9b0;
  /* 106ee976 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee978 mov ecx, dword ptr [0x1070ed88] */
  ECX = (r32((uint32_t)(0x1070ed88)));
  /* 106ee97e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106ee980 push edx */
  push32((uint32_t)(EDX));
  /* 106ee981 call 0x106e41c0 */
  push32(0x106ee986u); f_106e41c0();
  /* 106ee986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee989 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee98b mov eax, dword ptr [0x1070ed88] */
  EAX = (r32((uint32_t)(0x1070ed88)));
  /* 106ee990 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106ee993 push ecx */
  push32((uint32_t)(ECX));
  /* 106ee994 call 0x106e41c0 */
  push32(0x106ee999u); f_106e41c0();
  /* 106ee999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ee99c push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee99e mov edx, dword ptr [0x1070ed88] */
  EDX = (r32((uint32_t)(0x1070ed88)));
  /* 106ee9a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106ee9a7 push eax */
  push32((uint32_t)(EAX));
  /* 106ee9a8 call 0x106e41c0 */
  push32(0x106ee9adu); f_106e41c0();
  /* 106ee9ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ee9b0:;
  /* 106ee9b0 mov ecx, dword ptr [0x1070ed88] */
  ECX = (r32((uint32_t)(0x1070ed88)));
  /* 106ee9b6 mov edx, dword ptr [0x1070f6f0] */
  EDX = (r32((uint32_t)(0x1070f6f0)));
  /* 106ee9bc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106ee9be mov eax, dword ptr [0x1070ed88] */
  EAX = (r32((uint32_t)(0x1070ed88)));
  /* 106ee9c3 mov ecx, dword ptr [0x1070f6f4] */
  ECX = (r32((uint32_t)(0x1070f6f4)));
  /* 106ee9c9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 106ee9cc mov edx, dword ptr [0x1070ed88] */
  EDX = (r32((uint32_t)(0x1070ed88)));
  /* 106ee9d2 mov eax, dword ptr [0x1070f6f8] */
  EAX = (r32((uint32_t)(0x1070f6f8)));
  /* 106ee9d7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106ee9da mov ecx, dword ptr [0x1070ed88] */
  ECX = (r32((uint32_t)(0x1070ed88)));
  /* 106ee9e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106ee9e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106ee9e4 mov byte ptr [0x1070dea8], al */
  w8((uint32_t)(0x1070dea8), (AL));
  /* 106ee9e9 mov dword ptr [0x1070deac], 1 */
  w32((uint32_t)(0x1070deac), (0x1u));
  /* 106ee9f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ee9f5 jmp 0x106eeb22 */
  goto L_106eeb22;
L_106ee9fa:;
  /* 106ee9fa push 2 */
  push32((uint32_t)(0x2u));
  /* 106ee9fc mov ecx, dword ptr [0x1070f6f0] */
  ECX = (r32((uint32_t)(0x1070f6f0)));
  /* 106eea02 push ecx */
  push32((uint32_t)(ECX));
  /* 106eea03 call 0x106e41c0 */
  push32(0x106eea08u); f_106e41c0();
  /* 106eea08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eea0b push 2 */
  push32((uint32_t)(0x2u));
  /* 106eea0d mov edx, dword ptr [0x1070f6f4] */
  EDX = (r32((uint32_t)(0x1070f6f4)));
  /* 106eea13 push edx */
  push32((uint32_t)(EDX));
  /* 106eea14 call 0x106e41c0 */
  push32(0x106eea19u); f_106e41c0();
  /* 106eea19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eea1c push 2 */
  push32((uint32_t)(0x2u));
  /* 106eea1e mov eax, dword ptr [0x1070f6f8] */
  EAX = (r32((uint32_t)(0x1070f6f8)));
  /* 106eea23 push eax */
  push32((uint32_t)(EAX));
  /* 106eea24 call 0x106e41c0 */
  push32(0x106eea29u); f_106e41c0();
  /* 106eea29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eea2c mov dword ptr [0x1070f6f0], 0 */
  w32((uint32_t)(0x1070f6f0), (0x0u));
  /* 106eea36 mov dword ptr [0x1070f6f4], 0 */
  w32((uint32_t)(0x1070f6f4), (0x0u));
  /* 106eea40 mov dword ptr [0x1070f6f8], 0 */
  w32((uint32_t)(0x1070f6f8), (0x0u));
  /* 106eea4a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 106eea4f push 0x1070b0b4 */
  push32((uint32_t)(0x1070b0b4u));
  /* 106eea54 push 2 */
  push32((uint32_t)(0x2u));
  /* 106eea56 push 2 */
  push32((uint32_t)(0x2u));
  /* 106eea58 call 0x106e3730 */
  push32(0x106eea5du); f_106e3730();
  /* 106eea5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eea60 mov ecx, dword ptr [0x1070ed88] */
  ECX = (r32((uint32_t)(0x1070ed88)));
  /* 106eea66 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106eea68 mov edx, dword ptr [0x1070ed88] */
  EDX = (r32((uint32_t)(0x1070ed88)));
  /* 106eea6e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eea71 jne 0x106eea7b */
  if (!C.zf) goto L_106eea7b;
  /* 106eea73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106eea76 jmp 0x106eeb22 */
  goto L_106eeb22;
L_106eea7b:;
  /* 106eea7b push 0x1070b084 */
  push32((uint32_t)(0x1070b084u));
  /* 106eea80 mov eax, dword ptr [0x1070ed88] */
  EAX = (r32((uint32_t)(0x1070ed88)));
  /* 106eea85 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106eea87 push ecx */
  push32((uint32_t)(ECX));
  /* 106eea88 call 0x106e66e0 */
  push32(0x106eea8du); f_106e66e0();
  /* 106eea8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eea90 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 106eea95 push 0x1070b0b4 */
  push32((uint32_t)(0x1070b0b4u));
  /* 106eea9a push 2 */
  push32((uint32_t)(0x2u));
  /* 106eea9c push 2 */
  push32((uint32_t)(0x2u));
  /* 106eea9e call 0x106e3730 */
  push32(0x106eeaa3u); f_106e3730();
  /* 106eeaa3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeaa6 mov edx, dword ptr [0x1070ed88] */
  EDX = (r32((uint32_t)(0x1070ed88)));
  /* 106eeaac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 106eeaaf mov eax, dword ptr [0x1070ed88] */
  EAX = (r32((uint32_t)(0x1070ed88)));
  /* 106eeab4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eeab8 jne 0x106eeabf */
  if (!C.zf) goto L_106eeabf;
  /* 106eeaba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106eeabd jmp 0x106eeb22 */
  goto L_106eeb22;
L_106eeabf:;
  /* 106eeabf mov ecx, dword ptr [0x1070ed88] */
  ECX = (r32((uint32_t)(0x1070ed88)));
  /* 106eeac5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106eeac8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106eeacb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 106eead0 push 0x1070b0b4 */
  push32((uint32_t)(0x1070b0b4u));
  /* 106eead5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106eead7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106eead9 call 0x106e3730 */
  push32(0x106eeadeu); f_106e3730();
  /* 106eeade add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeae1 mov ecx, dword ptr [0x1070ed88] */
  ECX = (r32((uint32_t)(0x1070ed88)));
  /* 106eeae7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 106eeaea mov edx, dword ptr [0x1070ed88] */
  EDX = (r32((uint32_t)(0x1070ed88)));
  /* 106eeaf0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eeaf4 jne 0x106eeafb */
  if (!C.zf) goto L_106eeafb;
  /* 106eeaf6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106eeaf9 jmp 0x106eeb22 */
  goto L_106eeb22;
L_106eeafb:;
  /* 106eeafb mov eax, dword ptr [0x1070ed88] */
  EAX = (r32((uint32_t)(0x1070ed88)));
  /* 106eeb00 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106eeb03 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 106eeb06 mov edx, dword ptr [0x1070ed88] */
  EDX = (r32((uint32_t)(0x1070ed88)));
  /* 106eeb0c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106eeb0e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106eeb10 mov byte ptr [0x1070dea8], cl */
  w8((uint32_t)(0x1070dea8), (CL));
  /* 106eeb16 mov dword ptr [0x1070deac], 1 */
  w32((uint32_t)(0x1070deac), (0x1u));
  /* 106eeb20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106eeb22:;
  /* 106eeb22 mov esp, ebp */
  ESP = (EBP);
  /* 106eeb24 pop ebp */
  EBP = (pop32());
  /* 106eeb25 ret  */
  ESPCHK(0x106ee880u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x106eeb30 (125 bytes, 49 insns) */
void f_106eeb30(void) {
  FTRACE(0x106eeb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eeb30 push ebp */
  push32((uint32_t)(EBP));
  /* 106eeb31 mov ebp, esp */
  EBP = (ESP);
  /* 106eeb33 push ecx */
  push32((uint32_t)(ECX));
L_106eeb34:;
  /* 106eeb34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeb37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106eeb3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106eeb3c je 0x106eeba9 */
  if (C.zf) goto L_106eeba9;
  /* 106eeb3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeb41 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106eeb44 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eeb47 jl 0x106eeb6d */
  if ((C.sf!=C.of)) goto L_106eeb6d;
  /* 106eeb49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeb4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106eeb4f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eeb52 jg 0x106eeb6d */
  if ((!C.zf&&C.sf==C.of)) goto L_106eeb6d;
  /* 106eeb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeb57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106eeb5a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eeb5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeb60 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106eeb62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeb65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeb68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106eeb6b jmp 0x106eeba7 */
  goto L_106eeba7;
L_106eeb6d:;
  /* 106eeb6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeb70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106eeb73 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eeb76 jne 0x106eeb9e */
  if (!C.zf) goto L_106eeb9e;
  /* 106eeb78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeb7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106eeb7e:;
  /* 106eeb7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eeb81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eeb84 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106eeb87 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106eeb89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eeb8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeb8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106eeb92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eeb95 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106eeb98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eeb9a jne 0x106eeb7e */
  if (!C.zf) goto L_106eeb7e;
  /* 106eeb9c jmp 0x106eeba7 */
  goto L_106eeba7;
L_106eeb9e:;
  /* 106eeb9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeba1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeba4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_106eeba7:;
  /* 106eeba7 jmp 0x106eeb34 */
  goto L_106eeb34;
L_106eeba9:;
  /* 106eeba9 mov esp, ebp */
  ESP = (EBP);
  /* 106eebab pop ebp */
  EBP = (pop32());
  /* 106eebac ret  */
  ESPCHK(0x106eeb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebb0 @ 0x106eebb0 (304 bytes, 85 insns) */
void f_106eebb0(void) {
  FTRACE(0x106eebb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eebb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106eebb1 mov ebp, esp */
  EBP = (ESP);
  /* 106eebb3 push ecx */
  push32((uint32_t)(ECX));
  /* 106eebb4 cmp dword ptr [0x1070f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eebbb je 0x106eec7c */
  if (C.zf) goto L_106eec7c;
  /* 106eebc1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 106eebc3 push 0x1070b0c0 */
  push32((uint32_t)(0x1070b0c0u));
  /* 106eebc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106eebca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 106eebcc push 1 */
  push32((uint32_t)(0x1u));
  /* 106eebce call 0x106e3b40 */
  push32(0x106eebd3u); f_106e3b40();
  /* 106eebd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eebd6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106eebd9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eebdd jne 0x106eebe9 */
  if (!C.zf) goto L_106eebe9;
  /* 106eebdf mov eax, 1 */
  EAX = (0x1u);
  /* 106eebe4 jmp 0x106eecdc */
  goto L_106eecdc;
L_106eebe9:;
  /* 106eebe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eebec push eax */
  push32((uint32_t)(EAX));
  /* 106eebed call 0x106eece0 */
  push32(0x106eebf2u); f_106eece0();
  /* 106eebf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eebf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eebf7 je 0x106eec1d */
  if (C.zf) goto L_106eec1d;
  /* 106eebf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eebfc push ecx */
  push32((uint32_t)(ECX));
  /* 106eebfd call 0x106eef70 */
  push32(0x106eec02u); f_106eef70();
  /* 106eec02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eec05 push 2 */
  push32((uint32_t)(0x2u));
  /* 106eec07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eec0a push edx */
  push32((uint32_t)(EDX));
  /* 106eec0b call 0x106e41c0 */
  push32(0x106eec10u); f_106e41c0();
  /* 106eec10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eec13 mov eax, 1 */
  EAX = (0x1u);
  /* 106eec18 jmp 0x106eecdc */
  goto L_106eecdc;
L_106eec1d:;
  /* 106eec1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eec20 mov ecx, dword ptr [0x1070ed88] */
  ECX = (r32((uint32_t)(0x1070ed88)));
  /* 106eec26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106eec28 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106eec2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eec2d mov ecx, dword ptr [0x1070ed88] */
  ECX = (r32((uint32_t)(0x1070ed88)));
  /* 106eec33 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106eec36 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106eec39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eec3c mov ecx, dword ptr [0x1070ed88] */
  ECX = (r32((uint32_t)(0x1070ed88)));
  /* 106eec42 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106eec45 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 106eec48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eec4b mov dword ptr [0x1070ed88], eax */
  w32((uint32_t)(0x1070ed88), (EAX));
  /* 106eec50 mov ecx, dword ptr [0x1070f6fc] */
  ECX = (r32((uint32_t)(0x1070f6fc)));
  /* 106eec56 push ecx */
  push32((uint32_t)(ECX));
  /* 106eec57 call 0x106eef70 */
  push32(0x106eec5cu); f_106eef70();
  /* 106eec5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eec5f push 2 */
  push32((uint32_t)(0x2u));
  /* 106eec61 mov edx, dword ptr [0x1070f6fc] */
  EDX = (r32((uint32_t)(0x1070f6fc)));
  /* 106eec67 push edx */
  push32((uint32_t)(EDX));
  /* 106eec68 call 0x106e41c0 */
  push32(0x106eec6du); f_106e41c0();
  /* 106eec6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eec70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eec73 mov dword ptr [0x1070f6fc], eax */
  w32((uint32_t)(0x1070f6fc), (EAX));
  /* 106eec78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106eec7a jmp 0x106eecdc */
  goto L_106eecdc;
L_106eec7c:;
  /* 106eec7c mov ecx, dword ptr [0x1070ed88] */
  ECX = (r32((uint32_t)(0x1070ed88)));
  /* 106eec82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106eec84 mov dword ptr [0x1070ed58], edx */
  w32((uint32_t)(0x1070ed58), (EDX));
  /* 106eec8a mov eax, dword ptr [0x1070ed88] */
  EAX = (r32((uint32_t)(0x1070ed88)));
  /* 106eec8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106eec92 mov dword ptr [0x1070ed5c], ecx */
  w32((uint32_t)(0x1070ed5c), (ECX));
  /* 106eec98 mov edx, dword ptr [0x1070ed88] */
  EDX = (r32((uint32_t)(0x1070ed88)));
  /* 106eec9e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106eeca1 mov dword ptr [0x1070ed60], eax */
  w32((uint32_t)(0x1070ed60), (EAX));
  /* 106eeca6 mov dword ptr [0x1070ed88], 0x1070ed58 */
  w32((uint32_t)(0x1070ed88), (0x1070ed58u));
  /* 106eecb0 mov ecx, dword ptr [0x1070f6fc] */
  ECX = (r32((uint32_t)(0x1070f6fc)));
  /* 106eecb6 push ecx */
  push32((uint32_t)(ECX));
  /* 106eecb7 call 0x106eef70 */
  push32(0x106eecbcu); f_106eef70();
  /* 106eecbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eecbf push 2 */
  push32((uint32_t)(0x2u));
  /* 106eecc1 mov edx, dword ptr [0x1070f6fc] */
  EDX = (r32((uint32_t)(0x1070f6fc)));
  /* 106eecc7 push edx */
  push32((uint32_t)(EDX));
  /* 106eecc8 call 0x106e41c0 */
  push32(0x106eeccdu); f_106e41c0();
  /* 106eeccd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eecd0 mov dword ptr [0x1070f6fc], 0 */
  w32((uint32_t)(0x1070f6fc), (0x0u));
  /* 106eecda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106eecdc:;
  /* 106eecdc mov esp, ebp */
  ESP = (EBP);
  /* 106eecde pop ebp */
  EBP = (pop32());
  /* 106eecdf ret  */
  ESPCHK(0x106eebb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ece0 @ 0x106eece0 (525 bytes, 200 insns) */
void f_106eece0(void) {
  FTRACE(0x106eece0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eece0 push ebp */
  push32((uint32_t)(EBP));
  /* 106eece1 mov ebp, esp */
  EBP = (ESP);
  /* 106eece3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eece6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106eeced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106eecef mov ax, word ptr [0x1070f71c] */
  AX = (r16((uint32_t)(0x1070f71c)));
  /* 106eecf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106eecf8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eecfc jne 0x106eed06 */
  if (!C.zf) goto L_106eed06;
  /* 106eecfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106eed01 jmp 0x106eeee9 */
  goto L_106eeee9;
L_106eed06:;
  /* 106eed06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eed09 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eed0c push ecx */
  push32((uint32_t)(ECX));
  /* 106eed0d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 106eed0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eed12 push edx */
  push32((uint32_t)(EDX));
  /* 106eed13 push 1 */
  push32((uint32_t)(0x1u));
  /* 106eed15 call 0x106f18f0 */
  push32(0x106eed1au); f_106f18f0();
  /* 106eed1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eed1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eed20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eed22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eed25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eed28 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eed2b push edx */
  push32((uint32_t)(EDX));
  /* 106eed2c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 106eed2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eed31 push eax */
  push32((uint32_t)(EAX));
  /* 106eed32 push 1 */
  push32((uint32_t)(0x1u));
  /* 106eed34 call 0x106f18f0 */
  push32(0x106eed39u); f_106f18f0();
  /* 106eed39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eed3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eed3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eed41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eed44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eed47 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eed4a push edx */
  push32((uint32_t)(EDX));
  /* 106eed4b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 106eed4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eed50 push eax */
  push32((uint32_t)(EAX));
  /* 106eed51 push 1 */
  push32((uint32_t)(0x1u));
  /* 106eed53 call 0x106f18f0 */
  push32(0x106eed58u); f_106f18f0();
  /* 106eed58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eed5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eed5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eed60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eed63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eed66 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eed69 push edx */
  push32((uint32_t)(EDX));
  /* 106eed6a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 106eed6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eed6f push eax */
  push32((uint32_t)(EAX));
  /* 106eed70 push 1 */
  push32((uint32_t)(0x1u));
  /* 106eed72 call 0x106f18f0 */
  push32(0x106eed77u); f_106f18f0();
  /* 106eed77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eed7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eed7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eed7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eed82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eed85 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eed88 push edx */
  push32((uint32_t)(EDX));
  /* 106eed89 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 106eed8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eed8e push eax */
  push32((uint32_t)(EAX));
  /* 106eed8f push 1 */
  push32((uint32_t)(0x1u));
  /* 106eed91 call 0x106f18f0 */
  push32(0x106eed96u); f_106f18f0();
  /* 106eed96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eed99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eed9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eed9e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eeda1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeda4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106eeda7 push eax */
  push32((uint32_t)(EAX));
  /* 106eeda8 call 0x106eeef0 */
  push32(0x106eedadu); f_106eeef0();
  /* 106eedad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eedb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eedb3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eedb6 push ecx */
  push32((uint32_t)(ECX));
  /* 106eedb7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 106eedb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eedbc push edx */
  push32((uint32_t)(EDX));
  /* 106eedbd push 1 */
  push32((uint32_t)(0x1u));
  /* 106eedbf call 0x106f18f0 */
  push32(0x106eedc4u); f_106f18f0();
  /* 106eedc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eedc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eedca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eedcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eedcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eedd2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eedd5 push edx */
  push32((uint32_t)(EDX));
  /* 106eedd6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 106eedd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eeddb push eax */
  push32((uint32_t)(EAX));
  /* 106eeddc push 1 */
  push32((uint32_t)(0x1u));
  /* 106eedde call 0x106f18f0 */
  push32(0x106eede3u); f_106f18f0();
  /* 106eede3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eede6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eede9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eedeb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eedee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eedf1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eedf4 push edx */
  push32((uint32_t)(EDX));
  /* 106eedf5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 106eedf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eedfa push eax */
  push32((uint32_t)(EAX));
  /* 106eedfb push 0 */
  push32((uint32_t)(0x0u));
  /* 106eedfd call 0x106f18f0 */
  push32(0x106eee02u); f_106f18f0();
  /* 106eee02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eee05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eee08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eee0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eee0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eee10 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eee13 push edx */
  push32((uint32_t)(EDX));
  /* 106eee14 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106eee16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eee19 push eax */
  push32((uint32_t)(EAX));
  /* 106eee1a push 0 */
  push32((uint32_t)(0x0u));
  /* 106eee1c call 0x106f18f0 */
  push32(0x106eee21u); f_106f18f0();
  /* 106eee21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eee24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eee27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eee29 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eee2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eee2f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eee32 push edx */
  push32((uint32_t)(EDX));
  /* 106eee33 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 106eee35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eee38 push eax */
  push32((uint32_t)(EAX));
  /* 106eee39 push 0 */
  push32((uint32_t)(0x0u));
  /* 106eee3b call 0x106f18f0 */
  push32(0x106eee40u); f_106f18f0();
  /* 106eee40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eee43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eee46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eee48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eee4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eee4e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eee51 push edx */
  push32((uint32_t)(EDX));
  /* 106eee52 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 106eee54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eee57 push eax */
  push32((uint32_t)(EAX));
  /* 106eee58 push 0 */
  push32((uint32_t)(0x0u));
  /* 106eee5a call 0x106f18f0 */
  push32(0x106eee5fu); f_106f18f0();
  /* 106eee5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eee62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eee65 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eee67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eee6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eee6d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eee70 push edx */
  push32((uint32_t)(EDX));
  /* 106eee71 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 106eee73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eee76 push eax */
  push32((uint32_t)(EAX));
  /* 106eee77 push 0 */
  push32((uint32_t)(0x0u));
  /* 106eee79 call 0x106f18f0 */
  push32(0x106eee7eu); f_106f18f0();
  /* 106eee7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eee81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eee84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eee86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eee89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eee8c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eee8f push edx */
  push32((uint32_t)(EDX));
  /* 106eee90 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 106eee92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eee95 push eax */
  push32((uint32_t)(EAX));
  /* 106eee96 push 0 */
  push32((uint32_t)(0x0u));
  /* 106eee98 call 0x106f18f0 */
  push32(0x106eee9du); f_106f18f0();
  /* 106eee9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeea0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eeea3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eeea5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eeea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeeab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeeae push edx */
  push32((uint32_t)(EDX));
  /* 106eeeaf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 106eeeb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eeeb4 push eax */
  push32((uint32_t)(EAX));
  /* 106eeeb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106eeeb7 call 0x106f18f0 */
  push32(0x106eeebcu); f_106f18f0();
  /* 106eeebc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eeec2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eeec4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eeec7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeeca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeecd push edx */
  push32((uint32_t)(EDX));
  /* 106eeece push 0x53 */
  push32((uint32_t)(0x53u));
  /* 106eeed0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eeed3 push eax */
  push32((uint32_t)(EAX));
  /* 106eeed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106eeed6 call 0x106f18f0 */
  push32(0x106eeedbu); f_106f18f0();
  /* 106eeedb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeede mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eeee1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106eeee3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106eeee6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106eeee9:;
  /* 106eeee9 mov esp, ebp */
  ESP = (EBP);
  /* 106eeeeb pop ebp */
  EBP = (pop32());
  /* 106eeeec ret  */
  ESPCHK(0x106eece0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x106eeef0 (125 bytes, 49 insns) */
void f_106eeef0(void) {
  FTRACE(0x106eeef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eeef0 push ebp */
  push32((uint32_t)(EBP));
  /* 106eeef1 mov ebp, esp */
  EBP = (ESP);
  /* 106eeef3 push ecx */
  push32((uint32_t)(ECX));
L_106eeef4:;
  /* 106eeef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeef7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106eeefa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106eeefc je 0x106eef69 */
  if (C.zf) goto L_106eef69;
  /* 106eeefe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eef01 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106eef04 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eef07 jl 0x106eef2d */
  if ((C.sf!=C.of)) goto L_106eef2d;
  /* 106eef09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eef0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106eef0f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eef12 jg 0x106eef2d */
  if ((!C.zf&&C.sf==C.of)) goto L_106eef2d;
  /* 106eef14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eef17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106eef1a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eef1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eef20 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106eef22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eef25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eef28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106eef2b jmp 0x106eef67 */
  goto L_106eef67;
L_106eef2d:;
  /* 106eef2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eef30 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106eef33 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eef36 jne 0x106eef5e */
  if (!C.zf) goto L_106eef5e;
  /* 106eef38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eef3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106eef3e:;
  /* 106eef3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eef41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eef44 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106eef47 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106eef49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eef4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eef4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106eef52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eef55 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106eef58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eef5a jne 0x106eef3e */
  if (!C.zf) goto L_106eef3e;
  /* 106eef5c jmp 0x106eef67 */
  goto L_106eef67;
L_106eef5e:;
  /* 106eef5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eef61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eef64 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_106eef67:;
  /* 106eef67 jmp 0x106eeef4 */
  goto L_106eeef4;
L_106eef69:;
  /* 106eef69 mov esp, ebp */
  ESP = (EBP);
  /* 106eef6b pop ebp */
  EBP = (pop32());
  /* 106eef6c ret  */
  ESPCHK(0x106eeef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef70 @ 0x106eef70 (147 bytes, 52 insns) */
void f_106eef70(void) {
  FTRACE(0x106eef70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eef70 push ebp */
  push32((uint32_t)(EBP));
  /* 106eef71 mov ebp, esp */
  EBP = (ESP);
  /* 106eef73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eef77 jne 0x106eef7e */
  if (!C.zf) goto L_106eef7e;
  /* 106eef79 jmp 0x106ef001 */
  goto L_106ef001;
L_106eef7e:;
  /* 106eef7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eef81 cmp dword ptr [eax + 0xc], 0x1070f758 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1070f758u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eef88 je 0x106ef001 */
  if (C.zf) goto L_106ef001;
  /* 106eef8a push 2 */
  push32((uint32_t)(0x2u));
  /* 106eef8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eef8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106eef92 push edx */
  push32((uint32_t)(EDX));
  /* 106eef93 call 0x106e41c0 */
  push32(0x106eef98u); f_106e41c0();
  /* 106eef98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eef9b push 2 */
  push32((uint32_t)(0x2u));
  /* 106eef9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eefa0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106eefa3 push ecx */
  push32((uint32_t)(ECX));
  /* 106eefa4 call 0x106e41c0 */
  push32(0x106eefa9u); f_106e41c0();
  /* 106eefa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eefac push 2 */
  push32((uint32_t)(0x2u));
  /* 106eefae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eefb1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106eefb4 push eax */
  push32((uint32_t)(EAX));
  /* 106eefb5 call 0x106e41c0 */
  push32(0x106eefbau); f_106e41c0();
  /* 106eefba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eefbd push 2 */
  push32((uint32_t)(0x2u));
  /* 106eefbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eefc2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106eefc5 push edx */
  push32((uint32_t)(EDX));
  /* 106eefc6 call 0x106e41c0 */
  push32(0x106eefcbu); f_106e41c0();
  /* 106eefcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eefce push 2 */
  push32((uint32_t)(0x2u));
  /* 106eefd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eefd3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106eefd6 push ecx */
  push32((uint32_t)(ECX));
  /* 106eefd7 call 0x106e41c0 */
  push32(0x106eefdcu); f_106e41c0();
  /* 106eefdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eefdf push 2 */
  push32((uint32_t)(0x2u));
  /* 106eefe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eefe4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 106eefe7 push eax */
  push32((uint32_t)(EAX));
  /* 106eefe8 call 0x106e41c0 */
  push32(0x106eefedu); f_106e41c0();
  /* 106eefed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eeff0 push 2 */
  push32((uint32_t)(0x2u));
  /* 106eeff2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eeff5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 106eeff8 push edx */
  push32((uint32_t)(EDX));
  /* 106eeff9 call 0x106e41c0 */
  push32(0x106eeffeu); f_106e41c0();
  /* 106eeffe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ef001:;
  /* 106ef001 pop ebp */
  EBP = (pop32());
  /* 106ef002 ret  */
  ESPCHK(0x106eef70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f010 @ 0x106ef010 (928 bytes, 284 insns) */
void f_106ef010(void) {
  FTRACE(0x106ef010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ef010 push ebp */
  push32((uint32_t)(EBP));
  /* 106ef011 mov ebp, esp */
  EBP = (ESP);
  /* 106ef013 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ef016 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 106ef01d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 106ef024 cmp dword ptr [0x1070f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef02b je 0x106ef361 */
  if (C.zf) goto L_106ef361;
  /* 106ef031 cmp dword ptr [0x1070f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef038 jne 0x106ef060 */
  if (!C.zf) goto L_106ef060;
  /* 106ef03a push 0x1070f6d0 */
  push32((uint32_t)(0x1070f6d0u));
  /* 106ef03f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 106ef044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef046 mov ax, word ptr [0x1070f714] */
  AX = (r16((uint32_t)(0x1070f714)));
  /* 106ef04c push eax */
  push32((uint32_t)(EAX));
  /* 106ef04d push 0 */
  push32((uint32_t)(0x0u));
  /* 106ef04f call 0x106f18f0 */
  push32(0x106ef054u); f_106f18f0();
  /* 106ef054 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef059 je 0x106ef060 */
  if (C.zf) goto L_106ef060;
  /* 106ef05b jmp 0x106ef322 */
  goto L_106ef322;
L_106ef060:;
  /* 106ef060 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 106ef062 push 0x1070b0cc */
  push32((uint32_t)(0x1070b0ccu));
  /* 106ef067 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef069 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 106ef06e call 0x106e3730 */
  push32(0x106ef073u); f_106e3730();
  /* 106ef073 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef076 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 106ef079 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 106ef07b push 0x1070b0cc */
  push32((uint32_t)(0x1070b0ccu));
  /* 106ef080 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef082 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 106ef087 call 0x106e3730 */
  push32(0x106ef08cu); f_106e3730();
  /* 106ef08c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef08f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106ef092 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 106ef094 push 0x1070b0cc */
  push32((uint32_t)(0x1070b0ccu));
  /* 106ef099 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef09b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 106ef0a0 call 0x106e3730 */
  push32(0x106ef0a5u); f_106e3730();
  /* 106ef0a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef0a8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 106ef0ab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 106ef0ad push 0x1070b0cc */
  push32((uint32_t)(0x1070b0ccu));
  /* 106ef0b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef0b4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 106ef0b9 call 0x106e3730 */
  push32(0x106ef0beu); f_106e3730();
  /* 106ef0be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef0c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106ef0c4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef0c8 je 0x106ef0dc */
  if (C.zf) goto L_106ef0dc;
  /* 106ef0ca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef0ce je 0x106ef0dc */
  if (C.zf) goto L_106ef0dc;
  /* 106ef0d0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef0d4 je 0x106ef0dc */
  if (C.zf) goto L_106ef0dc;
  /* 106ef0d6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef0da jne 0x106ef0e1 */
  if (!C.zf) goto L_106ef0e1;
L_106ef0dc:;
  /* 106ef0dc jmp 0x106ef322 */
  goto L_106ef322;
L_106ef0e1:;
  /* 106ef0e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ef0e4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106ef0e7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106ef0ee jmp 0x106ef0f9 */
  goto L_106ef0f9;
L_106ef0f0:;
  /* 106ef0f0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ef0f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef0f6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_106ef0f9:;
  /* 106ef0f9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef100 jge 0x106ef115 */
  if ((C.sf==C.of)) goto L_106ef115;
  /* 106ef102 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef105 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 106ef108 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 106ef10a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef10d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef110 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106ef113 jmp 0x106ef0f0 */
  goto L_106ef0f0;
L_106ef115:;
  /* 106ef115 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 106ef118 push eax */
  push32((uint32_t)(EAX));
  /* 106ef119 mov ecx, dword ptr [0x1070f6d0] */
  ECX = (r32((uint32_t)(0x1070f6d0)));
  /* 106ef11f push ecx */
  push32((uint32_t)(ECX));
  /* 106ef120 call dword ptr [0x10712374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712374))), 0x106ef126u);
  /* 106ef126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef128 jne 0x106ef12f */
  if (!C.zf) goto L_106ef12f;
  /* 106ef12a jmp 0x106ef322 */
  goto L_106ef322;
L_106ef12f:;
  /* 106ef12f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef133 jbe 0x106ef13a */
  if ((C.cf||C.zf)) goto L_106ef13a;
  /* 106ef135 jmp 0x106ef322 */
  goto L_106ef322;
L_106ef13a:;
  /* 106ef13a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106ef13d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106ef143 mov dword ptr [0x1070dea4], edx */
  w32((uint32_t)(0x1070dea4), (EDX));
  /* 106ef149 cmp dword ptr [0x1070dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef150 jle 0x106ef1a9 */
  if ((C.zf||C.sf!=C.of)) goto L_106ef1a9;
  /* 106ef152 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 106ef155 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106ef158 jmp 0x106ef163 */
  goto L_106ef163;
L_106ef15a:;
  /* 106ef15a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef15d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef160 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_106ef163:;
  /* 106ef163 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef168 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106ef16a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef16c je 0x106ef1a9 */
  if (C.zf) goto L_106ef1a9;
  /* 106ef16e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef171 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106ef173 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 106ef176 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ef178 je 0x106ef1a9 */
  if (C.zf) goto L_106ef1a9;
  /* 106ef17a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef17d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ef17f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106ef181 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106ef184 jmp 0x106ef18f */
  goto L_106ef18f;
L_106ef186:;
  /* 106ef186 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ef189 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef18c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_106ef18f:;
  /* 106ef18f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef192 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ef194 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106ef197 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef19a jg 0x106ef1a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_106ef1a7;
  /* 106ef19c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ef19f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef1a2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106ef1a5 jmp 0x106ef186 */
  goto L_106ef186;
L_106ef1a7:;
  /* 106ef1a7 jmp 0x106ef15a */
  goto L_106ef15a;
L_106ef1a9:;
  /* 106ef1a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ef1ab push 0 */
  push32((uint32_t)(0x0u));
  /* 106ef1ad push 0 */
  push32((uint32_t)(0x0u));
  /* 106ef1af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106ef1b2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef1b5 push eax */
  push32((uint32_t)(EAX));
  /* 106ef1b6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106ef1bb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ef1be push ecx */
  push32((uint32_t)(ECX));
  /* 106ef1bf push 1 */
  push32((uint32_t)(0x1u));
  /* 106ef1c1 call 0x106eb960 */
  push32(0x106ef1c6u); f_106eb960();
  /* 106ef1c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef1c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef1cb jne 0x106ef1d2 */
  if (!C.zf) goto L_106ef1d2;
  /* 106ef1cd jmp 0x106ef322 */
  goto L_106ef322;
L_106ef1d2:;
  /* 106ef1d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106ef1d5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 106ef1da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ef1dd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106ef1e0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106ef1e7 jmp 0x106ef1f2 */
  goto L_106ef1f2;
L_106ef1e9:;
  /* 106ef1e9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ef1ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef1ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_106ef1f2:;
  /* 106ef1f2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef1f9 jge 0x106ef210 */
  if ((C.sf==C.of)) goto L_106ef210;
  /* 106ef1fb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ef1fe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 106ef202 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 106ef205 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ef208 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef20b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106ef20e jmp 0x106ef1e9 */
  goto L_106ef1e9;
L_106ef210:;
  /* 106ef210 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ef212 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ef214 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ef217 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef21a push edx */
  push32((uint32_t)(EDX));
  /* 106ef21b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106ef220 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ef223 push eax */
  push32((uint32_t)(EAX));
  /* 106ef224 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ef226 call 0x106f1b90 */
  push32(0x106ef22bu); f_106f1b90();
  /* 106ef22b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef22e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef230 jne 0x106ef237 */
  if (!C.zf) goto L_106ef237;
  /* 106ef232 jmp 0x106ef322 */
  goto L_106ef322;
L_106ef237:;
  /* 106ef237 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ef23a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 106ef23f cmp dword ptr [0x1070dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef246 jle 0x106ef2a3 */
  if ((C.zf||C.sf!=C.of)) goto L_106ef2a3;
  /* 106ef248 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 106ef24b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106ef24e jmp 0x106ef259 */
  goto L_106ef259;
L_106ef250:;
  /* 106ef250 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef253 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef256 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_106ef259:;
  /* 106ef259 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef25c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106ef25e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106ef260 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ef262 je 0x106ef2a3 */
  if (C.zf) goto L_106ef2a3;
  /* 106ef264 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef267 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ef269 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106ef26c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ef26e je 0x106ef2a3 */
  if (C.zf) goto L_106ef2a3;
  /* 106ef270 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef275 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106ef277 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106ef27a jmp 0x106ef285 */
  goto L_106ef285;
L_106ef27c:;
  /* 106ef27c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ef27f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef282 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_106ef285:;
  /* 106ef285 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ef288 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef28a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106ef28d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef290 jg 0x106ef2a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_106ef2a1;
  /* 106ef292 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ef295 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106ef298 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 106ef29f jmp 0x106ef27c */
  goto L_106ef27c;
L_106ef2a1:;
  /* 106ef2a1 jmp 0x106ef250 */
  goto L_106ef250;
L_106ef2a3:;
  /* 106ef2a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106ef2a6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef2a9 mov dword ptr [0x1070dc98], eax */
  w32((uint32_t)(0x1070dc98), (EAX));
  /* 106ef2ae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ef2b1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef2b4 mov dword ptr [0x1070dc9c], ecx */
  w32((uint32_t)(0x1070dc9c), (ECX));
  /* 106ef2ba cmp dword ptr [0x1070f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef2c1 je 0x106ef2d4 */
  if (C.zf) goto L_106ef2d4;
  /* 106ef2c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef2c5 mov edx, dword ptr [0x1070f700] */
  EDX = (r32((uint32_t)(0x1070f700)));
  /* 106ef2cb push edx */
  push32((uint32_t)(EDX));
  /* 106ef2cc call 0x106e41c0 */
  push32(0x106ef2d1u); f_106e41c0();
  /* 106ef2d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ef2d4:;
  /* 106ef2d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106ef2d7 mov dword ptr [0x1070f700], eax */
  w32((uint32_t)(0x1070f700), (EAX));
  /* 106ef2dc cmp dword ptr [0x1070f704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef2e3 je 0x106ef2f6 */
  if (C.zf) goto L_106ef2f6;
  /* 106ef2e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef2e7 mov ecx, dword ptr [0x1070f704] */
  ECX = (r32((uint32_t)(0x1070f704)));
  /* 106ef2ed push ecx */
  push32((uint32_t)(ECX));
  /* 106ef2ee call 0x106e41c0 */
  push32(0x106ef2f3u); f_106e41c0();
  /* 106ef2f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ef2f6:;
  /* 106ef2f6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ef2f9 mov dword ptr [0x1070f704], edx */
  w32((uint32_t)(0x1070f704), (EDX));
  /* 106ef2ff push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef301 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ef304 push eax */
  push32((uint32_t)(EAX));
  /* 106ef305 call 0x106e41c0 */
  push32(0x106ef30au); f_106e41c0();
  /* 106ef30a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef30d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef30f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ef312 push ecx */
  push32((uint32_t)(ECX));
  /* 106ef313 call 0x106e41c0 */
  push32(0x106ef318u); f_106e41c0();
  /* 106ef318 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef31b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef31d jmp 0x106ef3ac */
  goto L_106ef3ac;
L_106ef322:;
  /* 106ef322 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef324 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106ef327 push edx */
  push32((uint32_t)(EDX));
  /* 106ef328 call 0x106e41c0 */
  push32(0x106ef32du); f_106e41c0();
  /* 106ef32d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef330 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef332 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ef335 push eax */
  push32((uint32_t)(EAX));
  /* 106ef336 call 0x106e41c0 */
  push32(0x106ef33bu); f_106e41c0();
  /* 106ef33b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef33e push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef340 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ef343 push ecx */
  push32((uint32_t)(ECX));
  /* 106ef344 call 0x106e41c0 */
  push32(0x106ef349u); f_106e41c0();
  /* 106ef349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef34c push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef34e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ef351 push edx */
  push32((uint32_t)(EDX));
  /* 106ef352 call 0x106e41c0 */
  push32(0x106ef357u); f_106e41c0();
  /* 106ef357 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef35a mov eax, 1 */
  EAX = (0x1u);
  /* 106ef35f jmp 0x106ef3ac */
  goto L_106ef3ac;
L_106ef361:;
  /* 106ef361 mov dword ptr [0x1070dc98], 0x1070dca2 */
  w32((uint32_t)(0x1070dc98), (0x1070dca2u));
  /* 106ef36b mov dword ptr [0x1070dc9c], 0x1070dca2 */
  w32((uint32_t)(0x1070dc9c), (0x1070dca2u));
  /* 106ef375 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef377 mov eax, dword ptr [0x1070f700] */
  EAX = (r32((uint32_t)(0x1070f700)));
  /* 106ef37c push eax */
  push32((uint32_t)(EAX));
  /* 106ef37d call 0x106e41c0 */
  push32(0x106ef382u); f_106e41c0();
  /* 106ef382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef385 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ef387 mov ecx, dword ptr [0x1070f704] */
  ECX = (r32((uint32_t)(0x1070f704)));
  /* 106ef38d push ecx */
  push32((uint32_t)(ECX));
  /* 106ef38e call 0x106e41c0 */
  push32(0x106ef393u); f_106e41c0();
  /* 106ef393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef396 mov dword ptr [0x1070f700], 0 */
  w32((uint32_t)(0x1070f700), (0x0u));
  /* 106ef3a0 mov dword ptr [0x1070f704], 0 */
  w32((uint32_t)(0x1070f704), (0x0u));
  /* 106ef3aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106ef3ac:;
  /* 106ef3ac mov esp, ebp */
  ESP = (EBP);
  /* 106ef3ae pop ebp */
  EBP = (pop32());
  /* 106ef3af ret  */
  ESPCHK(0x106ef010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3b0 @ 0x106ef3b0 (7 bytes, 5 insns) */
void f_106ef3b0(void) {
  FTRACE(0x106ef3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ef3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ef3b1 mov ebp, esp */
  EBP = (ESP);
  /* 106ef3b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef3b5 pop ebp */
  EBP = (pop32());
  /* 106ef3b6 ret  */
  ESPCHK(0x106ef3b0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x106ef3c0 (129 bytes, 56 insns) */
void f_106ef3c0(void) {
  FTRACE(0x106ef3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ef3c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 106ef3c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 106ef3c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 106ef3ce jne 0x106ef40c */
  if (!C.zf) goto L_106ef40c;
L_106ef3d0:;
  /* 106ef3d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106ef3d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106ef3d4 jne 0x106ef404 */
  if (!C.zf) goto L_106ef404;
  /* 106ef3d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106ef3d8 je 0x106ef400 */
  if (C.zf) goto L_106ef400;
  /* 106ef3da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106ef3dd jne 0x106ef404 */
  if (!C.zf) goto L_106ef404;
  /* 106ef3df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 106ef3e1 je 0x106ef400 */
  if (C.zf) goto L_106ef400;
  /* 106ef3e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106ef3e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106ef3e9 jne 0x106ef404 */
  if (!C.zf) goto L_106ef404;
  /* 106ef3eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106ef3ed je 0x106ef400 */
  if (C.zf) goto L_106ef400;
  /* 106ef3ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106ef3f2 jne 0x106ef404 */
  if (!C.zf) goto L_106ef404;
  /* 106ef3f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef3f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef3fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 106ef3fc jne 0x106ef3d0 */
  if (!C.zf) goto L_106ef3d0;
  /* 106ef3fe mov edi, edi */
  EDI = (EDI);
L_106ef400:;
  /* 106ef400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef402 ret  */
  ESPCHK(0x106ef3c0u, _esp0);
  ESP += 4; return;
  /* 106ef403 nop  */
  /* nop */
L_106ef404:;
  /* 106ef404 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ef406 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106ef408 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 106ef409 ret  */
  ESPCHK(0x106ef3c0u, _esp0);
  ESP += 4; return;
  /* 106ef40a mov edi, edi */
  EDI = (EDI);
L_106ef40c:;
  /* 106ef40c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 106ef412 je 0x106ef428 */
  if (C.zf) goto L_106ef428;
  /* 106ef414 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106ef416 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 106ef417 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106ef419 jne 0x106ef404 */
  if (!C.zf) goto L_106ef404;
  /* 106ef41b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106ef41c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106ef41e je 0x106ef400 */
  if (C.zf) goto L_106ef400;
  /* 106ef420 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 106ef426 je 0x106ef3d0 */
  if (C.zf) goto L_106ef3d0;
L_106ef428:;
  /* 106ef428 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 106ef42b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef42e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106ef430 jne 0x106ef404 */
  if (!C.zf) goto L_106ef404;
  /* 106ef432 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106ef434 je 0x106ef400 */
  if (C.zf) goto L_106ef400;
  /* 106ef436 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106ef439 jne 0x106ef404 */
  if (!C.zf) goto L_106ef404;
  /* 106ef43b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 106ef43d je 0x106ef400 */
  if (C.zf) goto L_106ef400;
  /* 106ef43f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef442 jmp 0x106ef3d0 */
  goto L_106ef3d0;
}

/* FUN_1000f450 @ 0x106ef450 (62 bytes, 35 insns) */
void f_106ef450(void) {
  FTRACE(0x106ef450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ef450 push ebp */
  push32((uint32_t)(EBP));
  /* 106ef451 mov ebp, esp */
  EBP = (ESP);
  /* 106ef453 push esi */
  push32((uint32_t)(ESI));
  /* 106ef454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef456 push eax */
  push32((uint32_t)(EAX));
  /* 106ef457 push eax */
  push32((uint32_t)(EAX));
  /* 106ef458 push eax */
  push32((uint32_t)(EAX));
  /* 106ef459 push eax */
  push32((uint32_t)(EAX));
  /* 106ef45a push eax */
  push32((uint32_t)(EAX));
  /* 106ef45b push eax */
  push32((uint32_t)(EAX));
  /* 106ef45c push eax */
  push32((uint32_t)(EAX));
  /* 106ef45d push eax */
  push32((uint32_t)(EAX));
  /* 106ef45e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ef461 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ef464:;
  /* 106ef464 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106ef466 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106ef468 je 0x106ef471 */
  if (C.zf) goto L_106ef471;
  /* 106ef46a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 106ef46b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x106ef46b");
  /* 106ef46f jmp 0x106ef464 */
  goto L_106ef464;
L_106ef471:;
  /* 106ef471 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 106ef474 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106ef477 nop  */
  /* nop */
L_106ef478:;
  /* 106ef478 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106ef479 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ef47b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106ef47d je 0x106ef486 */
  if (C.zf) goto L_106ef486;
  /* 106ef47f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106ef480 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x106ef480");
  /* 106ef484 jae 0x106ef478 */
  if (!C.cf) goto L_106ef478;
L_106ef486:;
  /* 106ef486 mov eax, ecx */
  EAX = (ECX);
  /* 106ef488 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef48b pop esi */
  ESI = (pop32());
  /* 106ef48c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ef48d ret  */
  ESPCHK(0x106ef450u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x106ef490 (56 bytes, 31 insns) */
void f_106ef490(void) {
  FTRACE(0x106ef490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ef490 push ebp */
  push32((uint32_t)(EBP));
  /* 106ef491 mov ebp, esp */
  EBP = (ESP);
  /* 106ef493 push edi */
  push32((uint32_t)(EDI));
  /* 106ef494 push esi */
  push32((uint32_t)(ESI));
  /* 106ef495 push ebx */
  push32((uint32_t)(EBX));
  /* 106ef496 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ef499 jecxz 0x106ef4c1 */
  x86_unimpl("jecxz @ 0x106ef499");
  /* 106ef49b mov ebx, ecx */
  EBX = (ECX);
  /* 106ef49d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 106ef4a0 mov esi, edi */
  ESI = (EDI);
  /* 106ef4a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef4a4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 106ef4a6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ef4a8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef4aa mov edi, esi */
  EDI = (ESI);
  /* 106ef4ac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106ef4af repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 106ef4b1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 106ef4b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ef4b6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106ef4b9 ja 0x106ef4bf */
  if ((!C.cf&&!C.zf)) goto L_106ef4bf;
  /* 106ef4bb je 0x106ef4c1 */
  if (C.zf) goto L_106ef4c1;
  /* 106ef4bd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106ef4be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_106ef4bf:;
  /* 106ef4bf not ecx */
  ECX = (~(ECX));
L_106ef4c1:;
  /* 106ef4c1 mov eax, ecx */
  EAX = (ECX);
  /* 106ef4c3 pop ebx */
  EBX = (pop32());
  /* 106ef4c4 pop esi */
  ESI = (pop32());
  /* 106ef4c5 pop edi */
  EDI = (pop32());
  /* 106ef4c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ef4c7 ret  */
  ESPCHK(0x106ef490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4d0 @ 0x106ef4d0 (58 bytes, 32 insns) */
void f_106ef4d0(void) {
  FTRACE(0x106ef4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ef4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ef4d1 mov ebp, esp */
  EBP = (ESP);
  /* 106ef4d3 push esi */
  push32((uint32_t)(ESI));
  /* 106ef4d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef4d6 push eax */
  push32((uint32_t)(EAX));
  /* 106ef4d7 push eax */
  push32((uint32_t)(EAX));
  /* 106ef4d8 push eax */
  push32((uint32_t)(EAX));
  /* 106ef4d9 push eax */
  push32((uint32_t)(EAX));
  /* 106ef4da push eax */
  push32((uint32_t)(EAX));
  /* 106ef4db push eax */
  push32((uint32_t)(EAX));
  /* 106ef4dc push eax */
  push32((uint32_t)(EAX));
  /* 106ef4dd push eax */
  push32((uint32_t)(EAX));
  /* 106ef4de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ef4e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ef4e4:;
  /* 106ef4e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106ef4e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106ef4e8 je 0x106ef4f1 */
  if (C.zf) goto L_106ef4f1;
  /* 106ef4ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 106ef4eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x106ef4eb");
  /* 106ef4ef jmp 0x106ef4e4 */
  goto L_106ef4e4;
L_106ef4f1:;
  /* 106ef4f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_106ef4f4:;
  /* 106ef4f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ef4f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106ef4f8 je 0x106ef504 */
  if (C.zf) goto L_106ef504;
  /* 106ef4fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106ef4fb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x106ef4fb");
  /* 106ef4ff jae 0x106ef4f4 */
  if (!C.cf) goto L_106ef4f4;
  /* 106ef501 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_106ef504:;
  /* 106ef504 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef507 pop esi */
  ESI = (pop32());
  /* 106ef508 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ef509 ret  */
  ESPCHK(0x106ef4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f510 @ 0x106ef510 (512 bytes, 147 insns) */
void f_106ef510(void) {
  FTRACE(0x106ef510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ef510 push ebp */
  push32((uint32_t)(EBP));
  /* 106ef511 mov ebp, esp */
  EBP = (ESP);
  /* 106ef513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ef516 cmp dword ptr [0x1070f74c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f74c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef51d jne 0x106ef542 */
  if (!C.zf) goto L_106ef542;
  /* 106ef51f call 0x106effe0 */
  push32(0x106ef524u); f_106effe0();
  /* 106ef524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef526 je 0x106ef532 */
  if (C.zf) goto L_106ef532;
  /* 106ef528 mov eax, dword ptr [0x10712288] */
  EAX = (r32((uint32_t)(0x10712288)));
  /* 106ef52d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ef530 jmp 0x106ef539 */
  goto L_106ef539;
L_106ef532:;
  /* 106ef532 mov dword ptr [ebp - 8], 0x106f0030 */
  w32((uint32_t)(EBP + -0x8), (0x106f0030u));
L_106ef539:;
  /* 106ef539 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ef53c mov dword ptr [0x1070f74c], ecx */
  w32((uint32_t)(0x1070f74c), (ECX));
L_106ef542:;
  /* 106ef542 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef546 jne 0x106ef552 */
  if (!C.zf) goto L_106ef552;
  /* 106ef548 call 0x106efe30 */
  push32(0x106ef54du); f_106efe30();
  /* 106ef54d jmp 0x106ef61e */
  goto L_106ef61e;
L_106ef552:;
  /* 106ef552 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ef555 mov dword ptr [0x1070f73c], edx */
  w32((uint32_t)(0x1070f73c), (EDX));
  /* 106ef55b cmp dword ptr [0x1070f73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef562 je 0x106ef584 */
  if (C.zf) goto L_106ef584;
  /* 106ef564 mov eax, dword ptr [0x1070f73c] */
  EAX = (r32((uint32_t)(0x1070f73c)));
  /* 106ef569 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ef56c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ef56e je 0x106ef584 */
  if (C.zf) goto L_106ef584;
  /* 106ef570 push 0x1070f73c */
  push32((uint32_t)(0x1070f73cu));
  /* 106ef575 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 106ef577 push 0x1070ea90 */
  push32((uint32_t)(0x1070ea90u));
  /* 106ef57c call 0x106ef710 */
  push32(0x106ef581u); f_106ef710();
  /* 106ef581 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ef584:;
  /* 106ef584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ef587 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef58a mov dword ptr [0x1070f740], edx */
  w32((uint32_t)(0x1070f740), (EDX));
  /* 106ef590 cmp dword ptr [0x1070f740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef597 je 0x106ef5b9 */
  if (C.zf) goto L_106ef5b9;
  /* 106ef599 mov eax, dword ptr [0x1070f740] */
  EAX = (r32((uint32_t)(0x1070f740)));
  /* 106ef59e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ef5a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ef5a3 je 0x106ef5b9 */
  if (C.zf) goto L_106ef5b9;
  /* 106ef5a5 push 0x1070f740 */
  push32((uint32_t)(0x1070f740u));
  /* 106ef5aa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 106ef5ac push 0x1070e9d8 */
  push32((uint32_t)(0x1070e9d8u));
  /* 106ef5b1 call 0x106ef710 */
  push32(0x106ef5b6u); f_106ef710();
  /* 106ef5b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ef5b9:;
  /* 106ef5b9 mov dword ptr [0x1070f744], 0 */
  w32((uint32_t)(0x1070f744), (0x0u));
  /* 106ef5c3 cmp dword ptr [0x1070f73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef5ca je 0x106ef5fd */
  if (C.zf) goto L_106ef5fd;
  /* 106ef5cc mov edx, dword ptr [0x1070f73c] */
  EDX = (r32((uint32_t)(0x1070f73c)));
  /* 106ef5d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106ef5d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef5d7 je 0x106ef5fd */
  if (C.zf) goto L_106ef5fd;
  /* 106ef5d9 cmp dword ptr [0x1070f740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef5e0 je 0x106ef5f6 */
  if (C.zf) goto L_106ef5f6;
  /* 106ef5e2 mov ecx, dword ptr [0x1070f740] */
  ECX = (r32((uint32_t)(0x1070f740)));
  /* 106ef5e8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106ef5eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ef5ed je 0x106ef5f6 */
  if (C.zf) goto L_106ef5f6;
  /* 106ef5ef call 0x106ef7a0 */
  push32(0x106ef5f4u); f_106ef7a0();
  /* 106ef5f4 jmp 0x106ef5fb */
  goto L_106ef5fb;
L_106ef5f6:;
  /* 106ef5f6 call 0x106efb90 */
  push32(0x106ef5fbu); f_106efb90();
L_106ef5fb:;
  /* 106ef5fb jmp 0x106ef61e */
  goto L_106ef61e;
L_106ef5fd:;
  /* 106ef5fd cmp dword ptr [0x1070f740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef604 je 0x106ef619 */
  if (C.zf) goto L_106ef619;
  /* 106ef606 mov eax, dword ptr [0x1070f740] */
  EAX = (r32((uint32_t)(0x1070f740)));
  /* 106ef60b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ef60e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ef610 je 0x106ef619 */
  if (C.zf) goto L_106ef619;
  /* 106ef612 call 0x106efd30 */
  push32(0x106ef617u); f_106efd30();
  /* 106ef617 jmp 0x106ef61e */
  goto L_106ef61e;
L_106ef619:;
  /* 106ef619 call 0x106efe30 */
  push32(0x106ef61eu); f_106efe30();
L_106ef61e:;
  /* 106ef61e cmp dword ptr [0x1070f744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef625 jne 0x106ef62e */
  if (!C.zf) goto L_106ef62e;
  /* 106ef627 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef629 jmp 0x106ef70c */
  goto L_106ef70c;
L_106ef62e:;
  /* 106ef62e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ef631 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef637 push edx */
  push32((uint32_t)(EDX));
  /* 106ef638 call 0x106efe60 */
  push32(0x106ef63du); f_106efe60();
  /* 106ef63d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef640 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ef643 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef647 je 0x106ef65c */
  if (C.zf) goto L_106ef65c;
  /* 106ef649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ef64c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ef651 push eax */
  push32((uint32_t)(EAX));
  /* 106ef652 call dword ptr [0x1071228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071228c))), 0x106ef658u);
  /* 106ef658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef65a jne 0x106ef663 */
  if (!C.zf) goto L_106ef663;
L_106ef65c:;
  /* 106ef65c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef65e jmp 0x106ef70c */
  goto L_106ef70c;
L_106ef663:;
  /* 106ef663 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ef665 mov ecx, dword ptr [0x1070f72c] */
  ECX = (r32((uint32_t)(0x1070f72c)));
  /* 106ef66b push ecx */
  push32((uint32_t)(ECX));
  /* 106ef66c call dword ptr [0x10712290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712290))), 0x106ef672u);
  /* 106ef672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef674 jne 0x106ef67d */
  if (!C.zf) goto L_106ef67d;
  /* 106ef676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef678 jmp 0x106ef70c */
  goto L_106ef70c;
L_106ef67d:;
  /* 106ef67d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef681 je 0x106ef6a8 */
  if (C.zf) goto L_106ef6a8;
  /* 106ef683 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ef686 mov ax, word ptr [0x1070f72c] */
  AX = (r16((uint32_t)(0x1070f72c)));
  /* 106ef68c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 106ef68f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ef692 mov dx, word ptr [0x1070f748] */
  DX = (r16((uint32_t)(0x1070f748)));
  /* 106ef699 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 106ef69d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ef6a0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 106ef6a4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_106ef6a8:;
  /* 106ef6a8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef6ac je 0x106ef707 */
  if (C.zf) goto L_106ef707;
  /* 106ef6ae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 106ef6b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ef6b3 push edx */
  push32((uint32_t)(EDX));
  /* 106ef6b4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 106ef6b9 mov eax, dword ptr [0x1070f72c] */
  EAX = (r32((uint32_t)(0x1070f72c)));
  /* 106ef6be push eax */
  push32((uint32_t)(EAX));
  /* 106ef6bf call dword ptr [0x1070f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f74c))), 0x106ef6c5u);
  /* 106ef6c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef6c7 jne 0x106ef6cd */
  if (!C.zf) goto L_106ef6cd;
  /* 106ef6c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef6cb jmp 0x106ef70c */
  goto L_106ef70c;
L_106ef6cd:;
  /* 106ef6cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 106ef6cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ef6d2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef6d5 push ecx */
  push32((uint32_t)(ECX));
  /* 106ef6d6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 106ef6db mov edx, dword ptr [0x1070f748] */
  EDX = (r32((uint32_t)(0x1070f748)));
  /* 106ef6e1 push edx */
  push32((uint32_t)(EDX));
  /* 106ef6e2 call dword ptr [0x1070f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f74c))), 0x106ef6e8u);
  /* 106ef6e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef6ea jne 0x106ef6f0 */
  if (!C.zf) goto L_106ef6f0;
  /* 106ef6ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ef6ee jmp 0x106ef70c */
  goto L_106ef70c;
L_106ef6f0:;
  /* 106ef6f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 106ef6f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ef6f5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef6fa push eax */
  push32((uint32_t)(EAX));
  /* 106ef6fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ef6fe push ecx */
  push32((uint32_t)(ECX));
  /* 106ef6ff call 0x106e6270 */
  push32(0x106ef704u); f_106e6270();
  /* 106ef704 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ef707:;
  /* 106ef707 mov eax, 1 */
  EAX = (0x1u);
L_106ef70c:;
  /* 106ef70c mov esp, ebp */
  ESP = (EBP);
  /* 106ef70e pop ebp */
  EBP = (pop32());
  /* 106ef70f ret  */
  ESPCHK(0x106ef510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f710 @ 0x106ef710 (130 bytes, 47 insns) */
void f_106ef710(void) {
  FTRACE(0x106ef710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ef710 push ebp */
  push32((uint32_t)(EBP));
  /* 106ef711 mov ebp, esp */
  EBP = (ESP);
  /* 106ef713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ef716 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 106ef71d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_106ef724:;
  /* 106ef724 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ef727 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef72a jg 0x106ef78e */
  if ((!C.zf&&C.sf==C.of)) goto L_106ef78e;
  /* 106ef72c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef730 je 0x106ef78e */
  if (C.zf) goto L_106ef78e;
  /* 106ef732 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ef735 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef738 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106ef739 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ef73b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106ef73d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ef740 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ef743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ef746 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 106ef749 push eax */
  push32((uint32_t)(EAX));
  /* 106ef74a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ef74d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106ef74f push edx */
  push32((uint32_t)(EDX));
  /* 106ef750 call 0x106f1e00 */
  push32(0x106ef755u); f_106f1e00();
  /* 106ef755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef758 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ef75b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef75f jne 0x106ef772 */
  if (!C.zf) goto L_106ef772;
  /* 106ef761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ef764 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ef767 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 106ef76b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ef76e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106ef770 jmp 0x106ef78c */
  goto L_106ef78c;
L_106ef772:;
  /* 106ef772 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef776 jge 0x106ef783 */
  if ((C.sf==C.of)) goto L_106ef783;
  /* 106ef778 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ef77b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ef77e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 106ef781 jmp 0x106ef78c */
  goto L_106ef78c;
L_106ef783:;
  /* 106ef783 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ef786 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef789 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106ef78c:;
  /* 106ef78c jmp 0x106ef724 */
  goto L_106ef724;
L_106ef78e:;
  /* 106ef78e mov esp, ebp */
  ESP = (EBP);
  /* 106ef790 pop ebp */
  EBP = (pop32());
  /* 106ef791 ret  */
  ESPCHK(0x106ef710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7a0 @ 0x106ef7a0 (186 bytes, 50 insns) */
void f_106ef7a0(void) {
  FTRACE(0x106ef7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ef7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ef7a1 mov ebp, esp */
  EBP = (ESP);
  /* 106ef7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ef7a4 mov eax, dword ptr [0x1070f73c] */
  EAX = (r32((uint32_t)(0x1070f73c)));
  /* 106ef7a9 push eax */
  push32((uint32_t)(EAX));
  /* 106ef7aa call 0x106e6560 */
  push32(0x106ef7afu); f_106e6560();
  /* 106ef7af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef7b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ef7b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef7b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 106ef7ba mov dword ptr [0x1070f738], ecx */
  w32((uint32_t)(0x1070f738), (ECX));
  /* 106ef7c0 mov edx, dword ptr [0x1070f740] */
  EDX = (r32((uint32_t)(0x1070f740)));
  /* 106ef7c6 push edx */
  push32((uint32_t)(EDX));
  /* 106ef7c7 call 0x106e6560 */
  push32(0x106ef7ccu); f_106e6560();
  /* 106ef7cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef7cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ef7d1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef7d4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 106ef7d7 mov dword ptr [0x1070f730], ecx */
  w32((uint32_t)(0x1070f730), (ECX));
  /* 106ef7dd mov dword ptr [0x1070f72c], 0 */
  w32((uint32_t)(0x1070f72c), (0x0u));
  /* 106ef7e7 cmp dword ptr [0x1070f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef7ee je 0x106ef7f9 */
  if (C.zf) goto L_106ef7f9;
  /* 106ef7f0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 106ef7f7 jmp 0x106ef80b */
  goto L_106ef80b;
L_106ef7f9:;
  /* 106ef7f9 mov edx, dword ptr [0x1070f73c] */
  EDX = (r32((uint32_t)(0x1070f73c)));
  /* 106ef7ff push edx */
  push32((uint32_t)(EDX));
  /* 106ef800 call 0x106f0240 */
  push32(0x106ef805u); f_106f0240();
  /* 106ef805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef808 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106ef80b:;
  /* 106ef80b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ef80e mov dword ptr [0x1070f734], eax */
  w32((uint32_t)(0x1070f734), (EAX));
  /* 106ef813 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ef815 push 0x106ef860 */
  push32((uint32_t)(0x106ef860u));
  /* 106ef81a call dword ptr [0x10712284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712284))), 0x106ef820u);
  /* 106ef820 mov ecx, dword ptr [0x1070f744] */
  ECX = (r32((uint32_t)(0x1070f744)));
  /* 106ef826 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 106ef82c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ef82e je 0x106ef84c */
  if (C.zf) goto L_106ef84c;
  /* 106ef830 mov edx, dword ptr [0x1070f744] */
  EDX = (r32((uint32_t)(0x1070f744)));
  /* 106ef836 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 106ef83c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ef83e je 0x106ef84c */
  if (C.zf) goto L_106ef84c;
  /* 106ef840 mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106ef845 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 106ef848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef84a jne 0x106ef856 */
  if (!C.zf) goto L_106ef856;
L_106ef84c:;
  /* 106ef84c mov dword ptr [0x1070f744], 0 */
  w32((uint32_t)(0x1070f744), (0x0u));
L_106ef856:;
  /* 106ef856 mov esp, ebp */
  ESP = (EBP);
  /* 106ef858 pop ebp */
  EBP = (pop32());
  /* 106ef859 ret  */
  ESPCHK(0x106ef7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f860 @ 0x106ef860 (804 bytes, 220 insns) */
void f_106ef860(void) {
  FTRACE(0x106ef860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ef860 push ebp */
  push32((uint32_t)(EBP));
  /* 106ef861 mov ebp, esp */
  EBP = (ESP);
  /* 106ef863 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ef866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ef869 push eax */
  push32((uint32_t)(EAX));
  /* 106ef86a call 0x106f01c0 */
  push32(0x106ef86fu); f_106f01c0();
  /* 106ef86f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef872 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 106ef875 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106ef877 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106ef87a push ecx */
  push32((uint32_t)(ECX));
  /* 106ef87b mov edx, dword ptr [0x1070f730] */
  EDX = (r32((uint32_t)(0x1070f730)));
  /* 106ef881 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ef883 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ef885 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 106ef88b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef891 push edx */
  push32((uint32_t)(EDX));
  /* 106ef892 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106ef895 push eax */
  push32((uint32_t)(EAX));
  /* 106ef896 call dword ptr [0x1070f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f74c))), 0x106ef89cu);
  /* 106ef89c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef89e jne 0x106ef8b4 */
  if (!C.zf) goto L_106ef8b4;
  /* 106ef8a0 mov dword ptr [0x1070f744], 0 */
  w32((uint32_t)(0x1070f744), (0x0u));
  /* 106ef8aa mov eax, 1 */
  EAX = (0x1u);
  /* 106ef8af jmp 0x106efb7e */
  goto L_106efb7e;
L_106ef8b4:;
  /* 106ef8b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106ef8b7 push ecx */
  push32((uint32_t)(ECX));
  /* 106ef8b8 mov edx, dword ptr [0x1070f740] */
  EDX = (r32((uint32_t)(0x1070f740)));
  /* 106ef8be push edx */
  push32((uint32_t)(EDX));
  /* 106ef8bf call 0x106f1e00 */
  push32(0x106ef8c4u); f_106f1e00();
  /* 106ef8c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef8c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef8c9 jne 0x106ef9ef */
  if (!C.zf) goto L_106ef9ef;
  /* 106ef8cf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106ef8d1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 106ef8d4 push eax */
  push32((uint32_t)(EAX));
  /* 106ef8d5 mov ecx, dword ptr [0x1070f738] */
  ECX = (r32((uint32_t)(0x1070f738)));
  /* 106ef8db neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ef8dd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ef8df and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 106ef8e5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef8eb push ecx */
  push32((uint32_t)(ECX));
  /* 106ef8ec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106ef8ef push edx */
  push32((uint32_t)(EDX));
  /* 106ef8f0 call dword ptr [0x1070f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f74c))), 0x106ef8f6u);
  /* 106ef8f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef8f8 jne 0x106ef90e */
  if (!C.zf) goto L_106ef90e;
  /* 106ef8fa mov dword ptr [0x1070f744], 0 */
  w32((uint32_t)(0x1070f744), (0x0u));
  /* 106ef904 mov eax, 1 */
  EAX = (0x1u);
  /* 106ef909 jmp 0x106efb7e */
  goto L_106efb7e;
L_106ef90e:;
  /* 106ef90e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 106ef911 push eax */
  push32((uint32_t)(EAX));
  /* 106ef912 mov ecx, dword ptr [0x1070f73c] */
  ECX = (r32((uint32_t)(0x1070f73c)));
  /* 106ef918 push ecx */
  push32((uint32_t)(ECX));
  /* 106ef919 call 0x106f1e00 */
  push32(0x106ef91eu); f_106f1e00();
  /* 106ef91e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef923 jne 0x106ef950 */
  if (!C.zf) goto L_106ef950;
  /* 106ef925 mov edx, dword ptr [0x1070f744] */
  EDX = (r32((uint32_t)(0x1070f744)));
  /* 106ef92b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 106ef931 mov dword ptr [0x1070f744], edx */
  w32((uint32_t)(0x1070f744), (EDX));
  /* 106ef937 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106ef93a mov dword ptr [0x1070f748], eax */
  w32((uint32_t)(0x1070f748), (EAX));
  /* 106ef93f mov ecx, dword ptr [0x1070f748] */
  ECX = (r32((uint32_t)(0x1070f748)));
  /* 106ef945 mov dword ptr [0x1070f72c], ecx */
  w32((uint32_t)(0x1070f72c), (ECX));
  /* 106ef94b jmp 0x106ef9ef */
  goto L_106ef9ef;
L_106ef950:;
  /* 106ef950 mov edx, dword ptr [0x1070f744] */
  EDX = (r32((uint32_t)(0x1070f744)));
  /* 106ef956 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 106ef959 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ef95b jne 0x106ef9ef */
  if (!C.zf) goto L_106ef9ef;
  /* 106ef961 cmp dword ptr [0x1070f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef968 je 0x106ef9bd */
  if (C.zf) goto L_106ef9bd;
  /* 106ef96a mov eax, dword ptr [0x1070f734] */
  EAX = (r32((uint32_t)(0x1070f734)));
  /* 106ef96f push eax */
  push32((uint32_t)(EAX));
  /* 106ef970 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106ef973 push ecx */
  push32((uint32_t)(ECX));
  /* 106ef974 mov edx, dword ptr [0x1070f73c] */
  EDX = (r32((uint32_t)(0x1070f73c)));
  /* 106ef97a push edx */
  push32((uint32_t)(EDX));
  /* 106ef97b call 0x106f1ed0 */
  push32(0x106ef980u); f_106f1ed0();
  /* 106ef980 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef983 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef985 jne 0x106ef9bd */
  if (!C.zf) goto L_106ef9bd;
  /* 106ef987 mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106ef98c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 106ef98e mov dword ptr [0x1070f744], eax */
  w32((uint32_t)(0x1070f744), (EAX));
  /* 106ef993 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106ef996 mov dword ptr [0x1070f748], ecx */
  w32((uint32_t)(0x1070f748), (ECX));
  /* 106ef99c mov edx, dword ptr [0x1070f73c] */
  EDX = (r32((uint32_t)(0x1070f73c)));
  /* 106ef9a2 push edx */
  push32((uint32_t)(EDX));
  /* 106ef9a3 call 0x106e6560 */
  push32(0x106ef9a8u); f_106e6560();
  /* 106ef9a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef9ab cmp eax, dword ptr [0x1070f734] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070f734))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ef9b1 jne 0x106ef9bb */
  if (!C.zf) goto L_106ef9bb;
  /* 106ef9b3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106ef9b6 mov dword ptr [0x1070f72c], eax */
  w32((uint32_t)(0x1070f72c), (EAX));
L_106ef9bb:;
  /* 106ef9bb jmp 0x106ef9ef */
  goto L_106ef9ef;
L_106ef9bd:;
  /* 106ef9bd mov ecx, dword ptr [0x1070f744] */
  ECX = (r32((uint32_t)(0x1070f744)));
  /* 106ef9c3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106ef9c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ef9c8 jne 0x106ef9ef */
  if (!C.zf) goto L_106ef9ef;
  /* 106ef9ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106ef9cd push edx */
  push32((uint32_t)(EDX));
  /* 106ef9ce call 0x106eff00 */
  push32(0x106ef9d3u); f_106eff00();
  /* 106ef9d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ef9d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ef9d8 je 0x106ef9ef */
  if (C.zf) goto L_106ef9ef;
  /* 106ef9da mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106ef9df or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 106ef9e1 mov dword ptr [0x1070f744], eax */
  w32((uint32_t)(0x1070f744), (EAX));
  /* 106ef9e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106ef9e9 mov dword ptr [0x1070f748], ecx */
  w32((uint32_t)(0x1070f748), (ECX));
L_106ef9ef:;
  /* 106ef9ef mov edx, dword ptr [0x1070f744] */
  EDX = (r32((uint32_t)(0x1070f744)));
  /* 106ef9f5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 106ef9fb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efa01 je 0x106efb71 */
  if (C.zf) goto L_106efb71;
  /* 106efa07 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106efa09 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 106efa0c push eax */
  push32((uint32_t)(EAX));
  /* 106efa0d mov ecx, dword ptr [0x1070f738] */
  ECX = (r32((uint32_t)(0x1070f738)));
  /* 106efa13 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106efa15 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106efa17 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 106efa1d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106efa23 push ecx */
  push32((uint32_t)(ECX));
  /* 106efa24 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efa27 push edx */
  push32((uint32_t)(EDX));
  /* 106efa28 call dword ptr [0x1070f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f74c))), 0x106efa2eu);
  /* 106efa2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efa30 jne 0x106efa46 */
  if (!C.zf) goto L_106efa46;
  /* 106efa32 mov dword ptr [0x1070f744], 0 */
  w32((uint32_t)(0x1070f744), (0x0u));
  /* 106efa3c mov eax, 1 */
  EAX = (0x1u);
  /* 106efa41 jmp 0x106efb7e */
  goto L_106efb7e;
L_106efa46:;
  /* 106efa46 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 106efa49 push eax */
  push32((uint32_t)(EAX));
  /* 106efa4a mov ecx, dword ptr [0x1070f73c] */
  ECX = (r32((uint32_t)(0x1070f73c)));
  /* 106efa50 push ecx */
  push32((uint32_t)(ECX));
  /* 106efa51 call 0x106f1e00 */
  push32(0x106efa56u); f_106f1e00();
  /* 106efa56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efa59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efa5b jne 0x106efb10 */
  if (!C.zf) goto L_106efb10;
  /* 106efa61 mov edx, dword ptr [0x1070f744] */
  EDX = (r32((uint32_t)(0x1070f744)));
  /* 106efa67 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 106efa6a mov dword ptr [0x1070f744], edx */
  w32((uint32_t)(0x1070f744), (EDX));
  /* 106efa70 cmp dword ptr [0x1070f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efa77 je 0x106efa9a */
  if (C.zf) goto L_106efa9a;
  /* 106efa79 mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106efa7e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 106efa81 mov dword ptr [0x1070f744], eax */
  w32((uint32_t)(0x1070f744), (EAX));
  /* 106efa86 cmp dword ptr [0x1070f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efa8d jne 0x106efa98 */
  if (!C.zf) goto L_106efa98;
  /* 106efa8f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efa92 mov dword ptr [0x1070f72c], ecx */
  w32((uint32_t)(0x1070f72c), (ECX));
L_106efa98:;
  /* 106efa98 jmp 0x106efb0e */
  goto L_106efb0e;
L_106efa9a:;
  /* 106efa9a cmp dword ptr [0x1070f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efaa1 je 0x106efaef */
  if (C.zf) goto L_106efaef;
  /* 106efaa3 mov edx, dword ptr [0x1070f73c] */
  EDX = (r32((uint32_t)(0x1070f73c)));
  /* 106efaa9 push edx */
  push32((uint32_t)(EDX));
  /* 106efaaa call 0x106e6560 */
  push32(0x106efaafu); f_106e6560();
  /* 106efaaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efab2 cmp eax, dword ptr [0x1070f734] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070f734))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efab8 jne 0x106efaef */
  if (!C.zf) goto L_106efaef;
  /* 106efaba push 1 */
  push32((uint32_t)(0x1u));
  /* 106efabc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efabf push eax */
  push32((uint32_t)(EAX));
  /* 106efac0 call 0x106eff50 */
  push32(0x106efac5u); f_106eff50();
  /* 106efac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efaca je 0x106efaed */
  if (C.zf) goto L_106efaed;
  /* 106efacc mov ecx, dword ptr [0x1070f744] */
  ECX = (r32((uint32_t)(0x1070f744)));
  /* 106efad2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 106efad5 mov dword ptr [0x1070f744], ecx */
  w32((uint32_t)(0x1070f744), (ECX));
  /* 106efadb cmp dword ptr [0x1070f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efae2 jne 0x106efaed */
  if (!C.zf) goto L_106efaed;
  /* 106efae4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efae7 mov dword ptr [0x1070f72c], edx */
  w32((uint32_t)(0x1070f72c), (EDX));
L_106efaed:;
  /* 106efaed jmp 0x106efb0e */
  goto L_106efb0e;
L_106efaef:;
  /* 106efaef mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106efaf4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 106efaf7 mov dword ptr [0x1070f744], eax */
  w32((uint32_t)(0x1070f744), (EAX));
  /* 106efafc cmp dword ptr [0x1070f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efb03 jne 0x106efb0e */
  if (!C.zf) goto L_106efb0e;
  /* 106efb05 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efb08 mov dword ptr [0x1070f72c], ecx */
  w32((uint32_t)(0x1070f72c), (ECX));
L_106efb0e:;
  /* 106efb0e jmp 0x106efb71 */
  goto L_106efb71;
L_106efb10:;
  /* 106efb10 cmp dword ptr [0x1070f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efb17 jne 0x106efb71 */
  if (!C.zf) goto L_106efb71;
  /* 106efb19 cmp dword ptr [0x1070f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efb20 je 0x106efb71 */
  if (C.zf) goto L_106efb71;
  /* 106efb22 mov edx, dword ptr [0x1070f734] */
  EDX = (r32((uint32_t)(0x1070f734)));
  /* 106efb28 push edx */
  push32((uint32_t)(EDX));
  /* 106efb29 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 106efb2c push eax */
  push32((uint32_t)(EAX));
  /* 106efb2d mov ecx, dword ptr [0x1070f73c] */
  ECX = (r32((uint32_t)(0x1070f73c)));
  /* 106efb33 push ecx */
  push32((uint32_t)(ECX));
  /* 106efb34 call 0x106f1ed0 */
  push32(0x106efb39u); f_106f1ed0();
  /* 106efb39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efb3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efb3e jne 0x106efb71 */
  if (!C.zf) goto L_106efb71;
  /* 106efb40 push 0 */
  push32((uint32_t)(0x0u));
  /* 106efb42 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efb45 push edx */
  push32((uint32_t)(EDX));
  /* 106efb46 call 0x106eff50 */
  push32(0x106efb4bu); f_106eff50();
  /* 106efb4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efb4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efb50 je 0x106efb71 */
  if (C.zf) goto L_106efb71;
  /* 106efb52 mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106efb57 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 106efb5a mov dword ptr [0x1070f744], eax */
  w32((uint32_t)(0x1070f744), (EAX));
  /* 106efb5f cmp dword ptr [0x1070f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efb66 jne 0x106efb71 */
  if (!C.zf) goto L_106efb71;
  /* 106efb68 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efb6b mov dword ptr [0x1070f72c], ecx */
  w32((uint32_t)(0x1070f72c), (ECX));
L_106efb71:;
  /* 106efb71 mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106efb76 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106efb79 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106efb7b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106efb7d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_106efb7e:;
  /* 106efb7e mov esp, ebp */
  ESP = (EBP);
  /* 106efb80 pop ebp */
  EBP = (pop32());
  /* 106efb81 ret 4 */
  ESPCHK(0x106ef860u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fb90 @ 0x106efb90 (116 bytes, 33 insns) */
void f_106efb90(void) {
  FTRACE(0x106efb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106efb90 push ebp */
  push32((uint32_t)(EBP));
  /* 106efb91 mov ebp, esp */
  EBP = (ESP);
  /* 106efb93 push ecx */
  push32((uint32_t)(ECX));
  /* 106efb94 mov eax, dword ptr [0x1070f73c] */
  EAX = (r32((uint32_t)(0x1070f73c)));
  /* 106efb99 push eax */
  push32((uint32_t)(EAX));
  /* 106efb9a call 0x106e6560 */
  push32(0x106efb9fu); f_106e6560();
  /* 106efb9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efba2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106efba4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efba7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 106efbaa mov dword ptr [0x1070f738], ecx */
  w32((uint32_t)(0x1070f738), (ECX));
  /* 106efbb0 cmp dword ptr [0x1070f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efbb7 je 0x106efbc2 */
  if (C.zf) goto L_106efbc2;
  /* 106efbb9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 106efbc0 jmp 0x106efbd4 */
  goto L_106efbd4;
L_106efbc2:;
  /* 106efbc2 mov edx, dword ptr [0x1070f73c] */
  EDX = (r32((uint32_t)(0x1070f73c)));
  /* 106efbc8 push edx */
  push32((uint32_t)(EDX));
  /* 106efbc9 call 0x106f0240 */
  push32(0x106efbceu); f_106f0240();
  /* 106efbce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efbd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106efbd4:;
  /* 106efbd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106efbd7 mov dword ptr [0x1070f734], eax */
  w32((uint32_t)(0x1070f734), (EAX));
  /* 106efbdc push 1 */
  push32((uint32_t)(0x1u));
  /* 106efbde push 0x106efc10 */
  push32((uint32_t)(0x106efc10u));
  /* 106efbe3 call dword ptr [0x10712284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712284))), 0x106efbe9u);
  /* 106efbe9 mov ecx, dword ptr [0x1070f744] */
  ECX = (r32((uint32_t)(0x1070f744)));
  /* 106efbef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106efbf2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106efbf4 jne 0x106efc00 */
  if (!C.zf) goto L_106efc00;
  /* 106efbf6 mov dword ptr [0x1070f744], 0 */
  w32((uint32_t)(0x1070f744), (0x0u));
L_106efc00:;
  /* 106efc00 mov esp, ebp */
  ESP = (EBP);
  /* 106efc02 pop ebp */
  EBP = (pop32());
  /* 106efc03 ret  */
  ESPCHK(0x106efb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc10 @ 0x106efc10 (287 bytes, 86 insns) */
void f_106efc10(void) {
  FTRACE(0x106efc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106efc10 push ebp */
  push32((uint32_t)(EBP));
  /* 106efc11 mov ebp, esp */
  EBP = (ESP);
  /* 106efc13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106efc16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106efc19 push eax */
  push32((uint32_t)(EAX));
  /* 106efc1a call 0x106f01c0 */
  push32(0x106efc1fu); f_106f01c0();
  /* 106efc1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efc22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 106efc25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106efc27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106efc2a push ecx */
  push32((uint32_t)(ECX));
  /* 106efc2b mov edx, dword ptr [0x1070f738] */
  EDX = (r32((uint32_t)(0x1070f738)));
  /* 106efc31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106efc33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106efc35 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 106efc3b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106efc41 push edx */
  push32((uint32_t)(EDX));
  /* 106efc42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efc45 push eax */
  push32((uint32_t)(EAX));
  /* 106efc46 call dword ptr [0x1070f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f74c))), 0x106efc4cu);
  /* 106efc4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efc4e jne 0x106efc64 */
  if (!C.zf) goto L_106efc64;
  /* 106efc50 mov dword ptr [0x1070f744], 0 */
  w32((uint32_t)(0x1070f744), (0x0u));
  /* 106efc5a mov eax, 1 */
  EAX = (0x1u);
  /* 106efc5f jmp 0x106efd29 */
  goto L_106efd29;
L_106efc64:;
  /* 106efc64 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106efc67 push ecx */
  push32((uint32_t)(ECX));
  /* 106efc68 mov edx, dword ptr [0x1070f73c] */
  EDX = (r32((uint32_t)(0x1070f73c)));
  /* 106efc6e push edx */
  push32((uint32_t)(EDX));
  /* 106efc6f call 0x106f1e00 */
  push32(0x106efc74u); f_106f1e00();
  /* 106efc74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efc77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efc79 jne 0x106efcb9 */
  if (!C.zf) goto L_106efcb9;
  /* 106efc7b cmp dword ptr [0x1070f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efc82 jne 0x106efc96 */
  if (!C.zf) goto L_106efc96;
  /* 106efc84 push 1 */
  push32((uint32_t)(0x1u));
  /* 106efc86 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efc89 push eax */
  push32((uint32_t)(EAX));
  /* 106efc8a call 0x106eff50 */
  push32(0x106efc8fu); f_106eff50();
  /* 106efc8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efc92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efc94 je 0x106efcb7 */
  if (C.zf) goto L_106efcb7;
L_106efc96:;
  /* 106efc96 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efc99 mov dword ptr [0x1070f748], ecx */
  w32((uint32_t)(0x1070f748), (ECX));
  /* 106efc9f mov edx, dword ptr [0x1070f748] */
  EDX = (r32((uint32_t)(0x1070f748)));
  /* 106efca5 mov dword ptr [0x1070f72c], edx */
  w32((uint32_t)(0x1070f72c), (EDX));
  /* 106efcab mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106efcb0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 106efcb2 mov dword ptr [0x1070f744], eax */
  w32((uint32_t)(0x1070f744), (EAX));
L_106efcb7:;
  /* 106efcb7 jmp 0x106efd1c */
  goto L_106efd1c;
L_106efcb9:;
  /* 106efcb9 cmp dword ptr [0x1070f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efcc0 jne 0x106efd1c */
  if (!C.zf) goto L_106efd1c;
  /* 106efcc2 cmp dword ptr [0x1070f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efcc9 je 0x106efd1c */
  if (C.zf) goto L_106efd1c;
  /* 106efccb mov ecx, dword ptr [0x1070f734] */
  ECX = (r32((uint32_t)(0x1070f734)));
  /* 106efcd1 push ecx */
  push32((uint32_t)(ECX));
  /* 106efcd2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 106efcd5 push edx */
  push32((uint32_t)(EDX));
  /* 106efcd6 mov eax, dword ptr [0x1070f73c] */
  EAX = (r32((uint32_t)(0x1070f73c)));
  /* 106efcdb push eax */
  push32((uint32_t)(EAX));
  /* 106efcdc call 0x106f1ed0 */
  push32(0x106efce1u); f_106f1ed0();
  /* 106efce1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efce6 jne 0x106efd1c */
  if (!C.zf) goto L_106efd1c;
  /* 106efce8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106efcea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efced push ecx */
  push32((uint32_t)(ECX));
  /* 106efcee call 0x106eff50 */
  push32(0x106efcf3u); f_106eff50();
  /* 106efcf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efcf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efcf8 je 0x106efd1c */
  if (C.zf) goto L_106efd1c;
  /* 106efcfa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efcfd mov dword ptr [0x1070f748], edx */
  w32((uint32_t)(0x1070f748), (EDX));
  /* 106efd03 mov eax, dword ptr [0x1070f748] */
  EAX = (r32((uint32_t)(0x1070f748)));
  /* 106efd08 mov dword ptr [0x1070f72c], eax */
  w32((uint32_t)(0x1070f72c), (EAX));
  /* 106efd0d mov ecx, dword ptr [0x1070f744] */
  ECX = (r32((uint32_t)(0x1070f744)));
  /* 106efd13 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106efd16 mov dword ptr [0x1070f744], ecx */
  w32((uint32_t)(0x1070f744), (ECX));
L_106efd1c:;
  /* 106efd1c mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106efd21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106efd24 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106efd26 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106efd28 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_106efd29:;
  /* 106efd29 mov esp, ebp */
  ESP = (EBP);
  /* 106efd2b pop ebp */
  EBP = (pop32());
  /* 106efd2c ret 4 */
  ESPCHK(0x106efc10u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fd30 @ 0x106efd30 (69 bytes, 20 insns) */
void f_106efd30(void) {
  FTRACE(0x106efd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106efd30 push ebp */
  push32((uint32_t)(EBP));
  /* 106efd31 mov ebp, esp */
  EBP = (ESP);
  /* 106efd33 mov eax, dword ptr [0x1070f740] */
  EAX = (r32((uint32_t)(0x1070f740)));
  /* 106efd38 push eax */
  push32((uint32_t)(EAX));
  /* 106efd39 call 0x106e6560 */
  push32(0x106efd3eu); f_106e6560();
  /* 106efd3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efd41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106efd43 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efd46 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 106efd49 mov dword ptr [0x1070f730], ecx */
  w32((uint32_t)(0x1070f730), (ECX));
  /* 106efd4f push 1 */
  push32((uint32_t)(0x1u));
  /* 106efd51 push 0x106efd80 */
  push32((uint32_t)(0x106efd80u));
  /* 106efd56 call dword ptr [0x10712284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712284))), 0x106efd5cu);
  /* 106efd5c mov edx, dword ptr [0x1070f744] */
  EDX = (r32((uint32_t)(0x1070f744)));
  /* 106efd62 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106efd65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106efd67 jne 0x106efd73 */
  if (!C.zf) goto L_106efd73;
  /* 106efd69 mov dword ptr [0x1070f744], 0 */
  w32((uint32_t)(0x1070f744), (0x0u));
L_106efd73:;
  /* 106efd73 pop ebp */
  EBP = (pop32());
  /* 106efd74 ret  */
  ESPCHK(0x106efd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd80 @ 0x106efd80 (172 bytes, 54 insns) */
void f_106efd80(void) {
  FTRACE(0x106efd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106efd80 push ebp */
  push32((uint32_t)(EBP));
  /* 106efd81 mov ebp, esp */
  EBP = (ESP);
  /* 106efd83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106efd86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106efd89 push eax */
  push32((uint32_t)(EAX));
  /* 106efd8a call 0x106f01c0 */
  push32(0x106efd8fu); f_106f01c0();
  /* 106efd8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efd92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 106efd95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106efd97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106efd9a push ecx */
  push32((uint32_t)(ECX));
  /* 106efd9b mov edx, dword ptr [0x1070f730] */
  EDX = (r32((uint32_t)(0x1070f730)));
  /* 106efda1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106efda3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106efda5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 106efdab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106efdb1 push edx */
  push32((uint32_t)(EDX));
  /* 106efdb2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efdb5 push eax */
  push32((uint32_t)(EAX));
  /* 106efdb6 call dword ptr [0x1070f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f74c))), 0x106efdbcu);
  /* 106efdbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efdbe jne 0x106efdd1 */
  if (!C.zf) goto L_106efdd1;
  /* 106efdc0 mov dword ptr [0x1070f744], 0 */
  w32((uint32_t)(0x1070f744), (0x0u));
  /* 106efdca mov eax, 1 */
  EAX = (0x1u);
  /* 106efdcf jmp 0x106efe26 */
  goto L_106efe26;
L_106efdd1:;
  /* 106efdd1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106efdd4 push ecx */
  push32((uint32_t)(ECX));
  /* 106efdd5 mov edx, dword ptr [0x1070f740] */
  EDX = (r32((uint32_t)(0x1070f740)));
  /* 106efddb push edx */
  push32((uint32_t)(EDX));
  /* 106efddc call 0x106f1e00 */
  push32(0x106efde1u); f_106f1e00();
  /* 106efde1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efde4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efde6 jne 0x106efe19 */
  if (!C.zf) goto L_106efe19;
  /* 106efde8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efdeb push eax */
  push32((uint32_t)(EAX));
  /* 106efdec call 0x106eff00 */
  push32(0x106efdf1u); f_106eff00();
  /* 106efdf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efdf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efdf6 je 0x106efe19 */
  if (C.zf) goto L_106efe19;
  /* 106efdf8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106efdfb mov dword ptr [0x1070f748], ecx */
  w32((uint32_t)(0x1070f748), (ECX));
  /* 106efe01 mov edx, dword ptr [0x1070f748] */
  EDX = (r32((uint32_t)(0x1070f748)));
  /* 106efe07 mov dword ptr [0x1070f72c], edx */
  w32((uint32_t)(0x1070f72c), (EDX));
  /* 106efe0d mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106efe12 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 106efe14 mov dword ptr [0x1070f744], eax */
  w32((uint32_t)(0x1070f744), (EAX));
L_106efe19:;
  /* 106efe19 mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106efe1e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106efe21 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106efe23 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106efe25 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_106efe26:;
  /* 106efe26 mov esp, ebp */
  ESP = (EBP);
  /* 106efe28 pop ebp */
  EBP = (pop32());
  /* 106efe29 ret 4 */
  ESPCHK(0x106efd80u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fe30 @ 0x106efe30 (43 bytes, 11 insns) */
void f_106efe30(void) {
  FTRACE(0x106efe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106efe30 push ebp */
  push32((uint32_t)(EBP));
  /* 106efe31 mov ebp, esp */
  EBP = (ESP);
  /* 106efe33 mov eax, dword ptr [0x1070f744] */
  EAX = (r32((uint32_t)(0x1070f744)));
  /* 106efe38 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 106efe3d mov dword ptr [0x1070f744], eax */
  w32((uint32_t)(0x1070f744), (EAX));
  /* 106efe42 call dword ptr [0x10712280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712280))), 0x106efe48u);
  /* 106efe48 mov dword ptr [0x1070f748], eax */
  w32((uint32_t)(0x1070f748), (EAX));
  /* 106efe4d mov ecx, dword ptr [0x1070f748] */
  ECX = (r32((uint32_t)(0x1070f748)));
  /* 106efe53 mov dword ptr [0x1070f72c], ecx */
  w32((uint32_t)(0x1070f72c), (ECX));
  /* 106efe59 pop ebp */
  EBP = (pop32());
  /* 106efe5a ret  */
  ESPCHK(0x106efe30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe60 @ 0x106efe60 (155 bytes, 57 insns) */
void f_106efe60(void) {
  FTRACE(0x106efe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106efe60 push ebp */
  push32((uint32_t)(EBP));
  /* 106efe61 mov ebp, esp */
  EBP = (ESP);
  /* 106efe63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106efe66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106efe6a je 0x106efe8b */
  if (C.zf) goto L_106efe8b;
  /* 106efe6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106efe6f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106efe72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106efe74 je 0x106efe8b */
  if (C.zf) goto L_106efe8b;
  /* 106efe76 push 0x1070b75c */
  push32((uint32_t)(0x1070b75cu));
  /* 106efe7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106efe7e push edx */
  push32((uint32_t)(EDX));
  /* 106efe7f call 0x106ef3c0 */
  push32(0x106efe84u); f_106ef3c0();
  /* 106efe84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efe87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efe89 jne 0x106efeb3 */
  if (!C.zf) goto L_106efeb3;
L_106efe8b:;
  /* 106efe8b push 8 */
  push32((uint32_t)(0x8u));
  /* 106efe8d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 106efe90 push eax */
  push32((uint32_t)(EAX));
  /* 106efe91 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 106efe96 mov ecx, dword ptr [0x1070f748] */
  ECX = (r32((uint32_t)(0x1070f748)));
  /* 106efe9c push ecx */
  push32((uint32_t)(ECX));
  /* 106efe9d call dword ptr [0x1070f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f74c))), 0x106efea3u);
  /* 106efea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efea5 jne 0x106efeab */
  if (!C.zf) goto L_106efeab;
  /* 106efea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106efea9 jmp 0x106efef7 */
  goto L_106efef7;
L_106efeab:;
  /* 106efeab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 106efeae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106efeb1 jmp 0x106efeeb */
  goto L_106efeeb;
L_106efeb3:;
  /* 106efeb3 push 0x1070b758 */
  push32((uint32_t)(0x1070b758u));
  /* 106efeb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106efebb push eax */
  push32((uint32_t)(EAX));
  /* 106efebc call 0x106ef3c0 */
  push32(0x106efec1u); f_106ef3c0();
  /* 106efec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106efec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efec6 jne 0x106efeeb */
  if (!C.zf) goto L_106efeeb;
  /* 106efec8 push 8 */
  push32((uint32_t)(0x8u));
  /* 106efeca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 106efecd push ecx */
  push32((uint32_t)(ECX));
  /* 106efece push 0xb */
  push32((uint32_t)(0xbu));
  /* 106efed0 mov edx, dword ptr [0x1070f748] */
  EDX = (r32((uint32_t)(0x1070f748)));
  /* 106efed6 push edx */
  push32((uint32_t)(EDX));
  /* 106efed7 call dword ptr [0x1070f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f74c))), 0x106efeddu);
  /* 106efedd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106efedf jne 0x106efee5 */
  if (!C.zf) goto L_106efee5;
  /* 106efee1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106efee3 jmp 0x106efef7 */
  goto L_106efef7;
L_106efee5:;
  /* 106efee5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 106efee8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106efeeb:;
  /* 106efeeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106efeee push ecx */
  push32((uint32_t)(ECX));
  /* 106efeef call 0x106f1fe0 */
  push32(0x106efef4u); f_106f1fe0();
  /* 106efef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106efef7:;
  /* 106efef7 mov esp, ebp */
  ESP = (EBP);
  /* 106efef9 pop ebp */
  EBP = (pop32());
  /* 106efefa ret  */
  ESPCHK(0x106efe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff00 @ 0x106eff00 (79 bytes, 26 insns) */
void f_106eff00(void) {
  FTRACE(0x106eff00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eff00 push ebp */
  push32((uint32_t)(EBP));
  /* 106eff01 mov ebp, esp */
  EBP = (ESP);
  /* 106eff03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eff06 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 106eff0a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 106eff0e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106eff15 jmp 0x106eff20 */
  goto L_106eff20;
L_106eff17:;
  /* 106eff17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eff1a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106eff1d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106eff20:;
  /* 106eff20 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eff24 jae 0x106eff46 */
  if (!C.cf) goto L_106eff46;
  /* 106eff26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eff29 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106eff2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106eff32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106eff34 mov cx, word ptr [eax*2 + 0x1070e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1070e9c4)));
  /* 106eff3c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eff3e jne 0x106eff44 */
  if (!C.zf) goto L_106eff44;
  /* 106eff40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106eff42 jmp 0x106eff4b */
  goto L_106eff4b;
L_106eff44:;
  /* 106eff44 jmp 0x106eff17 */
  goto L_106eff17;
L_106eff46:;
  /* 106eff46 mov eax, 1 */
  EAX = (0x1u);
L_106eff4b:;
  /* 106eff4b mov esp, ebp */
  ESP = (EBP);
  /* 106eff4d pop ebp */
  EBP = (pop32());
  /* 106eff4e ret  */
  ESPCHK(0x106eff00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x106eff50 (135 bytes, 48 insns) */
void f_106eff50(void) {
  FTRACE(0x106eff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106eff50 push ebp */
  push32((uint32_t)(EBP));
  /* 106eff51 mov ebp, esp */
  EBP = (ESP);
  /* 106eff53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106eff56 push esi */
  push32((uint32_t)(ESI));
  /* 106eff57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106eff5a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106eff5f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 106eff64 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106eff69 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 106eff6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106eff71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106eff74 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106eff76 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 106eff79 push ecx */
  push32((uint32_t)(ECX));
  /* 106eff7a push 1 */
  push32((uint32_t)(0x1u));
  /* 106eff7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106eff7f push edx */
  push32((uint32_t)(EDX));
  /* 106eff80 call dword ptr [0x1070f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f74c))), 0x106eff86u);
  /* 106eff86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106eff88 jne 0x106eff8e */
  if (!C.zf) goto L_106eff8e;
  /* 106eff8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106eff8c jmp 0x106effd2 */
  goto L_106effd2;
L_106eff8e:;
  /* 106eff8e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 106eff91 push eax */
  push32((uint32_t)(EAX));
  /* 106eff92 call 0x106f01c0 */
  push32(0x106eff97u); f_106f01c0();
  /* 106eff97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106eff9a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106eff9d je 0x106effcd */
  if (C.zf) goto L_106effcd;
  /* 106eff9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106effa3 je 0x106effcd */
  if (C.zf) goto L_106effcd;
  /* 106effa5 mov ecx, dword ptr [0x1070f73c] */
  ECX = (r32((uint32_t)(0x1070f73c)));
  /* 106effab push ecx */
  push32((uint32_t)(ECX));
  /* 106effac call 0x106f0240 */
  push32(0x106effb1u); f_106f0240();
  /* 106effb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106effb4 mov esi, eax */
  ESI = (EAX);
  /* 106effb6 mov edx, dword ptr [0x1070f73c] */
  EDX = (r32((uint32_t)(0x1070f73c)));
  /* 106effbc push edx */
  push32((uint32_t)(EDX));
  /* 106effbd call 0x106e6560 */
  push32(0x106effc2u); f_106e6560();
  /* 106effc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106effc5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106effc7 jne 0x106effcd */
  if (!C.zf) goto L_106effcd;
  /* 106effc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106effcb jmp 0x106effd2 */
  goto L_106effd2;
L_106effcd:;
  /* 106effcd mov eax, 1 */
  EAX = (0x1u);
L_106effd2:;
  /* 106effd2 pop esi */
  ESI = (pop32());
  /* 106effd3 mov esp, ebp */
  ESP = (EBP);
  /* 106effd5 pop ebp */
  EBP = (pop32());
  /* 106effd6 ret  */
  ESPCHK(0x106eff50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffe0 @ 0x106effe0 (77 bytes, 18 insns) */
void f_106effe0(void) {
  FTRACE(0x106effe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106effe0 push ebp */
  push32((uint32_t)(EBP));
  /* 106effe1 mov ebp, esp */
  EBP = (ESP);
  /* 106effe3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106effe9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 106efff3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 106efff9 push eax */
  push32((uint32_t)(EAX));
  /* 106efffa call dword ptr [0x1071227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071227c))), 0x106f0000u);
  /* 106f0000 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f0002 je 0x106f0019 */
  if (C.zf) goto L_106f0019;
  /* 106f0004 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f000b jne 0x106f0019 */
  if (!C.zf) goto L_106f0019;
  /* 106f000d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 106f0017 jmp 0x106f0023 */
  goto L_106f0023;
L_106f0019:;
  /* 106f0019 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_106f0023:;
  /* 106f0023 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 106f0029 mov esp, ebp */
  ESP = (EBP);
  /* 106f002b pop ebp */
  EBP = (pop32());
  /* 106f002c ret  */
  ESPCHK(0x106effe0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x106f0030 (388 bytes, 118 insns) */
void f_106f0030(void) {
  FTRACE(0x106f0030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f0030 push ebp */
  push32((uint32_t)(EBP));
  /* 106f0031 mov ebp, esp */
  EBP = (ESP);
  /* 106f0033 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0036 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106f003d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 106f0044 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106f004b:;
  /* 106f004b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f004e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0051 jg 0x106f0198 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f0198;
  /* 106f0057 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106f005a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f005d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106f005e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0060 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106f0062 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106f0065 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0068 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f006b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f006e cmp edx, dword ptr [ecx + 0x1070e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1070e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0074 jne 0x106f016e */
  if (!C.zf) goto L_106f016e;
  /* 106f007a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f007d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106f0080 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0084 ja 0x106f00a7 */
  if ((!C.cf&&!C.zf)) goto L_106f00a7;
  /* 106f0086 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f008a je 0x106f0119 */
  if (C.zf) goto L_106f0119;
  /* 106f0090 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0094 je 0x106f00c4 */
  if (C.zf) goto L_106f00c4;
  /* 106f0096 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f009a je 0x106f00e6 */
  if (C.zf) goto L_106f00e6;
  /* 106f009c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f00a0 je 0x106f0108 */
  if (C.zf) goto L_106f0108;
  /* 106f00a2 jmp 0x106f0138 */
  goto L_106f0138;
L_106f00a7:;
  /* 106f00a7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f00ae je 0x106f00d5 */
  if (C.zf) goto L_106f00d5;
  /* 106f00b0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f00b7 je 0x106f00f7 */
  if (C.zf) goto L_106f00f7;
  /* 106f00b9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f00c0 je 0x106f012a */
  if (C.zf) goto L_106f012a;
  /* 106f00c2 jmp 0x106f0138 */
  goto L_106f0138;
L_106f00c4:;
  /* 106f00c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f00c7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f00ca add ecx, 0x1070e524 */
  { uint32_t _a=(ECX),_b=(0x1070e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f00d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106f00d3 jmp 0x106f0138 */
  goto L_106f0138;
L_106f00d5:;
  /* 106f00d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f00d8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f00db mov eax, dword ptr [edx + 0x1070e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1070e52c)));
  /* 106f00e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f00e4 jmp 0x106f0138 */
  goto L_106f0138;
L_106f00e6:;
  /* 106f00e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f00e9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f00ec add ecx, 0x1070e530 */
  { uint32_t _a=(ECX),_b=(0x1070e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f00f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106f00f5 jmp 0x106f0138 */
  goto L_106f0138;
L_106f00f7:;
  /* 106f00f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f00fa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f00fd mov eax, dword ptr [edx + 0x1070e534] */
  EAX = (r32((uint32_t)(EDX + 0x1070e534)));
  /* 106f0103 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106f0106 jmp 0x106f0138 */
  goto L_106f0138;
L_106f0108:;
  /* 106f0108 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f010b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f010e add ecx, 0x1070e538 */
  { uint32_t _a=(ECX),_b=(0x1070e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0114 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106f0117 jmp 0x106f0138 */
  goto L_106f0138;
L_106f0119:;
  /* 106f0119 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f011c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f011f add edx, 0x1070e53c */
  { uint32_t _a=(EDX),_b=(0x1070e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0125 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106f0128 jmp 0x106f0138 */
  goto L_106f0138;
L_106f012a:;
  /* 106f012a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f012d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f0130 add eax, 0x1070e544 */
  { uint32_t _a=(EAX),_b=(0x1070e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0135 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106f0138:;
  /* 106f0138 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f013c je 0x106f0144 */
  if (C.zf) goto L_106f0144;
  /* 106f013e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0142 jge 0x106f0146 */
  if ((C.sf==C.of)) goto L_106f0146;
L_106f0144:;
  /* 106f0144 jmp 0x106f0198 */
  goto L_106f0198;
L_106f0146:;
  /* 106f0146 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f0149 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f014c push ecx */
  push32((uint32_t)(ECX));
  /* 106f014d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f0150 push edx */
  push32((uint32_t)(EDX));
  /* 106f0151 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0154 push eax */
  push32((uint32_t)(EAX));
  /* 106f0155 call 0x106e6f50 */
  push32(0x106f015au); f_106e6f50();
  /* 106f015a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f015d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f0160 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0163 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 106f0167 mov eax, 1 */
  EAX = (0x1u);
  /* 106f016c jmp 0x106f01ae */
  goto L_106f01ae;
L_106f016e:;
  /* 106f016e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0171 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f0174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0177 cmp eax, dword ptr [edx + 0x1070e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1070e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f017d jae 0x106f018a */
  if (!C.cf) goto L_106f018a;
  /* 106f017f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f0182 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0185 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106f0188 jmp 0x106f0193 */
  goto L_106f0193;
L_106f018a:;
  /* 106f018a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106f018d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0190 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106f0193:;
  /* 106f0193 jmp 0x106f004b */
  goto L_106f004b;
L_106f0198:;
  /* 106f0198 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106f019b push eax */
  push32((uint32_t)(EAX));
  /* 106f019c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106f019f push ecx */
  push32((uint32_t)(ECX));
  /* 106f01a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106f01a3 push edx */
  push32((uint32_t)(EDX));
  /* 106f01a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f01a7 push eax */
  push32((uint32_t)(EAX));
  /* 106f01a8 call dword ptr [0x10712288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712288))), 0x106f01aeu);
L_106f01ae:;
  /* 106f01ae mov esp, ebp */
  ESP = (EBP);
  /* 106f01b0 pop ebp */
  EBP = (pop32());
  /* 106f01b1 ret 0x10 */
  ESPCHK(0x106f0030u, _esp0);
  ESP += 20; return;
}

/* FUN_100101c0 @ 0x106f01c0 (118 bytes, 42 insns) */
void f_106f01c0(void) {
  FTRACE(0x106f01c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f01c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f01c1 mov ebp, esp */
  EBP = (ESP);
  /* 106f01c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f01c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106f01cd:;
  /* 106f01cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f01d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f01d2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 106f01d5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106f01d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f01dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f01df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106f01e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f01e4 je 0x106f022f */
  if (C.zf) goto L_106f022f;
  /* 106f01e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106f01ea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f01ed jl 0x106f0202 */
  if ((C.sf!=C.of)) goto L_106f0202;
  /* 106f01ef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106f01f3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f01f6 jg 0x106f0202 */
  if ((!C.zf&&C.sf==C.of)) goto L_106f0202;
  /* 106f01f8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 106f01fb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106f01fd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 106f0200 jmp 0x106f021c */
  goto L_106f021c;
L_106f0202:;
  /* 106f0202 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106f0206 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0209 jl 0x106f021c */
  if ((C.sf!=C.of)) goto L_106f021c;
  /* 106f020b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106f020f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0212 jg 0x106f021c */
  if ((!C.zf&&C.sf==C.of)) goto L_106f021c;
  /* 106f0214 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 106f0217 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106f0219 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_106f021c:;
  /* 106f021c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f021f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106f0222 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106f0226 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 106f022a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f022d jmp 0x106f01cd */
  goto L_106f01cd;
L_106f022f:;
  /* 106f022f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f0232 mov esp, ebp */
  ESP = (EBP);
  /* 106f0234 pop ebp */
  EBP = (pop32());
  /* 106f0235 ret  */
  ESPCHK(0x106f01c0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x106f0240 (101 bytes, 36 insns) */
void f_106f0240(void) {
  FTRACE(0x106f0240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f0240 push ebp */
  push32((uint32_t)(EBP));
  /* 106f0241 mov ebp, esp */
  EBP = (ESP);
  /* 106f0243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106f0246 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106f024d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0250 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106f0252 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 106f0255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0258 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f025b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_106f025e:;
  /* 106f025e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 106f0262 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0265 jl 0x106f0270 */
  if ((C.sf!=C.of)) goto L_106f0270;
  /* 106f0267 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 106f026b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f026e jle 0x106f0282 */
  if ((C.zf||C.sf!=C.of)) goto L_106f0282;
L_106f0270:;
  /* 106f0270 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 106f0274 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0277 jl 0x106f029e */
  if ((C.sf!=C.of)) goto L_106f029e;
  /* 106f0279 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 106f027d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0280 jg 0x106f029e */
  if ((!C.zf&&C.sf==C.of)) goto L_106f029e;
L_106f0282:;
  /* 106f0282 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f0285 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0288 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106f028b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f028e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106f0290 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 106f0293 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0296 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0299 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106f029c jmp 0x106f025e */
  goto L_106f025e;
L_106f029e:;
  /* 106f029e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106f02a1 mov esp, ebp */
  ESP = (EBP);
  /* 106f02a3 pop ebp */
  EBP = (pop32());
  /* 106f02a4 ret  */
  ESPCHK(0x106f0240u, _esp0);
  ESP += 4; return;
}

/* FUN_100102b0 @ 0x106f02b0 (122 bytes, 39 insns) */
void f_106f02b0(void) {
  FTRACE(0x106f02b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f02b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f02b1 mov ebp, esp */
  EBP = (ESP);
  /* 106f02b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106f02b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f02b7 cmp eax, dword ptr [0x10710fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10710fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f02bd jae 0x106f02e1 */
  if (!C.cf) goto L_106f02e1;
  /* 106f02bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f02c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106f02c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f02c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106f02cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f02ce mov eax, dword ptr [ecx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106f02d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106f02da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106f02dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f02df jne 0x106f02fc */
  if (!C.zf) goto L_106f02fc;
L_106f02e1:;
  /* 106f02e1 call 0x106eb600 */
  push32(0x106f02e6u); f_106eb600();
  /* 106f02e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106f02ec call 0x106eb610 */
  push32(0x106f02f1u); f_106eb610();
  /* 106f02f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106f02f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f02fa jmp 0x106f0326 */
  goto L_106f0326;
L_106f02fc:;
  /* 106f02fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f02ff push edx */
  push32((uint32_t)(EDX));
  /* 106f0300 call 0x106ece20 */
  push32(0x106f0305u); f_106ece20();
  /* 106f0305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0308 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f030b push eax */
  push32((uint32_t)(EAX));
  /* 106f030c call 0x106f0330 */
  push32(0x106f0311u); f_106f0330();
  /* 106f0311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0314 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106f0317 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f031a push ecx */
  push32((uint32_t)(ECX));
  /* 106f031b call 0x106eceb0 */
  push32(0x106f0320u); f_106eceb0();
  /* 106f0320 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0323 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106f0326:;
  /* 106f0326 mov esp, ebp */
  ESP = (EBP);
  /* 106f0328 pop ebp */
  EBP = (pop32());
  /* 106f0329 ret  */
  ESPCHK(0x106f02b0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x106f0330 (170 bytes, 59 insns) */
void f_106f0330(void) {
  FTRACE(0x106f0330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f0330 push ebp */
  push32((uint32_t)(EBP));
  /* 106f0331 mov ebp, esp */
  EBP = (ESP);
  /* 106f0333 push ecx */
  push32((uint32_t)(ECX));
  /* 106f0334 push esi */
  push32((uint32_t)(ESI));
  /* 106f0335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0338 push eax */
  push32((uint32_t)(EAX));
  /* 106f0339 call 0x106ecca0 */
  push32(0x106f033eu); f_106ecca0();
  /* 106f033e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0341 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0344 je 0x106f0383 */
  if (C.zf) goto L_106f0383;
  /* 106f0346 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f034a je 0x106f0352 */
  if (C.zf) goto L_106f0352;
  /* 106f034c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0350 jne 0x106f036c */
  if (!C.zf) goto L_106f036c;
L_106f0352:;
  /* 106f0352 push 1 */
  push32((uint32_t)(0x1u));
  /* 106f0354 call 0x106ecca0 */
  push32(0x106f0359u); f_106ecca0();
  /* 106f0359 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f035c mov esi, eax */
  ESI = (EAX);
  /* 106f035e push 2 */
  push32((uint32_t)(0x2u));
  /* 106f0360 call 0x106ecca0 */
  push32(0x106f0365u); f_106ecca0();
  /* 106f0365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0368 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f036a je 0x106f0383 */
  if (C.zf) goto L_106f0383;
L_106f036c:;
  /* 106f036c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f036f push ecx */
  push32((uint32_t)(ECX));
  /* 106f0370 call 0x106ecca0 */
  push32(0x106f0375u); f_106ecca0();
  /* 106f0375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0378 push eax */
  push32((uint32_t)(EAX));
  /* 106f0379 call dword ptr [0x10712278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712278))), 0x106f037fu);
  /* 106f037f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f0381 je 0x106f038c */
  if (C.zf) goto L_106f038c;
L_106f0383:;
  /* 106f0383 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106f038a jmp 0x106f0395 */
  goto L_106f0395;
L_106f038c:;
  /* 106f038c call dword ptr [0x1071230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071230c))), 0x106f0392u);
  /* 106f0392 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106f0395:;
  /* 106f0395 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0398 push edx */
  push32((uint32_t)(EDX));
  /* 106f0399 call 0x106ecbc0 */
  push32(0x106f039eu); f_106ecbc0();
  /* 106f039e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f03a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f03a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106f03a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f03aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106f03ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106f03b0 mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106f03b7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 106f03bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f03c0 je 0x106f03d3 */
  if (C.zf) goto L_106f03d3;
  /* 106f03c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106f03c5 push eax */
  push32((uint32_t)(EAX));
  /* 106f03c6 call 0x106eb560 */
  push32(0x106f03cbu); f_106eb560();
  /* 106f03cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f03ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106f03d1 jmp 0x106f03d5 */
  goto L_106f03d5;
L_106f03d3:;
  /* 106f03d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106f03d5:;
  /* 106f03d5 pop esi */
  ESI = (pop32());
  /* 106f03d6 mov esp, ebp */
  ESP = (EBP);
  /* 106f03d8 pop ebp */
  EBP = (pop32());
  /* 106f03d9 ret  */
  ESPCHK(0x106f0330u, _esp0);
  ESP += 4; return;
}

/* FUN_100103e0 @ 0x106f03e0 (146 bytes, 52 insns) */
void f_106f03e0(void) {
  FTRACE(0x106f03e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106f03e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106f03e1 mov ebp, esp */
  EBP = (ESP);
  /* 106f03e3 push ebx */
  push32((uint32_t)(EBX));
  /* 106f03e4 push esi */
  push32((uint32_t)(ESI));
  /* 106f03e5 push edi */
  push32((uint32_t)(EDI));
L_106f03e6:;
  /* 106f03e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f03ea jne 0x106f040a */
  if (!C.zf) goto L_106f040a;
  /* 106f03ec push 0x1070b098 */
  push32((uint32_t)(0x1070b098u));
  /* 106f03f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106f03f3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 106f03f5 push 0x1070b760 */
  push32((uint32_t)(0x1070b760u));
  /* 106f03fa push 2 */
  push32((uint32_t)(0x2u));
  /* 106f03fc call 0x106e27f0 */
  push32(0x106f0401u); f_106e27f0();
  /* 106f0401 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f0404 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106f0407 jne 0x106f040a */
  if (!C.zf) goto L_106f040a;
  /* 106f0409 int3  */
  x86_unimpl("int3 @ 0x106f0409");
L_106f040a:;
  /* 106f040a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106f040c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106f040e jne 0x106f03e6 */
  if (!C.zf) goto L_106f03e6;
  /* 106f0410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0413 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106f0416 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 106f041c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106f041e je 0x106f046d */
  if (C.zf) goto L_106f046d;
  /* 106f0420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0423 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106f0426 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 106f0429 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106f042b je 0x106f046d */
  if (C.zf) goto L_106f046d;
  /* 106f042d push 2 */
  push32((uint32_t)(0x2u));
  /* 106f042f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0432 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106f0435 push eax */
  push32((uint32_t)(EAX));
  /* 106f0436 call 0x106e41c0 */
  push32(0x106f043bu); f_106e41c0();
  /* 106f043b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106f043e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0441 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106f0444 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 106f044a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f044d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106f0450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0453 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 106f0459 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f045c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 106f0463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106f0466 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_106f046d:;
  /* 106f046d pop edi */
  EDI = (pop32());
  /* 106f046e pop esi */
  ESI = (pop32());
  /* 106f046f pop ebx */
  EBX = (pop32());
  /* 106f0470 pop ebp */
  EBP = (pop32());
  /* 106f0471 ret  */
  ESPCHK(0x106f03e0u, _esp0);
  ESP += 4; return;
}

